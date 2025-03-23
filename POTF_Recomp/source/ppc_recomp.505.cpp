#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8300E7F8"))) PPC_WEAK_FUNC(sub_8300E7F8);
PPC_FUNC_IMPL(__imp__sub_8300E7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E800"))) PPC_WEAK_FUNC(sub_8300E800);
PPC_FUNC_IMPL(__imp__sub_8300E800) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-10732
	ctx.r10.s64 = ctx.r11.s64 + -10732;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300E83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,-10788
	ctx.r5.s64 = ctx.r7.s64 + -10788;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8300e870
	if (ctx.cr6.eq) goto loc_8300E870;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8300E870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8300E870:
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

__attribute__((alias("__imp__sub_8300E88C"))) PPC_WEAK_FUNC(sub_8300E88C);
PPC_FUNC_IMPL(__imp__sub_8300E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300E890"))) PPC_WEAK_FUNC(sub_8300E890);
PPC_FUNC_IMPL(__imp__sub_8300E890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-9212
	ctx.r10.s64 = ctx.r11.s64 + -9212;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E8A0"))) PPC_WEAK_FUNC(sub_8300E8A0);
PPC_FUNC_IMPL(__imp__sub_8300E8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-9212
	ctx.r9.s64 = ctx.r11.s64 + -9212;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8300e8d4
	if (ctx.cr6.eq) goto loc_8300E8D4;
	// bl 0x822990f0
	ctx.lr = 0x8300E8D0;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300E8D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E8E8"))) PPC_WEAK_FUNC(sub_8300E8E8);
PPC_FUNC_IMPL(__imp__sub_8300E8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-9168
	ctx.r9.s64 = ctx.r11.s64 + -9168;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E908"))) PPC_WEAK_FUNC(sub_8300E908);
PPC_FUNC_IMPL(__imp__sub_8300E908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-9168
	ctx.r10.s64 = ctx.r11.s64 + -9168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E918"))) PPC_WEAK_FUNC(sub_8300E918);
PPC_FUNC_IMPL(__imp__sub_8300E918) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8300e988
	if (!ctx.cr6.gt) goto loc_8300E988;
loc_8300E944:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8300e988
	if (!ctx.cr6.gt) goto loc_8300E988;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// subf r5,r30,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r30.s64;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300E970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8300e97c
	if (!ctx.cr6.gt) goto loc_8300E97C;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_8300E97C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8300e944
	if (ctx.cr6.lt) goto loc_8300E944;
loc_8300E988:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8300E9B8"))) PPC_WEAK_FUNC(sub_8300E9B8);
PPC_FUNC_IMPL(__imp__sub_8300E9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8300E9C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8300eaa0
	if (ctx.cr6.eq) goto loc_8300EAA0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8300ea44
	if (!ctx.cr6.gt) goto loc_8300EA44;
loc_8300E9F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r28,r26
	ctx.r4.u64 = ctx.r28.u64 + ctx.r26.u64;
	// subf r27,r11,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82cb1160
	ctx.lr = 0x8300EA14;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300EA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8300e9f8
	if (ctx.cr6.gt) goto loc_8300E9F8;
loc_8300EA44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8300ea74
	if (ctx.cr6.eq) goto loc_8300EA74;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r28,r26
	ctx.r4.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82cb1160
	ctx.lr = 0x8300EA64;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8300EA74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x8300ea94
	if (!ctx.cr6.eq) goto loc_8300EA94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300EA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8300EA94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8300EAA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300EABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EAC4"))) PPC_WEAK_FUNC(sub_8300EAC4);
PPC_FUNC_IMPL(__imp__sub_8300EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EAC8"))) PPC_WEAK_FUNC(sub_8300EAC8);
PPC_FUNC_IMPL(__imp__sub_8300EAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-9168
	ctx.r9.s64 = ctx.r11.s64 + -9168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8300eafc
	if (ctx.cr6.eq) goto loc_8300EAFC;
	// bl 0x822990f0
	ctx.lr = 0x8300EAF8;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300EAFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EB10"))) PPC_WEAK_FUNC(sub_8300EB10);
PPC_FUNC_IMPL(__imp__sub_8300EB10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r5,r10,32784
	ctx.r5.u64 = ctx.r10.u64 | 32784;
	// ori r6,r11,32780
	ctx.r6.u64 = ctx.r11.u64 | 32780;
	// ori r4,r9,32788
	ctx.r4.u64 = ctx.r9.u64 | 32788;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// ori r10,r8,32792
	ctx.r10.u64 = ctx.r8.u64 | 32792;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r7,-9152
	ctx.r9.s64 = ctx.r7.s64 + -9152;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r11,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u32);
	// stbx r11,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EB5C"))) PPC_WEAK_FUNC(sub_8300EB5C);
PPC_FUNC_IMPL(__imp__sub_8300EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EB60"))) PPC_WEAK_FUNC(sub_8300EB60);
PPC_FUNC_IMPL(__imp__sub_8300EB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300EB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,32792
	ctx.r9.u64 = ctx.r11.u64 | 32792;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,32780
	ctx.r29.u64 = ctx.r10.u64 | 32780;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8300ebcc
	if (!ctx.cr6.eq) goto loc_8300EBCC;
	// lwzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8300ebcc
	if (ctx.cr6.eq) goto loc_8300EBCC;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r11,-32304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32304);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8300EBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8300EBCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8300EBCC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32784
	ctx.r9.u64 = ctx.r11.u64 | 32784;
	// ori r8,r10,32788
	ctx.r8.u64 = ctx.r10.u64 | 32788;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EBF4"))) PPC_WEAK_FUNC(sub_8300EBF4);
PPC_FUNC_IMPL(__imp__sub_8300EBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EBF8"))) PPC_WEAK_FUNC(sub_8300EBF8);
PPC_FUNC_IMPL(__imp__sub_8300EBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32792
	ctx.r10.u64 = ctx.r11.u64 | 32792;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// ori r10,r11,32780
	ctx.r10.u64 = ctx.r11.u64 | 32780;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// beq cr6,0x8300ec50
	if (ctx.cr6.eq) goto loc_8300EC50;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8300ec44
	if (ctx.cr6.eq) goto loc_8300EC44;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32788
	ctx.r9.u64 = ctx.r11.u64 | 32788;
	// ori r8,r10,32784
	ctx.r8.u64 = ctx.r10.u64 | 32784;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r7,r3,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8300ec48
	if (ctx.cr6.lt) goto loc_8300EC48;
loc_8300EC44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8300EC48:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8300EC50:
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EC60"))) PPC_WEAK_FUNC(sub_8300EC60);
PPC_FUNC_IMPL(__imp__sub_8300EC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8300EC68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r27,-32756
	ctx.r27.s64 = ctx.r27.s64 + -32756;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8300ed90
	if (ctx.cr6.eq) goto loc_8300ED90;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,-32748
	ctx.r29.s64 = ctx.r29.s64 + -32748;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8300ed90
	if (ctx.cr6.eq) goto loc_8300ED90;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-32752
	ctx.r31.s64 = ctx.r31.s64 + -32752;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8300ed60
	if (!ctx.cr6.gt) goto loc_8300ED60;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,32792
	ctx.r9.u64 = ctx.r10.u64 | 32792;
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8300ecd0
	if (ctx.cr6.eq) goto loc_8300ECD0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x8300ed60
	goto loc_8300ED60;
loc_8300ECD0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8300ecd0
	if (ctx.cr6.gt) goto loc_8300ECD0;
	// lis r25,-31901
	ctx.r25.s64 = -2090663936;
	// lwz r11,-32304(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32304);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300ED0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,122
	ctx.r5.s64 = 122;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300ED24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x8300ED34;
	sub_82CB1160(ctx, base);
	// lwz r11,-32304(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32304);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8300ED4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8300ED60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8300ED60:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8300ED78;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8300ED90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300ED9C"))) PPC_WEAK_FUNC(sub_8300ED9C);
PPC_FUNC_IMPL(__imp__sub_8300ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EDA0"))) PPC_WEAK_FUNC(sub_8300EDA0);
PPC_FUNC_IMPL(__imp__sub_8300EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-9212
	ctx.r10.s64 = ctx.r11.s64 + -9212;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EDB0"))) PPC_WEAK_FUNC(sub_8300EDB0);
PPC_FUNC_IMPL(__imp__sub_8300EDB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300EDC4"))) PPC_WEAK_FUNC(sub_8300EDC4);
PPC_FUNC_IMPL(__imp__sub_8300EDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EDC8"))) PPC_WEAK_FUNC(sub_8300EDC8);
PPC_FUNC_IMPL(__imp__sub_8300EDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300EDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300ee04
	if (ctx.cr6.eq) goto loc_8300EE04;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10320
	ctx.r4.s64 = ctx.r11.s64 + -10320;
	// li r5,61
	ctx.r5.s64 = 61;
	// addi r7,r4,-80
	ctx.r7.s64 = ctx.r4.s64 + -80;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300EE04;
	sub_82D17988(ctx, base);
loc_8300EE04:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300EE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EE28"))) PPC_WEAK_FUNC(sub_8300EE28);
PPC_FUNC_IMPL(__imp__sub_8300EE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300EE30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300ee64
	if (ctx.cr6.eq) goto loc_8300EE64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10128
	ctx.r4.s64 = ctx.r11.s64 + -10128;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300EE64;
	sub_82D17988(ctx, base);
loc_8300EE64:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300EE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EE88"))) PPC_WEAK_FUNC(sub_8300EE88);
PPC_FUNC_IMPL(__imp__sub_8300EE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300EE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300eec4
	if (ctx.cr6.eq) goto loc_8300EEC4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-9944
	ctx.r4.s64 = ctx.r11.s64 + -9944;
	// li r5,75
	ctx.r5.s64 = 75;
	// addi r7,r4,-80
	ctx.r7.s64 = ctx.r4.s64 + -80;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300EEC4;
	sub_82D17988(ctx, base);
loc_8300EEC4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300EEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EEE8"))) PPC_WEAK_FUNC(sub_8300EEE8);
PPC_FUNC_IMPL(__imp__sub_8300EEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300EEF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300ef24
	if (ctx.cr6.eq) goto loc_8300EF24;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-9752
	ctx.r4.s64 = ctx.r11.s64 + -9752;
	// li r5,82
	ctx.r5.s64 = 82;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300EF24;
	sub_82D17988(ctx, base);
loc_8300EF24:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300EF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EF48"))) PPC_WEAK_FUNC(sub_8300EF48);
PPC_FUNC_IMPL(__imp__sub_8300EF48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EF4C"))) PPC_WEAK_FUNC(sub_8300EF4C);
PPC_FUNC_IMPL(__imp__sub_8300EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EF50"))) PPC_WEAK_FUNC(sub_8300EF50);
PPC_FUNC_IMPL(__imp__sub_8300EF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-9136
	ctx.r10.s64 = ctx.r11.s64 + -9136;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300EF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r7,-9212
	ctx.r6.s64 = ctx.r7.s64 + -9212;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EFA4"))) PPC_WEAK_FUNC(sub_8300EFA4);
PPC_FUNC_IMPL(__imp__sub_8300EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EFA8"))) PPC_WEAK_FUNC(sub_8300EFA8);
PPC_FUNC_IMPL(__imp__sub_8300EFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8300EFB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8300f030
	if (ctx.cr0.eq) goto loc_8300F030;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8300EFE8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8300EFF8;
	sub_82D5ECB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8300f084
	if (ctx.cr6.eq) goto loc_8300F084;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8300efe8
	if (ctx.cr6.lt) goto loc_8300EFE8;
loc_8300F030:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300F048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300f078
	if (ctx.cr6.eq) goto loc_8300F078;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300F058:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300F06C;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300f058
	if (!ctx.cr0.eq) goto loc_8300F058;
loc_8300F078:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8300F084:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10504
	ctx.r4.s64 = ctx.r11.s64 + -10504;
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8300F0A4;
	sub_82D17988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300f0d0
	if (ctx.cr6.eq) goto loc_8300F0D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300F0B0:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300F0C4;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300f0b0
	if (!ctx.cr0.eq) goto loc_8300F0B0;
loc_8300F0D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F0DC"))) PPC_WEAK_FUNC(sub_8300F0DC);
PPC_FUNC_IMPL(__imp__sub_8300F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F0E0"))) PPC_WEAK_FUNC(sub_8300F0E0);
PPC_FUNC_IMPL(__imp__sub_8300F0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8300F0E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,21368(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8300f164
	if (ctx.cr0.eq) goto loc_8300F164;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8300F11C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8300F12C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8300f178
	if (ctx.cr6.eq) goto loc_8300F178;
	// lwz r10,21368(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8300f11c
	if (ctx.cr6.lt) goto loc_8300F11C;
loc_8300F164:
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300f1f0
	if (ctx.cr6.eq) goto loc_8300F1F0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8300f1d4
	goto loc_8300F1D4;
loc_8300F178:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8300F198;
	sub_82D17988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300f1c4
	if (ctx.cr6.eq) goto loc_8300F1C4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300F1A4:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300F1B8;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300f1a4
	if (!ctx.cr0.eq) goto loc_8300F1A4;
loc_8300F1C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8300F1D0:
	// lwz r10,21368(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
loc_8300F1D4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300F1E4;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300f1d0
	if (!ctx.cr0.eq) goto loc_8300F1D0;
loc_8300F1F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F1FC"))) PPC_WEAK_FUNC(sub_8300F1FC);
PPC_FUNC_IMPL(__imp__sub_8300F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F200"))) PPC_WEAK_FUNC(sub_8300F200);
PPC_FUNC_IMPL(__imp__sub_8300F200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300F208;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300F230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8300F248:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8300f248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8300F248;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F27C"))) PPC_WEAK_FUNC(sub_8300F27C);
PPC_FUNC_IMPL(__imp__sub_8300F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F280"))) PPC_WEAK_FUNC(sub_8300F280);
PPC_FUNC_IMPL(__imp__sub_8300F280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8300F288;
	__savegprlr_27(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,32592
	ctx.r12.u64 = ctx.r12.u64 | 32592;
	// bl 0x82cb8074
	ctx.lr = 0x8300F294;
	sub_82CB8074(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8300f460
	if (!ctx.cr6.eq) goto loc_8300F460;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-9152
	ctx.r28.s64 = ctx.r11.s64 + -9152;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32876
	ctx.r12.u64 = ctx.r12.u64 | 32876;
	// stwx r30,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32880
	ctx.r12.u64 = ctx.r12.u64 | 32880;
	// stwx r30,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32884
	ctx.r12.u64 = ctx.r12.u64 | 32884;
	// stwx r30,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32888
	ctx.r12.u64 = ctx.r12.u64 | 32888;
	// stbx r30,r1,r12
	PPC_STORE_U8(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u8);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bl 0x8300f778
	ctx.lr = 0x8300F2F8;
	sub_8300F778(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300F314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8300e9b8
	ctx.lr = 0x8300F33C;
	sub_8300E9B8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8300f454
	if (ctx.cr6.eq) goto loc_8300F454;
loc_8300F344:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8300F38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300f690
	ctx.lr = 0x8300F398;
	sub_8300F690(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8300F3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300F3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300f690
	ctx.lr = 0x8300F3F0;
	sub_8300F690(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8300F40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300F43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300f690
	ctx.lr = 0x8300F448;
	sub_8300F690(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8300f344
	if (!ctx.cr0.eq) goto loc_8300F344;
loc_8300F454:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// bl 0x8300eb60
	ctx.lr = 0x8300F460;
	sub_8300EB60(ctx, base);
loc_8300F460:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F468"))) PPC_WEAK_FUNC(sub_8300F468);
PPC_FUNC_IMPL(__imp__sub_8300F468) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-9136
	ctx.r9.s64 = ctx.r11.s64 + -9136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8300f280
	ctx.lr = 0x8300F4A4;
	sub_8300F280(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8300F4C4"))) PPC_WEAK_FUNC(sub_8300F4C4);
PPC_FUNC_IMPL(__imp__sub_8300F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F4C8"))) PPC_WEAK_FUNC(sub_8300F4C8);
PPC_FUNC_IMPL(__imp__sub_8300F4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300F4DC"))) PPC_WEAK_FUNC(sub_8300F4DC);
PPC_FUNC_IMPL(__imp__sub_8300F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F4E0"))) PPC_WEAK_FUNC(sub_8300F4E0);
PPC_FUNC_IMPL(__imp__sub_8300F4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8300F4E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8300f568
	if (ctx.cr0.eq) goto loc_8300F568;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8300F520:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8300F530;
	sub_82D5ECB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8300f5bc
	if (ctx.cr6.eq) goto loc_8300F5BC;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8300f520
	if (ctx.cr6.lt) goto loc_8300F520;
loc_8300F568:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300F580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300f5b0
	if (ctx.cr6.eq) goto loc_8300F5B0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300F590:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300F5A4;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300f590
	if (!ctx.cr0.eq) goto loc_8300F590;
loc_8300F5B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8300F5BC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-9536
	ctx.r4.s64 = ctx.r11.s64 + -9536;
	// li r5,90
	ctx.r5.s64 = 90;
	// addi r8,r4,-116
	ctx.r8.s64 = ctx.r4.s64 + -116;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8300F5DC;
	sub_82D17988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300f608
	if (ctx.cr6.eq) goto loc_8300F608;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300F5E8:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300F5FC;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300f5e8
	if (!ctx.cr0.eq) goto loc_8300F5E8;
loc_8300F608:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F614"))) PPC_WEAK_FUNC(sub_8300F614);
PPC_FUNC_IMPL(__imp__sub_8300F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F618"))) PPC_WEAK_FUNC(sub_8300F618);
PPC_FUNC_IMPL(__imp__sub_8300F618) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8300e9b8
	ctx.lr = 0x8300F634;
	sub_8300E9B8(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F650"))) PPC_WEAK_FUNC(sub_8300F650);
PPC_FUNC_IMPL(__imp__sub_8300F650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8300e9b8
	ctx.lr = 0x8300F674;
	sub_8300E9B8(ctx, base);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F690"))) PPC_WEAK_FUNC(sub_8300F690);
PPC_FUNC_IMPL(__imp__sub_8300F690) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8300e9b8
	ctx.lr = 0x8300F6C0;
	sub_8300E9B8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8300f6d0
	if (ctx.cr6.eq) goto loc_8300F6D0;
loc_8300F6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8300f714
	goto loc_8300F714;
loc_8300F6D0:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8300e9b8
	ctx.lr = 0x8300F6E8;
	sub_8300E9B8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8300f6c8
	if (!ctx.cr6.eq) goto loc_8300F6C8;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8300e9b8
	ctx.lr = 0x8300F708;
	sub_8300E9B8(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8300F714:
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

__attribute__((alias("__imp__sub_8300F72C"))) PPC_WEAK_FUNC(sub_8300F72C);
PPC_FUNC_IMPL(__imp__sub_8300F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F730"))) PPC_WEAK_FUNC(sub_8300F730);
PPC_FUNC_IMPL(__imp__sub_8300F730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-9152
	ctx.r10.s64 = ctx.r11.s64 + -9152;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8300eb60
	ctx.lr = 0x8300F754;
	sub_8300EB60(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,-9168
	ctx.r8.s64 = ctx.r9.s64 + -9168;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F774"))) PPC_WEAK_FUNC(sub_8300F774);
PPC_FUNC_IMPL(__imp__sub_8300F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F778"))) PPC_WEAK_FUNC(sub_8300F778);
PPC_FUNC_IMPL(__imp__sub_8300F778) {
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
	// bl 0x8300eb60
	ctx.lr = 0x8300F794;
	sub_8300EB60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// ori r9,r11,32792
	ctx.r9.u64 = ctx.r11.u64 | 32792;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r8,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r11,-32304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32304);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8300F7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,122
	ctx.r5.s64 = 122;
	// ori r31,r4,32768
	ctx.r31.u64 = ctx.r4.u64 | 32768;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300F7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,32780
	ctx.r7.u64 = ctx.r9.u64 | 32780;
	// ori r6,r8,32788
	ctx.r6.u64 = ctx.r8.u64 | 32788;
	// stwx r3,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r31,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8300F810"))) PPC_WEAK_FUNC(sub_8300F810);
PPC_FUNC_IMPL(__imp__sub_8300F810) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9152
	ctx.r10.s64 = ctx.r11.s64 + -9152;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8300eb60
	ctx.lr = 0x8300F83C;
	sub_8300EB60(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,-9168
	ctx.r7.s64 = ctx.r9.s64 + -9168;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8300f860
	if (ctx.cr6.eq) goto loc_8300F860;
	// bl 0x822990f0
	ctx.lr = 0x8300F85C;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300F860:
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

__attribute__((alias("__imp__sub_8300F878"))) PPC_WEAK_FUNC(sub_8300F878);
PPC_FUNC_IMPL(__imp__sub_8300F878) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F880"))) PPC_WEAK_FUNC(sub_8300F880);
PPC_FUNC_IMPL(__imp__sub_8300F880) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9136
	ctx.r10.s64 = ctx.r11.s64 + -9136;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300F8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,-9212
	ctx.r5.s64 = ctx.r7.s64 + -9212;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8300f8f0
	if (ctx.cr6.eq) goto loc_8300F8F0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8300F8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8300F8F0:
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

__attribute__((alias("__imp__sub_8300F90C"))) PPC_WEAK_FUNC(sub_8300F90C);
PPC_FUNC_IMPL(__imp__sub_8300F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F910"))) PPC_WEAK_FUNC(sub_8300F910);
PPC_FUNC_IMPL(__imp__sub_8300F910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-7600
	ctx.r10.s64 = ctx.r11.s64 + -7600;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F920"))) PPC_WEAK_FUNC(sub_8300F920);
PPC_FUNC_IMPL(__imp__sub_8300F920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-7600
	ctx.r9.s64 = ctx.r11.s64 + -7600;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8300f954
	if (ctx.cr6.eq) goto loc_8300F954;
	// bl 0x822990f0
	ctx.lr = 0x8300F950;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300F954:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F968"))) PPC_WEAK_FUNC(sub_8300F968);
PPC_FUNC_IMPL(__imp__sub_8300F968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-7600
	ctx.r10.s64 = ctx.r11.s64 + -7600;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F978"))) PPC_WEAK_FUNC(sub_8300F978);
PPC_FUNC_IMPL(__imp__sub_8300F978) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300F98C"))) PPC_WEAK_FUNC(sub_8300F98C);
PPC_FUNC_IMPL(__imp__sub_8300F98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F990"))) PPC_WEAK_FUNC(sub_8300F990);
PPC_FUNC_IMPL(__imp__sub_8300F990) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300F9A4"))) PPC_WEAK_FUNC(sub_8300F9A4);
PPC_FUNC_IMPL(__imp__sub_8300F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F9A8"))) PPC_WEAK_FUNC(sub_8300F9A8);
PPC_FUNC_IMPL(__imp__sub_8300F9A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300F9BC"))) PPC_WEAK_FUNC(sub_8300F9BC);
PPC_FUNC_IMPL(__imp__sub_8300F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F9C0"))) PPC_WEAK_FUNC(sub_8300F9C0);
PPC_FUNC_IMPL(__imp__sub_8300F9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300F9D4"))) PPC_WEAK_FUNC(sub_8300F9D4);
PPC_FUNC_IMPL(__imp__sub_8300F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F9D8"))) PPC_WEAK_FUNC(sub_8300F9D8);
PPC_FUNC_IMPL(__imp__sub_8300F9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300F9EC"))) PPC_WEAK_FUNC(sub_8300F9EC);
PPC_FUNC_IMPL(__imp__sub_8300F9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F9F0"))) PPC_WEAK_FUNC(sub_8300F9F0);
PPC_FUNC_IMPL(__imp__sub_8300F9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300FA04"))) PPC_WEAK_FUNC(sub_8300FA04);
PPC_FUNC_IMPL(__imp__sub_8300FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FA08"))) PPC_WEAK_FUNC(sub_8300FA08);
PPC_FUNC_IMPL(__imp__sub_8300FA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300FA10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300fa44
	if (ctx.cr6.eq) goto loc_8300FA44;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8504
	ctx.r4.s64 = ctx.r11.s64 + -8504;
	// li r5,105
	ctx.r5.s64 = 105;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300FA44;
	sub_82D17988(ctx, base);
loc_8300FA44:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FA68"))) PPC_WEAK_FUNC(sub_8300FA68);
PPC_FUNC_IMPL(__imp__sub_8300FA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300FA70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300faa4
	if (ctx.cr6.eq) goto loc_8300FAA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8312
	ctx.r4.s64 = ctx.r11.s64 + -8312;
	// li r5,112
	ctx.r5.s64 = 112;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300FAA4;
	sub_82D17988(ctx, base);
loc_8300FAA4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FAC8"))) PPC_WEAK_FUNC(sub_8300FAC8);
PPC_FUNC_IMPL(__imp__sub_8300FAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300FAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300fb04
	if (ctx.cr6.eq) goto loc_8300FB04;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8120
	ctx.r4.s64 = ctx.r11.s64 + -8120;
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300FB04;
	sub_82D17988(ctx, base);
loc_8300FB04:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FB28"))) PPC_WEAK_FUNC(sub_8300FB28);
PPC_FUNC_IMPL(__imp__sub_8300FB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300FB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300fb64
	if (ctx.cr6.eq) goto loc_8300FB64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-7928
	ctx.r4.s64 = ctx.r11.s64 + -7928;
	// li r5,126
	ctx.r5.s64 = 126;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8300FB64;
	sub_82D17988(ctx, base);
loc_8300FB64:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FB88"))) PPC_WEAK_FUNC(sub_8300FB88);
PPC_FUNC_IMPL(__imp__sub_8300FB88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8300FB9C"))) PPC_WEAK_FUNC(sub_8300FB9C);
PPC_FUNC_IMPL(__imp__sub_8300FB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FBA0"))) PPC_WEAK_FUNC(sub_8300FBA0);
PPC_FUNC_IMPL(__imp__sub_8300FBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8300FBE0"))) PPC_WEAK_FUNC(sub_8300FBE0);
PPC_FUNC_IMPL(__imp__sub_8300FBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FBE4"))) PPC_WEAK_FUNC(sub_8300FBE4);
PPC_FUNC_IMPL(__imp__sub_8300FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FBE8"))) PPC_WEAK_FUNC(sub_8300FBE8);
PPC_FUNC_IMPL(__imp__sub_8300FBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-7528
	ctx.r10.s64 = ctx.r11.s64 + -7528;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8300FC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r7,-7600
	ctx.r6.s64 = ctx.r7.s64 + -7600;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FC3C"))) PPC_WEAK_FUNC(sub_8300FC3C);
PPC_FUNC_IMPL(__imp__sub_8300FC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FC40"))) PPC_WEAK_FUNC(sub_8300FC40);
PPC_FUNC_IMPL(__imp__sub_8300FC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8300FC48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8300fcc8
	if (ctx.cr0.eq) goto loc_8300FCC8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8300FC80:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8300FC90;
	sub_82D5ECB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8300fd1c
	if (ctx.cr6.eq) goto loc_8300FD1C;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8300fc80
	if (ctx.cr6.lt) goto loc_8300FC80;
loc_8300FCC8:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FCE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300fd10
	if (ctx.cr6.eq) goto loc_8300FD10;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300FCF0:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300FD04;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300fcf0
	if (!ctx.cr0.eq) goto loc_8300FCF0;
loc_8300FD10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8300FD1C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8920
	ctx.r4.s64 = ctx.r11.s64 + -8920;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8300FD3C;
	sub_82D17988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300fd68
	if (ctx.cr6.eq) goto loc_8300FD68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300FD48:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300FD5C;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300fd48
	if (!ctx.cr0.eq) goto loc_8300FD48;
loc_8300FD68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FD74"))) PPC_WEAK_FUNC(sub_8300FD74);
PPC_FUNC_IMPL(__imp__sub_8300FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FD78"))) PPC_WEAK_FUNC(sub_8300FD78);
PPC_FUNC_IMPL(__imp__sub_8300FD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8300FD80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8300fe00
	if (ctx.cr0.eq) goto loc_8300FE00;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8300FDB8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x8300FDC8;
	sub_82D5ECB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8300fe54
	if (ctx.cr6.eq) goto loc_8300FE54;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8300fdb8
	if (ctx.cr6.lt) goto loc_8300FDB8;
loc_8300FE00:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300fe48
	if (ctx.cr6.eq) goto loc_8300FE48;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300FE28:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300FE3C;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300fe28
	if (!ctx.cr0.eq) goto loc_8300FE28;
loc_8300FE48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8300FE54:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8696
	ctx.r4.s64 = ctx.r11.s64 + -8696;
	// li r5,58
	ctx.r5.s64 = 58;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8300FE74;
	sub_82D17988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8300fea0
	if (ctx.cr6.eq) goto loc_8300FEA0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8300FE80:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8300FE94;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8300fe80
	if (!ctx.cr0.eq) goto loc_8300FE80;
loc_8300FEA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FEAC"))) PPC_WEAK_FUNC(sub_8300FEAC);
PPC_FUNC_IMPL(__imp__sub_8300FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FEB0"))) PPC_WEAK_FUNC(sub_8300FEB0);
PPC_FUNC_IMPL(__imp__sub_8300FEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8300FEB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8300FEF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8300fef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8300FEF8;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FF2C"))) PPC_WEAK_FUNC(sub_8300FF2C);
PPC_FUNC_IMPL(__imp__sub_8300FF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FF30"))) PPC_WEAK_FUNC(sub_8300FF30);
PPC_FUNC_IMPL(__imp__sub_8300FF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8300FF38;
	__savegprlr_27(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,32592
	ctx.r12.u64 = ctx.r12.u64 | 32592;
	// bl 0x82cb8074
	ctx.lr = 0x8300FF44;
	sub_82CB8074(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83010110
	if (!ctx.cr6.eq) goto loc_83010110;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-9152
	ctx.r28.s64 = ctx.r11.s64 + -9152;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32876
	ctx.r12.u64 = ctx.r12.u64 | 32876;
	// stwx r30,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32880
	ctx.r12.u64 = ctx.r12.u64 | 32880;
	// stwx r30,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32884
	ctx.r12.u64 = ctx.r12.u64 | 32884;
	// stwx r30,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u32);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,32888
	ctx.r12.u64 = ctx.r12.u64 | 32888;
	// stbx r30,r1,r12
	PPC_STORE_U8(ctx.r1.u32 + ctx.r12.u32, ctx.r30.u8);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bl 0x8300f778
	ctx.lr = 0x8300FFA8;
	sub_8300F778(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300FFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8300e9b8
	ctx.lr = 0x8300FFEC;
	sub_8300E9B8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83010104
	if (ctx.cr6.eq) goto loc_83010104;
loc_8300FFF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83010010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8301003C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300f690
	ctx.lr = 0x83010048;
	sub_8300F690(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83010064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83010094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300f690
	ctx.lr = 0x830100A0;
	sub_8300F690(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830100BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830100EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300f690
	ctx.lr = 0x830100F8;
	sub_8300F690(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8300fff4
	if (!ctx.cr0.eq) goto loc_8300FFF4;
loc_83010104:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// bl 0x8300eb60
	ctx.lr = 0x83010110;
	sub_8300EB60(ctx, base);
loc_83010110:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010118"))) PPC_WEAK_FUNC(sub_83010118);
PPC_FUNC_IMPL(__imp__sub_83010118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-7528
	ctx.r9.s64 = ctx.r11.s64 + -7528;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8300ff30
	ctx.lr = 0x83010150;
	sub_8300FF30(ctx, base);
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

__attribute__((alias("__imp__sub_83010168"))) PPC_WEAK_FUNC(sub_83010168);
PPC_FUNC_IMPL(__imp__sub_83010168) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8301017C"))) PPC_WEAK_FUNC(sub_8301017C);
PPC_FUNC_IMPL(__imp__sub_8301017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010180"))) PPC_WEAK_FUNC(sub_83010180);
PPC_FUNC_IMPL(__imp__sub_83010180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83010188;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83010208
	if (ctx.cr0.eq) goto loc_83010208;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830101C0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ecb0
	ctx.lr = 0x830101D0;
	sub_82D5ECB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301025c
	if (ctx.cr6.eq) goto loc_8301025C;
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x830101c0
	if (ctx.cr6.lt) goto loc_830101C0;
loc_83010208:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83010220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83010250
	if (ctx.cr6.eq) goto loc_83010250;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83010230:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x83010244;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83010230
	if (!ctx.cr0.eq) goto loc_83010230;
loc_83010250:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8301025C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-7704
	ctx.r4.s64 = ctx.r11.s64 + -7704;
	// li r5,155
	ctx.r5.s64 = 155;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301027C;
	sub_82D17988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830102a8
	if (ctx.cr6.eq) goto loc_830102A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83010288:
	// lwz r11,21368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21368);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d5ed58
	ctx.lr = 0x8301029C;
	sub_82D5ED58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83010288
	if (!ctx.cr0.eq) goto loc_83010288;
loc_830102A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830102B4"))) PPC_WEAK_FUNC(sub_830102B4);
PPC_FUNC_IMPL(__imp__sub_830102B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830102B8"))) PPC_WEAK_FUNC(sub_830102B8);
PPC_FUNC_IMPL(__imp__sub_830102B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830102C0"))) PPC_WEAK_FUNC(sub_830102C0);
PPC_FUNC_IMPL(__imp__sub_830102C0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-7528
	ctx.r10.s64 = ctx.r11.s64 + -7528;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830102FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,-7600
	ctx.r5.s64 = ctx.r7.s64 + -7600;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x83010330
	if (ctx.cr6.eq) goto loc_83010330;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83010330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83010330:
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

__attribute__((alias("__imp__sub_8301034C"))) PPC_WEAK_FUNC(sub_8301034C);
PPC_FUNC_IMPL(__imp__sub_8301034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010350"))) PPC_WEAK_FUNC(sub_83010350);
PPC_FUNC_IMPL(__imp__sub_83010350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-6840
	ctx.r10.s64 = ctx.r11.s64 + -6840;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010360"))) PPC_WEAK_FUNC(sub_83010360);
PPC_FUNC_IMPL(__imp__sub_83010360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// stw r3,-32304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32304, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301036C"))) PPC_WEAK_FUNC(sub_8301036C);
PPC_FUNC_IMPL(__imp__sub_8301036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010370"))) PPC_WEAK_FUNC(sub_83010370);
PPC_FUNC_IMPL(__imp__sub_83010370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301038c
	if (ctx.cr6.eq) goto loc_8301038C;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83010390
	if (!ctx.cr6.eq) goto loc_83010390;
loc_8301038C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83010390:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010398"))) PPC_WEAK_FUNC(sub_83010398);
PPC_FUNC_IMPL(__imp__sub_83010398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-6788
	ctx.r10.s64 = ctx.r11.s64 + -6788;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830103A8"))) PPC_WEAK_FUNC(sub_830103A8);
PPC_FUNC_IMPL(__imp__sub_830103A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830103c4
	if (ctx.cr6.eq) goto loc_830103C4;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830103c8
	if (!ctx.cr6.eq) goto loc_830103C8;
loc_830103C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830103C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830103D0"))) PPC_WEAK_FUNC(sub_830103D0);
PPC_FUNC_IMPL(__imp__sub_830103D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,109
	ctx.r5.s64 = 109;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
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

__attribute__((alias("__imp__sub_830103F0"))) PPC_WEAK_FUNC(sub_830103F0);
PPC_FUNC_IMPL(__imp__sub_830103F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r8,110
	ctx.r8.s64 = 110;
	// addi r7,r10,-7408
	ctx.r7.s64 = ctx.r10.s64 + -7408;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83010420"))) PPC_WEAK_FUNC(sub_83010420);
PPC_FUNC_IMPL(__imp__sub_83010420) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83010444"))) PPC_WEAK_FUNC(sub_83010444);
PPC_FUNC_IMPL(__imp__sub_83010444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010448"))) PPC_WEAK_FUNC(sub_83010448);
PPC_FUNC_IMPL(__imp__sub_83010448) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8301046C"))) PPC_WEAK_FUNC(sub_8301046C);
PPC_FUNC_IMPL(__imp__sub_8301046C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010470"))) PPC_WEAK_FUNC(sub_83010470);
PPC_FUNC_IMPL(__imp__sub_83010470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-7392
	ctx.r4.s64 = ctx.r11.s64 + -7392;
	// li r5,336
	ctx.r5.s64 = 336;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82d17988
	sub_82D17988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301048C"))) PPC_WEAK_FUNC(sub_8301048C);
PPC_FUNC_IMPL(__imp__sub_8301048C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010490"))) PPC_WEAK_FUNC(sub_83010490);
PPC_FUNC_IMPL(__imp__sub_83010490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-6760
	ctx.r9.s64 = ctx.r11.s64 + -6760;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x831c67b8
	ctx.lr = 0x830104BC;
	sub_831C67B8(ctx, base);
	// bl 0x831c4e58
	ctx.lr = 0x830104C0;
	sub_831C4E58(ctx, base);
	// lis r8,-31890
	ctx.r8.s64 = -2089943040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22940, ctx.r11.u32);
	// bl 0x8315b858
	ctx.lr = 0x830104D0;
	sub_8315B858(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r7,-6840
	ctx.r6.s64 = ctx.r7.s64 + -6840;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830104F0"))) PPC_WEAK_FUNC(sub_830104F0);
PPC_FUNC_IMPL(__imp__sub_830104F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// cmpwi cr6,r4,97
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 97, ctx.xer);
	// lwz r11,21764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21764);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21764, ctx.r11.u32);
	// blt cr6,0x8301052c
	if (ctx.cr6.lt) goto loc_8301052C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,399
	ctx.r5.s64 = 399;
	// addi r11,r11,-7088
	ctx.r11.s64 = ctx.r11.s64 + -7088;
	// addi r7,r11,-200
	ctx.r7.s64 = ctx.r11.s64 + -200;
	// addi r4,r11,-152
	ctx.r4.s64 = ctx.r11.s64 + -152;
	// b 0x830105a4
	goto loc_830105A4;
loc_8301052C:
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,22160
	ctx.r9.s64 = ctx.r10.s64 + 22160;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// addi r10,r10,21376
	ctx.r10.s64 = ctx.r10.s64 + 21376;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83010580
	if (!ctx.cr6.eq) goto loc_83010580;
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x83010580
	if (!ctx.cr6.eq) goto loc_83010580;
loc_83010560:
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r10,22552
	ctx.r9.s64 = ctx.r10.s64 + 22552;
	// stfsx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83010580:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x83010594
	if (ctx.cr6.gt) goto loc_83010594;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83010560
	if (!ctx.cr6.gt) goto loc_83010560;
loc_83010594:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,419
	ctx.r5.s64 = 419;
	// addi r4,r11,-7088
	ctx.r4.s64 = ctx.r11.s64 + -7088;
	// addi r7,r4,-48
	ctx.r7.s64 = ctx.r4.s64 + -48;
loc_830105A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x830105B0;
	sub_82D17988(ctx, base);
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

__attribute__((alias("__imp__sub_830105C4"))) PPC_WEAK_FUNC(sub_830105C4);
PPC_FUNC_IMPL(__imp__sub_830105C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830105C8"))) PPC_WEAK_FUNC(sub_830105C8);
PPC_FUNC_IMPL(__imp__sub_830105C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,97
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 97, ctx.xer);
	// bge cr6,0x830105fc
	if (!ctx.cr6.lt) goto loc_830105FC;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,22552
	ctx.r9.s64 = ctx.r11.s64 + 22552;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830105FC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6944
	ctx.r4.s64 = ctx.r11.s64 + -6944;
	// li r5,433
	ctx.r5.s64 = 433;
	// addi r7,r4,-40
	ctx.r7.s64 = ctx.r4.s64 + -40;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x83010618;
	sub_82D17988(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010630"))) PPC_WEAK_FUNC(sub_83010630);
PPC_FUNC_IMPL(__imp__sub_83010630) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8301064C"))) PPC_WEAK_FUNC(sub_8301064C);
PPC_FUNC_IMPL(__imp__sub_8301064C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010650"))) PPC_WEAK_FUNC(sub_83010650);
PPC_FUNC_IMPL(__imp__sub_83010650) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010658"))) PPC_WEAK_FUNC(sub_83010658);
PPC_FUNC_IMPL(__imp__sub_83010658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1880
	ctx.r4.s64 = 1880;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301068C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830106a0
	if (ctx.cr6.eq) goto loc_830106A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830496d8
	ctx.lr = 0x8301069C;
	sub_830496D8(ctx, base);
	// b 0x830106a4
	goto loc_830106A4;
loc_830106A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830106A4:
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830106c0
	if (ctx.cr6.eq) goto loc_830106C0;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830106c4
	if (!ctx.cr6.eq) goto loc_830106C4;
loc_830106C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830106C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830106f0
	if (!ctx.cr6.eq) goto loc_830106F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830106ec
	if (ctx.cr6.eq) goto loc_830106EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830106EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830106EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830106F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010704"))) PPC_WEAK_FUNC(sub_83010704);
PPC_FUNC_IMPL(__imp__sub_83010704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010708"))) PPC_WEAK_FUNC(sub_83010708);
PPC_FUNC_IMPL(__imp__sub_83010708) {
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
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,264
	ctx.r4.s64 = 264;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83010734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83010750
	if (ctx.cr6.eq) goto loc_83010750;
	// bl 0x82d1a6a0
	ctx.lr = 0x83010740;
	sub_82D1A6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83010750:
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

__attribute__((alias("__imp__sub_83010764"))) PPC_WEAK_FUNC(sub_83010764);
PPC_FUNC_IMPL(__imp__sub_83010764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010768"))) PPC_WEAK_FUNC(sub_83010768);
PPC_FUNC_IMPL(__imp__sub_83010768) {
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
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,352
	ctx.r4.s64 = 352;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83010794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830107b0
	if (ctx.cr6.eq) goto loc_830107B0;
	// bl 0x82d52d00
	ctx.lr = 0x830107A0;
	sub_82D52D00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830107B0:
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

__attribute__((alias("__imp__sub_830107C4"))) PPC_WEAK_FUNC(sub_830107C4);
PPC_FUNC_IMPL(__imp__sub_830107C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830107C8"))) PPC_WEAK_FUNC(sub_830107C8);
PPC_FUNC_IMPL(__imp__sub_830107C8) {
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
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830107F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83010810
	if (ctx.cr6.eq) goto loc_83010810;
	// bl 0x83050d10
	ctx.lr = 0x83010800;
	sub_83050D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83010810:
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

__attribute__((alias("__imp__sub_83010824"))) PPC_WEAK_FUNC(sub_83010824);
PPC_FUNC_IMPL(__imp__sub_83010824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010828"))) PPC_WEAK_FUNC(sub_83010828);
PPC_FUNC_IMPL(__imp__sub_83010828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301082C"))) PPC_WEAK_FUNC(sub_8301082C);
PPC_FUNC_IMPL(__imp__sub_8301082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010830"))) PPC_WEAK_FUNC(sub_83010830);
PPC_FUNC_IMPL(__imp__sub_83010830) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010838"))) PPC_WEAK_FUNC(sub_83010838);
PPC_FUNC_IMPL(__imp__sub_83010838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83010840;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// addi r8,r11,-6760
	ctx.r8.s64 = ctx.r11.s64 + -6760;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r7,-31890
	ctx.r7.s64 = -2089943040;
	// stw r4,22944(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22944, ctx.r4.u32);
	// lis r5,-31890
	ctx.r5.s64 = -2089943040;
	// stw r31,22940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22940, ctx.r31.u32);
	// lis r4,-31890
	ctx.r4.s64 = -2089943040;
	// stw r11,21764(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21764, ctx.r11.u32);
	// lis r3,-31890
	ctx.r3.s64 = -2089943040;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// addi r6,r7,21768
	ctx.r6.s64 = ctx.r7.s64 + 21768;
	// addi r5,r5,21376
	ctx.r5.s64 = ctx.r5.s64 + 21376;
	// addi r4,r4,22160
	ctx.r4.s64 = ctx.r4.s64 + 22160;
	// addi r3,r3,22552
	ctx.r3.s64 = ctx.r3.s64 + 22552;
	// bl 0x83053f50
	ctx.lr = 0x8301089C;
	sub_83053F50(ctx, base);
	// lwz r11,21764(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21764);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21764(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21764, ctx.r11.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x8315b7e8
	ctx.lr = 0x830108B4;
	sub_8315B7E8(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// lis r9,-31999
	ctx.r9.s64 = -2097086464;
	// lis r8,-31999
	ctx.r8.s64 = -2097086464;
	// lis r7,-31999
	ctx.r7.s64 = -2097086464;
	// addi r6,r11,976
	ctx.r6.s64 = ctx.r11.s64 + 976;
	// addi r3,r8,1096
	ctx.r3.s64 = ctx.r8.s64 + 1096;
	// addi r5,r10,1056
	ctx.r5.s64 = ctx.r10.s64 + 1056;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r4,r9,1008
	ctx.r4.s64 = ctx.r9.s64 + 1008;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r7,1136
	ctx.r11.s64 = ctx.r7.s64 + 1136;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8315b808
	ctx.lr = 0x830108F8;
	sub_8315B808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010904"))) PPC_WEAK_FUNC(sub_83010904);
PPC_FUNC_IMPL(__imp__sub_83010904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010908"))) PPC_WEAK_FUNC(sub_83010908);
PPC_FUNC_IMPL(__imp__sub_83010908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83010910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,22944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22944, ctx.r31.u32);
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// bne cr6,0x83010938
	if (!ctx.cr6.eq) goto loc_83010938;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83010938:
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32304, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83010954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-31907
	ctx.r7.s64 = -2091057152;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// addi r6,r7,-15588
	ctx.r6.s64 = ctx.r7.s64 + -15588;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,-32308(r28)
	PPC_STORE_U32(ctx.r28.u32 + -32308, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// bl 0x82d5f3d8
	ctx.lr = 0x83010974;
	sub_82D5F3D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83010998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830109b8
	if (ctx.cr6.eq) goto loc_830109B8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83010838
	ctx.lr = 0x830109B0;
	sub_83010838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_830109B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830109C4"))) PPC_WEAK_FUNC(sub_830109C4);
PPC_FUNC_IMPL(__imp__sub_830109C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830109C8"))) PPC_WEAK_FUNC(sub_830109C8);
PPC_FUNC_IMPL(__imp__sub_830109C8) {
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
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,94
	ctx.r5.s64 = 94;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83010A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83010a50
	if (ctx.cr6.eq) goto loc_83010A50;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6704
	ctx.r9.s64 = ctx.r10.s64 + -6704;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// b 0x83010a54
	goto loc_83010A54;
loc_83010A50:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83010A54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83052108
	ctx.lr = 0x83010A60;
	sub_83052108(ctx, base);
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

__attribute__((alias("__imp__sub_83010A7C"))) PPC_WEAK_FUNC(sub_83010A7C);
PPC_FUNC_IMPL(__imp__sub_83010A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010A80"))) PPC_WEAK_FUNC(sub_83010A80);
PPC_FUNC_IMPL(__imp__sub_83010A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-6840
	ctx.r10.s64 = ctx.r11.s64 + -6840;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010A90"))) PPC_WEAK_FUNC(sub_83010A90);
PPC_FUNC_IMPL(__imp__sub_83010A90) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010A98"))) PPC_WEAK_FUNC(sub_83010A98);
PPC_FUNC_IMPL(__imp__sub_83010A98) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010AA0"))) PPC_WEAK_FUNC(sub_83010AA0);
PPC_FUNC_IMPL(__imp__sub_83010AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6704
	ctx.r9.s64 = ctx.r10.s64 + -6704;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010AE4"))) PPC_WEAK_FUNC(sub_83010AE4);
PPC_FUNC_IMPL(__imp__sub_83010AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010AE8"))) PPC_WEAK_FUNC(sub_83010AE8);
PPC_FUNC_IMPL(__imp__sub_83010AE8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010AF0"))) PPC_WEAK_FUNC(sub_83010AF0);
PPC_FUNC_IMPL(__imp__sub_83010AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010AF8"))) PPC_WEAK_FUNC(sub_83010AF8);
PPC_FUNC_IMPL(__imp__sub_83010AF8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-6760
	ctx.r9.s64 = ctx.r11.s64 + -6760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x831c67b8
	ctx.lr = 0x83010B2C;
	sub_831C67B8(ctx, base);
	// bl 0x831c4e58
	ctx.lr = 0x83010B30;
	sub_831C4E58(ctx, base);
	// lis r8,-31890
	ctx.r8.s64 = -2089943040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22940, ctx.r11.u32);
	// bl 0x8315b858
	ctx.lr = 0x83010B40;
	sub_8315B858(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,-6840
	ctx.r5.s64 = ctx.r7.s64 + -6840;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x83010b74
	if (ctx.cr6.eq) goto loc_83010B74;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83010B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83010B74:
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

__attribute__((alias("__imp__sub_83010B90"))) PPC_WEAK_FUNC(sub_83010B90);
PPC_FUNC_IMPL(__imp__sub_83010B90) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// ori r9,r11,31161
	ctx.r9.u64 = ctx.r11.u64 | 31161;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x83010c70
	if (ctx.cr6.lt) goto loc_83010C70;
	// li r8,3
	ctx.r8.s64 = 3;
	// divwu r8,r4,r8
	ctx.r8.u32 = ctx.r4.u32 / ctx.r8.u32;
loc_83010BB8:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r6,r10,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r5,r10,19,13,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r6,r9,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// xor r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r10,r6,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// xor r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r5,r9,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r5,r10,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r11,r9,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// xor r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r9,r11,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r9,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r9.s64;
	// rlwinm r5,r9,17,15,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// bne 0x83010bb8
	if (!ctx.cr0.eq) goto loc_83010BB8;
loc_83010C70:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x83010c8c
	if (ctx.cr6.eq) goto loc_83010C8C;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x83010c94
	if (!ctx.cr6.eq) goto loc_83010C94;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_83010C8C:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_83010C94:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r9,r11,19,13,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// subf r8,r5,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r5.s64;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r6,r7,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r5,r7,20,12,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xFFFFF;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r3,r7,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r7.s64;
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r6,r8,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r10,r8,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r8.s64;
	// subf r9,r4,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r4.s64;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r6,r8,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r3,r5,17,15,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// xor r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010D2C"))) PPC_WEAK_FUNC(sub_83010D2C);
PPC_FUNC_IMPL(__imp__sub_83010D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010D30"))) PPC_WEAK_FUNC(sub_83010D30);
PPC_FUNC_IMPL(__imp__sub_83010D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r11,-30580
	ctx.r10.s64 = ctx.r11.s64 + -30580;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010D40"))) PPC_WEAK_FUNC(sub_83010D40);
PPC_FUNC_IMPL(__imp__sub_83010D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,30324
	ctx.r10.s64 = ctx.r11.s64 + 30324;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010D50"))) PPC_WEAK_FUNC(sub_83010D50);
PPC_FUNC_IMPL(__imp__sub_83010D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// sth r9,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// sth r11,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010D80"))) PPC_WEAK_FUNC(sub_83010D80);
PPC_FUNC_IMPL(__imp__sub_83010D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f1,12(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f1,16(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f1,20(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f8,20(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E20"))) PPC_WEAK_FUNC(sub_83010E20);
PPC_FUNC_IMPL(__imp__sub_83010E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E28"))) PPC_WEAK_FUNC(sub_83010E28);
PPC_FUNC_IMPL(__imp__sub_83010E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E30"))) PPC_WEAK_FUNC(sub_83010E30);
PPC_FUNC_IMPL(__imp__sub_83010E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E38"))) PPC_WEAK_FUNC(sub_83010E38);
PPC_FUNC_IMPL(__imp__sub_83010E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E40"))) PPC_WEAK_FUNC(sub_83010E40);
PPC_FUNC_IMPL(__imp__sub_83010E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E48"))) PPC_WEAK_FUNC(sub_83010E48);
PPC_FUNC_IMPL(__imp__sub_83010E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E50"))) PPC_WEAK_FUNC(sub_83010E50);
PPC_FUNC_IMPL(__imp__sub_83010E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E58"))) PPC_WEAK_FUNC(sub_83010E58);
PPC_FUNC_IMPL(__imp__sub_83010E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E60"))) PPC_WEAK_FUNC(sub_83010E60);
PPC_FUNC_IMPL(__imp__sub_83010E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E68"))) PPC_WEAK_FUNC(sub_83010E68);
PPC_FUNC_IMPL(__imp__sub_83010E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E70"))) PPC_WEAK_FUNC(sub_83010E70);
PPC_FUNC_IMPL(__imp__sub_83010E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-5076
	ctx.r10.s64 = ctx.r11.s64 + -5076;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E80"))) PPC_WEAK_FUNC(sub_83010E80);
PPC_FUNC_IMPL(__imp__sub_83010E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-5024
	ctx.r10.s64 = ctx.r11.s64 + -5024;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E90"))) PPC_WEAK_FUNC(sub_83010E90);
PPC_FUNC_IMPL(__imp__sub_83010E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8305a2f8
	sub_8305A2F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010E98"))) PPC_WEAK_FUNC(sub_83010E98);
PPC_FUNC_IMPL(__imp__sub_83010E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8305ebe0
	sub_8305EBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010EA0"))) PPC_WEAK_FUNC(sub_83010EA0);
PPC_FUNC_IMPL(__imp__sub_83010EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x83058b70
	sub_83058B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010EA8"))) PPC_WEAK_FUNC(sub_83010EA8);
PPC_FUNC_IMPL(__imp__sub_83010EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8305a408
	sub_8305A408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010EB0"))) PPC_WEAK_FUNC(sub_83010EB0);
PPC_FUNC_IMPL(__imp__sub_83010EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83010EB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831bebf0
	ctx.lr = 0x83010ECC;
	sub_831BEBF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-4984
	ctx.r10.s64 = ctx.r11.s64 + -4984;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010EEC"))) PPC_WEAK_FUNC(sub_83010EEC);
PPC_FUNC_IMPL(__imp__sub_83010EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010EF0"))) PPC_WEAK_FUNC(sub_83010EF0);
PPC_FUNC_IMPL(__imp__sub_83010EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010EF8"))) PPC_WEAK_FUNC(sub_83010EF8);
PPC_FUNC_IMPL(__imp__sub_83010EF8) {
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x83010f2c
	if (!ctx.cr6.eq) goto loc_83010F2C;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// b 0x83010f44
	goto loc_83010F44;
loc_83010F2C:
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// lfs f2,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// bl 0x83003a68
	ctx.lr = 0x83010F44;
	sub_83003A68(ctx, base);
loc_83010F44:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// bl 0x831bf110
	ctx.lr = 0x83010F54;
	sub_831BF110(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x831bf118
	ctx.lr = 0x83010F5C;
	sub_831BF118(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010F70"))) PPC_WEAK_FUNC(sub_83010F70);
PPC_FUNC_IMPL(__imp__sub_83010F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83010F90"))) PPC_WEAK_FUNC(sub_83010F90);
PPC_FUNC_IMPL(__imp__sub_83010F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010F94"))) PPC_WEAK_FUNC(sub_83010F94);
PPC_FUNC_IMPL(__imp__sub_83010F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010F98"))) PPC_WEAK_FUNC(sub_83010F98);
PPC_FUNC_IMPL(__imp__sub_83010F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r4,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x831bf120
	sub_831BF120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010FAC"))) PPC_WEAK_FUNC(sub_83010FAC);
PPC_FUNC_IMPL(__imp__sub_83010FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010FB0"))) PPC_WEAK_FUNC(sub_83010FB0);
PPC_FUNC_IMPL(__imp__sub_83010FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83010FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301106c
	if (!ctx.cr6.eq) goto loc_8301106C;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,61
	ctx.r5.s64 = 61;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83010FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83011020
	if (ctx.cr6.eq) goto loc_83011020;
	// bl 0x831bebf0
	ctx.lr = 0x83011000;
	sub_831BEBF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// addi r9,r11,-4984
	ctx.r9.s64 = ctx.r11.s64 + -4984;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x83011024
	goto loc_83011024;
loc_83011020:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83011024:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,-6628
	ctx.r4.s64 = ctx.r10.s64 + -6628;
	// bl 0x82cb61f0
	ctx.lr = 0x83011038;
	sub_82CB61F0(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x831bec98
	ctx.lr = 0x83011044;
	sub_831BEC98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x831beef8
	ctx.lr = 0x83011050;
	sub_831BEEF8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8301106C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301106C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011074"))) PPC_WEAK_FUNC(sub_83011074);
PPC_FUNC_IMPL(__imp__sub_83011074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011078"))) PPC_WEAK_FUNC(sub_83011078);
PPC_FUNC_IMPL(__imp__sub_83011078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830110d4
	if (ctx.cr6.eq) goto loc_830110D4;
	// bl 0x831bed30
	ctx.lr = 0x8301109C;
	sub_831BED30(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x831bf118
	ctx.lr = 0x830110A4;
	sub_831BF118(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x831bed58
	ctx.lr = 0x830110AC;
	sub_831BED58(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830110d4
	if (ctx.cr6.eq) goto loc_830110D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830110CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
loc_830110D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830110E8"))) PPC_WEAK_FUNC(sub_830110E8);
PPC_FUNC_IMPL(__imp__sub_830110E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// subfe r4,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x831bf120
	sub_831BF120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011100"))) PPC_WEAK_FUNC(sub_83011100);
PPC_FUNC_IMPL(__imp__sub_83011100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011104"))) PPC_WEAK_FUNC(sub_83011104);
PPC_FUNC_IMPL(__imp__sub_83011104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011108"))) PPC_WEAK_FUNC(sub_83011108);
PPC_FUNC_IMPL(__imp__sub_83011108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301110C"))) PPC_WEAK_FUNC(sub_8301110C);
PPC_FUNC_IMPL(__imp__sub_8301110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011110"))) PPC_WEAK_FUNC(sub_83011110);
PPC_FUNC_IMPL(__imp__sub_83011110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83011118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x8301112C;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301121c
	if (ctx.cr6.eq) goto loc_8301121C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83011170
	if (ctx.cr6.eq) goto loc_83011170;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6320
	ctx.r4.s64 = ctx.r11.s64 + -6320;
	// li r5,973
	ctx.r5.s64 = 973;
	// addi r7,r4,-60
	ctx.r7.s64 = ctx.r4.s64 + -60;
	// li r3,1
	ctx.r3.s64 = 1;
	// xori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 ^ 4;
	// bl 0x82d17988
	ctx.lr = 0x83011170;
	sub_82D17988(ctx, base);
loc_83011170:
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830111d0
	if (ctx.cr6.eq) goto loc_830111D0;
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830111e8
	if (ctx.cr6.eq) goto loc_830111E8;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,21368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21368);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830111B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x830111ec
	if (!ctx.cr6.eq) goto loc_830111EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830111ec
	goto loc_830111EC;
loc_830111D0:
	// rlwinm r10,r31,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83011200
	if (!ctx.cr6.eq) goto loc_83011200;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83011200
	if (ctx.cr6.eq) goto loc_83011200;
loc_830111E8:
	// rlwinm r4,r31,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x1;
loc_830111EC:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83011200:
	// stw r31,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011240
	if (ctx.cr6.eq) goto loc_83011240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83011214;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8301121C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-6320
	ctx.r11.s64 = ctx.r11.s64 + -6320;
	// li r5,969
	ctx.r5.s64 = 969;
	// addi r8,r11,-280
	ctx.r8.s64 = ctx.r11.s64 + -280;
	// addi r7,r11,-256
	ctx.r7.s64 = ctx.r11.s64 + -256;
	// addi r4,r11,-160
	ctx.r4.s64 = ctx.r11.s64 + -160;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83011240;
	sub_82D17988(ctx, base);
loc_83011240:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011248"))) PPC_WEAK_FUNC(sub_83011248);
PPC_FUNC_IMPL(__imp__sub_83011248) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x83011270;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830112e0
	if (ctx.cr6.eq) goto loc_830112E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x830112c0
	if (!ctx.cr6.lt) goto loc_830112C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5960
	ctx.r4.s64 = ctx.r11.s64 + -5960;
	// li r5,982
	ctx.r5.s64 = 982;
	// addi r7,r4,-36
	ctx.r7.s64 = ctx.r4.s64 + -36;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x830112AC;
	sub_82D17988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83011304
	if (ctx.cr6.eq) goto loc_83011304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830112BC;
	sub_82D5ED58(ctx, base);
	// b 0x83011304
	goto loc_83011304;
loc_830112C0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stfs f31,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f31,96(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// beq cr6,0x83011304
	if (ctx.cr6.eq) goto loc_83011304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830112DC;
	sub_82D5ED58(ctx, base);
	// b 0x83011304
	goto loc_83011304;
loc_830112E0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-5960
	ctx.r11.s64 = ctx.r11.s64 + -5960;
	// li r5,981
	ctx.r5.s64 = 981;
	// addi r8,r11,-260
	ctx.r8.s64 = ctx.r11.s64 + -260;
	// addi r7,r11,-232
	ctx.r7.s64 = ctx.r11.s64 + -232;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83011304;
	sub_82D17988(ctx, base);
loc_83011304:
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

__attribute__((alias("__imp__sub_83011320"))) PPC_WEAK_FUNC(sub_83011320);
PPC_FUNC_IMPL(__imp__sub_83011320) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x83011344;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301136c
	if (ctx.cr6.eq) goto loc_8301136C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r30.u32);
	// beq cr6,0x8301138c
	if (ctx.cr6.eq) goto loc_8301138C;
	// bl 0x82d5ed58
	ctx.lr = 0x83011368;
	sub_82D5ED58(ctx, base);
	// b 0x8301138c
	goto loc_8301138C;
loc_8301136C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5728
	ctx.r4.s64 = ctx.r11.s64 + -5728;
	// li r5,990
	ctx.r5.s64 = 990;
	// addi r8,r4,-132
	ctx.r8.s64 = ctx.r4.s64 + -132;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x8301138C;
	sub_82D17988(ctx, base);
loc_8301138C:
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

__attribute__((alias("__imp__sub_830113A4"))) PPC_WEAK_FUNC(sub_830113A4);
PPC_FUNC_IMPL(__imp__sub_830113A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830113A8"))) PPC_WEAK_FUNC(sub_830113A8);
PPC_FUNC_IMPL(__imp__sub_830113A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830113B0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d5ecb0
	ctx.lr = 0x830113D0;
	sub_82D5ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83011408
	if (ctx.cr6.eq) goto loc_83011408;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f31,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// stw r29,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// beq cr6,0x83011428
	if (ctx.cr6.eq) goto loc_83011428;
	// bl 0x82d5ed58
	ctx.lr = 0x830113FC;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83011408:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5504
	ctx.r4.s64 = ctx.r11.s64 + -5504;
	// li r5,996
	ctx.r5.s64 = 996;
	// addi r8,r4,-124
	ctx.r8.s64 = ctx.r4.s64 + -124;
	// addi r7,r4,-96
	ctx.r7.s64 = ctx.r4.s64 + -96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83011428;
	sub_82D17988(ctx, base);
loc_83011428:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011434"))) PPC_WEAK_FUNC(sub_83011434);
PPC_FUNC_IMPL(__imp__sub_83011434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011438"))) PPC_WEAK_FUNC(sub_83011438);
PPC_FUNC_IMPL(__imp__sub_83011438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011468"))) PPC_WEAK_FUNC(sub_83011468);
PPC_FUNC_IMPL(__imp__sub_83011468) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011474"))) PPC_WEAK_FUNC(sub_83011474);
PPC_FUNC_IMPL(__imp__sub_83011474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011478"))) PPC_WEAK_FUNC(sub_83011478);
PPC_FUNC_IMPL(__imp__sub_83011478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011484"))) PPC_WEAK_FUNC(sub_83011484);
PPC_FUNC_IMPL(__imp__sub_83011484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011488"))) PPC_WEAK_FUNC(sub_83011488);
PPC_FUNC_IMPL(__imp__sub_83011488) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83011498
	if (!ctx.cr6.eq) goto loc_83011498;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83011498:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830114A4"))) PPC_WEAK_FUNC(sub_830114A4);
PPC_FUNC_IMPL(__imp__sub_830114A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830114A8"))) PPC_WEAK_FUNC(sub_830114A8);
PPC_FUNC_IMPL(__imp__sub_830114A8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-1
	ctx.r3.s64 = -65536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830114B0"))) PPC_WEAK_FUNC(sub_830114B0);
PPC_FUNC_IMPL(__imp__sub_830114B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x830114B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301151c
	if (ctx.cr6.eq) goto loc_8301151C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830114EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8301151c
	if (!ctx.cr6.eq) goto loc_8301151C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301151C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301151C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011524"))) PPC_WEAK_FUNC(sub_83011524);
PPC_FUNC_IMPL(__imp__sub_83011524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011528"))) PPC_WEAK_FUNC(sub_83011528);
PPC_FUNC_IMPL(__imp__sub_83011528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83011578"))) PPC_WEAK_FUNC(sub_83011578);
PPC_FUNC_IMPL(__imp__sub_83011578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301157C"))) PPC_WEAK_FUNC(sub_8301157C);
PPC_FUNC_IMPL(__imp__sub_8301157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011580"))) PPC_WEAK_FUNC(sub_83011580);
PPC_FUNC_IMPL(__imp__sub_83011580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83011588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// addi r10,r11,-4964
	ctx.r10.s64 = ctx.r11.s64 + -4964;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830115fc
	if (ctx.cr6.eq) goto loc_830115FC;
loc_830115B0:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830115f0
	if (ctx.cr6.eq) goto loc_830115F0;
loc_830115C0:
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830115D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// bne cr6,0x830115c0
	if (!ctx.cr6.eq) goto loc_830115C0;
loc_830115F0:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x830115b0
	if (!ctx.cr6.eq) goto loc_830115B0;
loc_830115FC:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83011624
	if (ctx.cr6.eq) goto loc_83011624;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301161C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_83011624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301162C"))) PPC_WEAK_FUNC(sub_8301162C);
PPC_FUNC_IMPL(__imp__sub_8301162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011630"))) PPC_WEAK_FUNC(sub_83011630);
PPC_FUNC_IMPL(__imp__sub_83011630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83011638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,25032
	ctx.r11.s64 = 1640497152;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,34375
	ctx.r11.u64 = ctx.r11.u64 | 34375;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r10,19,13,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subf r3,r10,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// xor r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// rlwinm r11,r4,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0x7FFFF;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// xor r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r3,r5,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r5.s64;
	// rlwinm r11,r5,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xFFFFF;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r6,r5,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r5.s64;
	// xor r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// xor r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// subf r6,r7,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r5,r7,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// xor r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// subf r6,r11,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subf r3,r11,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r11.s64;
	// xor r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// rlwinm r5,r7,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rlwinm r11,r4,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFFF;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// xor r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r3,r11,19,13,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// subf r7,r4,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r6,r11,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r11.s64;
	// xor r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// xor r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r4,r7,19,13,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x7FFFF;
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// xor r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// rlwinm r4,r6,20,12,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFFFF;
	// subf r3,r7,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// xor r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// rlwinm r3,r5,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// xor r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r4,r7,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// xor r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// rlwinm r4,r6,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r3,r7,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// xor r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// rlwinm r3,r5,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// xor r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r4,r7,17,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// and r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 & ctx.r6.u64;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830117d4
	if (ctx.cr6.eq) goto loc_830117D4;
loc_830117A4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830117c8
	if (!ctx.cr6.eq) goto loc_830117C8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830117c8
	if (!ctx.cr6.eq) goto loc_830117C8;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8301183c
	if (ctx.cr6.eq) goto loc_8301183C;
loc_830117C8:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830117a4
	if (!ctx.cr6.eq) goto loc_830117A4;
loc_830117D4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// li r5,102
	ctx.r5.s64 = 102;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83011800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301184c
	if (ctx.cr6.eq) goto loc_8301184C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// sth r10,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r10.u16);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x83011850
	goto loc_83011850;
loc_8301183C:
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8301184C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83011850:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301186C"))) PPC_WEAK_FUNC(sub_8301186C);
PPC_FUNC_IMPL(__imp__sub_8301186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011870"))) PPC_WEAK_FUNC(sub_83011870);
PPC_FUNC_IMPL(__imp__sub_83011870) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011878"))) PPC_WEAK_FUNC(sub_83011878);
PPC_FUNC_IMPL(__imp__sub_83011878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301187C"))) PPC_WEAK_FUNC(sub_8301187C);
PPC_FUNC_IMPL(__imp__sub_8301187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011880"))) PPC_WEAK_FUNC(sub_83011880);
PPC_FUNC_IMPL(__imp__sub_83011880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011884"))) PPC_WEAK_FUNC(sub_83011884);
PPC_FUNC_IMPL(__imp__sub_83011884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011888"))) PPC_WEAK_FUNC(sub_83011888);
PPC_FUNC_IMPL(__imp__sub_83011888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301188C"))) PPC_WEAK_FUNC(sub_8301188C);
PPC_FUNC_IMPL(__imp__sub_8301188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011890"))) PPC_WEAK_FUNC(sub_83011890);
PPC_FUNC_IMPL(__imp__sub_83011890) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011898"))) PPC_WEAK_FUNC(sub_83011898);
PPC_FUNC_IMPL(__imp__sub_83011898) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830118A0"))) PPC_WEAK_FUNC(sub_830118A0);
PPC_FUNC_IMPL(__imp__sub_830118A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830118A8"))) PPC_WEAK_FUNC(sub_830118A8);
PPC_FUNC_IMPL(__imp__sub_830118A8) {
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

__attribute__((alias("__imp__sub_830118BC"))) PPC_WEAK_FUNC(sub_830118BC);
PPC_FUNC_IMPL(__imp__sub_830118BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830118C0"))) PPC_WEAK_FUNC(sub_830118C0);
PPC_FUNC_IMPL(__imp__sub_830118C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83011904
	if (ctx.cr6.lt) goto loc_83011904;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83011934
	goto loc_83011934;
loc_83011904:
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x83011914
	if (!ctx.cr6.lt) goto loc_83011914;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_83011914:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82cb1160
	ctx.lr = 0x83011924;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83011934:
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

__attribute__((alias("__imp__sub_8301194C"))) PPC_WEAK_FUNC(sub_8301194C);
PPC_FUNC_IMPL(__imp__sub_8301194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011950"))) PPC_WEAK_FUNC(sub_83011950);
PPC_FUNC_IMPL(__imp__sub_83011950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83011958;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,916(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83011984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,152(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830119A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,152(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 152);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x830119BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f30,6140(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x83011a44
	if (ctx.cr6.eq) goto loc_83011A44;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83011a44
	if (ctx.cr6.eq) goto loc_83011A44;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83011A44:
	// clrlwi r26,r26,16
	ctx.r26.u64 = ctx.r26.u32 & 0xFFFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x83011afc
	if (ctx.cr6.lt) goto loc_83011AFC;
loc_83011A54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83011af0
	if (ctx.cr6.eq) goto loc_83011AF0;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83011AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83011AF0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x83011a54
	if (!ctx.cr6.gt) goto loc_83011A54;
loc_83011AFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 360);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,364(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 364);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83011B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,388(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 388);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83011bec
	if (ctx.cr6.eq) goto loc_83011BEC;
loc_83011B90:
	// addi r29,r1,258
	ctx.r29.s64 = ctx.r1.s64 + 258;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83011B98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,2(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2);
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r4,-2(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + -2);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x83011b98
	if (!ctx.cr0.eq) goto loc_83011B98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83011b90
	if (!ctx.cr6.eq) goto loc_83011B90;
loc_83011BEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,392(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 392);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,412(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 412);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83011C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,396(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83011C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,400(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83011C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r7,420(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 420);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83011CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,404(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83011CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011CC8"))) PPC_WEAK_FUNC(sub_83011CC8);
PPC_FUNC_IMPL(__imp__sub_83011CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83011CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83011d4c
	if (ctx.cr0.eq) goto loc_83011D4C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83011D0C:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83011d0c
	if (ctx.cr6.lt) goto loc_83011D0C;
loc_83011D4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011D54"))) PPC_WEAK_FUNC(sub_83011D54);
PPC_FUNC_IMPL(__imp__sub_83011D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011D58"))) PPC_WEAK_FUNC(sub_83011D58);
PPC_FUNC_IMPL(__imp__sub_83011D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83011D60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83011e08
	if (ctx.cr0.eq) goto loc_83011E08;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83011D84:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,468(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,472(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 472);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83011DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83011de8
	if (ctx.cr6.eq) goto loc_83011DE8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83011DC8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83011dc8
	if (!ctx.cr0.eq) goto loc_83011DC8;
loc_83011DE8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83011d84
	if (ctx.cr6.lt) goto loc_83011D84;
loc_83011E08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011E10"))) PPC_WEAK_FUNC(sub_83011E10);
PPC_FUNC_IMPL(__imp__sub_83011E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83011E18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83011ecc
	if (ctx.cr0.eq) goto loc_83011ECC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83011E40:
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r29,36(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,468(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,472(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 472);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83011E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83011eac
	if (ctx.cr6.eq) goto loc_83011EAC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83011E88:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83011e88
	if (!ctx.cr0.eq) goto loc_83011E88;
loc_83011EAC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83011e40
	if (ctx.cr6.lt) goto loc_83011E40;
loc_83011ECC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011ED4"))) PPC_WEAK_FUNC(sub_83011ED4);
PPC_FUNC_IMPL(__imp__sub_83011ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011ED8"))) PPC_WEAK_FUNC(sub_83011ED8);
PPC_FUNC_IMPL(__imp__sub_83011ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83011EE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x83011fb0
	if (!ctx.cr6.eq) goto loc_83011FB0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83011fb0
	if (ctx.cr0.eq) goto loc_83011FB0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83011F24:
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r29,12(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,468(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83011F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,472(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 472);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83011F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83011f90
	if (ctx.cr6.eq) goto loc_83011F90;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83011F6C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83011f6c
	if (!ctx.cr0.eq) goto loc_83011F6C;
loc_83011F90:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83011f24
	if (ctx.cr6.lt) goto loc_83011F24;
loc_83011FB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011FB8"))) PPC_WEAK_FUNC(sub_83011FB8);
PPC_FUNC_IMPL(__imp__sub_83011FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83011FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012034
	if (ctx.cr0.eq) goto loc_83012034;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83011FE8:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,244(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83012008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c05d8
	ctx.lr = 0x83012014;
	sub_831C05D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83011fe8
	if (ctx.cr6.lt) goto loc_83011FE8;
loc_83012034:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301203C"))) PPC_WEAK_FUNC(sub_8301203C);
PPC_FUNC_IMPL(__imp__sub_8301203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012040"))) PPC_WEAK_FUNC(sub_83012040);
PPC_FUNC_IMPL(__imp__sub_83012040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83012048;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// srawi. r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq 0x83012170
	if (ctx.cr0.eq) goto loc_83012170;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_830120D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8301212c
	if (!ctx.cr6.eq) goto loc_8301212C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bge cr6,0x83012154
	if (!ctx.cr6.lt) goto loc_83012154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83012118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8301212c
	if (!ctx.cr6.gt) goto loc_8301212C;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8301212C:
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
	// blt cr6,0x830120d8
	if (ctx.cr6.lt) goto loc_830120D8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83012154:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5176
	ctx.r4.s64 = ctx.r11.s64 + -5176;
	// li r5,1715
	ctx.r5.s64 = 1715;
	// addi r7,r4,-88
	ctx.r7.s64 = ctx.r4.s64 + -88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83012170;
	sub_82D17988(ctx, base);
loc_83012170:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012178"))) PPC_WEAK_FUNC(sub_83012178);
PPC_FUNC_IMPL(__imp__sub_83012178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83012180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012234
	if (ctx.cr0.eq) goto loc_83012234;
	// li r28,0
	ctx.r28.s64 = 0;
loc_830121A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012214
	if (!ctx.cr6.eq) goto loc_83012214;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830121DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83012214
	if (ctx.cr6.eq) goto loc_83012214;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830121FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83012214
	if (!ctx.cr6.eq) goto loc_83012214;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_83012214:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830121a8
	if (ctx.cr6.lt) goto loc_830121A8;
loc_83012234:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301223C"))) PPC_WEAK_FUNC(sub_8301223C);
PPC_FUNC_IMPL(__imp__sub_8301223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012240"))) PPC_WEAK_FUNC(sub_83012240);
PPC_FUNC_IMPL(__imp__sub_83012240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83012248;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830122f4
	if (ctx.cr0.eq) goto loc_830122F4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83012274:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830122d4
	if (!ctx.cr6.eq) goto loc_830122D4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830122A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830122d4
	if (ctx.cr6.eq) goto loc_830122D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830122C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x830122d4
	if (!ctx.cr6.gt) goto loc_830122D4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_830122D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012274
	if (ctx.cr6.lt) goto loc_83012274;
loc_830122F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830122FC"))) PPC_WEAK_FUNC(sub_830122FC);
PPC_FUNC_IMPL(__imp__sub_830122FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012300"))) PPC_WEAK_FUNC(sub_83012300);
PPC_FUNC_IMPL(__imp__sub_83012300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83012308;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830123ac
	if (ctx.cr0.eq) goto loc_830123AC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83012344:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8301238c
	if (!ctx.cr6.eq) goto loc_8301238C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,252(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83012380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830123bc
	if (!ctx.cr6.eq) goto loc_830123BC;
loc_8301238C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012344
	if (ctx.cr6.lt) goto loc_83012344;
loc_830123AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_830123BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830123CC"))) PPC_WEAK_FUNC(sub_830123CC);
PPC_FUNC_IMPL(__imp__sub_830123CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830123D0"))) PPC_WEAK_FUNC(sub_830123D0);
PPC_FUNC_IMPL(__imp__sub_830123D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x830123D8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012480
	if (ctx.cr0.eq) goto loc_83012480;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83012414:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012460
	if (!ctx.cr6.eq) goto loc_83012460;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,256(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83012454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83012490
	if (!ctx.cr6.eq) goto loc_83012490;
loc_83012460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012414
	if (ctx.cr6.lt) goto loc_83012414;
loc_83012480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83012490:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830124A0"))) PPC_WEAK_FUNC(sub_830124A0);
PPC_FUNC_IMPL(__imp__sub_830124A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x830124A8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012558
	if (ctx.cr0.eq) goto loc_83012558;
	// li r22,0
	ctx.r22.s64 = 0;
loc_830124F0:
	// lwzx r11,r22,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012538
	if (!ctx.cr6.eq) goto loc_83012538;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83012534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_83012538:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830124f0
	if (ctx.cr6.lt) goto loc_830124F0;
loc_83012558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012568"))) PPC_WEAK_FUNC(sub_83012568);
PPC_FUNC_IMPL(__imp__sub_83012568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83012570;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012620
	if (ctx.cr0.eq) goto loc_83012620;
	// li r22,0
	ctx.r22.s64 = 0;
loc_830125B8:
	// lwzx r11,r22,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012600
	if (!ctx.cr6.eq) goto loc_83012600;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830125FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_83012600:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830125b8
	if (ctx.cr6.lt) goto loc_830125B8;
loc_83012620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012630"))) PPC_WEAK_FUNC(sub_83012630);
PPC_FUNC_IMPL(__imp__sub_83012630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83012638;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012784
	if (ctx.cr0.eq) goto loc_83012784;
	// lwz r29,324(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r22,0
	ctx.r22.s64 = 0;
loc_83012680:
	// lwzx r11,r22,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012754
	if (!ctx.cr6.eq) goto loc_83012754;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ori r9,r24,16
	ctx.r9.u64 = ctx.r24.u64 | 16;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830126C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830126e4
	if (ctx.cr6.eq) goto loc_830126E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83012754
	if (ctx.cr6.eq) goto loc_83012754;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83012754
	if (!ctx.cr6.lt) goto loc_83012754;
loc_830126E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lfs f6,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// sth r8,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r8.u16);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_83012754:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012680
	if (ctx.cr6.lt) goto loc_83012680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_83012784:
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012794"))) PPC_WEAK_FUNC(sub_83012794);
PPC_FUNC_IMPL(__imp__sub_83012794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012798"))) PPC_WEAK_FUNC(sub_83012798);
PPC_FUNC_IMPL(__imp__sub_83012798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x830127A0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830128f4
	if (ctx.cr0.eq) goto loc_830128F4;
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
loc_830127EC:
	// lwzx r11,r22,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830128c4
	if (!ctx.cr6.eq) goto loc_830128C4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// ori r9,r25,16
	ctx.r9.u64 = ctx.r25.u64 | 16;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83012834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83012854
	if (ctx.cr6.eq) goto loc_83012854;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830128c4
	if (ctx.cr6.eq) goto loc_830128C4;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x830128c4
	if (!ctx.cr6.lt) goto loc_830128C4;
loc_83012854:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lhz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lfs f6,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// sth r8,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r8.u16);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_830128C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r23,r8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830127ec
	if (ctx.cr6.lt) goto loc_830127EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_830128F4:
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012904"))) PPC_WEAK_FUNC(sub_83012904);
PPC_FUNC_IMPL(__imp__sub_83012904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012908"))) PPC_WEAK_FUNC(sub_83012908);
PPC_FUNC_IMPL(__imp__sub_83012908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83012910;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x830129ec
	if (ctx.cr0.eq) goto loc_830129EC;
	// lbz r22,279(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// li r20,0
	ctx.r20.s64 = 0;
loc_8301295C:
	// lwzx r10,r20,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x830129cc
	if (!ctx.cr6.eq) goto loc_830129CC;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ble cr6,0x8301298c
	if (!ctx.cr6.gt) goto loc_8301298C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x83012994
	goto loc_83012994;
loc_8301298C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83012994:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r22.u8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830129C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_830129CC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8301295c
	if (ctx.cr6.lt) goto loc_8301295C;
loc_830129EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830129F8"))) PPC_WEAK_FUNC(sub_830129F8);
PPC_FUNC_IMPL(__imp__sub_830129F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83012A00;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83012adc
	if (ctx.cr0.eq) goto loc_83012ADC;
	// lbz r22,279(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// li r20,0
	ctx.r20.s64 = 0;
loc_83012A4C:
	// lwzx r10,r20,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83012abc
	if (!ctx.cr6.eq) goto loc_83012ABC;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ble cr6,0x83012a7c
	if (!ctx.cr6.gt) goto loc_83012A7C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x83012a84
	goto loc_83012A84;
loc_83012A7C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83012A84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r22.u8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83012AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_83012ABC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83012a4c
	if (ctx.cr6.lt) goto loc_83012A4C;
loc_83012ADC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012AE8"))) PPC_WEAK_FUNC(sub_83012AE8);
PPC_FUNC_IMPL(__imp__sub_83012AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83012AF0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83012bcc
	if (ctx.cr0.eq) goto loc_83012BCC;
	// lbz r22,279(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// li r20,0
	ctx.r20.s64 = 0;
loc_83012B3C:
	// lwzx r10,r20,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83012bac
	if (!ctx.cr6.eq) goto loc_83012BAC;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ble cr6,0x83012b6c
	if (!ctx.cr6.gt) goto loc_83012B6C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x83012b74
	goto loc_83012B74;
loc_83012B6C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83012B74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r22.u8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83012BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_83012BAC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83012b3c
	if (ctx.cr6.lt) goto loc_83012B3C;
loc_83012BCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012BD8"))) PPC_WEAK_FUNC(sub_83012BD8);
PPC_FUNC_IMPL(__imp__sub_83012BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83012BE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83012cbc
	if (ctx.cr0.eq) goto loc_83012CBC;
	// lbz r22,279(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// li r20,0
	ctx.r20.s64 = 0;
loc_83012C2C:
	// lwzx r10,r20,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83012c9c
	if (!ctx.cr6.eq) goto loc_83012C9C;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ble cr6,0x83012c5c
	if (!ctx.cr6.gt) goto loc_83012C5C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x83012c64
	goto loc_83012C64;
loc_83012C5C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83012C64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r22.u8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83012C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_83012C9C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83012c2c
	if (ctx.cr6.lt) goto loc_83012C2C;
loc_83012CBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012CC8"))) PPC_WEAK_FUNC(sub_83012CC8);
PPC_FUNC_IMPL(__imp__sub_83012CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83012CD0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83012dac
	if (ctx.cr0.eq) goto loc_83012DAC;
	// lwz r22,276(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r20,0
	ctx.r20.s64 = 0;
loc_83012D1C:
	// lwzx r10,r20,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83012d8c
	if (!ctx.cr6.eq) goto loc_83012D8C;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ble cr6,0x83012d4c
	if (!ctx.cr6.gt) goto loc_83012D4C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x83012d54
	goto loc_83012D54;
loc_83012D4C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83012D54:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83012D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_83012D8C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83012d1c
	if (ctx.cr6.lt) goto loc_83012D1C;
loc_83012DAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012DB8"))) PPC_WEAK_FUNC(sub_83012DB8);
PPC_FUNC_IMPL(__imp__sub_83012DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83012DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012e34
	if (ctx.cr0.eq) goto loc_83012E34;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83012DE8:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012e14
	if (!ctx.cr6.eq) goto loc_83012E14;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83012E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_83012E14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012de8
	if (ctx.cr6.lt) goto loc_83012DE8;
loc_83012E34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012E40"))) PPC_WEAK_FUNC(sub_83012E40);
PPC_FUNC_IMPL(__imp__sub_83012E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83012E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012ebc
	if (ctx.cr0.eq) goto loc_83012EBC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83012E70:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012e9c
	if (!ctx.cr6.eq) goto loc_83012E9C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83012E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_83012E9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012e70
	if (ctx.cr6.lt) goto loc_83012E70;
loc_83012EBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012EC8"))) PPC_WEAK_FUNC(sub_83012EC8);
PPC_FUNC_IMPL(__imp__sub_83012EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83012ED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012f44
	if (ctx.cr0.eq) goto loc_83012F44;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83012EF8:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012f24
	if (!ctx.cr6.eq) goto loc_83012F24;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83012F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_83012F24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012ef8
	if (ctx.cr6.lt) goto loc_83012EF8;
loc_83012F44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012F50"))) PPC_WEAK_FUNC(sub_83012F50);
PPC_FUNC_IMPL(__imp__sub_83012F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83012F58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83012ff0
	if (ctx.cr0.eq) goto loc_83012FF0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83012F8C:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012fd0
	if (!ctx.cr6.eq) goto loc_83012FD0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,300(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83012FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83012ffc
	if (!ctx.cr6.eq) goto loc_83012FFC;
loc_83012FD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83012f8c
	if (ctx.cr6.lt) goto loc_83012F8C;
loc_83012FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83012FFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013008"))) PPC_WEAK_FUNC(sub_83013008);
PPC_FUNC_IMPL(__imp__sub_83013008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83013010;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830130a8
	if (ctx.cr0.eq) goto loc_830130A8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83013044:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83013088
	if (!ctx.cr6.eq) goto loc_83013088;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301307C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830130b4
	if (!ctx.cr6.eq) goto loc_830130B4;
loc_83013088:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83013044
	if (ctx.cr6.lt) goto loc_83013044;
loc_830130A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_830130B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830130C0"))) PPC_WEAK_FUNC(sub_830130C0);
PPC_FUNC_IMPL(__imp__sub_830130C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x830130C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83013160
	if (ctx.cr0.eq) goto loc_83013160;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830130FC:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83013140
	if (!ctx.cr6.eq) goto loc_83013140;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,308(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83013134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8301316c
	if (!ctx.cr6.eq) goto loc_8301316C;
loc_83013140:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830130fc
	if (ctx.cr6.lt) goto loc_830130FC;
loc_83013160:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8301316C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013178"))) PPC_WEAK_FUNC(sub_83013178);
PPC_FUNC_IMPL(__imp__sub_83013178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83013180;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83013218
	if (ctx.cr0.eq) goto loc_83013218;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830131B4:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830131f8
	if (!ctx.cr6.eq) goto loc_830131F8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830131EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83013224
	if (!ctx.cr6.eq) goto loc_83013224;
loc_830131F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830131b4
	if (ctx.cr6.lt) goto loc_830131B4;
loc_83013218:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83013224:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013230"))) PPC_WEAK_FUNC(sub_83013230);
PPC_FUNC_IMPL(__imp__sub_83013230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83013238;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830132bc
	if (ctx.cr0.eq) goto loc_830132BC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83013268:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8301329c
	if (!ctx.cr6.eq) goto loc_8301329C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301329C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301329C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83013268
	if (ctx.cr6.lt) goto loc_83013268;
loc_830132BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830132C4"))) PPC_WEAK_FUNC(sub_830132C4);
PPC_FUNC_IMPL(__imp__sub_830132C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830132C8"))) PPC_WEAK_FUNC(sub_830132C8);
PPC_FUNC_IMPL(__imp__sub_830132C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x830132D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83013354
	if (ctx.cr0.eq) goto loc_83013354;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83013300:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83013334
	if (!ctx.cr6.eq) goto loc_83013334;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83013334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83013334:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83013300
	if (ctx.cr6.lt) goto loc_83013300;
loc_83013354:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301335C"))) PPC_WEAK_FUNC(sub_8301335C);
PPC_FUNC_IMPL(__imp__sub_8301335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83013360"))) PPC_WEAK_FUNC(sub_83013360);
PPC_FUNC_IMPL(__imp__sub_83013360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83013368;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830133ec
	if (ctx.cr0.eq) goto loc_830133EC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83013398:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830133cc
	if (!ctx.cr6.eq) goto loc_830133CC;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830133CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830133CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83013398
	if (ctx.cr6.lt) goto loc_83013398;
loc_830133EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

