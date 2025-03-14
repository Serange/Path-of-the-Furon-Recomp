#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822D0C14"))) PPC_WEAK_FUNC(sub_822D0C14);
PPC_FUNC_IMPL(__imp__sub_822D0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0C18"))) PPC_WEAK_FUNC(sub_822D0C18);
PPC_FUNC_IMPL(__imp__sub_822D0C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0c50
	if (!ctx.cr6.eq) goto loc_822D0C50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a1968
	ctx.lr = 0x822D0C44;
	sub_824A1968(ctx, base);
	// stw r3,-30604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30604, ctx.r3.u32);
	// bl 0x824a1a28
	ctx.lr = 0x822D0C4C;
	sub_824A1A28(ctx, base);
	// lwz r3,-30604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30604);
loc_822D0C50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0C64"))) PPC_WEAK_FUNC(sub_822D0C64);
PPC_FUNC_IMPL(__imp__sub_822D0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0C68"))) PPC_WEAK_FUNC(sub_822D0C68);
PPC_FUNC_IMPL(__imp__sub_822D0C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0ca0
	if (!ctx.cr6.eq) goto loc_822D0CA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a1b98
	ctx.lr = 0x822D0C94;
	sub_824A1B98(ctx, base);
	// stw r3,-30600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30600, ctx.r3.u32);
	// bl 0x824a1c58
	ctx.lr = 0x822D0C9C;
	sub_824A1C58(ctx, base);
	// lwz r3,-30600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30600);
loc_822D0CA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0CB4"))) PPC_WEAK_FUNC(sub_822D0CB4);
PPC_FUNC_IMPL(__imp__sub_822D0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0CB8"))) PPC_WEAK_FUNC(sub_822D0CB8);
PPC_FUNC_IMPL(__imp__sub_822D0CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822D0CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r29,r11,26648
	ctx.r29.s64 = ctx.r11.s64 + 26648;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,28920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28920, ctx.r10.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822D0D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-31885
	ctx.r5.s64 = -2089615360;
	// lwz r3,28924(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0d30
	if (ctx.cr6.eq) goto loc_822D0D30;
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
	ctx.lr = 0x822D0D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D30:
	// lwz r11,28920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x822d0d44
	if (!ctx.cr6.eq) goto loc_822D0D44;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_822D0D44:
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
	// bne cr6,0x822d0d80
	if (!ctx.cr6.eq) goto loc_822D0D80;
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
	ctx.lr = 0x822D0D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0D80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8274a700
	ctx.lr = 0x822D0D8C;
	sub_8274A700(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D0D94"))) PPC_WEAK_FUNC(sub_822D0D94);
PPC_FUNC_IMPL(__imp__sub_822D0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0D98"))) PPC_WEAK_FUNC(sub_822D0D98);
PPC_FUNC_IMPL(__imp__sub_822D0D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bne cr6,0x822d0dec
	if (!ctx.cr6.eq) goto loc_822D0DEC;
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
	ctx.lr = 0x822D0DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274a920
	ctx.lr = 0x822D0DF4;
	sub_8274A920(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0E08"))) PPC_WEAK_FUNC(sub_822D0E08);
PPC_FUNC_IMPL(__imp__sub_822D0E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-27396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0e40
	if (!ctx.cr6.eq) goto loc_822D0E40;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82749758
	ctx.lr = 0x822D0E34;
	sub_82749758(ctx, base);
	// stw r3,-27396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27396, ctx.r3.u32);
	// bl 0x82749818
	ctx.lr = 0x822D0E3C;
	sub_82749818(ctx, base);
	// lwz r3,-27396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27396);
loc_822D0E40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0E54"))) PPC_WEAK_FUNC(sub_822D0E54);
PPC_FUNC_IMPL(__imp__sub_822D0E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0E58"))) PPC_WEAK_FUNC(sub_822D0E58);
PPC_FUNC_IMPL(__imp__sub_822D0E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0e90
	if (!ctx.cr6.eq) goto loc_822D0E90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a2d18
	ctx.lr = 0x822D0E84;
	sub_824A2D18(ctx, base);
	// stw r3,-30568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30568, ctx.r3.u32);
	// bl 0x824a2dd8
	ctx.lr = 0x822D0E8C;
	sub_824A2DD8(ctx, base);
	// lwz r3,-30568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30568);
loc_822D0E90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0EA4"))) PPC_WEAK_FUNC(sub_822D0EA4);
PPC_FUNC_IMPL(__imp__sub_822D0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0EA8"))) PPC_WEAK_FUNC(sub_822D0EA8);
PPC_FUNC_IMPL(__imp__sub_822D0EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0ee0
	if (!ctx.cr6.eq) goto loc_822D0EE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a2f48
	ctx.lr = 0x822D0ED4;
	sub_824A2F48(ctx, base);
	// stw r3,-30564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30564, ctx.r3.u32);
	// bl 0x824a3008
	ctx.lr = 0x822D0EDC;
	sub_824A3008(ctx, base);
	// lwz r3,-30564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30564);
loc_822D0EE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0EF4"))) PPC_WEAK_FUNC(sub_822D0EF4);
PPC_FUNC_IMPL(__imp__sub_822D0EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0EF8"))) PPC_WEAK_FUNC(sub_822D0EF8);
PPC_FUNC_IMPL(__imp__sub_822D0EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0f30
	if (!ctx.cr6.eq) goto loc_822D0F30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a33a8
	ctx.lr = 0x822D0F24;
	sub_824A33A8(ctx, base);
	// stw r3,-30556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30556, ctx.r3.u32);
	// bl 0x824a3468
	ctx.lr = 0x822D0F2C;
	sub_824A3468(ctx, base);
	// lwz r3,-30556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30556);
loc_822D0F30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0F44"))) PPC_WEAK_FUNC(sub_822D0F44);
PPC_FUNC_IMPL(__imp__sub_822D0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0F48"))) PPC_WEAK_FUNC(sub_822D0F48);
PPC_FUNC_IMPL(__imp__sub_822D0F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d0f80
	if (!ctx.cr6.eq) goto loc_822D0F80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a35d8
	ctx.lr = 0x822D0F74;
	sub_824A35D8(ctx, base);
	// stw r3,-30552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30552, ctx.r3.u32);
	// bl 0x824a3698
	ctx.lr = 0x822D0F7C;
	sub_824A3698(ctx, base);
	// lwz r3,-30552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30552);
loc_822D0F80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D0F94"))) PPC_WEAK_FUNC(sub_822D0F94);
PPC_FUNC_IMPL(__imp__sub_822D0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D0F98"))) PPC_WEAK_FUNC(sub_822D0F98);
PPC_FUNC_IMPL(__imp__sub_822D0F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822D0FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r30,r11,26648
	ctx.r30.s64 = ctx.r11.s64 + 26648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
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
	ctx.lr = 0x822D0FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r6,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwz r10,28928(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28928);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,28928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28928, ctx.r10.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822D102C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x822d107c
	if (!ctx.cr6.eq) goto loc_822D107C;
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
	ctx.lr = 0x822D107C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D107C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824d3a78
	ctx.lr = 0x822D108C;
	sub_824D3A78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D1094"))) PPC_WEAK_FUNC(sub_822D1094);
PPC_FUNC_IMPL(__imp__sub_822D1094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1098"))) PPC_WEAK_FUNC(sub_822D1098);
PPC_FUNC_IMPL(__imp__sub_822D1098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822D10A0;
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
	ctx.lr = 0x822D10E4;
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
	// bne cr6,0x822d1120
	if (!ctx.cr6.eq) goto loc_822D1120;
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
	ctx.lr = 0x822D1120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D1120:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d3408
	ctx.lr = 0x822D112C;
	sub_824D3408(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D1134"))) PPC_WEAK_FUNC(sub_822D1134);
PPC_FUNC_IMPL(__imp__sub_822D1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1138"))) PPC_WEAK_FUNC(sub_822D1138);
PPC_FUNC_IMPL(__imp__sub_822D1138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1170
	if (!ctx.cr6.eq) goto loc_822D1170;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824caed0
	ctx.lr = 0x822D1164;
	sub_824CAED0(ctx, base);
	// stw r3,-30372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30372, ctx.r3.u32);
	// bl 0x824caf90
	ctx.lr = 0x822D116C;
	sub_824CAF90(ctx, base);
	// lwz r3,-30372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30372);
loc_822D1170:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1184"))) PPC_WEAK_FUNC(sub_822D1184);
PPC_FUNC_IMPL(__imp__sub_822D1184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1188"))) PPC_WEAK_FUNC(sub_822D1188);
PPC_FUNC_IMPL(__imp__sub_822D1188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d11c0
	if (!ctx.cr6.eq) goto loc_822D11C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a4758
	ctx.lr = 0x822D11B4;
	sub_824A4758(ctx, base);
	// stw r3,-30520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30520, ctx.r3.u32);
	// bl 0x824a4818
	ctx.lr = 0x822D11BC;
	sub_824A4818(ctx, base);
	// lwz r3,-30520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30520);
loc_822D11C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D11D4"))) PPC_WEAK_FUNC(sub_822D11D4);
PPC_FUNC_IMPL(__imp__sub_822D11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D11D8"))) PPC_WEAK_FUNC(sub_822D11D8);
PPC_FUNC_IMPL(__imp__sub_822D11D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1210
	if (!ctx.cr6.eq) goto loc_822D1210;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a4528
	ctx.lr = 0x822D1204;
	sub_824A4528(ctx, base);
	// stw r3,-30524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30524, ctx.r3.u32);
	// bl 0x824a45e8
	ctx.lr = 0x822D120C;
	sub_824A45E8(ctx, base);
	// lwz r3,-30524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30524);
loc_822D1210:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1224"))) PPC_WEAK_FUNC(sub_822D1224);
PPC_FUNC_IMPL(__imp__sub_822D1224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1228"))) PPC_WEAK_FUNC(sub_822D1228);
PPC_FUNC_IMPL(__imp__sub_822D1228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1260
	if (!ctx.cr6.eq) goto loc_822D1260;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a5018
	ctx.lr = 0x822D1254;
	sub_824A5018(ctx, base);
	// stw r3,-30504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30504, ctx.r3.u32);
	// bl 0x824a50d8
	ctx.lr = 0x822D125C;
	sub_824A50D8(ctx, base);
	// lwz r3,-30504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30504);
loc_822D1260:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1274"))) PPC_WEAK_FUNC(sub_822D1274);
PPC_FUNC_IMPL(__imp__sub_822D1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1278"))) PPC_WEAK_FUNC(sub_822D1278);
PPC_FUNC_IMPL(__imp__sub_822D1278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d12b0
	if (!ctx.cr6.eq) goto loc_822D12B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a4988
	ctx.lr = 0x822D12A4;
	sub_824A4988(ctx, base);
	// stw r3,-30516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30516, ctx.r3.u32);
	// bl 0x824a4a48
	ctx.lr = 0x822D12AC;
	sub_824A4A48(ctx, base);
	// lwz r3,-30516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30516);
loc_822D12B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D12C4"))) PPC_WEAK_FUNC(sub_822D12C4);
PPC_FUNC_IMPL(__imp__sub_822D12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D12C8"))) PPC_WEAK_FUNC(sub_822D12C8);
PPC_FUNC_IMPL(__imp__sub_822D12C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1300
	if (!ctx.cr6.eq) goto loc_822D1300;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a5478
	ctx.lr = 0x822D12F4;
	sub_824A5478(ctx, base);
	// stw r3,-30496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30496, ctx.r3.u32);
	// bl 0x824a5538
	ctx.lr = 0x822D12FC;
	sub_824A5538(ctx, base);
	// lwz r3,-30496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30496);
loc_822D1300:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1314"))) PPC_WEAK_FUNC(sub_822D1314);
PPC_FUNC_IMPL(__imp__sub_822D1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1318"))) PPC_WEAK_FUNC(sub_822D1318);
PPC_FUNC_IMPL(__imp__sub_822D1318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1350
	if (!ctx.cr6.eq) goto loc_822D1350;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a58d8
	ctx.lr = 0x822D1344;
	sub_824A58D8(ctx, base);
	// stw r3,-30488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30488, ctx.r3.u32);
	// bl 0x824a5998
	ctx.lr = 0x822D134C;
	sub_824A5998(ctx, base);
	// lwz r3,-30488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30488);
loc_822D1350:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1364"))) PPC_WEAK_FUNC(sub_822D1364);
PPC_FUNC_IMPL(__imp__sub_822D1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1368"))) PPC_WEAK_FUNC(sub_822D1368);
PPC_FUNC_IMPL(__imp__sub_822D1368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d13a0
	if (!ctx.cr6.eq) goto loc_822D13A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a5d38
	ctx.lr = 0x822D1394;
	sub_824A5D38(ctx, base);
	// stw r3,-30480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30480, ctx.r3.u32);
	// bl 0x824a5df8
	ctx.lr = 0x822D139C;
	sub_824A5DF8(ctx, base);
	// lwz r3,-30480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30480);
loc_822D13A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D13B4"))) PPC_WEAK_FUNC(sub_822D13B4);
PPC_FUNC_IMPL(__imp__sub_822D13B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D13B8"))) PPC_WEAK_FUNC(sub_822D13B8);
PPC_FUNC_IMPL(__imp__sub_822D13B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d13f0
	if (!ctx.cr6.eq) goto loc_822D13F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a6c88
	ctx.lr = 0x822D13E4;
	sub_824A6C88(ctx, base);
	// stw r3,-30452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30452, ctx.r3.u32);
	// bl 0x824a6d48
	ctx.lr = 0x822D13EC;
	sub_824A6D48(ctx, base);
	// lwz r3,-30452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30452);
loc_822D13F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1404"))) PPC_WEAK_FUNC(sub_822D1404);
PPC_FUNC_IMPL(__imp__sub_822D1404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1408"))) PPC_WEAK_FUNC(sub_822D1408);
PPC_FUNC_IMPL(__imp__sub_822D1408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1440
	if (!ctx.cr6.eq) goto loc_822D1440;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a6eb8
	ctx.lr = 0x822D1434;
	sub_824A6EB8(ctx, base);
	// stw r3,-30448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30448, ctx.r3.u32);
	// bl 0x824a6f78
	ctx.lr = 0x822D143C;
	sub_824A6F78(ctx, base);
	// lwz r3,-30448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30448);
loc_822D1440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1454"))) PPC_WEAK_FUNC(sub_822D1454);
PPC_FUNC_IMPL(__imp__sub_822D1454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1458"))) PPC_WEAK_FUNC(sub_822D1458);
PPC_FUNC_IMPL(__imp__sub_822D1458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1490
	if (!ctx.cr6.eq) goto loc_822D1490;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a91b8
	ctx.lr = 0x822D1484;
	sub_824A91B8(ctx, base);
	// stw r3,-30384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30384, ctx.r3.u32);
	// bl 0x824a9278
	ctx.lr = 0x822D148C;
	sub_824A9278(ctx, base);
	// lwz r3,-30384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30384);
loc_822D1490:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D14A4"))) PPC_WEAK_FUNC(sub_822D14A4);
PPC_FUNC_IMPL(__imp__sub_822D14A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D14A8"))) PPC_WEAK_FUNC(sub_822D14A8);
PPC_FUNC_IMPL(__imp__sub_822D14A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d14e0
	if (!ctx.cr6.eq) goto loc_822D14E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a4bb8
	ctx.lr = 0x822D14D4;
	sub_824A4BB8(ctx, base);
	// stw r3,-30512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30512, ctx.r3.u32);
	// bl 0x824a4c78
	ctx.lr = 0x822D14DC;
	sub_824A4C78(ctx, base);
	// lwz r3,-30512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30512);
loc_822D14E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D14F4"))) PPC_WEAK_FUNC(sub_822D14F4);
PPC_FUNC_IMPL(__imp__sub_822D14F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D14F8"))) PPC_WEAK_FUNC(sub_822D14F8);
PPC_FUNC_IMPL(__imp__sub_822D14F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1530
	if (!ctx.cr6.eq) goto loc_822D1530;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a1dc8
	ctx.lr = 0x822D1524;
	sub_824A1DC8(ctx, base);
	// stw r3,-30596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30596, ctx.r3.u32);
	// bl 0x824a1e88
	ctx.lr = 0x822D152C;
	sub_824A1E88(ctx, base);
	// lwz r3,-30596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30596);
loc_822D1530:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1544"))) PPC_WEAK_FUNC(sub_822D1544);
PPC_FUNC_IMPL(__imp__sub_822D1544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1548"))) PPC_WEAK_FUNC(sub_822D1548);
PPC_FUNC_IMPL(__imp__sub_822D1548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1580
	if (!ctx.cr6.eq) goto loc_822D1580;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a5248
	ctx.lr = 0x822D1574;
	sub_824A5248(ctx, base);
	// stw r3,-30500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30500, ctx.r3.u32);
	// bl 0x824a5308
	ctx.lr = 0x822D157C;
	sub_824A5308(ctx, base);
	// lwz r3,-30500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30500);
loc_822D1580:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1594"))) PPC_WEAK_FUNC(sub_822D1594);
PPC_FUNC_IMPL(__imp__sub_822D1594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1598"))) PPC_WEAK_FUNC(sub_822D1598);
PPC_FUNC_IMPL(__imp__sub_822D1598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d15d0
	if (!ctx.cr6.eq) goto loc_822D15D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a56a8
	ctx.lr = 0x822D15C4;
	sub_824A56A8(ctx, base);
	// stw r3,-30492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30492, ctx.r3.u32);
	// bl 0x824a5768
	ctx.lr = 0x822D15CC;
	sub_824A5768(ctx, base);
	// lwz r3,-30492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30492);
loc_822D15D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D15E4"))) PPC_WEAK_FUNC(sub_822D15E4);
PPC_FUNC_IMPL(__imp__sub_822D15E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D15E8"))) PPC_WEAK_FUNC(sub_822D15E8);
PPC_FUNC_IMPL(__imp__sub_822D15E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1620
	if (!ctx.cr6.eq) goto loc_822D1620;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a5b08
	ctx.lr = 0x822D1614;
	sub_824A5B08(ctx, base);
	// stw r3,-30484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30484, ctx.r3.u32);
	// bl 0x824a5bc8
	ctx.lr = 0x822D161C;
	sub_824A5BC8(ctx, base);
	// lwz r3,-30484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30484);
loc_822D1620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1634"))) PPC_WEAK_FUNC(sub_822D1634);
PPC_FUNC_IMPL(__imp__sub_822D1634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1638"))) PPC_WEAK_FUNC(sub_822D1638);
PPC_FUNC_IMPL(__imp__sub_822D1638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1670
	if (!ctx.cr6.eq) goto loc_822D1670;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a6198
	ctx.lr = 0x822D1664;
	sub_824A6198(ctx, base);
	// stw r3,-30472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30472, ctx.r3.u32);
	// bl 0x824a6258
	ctx.lr = 0x822D166C;
	sub_824A6258(ctx, base);
	// lwz r3,-30472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30472);
loc_822D1670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1684"))) PPC_WEAK_FUNC(sub_822D1684);
PPC_FUNC_IMPL(__imp__sub_822D1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1688"))) PPC_WEAK_FUNC(sub_822D1688);
PPC_FUNC_IMPL(__imp__sub_822D1688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d16c0
	if (!ctx.cr6.eq) goto loc_822D16C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a63c8
	ctx.lr = 0x822D16B4;
	sub_824A63C8(ctx, base);
	// stw r3,-30468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30468, ctx.r3.u32);
	// bl 0x824a6488
	ctx.lr = 0x822D16BC;
	sub_824A6488(ctx, base);
	// lwz r3,-30468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30468);
loc_822D16C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D16D4"))) PPC_WEAK_FUNC(sub_822D16D4);
PPC_FUNC_IMPL(__imp__sub_822D16D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D16D8"))) PPC_WEAK_FUNC(sub_822D16D8);
PPC_FUNC_IMPL(__imp__sub_822D16D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1710
	if (!ctx.cr6.eq) goto loc_822D1710;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a65f8
	ctx.lr = 0x822D1704;
	sub_824A65F8(ctx, base);
	// stw r3,-30464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30464, ctx.r3.u32);
	// bl 0x824a66b8
	ctx.lr = 0x822D170C;
	sub_824A66B8(ctx, base);
	// lwz r3,-30464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30464);
loc_822D1710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1724"))) PPC_WEAK_FUNC(sub_822D1724);
PPC_FUNC_IMPL(__imp__sub_822D1724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1728"))) PPC_WEAK_FUNC(sub_822D1728);
PPC_FUNC_IMPL(__imp__sub_822D1728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1760
	if (!ctx.cr6.eq) goto loc_822D1760;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a7548
	ctx.lr = 0x822D1754;
	sub_824A7548(ctx, base);
	// stw r3,-30436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30436, ctx.r3.u32);
	// bl 0x824a7608
	ctx.lr = 0x822D175C;
	sub_824A7608(ctx, base);
	// lwz r3,-30436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30436);
loc_822D1760:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1774"))) PPC_WEAK_FUNC(sub_822D1774);
PPC_FUNC_IMPL(__imp__sub_822D1774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1778"))) PPC_WEAK_FUNC(sub_822D1778);
PPC_FUNC_IMPL(__imp__sub_822D1778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d17b0
	if (!ctx.cr6.eq) goto loc_822D17B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a7778
	ctx.lr = 0x822D17A4;
	sub_824A7778(ctx, base);
	// stw r3,-30432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30432, ctx.r3.u32);
	// bl 0x824a7838
	ctx.lr = 0x822D17AC;
	sub_824A7838(ctx, base);
	// lwz r3,-30432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30432);
loc_822D17B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D17C4"))) PPC_WEAK_FUNC(sub_822D17C4);
PPC_FUNC_IMPL(__imp__sub_822D17C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D17C8"))) PPC_WEAK_FUNC(sub_822D17C8);
PPC_FUNC_IMPL(__imp__sub_822D17C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1800
	if (!ctx.cr6.eq) goto loc_822D1800;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a79a8
	ctx.lr = 0x822D17F4;
	sub_824A79A8(ctx, base);
	// stw r3,-30428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30428, ctx.r3.u32);
	// bl 0x824a7a68
	ctx.lr = 0x822D17FC;
	sub_824A7A68(ctx, base);
	// lwz r3,-30428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30428);
loc_822D1800:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1814"))) PPC_WEAK_FUNC(sub_822D1814);
PPC_FUNC_IMPL(__imp__sub_822D1814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1818"))) PPC_WEAK_FUNC(sub_822D1818);
PPC_FUNC_IMPL(__imp__sub_822D1818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1850
	if (!ctx.cr6.eq) goto loc_822D1850;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a7bd8
	ctx.lr = 0x822D1844;
	sub_824A7BD8(ctx, base);
	// stw r3,-30424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30424, ctx.r3.u32);
	// bl 0x824a7c98
	ctx.lr = 0x822D184C;
	sub_824A7C98(ctx, base);
	// lwz r3,-30424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30424);
loc_822D1850:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1864"))) PPC_WEAK_FUNC(sub_822D1864);
PPC_FUNC_IMPL(__imp__sub_822D1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1868"))) PPC_WEAK_FUNC(sub_822D1868);
PPC_FUNC_IMPL(__imp__sub_822D1868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d18a0
	if (!ctx.cr6.eq) goto loc_822D18A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249a9d8
	ctx.lr = 0x822D1894;
	sub_8249A9D8(ctx, base);
	// stw r3,-30808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30808, ctx.r3.u32);
	// bl 0x8249aa98
	ctx.lr = 0x822D189C;
	sub_8249AA98(ctx, base);
	// lwz r3,-30808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30808);
loc_822D18A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D18B4"))) PPC_WEAK_FUNC(sub_822D18B4);
PPC_FUNC_IMPL(__imp__sub_822D18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D18B8"))) PPC_WEAK_FUNC(sub_822D18B8);
PPC_FUNC_IMPL(__imp__sub_822D18B8) {
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
	// bne cr6,0x822d1914
	if (!ctx.cr6.eq) goto loc_822D1914;
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
	ctx.lr = 0x822D1914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D1914:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822D192C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_822D194C"))) PPC_WEAK_FUNC(sub_822D194C);
PPC_FUNC_IMPL(__imp__sub_822D194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1950"))) PPC_WEAK_FUNC(sub_822D1950);
PPC_FUNC_IMPL(__imp__sub_822D1950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-26132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1988
	if (!ctx.cr6.eq) goto loc_822D1988;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827cbaf0
	ctx.lr = 0x822D197C;
	sub_827CBAF0(ctx, base);
	// stw r3,-26132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26132, ctx.r3.u32);
	// bl 0x827cbbb0
	ctx.lr = 0x822D1984;
	sub_827CBBB0(ctx, base);
	// lwz r3,-26132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26132);
loc_822D1988:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D199C"))) PPC_WEAK_FUNC(sub_822D199C);
PPC_FUNC_IMPL(__imp__sub_822D199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D19A0"))) PPC_WEAK_FUNC(sub_822D19A0);
PPC_FUNC_IMPL(__imp__sub_822D19A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-27472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d19d8
	if (!ctx.cr6.eq) goto loc_822D19D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82730ff0
	ctx.lr = 0x822D19CC;
	sub_82730FF0(ctx, base);
	// stw r3,-27472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27472, ctx.r3.u32);
	// bl 0x827310b0
	ctx.lr = 0x822D19D4;
	sub_827310B0(ctx, base);
	// lwz r3,-27472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27472);
loc_822D19D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D19EC"))) PPC_WEAK_FUNC(sub_822D19EC);
PPC_FUNC_IMPL(__imp__sub_822D19EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D19F0"))) PPC_WEAK_FUNC(sub_822D19F0);
PPC_FUNC_IMPL(__imp__sub_822D19F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1a28
	if (!ctx.cr6.eq) goto loc_822D1A28;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824cb100
	ctx.lr = 0x822D1A1C;
	sub_824CB100(ctx, base);
	// stw r3,-30368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30368, ctx.r3.u32);
	// bl 0x824cb1c0
	ctx.lr = 0x822D1A24;
	sub_824CB1C0(ctx, base);
	// lwz r3,-30368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30368);
loc_822D1A28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1A3C"))) PPC_WEAK_FUNC(sub_822D1A3C);
PPC_FUNC_IMPL(__imp__sub_822D1A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1A40"))) PPC_WEAK_FUNC(sub_822D1A40);
PPC_FUNC_IMPL(__imp__sub_822D1A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1a78
	if (!ctx.cr6.eq) goto loc_822D1A78;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249ac08
	ctx.lr = 0x822D1A6C;
	sub_8249AC08(ctx, base);
	// stw r3,-30804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30804, ctx.r3.u32);
	// bl 0x8249acc8
	ctx.lr = 0x822D1A74;
	sub_8249ACC8(ctx, base);
	// lwz r3,-30804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30804);
loc_822D1A78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1A8C"))) PPC_WEAK_FUNC(sub_822D1A8C);
PPC_FUNC_IMPL(__imp__sub_822D1A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1A90"))) PPC_WEAK_FUNC(sub_822D1A90);
PPC_FUNC_IMPL(__imp__sub_822D1A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1ac8
	if (!ctx.cr6.eq) goto loc_822D1AC8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249ae38
	ctx.lr = 0x822D1ABC;
	sub_8249AE38(ctx, base);
	// stw r3,-30800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30800, ctx.r3.u32);
	// bl 0x8249aef8
	ctx.lr = 0x822D1AC4;
	sub_8249AEF8(ctx, base);
	// lwz r3,-30800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30800);
loc_822D1AC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1ADC"))) PPC_WEAK_FUNC(sub_822D1ADC);
PPC_FUNC_IMPL(__imp__sub_822D1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1AE0"))) PPC_WEAK_FUNC(sub_822D1AE0);
PPC_FUNC_IMPL(__imp__sub_822D1AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1b18
	if (!ctx.cr6.eq) goto loc_822D1B18;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249b068
	ctx.lr = 0x822D1B0C;
	sub_8249B068(ctx, base);
	// stw r3,-30796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30796, ctx.r3.u32);
	// bl 0x8249b128
	ctx.lr = 0x822D1B14;
	sub_8249B128(ctx, base);
	// lwz r3,-30796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30796);
loc_822D1B18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1B2C"))) PPC_WEAK_FUNC(sub_822D1B2C);
PPC_FUNC_IMPL(__imp__sub_822D1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1B30"))) PPC_WEAK_FUNC(sub_822D1B30);
PPC_FUNC_IMPL(__imp__sub_822D1B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1b68
	if (!ctx.cr6.eq) goto loc_822D1B68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249c1e8
	ctx.lr = 0x822D1B5C;
	sub_8249C1E8(ctx, base);
	// stw r3,-30764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30764, ctx.r3.u32);
	// bl 0x8249c2a8
	ctx.lr = 0x822D1B64;
	sub_8249C2A8(ctx, base);
	// lwz r3,-30764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30764);
loc_822D1B68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1B7C"))) PPC_WEAK_FUNC(sub_822D1B7C);
PPC_FUNC_IMPL(__imp__sub_822D1B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1B80"))) PPC_WEAK_FUNC(sub_822D1B80);
PPC_FUNC_IMPL(__imp__sub_822D1B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1bb8
	if (!ctx.cr6.eq) goto loc_822D1BB8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249b298
	ctx.lr = 0x822D1BAC;
	sub_8249B298(ctx, base);
	// stw r3,-30792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30792, ctx.r3.u32);
	// bl 0x8249b358
	ctx.lr = 0x822D1BB4;
	sub_8249B358(ctx, base);
	// lwz r3,-30792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30792);
loc_822D1BB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1BCC"))) PPC_WEAK_FUNC(sub_822D1BCC);
PPC_FUNC_IMPL(__imp__sub_822D1BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1BD0"))) PPC_WEAK_FUNC(sub_822D1BD0);
PPC_FUNC_IMPL(__imp__sub_822D1BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1c08
	if (!ctx.cr6.eq) goto loc_822D1C08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249c418
	ctx.lr = 0x822D1BFC;
	sub_8249C418(ctx, base);
	// stw r3,-30760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30760, ctx.r3.u32);
	// bl 0x8249c4d8
	ctx.lr = 0x822D1C04;
	sub_8249C4D8(ctx, base);
	// lwz r3,-30760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30760);
loc_822D1C08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1C1C"))) PPC_WEAK_FUNC(sub_822D1C1C);
PPC_FUNC_IMPL(__imp__sub_822D1C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1C20"))) PPC_WEAK_FUNC(sub_822D1C20);
PPC_FUNC_IMPL(__imp__sub_822D1C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30788);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1c58
	if (!ctx.cr6.eq) goto loc_822D1C58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249b4c8
	ctx.lr = 0x822D1C4C;
	sub_8249B4C8(ctx, base);
	// stw r3,-30788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30788, ctx.r3.u32);
	// bl 0x8249b588
	ctx.lr = 0x822D1C54;
	sub_8249B588(ctx, base);
	// lwz r3,-30788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30788);
loc_822D1C58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1C6C"))) PPC_WEAK_FUNC(sub_822D1C6C);
PPC_FUNC_IMPL(__imp__sub_822D1C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1C70"))) PPC_WEAK_FUNC(sub_822D1C70);
PPC_FUNC_IMPL(__imp__sub_822D1C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1ca8
	if (!ctx.cr6.eq) goto loc_822D1CA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249b6f8
	ctx.lr = 0x822D1C9C;
	sub_8249B6F8(ctx, base);
	// stw r3,-30784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30784, ctx.r3.u32);
	// bl 0x8249b7b8
	ctx.lr = 0x822D1CA4;
	sub_8249B7B8(ctx, base);
	// lwz r3,-30784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30784);
loc_822D1CA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1CBC"))) PPC_WEAK_FUNC(sub_822D1CBC);
PPC_FUNC_IMPL(__imp__sub_822D1CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1CC0"))) PPC_WEAK_FUNC(sub_822D1CC0);
PPC_FUNC_IMPL(__imp__sub_822D1CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1cf8
	if (!ctx.cr6.eq) goto loc_822D1CF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249b928
	ctx.lr = 0x822D1CEC;
	sub_8249B928(ctx, base);
	// stw r3,-30780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30780, ctx.r3.u32);
	// bl 0x8249b9e8
	ctx.lr = 0x822D1CF4;
	sub_8249B9E8(ctx, base);
	// lwz r3,-30780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30780);
loc_822D1CF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1D0C"))) PPC_WEAK_FUNC(sub_822D1D0C);
PPC_FUNC_IMPL(__imp__sub_822D1D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1D10"))) PPC_WEAK_FUNC(sub_822D1D10);
PPC_FUNC_IMPL(__imp__sub_822D1D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-27404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1d48
	if (!ctx.cr6.eq) goto loc_822D1D48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827492f8
	ctx.lr = 0x822D1D3C;
	sub_827492F8(ctx, base);
	// stw r3,-27404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27404, ctx.r3.u32);
	// bl 0x827493b8
	ctx.lr = 0x822D1D44;
	sub_827493B8(ctx, base);
	// lwz r3,-27404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27404);
loc_822D1D48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1D5C"))) PPC_WEAK_FUNC(sub_822D1D5C);
PPC_FUNC_IMPL(__imp__sub_822D1D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1D60"))) PPC_WEAK_FUNC(sub_822D1D60);
PPC_FUNC_IMPL(__imp__sub_822D1D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-27400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1d98
	if (!ctx.cr6.eq) goto loc_822D1D98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82749528
	ctx.lr = 0x822D1D8C;
	sub_82749528(ctx, base);
	// stw r3,-27400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27400, ctx.r3.u32);
	// bl 0x827495e8
	ctx.lr = 0x822D1D94;
	sub_827495E8(ctx, base);
	// lwz r3,-27400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27400);
loc_822D1D98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1DAC"))) PPC_WEAK_FUNC(sub_822D1DAC);
PPC_FUNC_IMPL(__imp__sub_822D1DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1DB0"))) PPC_WEAK_FUNC(sub_822D1DB0);
PPC_FUNC_IMPL(__imp__sub_822D1DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1de8
	if (!ctx.cr6.eq) goto loc_822D1DE8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249bb58
	ctx.lr = 0x822D1DDC;
	sub_8249BB58(ctx, base);
	// stw r3,-30776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30776, ctx.r3.u32);
	// bl 0x8249bc18
	ctx.lr = 0x822D1DE4;
	sub_8249BC18(ctx, base);
	// lwz r3,-30776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30776);
loc_822D1DE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1DFC"))) PPC_WEAK_FUNC(sub_822D1DFC);
PPC_FUNC_IMPL(__imp__sub_822D1DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1E00"))) PPC_WEAK_FUNC(sub_822D1E00);
PPC_FUNC_IMPL(__imp__sub_822D1E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1e38
	if (!ctx.cr6.eq) goto loc_822D1E38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249bd88
	ctx.lr = 0x822D1E2C;
	sub_8249BD88(ctx, base);
	// stw r3,-30772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30772, ctx.r3.u32);
	// bl 0x8249be48
	ctx.lr = 0x822D1E34;
	sub_8249BE48(ctx, base);
	// lwz r3,-30772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30772);
loc_822D1E38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1E4C"))) PPC_WEAK_FUNC(sub_822D1E4C);
PPC_FUNC_IMPL(__imp__sub_822D1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1E50"))) PPC_WEAK_FUNC(sub_822D1E50);
PPC_FUNC_IMPL(__imp__sub_822D1E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1e88
	if (!ctx.cr6.eq) goto loc_822D1E88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249bfb8
	ctx.lr = 0x822D1E7C;
	sub_8249BFB8(ctx, base);
	// stw r3,-30768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30768, ctx.r3.u32);
	// bl 0x8249c078
	ctx.lr = 0x822D1E84;
	sub_8249C078(ctx, base);
	// lwz r3,-30768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30768);
loc_822D1E88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1E9C"))) PPC_WEAK_FUNC(sub_822D1E9C);
PPC_FUNC_IMPL(__imp__sub_822D1E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1EA0"))) PPC_WEAK_FUNC(sub_822D1EA0);
PPC_FUNC_IMPL(__imp__sub_822D1EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1ed8
	if (!ctx.cr6.eq) goto loc_822D1ED8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249c648
	ctx.lr = 0x822D1ECC;
	sub_8249C648(ctx, base);
	// stw r3,-30756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30756, ctx.r3.u32);
	// bl 0x8249c708
	ctx.lr = 0x822D1ED4;
	sub_8249C708(ctx, base);
	// lwz r3,-30756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30756);
loc_822D1ED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1EEC"))) PPC_WEAK_FUNC(sub_822D1EEC);
PPC_FUNC_IMPL(__imp__sub_822D1EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1EF0"))) PPC_WEAK_FUNC(sub_822D1EF0);
PPC_FUNC_IMPL(__imp__sub_822D1EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1f28
	if (!ctx.cr6.eq) goto loc_822D1F28;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249caa8
	ctx.lr = 0x822D1F1C;
	sub_8249CAA8(ctx, base);
	// stw r3,-30748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30748, ctx.r3.u32);
	// bl 0x8249cb68
	ctx.lr = 0x822D1F24;
	sub_8249CB68(ctx, base);
	// lwz r3,-30748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30748);
loc_822D1F28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1F3C"))) PPC_WEAK_FUNC(sub_822D1F3C);
PPC_FUNC_IMPL(__imp__sub_822D1F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1F40"))) PPC_WEAK_FUNC(sub_822D1F40);
PPC_FUNC_IMPL(__imp__sub_822D1F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1f78
	if (!ctx.cr6.eq) goto loc_822D1F78;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249c878
	ctx.lr = 0x822D1F6C;
	sub_8249C878(ctx, base);
	// stw r3,-30752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30752, ctx.r3.u32);
	// bl 0x8249c938
	ctx.lr = 0x822D1F74;
	sub_8249C938(ctx, base);
	// lwz r3,-30752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30752);
loc_822D1F78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1F8C"))) PPC_WEAK_FUNC(sub_822D1F8C);
PPC_FUNC_IMPL(__imp__sub_822D1F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1F90"))) PPC_WEAK_FUNC(sub_822D1F90);
PPC_FUNC_IMPL(__imp__sub_822D1F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-27392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d1fc8
	if (!ctx.cr6.eq) goto loc_822D1FC8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82749988
	ctx.lr = 0x822D1FBC;
	sub_82749988(ctx, base);
	// stw r3,-27392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27392, ctx.r3.u32);
	// bl 0x82749a48
	ctx.lr = 0x822D1FC4;
	sub_82749A48(ctx, base);
	// lwz r3,-27392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27392);
loc_822D1FC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D1FDC"))) PPC_WEAK_FUNC(sub_822D1FDC);
PPC_FUNC_IMPL(__imp__sub_822D1FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D1FE0"))) PPC_WEAK_FUNC(sub_822D1FE0);
PPC_FUNC_IMPL(__imp__sub_822D1FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2018
	if (!ctx.cr6.eq) goto loc_822D2018;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a8038
	ctx.lr = 0x822D200C;
	sub_824A8038(ctx, base);
	// stw r3,-30416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30416, ctx.r3.u32);
	// bl 0x824a80f8
	ctx.lr = 0x822D2014;
	sub_824A80F8(ctx, base);
	// lwz r3,-30416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30416);
loc_822D2018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D202C"))) PPC_WEAK_FUNC(sub_822D202C);
PPC_FUNC_IMPL(__imp__sub_822D202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2030"))) PPC_WEAK_FUNC(sub_822D2030);
PPC_FUNC_IMPL(__imp__sub_822D2030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2068
	if (!ctx.cr6.eq) goto loc_822D2068;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a8268
	ctx.lr = 0x822D205C;
	sub_824A8268(ctx, base);
	// stw r3,-30412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30412, ctx.r3.u32);
	// bl 0x824a8328
	ctx.lr = 0x822D2064;
	sub_824A8328(ctx, base);
	// lwz r3,-30412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30412);
loc_822D2068:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D207C"))) PPC_WEAK_FUNC(sub_822D207C);
PPC_FUNC_IMPL(__imp__sub_822D207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2080"))) PPC_WEAK_FUNC(sub_822D2080);
PPC_FUNC_IMPL(__imp__sub_822D2080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d20b8
	if (!ctx.cr6.eq) goto loc_822D20B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a6828
	ctx.lr = 0x822D20AC;
	sub_824A6828(ctx, base);
	// stw r3,-30460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30460, ctx.r3.u32);
	// bl 0x824a68e8
	ctx.lr = 0x822D20B4;
	sub_824A68E8(ctx, base);
	// lwz r3,-30460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30460);
loc_822D20B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D20CC"))) PPC_WEAK_FUNC(sub_822D20CC);
PPC_FUNC_IMPL(__imp__sub_822D20CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D20D0"))) PPC_WEAK_FUNC(sub_822D20D0);
PPC_FUNC_IMPL(__imp__sub_822D20D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2108
	if (!ctx.cr6.eq) goto loc_822D2108;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a4de8
	ctx.lr = 0x822D20FC;
	sub_824A4DE8(ctx, base);
	// stw r3,-30508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30508, ctx.r3.u32);
	// bl 0x824a4ea8
	ctx.lr = 0x822D2104;
	sub_824A4EA8(ctx, base);
	// lwz r3,-30508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30508);
loc_822D2108:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D211C"))) PPC_WEAK_FUNC(sub_822D211C);
PPC_FUNC_IMPL(__imp__sub_822D211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2120"))) PPC_WEAK_FUNC(sub_822D2120);
PPC_FUNC_IMPL(__imp__sub_822D2120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2158
	if (!ctx.cr6.eq) goto loc_822D2158;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a6a58
	ctx.lr = 0x822D214C;
	sub_824A6A58(ctx, base);
	// stw r3,-30456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30456, ctx.r3.u32);
	// bl 0x824a6b18
	ctx.lr = 0x822D2154;
	sub_824A6B18(ctx, base);
	// lwz r3,-30456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30456);
loc_822D2158:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D216C"))) PPC_WEAK_FUNC(sub_822D216C);
PPC_FUNC_IMPL(__imp__sub_822D216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2170"))) PPC_WEAK_FUNC(sub_822D2170);
PPC_FUNC_IMPL(__imp__sub_822D2170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d21a8
	if (!ctx.cr6.eq) goto loc_822D21A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a70e8
	ctx.lr = 0x822D219C;
	sub_824A70E8(ctx, base);
	// stw r3,-30444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30444, ctx.r3.u32);
	// bl 0x824a71a8
	ctx.lr = 0x822D21A4;
	sub_824A71A8(ctx, base);
	// lwz r3,-30444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30444);
loc_822D21A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D21BC"))) PPC_WEAK_FUNC(sub_822D21BC);
PPC_FUNC_IMPL(__imp__sub_822D21BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D21C0"))) PPC_WEAK_FUNC(sub_822D21C0);
PPC_FUNC_IMPL(__imp__sub_822D21C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d21f8
	if (!ctx.cr6.eq) goto loc_822D21F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a7318
	ctx.lr = 0x822D21EC;
	sub_824A7318(ctx, base);
	// stw r3,-30440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30440, ctx.r3.u32);
	// bl 0x824a73d8
	ctx.lr = 0x822D21F4;
	sub_824A73D8(ctx, base);
	// lwz r3,-30440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30440);
loc_822D21F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D220C"))) PPC_WEAK_FUNC(sub_822D220C);
PPC_FUNC_IMPL(__imp__sub_822D220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2210"))) PPC_WEAK_FUNC(sub_822D2210);
PPC_FUNC_IMPL(__imp__sub_822D2210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2248
	if (!ctx.cr6.eq) goto loc_822D2248;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a7e08
	ctx.lr = 0x822D223C;
	sub_824A7E08(ctx, base);
	// stw r3,-30420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30420, ctx.r3.u32);
	// bl 0x824a7ec8
	ctx.lr = 0x822D2244;
	sub_824A7EC8(ctx, base);
	// lwz r3,-30420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30420);
loc_822D2248:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D225C"))) PPC_WEAK_FUNC(sub_822D225C);
PPC_FUNC_IMPL(__imp__sub_822D225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2260"))) PPC_WEAK_FUNC(sub_822D2260);
PPC_FUNC_IMPL(__imp__sub_822D2260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2298
	if (!ctx.cr6.eq) goto loc_822D2298;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a8498
	ctx.lr = 0x822D228C;
	sub_824A8498(ctx, base);
	// stw r3,-30408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30408, ctx.r3.u32);
	// bl 0x824a8558
	ctx.lr = 0x822D2294;
	sub_824A8558(ctx, base);
	// lwz r3,-30408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30408);
loc_822D2298:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D22AC"))) PPC_WEAK_FUNC(sub_822D22AC);
PPC_FUNC_IMPL(__imp__sub_822D22AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D22B0"))) PPC_WEAK_FUNC(sub_822D22B0);
PPC_FUNC_IMPL(__imp__sub_822D22B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d22e8
	if (!ctx.cr6.eq) goto loc_822D22E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a86c8
	ctx.lr = 0x822D22DC;
	sub_824A86C8(ctx, base);
	// stw r3,-30404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30404, ctx.r3.u32);
	// bl 0x824a8788
	ctx.lr = 0x822D22E4;
	sub_824A8788(ctx, base);
	// lwz r3,-30404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30404);
loc_822D22E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D22FC"))) PPC_WEAK_FUNC(sub_822D22FC);
PPC_FUNC_IMPL(__imp__sub_822D22FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2300"))) PPC_WEAK_FUNC(sub_822D2300);
PPC_FUNC_IMPL(__imp__sub_822D2300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2338
	if (!ctx.cr6.eq) goto loc_822D2338;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a5f68
	ctx.lr = 0x822D232C;
	sub_824A5F68(ctx, base);
	// stw r3,-30476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30476, ctx.r3.u32);
	// bl 0x824a6028
	ctx.lr = 0x822D2334;
	sub_824A6028(ctx, base);
	// lwz r3,-30476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30476);
loc_822D2338:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D234C"))) PPC_WEAK_FUNC(sub_822D234C);
PPC_FUNC_IMPL(__imp__sub_822D234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2350"))) PPC_WEAK_FUNC(sub_822D2350);
PPC_FUNC_IMPL(__imp__sub_822D2350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2388
	if (!ctx.cr6.eq) goto loc_822D2388;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a88f8
	ctx.lr = 0x822D237C;
	sub_824A88F8(ctx, base);
	// stw r3,-30400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30400, ctx.r3.u32);
	// bl 0x824a89b8
	ctx.lr = 0x822D2384;
	sub_824A89B8(ctx, base);
	// lwz r3,-30400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30400);
loc_822D2388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D239C"))) PPC_WEAK_FUNC(sub_822D239C);
PPC_FUNC_IMPL(__imp__sub_822D239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D23A0"))) PPC_WEAK_FUNC(sub_822D23A0);
PPC_FUNC_IMPL(__imp__sub_822D23A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d23d8
	if (!ctx.cr6.eq) goto loc_822D23D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a8b28
	ctx.lr = 0x822D23CC;
	sub_824A8B28(ctx, base);
	// stw r3,-30396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30396, ctx.r3.u32);
	// bl 0x824a8be8
	ctx.lr = 0x822D23D4;
	sub_824A8BE8(ctx, base);
	// lwz r3,-30396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30396);
loc_822D23D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D23EC"))) PPC_WEAK_FUNC(sub_822D23EC);
PPC_FUNC_IMPL(__imp__sub_822D23EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D23F0"))) PPC_WEAK_FUNC(sub_822D23F0);
PPC_FUNC_IMPL(__imp__sub_822D23F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2428
	if (!ctx.cr6.eq) goto loc_822D2428;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a8d58
	ctx.lr = 0x822D241C;
	sub_824A8D58(ctx, base);
	// stw r3,-30392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30392, ctx.r3.u32);
	// bl 0x824a8e18
	ctx.lr = 0x822D2424;
	sub_824A8E18(ctx, base);
	// lwz r3,-30392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30392);
loc_822D2428:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D243C"))) PPC_WEAK_FUNC(sub_822D243C);
PPC_FUNC_IMPL(__imp__sub_822D243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2440"))) PPC_WEAK_FUNC(sub_822D2440);
PPC_FUNC_IMPL(__imp__sub_822D2440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2478
	if (!ctx.cr6.eq) goto loc_822D2478;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a8f88
	ctx.lr = 0x822D246C;
	sub_824A8F88(ctx, base);
	// stw r3,-30388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30388, ctx.r3.u32);
	// bl 0x824a9048
	ctx.lr = 0x822D2474;
	sub_824A9048(ctx, base);
	// lwz r3,-30388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30388);
loc_822D2478:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D248C"))) PPC_WEAK_FUNC(sub_822D248C);
PPC_FUNC_IMPL(__imp__sub_822D248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2490"))) PPC_WEAK_FUNC(sub_822D2490);
PPC_FUNC_IMPL(__imp__sub_822D2490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d24c8
	if (!ctx.cr6.eq) goto loc_822D24C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82499cc0
	ctx.lr = 0x822D24BC;
	sub_82499CC0(ctx, base);
	// stw r3,-30832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30832, ctx.r3.u32);
	// bl 0x82499d80
	ctx.lr = 0x822D24C4;
	sub_82499D80(ctx, base);
	// lwz r3,-30832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30832);
loc_822D24C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D24DC"))) PPC_WEAK_FUNC(sub_822D24DC);
PPC_FUNC_IMPL(__imp__sub_822D24DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D24E0"))) PPC_WEAK_FUNC(sub_822D24E0);
PPC_FUNC_IMPL(__imp__sub_822D24E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2518
	if (!ctx.cr6.eq) goto loc_822D2518;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249ccd8
	ctx.lr = 0x822D250C;
	sub_8249CCD8(ctx, base);
	// stw r3,-30744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30744, ctx.r3.u32);
	// bl 0x8249cd98
	ctx.lr = 0x822D2514;
	sub_8249CD98(ctx, base);
	// lwz r3,-30744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30744);
loc_822D2518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D252C"))) PPC_WEAK_FUNC(sub_822D252C);
PPC_FUNC_IMPL(__imp__sub_822D252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2530"))) PPC_WEAK_FUNC(sub_822D2530);
PPC_FUNC_IMPL(__imp__sub_822D2530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2568
	if (!ctx.cr6.eq) goto loc_822D2568;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249d138
	ctx.lr = 0x822D255C;
	sub_8249D138(ctx, base);
	// stw r3,-30736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30736, ctx.r3.u32);
	// bl 0x8249d1f8
	ctx.lr = 0x822D2564;
	sub_8249D1F8(ctx, base);
	// lwz r3,-30736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30736);
loc_822D2568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D257C"))) PPC_WEAK_FUNC(sub_822D257C);
PPC_FUNC_IMPL(__imp__sub_822D257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2580"))) PPC_WEAK_FUNC(sub_822D2580);
PPC_FUNC_IMPL(__imp__sub_822D2580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30732);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d25b8
	if (!ctx.cr6.eq) goto loc_822D25B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249d368
	ctx.lr = 0x822D25AC;
	sub_8249D368(ctx, base);
	// stw r3,-30732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30732, ctx.r3.u32);
	// bl 0x8249d428
	ctx.lr = 0x822D25B4;
	sub_8249D428(ctx, base);
	// lwz r3,-30732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30732);
loc_822D25B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D25CC"))) PPC_WEAK_FUNC(sub_822D25CC);
PPC_FUNC_IMPL(__imp__sub_822D25CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D25D0"))) PPC_WEAK_FUNC(sub_822D25D0);
PPC_FUNC_IMPL(__imp__sub_822D25D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2608
	if (!ctx.cr6.eq) goto loc_822D2608;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249d598
	ctx.lr = 0x822D25FC;
	sub_8249D598(ctx, base);
	// stw r3,-30728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30728, ctx.r3.u32);
	// bl 0x8249d658
	ctx.lr = 0x822D2604;
	sub_8249D658(ctx, base);
	// lwz r3,-30728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30728);
loc_822D2608:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D261C"))) PPC_WEAK_FUNC(sub_822D261C);
PPC_FUNC_IMPL(__imp__sub_822D261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2620"))) PPC_WEAK_FUNC(sub_822D2620);
PPC_FUNC_IMPL(__imp__sub_822D2620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2658
	if (!ctx.cr6.eq) goto loc_822D2658;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249cf08
	ctx.lr = 0x822D264C;
	sub_8249CF08(ctx, base);
	// stw r3,-30740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30740, ctx.r3.u32);
	// bl 0x8249cfc8
	ctx.lr = 0x822D2654;
	sub_8249CFC8(ctx, base);
	// lwz r3,-30740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30740);
loc_822D2658:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D266C"))) PPC_WEAK_FUNC(sub_822D266C);
PPC_FUNC_IMPL(__imp__sub_822D266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2670"))) PPC_WEAK_FUNC(sub_822D2670);
PPC_FUNC_IMPL(__imp__sub_822D2670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d26a8
	if (!ctx.cr6.eq) goto loc_822D26A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249d7c8
	ctx.lr = 0x822D269C;
	sub_8249D7C8(ctx, base);
	// stw r3,-30724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30724, ctx.r3.u32);
	// bl 0x8249d888
	ctx.lr = 0x822D26A4;
	sub_8249D888(ctx, base);
	// lwz r3,-30724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30724);
loc_822D26A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D26BC"))) PPC_WEAK_FUNC(sub_822D26BC);
PPC_FUNC_IMPL(__imp__sub_822D26BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D26C0"))) PPC_WEAK_FUNC(sub_822D26C0);
PPC_FUNC_IMPL(__imp__sub_822D26C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d26f8
	if (!ctx.cr6.eq) goto loc_822D26F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249d9f8
	ctx.lr = 0x822D26EC;
	sub_8249D9F8(ctx, base);
	// stw r3,-30720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30720, ctx.r3.u32);
	// bl 0x8249dab8
	ctx.lr = 0x822D26F4;
	sub_8249DAB8(ctx, base);
	// lwz r3,-30720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30720);
loc_822D26F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D270C"))) PPC_WEAK_FUNC(sub_822D270C);
PPC_FUNC_IMPL(__imp__sub_822D270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2710"))) PPC_WEAK_FUNC(sub_822D2710);
PPC_FUNC_IMPL(__imp__sub_822D2710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2748
	if (!ctx.cr6.eq) goto loc_822D2748;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249dc28
	ctx.lr = 0x822D273C;
	sub_8249DC28(ctx, base);
	// stw r3,-30716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30716, ctx.r3.u32);
	// bl 0x8249dce8
	ctx.lr = 0x822D2744;
	sub_8249DCE8(ctx, base);
	// lwz r3,-30716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30716);
loc_822D2748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D275C"))) PPC_WEAK_FUNC(sub_822D275C);
PPC_FUNC_IMPL(__imp__sub_822D275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2760"))) PPC_WEAK_FUNC(sub_822D2760);
PPC_FUNC_IMPL(__imp__sub_822D2760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2798
	if (!ctx.cr6.eq) goto loc_822D2798;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249e2b8
	ctx.lr = 0x822D278C;
	sub_8249E2B8(ctx, base);
	// stw r3,-30704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30704, ctx.r3.u32);
	// bl 0x8249e378
	ctx.lr = 0x822D2794;
	sub_8249E378(ctx, base);
	// lwz r3,-30704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30704);
loc_822D2798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D27AC"))) PPC_WEAK_FUNC(sub_822D27AC);
PPC_FUNC_IMPL(__imp__sub_822D27AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D27B0"))) PPC_WEAK_FUNC(sub_822D27B0);
PPC_FUNC_IMPL(__imp__sub_822D27B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d27e8
	if (!ctx.cr6.eq) goto loc_822D27E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249e4e8
	ctx.lr = 0x822D27DC;
	sub_8249E4E8(ctx, base);
	// stw r3,-30700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30700, ctx.r3.u32);
	// bl 0x8249e5a8
	ctx.lr = 0x822D27E4;
	sub_8249E5A8(ctx, base);
	// lwz r3,-30700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30700);
loc_822D27E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D27FC"))) PPC_WEAK_FUNC(sub_822D27FC);
PPC_FUNC_IMPL(__imp__sub_822D27FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2800"))) PPC_WEAK_FUNC(sub_822D2800);
PPC_FUNC_IMPL(__imp__sub_822D2800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2838
	if (!ctx.cr6.eq) goto loc_822D2838;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249de58
	ctx.lr = 0x822D282C;
	sub_8249DE58(ctx, base);
	// stw r3,-30712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30712, ctx.r3.u32);
	// bl 0x8249df18
	ctx.lr = 0x822D2834;
	sub_8249DF18(ctx, base);
	// lwz r3,-30712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30712);
loc_822D2838:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D284C"))) PPC_WEAK_FUNC(sub_822D284C);
PPC_FUNC_IMPL(__imp__sub_822D284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2850"))) PPC_WEAK_FUNC(sub_822D2850);
PPC_FUNC_IMPL(__imp__sub_822D2850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2888
	if (!ctx.cr6.eq) goto loc_822D2888;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249e718
	ctx.lr = 0x822D287C;
	sub_8249E718(ctx, base);
	// stw r3,-30696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30696, ctx.r3.u32);
	// bl 0x8249e7d8
	ctx.lr = 0x822D2884;
	sub_8249E7D8(ctx, base);
	// lwz r3,-30696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30696);
loc_822D2888:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D289C"))) PPC_WEAK_FUNC(sub_822D289C);
PPC_FUNC_IMPL(__imp__sub_822D289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D28A0"))) PPC_WEAK_FUNC(sub_822D28A0);
PPC_FUNC_IMPL(__imp__sub_822D28A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30708);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d28d8
	if (!ctx.cr6.eq) goto loc_822D28D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249e088
	ctx.lr = 0x822D28CC;
	sub_8249E088(ctx, base);
	// stw r3,-30708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30708, ctx.r3.u32);
	// bl 0x8249e148
	ctx.lr = 0x822D28D4;
	sub_8249E148(ctx, base);
	// lwz r3,-30708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30708);
loc_822D28D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D28EC"))) PPC_WEAK_FUNC(sub_822D28EC);
PPC_FUNC_IMPL(__imp__sub_822D28EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D28F0"))) PPC_WEAK_FUNC(sub_822D28F0);
PPC_FUNC_IMPL(__imp__sub_822D28F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2928
	if (!ctx.cr6.eq) goto loc_822D2928;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249e948
	ctx.lr = 0x822D291C;
	sub_8249E948(ctx, base);
	// stw r3,-30692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30692, ctx.r3.u32);
	// bl 0x8249ea08
	ctx.lr = 0x822D2924;
	sub_8249EA08(ctx, base);
	// lwz r3,-30692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30692);
loc_822D2928:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D293C"))) PPC_WEAK_FUNC(sub_822D293C);
PPC_FUNC_IMPL(__imp__sub_822D293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2940"))) PPC_WEAK_FUNC(sub_822D2940);
PPC_FUNC_IMPL(__imp__sub_822D2940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2978
	if (!ctx.cr6.eq) goto loc_822D2978;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249eb78
	ctx.lr = 0x822D296C;
	sub_8249EB78(ctx, base);
	// stw r3,-30688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30688, ctx.r3.u32);
	// bl 0x8249ec38
	ctx.lr = 0x822D2974;
	sub_8249EC38(ctx, base);
	// lwz r3,-30688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30688);
loc_822D2978:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D298C"))) PPC_WEAK_FUNC(sub_822D298C);
PPC_FUNC_IMPL(__imp__sub_822D298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2990"))) PPC_WEAK_FUNC(sub_822D2990);
PPC_FUNC_IMPL(__imp__sub_822D2990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d29c8
	if (!ctx.cr6.eq) goto loc_822D29C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82499ef0
	ctx.lr = 0x822D29BC;
	sub_82499EF0(ctx, base);
	// stw r3,-30828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30828, ctx.r3.u32);
	// bl 0x82499fb0
	ctx.lr = 0x822D29C4;
	sub_82499FB0(ctx, base);
	// lwz r3,-30828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30828);
loc_822D29C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D29DC"))) PPC_WEAK_FUNC(sub_822D29DC);
PPC_FUNC_IMPL(__imp__sub_822D29DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D29E0"))) PPC_WEAK_FUNC(sub_822D29E0);
PPC_FUNC_IMPL(__imp__sub_822D29E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2a18
	if (!ctx.cr6.eq) goto loc_822D2A18;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825c94b8
	ctx.lr = 0x822D2A0C;
	sub_825C94B8(ctx, base);
	// stw r3,-28984(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28984, ctx.r3.u32);
	// bl 0x825c9578
	ctx.lr = 0x822D2A14;
	sub_825C9578(ctx, base);
	// lwz r3,-28984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28984);
loc_822D2A18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2A2C"))) PPC_WEAK_FUNC(sub_822D2A2C);
PPC_FUNC_IMPL(__imp__sub_822D2A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2A30"))) PPC_WEAK_FUNC(sub_822D2A30);
PPC_FUNC_IMPL(__imp__sub_822D2A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2a68
	if (!ctx.cr6.eq) goto loc_822D2A68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825c96e8
	ctx.lr = 0x822D2A5C;
	sub_825C96E8(ctx, base);
	// stw r3,-28980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28980, ctx.r3.u32);
	// bl 0x825c97a8
	ctx.lr = 0x822D2A64;
	sub_825C97A8(ctx, base);
	// lwz r3,-28980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28980);
loc_822D2A68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2A7C"))) PPC_WEAK_FUNC(sub_822D2A7C);
PPC_FUNC_IMPL(__imp__sub_822D2A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2A80"))) PPC_WEAK_FUNC(sub_822D2A80);
PPC_FUNC_IMPL(__imp__sub_822D2A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2ab8
	if (!ctx.cr6.eq) goto loc_822D2AB8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a12d8
	ctx.lr = 0x822D2AAC;
	sub_824A12D8(ctx, base);
	// stw r3,-30616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30616, ctx.r3.u32);
	// bl 0x824a1398
	ctx.lr = 0x822D2AB4;
	sub_824A1398(ctx, base);
	// lwz r3,-30616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30616);
loc_822D2AB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2ACC"))) PPC_WEAK_FUNC(sub_822D2ACC);
PPC_FUNC_IMPL(__imp__sub_822D2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2AD0"))) PPC_WEAK_FUNC(sub_822D2AD0);
PPC_FUNC_IMPL(__imp__sub_822D2AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2b08
	if (!ctx.cr6.eq) goto loc_822D2B08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249eda8
	ctx.lr = 0x822D2AFC;
	sub_8249EDA8(ctx, base);
	// stw r3,-30684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30684, ctx.r3.u32);
	// bl 0x8249ee68
	ctx.lr = 0x822D2B04;
	sub_8249EE68(ctx, base);
	// lwz r3,-30684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30684);
loc_822D2B08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2B1C"))) PPC_WEAK_FUNC(sub_822D2B1C);
PPC_FUNC_IMPL(__imp__sub_822D2B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2B20"))) PPC_WEAK_FUNC(sub_822D2B20);
PPC_FUNC_IMPL(__imp__sub_822D2B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2b58
	if (!ctx.cr6.eq) goto loc_822D2B58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249efd8
	ctx.lr = 0x822D2B4C;
	sub_8249EFD8(ctx, base);
	// stw r3,-30680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30680, ctx.r3.u32);
	// bl 0x8249f098
	ctx.lr = 0x822D2B54;
	sub_8249F098(ctx, base);
	// lwz r3,-30680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30680);
loc_822D2B58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2B6C"))) PPC_WEAK_FUNC(sub_822D2B6C);
PPC_FUNC_IMPL(__imp__sub_822D2B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2B70"))) PPC_WEAK_FUNC(sub_822D2B70);
PPC_FUNC_IMPL(__imp__sub_822D2B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2ba8
	if (!ctx.cr6.eq) goto loc_822D2BA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249f208
	ctx.lr = 0x822D2B9C;
	sub_8249F208(ctx, base);
	// stw r3,-30676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30676, ctx.r3.u32);
	// bl 0x8249f2c8
	ctx.lr = 0x822D2BA4;
	sub_8249F2C8(ctx, base);
	// lwz r3,-30676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30676);
loc_822D2BA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2BBC"))) PPC_WEAK_FUNC(sub_822D2BBC);
PPC_FUNC_IMPL(__imp__sub_822D2BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2BC0"))) PPC_WEAK_FUNC(sub_822D2BC0);
PPC_FUNC_IMPL(__imp__sub_822D2BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2bf8
	if (!ctx.cr6.eq) goto loc_822D2BF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a10a8
	ctx.lr = 0x822D2BEC;
	sub_824A10A8(ctx, base);
	// stw r3,-30620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30620, ctx.r3.u32);
	// bl 0x824a1168
	ctx.lr = 0x822D2BF4;
	sub_824A1168(ctx, base);
	// lwz r3,-30620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30620);
loc_822D2BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2C0C"))) PPC_WEAK_FUNC(sub_822D2C0C);
PPC_FUNC_IMPL(__imp__sub_822D2C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2C10"))) PPC_WEAK_FUNC(sub_822D2C10);
PPC_FUNC_IMPL(__imp__sub_822D2C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2c48
	if (!ctx.cr6.eq) goto loc_822D2C48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249f438
	ctx.lr = 0x822D2C3C;
	sub_8249F438(ctx, base);
	// stw r3,-30672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30672, ctx.r3.u32);
	// bl 0x8249f4f8
	ctx.lr = 0x822D2C44;
	sub_8249F4F8(ctx, base);
	// lwz r3,-30672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30672);
loc_822D2C48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2C5C"))) PPC_WEAK_FUNC(sub_822D2C5C);
PPC_FUNC_IMPL(__imp__sub_822D2C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2C60"))) PPC_WEAK_FUNC(sub_822D2C60);
PPC_FUNC_IMPL(__imp__sub_822D2C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2c98
	if (!ctx.cr6.eq) goto loc_822D2C98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249f668
	ctx.lr = 0x822D2C8C;
	sub_8249F668(ctx, base);
	// stw r3,-30668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30668, ctx.r3.u32);
	// bl 0x8249f728
	ctx.lr = 0x822D2C94;
	sub_8249F728(ctx, base);
	// lwz r3,-30668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30668);
loc_822D2C98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2CAC"))) PPC_WEAK_FUNC(sub_822D2CAC);
PPC_FUNC_IMPL(__imp__sub_822D2CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2CB0"))) PPC_WEAK_FUNC(sub_822D2CB0);
PPC_FUNC_IMPL(__imp__sub_822D2CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2ce8
	if (!ctx.cr6.eq) goto loc_822D2CE8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249fcf8
	ctx.lr = 0x822D2CDC;
	sub_8249FCF8(ctx, base);
	// stw r3,-30656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30656, ctx.r3.u32);
	// bl 0x8249fdb8
	ctx.lr = 0x822D2CE4;
	sub_8249FDB8(ctx, base);
	// lwz r3,-30656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30656);
loc_822D2CE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2CFC"))) PPC_WEAK_FUNC(sub_822D2CFC);
PPC_FUNC_IMPL(__imp__sub_822D2CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2D00"))) PPC_WEAK_FUNC(sub_822D2D00);
PPC_FUNC_IMPL(__imp__sub_822D2D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2d38
	if (!ctx.cr6.eq) goto loc_822D2D38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249f898
	ctx.lr = 0x822D2D2C;
	sub_8249F898(ctx, base);
	// stw r3,-30664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30664, ctx.r3.u32);
	// bl 0x8249f958
	ctx.lr = 0x822D2D34;
	sub_8249F958(ctx, base);
	// lwz r3,-30664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30664);
loc_822D2D38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2D4C"))) PPC_WEAK_FUNC(sub_822D2D4C);
PPC_FUNC_IMPL(__imp__sub_822D2D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2D50"))) PPC_WEAK_FUNC(sub_822D2D50);
PPC_FUNC_IMPL(__imp__sub_822D2D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2d88
	if (!ctx.cr6.eq) goto loc_822D2D88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249fac8
	ctx.lr = 0x822D2D7C;
	sub_8249FAC8(ctx, base);
	// stw r3,-30660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30660, ctx.r3.u32);
	// bl 0x8249fb88
	ctx.lr = 0x822D2D84;
	sub_8249FB88(ctx, base);
	// lwz r3,-30660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30660);
loc_822D2D88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2D9C"))) PPC_WEAK_FUNC(sub_822D2D9C);
PPC_FUNC_IMPL(__imp__sub_822D2D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2DA0"))) PPC_WEAK_FUNC(sub_822D2DA0);
PPC_FUNC_IMPL(__imp__sub_822D2DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2dd8
	if (!ctx.cr6.eq) goto loc_822D2DD8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249ff28
	ctx.lr = 0x822D2DCC;
	sub_8249FF28(ctx, base);
	// stw r3,-30652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30652, ctx.r3.u32);
	// bl 0x8249ffe8
	ctx.lr = 0x822D2DD4;
	sub_8249FFE8(ctx, base);
	// lwz r3,-30652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30652);
loc_822D2DD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2DEC"))) PPC_WEAK_FUNC(sub_822D2DEC);
PPC_FUNC_IMPL(__imp__sub_822D2DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2DF0"))) PPC_WEAK_FUNC(sub_822D2DF0);
PPC_FUNC_IMPL(__imp__sub_822D2DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30648);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2e28
	if (!ctx.cr6.eq) goto loc_822D2E28;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a0158
	ctx.lr = 0x822D2E1C;
	sub_824A0158(ctx, base);
	// stw r3,-30648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30648, ctx.r3.u32);
	// bl 0x824a0218
	ctx.lr = 0x822D2E24;
	sub_824A0218(ctx, base);
	// lwz r3,-30648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30648);
loc_822D2E28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2E3C"))) PPC_WEAK_FUNC(sub_822D2E3C);
PPC_FUNC_IMPL(__imp__sub_822D2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2E40"))) PPC_WEAK_FUNC(sub_822D2E40);
PPC_FUNC_IMPL(__imp__sub_822D2E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30644);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2e78
	if (!ctx.cr6.eq) goto loc_822D2E78;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a0388
	ctx.lr = 0x822D2E6C;
	sub_824A0388(ctx, base);
	// stw r3,-30644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30644, ctx.r3.u32);
	// bl 0x824a0448
	ctx.lr = 0x822D2E74;
	sub_824A0448(ctx, base);
	// lwz r3,-30644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30644);
loc_822D2E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2E8C"))) PPC_WEAK_FUNC(sub_822D2E8C);
PPC_FUNC_IMPL(__imp__sub_822D2E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2E90"))) PPC_WEAK_FUNC(sub_822D2E90);
PPC_FUNC_IMPL(__imp__sub_822D2E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2ec8
	if (!ctx.cr6.eq) goto loc_822D2EC8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a05b8
	ctx.lr = 0x822D2EBC;
	sub_824A05B8(ctx, base);
	// stw r3,-30640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30640, ctx.r3.u32);
	// bl 0x824a0678
	ctx.lr = 0x822D2EC4;
	sub_824A0678(ctx, base);
	// lwz r3,-30640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30640);
loc_822D2EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2EDC"))) PPC_WEAK_FUNC(sub_822D2EDC);
PPC_FUNC_IMPL(__imp__sub_822D2EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2EE0"))) PPC_WEAK_FUNC(sub_822D2EE0);
PPC_FUNC_IMPL(__imp__sub_822D2EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2f18
	if (!ctx.cr6.eq) goto loc_822D2F18;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a07e8
	ctx.lr = 0x822D2F0C;
	sub_824A07E8(ctx, base);
	// stw r3,-30636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30636, ctx.r3.u32);
	// bl 0x824a08a8
	ctx.lr = 0x822D2F14;
	sub_824A08A8(ctx, base);
	// lwz r3,-30636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30636);
loc_822D2F18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2F2C"))) PPC_WEAK_FUNC(sub_822D2F2C);
PPC_FUNC_IMPL(__imp__sub_822D2F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2F30"))) PPC_WEAK_FUNC(sub_822D2F30);
PPC_FUNC_IMPL(__imp__sub_822D2F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30632);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2f68
	if (!ctx.cr6.eq) goto loc_822D2F68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a0a18
	ctx.lr = 0x822D2F5C;
	sub_824A0A18(ctx, base);
	// stw r3,-30632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30632, ctx.r3.u32);
	// bl 0x824a0ad8
	ctx.lr = 0x822D2F64;
	sub_824A0AD8(ctx, base);
	// lwz r3,-30632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30632);
loc_822D2F68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2F7C"))) PPC_WEAK_FUNC(sub_822D2F7C);
PPC_FUNC_IMPL(__imp__sub_822D2F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2F80"))) PPC_WEAK_FUNC(sub_822D2F80);
PPC_FUNC_IMPL(__imp__sub_822D2F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d2fb8
	if (!ctx.cr6.eq) goto loc_822D2FB8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a0c48
	ctx.lr = 0x822D2FAC;
	sub_824A0C48(ctx, base);
	// stw r3,-30628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30628, ctx.r3.u32);
	// bl 0x824a0d08
	ctx.lr = 0x822D2FB4;
	sub_824A0D08(ctx, base);
	// lwz r3,-30628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30628);
loc_822D2FB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D2FCC"))) PPC_WEAK_FUNC(sub_822D2FCC);
PPC_FUNC_IMPL(__imp__sub_822D2FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D2FD0"))) PPC_WEAK_FUNC(sub_822D2FD0);
PPC_FUNC_IMPL(__imp__sub_822D2FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3008
	if (!ctx.cr6.eq) goto loc_822D3008;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824a0e78
	ctx.lr = 0x822D2FFC;
	sub_824A0E78(ctx, base);
	// stw r3,-30624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30624, ctx.r3.u32);
	// bl 0x824a0f38
	ctx.lr = 0x822D3004;
	sub_824A0F38(ctx, base);
	// lwz r3,-30624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30624);
loc_822D3008:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D301C"))) PPC_WEAK_FUNC(sub_822D301C);
PPC_FUNC_IMPL(__imp__sub_822D301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3020"))) PPC_WEAK_FUNC(sub_822D3020);
PPC_FUNC_IMPL(__imp__sub_822D3020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-31304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3058
	if (!ctx.cr6.eq) goto loc_822D3058;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8240f750
	ctx.lr = 0x822D304C;
	sub_8240F750(ctx, base);
	// stw r3,-31304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31304, ctx.r3.u32);
	// bl 0x8240f810
	ctx.lr = 0x822D3054;
	sub_8240F810(ctx, base);
	// lwz r3,-31304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31304);
loc_822D3058:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D306C"))) PPC_WEAK_FUNC(sub_822D306C);
PPC_FUNC_IMPL(__imp__sub_822D306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3070"))) PPC_WEAK_FUNC(sub_822D3070);
PPC_FUNC_IMPL(__imp__sub_822D3070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-31288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d30a8
	if (!ctx.cr6.eq) goto loc_822D30A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82413e58
	ctx.lr = 0x822D309C;
	sub_82413E58(ctx, base);
	// stw r3,-31288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31288, ctx.r3.u32);
	// bl 0x82413f18
	ctx.lr = 0x822D30A4;
	sub_82413F18(ctx, base);
	// lwz r3,-31288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31288);
loc_822D30A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D30BC"))) PPC_WEAK_FUNC(sub_822D30BC);
PPC_FUNC_IMPL(__imp__sub_822D30BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D30C0"))) PPC_WEAK_FUNC(sub_822D30C0);
PPC_FUNC_IMPL(__imp__sub_822D30C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-31292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d30f8
	if (!ctx.cr6.eq) goto loc_822D30F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82413580
	ctx.lr = 0x822D30EC;
	sub_82413580(ctx, base);
	// stw r3,-31292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31292, ctx.r3.u32);
	// bl 0x82413640
	ctx.lr = 0x822D30F4;
	sub_82413640(ctx, base);
	// lwz r3,-31292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31292);
loc_822D30F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D310C"))) PPC_WEAK_FUNC(sub_822D310C);
PPC_FUNC_IMPL(__imp__sub_822D310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3110"))) PPC_WEAK_FUNC(sub_822D3110);
PPC_FUNC_IMPL(__imp__sub_822D3110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3148
	if (!ctx.cr6.eq) goto loc_822D3148;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82633028
	ctx.lr = 0x822D313C;
	sub_82633028(ctx, base);
	// stw r3,-28336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28336, ctx.r3.u32);
	// bl 0x826330e8
	ctx.lr = 0x822D3144;
	sub_826330E8(ctx, base);
	// lwz r3,-28336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28336);
loc_822D3148:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D315C"))) PPC_WEAK_FUNC(sub_822D315C);
PPC_FUNC_IMPL(__imp__sub_822D315C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3160"))) PPC_WEAK_FUNC(sub_822D3160);
PPC_FUNC_IMPL(__imp__sub_822D3160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3198
	if (!ctx.cr6.eq) goto loc_822D3198;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262ee68
	ctx.lr = 0x822D318C;
	sub_8262EE68(ctx, base);
	// stw r3,-28384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28384, ctx.r3.u32);
	// bl 0x8262ef28
	ctx.lr = 0x822D3194;
	sub_8262EF28(ctx, base);
	// lwz r3,-28384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28384);
loc_822D3198:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D31AC"))) PPC_WEAK_FUNC(sub_822D31AC);
PPC_FUNC_IMPL(__imp__sub_822D31AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D31B0"))) PPC_WEAK_FUNC(sub_822D31B0);
PPC_FUNC_IMPL(__imp__sub_822D31B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d31e8
	if (!ctx.cr6.eq) goto loc_822D31E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82630678
	ctx.lr = 0x822D31DC;
	sub_82630678(ctx, base);
	// stw r3,-28364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28364, ctx.r3.u32);
	// bl 0x82630738
	ctx.lr = 0x822D31E4;
	sub_82630738(ctx, base);
	// lwz r3,-28364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28364);
loc_822D31E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D31FC"))) PPC_WEAK_FUNC(sub_822D31FC);
PPC_FUNC_IMPL(__imp__sub_822D31FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3200"))) PPC_WEAK_FUNC(sub_822D3200);
PPC_FUNC_IMPL(__imp__sub_822D3200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3238
	if (!ctx.cr6.eq) goto loc_822D3238;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82630fe8
	ctx.lr = 0x822D322C;
	sub_82630FE8(ctx, base);
	// stw r3,-28360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28360, ctx.r3.u32);
	// bl 0x826310a8
	ctx.lr = 0x822D3234;
	sub_826310A8(ctx, base);
	// lwz r3,-28360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28360);
loc_822D3238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D324C"))) PPC_WEAK_FUNC(sub_822D324C);
PPC_FUNC_IMPL(__imp__sub_822D324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3250"))) PPC_WEAK_FUNC(sub_822D3250);
PPC_FUNC_IMPL(__imp__sub_822D3250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3288
	if (!ctx.cr6.eq) goto loc_822D3288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826327f8
	ctx.lr = 0x822D327C;
	sub_826327F8(ctx, base);
	// stw r3,-28344(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28344, ctx.r3.u32);
	// bl 0x826328b8
	ctx.lr = 0x822D3284;
	sub_826328B8(ctx, base);
	// lwz r3,-28344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28344);
loc_822D3288:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D329C"))) PPC_WEAK_FUNC(sub_822D329C);
PPC_FUNC_IMPL(__imp__sub_822D329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D32A0"))) PPC_WEAK_FUNC(sub_822D32A0);
PPC_FUNC_IMPL(__imp__sub_822D32A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d32d8
	if (!ctx.cr6.eq) goto loc_822D32D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82631ff0
	ctx.lr = 0x822D32CC;
	sub_82631FF0(ctx, base);
	// stw r3,-28348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28348, ctx.r3.u32);
	// bl 0x826320b0
	ctx.lr = 0x822D32D4;
	sub_826320B0(ctx, base);
	// lwz r3,-28348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28348);
loc_822D32D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D32EC"))) PPC_WEAK_FUNC(sub_822D32EC);
PPC_FUNC_IMPL(__imp__sub_822D32EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D32F0"))) PPC_WEAK_FUNC(sub_822D32F0);
PPC_FUNC_IMPL(__imp__sub_822D32F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3328
	if (!ctx.cr6.eq) goto loc_822D3328;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262d728
	ctx.lr = 0x822D331C;
	sub_8262D728(ctx, base);
	// stw r3,-28392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28392, ctx.r3.u32);
	// bl 0x8262d7e8
	ctx.lr = 0x822D3324;
	sub_8262D7E8(ctx, base);
	// lwz r3,-28392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28392);
loc_822D3328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D333C"))) PPC_WEAK_FUNC(sub_822D333C);
PPC_FUNC_IMPL(__imp__sub_822D333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3340"))) PPC_WEAK_FUNC(sub_822D3340);
PPC_FUNC_IMPL(__imp__sub_822D3340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3378
	if (!ctx.cr6.eq) goto loc_822D3378;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262f628
	ctx.lr = 0x822D336C;
	sub_8262F628(ctx, base);
	// stw r3,-28380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28380, ctx.r3.u32);
	// bl 0x8262f6e8
	ctx.lr = 0x822D3374;
	sub_8262F6E8(ctx, base);
	// lwz r3,-28380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28380);
loc_822D3378:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D338C"))) PPC_WEAK_FUNC(sub_822D338C);
PPC_FUNC_IMPL(__imp__sub_822D338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3390"))) PPC_WEAK_FUNC(sub_822D3390);
PPC_FUNC_IMPL(__imp__sub_822D3390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d33c8
	if (!ctx.cr6.eq) goto loc_822D33C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82633628
	ctx.lr = 0x822D33BC;
	sub_82633628(ctx, base);
	// stw r3,-28332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28332, ctx.r3.u32);
	// bl 0x826336e8
	ctx.lr = 0x822D33C4;
	sub_826336E8(ctx, base);
	// lwz r3,-28332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28332);
loc_822D33C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D33DC"))) PPC_WEAK_FUNC(sub_822D33DC);
PPC_FUNC_IMPL(__imp__sub_822D33DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D33E0"))) PPC_WEAK_FUNC(sub_822D33E0);
PPC_FUNC_IMPL(__imp__sub_822D33E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3418
	if (!ctx.cr6.eq) goto loc_822D3418;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262cdf0
	ctx.lr = 0x822D340C;
	sub_8262CDF0(ctx, base);
	// stw r3,-28396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28396, ctx.r3.u32);
	// bl 0x8262ceb0
	ctx.lr = 0x822D3414;
	sub_8262CEB0(ctx, base);
	// lwz r3,-28396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28396);
loc_822D3418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D342C"))) PPC_WEAK_FUNC(sub_822D342C);
PPC_FUNC_IMPL(__imp__sub_822D342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3430"))) PPC_WEAK_FUNC(sub_822D3430);
PPC_FUNC_IMPL(__imp__sub_822D3430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3468
	if (!ctx.cr6.eq) goto loc_822D3468;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262fd60
	ctx.lr = 0x822D345C;
	sub_8262FD60(ctx, base);
	// stw r3,-28372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28372, ctx.r3.u32);
	// bl 0x8262fe20
	ctx.lr = 0x822D3464;
	sub_8262FE20(ctx, base);
	// lwz r3,-28372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28372);
loc_822D3468:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D347C"))) PPC_WEAK_FUNC(sub_822D347C);
PPC_FUNC_IMPL(__imp__sub_822D347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3480"))) PPC_WEAK_FUNC(sub_822D3480);
PPC_FUNC_IMPL(__imp__sub_822D3480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d34b8
	if (!ctx.cr6.eq) goto loc_822D34B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82630080
	ctx.lr = 0x822D34AC;
	sub_82630080(ctx, base);
	// stw r3,-28368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28368, ctx.r3.u32);
	// bl 0x82630140
	ctx.lr = 0x822D34B4;
	sub_82630140(ctx, base);
	// lwz r3,-28368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28368);
loc_822D34B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D34CC"))) PPC_WEAK_FUNC(sub_822D34CC);
PPC_FUNC_IMPL(__imp__sub_822D34CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D34D0"))) PPC_WEAK_FUNC(sub_822D34D0);
PPC_FUNC_IMPL(__imp__sub_822D34D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3508
	if (!ctx.cr6.eq) goto loc_822D3508;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262fa08
	ctx.lr = 0x822D34FC;
	sub_8262FA08(ctx, base);
	// stw r3,-28376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28376, ctx.r3.u32);
	// bl 0x8262fac8
	ctx.lr = 0x822D3504;
	sub_8262FAC8(ctx, base);
	// lwz r3,-28376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28376);
loc_822D3508:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D351C"))) PPC_WEAK_FUNC(sub_822D351C);
PPC_FUNC_IMPL(__imp__sub_822D351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3520"))) PPC_WEAK_FUNC(sub_822D3520);
PPC_FUNC_IMPL(__imp__sub_822D3520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d3558
	if (!ctx.cr6.eq) goto loc_822D3558;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82631ba0
	ctx.lr = 0x822D354C;
	sub_82631BA0(ctx, base);
	// stw r3,-28352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28352, ctx.r3.u32);
	// bl 0x82631c60
	ctx.lr = 0x822D3554;
	sub_82631C60(ctx, base);
	// lwz r3,-28352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28352);
loc_822D3558:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D356C"))) PPC_WEAK_FUNC(sub_822D356C);
PPC_FUNC_IMPL(__imp__sub_822D356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D3570"))) PPC_WEAK_FUNC(sub_822D3570);
PPC_FUNC_IMPL(__imp__sub_822D3570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-28388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d35a8
	if (!ctx.cr6.eq) goto loc_822D35A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8262e828
	ctx.lr = 0x822D359C;
	sub_8262E828(ctx, base);
	// stw r3,-28388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28388, ctx.r3.u32);
	// bl 0x8262e8e8
	ctx.lr = 0x822D35A4;
	sub_8262E8E8(ctx, base);
	// lwz r3,-28388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28388);
loc_822D35A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D35BC"))) PPC_WEAK_FUNC(sub_822D35BC);
PPC_FUNC_IMPL(__imp__sub_822D35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D35C0"))) PPC_WEAK_FUNC(sub_822D35C0);
PPC_FUNC_IMPL(__imp__sub_822D35C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-30200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d35f8
	if (!ctx.cr6.eq) goto loc_822D35F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824d4970
	ctx.lr = 0x822D35EC;
	sub_824D4970(ctx, base);
	// stw r3,-30200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30200, ctx.r3.u32);
	// bl 0x824d4a30
	ctx.lr = 0x822D35F4;
	sub_824D4A30(ctx, base);
	// lwz r3,-30200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30200);
loc_822D35F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D360C"))) PPC_WEAK_FUNC(sub_822D360C);
PPC_FUNC_IMPL(__imp__sub_822D360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

