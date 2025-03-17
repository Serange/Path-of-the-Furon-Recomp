#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82526180"))) PPC_WEAK_FUNC(sub_82526180);
PPC_FUNC_IMPL(__imp__sub_82526180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252619C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8252619c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252619C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// b 0x82526028
	sub_82526028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825261CC"))) PPC_WEAK_FUNC(sub_825261CC);
PPC_FUNC_IMPL(__imp__sub_825261CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825261D0"))) PPC_WEAK_FUNC(sub_825261D0);
PPC_FUNC_IMPL(__imp__sub_825261D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x825261D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r9,920(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82526250
	if (!ctx.cr6.eq) goto loc_82526250;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82526250
	if (!ctx.cr6.eq) goto loc_82526250;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x82533320
	ctx.lr = 0x82526218;
	sub_82533320(ctx, base);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82526228:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82526228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526228;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82526250:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252625C"))) PPC_WEAK_FUNC(sub_8252625C);
PPC_FUNC_IMPL(__imp__sub_8252625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526260"))) PPC_WEAK_FUNC(sub_82526260);
PPC_FUNC_IMPL(__imp__sub_82526260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82526268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x825262c0
	if (!ctx.cr6.lt) goto loc_825262C0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825262ec
	if (ctx.cr6.eq) goto loc_825262EC;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82294520
	ctx.lr = 0x825262AC;
	sub_82294520(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_825262C0:
	// bl 0x82533320
	ctx.lr = 0x825262C4;
	sub_82533320(ctx, base);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825262D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825262d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825262D4;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
loc_825262EC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526300"))) PPC_WEAK_FUNC(sub_82526300);
PPC_FUNC_IMPL(__imp__sub_82526300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-29720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29720);
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,-29724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29724, ctx.r11.u32);
	// stw r10,-29720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29720, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8252633C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-29724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29724, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526358"))) PPC_WEAK_FUNC(sub_82526358);
PPC_FUNC_IMPL(__imp__sub_82526358) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r10,-29720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29720);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82526390
	if (ctx.cr6.eq) goto loc_82526390;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82533198
	ctx.lr = 0x82526390;
	sub_82533198(ctx, base);
loc_82526390:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825263A0"))) PPC_WEAK_FUNC(sub_825263A0);
PPC_FUNC_IMPL(__imp__sub_825263A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x825263A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,-29720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29720);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r11,-29724(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29724, ctx.r11.u32);
	// stw r10,-29720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29720, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825263F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,-29724(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29724, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82526420
	if (!ctx.cr6.gt) goto loc_82526420;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82526420;
	sub_82294520(ctx, base);
loc_82526420:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825264d8
	if (!ctx.cr6.gt) goto loc_825264D8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82526434:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526460
	if (ctx.cr6.eq) goto loc_82526460;
loc_8252644C:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82526470
	if (ctx.cr6.eq) goto loc_82526470;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252644c
	if (!ctx.cr6.eq) goto loc_8252644C;
loc_82526460:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825264c4
	if (ctx.cr6.eq) goto loc_825264C4;
loc_82526470:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x825264ac
	if (!ctx.cr6.gt) goto loc_825264AC;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x825264AC;
	sub_82294520(ctx, base);
loc_825264AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825264c4
	if (ctx.cr0.eq) goto loc_825264C4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825264C4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82526434
	if (ctx.cr6.lt) goto loc_82526434;
loc_825264D8:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82526510
	if (ctx.cr6.eq) goto loc_82526510;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825264fc
	if (!ctx.cr6.eq) goto loc_825264FC;
	// bl 0x822900a0
	ctx.lr = 0x825264F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_825264FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526510:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526518"))) PPC_WEAK_FUNC(sub_82526518);
PPC_FUNC_IMPL(__imp__sub_82526518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82526520;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r10,-29720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29720);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,-29724(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29724, ctx.r11.u32);
	// stw r10,-29720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29720, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8252656C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,-29724(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29724, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8252659c
	if (!ctx.cr6.gt) goto loc_8252659C;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x82526598;
	sub_82294520(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8252659C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82526610
	if (!ctx.cr6.gt) goto loc_82526610;
	// lwz r28,196(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r27,192(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_825265B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x825355d8
	ctx.lr = 0x825265BC;
	sub_825355D8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825265fc
	if (ctx.cr6.eq) goto loc_825265FC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x825265d8
	if (!ctx.cr6.eq) goto loc_825265D8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825265f0
	if (ctx.cr6.eq) goto loc_825265F0;
loc_825265D8:
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825265fc
	if (!ctx.cr6.eq) goto loc_825265FC;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825265fc
	if (!ctx.cr6.eq) goto loc_825265FC;
loc_825265F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82533b70
	ctx.lr = 0x825265FC;
	sub_82533B70(ctx, base);
loc_825265FC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825265b0
	if (ctx.cr6.lt) goto loc_825265B0;
loc_82526610:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252664c
	if (ctx.cr6.eq) goto loc_8252664C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82526638
	if (!ctx.cr6.eq) goto loc_82526638;
	// bl 0x822900a0
	ctx.lr = 0x82526634;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82526638:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252664C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252664C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526654"))) PPC_WEAK_FUNC(sub_82526654);
PPC_FUNC_IMPL(__imp__sub_82526654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526658"))) PPC_WEAK_FUNC(sub_82526658);
PPC_FUNC_IMPL(__imp__sub_82526658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82526660;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,-29720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29720);
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,-29724(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29724, ctx.r11.u32);
	// stw r10,-29720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29720, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825266A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-29724(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29724, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x825266f8
	if (!ctx.cr6.gt) goto loc_825266F8;
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_825266CC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825266e8
	if (!ctx.cr6.eq) goto loc_825266E8;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82526738
	if (ctx.cr6.eq) goto loc_82526738;
loc_825266E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825266cc
	if (ctx.cr6.lt) goto loc_825266CC;
loc_825266F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252672c
	if (ctx.cr6.eq) goto loc_8252672C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82526718
	if (!ctx.cr6.eq) goto loc_82526718;
	// bl 0x822900a0
	ctx.lr = 0x82526714;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82526718:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252672C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252672C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82526738:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// beq cr6,0x82526774
	if (ctx.cr6.eq) goto loc_82526774;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82526760
	if (!ctx.cr6.eq) goto loc_82526760;
	// bl 0x822900a0
	ctx.lr = 0x8252675C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82526760:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526774:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526780"))) PPC_WEAK_FUNC(sub_82526780);
PPC_FUNC_IMPL(__imp__sub_82526780) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,916(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 916);
loc_825267A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,136(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x825267b4
	if (!ctx.cr6.eq) goto loc_825267B4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_825267B4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x825267a0
	if (!ctx.cr0.eq) goto loc_825267A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825267C4"))) PPC_WEAK_FUNC(sub_825267C4);
PPC_FUNC_IMPL(__imp__sub_825267C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825267C8"))) PPC_WEAK_FUNC(sub_825267C8);
PPC_FUNC_IMPL(__imp__sub_825267C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x825267D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82526838
	if (ctx.cr6.eq) goto loc_82526838;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825267f8
	if (!ctx.cr6.eq) goto loc_825267F8;
loc_825267EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_825267F8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82526838
	if (!ctx.cr6.gt) goto loc_82526838;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8252680C:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x825267c8
	ctx.lr = 0x8252681C;
	sub_825267C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825267ec
	if (!ctx.cr6.eq) goto loc_825267EC;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252680c
	if (ctx.cr6.lt) goto loc_8252680C;
loc_82526838:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526844"))) PPC_WEAK_FUNC(sub_82526844);
PPC_FUNC_IMPL(__imp__sub_82526844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526848"))) PPC_WEAK_FUNC(sub_82526848);
PPC_FUNC_IMPL(__imp__sub_82526848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252684C"))) PPC_WEAK_FUNC(sub_8252684C);
PPC_FUNC_IMPL(__imp__sub_8252684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526850"))) PPC_WEAK_FUNC(sub_82526850);
PPC_FUNC_IMPL(__imp__sub_82526850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526854"))) PPC_WEAK_FUNC(sub_82526854);
PPC_FUNC_IMPL(__imp__sub_82526854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526858"))) PPC_WEAK_FUNC(sub_82526858);
PPC_FUNC_IMPL(__imp__sub_82526858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82526860;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r26,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r26.u32);
	// bl 0x82521338
	ctx.lr = 0x82526874;
	sub_82521338(ctx, base);
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82526934
	if (!ctx.cr6.gt) goto loc_82526934;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82526888:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526920
	if (ctx.cr6.eq) goto loc_82526920;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825268c0
	if (!ctx.cr6.eq) goto loc_825268C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825268C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825268C0:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lwz r30,68(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8252690c
	if (!ctx.cr6.gt) goto loc_8252690C;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8252690C;
	sub_82294520(ctx, base);
loc_8252690C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82526920
	if (ctx.cr0.eq) goto loc_82526920;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82526920:
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82526888
	if (ctx.cr6.lt) goto loc_82526888;
loc_82526934:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252693C"))) PPC_WEAK_FUNC(sub_8252693C);
PPC_FUNC_IMPL(__imp__sub_8252693C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526940"))) PPC_WEAK_FUNC(sub_82526940);
PPC_FUNC_IMPL(__imp__sub_82526940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82526948;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82526a20
	if (!ctx.cr6.gt) goto loc_82526A20;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82526968:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82526a0c
	if (ctx.cr6.eq) goto loc_82526A0C;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825269c0
	if (!ctx.cr6.gt) goto loc_825269C0;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,916(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 916);
loc_825269A0:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,136(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 136);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825269b4
	if (!ctx.cr6.eq) goto loc_825269B4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_825269B4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x825269a0
	if (!ctx.cr0.eq) goto loc_825269A0;
loc_825269C0:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82526a0c
	if (!ctx.cr6.eq) goto loc_82526A0C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r9,916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82526a0c
	if (ctx.cr6.eq) goto loc_82526A0C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82533198
	ctx.lr = 0x825269E8;
	sub_82533198(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82526A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526A0C:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82526968
	if (ctx.cr6.lt) goto loc_82526968;
loc_82526A20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526A28"))) PPC_WEAK_FUNC(sub_82526A28);
PPC_FUNC_IMPL(__imp__sub_82526A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82526A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526a4c
	if (ctx.cr6.eq) goto loc_82526A4C;
	// lwz r11,916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82526A4C:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82526ab4
	if (!ctx.cr6.gt) goto loc_82526AB4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82526A60:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526aa0
	if (ctx.cr6.eq) goto loc_82526AA0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526aa0
	if (ctx.cr6.eq) goto loc_82526AA0;
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r9,916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82526aa0
	if (ctx.cr6.eq) goto loc_82526AA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526AA0:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82526a60
	if (ctx.cr6.lt) goto loc_82526A60;
loc_82526AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526ABC"))) PPC_WEAK_FUNC(sub_82526ABC);
PPC_FUNC_IMPL(__imp__sub_82526ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526AC0"))) PPC_WEAK_FUNC(sub_82526AC0);
PPC_FUNC_IMPL(__imp__sub_82526AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f1,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,148(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526AF8"))) PPC_WEAK_FUNC(sub_82526AF8);
PPC_FUNC_IMPL(__imp__sub_82526AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82526B00;
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
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526b74
	if (ctx.cr6.eq) goto loc_82526B74;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82526b74
	if (!ctx.cr6.gt) goto loc_82526B74;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82526B30:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82526b60
	if (ctx.cr6.eq) goto loc_82526B60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526B60:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82526b30
	if (ctx.cr6.lt) goto loc_82526B30;
loc_82526B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526B80"))) PPC_WEAK_FUNC(sub_82526B80);
PPC_FUNC_IMPL(__imp__sub_82526B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82526B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,-29720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29720);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82526c0c
	if (ctx.cr6.eq) goto loc_82526C0C;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82533198
	ctx.lr = 0x82526BBC;
	sub_82533198(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82526c0c
	if (!ctx.cr6.gt) goto loc_82526C0C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82526BD0:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526bf8
	if (ctx.cr6.eq) goto loc_82526BF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526BF8:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82526bd0
	if (ctx.cr6.lt) goto loc_82526BD0;
loc_82526C0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526C14"))) PPC_WEAK_FUNC(sub_82526C14);
PPC_FUNC_IMPL(__imp__sub_82526C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526C18"))) PPC_WEAK_FUNC(sub_82526C18);
PPC_FUNC_IMPL(__imp__sub_82526C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82526C20;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ae4
	ctx.lr = 0x82526C28;
	__savefpr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x825261d0
	ctx.lr = 0x82526C4C;
	sub_825261D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82527478
	if (!ctx.cr6.eq) goto loc_82527478;
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82526cb8
	if (!ctx.cr6.eq) goto loc_82526CB8;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82526C74:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82526c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526C74;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82526CA8;
	sub_82526028(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b30
	ctx.lr = 0x82526CB4;
	__restfpr_27(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82526CB8:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r22,-1
	ctx.r22.s64 = -1;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,704(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lfs f28,-18284(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18284);
	ctx.f28.f64 = double(temp.f32);
	// lwz r18,128(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// ble cr6,0x82526d18
	if (!ctx.cr6.gt) goto loc_82526D18;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// lfs f13,-17656(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17656);
	ctx.f13.f64 = double(temp.f32);
loc_82526CF0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82526d08
	if (!ctx.cr6.gt) goto loc_82526D08;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82526de4
	if (!ctx.cr6.lt) goto loc_82526DE4;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
loc_82526D08:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82526cf0
	if (ctx.cr6.lt) goto loc_82526CF0;
loc_82526D18:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r19,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r19.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// lfs f29,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// blt cr6,0x82527428
	if (ctx.cr6.lt) goto loc_82527428;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// addi r21,r11,-13736
	ctx.r21.s64 = ctx.r11.s64 + -13736;
	// lfs f31,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f31.f64 = double(temp.f32);
loc_82526D60:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x825271cc
	if (!ctx.cr6.gt) goto loc_825271CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82526d98
	if (!ctx.cr6.eq) goto loc_82526D98;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294ac0
	ctx.lr = 0x82526D98;
	sub_82294AC0(ctx, base);
loc_82526D98:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82526efc
	if (ctx.cr6.eq) goto loc_82526EFC;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82526eac
	if (ctx.cr6.eq) goto loc_82526EAC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82527488
	ctx.lr = 0x82526DE0;
	sub_82527488(ctx, base);
	// b 0x82526ecc
	goto loc_82526ECC;
loc_82526DE4:
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526e44
	if (ctx.cr6.eq) goto loc_82526E44;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82526e24
	if (ctx.cr6.eq) goto loc_82526E24;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82527488
	ctx.lr = 0x82526E20;
	sub_82527488(ctx, base);
	// b 0x82526e88
	goto loc_82526E88;
loc_82526E24:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82526e88
	goto loc_82526E88;
loc_82526E44:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82526E58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82526e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526E58;
	// stw r19,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r19.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82526E88;
	sub_82526028(ctx, base);
loc_82526E88:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82526260
	ctx.lr = 0x82526E9C;
	sub_82526260(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b30
	ctx.lr = 0x82526EA8;
	__restfpr_27(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82526EAC:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82526ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526ECC:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82526f44
	if (ctx.cr6.eq) goto loc_82526F44;
	// stw r20,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r20.u32);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// b 0x82526f44
	goto loc_82526F44;
loc_82526EFC:
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82526F0C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82526f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526F0C;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82526F44;
	sub_82526028(ctx, base);
loc_82526F44:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825271c8
	if (!ctx.cr6.gt) goto loc_825271C8;
loc_82526F54:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// beq cr6,0x82527048
	if (ctx.cr6.eq) goto loc_82527048;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r8,180(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r16,0(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r14,100(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// stw r16,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r16.u32);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82527030:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82527030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82527030;
	// b 0x825271a4
	goto loc_825271A4;
loc_82527048:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f10,f9,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f4,f8,f7,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f0,f6,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f29
	ctx.cr6.compare(ctx.f3.f64, ctx.f29.f64);
	// bge cr6,0x825270e8
	if (!ctx.cr6.lt) goto loc_825270E8;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825270E8:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lfs f12,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fadds f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f11,f8,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f10,f4,f6
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f13,f8,f3
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfsx f13,r10,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// fadds f12,f0,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f1,f9
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_825271A4:
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x825271b8
	if (!ctx.cr6.eq) goto loc_825271B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823d1868
	ctx.lr = 0x825271B8;
	sub_823D1868(ctx, base);
loc_825271B8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82526f54
	if (ctx.cr6.lt) goto loc_82526F54;
loc_825271C8:
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
loc_825271CC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82526d60
	if (!ctx.cr6.gt) goto loc_82526D60;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82527428
	if (ctx.cr6.eq) goto loc_82527428;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x825273f8
	if (ctx.cr6.lt) goto loc_825273F8;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// addi r7,r23,1
	ctx.r7.s64 = ctx.r23.s64 + 1;
loc_825271FC:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x825273ec
	if (!ctx.cr6.gt) goto loc_825273EC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825273ec
	if (ctx.cr6.eq) goto loc_825273EC;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f7,f0,f30
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f27,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f11,f3,f7
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f12,f4,f7
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f10,f2,f7
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f9,f1,f7
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f27,f7
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// beq cr6,0x82527304
	if (ctx.cr6.eq) goto loc_82527304;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825272E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825272e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825272E8;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x825273ec
	goto loc_825273EC;
loc_82527304:
	// lfs f7,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f5,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f12,f5,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f1,f4,f11,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f7,f3,f0,f1
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f7,f29
	ctx.cr6.compare(ctx.f7.f64, ctx.f29.f64);
	// bge cr6,0x82527374
	if (!ctx.cr6.lt) goto loc_82527374;
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f6,f13,f31
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_82527374:
	// lfs f0,20(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r24,16
	ctx.r11.s64 = ctx.r24.s64 + 16;
	// lfs f13,24(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f9,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f11,24(r24)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + 24, temp.u32);
	// stfs f8,16(r24)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// stfs f12,20(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,28(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f8,4(r24)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// fadds f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f11,8(r24)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// fadds f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f9,12(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// fadds f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f7,0(r24)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f1,28(r24)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + 28, temp.u32);
loc_825273EC:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x825271fc
	if (!ctx.cr0.eq) goto loc_825271FC;
loc_825273F8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823d1868
	ctx.lr = 0x82527400;
	sub_823D1868(ctx, base);
	// lfs f0,16(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,24(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f12,16(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// stfs f10,20(r24)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// addi r11,r24,16
	ctx.r11.s64 = ctx.r24.s64 + 16;
	// stfs f9,24(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r24.u32 + 24, temp.u32);
loc_82527428:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82526260
	ctx.lr = 0x8252743C;
	sub_82526260(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527478
	if (ctx.cr6.eq) goto loc_82527478;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82527464
	if (!ctx.cr6.eq) goto loc_82527464;
	// bl 0x822900a0
	ctx.lr = 0x82527460;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82527464:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527478:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b30
	ctx.lr = 0x82527484;
	__restfpr_27(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527488"))) PPC_WEAK_FUNC(sub_82527488);
PPC_FUNC_IMPL(__imp__sub_82527488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82527490;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r14,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r14.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// lwz r4,4(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// stw r29,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r29.u32);
	// lwz r28,704(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lwz r10,188(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82527c44
	if (!ctx.cr6.eq) goto loc_82527C44;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294ac0
	ctx.lr = 0x825274F8;
	sub_82294AC0(ctx, base);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r16,r10,-13736
	ctx.r16.s64 = ctx.r10.s64 + -13736;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252753c
	if (ctx.cr6.eq) goto loc_8252753C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82527574
	goto loc_82527574;
loc_8252753C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252754C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8252754c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252754C;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// addi r5,r28,124
	ctx.r5.s64 = ctx.r28.s64 + 124;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82526028
	ctx.lr = 0x82527574;
	sub_82526028(ctx, base);
loc_82527574:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// bl 0x82294ac0
	ctx.lr = 0x82527598;
	sub_82294AC0(ctx, base);
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// li r21,32
	ctx.r21.s64 = 32;
	// li r22,48
	ctx.r22.s64 = 48;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// li r23,16
	ctx.r23.s64 = 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x8252771c
	if (!ctx.cr6.gt) goto loc_8252771C;
loc_825275B8:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lbzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x825275d8
	if (!ctx.cr6.eq) goto loc_825275D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825362c8
	ctx.lr = 0x825275D4;
	sub_825362C8(ctx, base);
	// b 0x8252770c
	goto loc_8252770C;
loc_825275D8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825362c8
	ctx.lr = 0x825275EC;
	sub_825362C8(ctx, base);
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// mulli r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 * 68;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lvx128 v59,r11,r21
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,8
	ctx.r10.s64 = 8;
	// lvx128 v58,r0,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r22
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v56,v58,v59
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v55,r11,r23
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v54,v58,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v53,v55,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrglw128 v52,v55,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v51,v56,v53
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v50,v54,v52
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrglw128 v49,v56,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v48,v54,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum4fp128 v43,v62,v51
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v62,v50
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v63,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v63,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v41,v62,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v62,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v39,v61,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v61,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v61,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v61,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v60,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v34,v60,v50
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v33,v60,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v60,v48
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v47,v63,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v63,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v62,v45,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v60,v41,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v33,v32
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v53,v58,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v63,v47,v46
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v56,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v53,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825276F8:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x825276f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825276F8;
loc_8252770C:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825275b8
	if (ctx.cr6.lt) goto loc_825275B8;
loc_8252771C:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r31,4(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82294498
	ctx.lr = 0x82527748;
	sub_82294498(ctx, base);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8252775C;
	sub_82E640B8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x825279c8
	if (!ctx.cr6.gt) goto loc_825279C8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82527780:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lbzx r31,r11,r20
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// rotlwi r25,r31,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// lwzx r10,r25,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r18.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825279b8
	if (!ctx.cr6.eq) goto loc_825279B8;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r27,197(r28)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r28.u32 + 197);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825277c4
	if (ctx.cr6.eq) goto loc_825277C4;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
loc_825277C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x825278a4
	if (!ctx.cr6.eq) goto loc_825278A4;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825277DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825277dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825277DC;
	// lwz r11,636(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825278a4
	if (ctx.cr6.eq) goto loc_825278A4;
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f12,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x82527824
	if (!ctx.cr6.eq) goto loc_82527824;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bne cr6,0x82527824
	if (!ctx.cr6.eq) goto loc_82527824;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x825278a4
	if (ctx.cr6.eq) goto loc_825278A4;
loc_82527824:
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lbz r4,196(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 196);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82536168
	ctx.lr = 0x82527874;
	sub_82536168(ctx, base);
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,24(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24, ctx.r11.u32);
	// stw r9,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r9.u32);
	// stw r10,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r10.u32);
loc_825278A4:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x825278c8
	if (!ctx.cr6.eq) goto loc_825278C8;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// lbz r4,196(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 196);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82536168
	ctx.lr = 0x825278C0;
	sub_82536168(ctx, base);
	// stwx r24,r25,r18
	PPC_STORE_U32(ctx.r25.u32 + ctx.r18.u32, ctx.r24.u32);
	// b 0x825279b8
	goto loc_825279B8;
loc_825278C8:
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,197(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 197);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825278e8
	if (ctx.cr6.eq) goto loc_825278E8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_825278E8:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82527900:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82527900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82527900;
	// rlwinm r11,r26,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252792C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252792c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252792C;
	// lbz r14,196(r28)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r28.u32 + 196);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82536168
	ctx.lr = 0x82527950;
	sub_82536168(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82536168
	ctx.lr = 0x82527960;
	sub_82536168(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82527970:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82527970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82527970;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82527994:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82527994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82527994;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r25,r18
	PPC_STORE_U32(ctx.r25.u32 + ctx.r18.u32, ctx.r24.u32);
	// lwz r14,620(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// stwx r24,r11,r18
	PPC_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r24.u32);
loc_825279B8:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82527780
	if (ctx.cr6.lt) goto loc_82527780;
loc_825279C8:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82527b98
	if (!ctx.cr6.gt) goto loc_82527B98;
loc_825279D8:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lbzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82527a38
	if (!ctx.cr6.eq) goto loc_82527A38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823d4218
	ctx.lr = 0x825279F4;
	sub_823D4218(ctx, base);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lfs f12,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f30,300(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82527A20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82527a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82527A20;
	// b 0x82527b88
	goto loc_82527B88;
loc_82527A38:
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// mulli r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 * 68;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x823829d8
	ctx.lr = 0x82527A60;
	sub_823829D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lvx128 v51,r0,r31
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lvx128 v50,r31,r23
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v49,r31,r21
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lvx128 v48,r31,r22
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lvx128 v47,r0,r10
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v46,r10,r21
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v45,r10,r22
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v44,v47,v46
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// lvx128 v43,r10,r23
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v42,v47,v46
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v41,v43,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrglw128 v40,v43,v45
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v39,v44,v41
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v38,v42,v40
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrglw128 v37,v44,v41
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrglw128 v36,v42,v40
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmsum4fp128 v63,v50,v39
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v62,v50,v38
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v33,v51,v37
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v32,v51,v36
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v36.f32), 0xFF));
	// vmsum4fp128 v61,v50,v37
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v60,v50,v36
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v36.f32), 0xFF));
	// vmsum4fp128 v59,v49,v39
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v58,v49,v38
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v57,v49,v37
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v56,v49,v36
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v36.f32), 0xFF));
	// vmsum4fp128 v55,v48,v39
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v54,v48,v38
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v53,v48,v37
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v52,v48,v36
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v36.f32), 0xFF));
	// vmsum4fp128 v35,v51,v39
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v34,v51,v38
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmrghw128 v49,v63,v62
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v50,v33,v32
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v48,v61,v60
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v46,v59,v58
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v45,v57,v56
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v44,v49,v48
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v43,v55,v54
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v42,v53,v52
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v41,v46,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v51,v35,v34
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v40,v43,v42
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// stvx128 v44,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v47,v51,v50
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// stvx128 v41,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d4218
	ctx.lr = 0x82527B40;
	sub_823D4218(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82527B74:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82527b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82527B74;
loc_82527B88:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825279d8
	if (ctx.cr6.lt) goto loc_825279D8;
loc_82527B98:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82527bcc
	if (ctx.cr6.eq) goto loc_82527BCC;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82527bb8
	if (!ctx.cr6.eq) goto loc_82527BB8;
	// bl 0x822900a0
	ctx.lr = 0x82527BB4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82527BB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527BCC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82527bfc
	if (ctx.cr6.eq) goto loc_82527BFC;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82527be8
	if (!ctx.cr6.eq) goto loc_82527BE8;
	// bl 0x822900a0
	ctx.lr = 0x82527BE4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82527BE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527BFC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527cd4
	if (ctx.cr6.eq) goto loc_82527CD4;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82527c20
	if (!ctx.cr6.eq) goto loc_82527C20;
	// bl 0x822900a0
	ctx.lr = 0x82527C1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82527C20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82527C44:
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527c8c
	if (ctx.cr6.eq) goto loc_82527C8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82527C8C:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82527CA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82527ca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82527CA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82527CD4;
	sub_82526028(ctx, base);
loc_82527CD4:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527CE4"))) PPC_WEAK_FUNC(sub_82527CE4);
PPC_FUNC_IMPL(__imp__sub_82527CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527CE8"))) PPC_WEAK_FUNC(sub_82527CE8);
PPC_FUNC_IMPL(__imp__sub_82527CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r8,184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x82527d44
	if (ctx.cr6.lt) goto loc_82527D44;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82527D18:
	// lfs f0,-64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// bne 0x82527d18
	if (!ctx.cr0.eq) goto loc_82527D18;
loc_82527D44:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r7,r9,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82527D60:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne 0x82527d60
	if (!ctx.cr0.eq) goto loc_82527D60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527D78"))) PPC_WEAK_FUNC(sub_82527D78);
PPC_FUNC_IMPL(__imp__sub_82527D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82527D80;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82527de8
	if (!ctx.cr6.gt) goto loc_82527DE8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82527DB0:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,356(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82527DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,68(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82527db0
	if (ctx.cr6.lt) goto loc_82527DB0;
loc_82527DE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527DF8"))) PPC_WEAK_FUNC(sub_82527DF8);
PPC_FUNC_IMPL(__imp__sub_82527DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82527E00;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82527e74
	if (!ctx.cr6.gt) goto loc_82527E74;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82527E30:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527e60
	if (ctx.cr6.eq) goto loc_82527E60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527E60:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82527e30
	if (ctx.cr6.lt) goto loc_82527E30;
loc_82527E74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527E84"))) PPC_WEAK_FUNC(sub_82527E84);
PPC_FUNC_IMPL(__imp__sub_82527E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527E88"))) PPC_WEAK_FUNC(sub_82527E88);
PPC_FUNC_IMPL(__imp__sub_82527E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82527E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82527ee4
	if (!ctx.cr6.gt) goto loc_82527EE4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82527EAC:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527ed0
	if (ctx.cr6.eq) goto loc_82527ED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527ED0:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82527eac
	if (ctx.cr6.lt) goto loc_82527EAC;
loc_82527EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527EEC"))) PPC_WEAK_FUNC(sub_82527EEC);
PPC_FUNC_IMPL(__imp__sub_82527EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527EF0"))) PPC_WEAK_FUNC(sub_82527EF0);
PPC_FUNC_IMPL(__imp__sub_82527EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82527EF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,184(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8252801c
	if (!ctx.cr6.gt) goto loc_8252801C;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// addi r24,r9,11272
	ctx.r24.s64 = ctx.r9.s64 + 11272;
	// addi r25,r10,-16772
	ctx.r25.s64 = ctx.r10.s64 + -16772;
loc_82527F2C:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8232e868
	ctx.lr = 0x82527F40;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82527f58
	if (!ctx.cr6.eq) goto loc_82527F58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82527F58:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82527F6C;
	sub_8233E028(ctx, base);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82527fcc
	if (ctx.cr6.eq) goto loc_82527FCC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82527ffc
	if (ctx.cr6.eq) goto loc_82527FFC;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82527fac
	if (!ctx.cr6.eq) goto loc_82527FAC;
	// bl 0x822900a0
	ctx.lr = 0x82527FA8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82527FAC:
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
	ctx.lr = 0x82527FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82527FCC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82527ffc
	if (ctx.cr6.eq) goto loc_82527FFC;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82527fe8
	if (!ctx.cr6.eq) goto loc_82527FE8;
	// bl 0x822900a0
	ctx.lr = 0x82527FE4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82527FE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82527FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82527FFC:
	// lwz r10,184(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// blt cr6,0x82527f2c
	if (ctx.cr6.lt) goto loc_82527F2C;
loc_8252801C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528024"))) PPC_WEAK_FUNC(sub_82528024);
PPC_FUNC_IMPL(__imp__sub_82528024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528028"))) PPC_WEAK_FUNC(sub_82528028);
PPC_FUNC_IMPL(__imp__sub_82528028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82528038"))) PPC_WEAK_FUNC(sub_82528038);
PPC_FUNC_IMPL(__imp__sub_82528038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82528048"))) PPC_WEAK_FUNC(sub_82528048);
PPC_FUNC_IMPL(__imp__sub_82528048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// beq cr6,0x825280ac
	if (ctx.cr6.eq) goto loc_825280AC;
	// lfs f11,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfd f10,-17672(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fabs f8,f13
	ctx.f8.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// ble cr6,0x825280a4
	if (!ctx.cr6.gt) goto loc_825280A4;
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// ble cr6,0x825280a4
	if (!ctx.cr6.gt) goto loc_825280A4;
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fmadds f11,f13,f1,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// b 0x825280a8
	goto loc_825280A8;
loc_825280A4:
	// stfs f9,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
loc_825280A8:
	// stfs f11,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
loc_825280AC:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f13,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f11,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 76, temp.u32);
	// b 0x82526af8
	sub_82526AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825280D4"))) PPC_WEAK_FUNC(sub_825280D4);
PPC_FUNC_IMPL(__imp__sub_825280D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825280D8"))) PPC_WEAK_FUNC(sub_825280D8);
PPC_FUNC_IMPL(__imp__sub_825280D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x825280fc
	if (!ctx.cr6.lt) goto loc_825280FC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82528108
	goto loc_82528108;
loc_825280FC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82528108
	if (ctx.cr6.lt) goto loc_82528108;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82528108:
	// stfs f0,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bgt cr6,0x82528130
	if (ctx.cr6.gt) goto loc_82528130;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
loc_82528130:
	// stfs f2,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528138"))) PPC_WEAK_FUNC(sub_82528138);
PPC_FUNC_IMPL(__imp__sub_82528138) {
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
	// bl 0x82526858
	ctx.lr = 0x82528150;
	sub_82526858(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825281cc
	if (!ctx.cr6.eq) goto loc_825281CC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825281cc
	if (ctx.cr6.eq) goto loc_825281CC;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825281cc
	if (ctx.cr6.eq) goto loc_825281CC;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82528190
	if (ctx.cr6.lt) goto loc_82528190;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82528190:
	// bl 0x825355d8
	ctx.lr = 0x82528194;
	sub_825355D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825281cc
	if (ctx.cr6.eq) goto loc_825281CC;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825281cc
	if (!ctx.cr6.eq) goto loc_825281CC;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825281cc
	if (!ctx.cr6.eq) goto loc_825281CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 208);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825281CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825281CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825281E0"))) PPC_WEAK_FUNC(sub_825281E0);
PPC_FUNC_IMPL(__imp__sub_825281E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82528278
	if (!ctx.cr6.eq) goto loc_82528278;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82528278
	if (!ctx.cr6.gt) goto loc_82528278;
	// bl 0x82528348
	ctx.lr = 0x82528230;
	sub_82528348(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528278
	if (ctx.cr6.eq) goto loc_82528278;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82528278
	if (ctx.cr6.eq) goto loc_82528278;
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f2,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f12,f2
	ctx.cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// bgt cr6,0x82528278
	if (ctx.cr6.gt) goto loc_82528278;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x825280d8
	ctx.lr = 0x82528274;
	sub_825280D8(ctx, base);
	// stfs f31,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
loc_82528278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82528048
	ctx.lr = 0x82528288;
	sub_82528048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825282A8"))) PPC_WEAK_FUNC(sub_825282A8);
PPC_FUNC_IMPL(__imp__sub_825282A8) {
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
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82528320
	if (!ctx.cr6.eq) goto loc_82528320;
	// lwz r11,180(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528320
	if (ctx.cr6.eq) goto loc_82528320;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82528320
	if (ctx.cr6.eq) goto loc_82528320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,200(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x825282fc
	if (ctx.cr6.lt) goto loc_825282FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_825282FC:
	// bl 0x825355d8
	ctx.lr = 0x82528300;
	sub_825355D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82528320
	if (ctx.cr6.eq) goto loc_82528320;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x8252832c
	goto loc_8252832C;
loc_82528320:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8252832C:
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

__attribute__((alias("__imp__sub_82528344"))) PPC_WEAK_FUNC(sub_82528344);
PPC_FUNC_IMPL(__imp__sub_82528344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528348"))) PPC_WEAK_FUNC(sub_82528348);
PPC_FUNC_IMPL(__imp__sub_82528348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82528390
	if (!ctx.cr6.eq) goto loc_82528390;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82528390
	if (ctx.cr6.eq) goto loc_82528390;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82528390
	if (ctx.cr6.eq) goto loc_82528390;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f13,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f0,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8252838c
	if (ctx.cr6.lt) goto loc_8252838C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8252838C:
	// b 0x825355d8
	sub_825355D8(ctx, base);
	return;
loc_82528390:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528398"))) PPC_WEAK_FUNC(sub_82528398);
PPC_FUNC_IMPL(__imp__sub_82528398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x825283A0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r30,r10,26648
	ctx.r30.s64 = ctx.r10.s64 + 26648;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
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
	ctx.lr = 0x825283F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lfs f30,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r10,28928(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28928);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,28928(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28928, ctx.r10.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8252843C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,28928(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28928);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// stw r10,28928(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28928, ctx.r10.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82528478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,28928(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28928);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// stw r10,28928(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28928, ctx.r10.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825284B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28928(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28928);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r10,28928(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28928, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lfs f31,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8252850C;
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
	// bne cr6,0x82528548
	if (!ctx.cr6.eq) goto loc_82528548;
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
	ctx.lr = 0x82528548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82528548:
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82528628
	if (!ctx.cr6.eq) goto loc_82528628;
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82528628
	if (ctx.cr6.eq) goto loc_82528628;
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82528628
	if (ctx.cr6.eq) goto loc_82528628;
	// lwz r3,60(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528628
	if (ctx.cr6.eq) goto loc_82528628;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x825e58d8
	ctx.lr = 0x82528584;
	sub_825E58D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528628
	if (ctx.cr6.eq) goto loc_82528628;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f29,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x825285a8
	if (ctx.cr6.lt) goto loc_825285A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825285A8:
	// bl 0x825355d8
	ctx.lr = 0x825285AC;
	sub_825355D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82528628
	if (ctx.cr6.eq) goto loc_82528628;
	// lfs f0,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x825285c8
	if (ctx.cr6.lt) goto loc_825285C8;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_825285C8:
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,220(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 220, temp.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 216, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825285F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,264(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 264);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82528618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825280d8
	ctx.lr = 0x82528628;
	sub_825280D8(ctx, base);
loc_82528628:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252863C"))) PPC_WEAK_FUNC(sub_8252863C);
PPC_FUNC_IMPL(__imp__sub_8252863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528640"))) PPC_WEAK_FUNC(sub_82528640);
PPC_FUNC_IMPL(__imp__sub_82528640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82528648;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r30,r10,26648
	ctx.r30.s64 = ctx.r10.s64 + 26648;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	ctx.lr = 0x8252869C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f30,-15120(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r10,28928(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28928);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,28928(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28928, ctx.r10.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825286E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,28928(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28928);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lfs f31,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r11,r6,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// stw r10,28928(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28928, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82528728;
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
	// bne cr6,0x82528764
	if (!ctx.cr6.eq) goto loc_82528764;
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
	ctx.lr = 0x82528764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82528764:
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8252883c
	if (!ctx.cr6.eq) goto loc_8252883C;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252883c
	if (ctx.cr6.eq) goto loc_8252883C;
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252883c
	if (ctx.cr6.eq) goto loc_8252883C;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252883c
	if (ctx.cr6.eq) goto loc_8252883C;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825e58d8
	ctx.lr = 0x825287A0;
	sub_825E58D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252883c
	if (ctx.cr6.eq) goto loc_8252883C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f29,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x825287c4
	if (ctx.cr6.lt) goto loc_825287C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825287C4:
	// bl 0x825355d8
	ctx.lr = 0x825287C8;
	sub_825355D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252883c
	if (ctx.cr6.eq) goto loc_8252883C;
	// lfs f0,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x825287e4
	if (ctx.cr6.lt) goto loc_825287E4;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_825287E4:
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// stfs f30,220(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 220, temp.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8252880C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,264(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 264);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8252882C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825280d8
	ctx.lr = 0x8252883C;
	sub_825280D8(ctx, base);
loc_8252883C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528850"))) PPC_WEAK_FUNC(sub_82528850);
PPC_FUNC_IMPL(__imp__sub_82528850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82528878
	if (!ctx.cr6.eq) goto loc_82528878;
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,148(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// blr 
	return;
loc_82528878:
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f1,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,148(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825288AC"))) PPC_WEAK_FUNC(sub_825288AC);
PPC_FUNC_IMPL(__imp__sub_825288AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825288B0"))) PPC_WEAK_FUNC(sub_825288B0);
PPC_FUNC_IMPL(__imp__sub_825288B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82528954
	if (ctx.cr6.eq) goto loc_82528954;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-18052
	ctx.r4.s64 = ctx.r11.s64 + -18052;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x825288F0;
	sub_8233E028(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82528904
	if (ctx.cr6.eq) goto loc_82528904;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82528924
	goto loc_82528924;
loc_82528904:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82528920;
	sub_8233E028(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82528924:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82528954
	if (!ctx.cr6.eq) goto loc_82528954;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82528954
	if (!ctx.cr6.eq) goto loc_82528954;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82528990
	ctx.lr = 0x82528954;
	sub_82528990(ctx, base);
loc_82528954:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82528974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8252898C"))) PPC_WEAK_FUNC(sub_8252898C);
PPC_FUNC_IMPL(__imp__sub_8252898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528990"))) PPC_WEAK_FUNC(sub_82528990);
PPC_FUNC_IMPL(__imp__sub_82528990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82528998;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82528d10
	if (ctx.cr6.eq) goto loc_82528D10;
	// lwz r25,704(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82528d10
	if (ctx.cr6.eq) goto loc_82528D10;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r21,128(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// addi r23,r24,224
	ctx.r23.s64 = ctx.r24.s64 + 224;
	// stw r22,228(r24)
	PPC_STORE_U32(ctx.r24.u32 + 228, ctx.r22.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825360b8
	ctx.lr = 0x825289D8;
	sub_825360B8(ctx, base);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82528ab0
	if (!ctx.cr6.gt) goto loc_82528AB0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lfs f31,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
loc_825289F4:
	// lwz r29,216(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 216);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82528a78
	if (!ctx.cr6.gt) goto loc_82528A78;
	// lwz r31,212(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 212);
loc_82528A08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82528a20
	if (!ctx.cr6.eq) goto loc_82528A20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82528a68
	if (ctx.cr6.eq) goto loc_82528A68;
loc_82528A20:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82528a44
	if (!ctx.cr6.eq) goto loc_82528A44;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82528a68
	if (ctx.cr6.eq) goto loc_82528A68;
loc_82528A44:
	// lwz r3,704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528a68
	if (ctx.cr6.eq) goto loc_82528A68;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82698e88
	ctx.lr = 0x82528A58;
	sub_82698E88(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82528a68
	if (ctx.cr6.eq) goto loc_82528A68;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82528d1c
	if (ctx.cr6.eq) goto loc_82528D1C;
loc_82528A68:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82528a08
	if (ctx.cr6.lt) goto loc_82528A08;
loc_82528A78:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82528a9c
	if (!ctx.cr6.gt) goto loc_82528A9C;
	// lwz r11,124(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r27,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, temp.u32);
loc_82528A9C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x825289f4
	if (ctx.cr6.lt) goto loc_825289F4;
loc_82528AB0:
	// lwz r11,244(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 244);
	// addi r31,r24,236
	ctx.r31.s64 = ctx.r24.s64 + 236;
	// stw r22,240(r24)
	PPC_STORE_U32(ctx.r24.u32 + 240, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82528ad8
	if (ctx.cr6.eq) goto loc_82528AD8;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82528AD8;
	sub_82294520(ctx, base);
loc_82528AD8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82528b64
	if (!ctx.cr6.gt) goto loc_82528B64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82528AF0:
	// lfsx f13,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82528b54
	if (ctx.cr6.eq) goto loc_82528B54;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r28,r29,24
	ctx.r28.u64 = ctx.r29.u32 & 0xFF;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82528b3c
	if (!ctx.cr6.gt) goto loc_82528B3C;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82528B3C;
	sub_82294520(ctx, base);
loc_82528B3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528b4c
	if (ctx.cr0.eq) goto loc_82528B4C;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
loc_82528B4C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lfsx f0,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82528B54:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82528af0
	if (ctx.cr6.lt) goto loc_82528AF0;
loc_82528B64:
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x825260b8
	ctx.lr = 0x82528B74;
	sub_825260B8(ctx, base);
	// stw r22,252(r24)
	PPC_STORE_U32(ctx.r24.u32 + 252, ctx.r22.u32);
	// addi r31,r24,248
	ctx.r31.s64 = ctx.r24.s64 + 248;
	// stw r22,264(r24)
	PPC_STORE_U32(ctx.r24.u32 + 264, ctx.r22.u32);
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// stw r22,276(r24)
	PPC_STORE_U32(ctx.r24.u32 + 276, ctx.r22.u32);
	// lwz r10,256(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 256);
	// lwz r11,252(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 252);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82528c08
	if (!ctx.cr6.gt) goto loc_82528C08;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82528bcc
	if (!ctx.cr6.eq) goto loc_82528BCC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82528c08
	if (ctx.cr6.eq) goto loc_82528C08;
loc_82528BCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// rlwinm r30,r11,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82528be8
	if (!ctx.cr6.eq) goto loc_82528BE8;
	// bl 0x822900a0
	ctx.lr = 0x82528BE4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_82528BE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82528C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82528C08:
	// lwz r11,264(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	// addi r31,r24,260
	ctx.r31.s64 = ctx.r24.s64 + 260;
	// lwz r10,268(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 268);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82528c8c
	if (!ctx.cr6.gt) goto loc_82528C8C;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82528c50
	if (!ctx.cr6.eq) goto loc_82528C50;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82528c8c
	if (ctx.cr6.eq) goto loc_82528C8C;
loc_82528C50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// rlwinm r30,r11,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82528c6c
	if (!ctx.cr6.eq) goto loc_82528C6C;
	// bl 0x822900a0
	ctx.lr = 0x82528C68;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_82528C6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82528C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82528C8C:
	// lwz r11,276(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 276);
	// addi r31,r24,272
	ctx.r31.s64 = ctx.r24.s64 + 272;
	// lwz r10,280(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 280);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82528d10
	if (!ctx.cr6.gt) goto loc_82528D10;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82528cd4
	if (!ctx.cr6.eq) goto loc_82528CD4;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82528d10
	if (ctx.cr6.eq) goto loc_82528D10;
loc_82528CD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// rlwinm r30,r11,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82528cf0
	if (!ctx.cr6.eq) goto loc_82528CF0;
	// bl 0x822900a0
	ctx.lr = 0x82528CEC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_82528CF0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82528D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82528D10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82528D1C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stfsx f31,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// b 0x82528a9c
	goto loc_82528A9C;
}

__attribute__((alias("__imp__sub_82528D28"))) PPC_WEAK_FUNC(sub_82528D28);
PPC_FUNC_IMPL(__imp__sub_82528D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82528D30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82528dc4
	if (!ctx.cr6.gt) goto loc_82528DC4;
loc_82528D54:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82528dc4
	if (!ctx.cr6.lt) goto loc_82528DC4;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82528db4
	if (ctx.cr6.gt) goto loc_82528DB4;
	// bge cr6,0x82528d84
	if (!ctx.cr6.lt) goto loc_82528D84;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82528db8
	goto loc_82528DB8;
loc_82528D84:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82528D9C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528db0
	if (ctx.cr0.eq) goto loc_82528DB0;
	// lbzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82528DB0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82528DB4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82528DB8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82528d54
	if (ctx.cr6.lt) goto loc_82528D54;
loc_82528DC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528DCC"))) PPC_WEAK_FUNC(sub_82528DCC);
PPC_FUNC_IMPL(__imp__sub_82528DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528DD0"))) PPC_WEAK_FUNC(sub_82528DD0);
PPC_FUNC_IMPL(__imp__sub_82528DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82526858
	ctx.lr = 0x82528DE8;
	sub_82526858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528990
	ctx.lr = 0x82528DF0;
	sub_82528990(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528E04"))) PPC_WEAK_FUNC(sub_82528E04);
PPC_FUNC_IMPL(__imp__sub_82528E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528E08"))) PPC_WEAK_FUNC(sub_82528E08);
PPC_FUNC_IMPL(__imp__sub_82528E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82528E10;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6ae0
	ctx.lr = 0x82528E18;
	__savefpr_26(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x825261d0
	ctx.lr = 0x82528E3C;
	sub_825261D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82529c14
	if (!ctx.cr6.eq) goto loc_82529C14;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f26,-17656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17656);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82528ef8
	if (ctx.cr6.lt) goto loc_82528EF8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528e8c
	if (ctx.cr6.eq) goto loc_82528E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82528E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82528ed4
	goto loc_82528ED4;
loc_82528E8C:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82528EA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82528ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82528EA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82528ED4;
	sub_82526028(ctx, base);
loc_82528ED4:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r6,0(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526260
	ctx.lr = 0x82528EE8;
	sub_82526260(ctx, base);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6b2c
	ctx.lr = 0x82528EF4;
	__restfpr_26(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_82528EF8:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r18,704(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lwz r31,128(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 128);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// bl 0x82294ac0
	ctx.lr = 0x82528F38;
	sub_82294AC0(ctx, base);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r30,r11,-13736
	ctx.r30.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82528F50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82528f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82528F50;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528f9c
	if (ctx.cr6.eq) goto loc_82528F9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82528F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82528fb4
	goto loc_82528FB4;
loc_82528F9C:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82528FB4;
	sub_82526028(ctx, base);
loc_82528FB4:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294ac0
	ctx.lr = 0x82528FCC;
	sub_82294AC0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82528FDC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82528fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82528FDC;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82529028
	if (ctx.cr6.eq) goto loc_82529028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82529024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82529040
	goto loc_82529040;
loc_82529028:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x82529040;
	sub_82526028(ctx, base);
loc_82529040:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82529bf0
	if (!ctx.cr6.gt) goto loc_82529BF0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lfs f30,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// li r23,32
	ctx.r23.s64 = 32;
	// lfs f28,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f28.f64 = double(temp.f32);
	// li r24,48
	ctx.r24.s64 = 48;
	// lfs f29,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// li r25,16
	ctx.r25.s64 = 16;
	// lfs f27,-18284(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18284);
	ctx.f27.f64 = double(temp.f32);
	// addi r17,r11,-17840
	ctx.r17.s64 = ctx.r11.s64 + -17840;
loc_82529088:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// lwz r9,180(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwz r8,240(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// lbzx r27,r11,r19
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmpw cr6,r22,r8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r8.s32, ctx.xer);
	// rotlwi r7,r27,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// lfs f0,76(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bge cr6,0x825290c8
	if (!ctx.cr6.lt) goto loc_825290C8;
	// lwz r11,236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// lbzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825290cc
	if (ctx.cr6.eq) goto loc_825290CC;
loc_825290C8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_825290CC:
	// lwz r10,208(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82529744
	if (!ctx.cr6.eq) goto loc_82529744;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82529744
	if (ctx.cr6.eq) goto loc_82529744;
	// lwz r11,124(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 124);
	// mulli r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 * 68;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,248(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r27,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r31,r27,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r30,r9
	ctx.r4.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r28,56(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bl 0x825362c8
	ctx.lr = 0x82529114;
	sub_825362C8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x825362c8
	ctx.lr = 0x82529128;
	sub_825362C8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x825292e4
	if (!ctx.cr6.gt) goto loc_825292E4;
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// rlwinm r7,r28,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lvx128 v63,r10,r23
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r24
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v62,v63
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// lvx128 v59,r10,r25
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v58,v62,v63
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v57,v59,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// vmrglw128 v56,v59,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v55,r0,r11
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r9
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v52,v60,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v51,v58,v56
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v50,r0,r10
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v49,v60,v57
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v48,v58,v56
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v47,v55,v52
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v46,v55,v51
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v45,v55,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v55,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v43,v54,v52
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v42,v54,v51
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v41,v54,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v54,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v39,v53,v52
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v38,v53,v51
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v37,v53,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v53,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v50,v52
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v34,v50,v51
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v33,v50,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v50,v48
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v63,v47,v46
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v62,v45,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v60,v41,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v33,v32
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// stvx128 v59,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v53,v58,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v56,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lvx128 v49,r10,r24
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lvx128 v48,r10,r25
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r10,r23
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lvx128 v50,r0,r10
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v46,v50,v51
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v47,v48,v49
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// lvx128 v45,r0,r11
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v44,v50,v51
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// vmrglw128 v43,v48,v49
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// lvx128 v32,r0,r9
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// vmrghw128 v42,v46,v47
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrglw128 v41,v46,v47
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v40,v44,v43
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// lvx128 v39,r0,r10
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v38,v44,v43
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmsum4fp128 v37,v45,v42
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v36,v45,v40
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v35,v45,v41
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v34,v45,v38
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmrghw128 v33,v37,v36
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v39,v42
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v61,v39,v40
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v59,v35,v34
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmsum4fp128 v60,v39,v41
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v57,v32,v42
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v56,v32,v40
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v55,v32,v41
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmrghw128 v54,v33,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmsum4fp128 v52,v62,v42
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v51,v62,v40
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v50,v62,v41
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v58,v39,v38
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v53,v32,v38
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v49,v62,v38
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// stvx128 v54,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v48,v63,v61
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v46,v57,v56
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v43,v52,v51
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v47,v60,v58
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v45,v55,v53
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v42,v50,v49
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v44,v48,v47
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v41,v46,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v40,v43,v42
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// stvx128 v44,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825292E4:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x8252931c
	if (ctx.cr6.gt) goto loc_8252931C;
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,272(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82529304:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82529304
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529304;
	// b 0x825294c0
	goto loc_825294C0;
loc_8252931C:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// blt cr6,0x82529354
	if (ctx.cr6.lt) goto loc_82529354;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,272(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252933C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252933c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252933C;
	// b 0x825294c0
	goto loc_825294C0;
loc_82529354:
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82536108
	ctx.lr = 0x82529364;
	sub_82536108(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82536108
	ctx.lr = 0x82529374;
	sub_82536108(ctx, base);
	// fsubs f12,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lfs f6,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fmuls f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fmuls f11,f5,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f11,304(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f12,316(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// fmadds f2,f9,f13,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f1,f8,f12,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f6,f11,f7,f1
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x82529440
	if (!ctx.cr6.lt) goto loc_82529440;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f6,f0,f28
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f12,364(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmuls f5,f13,f28
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f6,360(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmuls f4,f11,f28
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f4,352(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f5,356(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82529440:
	// fmuls f0,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f7,f31
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f9,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f6,296(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fadds f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f5,292(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fadds f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f4,288(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fadds f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f3,300(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bl 0x823d1868
	ctx.lr = 0x825294B0;
	sub_823D1868(ctx, base);
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x825362c8
	ctx.lr = 0x825294C0;
	sub_825362C8(ctx, base);
loc_825294C0:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x825294f8
	if (ctx.cr6.gt) goto loc_825294F8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825294E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825294e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825294E0;
	// b 0x825295d0
	goto loc_825295D0;
loc_825294F8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// blt cr6,0x82529530
	if (ctx.cr6.lt) goto loc_82529530;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82529518:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82529518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529518;
	// b 0x825295d0
	goto loc_825295D0;
loc_82529530:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f8,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f4,f9,f31
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fadds f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f3,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f13,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f10,f11,f31,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f10,28(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
loc_825295D0:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825295E0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x825295e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825295E0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82529628
	if (!ctx.cr6.gt) goto loc_82529628;
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// rlwinm r9,r28,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82529614:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82529614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529614;
loc_82529628:
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823829d8
	ctx.lr = 0x8252963C;
	sub_823829D8(ctx, base);
	// lvx128 v35,r0,r3
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v34,r3,r23
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// lvx128 v33,r3,r24
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v32,v35,v34
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// lvx128 v63,r3,r25
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v62,v35,v34
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v61,v63,v33
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v39,r0,r30
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v60,v63,v33
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v38,r30,r25
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r30,r23
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,464
	ctx.r9.s64 = ctx.r1.s64 + 464;
	// lvx128 v36,r30,r24
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// vmrghw128 v59,v32,v61
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// vmrghw128 v58,v62,v60
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// vmrglw128 v57,v32,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// vmrglw128 v56,v62,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// vmsum4fp128 v51,v38,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// vmsum4fp128 v50,v38,v58
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v53,v39,v57
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v52,v39,v56
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v49,v38,v57
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v48,v38,v56
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v47,v37,v59
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v46,v37,v58
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v45,v37,v57
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v44,v37,v56
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v43,v36,v59
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v42,v36,v58
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v41,v36,v57
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v40,v36,v56
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v55,v39,v59
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v54,v39,v58
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmrghw128 v37,v51,v50
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v38,v53,v52
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v36,v49,v48
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v34,v47,v46
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v33,v45,v44
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v32,v37,v36
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v63,v43,v42
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v62,v41,v40
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v61,v34,v33
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v39,v55,v54
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v32,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v35,v39,v38
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// stvx128 v61,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82536108
	ctx.lr = 0x82529720;
	sub_82536108(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x82529964
	goto loc_82529964;
loc_82529744:
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bgt cr6,0x82529788
	if (ctx.cr6.gt) goto loc_82529788;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82529770:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x82529770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529770;
	// b 0x82529964
	goto loc_82529964;
loc_82529788:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// blt cr6,0x825297b0
	if (ctx.cr6.lt) goto loc_825297B0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82529798:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x82529798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529798;
	// b 0x82529964
	goto loc_82529964;
loc_825297B0:
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f4,f9,f31
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f3,f8,f31
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f12,f2,f7
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f8,f9,f31,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f3,324(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f2,328(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f1,332(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f6,f0,f10,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f7.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f12,f7,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f4,f8,f9,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f29
	ctx.cr6.compare(ctx.f4.f64, ctx.f29.f64);
	// bge cr6,0x8252990c
	if (!ctx.cr6.lt) goto loc_8252990C;
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fsubs f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f4,276(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fsubs f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f3,280(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// stfs f2,284(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fsubs f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f1,272(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// b 0x82529960
	goto loc_82529960;
loc_8252990C:
	// fmuls f10,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f4,f9,f31
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f3,368(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fadds f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f2,372(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fadds f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f1,376(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fadds f0,f4,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f0,380(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_82529960:
	// bl 0x823d1868
	ctx.lr = 0x82529964;
	sub_823D1868(ctx, base);
loc_82529964:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82529be0
	if (!ctx.cr6.eq) goto loc_82529BE0;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82529988
	if (!ctx.cr6.eq) goto loc_82529988;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq cr6,0x8252998c
	if (ctx.cr6.eq) goto loc_8252998C;
loc_82529988:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252998C:
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82529bb4
	if (ctx.cr6.eq) goto loc_82529BB4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82529b8c
	if (ctx.cr6.eq) goto loc_82529B8C;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x825299d0
	if (ctx.cr6.gt) goto loc_825299D0;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825299B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825299b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825299B8;
	// b 0x82529be0
	goto loc_82529BE0;
loc_825299D0:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// blt cr6,0x82529a00
	if (ctx.cr6.lt) goto loc_82529A00;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825299E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825299e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825299E8;
	// b 0x82529be0
	goto loc_82529BE0;
loc_82529A00:
	// fsubs f11,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f10,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lfs f8,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f12,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f1,340(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fmuls f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f10,348(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// fmuls f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f9,336(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fmuls f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f8,344(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fsubs f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stw r10,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f3,f3,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r8,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r8.u32);
	// stw r9,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r9.u32);
	// lfs f0,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// lfs f11,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// lfs f9,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f9.f64 = double(temp.f32);
	// stw r7,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r7.u32);
	// lfs f13,12(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r5.u32);
	// fmadds f4,f9,f13,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f8,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fadds f6,f1,f12
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// lfs f12,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f2,f31,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f11,28(r21)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r21.u32 + 28, temp.u32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r4,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r4.u32);
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmadds f3,f8,f12,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfs f11,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fmuls f4,f9,f31
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stw r6,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r6.u32);
	// fmadds f2,f7,f11,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// bge cr6,0x82529b3c
	if (!ctx.cr6.lt) goto loc_82529B3C;
	// fsubs f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f1,408(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// fsubs f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f3,400(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fsubs f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f2,404(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fsubs f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f0,412(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// b 0x82529b60
	goto loc_82529B60;
loc_82529B3C:
	// fadds f1,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f1,392(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,384(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fadds f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f2,388(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fadds f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f0,396(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
loc_82529B60:
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r7.u32);
	// stw r8,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r8.u32);
	// stw r9,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r9.u32);
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// bl 0x823d1868
	ctx.lr = 0x82529B88;
	sub_823D1868(ctx, base);
	// b 0x82529be0
	goto loc_82529BE0;
loc_82529B8C:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82529B9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82529b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529B9C;
	// b 0x82529be0
	goto loc_82529BE0;
loc_82529BB4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82529be0
	if (ctx.cr6.eq) goto loc_82529BE0;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82529BCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82529bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529BCC;
loc_82529BE0:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82529088
	if (ctx.cr6.lt) goto loc_82529088;
loc_82529BF0:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r6,0(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526260
	ctx.lr = 0x82529C04;
	sub_82526260(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825366b0
	ctx.lr = 0x82529C0C;
	sub_825366B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825366b0
	ctx.lr = 0x82529C14;
	sub_825366B0(ctx, base);
loc_82529C14:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6b2c
	ctx.lr = 0x82529C20;
	__restfpr_26(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529C24"))) PPC_WEAK_FUNC(sub_82529C24);
PPC_FUNC_IMPL(__imp__sub_82529C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529C28"))) PPC_WEAK_FUNC(sub_82529C28);
PPC_FUNC_IMPL(__imp__sub_82529C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82529C30;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae0
	ctx.lr = 0x82529C38;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lfs f28,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82529fa8
	if (ctx.cr6.eq) goto loc_82529FA8;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lwz r8,284(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// lwz r7,288(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,32428(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32428);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82529cc4
	if (!ctx.cr6.lt) goto loc_82529CC4;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82529cc4
	if (!ctx.cr6.lt) goto loc_82529CC4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f11,-18344(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82529cc4
	if (!ctx.cr6.lt) goto loc_82529CC4;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x82529ee4
	goto loc_82529EE4;
loc_82529CC4:
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,17956
	ctx.r31.s64 = ctx.r11.s64 + 17956;
	// lwz r30,17920(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17920);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82529cf4
	if (!ctx.cr6.eq) goto loc_82529CF4;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// stfs f29,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r30,17920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17920, ctx.r30.u32);
loc_82529CF4:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f30,-18352(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lfs f31,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrt f10,f11
	ctx.f10.f64 = sqrt(ctx.f11.f64);
	// fdiv f9,f30,f10
	ctx.f9.f64 = ctx.f30.f64 / ctx.f10.f64;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// ble cr6,0x82529d40
	if (!ctx.cr6.gt) goto loc_82529D40;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// b 0x82529d44
	goto loc_82529D44;
loc_82529D40:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82529D44:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,256
	ctx.r4.s64 = ctx.r10.s64 + 256;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x823d3da0
	ctx.lr = 0x82529D68;
	sub_823D3DA0(ctx, base);
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82529d88
	if (!ctx.cr6.eq) goto loc_82529D88;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// stfs f29,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r30,17920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17920, ctx.r30.u32);
loc_82529D88:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrt f10,f11
	ctx.f10.f64 = sqrt(ctx.f11.f64);
	// fdiv f9,f30,f10
	ctx.f9.f64 = ctx.f30.f64 / ctx.f10.f64;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// ble cr6,0x82529dcc
	if (!ctx.cr6.gt) goto loc_82529DCC;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// b 0x82529dd0
	goto loc_82529DD0;
loc_82529DCC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82529DD0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f29
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f0,f9,f29,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 - ctx.f0.f64));
	// fmuls f12,f8,f29
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// bne cr6,0x82529e28
	if (!ctx.cr6.eq) goto loc_82529E28;
	// ori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 | 1;
	// stfs f29,0(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,17920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17920, ctx.r11.u32);
loc_82529E28:
	// fmuls f11,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f0,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsqrt f5,f6
	ctx.f5.f64 = sqrt(ctx.f6.f64);
	// fdiv f4,f30,f5
	ctx.f4.f64 = ctx.f30.f64 / ctx.f5.f64;
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// ble cr6,0x82529e64
	if (!ctx.cr6.gt) goto loc_82529E64;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
loc_82529E64:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f6,f10,f0,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f4,f5,f0,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f0,f8,f12,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f30,f3,f13,f4
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82529ec4
	if (!ctx.cr6.lt) goto loc_82529EC4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82529ed0
	goto loc_82529ED0;
loc_82529EC4:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82529ed0
	if (ctx.cr6.lt) goto loc_82529ED0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_82529ED0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82382618
	ctx.lr = 0x82529ED8;
	sub_82382618(ctx, base);
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x82529ee4
	if (!ctx.cr6.gt) goto loc_82529EE4;
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_82529EE4:
	// lfs f10,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f0,f1,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f11,-18144(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18144);
	// lfd f9,-18152(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18152);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82529f14
	if (!ctx.cr6.gt) goto loc_82529F14;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f13,-18160(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18160);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// b 0x82529f2c
	goto loc_82529F2C;
loc_82529F14:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82529f2c
	if (!ctx.cr6.lt) goto loc_82529F2C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f13,-18160(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18160);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82529F2C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82529fa8
	if (ctx.cr6.eq) goto loc_82529FA8;
	// lfs f13,196(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// lfd f13,32232(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32232);
	// fmul f8,f12,f13
	ctx.f8.f64 = ctx.f12.f64 * ctx.f13.f64;
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82529f64
	if (!ctx.cr6.lt) goto loc_82529F64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82529f70
	goto loc_82529F70;
loc_82529F64:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82529f70
	if (ctx.cr6.lt) goto loc_82529F70;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82529F70:
	// fadds f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82529f90
	if (!ctx.cr6.gt) goto loc_82529F90;
loc_82529F84:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82529f84
	if (ctx.cr6.gt) goto loc_82529F84;
loc_82529F90:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82529fa4
	if (!ctx.cr6.lt) goto loc_82529FA4;
loc_82529F98:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82529f98
	if (ctx.cr6.lt) goto loc_82529F98;
loc_82529FA4:
	// stfs f0,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 200, temp.u32);
loc_82529FA8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-17032(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17032);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8252a000
	if (!ctx.cr6.lt) goto loc_8252A000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f13,-17264(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17264);
	// lfd f12,-18376(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18376);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,140(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// lwz r8,180(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stfs f29,204(r8)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r7,180(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stfs f29,12(r7)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r6,180(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lfs f12,140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// stfs f11,76(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 76, temp.u32);
	// b 0x8252a0d0
	goto loc_8252A0D0;
loc_8252A000:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8252a048
	if (!ctx.cr6.lt) goto loc_8252A048;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lfd f0,-17264(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17264);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,140(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// lwz r9,180(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stfs f29,204(r9)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r8,180(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lfs f10,140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f28,f10
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// stfs f9,12(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r7,180(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stfs f29,76(r7)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// b 0x8252a0d0
	goto loc_8252A0D0;
loc_8252A048:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f13,32240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32240);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f0,-17264(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17264);
	// stfs f29,140(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// bge cr6,0x8252a098
	if (!ctx.cr6.lt) goto loc_8252A098;
	// lfs f13,200(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,180(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,204(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r8,180(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lfs f10,204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f28,f10
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// stfs f9,12(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r7,180(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stfs f29,76(r7)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// b 0x8252a0d0
	goto loc_8252A0D0;
loc_8252A098:
	// lfs f12,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r8,180(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lfd f13,-18376(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18376);
	// fmadd f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,204(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r7,180(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stfs f29,12(r7)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r6,180(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lfs f8,204(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f28,f8
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// stfs f7,76(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 76, temp.u32);
loc_8252A0D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82526af8
	ctx.lr = 0x8252A0E0;
	sub_82526AF8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b2c
	ctx.lr = 0x8252A0EC;
	__restfpr_26(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A0F0"))) PPC_WEAK_FUNC(sub_8252A0F0);
PPC_FUNC_IMPL(__imp__sub_8252A0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8252A0F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82526858
	ctx.lr = 0x8252A104;
	sub_82526858(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8252a170
	if (ctx.cr6.eq) goto loc_8252A170;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r29,184(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8252A13C;
	sub_82294AC0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8252A154;
	sub_82E640B8(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8252a170
	if (!ctx.cr6.gt) goto loc_8252A170;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8252A170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527ce8
	ctx.lr = 0x8252A178;
	sub_82527CE8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8252a1a4
	if (ctx.cr6.gt) goto loc_8252A1A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lfs f1,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252A1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252A1A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A1AC"))) PPC_WEAK_FUNC(sub_8252A1AC);
PPC_FUNC_IMPL(__imp__sub_8252A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A1B0"))) PPC_WEAK_FUNC(sub_8252A1B0);
PPC_FUNC_IMPL(__imp__sub_8252A1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8252a280
	if (!ctx.cr6.gt) goto loc_8252A280;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8252a218
	if (ctx.cr6.gt) goto loc_8252A218;
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252a280
	if (!ctx.cr6.gt) goto loc_8252A280;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252A1E8:
	// lwz r8,180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,196(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,184(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8252a1e8
	if (ctx.cr6.lt) goto loc_8252A1E8;
	// b 0x8252a280
	goto loc_8252A280;
loc_8252A218:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252a274
	if (!ctx.cr6.gt) goto loc_8252A274;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8252A22C:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,196(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lfsx f13,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fdivs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmadds f8,f9,f1,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r5,184(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8252a22c
	if (ctx.cr6.lt) goto loc_8252A22C;
loc_8252A274:
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
loc_8252A280:
	// b 0x82526af8
	sub_82526AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A284"))) PPC_WEAK_FUNC(sub_8252A284);
PPC_FUNC_IMPL(__imp__sub_8252A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A288"))) PPC_WEAK_FUNC(sub_8252A288);
PPC_FUNC_IMPL(__imp__sub_8252A288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8252a2ac
	if (ctx.cr6.lt) goto loc_8252A2AC;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252a2b0
	if (ctx.cr6.lt) goto loc_8252A2B0;
loc_8252A2AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8252A2B0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x8252a330
	if (!ctx.cr6.gt) goto loc_8252A330;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
loc_8252A2D8:
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8252a300
	if (!ctx.cr6.eq) goto loc_8252A300;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8252a318
	if (!ctx.cr6.eq) goto loc_8252A318;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// b 0x8252a318
	goto loc_8252A318;
loc_8252A300:
	// stfsx f31,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8252a318
	if (!ctx.cr6.eq) goto loc_8252A318;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,12(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_8252A318:
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252a2d8
	if (ctx.cr6.lt) goto loc_8252A2D8;
loc_8252A330:
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// stfs f1,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a384
	if (ctx.cr6.eq) goto loc_8252A384;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x8252A35C;
	sub_825355D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252a384
	if (ctx.cr6.eq) goto loc_8252A384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,188(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252A384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252A384:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A398"))) PPC_WEAK_FUNC(sub_8252A398);
PPC_FUNC_IMPL(__imp__sub_8252A398) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252a3d8
	if (ctx.cr6.eq) goto loc_8252A3D8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8252A3D8;
	sub_82294520(ctx, base);
loc_8252A3D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8252a420
	if (!ctx.cr6.gt) goto loc_8252A420;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8252A3F8;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8252A410;
	sub_82E640B8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8252A420:
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

__attribute__((alias("__imp__sub_8252A438"))) PPC_WEAK_FUNC(sub_8252A438);
PPC_FUNC_IMPL(__imp__sub_8252A438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252A45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8252a398
	ctx.lr = 0x8252A468;
	sub_8252A398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A47C"))) PPC_WEAK_FUNC(sub_8252A47C);
PPC_FUNC_IMPL(__imp__sub_8252A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A480"))) PPC_WEAK_FUNC(sub_8252A480);
PPC_FUNC_IMPL(__imp__sub_8252A480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252A4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8252a398
	ctx.lr = 0x8252A4B0;
	sub_8252A398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A4C4"))) PPC_WEAK_FUNC(sub_8252A4C4);
PPC_FUNC_IMPL(__imp__sub_8252A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A4C8"))) PPC_WEAK_FUNC(sub_8252A4C8);
PPC_FUNC_IMPL(__imp__sub_8252A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a554
	if (ctx.cr6.eq) goto loc_8252A554;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x823f1ed0
	ctx.lr = 0x8252A500;
	sub_823F1ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252a554
	if (ctx.cr6.eq) goto loc_8252A554;
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a52c
	if (ctx.cr6.eq) goto loc_8252A52C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252a554
	if (ctx.cr6.eq) goto loc_8252A554;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8252a538
	goto loc_8252A538;
loc_8252A52C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252a554
	if (ctx.cr6.eq) goto loc_8252A554;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8252A538:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// lfs f1,31796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31796);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252A554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252A554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252a1b0
	ctx.lr = 0x8252A564;
	sub_8252A1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A580"))) PPC_WEAK_FUNC(sub_8252A580);
PPC_FUNC_IMPL(__imp__sub_8252A580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825212d8
	ctx.lr = 0x8252A598;
	sub_825212D8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A5B4"))) PPC_WEAK_FUNC(sub_8252A5B4);
PPC_FUNC_IMPL(__imp__sub_8252A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A5B8"))) PPC_WEAK_FUNC(sub_8252A5B8);
PPC_FUNC_IMPL(__imp__sub_8252A5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8252A5C0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r29,184(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bge cr6,0x8252a5ec
	if (!ctx.cr6.lt) goto loc_8252A5EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252A5EC:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x8252a600
	if (!ctx.cr6.lt) goto loc_8252A600;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252A600:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a740
	if (ctx.cr6.eq) goto loc_8252A740;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a740
	if (ctx.cr6.eq) goto loc_8252A740;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252A628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// stfs f1,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8252a684
	if (ctx.cr6.lt) goto loc_8252A684;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8252A640:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8252a6d0
	if (!ctx.cr6.gt) goto loc_8252A6D0;
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8252a6bc
	if (!ctx.cr6.gt) goto loc_8252A6BC;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8252a6c4
	if (!ctx.cr6.gt) goto loc_8252A6C4;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8252a6cc
	if (!ctx.cr6.gt) goto loc_8252A6CC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252a640
	if (ctx.cr6.lt) goto loc_8252A640;
loc_8252A684:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8252a6d0
	if (!ctx.cr6.lt) goto loc_8252A6D0;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8252A69C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8252a6d0
	if (!ctx.cr6.gt) goto loc_8252A6D0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252a69c
	if (ctx.cr6.lt) goto loc_8252A69C;
	// b 0x8252a6d0
	goto loc_8252A6D0;
loc_8252A6BC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8252a6d0
	goto loc_8252A6D0;
loc_8252A6C4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x8252a6d0
	goto loc_8252A6D0;
loc_8252A6CC:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_8252A6D0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8252a708
	if (!ctx.cr6.gt) goto loc_8252A708;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x8252a708
	if (ctx.cr6.gt) goto loc_8252A708;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8252A708:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8252a740
	if (ctx.cr6.eq) goto loc_8252A740;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// bge cr6,0x8252a72c
	if (!ctx.cr6.lt) goto loc_8252A72C;
	// lfs f1,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8252a730
	goto loc_8252A730;
loc_8252A72C:
	// lfs f1,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
loc_8252A730:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252A73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r31.u32);
loc_8252A740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252a1b0
	ctx.lr = 0x8252A750;
	sub_8252A1B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A760"))) PPC_WEAK_FUNC(sub_8252A760);
PPC_FUNC_IMPL(__imp__sub_8252A760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a774
	if (ctx.cr6.eq) goto loc_8252A774;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x8252a778
	goto loc_8252A778;
loc_8252A774:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252A778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a7e4
	if (ctx.cr6.eq) goto loc_8252A7E4;
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252a7b0
	if (ctx.cr6.eq) goto loc_8252A7B0;
	// lfs f0,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// blr 
	return;
loc_8252A7B0:
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a7c4
	if (ctx.cr6.eq) goto loc_8252A7C4;
	// lfs f1,564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8252A7C4:
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// blr 
	return;
loc_8252A7E4:
	// lfs f1,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A7EC"))) PPC_WEAK_FUNC(sub_8252A7EC);
PPC_FUNC_IMPL(__imp__sub_8252A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A7F0"))) PPC_WEAK_FUNC(sub_8252A7F0);
PPC_FUNC_IMPL(__imp__sub_8252A7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8252A7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825261d0
	ctx.lr = 0x8252A81C;
	sub_825261D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252a8e4
	if (!ctx.cr6.eq) goto loc_8252A8E4;
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a854
	if (ctx.cr6.eq) goto loc_8252A854;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82527488
	ctx.lr = 0x8252A850;
	sub_82527488(ctx, base);
	// b 0x8252a8d0
	goto loc_8252A8D0;
loc_8252A854:
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252a888
	if (ctx.cr6.eq) goto loc_8252A888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252A884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8252a8d0
	goto loc_8252A8D0;
loc_8252A888:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252A89C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8252a89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252A89C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x8252A8D0;
	sub_82526028(ctx, base);
loc_8252A8D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82526260
	ctx.lr = 0x8252A8E4;
	sub_82526260(ctx, base);
loc_8252A8E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A8EC"))) PPC_WEAK_FUNC(sub_8252A8EC);
PPC_FUNC_IMPL(__imp__sub_8252A8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A8F0"))) PPC_WEAK_FUNC(sub_8252A8F0);
PPC_FUNC_IMPL(__imp__sub_8252A8F0) {
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
	// bl 0x82526858
	ctx.lr = 0x8252A910;
	sub_82526858(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252a924
	if (ctx.cr6.eq) goto loc_8252A924;
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0590
	ctx.lr = 0x8252A924;
	sub_825E0590(ctx, base);
loc_8252A924:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252ac48
	ctx.lr = 0x8252A92C;
	sub_8252AC48(ctx, base);
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

__attribute__((alias("__imp__sub_8252A944"))) PPC_WEAK_FUNC(sub_8252A944);
PPC_FUNC_IMPL(__imp__sub_8252A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A948"))) PPC_WEAK_FUNC(sub_8252A948);
PPC_FUNC_IMPL(__imp__sub_8252A948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8252A950;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252aaf0
	if (ctx.cr6.eq) goto loc_8252AAF0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-16756
	ctx.r4.s64 = ctx.r11.s64 + -16756;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8252A980;
	sub_8233E028(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r30,r11,-19580
	ctx.r30.s64 = ctx.r11.s64 + -19580;
	// beq cr6,0x8252a99c
	if (ctx.cr6.eq) goto loc_8252A99C;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8252a9b8
	goto loc_8252A9B8;
loc_8252A99C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8252A9B4;
	sub_8233E028(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8252A9B8:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252a9f4
	if (!ctx.cr6.eq) goto loc_8252A9F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252a9f4
	if (!ctx.cr6.eq) goto loc_8252A9F4;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252a9f4
	if (ctx.cr6.eq) goto loc_8252A9F4;
	// addi r4,r29,220
	ctx.r4.s64 = ctx.r29.s64 + 220;
	// bl 0x825e0590
	ctx.lr = 0x8252A9F4;
	sub_825E0590(ctx, base);
loc_8252A9F4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-16708
	ctx.r4.s64 = ctx.r11.s64 + -16708;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8252AA10;
	sub_8233E028(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8252aa24
	if (ctx.cr6.eq) goto loc_8252AA24;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8252aa40
	goto loc_8252AA40;
loc_8252AA24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8252AA3C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8252AA40:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252aa68
	if (!ctx.cr6.eq) goto loc_8252AA68;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8252aadc
	if (ctx.cr6.eq) goto loc_8252AADC;
loc_8252AA68:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-16676
	ctx.r4.s64 = ctx.r11.s64 + -16676;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8252AA84;
	sub_8233E028(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8252aa98
	if (ctx.cr6.eq) goto loc_8252AA98;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8252aab4
	goto loc_8252AAB4;
loc_8252AA98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8252AAB0;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8252AAB4:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252aaf0
	if (!ctx.cr6.eq) goto loc_8252AAF0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252aaf0
	if (!ctx.cr6.eq) goto loc_8252AAF0;
loc_8252AADC:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252aaf0
	if (ctx.cr6.eq) goto loc_8252AAF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e5b50
	ctx.lr = 0x8252AAF0;
	sub_825E5B50(ctx, base);
loc_8252AAF0:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252AB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252AB18"))) PPC_WEAK_FUNC(sub_8252AB18);
PPC_FUNC_IMPL(__imp__sub_8252AB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8252ab98
	if (ctx.cr6.eq) goto loc_8252AB98;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ab98
	if (ctx.cr6.eq) goto loc_8252AB98;
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8252ab98
	if (!ctx.cr6.gt) goto loc_8252AB98;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lfd f2,-18352(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// bl 0x82cb4fa0
	ctx.lr = 0x8252AB6C;
	sub_82CB4FA0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8252ab9c
	if (!ctx.cr6.lt) goto loc_8252AB9C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8252AB98:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8252AB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252ABB0"))) PPC_WEAK_FUNC(sub_8252ABB0);
PPC_FUNC_IMPL(__imp__sub_8252ABB0) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252ac2c
	if (ctx.cr6.eq) goto loc_8252AC2C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ac2c
	if (ctx.cr6.eq) goto loc_8252AC2C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfd f2,-18352(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// bl 0x82cb4fa0
	ctx.lr = 0x8252ABEC;
	sub_82CB4FA0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8252ac0c
	if (!ctx.cr6.lt) goto loc_8252AC0C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_8252AC0C:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f13,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8252AC2C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252AC48"))) PPC_WEAK_FUNC(sub_8252AC48);
PPC_FUNC_IMPL(__imp__sub_8252AC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8252AC50;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,180(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ae0c
	if (ctx.cr6.eq) goto loc_8252AE0C;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82526518
	ctx.lr = 0x8252AC90;
	sub_82526518(ctx, base);
	// lwz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// lwz r20,88(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r22,-31885
	ctx.r22.s64 = -2089615360;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8252addc
	if (!ctx.cr6.gt) goto loc_8252ADDC;
	// lwz r21,92(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8252ACB0:
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252ad0c
	if (ctx.cr6.eq) goto loc_8252AD0C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252ad0c
	if (ctx.cr6.eq) goto loc_8252AD0C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252acec
	if (!ctx.cr6.eq) goto loc_8252ACEC;
	// bl 0x822900a0
	ctx.lr = 0x8252ACE8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8252ACEC:
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
	ctx.lr = 0x8252AD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8252AD0C:
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252ad2c
	if (!ctx.cr6.eq) goto loc_8252AD2C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252adc8
	if (ctx.cr6.eq) goto loc_8252ADC8;
loc_8252AD2C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8252adbc
	if (!ctx.cr6.gt) goto loc_8252ADBC;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_8252AD3C:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,216(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8252adb0
	if (!ctx.cr6.eq) goto loc_8252ADB0;
	// lwz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252adb0
	if (!ctx.cr6.eq) goto loc_8252ADB0;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8252ad9c
	if (!ctx.cr6.gt) goto loc_8252AD9C;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8252AD9C;
	sub_82294520(ctx, base);
loc_8252AD9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252adb0
	if (ctx.cr0.eq) goto loc_8252ADB0;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8252ADB0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8252ad3c
	if (!ctx.cr0.eq) goto loc_8252AD3C;
loc_8252ADBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8252ae78
	ctx.lr = 0x8252ADC8;
	sub_8252AE78(ctx, base);
loc_8252ADC8:
	// lwz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252acb0
	if (ctx.cr6.lt) goto loc_8252ACB0;
loc_8252ADDC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8252ae0c
	if (ctx.cr6.eq) goto loc_8252AE0C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252adf8
	if (!ctx.cr6.eq) goto loc_8252ADF8;
	// bl 0x822900a0
	ctx.lr = 0x8252ADF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8252ADF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252AE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252AE0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252AE14"))) PPC_WEAK_FUNC(sub_8252AE14);
PPC_FUNC_IMPL(__imp__sub_8252AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252AE18"))) PPC_WEAK_FUNC(sub_8252AE18);
PPC_FUNC_IMPL(__imp__sub_8252AE18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ae40
	if (ctx.cr6.eq) goto loc_8252AE40;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ae40
	if (ctx.cr6.eq) goto loc_8252AE40;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8252AE40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252AE48"))) PPC_WEAK_FUNC(sub_8252AE48);
PPC_FUNC_IMPL(__imp__sub_8252AE48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ae70
	if (ctx.cr6.eq) goto loc_8252AE70;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ae70
	if (ctx.cr6.eq) goto loc_8252AE70;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8252AE70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252AE78"))) PPC_WEAK_FUNC(sub_8252AE78);
PPC_FUNC_IMPL(__imp__sub_8252AE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252aec8
	if (ctx.cr6.eq) goto loc_8252AEC8;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252aec4
	if (ctx.cr6.eq) goto loc_8252AEC4;
	// lbz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252aec4
	if (ctx.cr6.eq) goto loc_8252AEC4;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252aec4
	if (ctx.cr6.eq) goto loc_8252AEC4;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252aec8
	if (!ctx.cr6.eq) goto loc_8252AEC8;
loc_8252AEC4:
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
loc_8252AEC8:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252af04
	if (ctx.cr6.eq) goto loc_8252AF04;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252af00
	if (ctx.cr6.eq) goto loc_8252AF00;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252af00
	if (ctx.cr6.eq) goto loc_8252AF00;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252af04
	if (ctx.cr6.eq) goto loc_8252AF04;
loc_8252AF00:
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
loc_8252AF04:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252af3c
	if (ctx.cr6.eq) goto loc_8252AF3C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17656);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8252af3c
	if (ctx.cr6.lt) goto loc_8252AF3C;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252af3c
	if (ctx.cr6.eq) goto loc_8252AF3C;
	// lfs f13,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8252AF3C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8252af54
	if (ctx.cr6.eq) goto loc_8252AF54;
	// lfs f13,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8252af58
	goto loc_8252AF58;
loc_8252AF54:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8252AF58:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252af68
	if (ctx.cr6.eq) goto loc_8252AF68;
	// lfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
loc_8252AF68:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8252AF78:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b000
	if (ctx.cr6.eq) goto loc_8252B000;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8252b000
	if (ctx.cr6.eq) goto loc_8252B000;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252afd0
	if (ctx.cr6.eq) goto loc_8252AFD0;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r7,r10,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8252afd0
	if (ctx.cr6.eq) goto loc_8252AFD0;
	// rlwinm r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252afd0
	if (!ctx.cr6.eq) goto loc_8252AFD0;
	// lfs f12,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8252afd0
	if (!ctx.cr6.gt) goto loc_8252AFD0;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lfs f13,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
loc_8252AFD0:
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b000
	if (ctx.cr6.eq) goto loc_8252B000;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r7,r10,0,5,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8252b000
	if (!ctx.cr6.eq) goto loc_8252B000;
	// lfs f12,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8252b000
	if (!ctx.cr6.gt) goto loc_8252B000;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lfs f0,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
loc_8252B000:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252af78
	if (ctx.cr6.lt) goto loc_8252AF78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B018"))) PPC_WEAK_FUNC(sub_8252B018);
PPC_FUNC_IMPL(__imp__sub_8252B018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8252B020;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ae4
	ctx.lr = 0x8252B028;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,200(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252b2a8
	if (!ctx.cr6.gt) goto loc_8252B2A8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f29,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
loc_8252B050:
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r30,r25,r11
	ctx.r30.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8252ae78
	ctx.lr = 0x8252B064;
	sub_8252AE78(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f0,f31
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252b210
	if (ctx.cr6.eq) goto loc_8252B210;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b210
	if (ctx.cr6.eq) goto loc_8252B210;
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b210
	if (ctx.cr6.eq) goto loc_8252B210;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b210
	if (ctx.cr6.eq) goto loc_8252B210;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// lfs f0,188(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// lfs f13,196(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// lfs f12,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,200(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 200, temp.u32);
	// fmuls f30,f11,f27
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// beq cr6,0x8252b0f0
	if (ctx.cr6.eq) goto loc_8252B0F0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82683598
	ctx.lr = 0x8252B0F0;
	sub_82683598(ctx, base);
loc_8252B0F0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8252b294
	if (!ctx.cr6.eq) goto loc_8252B294;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252ab18
	ctx.lr = 0x8252B104;
	sub_8252AB18(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252b294
	if (!ctx.cr6.gt) goto loc_8252B294;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8252B11C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b1f8
	if (ctx.cr6.eq) goto loc_8252B1F8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8252b1f8
	if (ctx.cr6.eq) goto loc_8252B1F8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b1f8
	if (ctx.cr6.eq) goto loc_8252B1F8;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252b1b4
	if (ctx.cr6.eq) goto loc_8252B1B4;
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8252b1b4
	if (!ctx.cr6.gt) goto loc_8252B1B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8252abb0
	ctx.lr = 0x8252B170;
	sub_8252ABB0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f2,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82cb4fa0
	ctx.lr = 0x8252B184;
	sub_82CB4FA0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x8252b1dc
	if (!ctx.cr6.lt) goto loc_8252B1DC;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8252b1ac
	if (ctx.cr6.lt) goto loc_8252B1AC;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x8252b1dc
	goto loc_8252B1DC;
loc_8252B1AC:
	// fadds f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// b 0x8252b1dc
	goto loc_8252B1DC;
loc_8252B1B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b1f8
	if (ctx.cr6.eq) goto loc_8252B1F8;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252b1f8
	if (ctx.cr6.eq) goto loc_8252B1F8;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f1,f12,f27
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
loc_8252B1DC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82683598
	ctx.lr = 0x8252B1F8;
	sub_82683598(ctx, base);
loc_8252B1F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252b11c
	if (ctx.cr6.lt) goto loc_8252B11C;
	// b 0x8252b294
	goto loc_8252B294;
loc_8252B210:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252b294
	if (!ctx.cr6.gt) goto loc_8252B294;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8252B224:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b280
	if (ctx.cr6.eq) goto loc_8252B280;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f0,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b280
	if (ctx.cr6.eq) goto loc_8252B280;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252b280
	if (ctx.cr6.eq) goto loc_8252B280;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// fmuls f1,f12,f27
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// bl 0x82683598
	ctx.lr = 0x8252B280;
	sub_82683598(ctx, base);
loc_8252B280:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252b224
	if (ctx.cr6.lt) goto loc_8252B224;
loc_8252B294:
	// lwz r11,200(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252b050
	if (ctx.cr6.lt) goto loc_8252B050;
loc_8252B2A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b30
	ctx.lr = 0x8252B2B4;
	__restfpr_27(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B2B8"))) PPC_WEAK_FUNC(sub_8252B2B8);
PPC_FUNC_IMPL(__imp__sub_8252B2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8252B2C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// std r24,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r24.u64);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8252b2f0
	if (!ctx.cr6.eq) goto loc_8252B2F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8252B2F0:
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r27,196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8252b31c
	if (!ctx.cr6.eq) goto loc_8252B31C;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8252b31c
	if (!ctx.cr6.eq) goto loc_8252B31C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8252B31C:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b338
	if (!ctx.cr6.eq) goto loc_8252B338;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252b3ac
	if (ctx.cr6.eq) goto loc_8252B3AC;
loc_8252B338:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// bl 0x8252b6e0
	ctx.lr = 0x8252B344;
	sub_8252B6E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8252b3ac
	if (ctx.cr6.eq) goto loc_8252B3AC;
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r26,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r26.u32);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// stw r26,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82533ca8
	ctx.lr = 0x8252B36C;
	sub_82533CA8(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8252b384
	if (!ctx.cr6.eq) goto loc_8252B384;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r26.u32);
loc_8252B384:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8252b398
	if (!ctx.cr6.eq) goto loc_8252B398;
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// b 0x8252b3a0
	goto loc_8252B3A0;
loc_8252B398:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b3ac
	if (ctx.cr6.eq) goto loc_8252B3AC;
loc_8252B3A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252ae78
	ctx.lr = 0x8252B3AC;
	sub_8252AE78(ctx, base);
loc_8252B3AC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8252b3bc
	if (!ctx.cr6.eq) goto loc_8252B3BC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8252b47c
	if (ctx.cr6.eq) goto loc_8252B47C;
loc_8252B3BC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252b6e0
	ctx.lr = 0x8252B3C8;
	sub_8252B6E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8252b418
	if (!ctx.cr6.eq) goto loc_8252B418;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8252b47c
	if (ctx.cr6.eq) goto loc_8252B47C;
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82533ef8
	ctx.lr = 0x8252B3E4;
	sub_82533EF8(ctx, base);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lfs f0,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// beq cr6,0x8252b47c
	if (ctx.cr6.eq) goto loc_8252B47C;
loc_8252B418:
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r28,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r28.u32);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// stw r27,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r27.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82533bd8
	ctx.lr = 0x8252B434;
	sub_82533BD8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b47c
	if (ctx.cr6.eq) goto loc_8252B47C;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b47c
	if (ctx.cr6.eq) goto loc_8252B47C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252b598
	ctx.lr = 0x8252B460;
	sub_8252B598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252abb0
	ctx.lr = 0x8252B468;
	sub_8252ABB0(ctx, base);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252B47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252B47C:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8252b498
	if (!ctx.cr6.eq) goto loc_8252B498;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8252b49c
	if (ctx.cr6.eq) goto loc_8252B49C;
loc_8252B498:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8252B49C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B4A4"))) PPC_WEAK_FUNC(sub_8252B4A4);
PPC_FUNC_IMPL(__imp__sub_8252B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B4A8"))) PPC_WEAK_FUNC(sub_8252B4A8);
PPC_FUNC_IMPL(__imp__sub_8252B4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8252B4B0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8252b588
	if (!ctx.cr6.gt) goto loc_8252B588;
	// lwz r30,196(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_8252B4DC:
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8252b4f4
	if (!ctx.cr6.eq) goto loc_8252B4F4;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8252b510
	if (ctx.cr6.eq) goto loc_8252B510;
loc_8252B4F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252b4dc
	if (ctx.cr6.lt) goto loc_8252B4DC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8252B510:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252b588
	if (!ctx.cr6.gt) goto loc_8252B588;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8252B524:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b574
	if (ctx.cr6.eq) goto loc_8252B574;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b574
	if (ctx.cr6.eq) goto loc_8252B574;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b574
	if (ctx.cr6.eq) goto loc_8252B574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252abb0
	ctx.lr = 0x8252B560;
	sub_8252ABB0(ctx, base);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252B574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252B574:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252b524
	if (ctx.cr6.lt) goto loc_8252B524;
loc_8252B588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B594"))) PPC_WEAK_FUNC(sub_8252B594);
PPC_FUNC_IMPL(__imp__sub_8252B594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B598"))) PPC_WEAK_FUNC(sub_8252B598);
PPC_FUNC_IMPL(__imp__sub_8252B598) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8252b6e0
	ctx.lr = 0x8252B5AC;
	sub_8252B6E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8252b5e4
	if (ctx.cr6.eq) goto loc_8252B5E4;
	// lwz r10,196(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 196);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b5e4
	if (ctx.cr6.eq) goto loc_8252B5E4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8252ab18
	ctx.lr = 0x8252B5D4;
	sub_8252AB18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8252B5E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
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

__attribute__((alias("__imp__sub_8252B5FC"))) PPC_WEAK_FUNC(sub_8252B5FC);
PPC_FUNC_IMPL(__imp__sub_8252B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B600"))) PPC_WEAK_FUNC(sub_8252B600);
PPC_FUNC_IMPL(__imp__sub_8252B600) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8252b6e0
	ctx.lr = 0x8252B614;
	sub_8252B6E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8252b63c
	if (ctx.cr6.eq) goto loc_8252B63C;
	// lwz r11,196(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 196);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8252B63C:
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

__attribute__((alias("__imp__sub_8252B650"))) PPC_WEAK_FUNC(sub_8252B650);
PPC_FUNC_IMPL(__imp__sub_8252B650) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8252b6e0
	ctx.lr = 0x8252B664;
	sub_8252B6E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8252b68c
	if (ctx.cr6.eq) goto loc_8252B68C;
	// lwz r11,196(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 196);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8252B68C:
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

__attribute__((alias("__imp__sub_8252B6A0"))) PPC_WEAK_FUNC(sub_8252B6A0);
PPC_FUNC_IMPL(__imp__sub_8252B6A0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8252b6e0
	ctx.lr = 0x8252B6B4;
	sub_8252B6E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8252b6cc
	if (ctx.cr6.eq) goto loc_8252B6CC;
	// lwz r11,196(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 196);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_8252B6CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B6DC"))) PPC_WEAK_FUNC(sub_8252B6DC);
PPC_FUNC_IMPL(__imp__sub_8252B6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B6E0"))) PPC_WEAK_FUNC(sub_8252B6E0);
PPC_FUNC_IMPL(__imp__sub_8252B6E0) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r8,24(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// bne cr6,0x8252b6fc
	if (!ctx.cr6.eq) goto loc_8252B6FC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8252b73c
	if (ctx.cr6.eq) goto loc_8252B73C;
loc_8252B6FC:
	// lwz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8252b73c
	if (!ctx.cr6.gt) goto loc_8252B73C;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_8252B714:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8252b72c
	if (!ctx.cr6.eq) goto loc_8252B72C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8252b744
	if (ctx.cr6.eq) goto loc_8252B744;
loc_8252B72C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252b714
	if (ctx.cr6.lt) goto loc_8252B714;
loc_8252B73C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8252B744:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B74C"))) PPC_WEAK_FUNC(sub_8252B74C);
PPC_FUNC_IMPL(__imp__sub_8252B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B750"))) PPC_WEAK_FUNC(sub_8252B750);
PPC_FUNC_IMPL(__imp__sub_8252B750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8252B758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252b78c
	if (ctx.cr6.eq) goto loc_8252B78C;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x8252B78C;
	sub_82294520(ctx, base);
loc_8252B78C:
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252b7e8
	if (!ctx.cr6.gt) goto loc_8252B7E8;
loc_8252B79C:
	// lwz r11,244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8252b7d4
	if (ctx.cr6.eq) goto loc_8252B7D4;
loc_8252B7B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82534248
	ctx.lr = 0x8252B7C0;
	sub_82534248(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8252b7b4
	if (!ctx.cr6.eq) goto loc_8252B7B4;
loc_8252B7D4:
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252b79c
	if (ctx.cr6.lt) goto loc_8252B79C;
loc_8252B7E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B7F0"))) PPC_WEAK_FUNC(sub_8252B7F0);
PPC_FUNC_IMPL(__imp__sub_8252B7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8252B7F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252b82c
	if (ctx.cr6.eq) goto loc_8252B82C;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x8252B82C;
	sub_82294520(ctx, base);
loc_8252B82C:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252b878
	if (!ctx.cr6.gt) goto loc_8252B878;
loc_8252B83C:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b864
	if (ctx.cr6.eq) goto loc_8252B864;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252B864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252B864:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252b83c
	if (ctx.cr6.lt) goto loc_8252B83C;
loc_8252B878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B880"))) PPC_WEAK_FUNC(sub_8252B880);
PPC_FUNC_IMPL(__imp__sub_8252B880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8252B888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252b8e4
	if (!ctx.cr6.gt) goto loc_8252B8E4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8252B8A8:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b8d0
	if (ctx.cr6.eq) goto loc_8252B8D0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252B8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252B8D0:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252b8a8
	if (ctx.cr6.lt) goto loc_8252B8A8;
loc_8252B8E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B8EC"))) PPC_WEAK_FUNC(sub_8252B8EC);
PPC_FUNC_IMPL(__imp__sub_8252B8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B8F0"))) PPC_WEAK_FUNC(sub_8252B8F0);
PPC_FUNC_IMPL(__imp__sub_8252B8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8252B8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x8252b7f0
	ctx.lr = 0x8252B918;
	sub_8252B7F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x8252b968
	if (!ctx.cr6.gt) goto loc_8252B968;
loc_8252B92C:
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b954
	if (ctx.cr6.eq) goto loc_8252B954;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252B950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8252B954:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252b92c
	if (ctx.cr6.lt) goto loc_8252B92C;
loc_8252B968:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b9a0
	if (ctx.cr6.eq) goto loc_8252B9A0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252b98c
	if (!ctx.cr6.eq) goto loc_8252B98C;
	// bl 0x822900a0
	ctx.lr = 0x8252B988;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8252B98C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252B9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252B9A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B9A8"))) PPC_WEAK_FUNC(sub_8252B9A8);
PPC_FUNC_IMPL(__imp__sub_8252B9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8252B9B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bne cr6,0x8252b9d0
	if (!ctx.cr6.eq) goto loc_8252B9D0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8252ba5c
	if (ctx.cr6.eq) goto loc_8252BA5C;
loc_8252B9D0:
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
	// bl 0x8252b750
	ctx.lr = 0x8252B9E8;
	sub_8252B750(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x8252ba28
	if (!ctx.cr6.gt) goto loc_8252BA28;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8252B9FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8252ba18
	if (!ctx.cr6.eq) goto loc_8252BA18;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8252ba68
	if (ctx.cr6.eq) goto loc_8252BA68;
loc_8252BA18:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252b9fc
	if (ctx.cr6.lt) goto loc_8252B9FC;
loc_8252BA28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252ba5c
	if (ctx.cr6.eq) goto loc_8252BA5C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252ba48
	if (!ctx.cr6.eq) goto loc_8252BA48;
	// bl 0x822900a0
	ctx.lr = 0x8252BA44;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8252BA48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252BA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252BA5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8252BA68:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82534138
	ctx.lr = 0x8252BA78;
	sub_82534138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252BA84"))) PPC_WEAK_FUNC(sub_8252BA84);
PPC_FUNC_IMPL(__imp__sub_8252BA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BA88"))) PPC_WEAK_FUNC(sub_8252BA88);
PPC_FUNC_IMPL(__imp__sub_8252BA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8252BA90;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bne cr6,0x8252bab0
	if (!ctx.cr6.eq) goto loc_8252BAB0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8252bb3c
	if (ctx.cr6.eq) goto loc_8252BB3C;
loc_8252BAB0:
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
	// bl 0x8252b7f0
	ctx.lr = 0x8252BAC8;
	sub_8252B7F0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x8252bb08
	if (!ctx.cr6.gt) goto loc_8252BB08;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8252BADC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8252baf8
	if (!ctx.cr6.eq) goto loc_8252BAF8;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8252bb48
	if (ctx.cr6.eq) goto loc_8252BB48;
loc_8252BAF8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252badc
	if (ctx.cr6.lt) goto loc_8252BADC;
loc_8252BB08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252bb3c
	if (ctx.cr6.eq) goto loc_8252BB3C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252bb28
	if (!ctx.cr6.eq) goto loc_8252BB28;
	// bl 0x822900a0
	ctx.lr = 0x8252BB24;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8252BB28:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252BB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252BB3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8252BB48:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82533f80
	ctx.lr = 0x8252BB58;
	sub_82533F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252BB64"))) PPC_WEAK_FUNC(sub_8252BB64);
PPC_FUNC_IMPL(__imp__sub_8252BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BB68"))) PPC_WEAK_FUNC(sub_8252BB68);
PPC_FUNC_IMPL(__imp__sub_8252BB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8252BB70;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r19,-31884
	ctx.r19.s64 = -2089549824;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,-3824(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -3824);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-3824(r19)
	PPC_STORE_U32(ctx.r19.u32 + -3824, ctx.r11.u32);
	// ble cr6,0x8252bca8
	if (!ctx.cr6.gt) goto loc_8252BCA8;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// ld r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_8252BBC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// lwzx r7,r11,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r3,52(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// bne cr6,0x8252bbe0
	if (!ctx.cr6.eq) goto loc_8252BBE0;
	// lwz r4,25104(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25104);
loc_8252BBE0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x822a93e8
	ctx.lr = 0x8252BBF8;
	sub_822A93E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82396ef8
	ctx.lr = 0x8252BC14;
	sub_82396EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,220(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252BC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8252bc6c
	if (!ctx.cr6.gt) goto loc_8252BC6C;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8252BC6C;
	sub_82294520(ctx, base);
loc_8252BC6C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252bc80
	if (ctx.cr0.eq) goto loc_8252BC80;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8252BC80:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82534360
	ctx.lr = 0x8252BC94;
	sub_82534360(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252bbc4
	if (ctx.cr6.lt) goto loc_8252BBC4;
loc_8252BCA8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252bda8
	if (!ctx.cr6.gt) goto loc_8252BDA8;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
loc_8252BCC0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x82535680
	ctx.lr = 0x8252BCCC;
	sub_82535680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252bd34
	if (ctx.cr6.eq) goto loc_8252BD34;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252bd34
	if (!ctx.cr6.gt) goto loc_8252BD34;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_8252BCEC:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252bd20
	if (ctx.cr6.eq) goto loc_8252BD20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82534430
	ctx.lr = 0x8252BD10;
	sub_82534430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bd20
	if (ctx.cr6.eq) goto loc_8252BD20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8252BD20:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252bcec
	if (ctx.cr6.lt) goto loc_8252BCEC;
loc_8252BD34:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r20,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r20.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252bd94
	if (ctx.cr6.eq) goto loc_8252BD94;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252bd94
	if (ctx.cr6.eq) goto loc_8252BD94;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252bd74
	if (!ctx.cr6.eq) goto loc_8252BD74;
	// bl 0x822900a0
	ctx.lr = 0x8252BD70;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8252BD74:
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
	ctx.lr = 0x8252BD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8252BD94:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252bcc0
	if (ctx.cr6.lt) goto loc_8252BCC0;
loc_8252BDA8:
	// stw r18,-3824(r19)
	PPC_STORE_U32(ctx.r19.u32 + -3824, ctx.r18.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252BDB4"))) PPC_WEAK_FUNC(sub_8252BDB4);
PPC_FUNC_IMPL(__imp__sub_8252BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BDB8"))) PPC_WEAK_FUNC(sub_8252BDB8);
PPC_FUNC_IMPL(__imp__sub_8252BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8252BDC0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r19,-31884
	ctx.r19.s64 = -2089549824;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,-3824(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -3824);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-3824(r19)
	PPC_STORE_U32(ctx.r19.u32 + -3824, ctx.r11.u32);
	// ble cr6,0x8252bef8
	if (!ctx.cr6.gt) goto loc_8252BEF8;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// ld r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_8252BE14:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// lwzx r7,r11,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r3,52(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// bne cr6,0x8252be30
	if (!ctx.cr6.eq) goto loc_8252BE30;
	// lwz r4,25104(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25104);
loc_8252BE30:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x822a93e8
	ctx.lr = 0x8252BE48;
	sub_822A93E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82396ef8
	ctx.lr = 0x8252BE64;
	sub_82396EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,220(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252BE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8252bebc
	if (!ctx.cr6.gt) goto loc_8252BEBC;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8252BEBC;
	sub_82294520(ctx, base);
loc_8252BEBC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252bed0
	if (ctx.cr0.eq) goto loc_8252BED0;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8252BED0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82534540
	ctx.lr = 0x8252BEE4;
	sub_82534540(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252be14
	if (ctx.cr6.lt) goto loc_8252BE14;
loc_8252BEF8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252bf54
	if (!ctx.cr6.gt) goto loc_8252BF54;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_8252BF0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r31,r11,136
	ctx.r31.s64 = ctx.r11.s64 + 136;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252bf40
	if (ctx.cr6.eq) goto loc_8252BF40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82534610
	ctx.lr = 0x8252BF30;
	sub_82534610(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bf40
	if (ctx.cr6.eq) goto loc_8252BF40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8252BF40:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252bf0c
	if (ctx.cr6.lt) goto loc_8252BF0C;
loc_8252BF54:
	// stw r18,-3824(r19)
	PPC_STORE_U32(ctx.r19.u32 + -3824, ctx.r18.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252BF60"))) PPC_WEAK_FUNC(sub_8252BF60);
PPC_FUNC_IMPL(__imp__sub_8252BF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8252BF68;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r19,-31884
	ctx.r19.s64 = -2089549824;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,-3824(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -3824);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-3824(r19)
	PPC_STORE_U32(ctx.r19.u32 + -3824, ctx.r11.u32);
	// ble cr6,0x8252c0a0
	if (!ctx.cr6.gt) goto loc_8252C0A0;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// lis r23,-31884
	ctx.r23.s64 = -2089549824;
	// ld r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
loc_8252BFBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// lwzx r7,r11,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r3,52(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// bne cr6,0x8252bfd8
	if (!ctx.cr6.eq) goto loc_8252BFD8;
	// lwz r4,25104(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 25104);
loc_8252BFD8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822a93e8
	ctx.lr = 0x8252BFF0;
	sub_822A93E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82396ef8
	ctx.lr = 0x8252C00C;
	sub_82396EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,220(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252C028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r30,4(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8252c064
	if (!ctx.cr6.gt) goto loc_8252C064;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8252C064;
	sub_82294520(ctx, base);
loc_8252C064:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c078
	if (ctx.cr0.eq) goto loc_8252C078;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8252C078:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82534720
	ctx.lr = 0x8252C08C;
	sub_82534720(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252bfbc
	if (ctx.cr6.lt) goto loc_8252BFBC;
loc_8252C0A0:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252c168
	if (!ctx.cr6.gt) goto loc_8252C168;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_8252C0B4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// bl 0x82535750
	ctx.lr = 0x8252C0C0;
	sub_82535750(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8252c154
	if (ctx.cr6.eq) goto loc_8252C154;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252c154
	if (!ctx.cr6.gt) goto loc_8252C154;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_8252C0E0:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252c140
	if (!ctx.cr6.gt) goto loc_8252C140;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_8252C0FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c12c
	if (ctx.cr6.eq) goto loc_8252C12C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825347f0
	ctx.lr = 0x8252C11C;
	sub_825347F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c12c
	if (ctx.cr6.eq) goto loc_8252C12C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8252C12C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252c0fc
	if (ctx.cr6.lt) goto loc_8252C0FC;
loc_8252C140:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252c0e0
	if (ctx.cr6.lt) goto loc_8252C0E0;
loc_8252C154:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252c0b4
	if (ctx.cr6.lt) goto loc_8252C0B4;
loc_8252C168:
	// stw r18,-3824(r19)
	PPC_STORE_U32(ctx.r19.u32 + -3824, ctx.r18.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C174"))) PPC_WEAK_FUNC(sub_8252C174);
PPC_FUNC_IMPL(__imp__sub_8252C174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C178"))) PPC_WEAK_FUNC(sub_8252C178);
PPC_FUNC_IMPL(__imp__sub_8252C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8252C180;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,-3824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3824);
	// lwz r3,-29728(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29728);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,-3824(r29)
	PPC_STORE_U32(ctx.r29.u32 + -3824, ctx.r11.u32);
	// bne cr6,0x8252c1d4
	if (!ctx.cr6.eq) goto loc_8252C1D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82525cd8
	ctx.lr = 0x8252C1C8;
	sub_82525CD8(ctx, base);
	// stw r3,-29728(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29728, ctx.r3.u32);
	// bl 0x82525d98
	ctx.lr = 0x8252C1D0;
	sub_82525D98(ctx, base);
	// lwz r3,-29728(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29728);
loc_8252C1D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x8252c1e8
	if (!ctx.cr6.eq) goto loc_8252C1E8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_8252C1E8:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x8252C208;
	sub_822A93E8(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,-3824(r29)
	PPC_STORE_U32(ctx.r29.u32 + -3824, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,-29720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29720);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r11,-29724(r26)
	PPC_STORE_U32(ctx.r26.u32 + -29724, ctx.r11.u32);
	// stw r10,-29720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29720, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8252C250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,-29724(r26)
	PPC_STORE_U32(ctx.r26.u32 + -29724, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82533220
	ctx.lr = 0x8252C268;
	sub_82533220(ctx, base);
	// li r29,8
	ctx.r29.s64 = 8;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// bl 0x8252bb68
	ctx.lr = 0x8252C2A0;
	sub_8252BB68(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252b750
	ctx.lr = 0x8252C2B8;
	sub_8252B750(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// bl 0x8252bdb8
	ctx.lr = 0x8252C2EC;
	sub_8252BDB8(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252b7f0
	ctx.lr = 0x8252C304;
	sub_8252B7F0(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8252bf60
	ctx.lr = 0x8252C338;
	sub_8252BF60(ctx, base);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8252c360
	if (ctx.cr6.eq) goto loc_8252C360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82534430
	ctx.lr = 0x8252C358;
	sub_82534430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8252C360:
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252c3b4
	if (!ctx.cr6.gt) goto loc_8252C3B4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8252C374:
	// lwz r11,244(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c3a0
	if (ctx.cr6.eq) goto loc_8252C3A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82534610
	ctx.lr = 0x8252C398;
	sub_82534610(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8252C3A0:
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252c374
	if (ctx.cr6.lt) goto loc_8252C374;
loc_8252C3B4:
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252c404
	if (!ctx.cr6.gt) goto loc_8252C404;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8252C3C8:
	// lwz r11,232(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c3f0
	if (ctx.cr6.eq) goto loc_8252C3F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825347f0
	ctx.lr = 0x8252C3E8;
	sub_825347F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8252C3F0:
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252c3c8
	if (ctx.cr6.lt) goto loc_8252C3C8;
loc_8252C404:
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c41c
	if (!ctx.cr6.eq) goto loc_8252C41C;
	// bl 0x822900a0
	ctx.lr = 0x8252C418;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C41C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252c464
	if (ctx.cr6.eq) goto loc_8252C464;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c450
	if (!ctx.cr6.eq) goto loc_8252C450;
	// bl 0x822900a0
	ctx.lr = 0x8252C44C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C450:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C464:
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252c498
	if (ctx.cr6.eq) goto loc_8252C498;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c484
	if (!ctx.cr6.eq) goto loc_8252C484;
	// bl 0x822900a0
	ctx.lr = 0x8252C480;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C484:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C498:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c4d0
	if (ctx.cr6.eq) goto loc_8252C4D0;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c4bc
	if (!ctx.cr6.eq) goto loc_8252C4BC;
	// bl 0x822900a0
	ctx.lr = 0x8252C4B8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C4BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C4D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C4D0:
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bne cr6,0x8252c4f0
	if (!ctx.cr6.eq) goto loc_8252C4F0;
	// bl 0x822900a0
	ctx.lr = 0x8252C4EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C4F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c538
	if (ctx.cr6.eq) goto loc_8252C538;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c524
	if (!ctx.cr6.eq) goto loc_8252C524;
	// bl 0x822900a0
	ctx.lr = 0x8252C520;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C524:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C538:
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c56c
	if (ctx.cr6.eq) goto loc_8252C56C;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c558
	if (!ctx.cr6.eq) goto loc_8252C558;
	// bl 0x822900a0
	ctx.lr = 0x8252C554;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C558:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C56C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c5a0
	if (ctx.cr6.eq) goto loc_8252C5A0;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c58c
	if (!ctx.cr6.eq) goto loc_8252C58C;
	// bl 0x822900a0
	ctx.lr = 0x8252C588;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C58C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C5A0:
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c5b4
	if (!ctx.cr6.eq) goto loc_8252C5B4;
	// bl 0x822900a0
	ctx.lr = 0x8252C5B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C5B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,240(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c5fc
	if (ctx.cr6.eq) goto loc_8252C5FC;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c5e8
	if (!ctx.cr6.eq) goto loc_8252C5E8;
	// bl 0x822900a0
	ctx.lr = 0x8252C5E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C5E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C5FC:
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c630
	if (ctx.cr6.eq) goto loc_8252C630;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c61c
	if (!ctx.cr6.eq) goto loc_8252C61C;
	// bl 0x822900a0
	ctx.lr = 0x8252C618;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C61C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C630:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c664
	if (ctx.cr6.eq) goto loc_8252C664;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252c650
	if (!ctx.cr6.eq) goto loc_8252C650;
	// bl 0x822900a0
	ctx.lr = 0x8252C64C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8252C650:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252C664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C664:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C670"))) PPC_WEAK_FUNC(sub_8252C670);
PPC_FUNC_IMPL(__imp__sub_8252C670) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C690"))) PPC_WEAK_FUNC(sub_8252C690);
PPC_FUNC_IMPL(__imp__sub_8252C690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8252C6AC;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82534d08
	ctx.lr = 0x8252C6C0;
	sub_82534D08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C6D4"))) PPC_WEAK_FUNC(sub_8252C6D4);
PPC_FUNC_IMPL(__imp__sub_8252C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C6D8"))) PPC_WEAK_FUNC(sub_8252C6D8);
PPC_FUNC_IMPL(__imp__sub_8252C6D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C6F8"))) PPC_WEAK_FUNC(sub_8252C6F8);
PPC_FUNC_IMPL(__imp__sub_8252C6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8252C714;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82534e78
	ctx.lr = 0x8252C728;
	sub_82534E78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C73C"))) PPC_WEAK_FUNC(sub_8252C73C);
PPC_FUNC_IMPL(__imp__sub_8252C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C740"))) PPC_WEAK_FUNC(sub_8252C740);
PPC_FUNC_IMPL(__imp__sub_8252C740) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C760"))) PPC_WEAK_FUNC(sub_8252C760);
PPC_FUNC_IMPL(__imp__sub_8252C760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8252C77C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82534fe8
	ctx.lr = 0x8252C790;
	sub_82534FE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C7A4"))) PPC_WEAK_FUNC(sub_8252C7A4);
PPC_FUNC_IMPL(__imp__sub_8252C7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C7A8"))) PPC_WEAK_FUNC(sub_8252C7A8);
PPC_FUNC_IMPL(__imp__sub_8252C7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8252c7d0
	if (!ctx.cr6.eq) goto loc_8252C7D0;
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,148(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// blr 
	return;
loc_8252C7D0:
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f1,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,148(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C804"))) PPC_WEAK_FUNC(sub_8252C804);
PPC_FUNC_IMPL(__imp__sub_8252C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C808"))) PPC_WEAK_FUNC(sub_8252C808);
PPC_FUNC_IMPL(__imp__sub_8252C808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8252C810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82526858
	ctx.lr = 0x8252C81C;
	sub_82526858(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252c88c
	if (!ctx.cr6.gt) goto loc_8252C88C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8252C830:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8252c850
	if (!ctx.cr6.eq) goto loc_8252C850;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252c878
	if (ctx.cr6.eq) goto loc_8252C878;
loc_8252C850:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// ld r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252C878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C878:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252c830
	if (ctx.cr6.lt) goto loc_8252C830;
loc_8252C88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C894"))) PPC_WEAK_FUNC(sub_8252C894);
PPC_FUNC_IMPL(__imp__sub_8252C894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C898"))) PPC_WEAK_FUNC(sub_8252C898);
PPC_FUNC_IMPL(__imp__sub_8252C898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8252C8A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252c9fc
	if (!ctx.cr6.gt) goto loc_8252C9FC;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r9,-19580
	ctx.r27.s64 = ctx.r9.s64 + -19580;
	// addi r26,r10,-16604
	ctx.r26.s64 = ctx.r10.s64 + -16604;
	// addi r25,r11,-16644
	ctx.r25.s64 = ctx.r11.s64 + -16644;
loc_8252C8D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8252c9e8
	if (ctx.cr6.eq) goto loc_8252C9E8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8252C8F8;
	sub_8233E028(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8252c90c
	if (ctx.cr6.eq) goto loc_8252C90C;
	// addi r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 + 44;
	// b 0x8252c928
	goto loc_8252C928;
loc_8252C90C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8233e028
	ctx.lr = 0x8252C924;
	sub_8233E028(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8252C928:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252c950
	if (!ctx.cr6.eq) goto loc_8252C950;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8252c9c0
	if (ctx.cr6.eq) goto loc_8252C9C0;
loc_8252C950:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8252C968;
	sub_8233E028(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8252c97c
	if (ctx.cr6.eq) goto loc_8252C97C;
	// addi r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 + 44;
	// b 0x8252c998
	goto loc_8252C998;
loc_8252C97C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x8252C994;
	sub_8233E028(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8252C998:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252c9e8
	if (!ctx.cr6.eq) goto loc_8252C9E8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252c9e8
	if (!ctx.cr6.eq) goto loc_8252C9E8;
loc_8252C9C0:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// ld r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252C9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252C9E8:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252c8d8
	if (ctx.cr6.lt) goto loc_8252C8D8;
loc_8252C9FC:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252CA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252CA24"))) PPC_WEAK_FUNC(sub_8252CA24);
PPC_FUNC_IMPL(__imp__sub_8252CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CA28"))) PPC_WEAK_FUNC(sub_8252CA28);
PPC_FUNC_IMPL(__imp__sub_8252CA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8252CA30;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae4
	ctx.lr = 0x8252CA38;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,196(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252cca0
	if (ctx.cr6.eq) goto loc_8252CCA0;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252cab4
	if (!ctx.cr6.eq) goto loc_8252CAB4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8252cab4
	if (!ctx.cr6.eq) goto loc_8252CAB4;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x8252cab4
	if (!ctx.cr6.eq) goto loc_8252CAB4;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8252cab4
	if (!ctx.cr6.gt) goto loc_8252CAB4;
	// lwz r8,212(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8252cca0
	if (ctx.cr6.gt) goto loc_8252CCA0;
loc_8252CAB4:
	// stfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f29,20(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bne cr6,0x8252cb14
	if (!ctx.cr6.eq) goto loc_8252CB14;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8252cb14
	if (!ctx.cr6.eq) goto loc_8252CB14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252cca0
	if (ctx.cr6.eq) goto loc_8252CCA0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8252CB04;
	sub_82294520(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b30
	ctx.lr = 0x8252CB10;
	__restfpr_27(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8252CB14:
	// lwz r29,60(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e4b50
	ctx.lr = 0x8252CB24;
	sub_825E4B50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x8252cca0
	if (ctx.cr6.eq) goto loc_8252CCA0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,704(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// addi r25,r31,36
	ctx.r25.s64 = ctx.r31.s64 + 36;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252cb60
	if (ctx.cr6.eq) goto loc_8252CB60;
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82294520
	ctx.lr = 0x8252CB60;
	sub_82294520(ctx, base);
loc_8252CB60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252cb84
	if (ctx.cr6.eq) goto loc_8252CB84;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8252CB84;
	sub_82294520(ctx, base);
loc_8252CB84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,128(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// bl 0x825360b8
	ctx.lr = 0x8252CB90;
	sub_825360B8(ctx, base);
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// addi r27,r28,208
	ctx.r27.s64 = ctx.r28.s64 + 208;
	// stw r30,212(r28)
	PPC_STORE_U32(ctx.r28.u32 + 212, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252cbb8
	if (ctx.cr6.eq) goto loc_8252CBB8;
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82294520
	ctx.lr = 0x8252CBB8;
	sub_82294520(ctx, base);
loc_8252CBB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stfsx f29,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8252cca0
	if (!ctx.cr6.gt) goto loc_8252CCA0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lfs f27,-17656(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17656);
	ctx.f27.f64 = double(temp.f32);
	// addi r24,r11,-18304
	ctx.r24.s64 = ctx.r11.s64 + -18304;
	// lfs f28,-18284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18284);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_8252CC00:
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x8252cc58
	if (ctx.cr6.eq) goto loc_8252CC58;
	// lwz r10,124(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8252cc30
	if (!ctx.cr6.eq) goto loc_8252CC30;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8252cc54
	goto loc_8252CC54;
loc_8252CC30:
	// fadds f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
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
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f12,r24,r7
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f30,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
loc_8252CC54:
	// stfsx f0,r28,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, temp.u32);
loc_8252CC58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x8252cc70
	if (!ctx.cr6.gt) goto loc_8252CC70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8252cc7c
	goto loc_8252CC7C;
loc_8252CC70:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x8252cc88
	if (ctx.cr6.gt) goto loc_8252CC88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8252CC7C:
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82399238
	ctx.lr = 0x8252CC88;
	sub_82399238(ctx, base);
loc_8252CC88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252cc00
	if (ctx.cr6.lt) goto loc_8252CC00;
loc_8252CCA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b30
	ctx.lr = 0x8252CCAC;
	__restfpr_27(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252CCB0"))) PPC_WEAK_FUNC(sub_8252CCB0);
PPC_FUNC_IMPL(__imp__sub_8252CCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8252CCB8;
	__savegprlr_28(ctx, base);
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
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	ctx.lr = 0x8252CCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
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
	ctx.lr = 0x8252CD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-31885
	ctx.r7.s64 = -2089615360;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,28928(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28928);
	// lfs f0,-32444(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,28928(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28928, ctx.r10.u32);
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
	ctx.lr = 0x8252CD78;
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
	// bne cr6,0x8252cdb4
	if (!ctx.cr6.eq) goto loc_8252CDB4;
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
	ctx.lr = 0x8252CDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252CDB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252CDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252CDDC"))) PPC_WEAK_FUNC(sub_8252CDDC);
PPC_FUNC_IMPL(__imp__sub_8252CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CDE0"))) PPC_WEAK_FUNC(sub_8252CDE0);
PPC_FUNC_IMPL(__imp__sub_8252CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8252CDE8;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6ae0
	ctx.lr = 0x8252CDF0;
	__savefpr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x825261d0
	ctx.lr = 0x8252CE14;
	sub_825261D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252d518
	if (!ctx.cr6.eq) goto loc_8252D518;
	// lwz r9,184(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8252ce7c
	if (!ctx.cr6.eq) goto loc_8252CE7C;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8252CE38:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x8252ce38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252CE38;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x8252CE6C;
	sub_82526028(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6b2c
	ctx.lr = 0x8252CE78;
	__restfpr_26(ctx, base);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_8252CE7C:
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r21,-1
	ctx.r21.s64 = -1;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,704(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// lfs f26,-18284(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18284);
	ctx.f26.f64 = double(temp.f32);
	// lwz r20,128(r7)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// ble cr6,0x8252cecc
	if (!ctx.cr6.gt) goto loc_8252CECC;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8252CEAC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8252cebc
	if (!ctx.cr6.gt) goto loc_8252CEBC;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_8252CEBC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252ceac
	if (ctx.cr6.lt) goto loc_8252CEAC;
loc_8252CECC:
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// bne cr6,0x8252cf84
	if (!ctx.cr6.eq) goto loc_8252CF84;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cf14
	if (ctx.cr6.eq) goto loc_8252CF14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252CF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8252cf58
	goto loc_8252CF58;
loc_8252CF14:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252CF28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8252cf28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252CF28;
	// stw r19,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r19.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x8252CF58;
	sub_82526028(ctx, base);
loc_8252CF58:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526260
	ctx.lr = 0x8252CF6C;
	sub_82526260(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825366b0
	ctx.lr = 0x8252CF74;
	sub_825366B0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6b2c
	ctx.lr = 0x8252CF80;
	__restfpr_26(ctx, base);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_8252CF84:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252d4c8
	if (!ctx.cr6.gt) goto loc_8252D4C8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f29,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f27.f64 = double(temp.f32);
loc_8252CFAC:
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f27.f64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x8252d4b8
	if (ctx.cr6.lt) goto loc_8252D4B8;
loc_8252CFC0:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// rlwinm r30,r25,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8252d4b0
	if (!ctx.cr6.gt) goto loc_8252D4B0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lbzx r28,r11,r22
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// ble cr6,0x8252d00c
	if (!ctx.cr6.gt) goto loc_8252D00C;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,196(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lfsx f13,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8252d010
	goto loc_8252D010;
loc_8252D00C:
	// fsubs f31,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
loc_8252D010:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d050
	if (!ctx.cr6.eq) goto loc_8252D050;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8252d050
	if (!ctx.cr6.gt) goto loc_8252D050;
	// addi r11,r20,3
	ctx.r11.s64 = ctx.r20.s64 + 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82294520
	ctx.lr = 0x8252D050;
	sub_82294520(ctx, base);
loc_8252D050:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252d254
	if (ctx.cr6.eq) goto loc_8252D254;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252D090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8252d0b4
	if (!ctx.cr6.eq) goto loc_8252D0B4;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252d0b8
	if (ctx.cr6.eq) goto loc_8252D0B8;
loc_8252D0B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252D0B8:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8252d19c
	if (ctx.cr6.eq) goto loc_8252D19C;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r18,100(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8252D184:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8252d184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252D184;
	// b 0x8252d26c
	goto loc_8252D26C;
loc_8252D19C:
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f11,f4
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f3,f11
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x8252d26c
	goto loc_8252D26C;
loc_8252D254:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x8252D26C;
	sub_82526028(ctx, base);
loc_8252D26C:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f10,f9,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f4,f8,f7,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f0,f6,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f27
	ctx.cr6.compare(ctx.f3.f64, ctx.f27.f64);
	// bge cr6,0x8252d30c
	if (!ctx.cr6.lt) goto loc_8252D30C;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f8,f11,f28
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8252D30C:
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// beq cr6,0x8252d3e4
	if (ctx.cr6.eq) goto loc_8252D3E4;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,8
	ctx.r7.s64 = 8;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lwz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r4,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8252D3CC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8252d3cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252D3CC;
	// b 0x8252d48c
	goto loc_8252D48C;
loc_8252D3E4:
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lfs f6,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f12,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f12,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f11,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f1,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f6,f4
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f1,f9,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f1,24(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_8252D48C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8252d4a4
	if (!ctx.cr6.eq) goto loc_8252D4A4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823d1868
	ctx.lr = 0x8252D4A0;
	sub_823D1868(ctx, base);
	// b 0x8252d4ac
	goto loc_8252D4AC;
loc_8252D4A4:
	// ble cr6,0x8252d4ac
	if (!ctx.cr6.gt) goto loc_8252D4AC;
	// fadds f30,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
loc_8252D4AC:
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_8252D4B0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge 0x8252cfc0
	if (!ctx.cr0.lt) goto loc_8252CFC0;
loc_8252D4B8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252cfac
	if (ctx.cr6.lt) goto loc_8252CFAC;
loc_8252D4C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526260
	ctx.lr = 0x8252D4DC;
	sub_82526260(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d518
	if (ctx.cr6.eq) goto loc_8252D518;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252d504
	if (!ctx.cr6.eq) goto loc_8252D504;
	// bl 0x822900a0
	ctx.lr = 0x8252D500;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8252D504:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252D518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252D518:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6b2c
	ctx.lr = 0x8252D524;
	__restfpr_26(ctx, base);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D528"))) PPC_WEAK_FUNC(sub_8252D528);
PPC_FUNC_IMPL(__imp__sub_8252D528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8252D530;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8229b218
	ctx.lr = 0x8252D53C;
	sub_8229B218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x8252D544;
	sub_8229BB00(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,310
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 310, ctx.xer);
	// bge cr6,0x8252d704
	if (!ctx.cr6.lt) goto loc_8252D704;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825337c0
	ctx.lr = 0x8252D55C;
	sub_825337C0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-19536
	ctx.r4.s64 = ctx.r11.s64 + -19536;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,344(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x8233e028
	ctx.lr = 0x8252D57C;
	sub_8233E028(ctx, base);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r31,260
	ctx.r28.s64 = ctx.r31.s64 + 260;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// std r8,244(r31)
	PPC_STORE_U64(ctx.r31.u32 + 244, ctx.r8.u64);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// std r9,252(r31)
	PPC_STORE_U64(ctx.r31.u32 + 252, ctx.r9.u64);
	// bl 0x82534ae8
	ctx.lr = 0x8252D5E4;
	sub_82534AE8(ctx, base);
	// lwz r7,268(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8252d608
	if (ctx.cr6.eq) goto loc_8252D608;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,372
	ctx.r4.s64 = 372;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x8252D608;
	sub_82294520(ctx, base);
loc_8252D608:
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// addi r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 + 304;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r11,r31,320
	ctx.r11.s64 = ctx.r31.s64 + 320;
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// addi r11,r31,328
	ctx.r11.s64 = ctx.r31.s64 + 328;
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r8,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r8.u32);
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r7,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r7.u32);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// lwz r6,288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r6,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r6.u32);
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r5,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r5.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r4,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r4.u32);
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// stw r29,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// stw r29,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r29.u32);
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// lwz r8,316(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r8,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r8.u32);
	// stw r29,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r29.u32);
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// lwz r7,320(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r7,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r7.u32);
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r6,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r6.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r5,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r5.u32);
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r4,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r4.u32);
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// stw r29,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r29.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
loc_8252D704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x8252D70C;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,331
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 331, ctx.xer);
	// bge cr6,0x8252d810
	if (!ctx.cr6.lt) goto loc_8252D810;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8252d80c
	if (!ctx.cr6.lt) goto loc_8252D80C;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r25,356(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252d808
	if (!ctx.cr6.gt) goto loc_8252D808;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8252D738:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r27,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r27.u32);
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252d7f4
	if (!ctx.cr6.gt) goto loc_8252D7F4;
loc_8252D754:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D764;
	sub_8252D930(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D774;
	sub_8252D930(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D784;
	sub_8252D930(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D794;
	sub_8252D930(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D7A4;
	sub_8252D930(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D7B4;
	sub_8252D930(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D7C4;
	sub_8252D930(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D7D4;
	sub_8252D930(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d930
	ctx.lr = 0x8252D7E4;
	sub_8252D930(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252d754
	if (ctx.cr6.lt) goto loc_8252D754;
loc_8252D7F4:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,108
	ctx.r26.s64 = ctx.r26.s64 + 108;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252d738
	if (ctx.cr6.lt) goto loc_8252D738;
loc_8252D808:
	// stw r25,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r25.u32);
loc_8252D80C:
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
loc_8252D810:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D818"))) PPC_WEAK_FUNC(sub_8252D818);
PPC_FUNC_IMPL(__imp__sub_8252D818) {
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
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252D854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r8,-16564
	ctx.r4.s64 = ctx.r8.s64 + -16564;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8252D870;
	sub_8233E028(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8252d884
	if (ctx.cr6.eq) goto loc_8252D884;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8252d8a4
	goto loc_8252D8A4;
loc_8252D884:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8252D8A0;
	sub_8233E028(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8252D8A4:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252d8e0
	if (!ctx.cr6.eq) goto loc_8252D8E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252d8e0
	if (!ctx.cr6.eq) goto loc_8252D8E0;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r10.u32);
	// bl 0x8252f010
	ctx.lr = 0x8252D8E0;
	sub_8252F010(ctx, base);
loc_8252D8E0:
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

__attribute__((alias("__imp__sub_8252D8F8"))) PPC_WEAK_FUNC(sub_8252D8F8);
PPC_FUNC_IMPL(__imp__sub_8252D8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82526858
	ctx.lr = 0x8252D910;
	sub_82526858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d9e8
	ctx.lr = 0x8252D918;
	sub_8252D9E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252D92C"))) PPC_WEAK_FUNC(sub_8252D92C);
PPC_FUNC_IMPL(__imp__sub_8252D92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D930"))) PPC_WEAK_FUNC(sub_8252D930);
PPC_FUNC_IMPL(__imp__sub_8252D930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8252D938;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252ed28
	ctx.lr = 0x8252D95C;
	sub_8252ED28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d7698
	ctx.lr = 0x8252D968;
	sub_823D7698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4218
	ctx.lr = 0x8252D974;
	sub_823D4218(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252eb68
	ctx.lr = 0x8252D984;
	sub_8252EB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d9b0
	if (ctx.cr6.eq) goto loc_8252D9B0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_8252D9B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8252ea88
	ctx.lr = 0x8252D9CC;
	sub_8252EA88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d9e0
	if (ctx.cr6.eq) goto loc_8252D9E0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_8252D9E0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D9E8"))) PPC_WEAK_FUNC(sub_8252D9E8);
PPC_FUNC_IMPL(__imp__sub_8252D9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x8252D9F0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r28,r20,220
	ctx.r28.s64 = ctx.r20.s64 + 220;
	// lwz r11,228(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 228);
	// stw r19,224(r20)
	PPC_STORE_U32(ctx.r20.u32 + 224, ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252da24
	if (ctx.cr6.eq) goto loc_8252DA24;
	// stw r19,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r19.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x8252DA24;
	sub_82294520(ctx, base);
loc_8252DA24:
	// lwz r11,356(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 356);
	// lwz r10,348(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 348);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252dbc0
	if (!ctx.cr6.lt) goto loc_8252DBC0;
	// lwz r10,344(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8252da78
	if (!ctx.cr6.gt) goto loc_8252DA78;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8252DA58:
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,372
	ctx.r10.s64 = ctx.r10.s64 + 372;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,28(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8252da58
	if (ctx.cr6.lt) goto loc_8252DA58;
loc_8252DA78:
	// lwz r11,60(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252dbc0
	if (ctx.cr6.eq) goto loc_8252DBC0;
	// lwz r23,704(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8252dbc0
	if (ctx.cr6.eq) goto loc_8252DBC0;
	// lwz r21,128(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8252dbb0
	if (!ctx.cr6.gt) goto loc_8252DBB0;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lis r22,-31885
	ctx.r22.s64 = -2089615360;
loc_8252DAA8:
	// lwz r6,28(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8252dba0
	if (!ctx.cr6.gt) goto loc_8252DBA0;
	// lwz r11,124(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 124);
	// lwz r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8252DACC:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8252dae8
	if (!ctx.cr6.eq) goto loc_8252DAE8;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8252dafc
	if (ctx.cr6.eq) goto loc_8252DAFC;
loc_8252DAE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,372
	ctx.r11.s64 = ctx.r11.s64 + 372;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8252dacc
	if (ctx.cr6.lt) goto loc_8252DACC;
	// b 0x8252dba0
	goto loc_8252DBA0;
loc_8252DAFC:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8252dba0
	if (ctx.cr6.eq) goto loc_8252DBA0;
	// mulli r11,r10,372
	ctx.r11.s64 = ctx.r10.s64 * 372;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r27,r26,24
	ctx.r27.u64 = ctx.r26.u32 & 0xFF;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// ble cr6,0x8252db90
	if (!ctx.cr6.gt) goto loc_8252DB90;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// bne cr6,0x8252db58
	if (!ctx.cr6.eq) goto loc_8252DB58;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252db90
	if (ctx.cr6.eq) goto loc_8252DB90;
loc_8252DB58:
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252db70
	if (!ctx.cr6.eq) goto loc_8252DB70;
	// bl 0x822900a0
	ctx.lr = 0x8252DB6C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8252DB70:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252DB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_8252DB90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dba0
	if (ctx.cr0.eq) goto loc_8252DBA0;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
loc_8252DBA0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,68
	ctx.r24.s64 = ctx.r24.s64 + 68;
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8252daa8
	if (ctx.cr6.lt) goto loc_8252DAA8;
loc_8252DBB0:
	// lwz r11,60(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x825260b8
	ctx.lr = 0x8252DBC0;
	sub_825260B8(ctx, base);
loc_8252DBC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DBC8"))) PPC_WEAK_FUNC(sub_8252DBC8);
PPC_FUNC_IMPL(__imp__sub_8252DBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x8252dbec
	if (!ctx.cr6.gt) goto loc_8252DBEC;
loc_8252DBE0:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x8252dbe0
	if (ctx.cr6.gt) goto loc_8252DBE0;
loc_8252DBEC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8252DBFC:
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8252dbfc
	if (ctx.cr6.lt) goto loc_8252DBFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DC0C"))) PPC_WEAK_FUNC(sub_8252DC0C);
PPC_FUNC_IMPL(__imp__sub_8252DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DC10"))) PPC_WEAK_FUNC(sub_8252DC10);
PPC_FUNC_IMPL(__imp__sub_8252DC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8252DC18;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r31,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r31.u32);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r29,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// bl 0x825261d0
	ctx.lr = 0x8252DC5C;
	sub_825261D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252e9a8
	if (!ctx.cr6.eq) goto loc_8252E9A8;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252dc98
	if (ctx.cr6.eq) goto loc_8252DC98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252DC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8252dcdc
	goto loc_8252DCDC;
loc_8252DC98:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-13736
	ctx.r11.s64 = ctx.r11.s64 + -13736;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252DCAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8252dcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252DCAC;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r5,r11,124
	ctx.r5.s64 = ctx.r11.s64 + 124;
	// bl 0x82526028
	ctx.lr = 0x8252DCDC;
	sub_82526028(ctx, base);
loc_8252DCDC:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e9a8
	if (ctx.cr6.eq) goto loc_8252E9A8;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252e9a8
	if (ctx.cr6.eq) goto loc_8252E9A8;
	// lwz r10,348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252e9a8
	if (!ctx.cr6.lt) goto loc_8252E9A8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 * 108;
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// lwz r8,380(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// add r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8252DD28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f0,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-32444
	ctx.r11.s64 = ctx.r11.s64 + -32444;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// lfs f29,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// lfs f13,-552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -552);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lfs f11,-18204(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18204);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,21152(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21152);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x8252dd90
	if (ctx.cr6.eq) goto loc_8252DD90;
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8252dd74
	if (!ctx.cr6.gt) goto loc_8252DD74;
loc_8252DD68:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x8252dd68
	if (ctx.cr6.gt) goto loc_8252DD68;
loc_8252DD74:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8252dd88
	if (!ctx.cr6.lt) goto loc_8252DD88;
loc_8252DD7C:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8252dd7c
	if (ctx.cr6.lt) goto loc_8252DD7C;
loc_8252DD88:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8252DD90:
	// lfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8252ddd4
	if (ctx.cr6.eq) goto loc_8252DDD4;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8252ddb8
	if (!ctx.cr6.gt) goto loc_8252DDB8;
loc_8252DDAC:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x8252ddac
	if (ctx.cr6.gt) goto loc_8252DDAC;
loc_8252DDB8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8252ddcc
	if (!ctx.cr6.lt) goto loc_8252DDCC;
loc_8252DDC0:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8252ddc0
	if (ctx.cr6.lt) goto loc_8252DDC0;
loc_8252DDCC:
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x8252ddd8
	goto loc_8252DDD8;
loc_8252DDD4:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
loc_8252DDD8:
	// lfs f13,8(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// beq cr6,0x8252ddf8
	if (ctx.cr6.eq) goto loc_8252DDF8;
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bge cr6,0x8252ddf8
	if (!ctx.cr6.lt) goto loc_8252DDF8;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fdivs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8252DDF8:
	// lfs f13,12(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// beq cr6,0x8252de14
	if (ctx.cr6.eq) goto loc_8252DE14;
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// ble cr6,0x8252de14
	if (!ctx.cr6.gt) goto loc_8252DE14;
	// fdivs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8252DE14:
	// lfs f13,16(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// beq cr6,0x8252de34
	if (ctx.cr6.eq) goto loc_8252DE34;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8252de34
	if (!ctx.cr6.lt) goto loc_8252DE34;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8252DE34:
	// lfs f13,20(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// beq cr6,0x8252de50
	if (ctx.cr6.eq) goto loc_8252DE50;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8252de50
	if (!ctx.cr6.gt) goto loc_8252DE50;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8252DE50:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x8252de6c
	if (!ctx.cr6.lt) goto loc_8252DE6C;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8252de78
	goto loc_8252DE78;
loc_8252DE6C:
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x8252de78
	if (ctx.cr6.lt) goto loc_8252DE78;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8252DE78:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8252de88
	if (!ctx.cr6.lt) goto loc_8252DE88;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x8252de94
	goto loc_8252DE94;
loc_8252DE88:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8252de94
	if (ctx.cr6.lt) goto loc_8252DE94;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8252DE94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252DEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r8,236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r24,704(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// lwz r29,128(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8252df04
	if (ctx.cr6.eq) goto loc_8252DF04;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r31,r30,232
	ctx.r31.s64 = ctx.r30.s64 + 232;
	// stw r19,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252deec
	if (ctx.cr6.eq) goto loc_8252DEEC;
	// stw r19,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r19.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8252DEEC;
	sub_82294520(ctx, base);
loc_8252DEEC:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8252DF04;
	sub_82294AC0(ctx, base);
loc_8252DF04:
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82528d28
	ctx.lr = 0x8252DF20;
	sub_82528D28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r16,28(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// ble cr6,0x8252e988
	if (!ctx.cr6.gt) goto loc_8252E988;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// lwz r17,128(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r25,32
	ctx.r25.s64 = 32;
	// lfs f30,32428(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32428);
	ctx.f30.f64 = double(temp.f32);
	// li r27,48
	ctx.r27.s64 = 48;
	// li r26,16
	ctx.r26.s64 = 16;
	// addi r22,r11,-17568
	ctx.r22.s64 = ctx.r11.s64 + -17568;
	// addi r21,r10,-17520
	ctx.r21.s64 = ctx.r10.s64 + -17520;
	// addi r20,r9,-17552
	ctx.r20.s64 = ctx.r9.s64 + -17552;
loc_8252DF60:
	// lbzx r28,r17,r19
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r19.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rotlwi r29,r28,6
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r28.u32, 6);
	// rotlwi r23,r28,5
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r28.u32, 5);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bl 0x825362c8
	ctx.lr = 0x8252DF80;
	sub_825362C8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8252e074
	if (!ctx.cr6.gt) goto loc_8252E074;
	// lwz r11,124(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	// mulli r9,r28,68
	ctx.r9.s64 = ctx.r28.s64 * 68;
	// lwz r10,232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r7,r6,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lvx128 v60,r10,r25
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r10
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r10,r27
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v57,v59,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v56,r10,r26
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v55,v59,v60
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v54,v56,v58
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lvx128 v53,r0,r7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v52,v56,v58
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v51,v57,v54
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v50,v55,v52
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrglw128 v49,v57,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v48,v55,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmsum4fp128 v43,v62,v51
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v62,v50
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v63,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v63,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v41,v62,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v62,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v39,v61,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v61,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v61,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v61,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v53,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v34,v53,v50
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v33,v53,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v53,v48
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v47,v63,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v63,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v62,v45,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v60,v41,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v33,v32
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v53,v58,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v63,v47,v46
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v56,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v53,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8252E074:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x8252e978
	if (!ctx.cr6.gt) goto loc_8252E978;
	// lwz r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8252E088:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8252e0a8
	if (ctx.cr6.eq) goto loc_8252E0A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,372
	ctx.r10.s64 = ctx.r10.s64 + 372;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x8252e088
	if (ctx.cr6.lt) goto loc_8252E088;
	// b 0x8252e978
	goto loc_8252E978;
loc_8252E0A8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8252e978
	if (ctx.cr6.eq) goto loc_8252E978;
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mulli r11,r11,372
	ctx.r11.s64 = ctx.r11.s64 * 372;
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8252e374
	if (ctx.cr6.eq) goto loc_8252E374;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8252e4f0
	if (ctx.cr6.gt) goto loc_8252E4F0;
	// lis r12,-32173
	ctx.r12.s64 = -2108489728;
	// addi r12,r12,-7956
	ctx.r12.s64 = ctx.r12.s64 + -7956;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8252E110;
	case 1:
		goto loc_8252E154;
	case 2:
		goto loc_8252E198;
	case 3:
		goto loc_8252E1DC;
	case 4:
		goto loc_8252E220;
	case 5:
		goto loc_8252E264;
	case 6:
		goto loc_8252E2A8;
	case 7:
		goto loc_8252E2EC;
	case 8:
		goto loc_8252E330;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-7920(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7920);
	// lwz r18,-7852(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7852);
	// lwz r18,-7784(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7784);
	// lwz r18,-7716(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7716);
	// lwz r18,-7648(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7648);
	// lwz r18,-7580(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7580);
	// lwz r18,-7512(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7512);
	// lwz r18,-7444(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7444);
	// lwz r18,-7376(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7376);
loc_8252E110:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E154:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r8,r31,144
	ctx.r8.s64 = ctx.r31.s64 + 144;
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r6,160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E198:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r8,r31,264
	ctx.r8.s64 = ctx.r31.s64 + 264;
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r6,280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r5,284(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E1DC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E220:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r8,r31,184
	ctx.r8.s64 = ctx.r31.s64 + 184;
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r6,200(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E264:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r8,r31,304
	ctx.r8.s64 = ctx.r31.s64 + 304;
	// lwz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r6,320(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E2A8:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r8,r31,104
	ctx.r8.s64 = ctx.r31.s64 + 104;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E2EC:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r8,r31,224
	ctx.r8.s64 = ctx.r31.s64 + 224;
	// lwz r7,232(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E330:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r8,r31,344
	ctx.r8.s64 = ctx.r31.s64 + 344;
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r6,360(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8252e4f0
	goto loc_8252E4F0;
loc_8252E374:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// blt cr6,0x8252e40c
	if (ctx.cr6.lt) goto loc_8252E40C;
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// blt cr6,0x8252e3c8
	if (ctx.cr6.lt) goto loc_8252E3C8;
	// addi r7,r31,264
	ctx.r7.s64 = ctx.r31.s64 + 264;
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// addi r5,r31,304
	ctx.r5.s64 = ctx.r31.s64 + 304;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82535d28
	ctx.lr = 0x8252E3A4;
	sub_82535D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r31,280
	ctx.r7.s64 = ctx.r31.s64 + 280;
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r31,160
	ctx.r6.s64 = ctx.r31.s64 + 160;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// b 0x8252e4b0
	goto loc_8252E4B0;
loc_8252E3C8:
	// fcmpu cr6,f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// bge cr6,0x8252e40c
	if (!ctx.cr6.lt) goto loc_8252E40C;
	// addi r7,r31,304
	ctx.r7.s64 = ctx.r31.s64 + 304;
	// fadds f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f31.f64));
	// addi r6,r31,184
	ctx.r6.s64 = ctx.r31.s64 + 184;
	// addi r5,r31,344
	ctx.r5.s64 = ctx.r31.s64 + 344;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82535d28
	ctx.lr = 0x8252E3EC;
	sub_82535D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r31,320
	ctx.r7.s64 = ctx.r31.s64 + 320;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// b 0x8252e4a8
	goto loc_8252E4A8;
loc_8252E40C:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x8252e4f0
	if (!ctx.cr6.lt) goto loc_8252E4F0;
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// blt cr6,0x8252e460
	if (ctx.cr6.lt) goto loc_8252E460;
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// fadds f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// addi r5,r31,184
	ctx.r5.s64 = ctx.r31.s64 + 184;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82535d28
	ctx.lr = 0x8252E438;
	sub_82535D28(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r31,160
	ctx.r7.s64 = ctx.r31.s64 + 160;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// b 0x8252e4b0
	goto loc_8252E4B0;
loc_8252E460:
	// fcmpu cr6,f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// bge cr6,0x8252e4f0
	if (!ctx.cr6.lt) goto loc_8252E4F0;
	// addi r7,r31,184
	ctx.r7.s64 = ctx.r31.s64 + 184;
	// fadds f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f31.f64));
	// addi r6,r31,64
	ctx.r6.s64 = ctx.r31.s64 + 64;
	// fadds f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82535d28
	ctx.lr = 0x8252E488;
	sub_82535D28(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fadds f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r5,r31,240
	ctx.r5.s64 = ctx.r31.s64 + 240;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_8252E4A8:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_8252E4B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x825357f8
	ctx.lr = 0x8252E4D8;
	sub_825357F8(ctx, base);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8252E4F0:
	// stfs f29,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823d7798
	ctx.lr = 0x8252E50C;
	sub_823D7798(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252E51C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252e51c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252E51C;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823d40c0
	ctx.lr = 0x8252E53C;
	sub_823D40C0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x8252e570
	if (!ctx.cr6.lt) goto loc_8252E570;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x8252e570
	if (!ctx.cr6.lt) goto loc_8252E570;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x8252e574
	if (ctx.cr6.lt) goto loc_8252E574;
loc_8252E570:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252E574:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8252e5b0
	if (!ctx.cr6.eq) goto loc_8252E5B0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8252e5b0
	if (!ctx.cr6.eq) goto loc_8252E5B0;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8252e5b4
	if (ctx.cr6.eq) goto loc_8252E5B4;
loc_8252E5B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252E5B4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x8252e5d4
	if (!ctx.cr6.eq) goto loc_8252E5D4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252e978
	if (ctx.cr6.eq) goto loc_8252E978;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252e678
	if (ctx.cr6.eq) goto loc_8252E678;
loc_8252E5D4:
	// addi r8,r1,528
	ctx.r8.s64 = ctx.r1.s64 + 528;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lvx128 v51,r0,r20
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// lvx128 v50,r0,r21
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lvx128 v49,r0,r22
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r6,r15,1
	ctx.r6.u64 = ctx.r15.u64 | 1;
	// stfs f0,528(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// vmrghw128 v48,v51,v49
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// stfs f13,532(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// vmrglw128 v47,v51,v49
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// stfs f12,536(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stfs f31,540(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// ori r15,r6,2
	ctx.r15.u64 = ctx.r6.u64 | 2;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v46,v50,v63
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrglw128 v45,v50,v63
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// lvx128 v44,r11,r27
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v43,v48,v46
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrglw128 v42,v48,v46
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v41,v47,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrglw128 v40,v47,v45
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v39,v44,v43
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v38,v44,v42
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v37,v44,v41
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v36,v44,v40
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v35,v39,v37
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v34,v38,v36
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v33,v35,v34
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// stvx128 v33,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,624(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,628(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,632(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// b 0x8252e69c
	goto loc_8252E69C;
loc_8252E678:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
loc_8252E69C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r15,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// beq cr6,0x8252e6c4
	if (ctx.cr6.eq) goto loc_8252E6C4;
	// rlwinm r15,r15,0,31,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8252E6C4:
	// clrlwi r10,r15,31
	ctx.r10.u64 = ctx.r15.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252e6d4
	if (ctx.cr6.eq) goto loc_8252E6D4;
	// rlwinm r15,r15,0,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
loc_8252E6D4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252e7b8
	if (ctx.cr6.eq) goto loc_8252E7B8;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lvx128 v32,r0,r11
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lvx128 v61,r0,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v60,r0,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v56,r0,r10
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v55,v61,v60
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v54,r0,r9
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v52,v59,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrglw128 v51,v59,v57
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrglw128 v49,v58,v55
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v44,v56,v52
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v47,v32,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v43,v56,v50
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v32,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v42,v56,v51
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v41,v56,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v54,v52
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v39,v54,v50
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v38,v54,v51
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v37,v54,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v53,v52
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v35,v53,v50
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v34,v53,v51
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v33,v53,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v48,v32,v52
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v46,v32,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v62,v44,v43
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v63,v47,v45
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v61,v42,v41
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrghw128 v59,v40,v39
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v58,v38,v37
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v57,v62,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v56,v36,v35
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v55,v34,v33
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v54,v59,v58
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v32,v48,v46
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v53,v56,v55
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// stvx128 v57,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v32,v63
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// stvx128 v54,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8252E7B8:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bne cr6,0x8252e808
	if (!ctx.cr6.eq) goto loc_8252E808;
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252E7F0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252e7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252E7F0;
	// b 0x8252e920
	goto loc_8252E920;
loc_8252E808:
	// lwz r10,124(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	// mulli r9,r28,68
	ctx.r9.s64 = ctx.r28.s64 * 68;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823829d8
	ctx.lr = 0x8252E82C;
	sub_823829D8(ctx, base);
	// lvx128 v48,r0,r3
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r3,r25
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,416
	ctx.r8.s64 = ctx.r1.s64 + 416;
	// lvx128 v46,r3,r27
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// lvx128 v44,r3,r26
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v43,v48,v47
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v42,v44,v46
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// lvx128 v52,r0,r31
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v41,v44,v46
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// lvx128 v51,r31,r26
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r31,r25
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// lvx128 v49,r31,r27
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// vmrghw128 v40,v45,v42
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// vmrghw128 v39,v43,v41
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// addi r9,r1,672
	ctx.r9.s64 = ctx.r1.s64 + 672;
	// vmrglw128 v38,v45,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// vmrglw128 v37,v43,v41
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// li r11,8
	ctx.r11.s64 = 8;
	// vmsum4fp128 v32,v51,v40
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v63,v51,v39
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v34,v52,v38
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v33,v52,v37
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v62,v51,v38
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v61,v51,v37
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v60,v50,v40
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v59,v50,v39
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v58,v50,v38
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v57,v50,v37
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v56,v49,v40
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v55,v49,v39
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v54,v49,v38
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v53,v49,v37
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v36,v52,v40
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v35,v52,v39
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmrghw128 v50,v32,v63
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v51,v34,v33
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v49,v62,v61
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v47,v60,v59
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v46,v58,v57
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v45,v50,v49
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v44,v56,v55
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v43,v54,v53
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v42,v47,v46
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v52,v36,v35
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v41,v44,v43
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// stvx128 v45,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v48,v52,v51
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// stvx128 v42,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8252E90C:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8252e90c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252E90C;
loc_8252E920:
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82536108
	ctx.lr = 0x8252E92C;
	sub_82536108(ctx, base);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r8,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_8252E978:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252df60
	if (ctx.cr6.lt) goto loc_8252DF60;
loc_8252E988:
	// lwz r11,1028(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1028);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1020(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82526260
	ctx.lr = 0x8252E9A0;
	sub_82526260(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b1a50
	ctx.lr = 0x8252E9A8;
	sub_822B1A50(ctx, base);
loc_8252E9A8:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
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

__attribute__((alias("__imp__sub_8252E9BC"))) PPC_WEAK_FUNC(sub_8252E9BC);
PPC_FUNC_IMPL(__imp__sub_8252E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E9C0"))) PPC_WEAK_FUNC(sub_8252E9C0);
PPC_FUNC_IMPL(__imp__sub_8252E9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8252e9dc
	if (!ctx.cr6.eq) goto loc_8252E9DC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// blr 
	return;
loc_8252E9DC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,-18200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252E9F8"))) PPC_WEAK_FUNC(sub_8252E9F8);
PPC_FUNC_IMPL(__imp__sub_8252E9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,-28844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bne cr6,0x8252ea20
	if (!ctx.cr6.eq) goto loc_8252EA20;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,196(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// blr 
	return;
loc_8252EA20:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-18204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,200(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EA34"))) PPC_WEAK_FUNC(sub_8252EA34);
PPC_FUNC_IMPL(__imp__sub_8252EA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EA38"))) PPC_WEAK_FUNC(sub_8252EA38);
PPC_FUNC_IMPL(__imp__sub_8252EA38) {
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
	// lfs f2,200(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lfs f1,196(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-16524
	ctx.r4.s64 = ctx.r11.s64 + -16524;
	// bl 0x8232e868
	ctx.lr = 0x8252EA70;
	sub_8232E868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8252EA88"))) PPC_WEAK_FUNC(sub_8252EA88);
PPC_FUNC_IMPL(__imp__sub_8252EA88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252eb5c
	if (ctx.cr6.eq) goto loc_8252EB5C;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252eb5c
	if (!ctx.cr6.lt) goto loc_8252EB5C;
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8252eb5c
	if (ctx.cr6.lt) goto loc_8252EB5C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252eb5c
	if (!ctx.cr6.lt) goto loc_8252EB5C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r11,r4,372
	ctx.r11.s64 = ctx.r4.s64 * 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32173
	ctx.r12.s64 = -2108489728;
	// addi r12,r12,-5392
	ctx.r12.s64 = ctx.r12.s64 + -5392;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_8252EB14;
	case 1:
		goto loc_8252EB1C;
	case 2:
		goto loc_8252EB24;
	case 3:
		goto loc_8252EB2C;
	case 4:
		goto loc_8252EB34;
	case 5:
		goto loc_8252EB3C;
	case 6:
		goto loc_8252EB44;
	case 7:
		goto loc_8252EB4C;
	case 8:
		goto loc_8252EB54;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-5356(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5356);
	// lwz r18,-5348(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5348);
	// lwz r18,-5340(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5340);
	// lwz r18,-5332(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5332);
	// lwz r18,-5324(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5324);
	// lwz r18,-5316(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5316);
	// lwz r18,-5308(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5308);
	// lwz r18,-5300(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5300);
	// lwz r18,-5292(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5292);
loc_8252EB14:
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
loc_8252EB1C:
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// blr 
	return;
loc_8252EB24:
	// addi r3,r11,252
	ctx.r3.s64 = ctx.r11.s64 + 252;
	// blr 
	return;
loc_8252EB2C:
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// blr 
	return;
loc_8252EB34:
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// blr 
	return;
loc_8252EB3C:
	// addi r3,r11,292
	ctx.r3.s64 = ctx.r11.s64 + 292;
	// blr 
	return;
loc_8252EB44:
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// blr 
	return;
loc_8252EB4C:
	// addi r3,r11,212
	ctx.r3.s64 = ctx.r11.s64 + 212;
	// blr 
	return;
loc_8252EB54:
	// addi r3,r11,332
	ctx.r3.s64 = ctx.r11.s64 + 332;
	// blr 
	return;
loc_8252EB5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EB64"))) PPC_WEAK_FUNC(sub_8252EB64);
PPC_FUNC_IMPL(__imp__sub_8252EB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EB68"))) PPC_WEAK_FUNC(sub_8252EB68);
PPC_FUNC_IMPL(__imp__sub_8252EB68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ec3c
	if (ctx.cr6.eq) goto loc_8252EC3C;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252ec3c
	if (!ctx.cr6.lt) goto loc_8252EC3C;
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8252ec3c
	if (ctx.cr6.lt) goto loc_8252EC3C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252ec3c
	if (!ctx.cr6.lt) goto loc_8252EC3C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r11,r4,372
	ctx.r11.s64 = ctx.r4.s64 * 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32173
	ctx.r12.s64 = -2108489728;
	// addi r12,r12,-5168
	ctx.r12.s64 = ctx.r12.s64 + -5168;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_8252EBF4;
	case 1:
		goto loc_8252EBFC;
	case 2:
		goto loc_8252EC04;
	case 3:
		goto loc_8252EC0C;
	case 4:
		goto loc_8252EC14;
	case 5:
		goto loc_8252EC1C;
	case 6:
		goto loc_8252EC24;
	case 7:
		goto loc_8252EC2C;
	case 8:
		goto loc_8252EC34;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-5132(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5132);
	// lwz r18,-5124(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5124);
	// lwz r18,-5116(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5116);
	// lwz r18,-5108(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5108);
	// lwz r18,-5100(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5100);
	// lwz r18,-5092(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5092);
	// lwz r18,-5084(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5084);
	// lwz r18,-5076(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5076);
	// lwz r18,-5068(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5068);
loc_8252EBF4:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
loc_8252EBFC:
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// blr 
	return;
loc_8252EC04:
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// blr 
	return;
loc_8252EC0C:
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// blr 
	return;
loc_8252EC14:
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// blr 
	return;
loc_8252EC1C:
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// blr 
	return;
loc_8252EC24:
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// blr 
	return;
loc_8252EC2C:
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// blr 
	return;
loc_8252EC34:
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// blr 
	return;
loc_8252EC3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EC44"))) PPC_WEAK_FUNC(sub_8252EC44);
PPC_FUNC_IMPL(__imp__sub_8252EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EC48"))) PPC_WEAK_FUNC(sub_8252EC48);
PPC_FUNC_IMPL(__imp__sub_8252EC48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ed1c
	if (ctx.cr6.eq) goto loc_8252ED1C;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252ed1c
	if (!ctx.cr6.lt) goto loc_8252ED1C;
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8252ed1c
	if (ctx.cr6.lt) goto loc_8252ED1C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252ed1c
	if (!ctx.cr6.lt) goto loc_8252ED1C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r11,r4,372
	ctx.r11.s64 = ctx.r4.s64 * 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32173
	ctx.r12.s64 = -2108489728;
	// addi r12,r12,-4944
	ctx.r12.s64 = ctx.r12.s64 + -4944;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_8252ECD4;
	case 1:
		goto loc_8252ECDC;
	case 2:
		goto loc_8252ECE4;
	case 3:
		goto loc_8252ECEC;
	case 4:
		goto loc_8252ECF4;
	case 5:
		goto loc_8252ECFC;
	case 6:
		goto loc_8252ED04;
	case 7:
		goto loc_8252ED0C;
	case 8:
		goto loc_8252ED14;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-4908(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4908);
	// lwz r18,-4900(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4900);
	// lwz r18,-4892(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4892);
	// lwz r18,-4884(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4884);
	// lwz r18,-4876(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4876);
	// lwz r18,-4868(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4868);
	// lwz r18,-4860(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4860);
	// lwz r18,-4852(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4852);
	// lwz r18,-4844(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4844);
loc_8252ECD4:
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// blr 
	return;
loc_8252ECDC:
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// blr 
	return;
loc_8252ECE4:
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// blr 
	return;
loc_8252ECEC:
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// blr 
	return;
loc_8252ECF4:
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// blr 
	return;
loc_8252ECFC:
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// blr 
	return;
loc_8252ED04:
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// blr 
	return;
loc_8252ED0C:
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// blr 
	return;
loc_8252ED14:
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// blr 
	return;
loc_8252ED1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252ED24"))) PPC_WEAK_FUNC(sub_8252ED24);
PPC_FUNC_IMPL(__imp__sub_8252ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252ED28"))) PPC_WEAK_FUNC(sub_8252ED28);
PPC_FUNC_IMPL(__imp__sub_8252ED28) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8252ea88
	ctx.lr = 0x8252ED48;
	sub_8252EA88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ed80
	if (ctx.cr6.eq) goto loc_8252ED80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8252ED80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EDA0"))) PPC_WEAK_FUNC(sub_8252EDA0);
PPC_FUNC_IMPL(__imp__sub_8252EDA0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8252eb68
	ctx.lr = 0x8252EDC0;
	sub_8252EB68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ee00
	if (ctx.cr6.eq) goto loc_8252EE00;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8252EE00:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r10,r11,-17776
	ctx.r10.s64 = ctx.r11.s64 + -17776;
	// lwz r8,-17776(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17776);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EE38"))) PPC_WEAK_FUNC(sub_8252EE38);
PPC_FUNC_IMPL(__imp__sub_8252EE38) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8252ec48
	ctx.lr = 0x8252EE58;
	sub_8252EC48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ee90
	if (ctx.cr6.eq) goto loc_8252EE90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8252EE90:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EEB4"))) PPC_WEAK_FUNC(sub_8252EEB4);
PPC_FUNC_IMPL(__imp__sub_8252EEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EEB8"))) PPC_WEAK_FUNC(sub_8252EEB8);
PPC_FUNC_IMPL(__imp__sub_8252EEB8) {
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
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// bl 0x8252ea88
	ctx.lr = 0x8252EED0;
	sub_8252EA88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252eef0
	if (ctx.cr6.eq) goto loc_8252EEF0;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_8252EEF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EF00"))) PPC_WEAK_FUNC(sub_8252EF00);
PPC_FUNC_IMPL(__imp__sub_8252EF00) {
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
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// bl 0x8252eb68
	ctx.lr = 0x8252EF18;
	sub_8252EB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ef44
	if (ctx.cr6.eq) goto loc_8252EF44;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_8252EF44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EF54"))) PPC_WEAK_FUNC(sub_8252EF54);
PPC_FUNC_IMPL(__imp__sub_8252EF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EF58"))) PPC_WEAK_FUNC(sub_8252EF58);
PPC_FUNC_IMPL(__imp__sub_8252EF58) {
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
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// bl 0x8252ec48
	ctx.lr = 0x8252EF70;
	sub_8252EC48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ef90
	if (ctx.cr6.eq) goto loc_8252EF90;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_8252EF90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EFA0"))) PPC_WEAK_FUNC(sub_8252EFA0);
PPC_FUNC_IMPL(__imp__sub_8252EFA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252f000
	if (!ctx.cr6.lt) goto loc_8252F000;
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8252f000
	if (!ctx.cr6.gt) goto loc_8252F000;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_8252EFD4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8252eff0
	if (!ctx.cr6.eq) goto loc_8252EFF0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8252f008
	if (ctx.cr6.eq) goto loc_8252F008;
loc_8252EFF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,372
	ctx.r11.s64 = ctx.r11.s64 + 372;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8252efd4
	if (ctx.cr6.lt) goto loc_8252EFD4;
loc_8252F000:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8252F008:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F010"))) PPC_WEAK_FUNC(sub_8252F010);
PPC_FUNC_IMPL(__imp__sub_8252F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8252F018;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252f3e0
	if (ctx.cr6.eq) goto loc_8252F3E0;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252f3e0
	if (ctx.cr6.eq) goto loc_8252F3E0;
	// lwz r10,356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8252f3f0
	if (!ctx.cr6.lt) goto loc_8252F3F0;
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// mulli r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 * 108;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f07c
	if (ctx.cr6.eq) goto loc_8252F07C;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,372
	ctx.r4.s64 = 372;
	// bl 0x82294520
	ctx.lr = 0x8252F07C;
	sub_82294520(ctx, base);
loc_8252F07C:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x822d9388
	ctx.lr = 0x8252F088;
	sub_822D9388(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r4,-31884
	ctx.r4.s64 = -2089549824;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// lwz r4,25104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25104);
	// bl 0x822a93e8
	ctx.lr = 0x8252F0B0;
	sub_822A93E8(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 68);
	// lwz r9,308(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8252F0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8252f100
	if (ctx.cr6.eq) goto loc_8252F100;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F0F8;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252f120
	if (!ctx.cr6.eq) goto loc_8252F120;
loc_8252F100:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-16384
	ctx.r4.s64 = ctx.r11.s64 + -16384;
	// bl 0x822bc6c8
	ctx.lr = 0x8252F110;
	sub_822BC6C8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825366b0
	ctx.lr = 0x8252F118;
	sub_825366B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8252F120:
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 36);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f17c
	if (ctx.cr6.eq) goto loc_8252F17C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F160;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f17c
	if (!ctx.cr6.eq) goto loc_8252F17C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F17C;
	sub_8252F3F8(ctx, base);
loc_8252F17C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 44);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f1cc
	if (ctx.cr6.eq) goto loc_8252F1CC;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F1B0;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f1cc
	if (!ctx.cr6.eq) goto loc_8252F1CC;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F1CC;
	sub_8252F3F8(ctx, base);
loc_8252F1CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 52);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f21c
	if (ctx.cr6.eq) goto loc_8252F21C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F200;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f21c
	if (!ctx.cr6.eq) goto loc_8252F21C;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F21C;
	sub_8252F3F8(ctx, base);
loc_8252F21C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 60);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f26c
	if (ctx.cr6.eq) goto loc_8252F26C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F250;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f26c
	if (!ctx.cr6.eq) goto loc_8252F26C;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F26C;
	sub_8252F3F8(ctx, base);
loc_8252F26C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 76);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f2bc
	if (ctx.cr6.eq) goto loc_8252F2BC;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F2A0;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f2bc
	if (!ctx.cr6.eq) goto loc_8252F2BC;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F2BC;
	sub_8252F3F8(ctx, base);
loc_8252F2BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 84);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f30c
	if (ctx.cr6.eq) goto loc_8252F30C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F2F0;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f30c
	if (!ctx.cr6.eq) goto loc_8252F30C;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F30C;
	sub_8252F3F8(ctx, base);
loc_8252F30C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 92);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f35c
	if (ctx.cr6.eq) goto loc_8252F35C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F340;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f35c
	if (!ctx.cr6.eq) goto loc_8252F35C;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F35C;
	sub_8252F3F8(ctx, base);
loc_8252F35C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 100);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252F374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252f3ac
	if (ctx.cr6.eq) goto loc_8252F3AC;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825300d8
	ctx.lr = 0x8252F390;
	sub_825300D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8252f3ac
	if (!ctx.cr6.eq) goto loc_8252F3AC;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252f3f8
	ctx.lr = 0x8252F3AC;
	sub_8252F3F8(ctx, base);
loc_8252F3AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252d9e8
	ctx.lr = 0x8252F3B4;
	sub_8252D9E8(ctx, base);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-16256
	ctx.r4.s64 = ctx.r11.s64 + -16256;
	// bl 0x822bc6c8
	ctx.lr = 0x8252F3C8;
	sub_822BC6C8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825366b0
	ctx.lr = 0x8252F3D0;
	sub_825366B0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825366b0
	ctx.lr = 0x8252F3D8;
	sub_825366B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8252F3E0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-16496
	ctx.r4.s64 = ctx.r11.s64 + -16496;
	// bl 0x822bc6c8
	ctx.lr = 0x8252F3F0;
	sub_822BC6C8(ctx, base);
loc_8252F3F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F3F8"))) PPC_WEAK_FUNC(sub_8252F3F8);
PPC_FUNC_IMPL(__imp__sub_8252F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8252F400;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x82294ac0
	ctx.lr = 0x8252F448;
	sub_82294AC0(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x8252fa34
	if (!ctx.cr6.gt) goto loc_8252FA34;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// lfs f30,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f29.f64 = double(temp.f32);
	// addi r31,r23,32
	ctx.r31.s64 = ctx.r23.s64 + 32;
	// lfs f31,32428(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32428);
	ctx.f31.f64 = double(temp.f32);
	// li r24,32
	ctx.r24.s64 = 32;
	// li r27,48
	ctx.r27.s64 = 48;
	// li r25,16
	ctx.r25.s64 = 16;
	// addi r20,r11,-17840
	ctx.r20.s64 = ctx.r11.s64 + -17840;
loc_8252F494:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x825362c8
	ctx.lr = 0x8252F4A8;
	sub_825362C8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8252f594
	if (!ctx.cr6.gt) goto loc_8252F594;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lvx128 v63,r0,r30
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r31
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,704(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lvx128 v61,r0,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r9
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lvx128 v59,r11,r24
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r27
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v56,v58,v59
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v55,r11,r25
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v54,v58,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v53,v55,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrglw128 v52,v55,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v51,v56,v53
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v50,v54,v52
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrglw128 v49,v56,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v48,v54,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum4fp128 v39,v62,v51
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v62,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v63,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v63,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v41,v61,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v61,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v37,v62,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v62,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v60,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v34,v60,v50
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v33,v60,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v60,v48
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v47,v63,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v63,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v43,v61,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v61,v50
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v62,v45,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v60,v41,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v33,v32
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v53,v58,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v63,v47,v46
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// stvx128 v53,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8252F594:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x825362c8
	ctx.lr = 0x8252F5A4;
	sub_825362C8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8252f6a8
	if (!ctx.cr6.gt) goto loc_8252F6A8;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,704(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r11,124(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lvx128 v51,r11,r24
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r11
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r27
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v48,v50,v51
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// lvx128 v47,r11,r25
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v46,v50,v51
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v45,v47,v49
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrglw128 v44,v47,v49
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v43,v48,v45
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v42,v46,v44
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrglw128 v41,v48,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrglw128 v40,v46,v44
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmsum4fp128 v39,v63,v43
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v38,v63,v42
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v35,v62,v43
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v34,v62,v42
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v37,v63,v41
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v36,v63,v40
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v33,v62,v41
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v32,v62,v40
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v63,v61,v43
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v62,v61,v42
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v57,v60,v43
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v56,v60,v42
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v59,v61,v41
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v58,v61,v40
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v55,v60,v41
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v54,v60,v40
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v53,v39,v38
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v51,v35,v34
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v52,v37,v36
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v50,v33,v32
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v48,v63,v62
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v49,v53,v52
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v45,v57,v56
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v46,v51,v50
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v47,v59,v58
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v44,v55,v54
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v43,v48,v47
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// stvx128 v49,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v42,v45,v44
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// stvx128 v46,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8252F6A8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252F6B8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252f6b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252F6B8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f12,288(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252F6F4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252f6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252F6F4;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,496(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f13,500(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stfs f12,504(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// bl 0x823829d8
	ctx.lr = 0x8252F72C;
	sub_823829D8(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lvx128 v41,r3,r27
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,560
	ctx.r7.s64 = ctx.r1.s64 + 560;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v40,v63,v62
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v60,r0,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v39,v63,v62
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v38,v61,v60
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrglw128 v37,v61,v60
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v36,v40,v38
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrglw128 v35,v40,v38
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v34,v39,v37
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrglw128 v33,v39,v37
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v32,v41,v36
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v36.f32), 0xFF));
	// vmsum4fp128 v63,v41,v35
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v62,v41,v34
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vmsum4fp128 v61,v41,v33
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmrghw128 v60,v32,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v59,v63,v61
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v60,v59
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// stvx128 v58,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,564(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,568(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,560(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge cr6,0x8252f7d0
	if (!ctx.cr6.lt) goto loc_8252F7D0;
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8252f7d0
	if (!ctx.cr6.lt) goto loc_8252F7D0;
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8252f818
	if (ctx.cr6.lt) goto loc_8252F818;
loc_8252F7D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252fa80
	ctx.lr = 0x8252F7E0;
	sub_8252FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8252f818
	if (ctx.cr6.eq) goto loc_8252F818;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252ec48
	ctx.lr = 0x8252F7F8;
	sub_8252EC48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252f818
	if (ctx.cr6.eq) goto loc_8252F818;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_8252F818:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252F828:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252f828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252F828;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82485a40
	ctx.lr = 0x8252F848;
	sub_82485A40(ctx, base);
	// stfs f30,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// stfs f30,232(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8252F864:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8252f864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252F864;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82485a40
	ctx.lr = 0x8252F884;
	sub_82485A40(ctx, base);
	// stfs f30,432(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f30,436(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stfs f30,440(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x823829d8
	ctx.lr = 0x8252F89C;
	sub_823829D8(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v54,r0,r3
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v52,r3,r25
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lvx128 v51,r3,r24
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r3,r27
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v57,v63,v62
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v60,r0,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v56,v63,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v55,v61,v60
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// vmrglw128 v53,v61,v60
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vmrghw128 v49,v57,v55
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v48,v57,v55
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v47,v56,v53
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v46,v56,v53
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v45,v54,v49
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v54,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v43,v54,v47
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v42,v54,v46
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v41,v52,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v52,v47
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v39,v52,v48
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v38,v52,v46
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v37,v51,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v51,v47
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v35,v51,v48
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v34,v51,v46
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v33,v50,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v50,v47
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v63,v50,v48
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v62,v50,v46
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmrghw128 v61,v45,v43
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v60,v44,v42
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v59,v41,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v56,v37,v36
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v59,v58
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v53,v33,v32
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v52,v63,v62
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v57,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v51,v56,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v50,v53,v52
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v54,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d40c0
	ctx.lr = 0x8252F988;
	sub_823D40C0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823d4218
	ctx.lr = 0x8252F994;
	sub_823D4218(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8252f9c4
	if (!ctx.cr6.eq) goto loc_8252F9C4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8252f9c4
	if (!ctx.cr6.eq) goto loc_8252F9C4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252fa18
	if (ctx.cr6.eq) goto loc_8252FA18;
loc_8252F9C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252fa80
	ctx.lr = 0x8252F9D4;
	sub_8252FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8252fa18
	if (ctx.cr6.eq) goto loc_8252FA18;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252eb68
	ctx.lr = 0x8252F9EC;
	sub_8252EB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252fa18
	if (ctx.cr6.eq) goto loc_8252FA18;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_8252FA18:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8252f494
	if (ctx.cr6.lt) goto loc_8252F494;
loc_8252FA34:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8252fa68
	if (ctx.cr6.eq) goto loc_8252FA68;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252fa54
	if (!ctx.cr6.eq) goto loc_8252FA54;
	// bl 0x822900a0
	ctx.lr = 0x8252FA50;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8252FA54:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8252FA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252FA68:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252FA7C"))) PPC_WEAK_FUNC(sub_8252FA7C);
PPC_FUNC_IMPL(__imp__sub_8252FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252FA80"))) PPC_WEAK_FUNC(sub_8252FA80);
PPC_FUNC_IMPL(__imp__sub_8252FA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x8252FA88;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x825300c8
	if (ctx.cr6.eq) goto loc_825300C8;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825300c8
	if (!ctx.cr6.lt) goto loc_825300C8;
	// mulli r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 * 108;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r26,28(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8252faec
	if (!ctx.cr6.gt) goto loc_8252FAEC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8252FAD0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x825300cc
	if (ctx.cr6.eq) goto loc_825300CC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,372
	ctx.r11.s64 = ctx.r11.s64 + 372;
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8252fad0
	if (ctx.cr6.lt) goto loc_8252FAD0;
loc_8252FAEC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mulli r10,r22,68
	ctx.r10.s64 = ctx.r22.s64 * 68;
	// lwz r25,704(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lwz r9,124(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// ldx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8252fb1c
	if (!ctx.cr6.eq) goto loc_8252FB1C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x825300c8
	if (ctx.cr6.eq) goto loc_825300C8;
loc_8252FB1C:
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8252fb74
	if (!ctx.cr6.gt) goto loc_8252FB74;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8252FB30:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8252fb78
	if (!ctx.cr6.eq) goto loc_8252FB78;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ldx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82698e88
	ctx.lr = 0x8252FB48;
	sub_82698E88(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8252fb5c
	if (ctx.cr6.eq) goto loc_8252FB5C;
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x8252fb5c
	if (!ctx.cr6.gt) goto loc_8252FB5C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8252FB5C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,372
	ctx.r28.s64 = ctx.r28.s64 + 372;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8252fb30
	if (ctx.cr6.lt) goto loc_8252FB30;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8252fb78
	if (!ctx.cr6.eq) goto loc_8252FB78;
loc_8252FB74:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8252FB78:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82533648
	ctx.lr = 0x8252FB88;
	sub_82533648(ctx, base);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mulli r9,r29,372
	ctx.r9.s64 = ctx.r29.s64 * 372;
	// addi r8,r11,-17776
	ctx.r8.s64 = ctx.r11.s64 + -17776;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r22,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r22.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// bge cr6,0x8252fc40
	if (!ctx.cr6.lt) goto loc_8252FC40;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8252fc40
	if (ctx.cr6.lt) goto loc_8252FC40;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252fc40
	if (!ctx.cr6.lt) goto loc_8252FC40;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252fc40
	if (ctx.cr6.eq) goto loc_8252FC40;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8252FC40:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bge cr6,0x8252fcd0
	if (!ctx.cr6.lt) goto loc_8252FCD0;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8252fcd0
	if (ctx.cr6.lt) goto loc_8252FCD0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252fcd0
	if (!ctx.cr6.lt) goto loc_8252FCD0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252fcd0
	if (ctx.cr6.eq) goto loc_8252FCD0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8252FCD0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bge cr6,0x8252fd60
	if (!ctx.cr6.lt) goto loc_8252FD60;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8252fd60
	if (ctx.cr6.lt) goto loc_8252FD60;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252fd60
	if (!ctx.cr6.lt) goto loc_8252FD60;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252fd60
	if (ctx.cr6.eq) goto loc_8252FD60;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8252FD60:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bge cr6,0x8252fdf0
	if (!ctx.cr6.lt) goto loc_8252FDF0;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8252fdf0
	if (ctx.cr6.lt) goto loc_8252FDF0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252fdf0
	if (!ctx.cr6.lt) goto loc_8252FDF0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252fdf0
	if (ctx.cr6.eq) goto loc_8252FDF0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8252FDF0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bge cr6,0x8252fe80
	if (!ctx.cr6.lt) goto loc_8252FE80;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8252fe80
	if (ctx.cr6.lt) goto loc_8252FE80;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252fe80
	if (!ctx.cr6.lt) goto loc_8252FE80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252fe80
	if (ctx.cr6.eq) goto loc_8252FE80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8252FE80:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bge cr6,0x8252ff10
	if (!ctx.cr6.lt) goto loc_8252FF10;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8252ff10
	if (ctx.cr6.lt) goto loc_8252FF10;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252ff10
	if (!ctx.cr6.lt) goto loc_8252FF10;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ff10
	if (ctx.cr6.eq) goto loc_8252FF10;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8252FF10:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bge cr6,0x8252ffa0
	if (!ctx.cr6.lt) goto loc_8252FFA0;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8252ffa0
	if (ctx.cr6.lt) goto loc_8252FFA0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252ffa0
	if (!ctx.cr6.lt) goto loc_8252FFA0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ffa0
	if (ctx.cr6.eq) goto loc_8252FFA0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8252FFA0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bge cr6,0x82530030
	if (!ctx.cr6.lt) goto loc_82530030;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82530030
	if (ctx.cr6.lt) goto loc_82530030;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82530030
	if (!ctx.cr6.lt) goto loc_82530030;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82530030
	if (ctx.cr6.eq) goto loc_82530030;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_82530030:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r7,348(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// bge cr6,0x825300bc
	if (!ctx.cr6.lt) goto loc_825300BC;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x825300bc
	if (ctx.cr6.lt) goto loc_825300BC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825300bc
	if (!ctx.cr6.lt) goto loc_825300BC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825300bc
	if (ctx.cr6.eq) goto loc_825300BC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_825300BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_825300C8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825300CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825300D4"))) PPC_WEAK_FUNC(sub_825300D4);
PPC_FUNC_IMPL(__imp__sub_825300D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825300D8"))) PPC_WEAK_FUNC(sub_825300D8);
PPC_FUNC_IMPL(__imp__sub_825300D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x825300E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,704(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,128(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82530144
	if (ctx.cr6.eq) goto loc_82530144;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253012c
	if (ctx.cr6.eq) goto loc_8253012C;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8253012C;
	sub_82294520(ctx, base);
loc_8253012C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82530144;
	sub_82294AC0(ctx, base);
loc_82530144:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82294ac0
	ctx.lr = 0x82530168;
	sub_82294AC0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82530190
	if (!ctx.cr6.gt) goto loc_82530190;
loc_82530178:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r11,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r11.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82530178
	if (ctx.cr6.lt) goto loc_82530178;
loc_82530190:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825301B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825301f0
	if (ctx.cr6.eq) goto loc_825301F0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825301dc
	if (!ctx.cr6.eq) goto loc_825301DC;
	// bl 0x822900a0
	ctx.lr = 0x825301D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_825301DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825301F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825301F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825301FC"))) PPC_WEAK_FUNC(sub_825301FC);
PPC_FUNC_IMPL(__imp__sub_825301FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530200"))) PPC_WEAK_FUNC(sub_82530200);
PPC_FUNC_IMPL(__imp__sub_82530200) {
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
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82530274
	if (!ctx.cr6.gt) goto loc_82530274;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8253022C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82530244
	if (!ctx.cr6.eq) goto loc_82530244;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82530264
	if (ctx.cr6.eq) goto loc_82530264;
loc_82530244:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8253022c
	if (ctx.cr6.lt) goto loc_8253022C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82530264:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82530274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82530274:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530284"))) PPC_WEAK_FUNC(sub_82530284);
PPC_FUNC_IMPL(__imp__sub_82530284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530288"))) PPC_WEAK_FUNC(sub_82530288);
PPC_FUNC_IMPL(__imp__sub_82530288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r4,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r4.u32);
	// b 0x8252d9e8
	sub_8252D9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825302B0"))) PPC_WEAK_FUNC(sub_825302B0);
PPC_FUNC_IMPL(__imp__sub_825302B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825302B4"))) PPC_WEAK_FUNC(sub_825302B4);
PPC_FUNC_IMPL(__imp__sub_825302B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825302B8"))) PPC_WEAK_FUNC(sub_825302B8);
PPC_FUNC_IMPL(__imp__sub_825302B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82530308
	if (ctx.cr6.eq) goto loc_82530308;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825308a8
	if (ctx.cr6.eq) goto loc_825308A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825303d8
	if (!ctx.cr6.eq) goto loc_825303D8;
loc_82530308:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82530330
	if (ctx.cr6.eq) goto loc_82530330;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82530330
	if (ctx.cr6.eq) goto loc_82530330;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825355d8
	ctx.lr = 0x8253032C;
	sub_825355D8(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
loc_82530330:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82530358
	if (ctx.cr6.eq) goto loc_82530358;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82530358
	if (ctx.cr6.eq) goto loc_82530358;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825355d8
	ctx.lr = 0x82530354;
	sub_825355D8(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
loc_82530358:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82530380
	if (ctx.cr6.eq) goto loc_82530380;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82530380
	if (ctx.cr6.eq) goto loc_82530380;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825355d8
	ctx.lr = 0x8253037C;
	sub_825355D8(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
loc_82530380:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825303a8
	if (ctx.cr6.eq) goto loc_825303A8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825303a8
	if (ctx.cr6.eq) goto loc_825303A8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825355d8
	ctx.lr = 0x825303A4;
	sub_825355D8(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
loc_825303A8:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825308a8
	if (ctx.cr6.eq) goto loc_825308A8;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825308a8
	if (ctx.cr6.eq) goto loc_825308A8;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825308a8
	if (ctx.cr6.eq) goto loc_825308A8;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825308a8
	if (ctx.cr6.eq) goto loc_825308A8;
loc_825303D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825303F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-32444
	ctx.r11.s64 = ctx.r11.s64 + -32444;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lfs f9,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,-552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -552);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// lfs f10,-18204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18204);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,21152(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21152);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82530458
	if (ctx.cr6.eq) goto loc_82530458;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8253043c
	if (!ctx.cr6.gt) goto loc_8253043C;
loc_82530430:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82530430
	if (ctx.cr6.gt) goto loc_82530430;
loc_8253043C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82530450
	if (!ctx.cr6.lt) goto loc_82530450;
loc_82530444:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82530444
	if (ctx.cr6.lt) goto loc_82530444;
loc_82530450:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82530458:
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// beq cr6,0x8253049c
	if (ctx.cr6.eq) goto loc_8253049C;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82530480
	if (!ctx.cr6.gt) goto loc_82530480;
loc_82530474:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82530474
	if (ctx.cr6.gt) goto loc_82530474;
loc_82530480:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82530494
	if (!ctx.cr6.lt) goto loc_82530494;
loc_82530488:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82530488
	if (ctx.cr6.lt) goto loc_82530488;
loc_82530494:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x825304a0
	goto loc_825304A0;
loc_8253049C:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_825304A0:
	// lfs f13,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x825304c0
	if (ctx.cr6.eq) goto loc_825304C0;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x825304c0
	if (!ctx.cr6.lt) goto loc_825304C0;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fdivs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_825304C0:
	// lfs f13,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x825304dc
	if (ctx.cr6.eq) goto loc_825304DC;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x825304dc
	if (!ctx.cr6.gt) goto loc_825304DC;
	// fdivs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_825304DC:
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x825304fc
	if (ctx.cr6.eq) goto loc_825304FC;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x825304fc
	if (!ctx.cr6.lt) goto loc_825304FC;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_825304FC:
	// lfs f13,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x82530518
	if (ctx.cr6.eq) goto loc_82530518;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x82530518
	if (!ctx.cr6.gt) goto loc_82530518;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82530518:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82530534
	if (!ctx.cr6.lt) goto loc_82530534;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x82530540
	goto loc_82530540;
loc_82530534:
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// blt cr6,0x82530544
	if (ctx.cr6.lt) goto loc_82530544;
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
loc_82530540:
	// stfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82530544:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82530554
	if (!ctx.cr6.lt) goto loc_82530554;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82530560
	goto loc_82530560;
loc_82530554:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82530564
	if (ctx.cr6.lt) goto loc_82530564;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82530560:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82530564:
	// lfs f13,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfd f13,-17672(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x82530598
	if (!ctx.cr6.lt) goto loc_82530598;
	// lfs f12,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x8253059c
	if (ctx.cr6.lt) goto loc_8253059C;
loc_82530598:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253059C:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825305b4
	if (ctx.cr6.eq) goto loc_825305B4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825308a8
	if (!ctx.cr6.eq) goto loc_825308A8;
loc_825305B4:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// std r10,228(r31)
	PPC_STORE_U64(ctx.r31.u32 + 228, ctx.r10.u64);
	// blt cr6,0x825306f4
	if (ctx.cr6.lt) goto loc_825306F4;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82530660
	if (ctx.cr6.lt) goto loc_82530660;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825305f8
	if (!ctx.cr6.eq) goto loc_825305F8;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82530838
	if (ctx.cr6.eq) goto loc_82530838;
loc_825305F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253060C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// ld r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82530624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// ld r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 264);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,308(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8253063C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// ld r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82530654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82530838
	goto loc_82530838;
loc_82530660:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x825306f4
	if (!ctx.cr6.lt) goto loc_825306F4;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8253068c
	if (!ctx.cr6.eq) goto loc_8253068C;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82530830
	if (ctx.cr6.eq) goto loc_82530830;
loc_8253068C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825306A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// ld r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 304);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825306B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// ld r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,308(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825306D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// ld r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825306E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82530830
	goto loc_82530830;
loc_825306F4:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x82530838
	if (!ctx.cr6.lt) goto loc_82530838;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82530798
	if (ctx.cr6.lt) goto loc_82530798;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82530728
	if (!ctx.cr6.eq) goto loc_82530728;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8253078c
	if (ctx.cr6.eq) goto loc_8253078C;
loc_82530728:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253073C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// ld r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82530754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// ld r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 240);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,308(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8253076C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// ld r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 264);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82530784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_8253078C:
	// fadds f11,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82530838
	goto loc_82530838;
loc_82530798:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82530838
	if (!ctx.cr6.lt) goto loc_82530838;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825307c4
	if (!ctx.cr6.eq) goto loc_825307C4;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82530828
	if (ctx.cr6.eq) goto loc_82530828;
loc_825307C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 256);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825307D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// ld r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825307F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// ld r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,308(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82530808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// ld r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82530820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_82530828:
	// fadds f11,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82530830:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82530838:
	// fnmsubs f12,f11,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f31.f64)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f13,-17768(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17768);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f11,f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f8,f0,f13,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmadds f7,f8,f9,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f7,76(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 76, temp.u32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fnmsubs f4,f0,f31,f31
	ctx.f4.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f31.f64)));
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f0,f3,f6,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f0,140(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 140, temp.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f9,f10,f12,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f9,204(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
loc_825308A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82526af8
	ctx.lr = 0x825308B8;
	sub_82526AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825308D8"))) PPC_WEAK_FUNC(sub_825308D8);
PPC_FUNC_IMPL(__imp__sub_825308D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x825308f4
	if (!ctx.cr6.eq) goto loc_825308F4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// blr 
	return;
loc_825308F4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,-18200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530910"))) PPC_WEAK_FUNC(sub_82530910);
PPC_FUNC_IMPL(__imp__sub_82530910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,-28844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bne cr6,0x82530938
	if (!ctx.cr6.eq) goto loc_82530938;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,196(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// blr 
	return;
loc_82530938:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-18204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,200(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253094C"))) PPC_WEAK_FUNC(sub_8253094C);
PPC_FUNC_IMPL(__imp__sub_8253094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530950"))) PPC_WEAK_FUNC(sub_82530950);
PPC_FUNC_IMPL(__imp__sub_82530950) {
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
	// lfs f2,200(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lfs f1,196(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-16524
	ctx.r4.s64 = ctx.r11.s64 + -16524;
	// bl 0x8232e868
	ctx.lr = 0x82530988;
	sub_8232E868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_825309A0"))) PPC_WEAK_FUNC(sub_825309A0);
PPC_FUNC_IMPL(__imp__sub_825309A0) {
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
	// bl 0x8229b218
	ctx.lr = 0x825309B8;
	sub_8229B218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x825309C0;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,371
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 371, ctx.xer);
	// bge cr6,0x82530a04
	if (!ctx.cr6.lt) goto loc_82530A04;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82530a04
	if (!ctx.cr6.gt) goto loc_82530A04;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
loc_825309E4:
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825309e4
	if (ctx.cr6.lt) goto loc_825309E4;
loc_82530A04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530A18"))) PPC_WEAK_FUNC(sub_82530A18);
PPC_FUNC_IMPL(__imp__sub_82530A18) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82530aac
	if (ctx.cr6.eq) goto loc_82530AAC;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82530a50
	if (!ctx.cr6.eq) goto loc_82530A50;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82530aac
	if (ctx.cr6.eq) goto loc_82530AAC;
loc_82530A50:
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82530aac
	if (!ctx.cr6.gt) goto loc_82530AAC;
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
loc_82530A64:
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82530a7c
	if (!ctx.cr6.eq) goto loc_82530A7C;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82530a9c
	if (ctx.cr6.eq) goto loc_82530A9C;
loc_82530A7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82530a64
	if (ctx.cr6.lt) goto loc_82530A64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82530A9C:
	// stw r9,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r9.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r8,220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 220, ctx.r8.u32);
	// bl 0x82533bd8
	ctx.lr = 0x82530AAC;
	sub_82533BD8(ctx, base);
loc_82530AAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530ABC"))) PPC_WEAK_FUNC(sub_82530ABC);
PPC_FUNC_IMPL(__imp__sub_82530ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530AC0"))) PPC_WEAK_FUNC(sub_82530AC0);
PPC_FUNC_IMPL(__imp__sub_82530AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82530AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82530b74
	if (ctx.cr6.eq) goto loc_82530B74;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82530afc
	if (!ctx.cr6.eq) goto loc_82530AFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82530b74
	if (ctx.cr6.eq) goto loc_82530B74;
loc_82530AFC:
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82530b74
	if (!ctx.cr6.gt) goto loc_82530B74;
	// lwz r31,196(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
loc_82530B14:
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82530b2c
	if (!ctx.cr6.eq) goto loc_82530B2C;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82530b44
	if (ctx.cr6.eq) goto loc_82530B44;
loc_82530B2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82530b14
	if (ctx.cr6.lt) goto loc_82530B14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82530B44:
	// stw r30,216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 216, ctx.r30.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// stw r30,220(r28)
	PPC_STORE_U32(ctx.r28.u32 + 220, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533ca8
	ctx.lr = 0x82530B58;
	sub_82533CA8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82530b74
	if (!ctx.cr6.eq) goto loc_82530B74;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82530fb8
	ctx.lr = 0x82530B74;
	sub_82530FB8(ctx, base);
loc_82530B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530B7C"))) PPC_WEAK_FUNC(sub_82530B7C);
PPC_FUNC_IMPL(__imp__sub_82530B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530B80"))) PPC_WEAK_FUNC(sub_82530B80);
PPC_FUNC_IMPL(__imp__sub_82530B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82530B88;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82530c54
	if (!ctx.cr6.gt) goto loc_82530C54;
	// lwz r22,204(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r23,200(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_82530BB8:
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x82530c40
	if (!ctx.cr6.eq) goto loc_82530C40;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82530c40
	if (!ctx.cr6.eq) goto loc_82530C40;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82530c40
	if (!ctx.cr6.gt) goto loc_82530C40;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82530BEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82530c2c
	if (ctx.cr6.eq) goto loc_82530C2C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82530c2c
	if (ctx.cr6.eq) goto loc_82530C2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252abb0
	ctx.lr = 0x82530C18;
	sub_8252ABB0(ctx, base);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82530C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82530C2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82530bec
	if (ctx.cr6.lt) goto loc_82530BEC;
loc_82530C40:
	// lwz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82530bb8
	if (ctx.cr6.lt) goto loc_82530BB8;
loc_82530C54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530C60"))) PPC_WEAK_FUNC(sub_82530C60);
PPC_FUNC_IMPL(__imp__sub_82530C60) {
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
	// lwz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82530cc0
	if (!ctx.cr6.gt) goto loc_82530CC0;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82530C8C:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82530cb0
	if (!ctx.cr6.eq) goto loc_82530CB0;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82530cb0
	if (!ctx.cr6.eq) goto loc_82530CB0;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82530cd8
	if (!ctx.cr6.eq) goto loc_82530CD8;
loc_82530CB0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82530c8c
	if (ctx.cr6.lt) goto loc_82530C8C;
loc_82530CC0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82530CD8:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8252ab18
	ctx.lr = 0x82530CE0;
	sub_8252AB18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530CF0"))) PPC_WEAK_FUNC(sub_82530CF0);
PPC_FUNC_IMPL(__imp__sub_82530CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82530d3c
	if (!ctx.cr6.gt) goto loc_82530D3C;
	// lwz r6,196(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,24(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
loc_82530D14:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82530d2c
	if (!ctx.cr6.eq) goto loc_82530D2C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82530d44
	if (ctx.cr6.eq) goto loc_82530D44;
loc_82530D2C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82530d14
	if (ctx.cr6.lt) goto loc_82530D14;
loc_82530D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82530D44:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530D54"))) PPC_WEAK_FUNC(sub_82530D54);
PPC_FUNC_IMPL(__imp__sub_82530D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530D58"))) PPC_WEAK_FUNC(sub_82530D58);
PPC_FUNC_IMPL(__imp__sub_82530D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,24(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
loc_82530D78:
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82530d9c
	if (!ctx.cr6.eq) goto loc_82530D9C;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82530d9c
	if (!ctx.cr6.eq) goto loc_82530D9C;
	// stfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_82530D9C:
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82530d78
	if (ctx.cr6.lt) goto loc_82530D78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530DB4"))) PPC_WEAK_FUNC(sub_82530DB4);
PPC_FUNC_IMPL(__imp__sub_82530DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530DB8"))) PPC_WEAK_FUNC(sub_82530DB8);
PPC_FUNC_IMPL(__imp__sub_82530DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82530DC0;
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
	// bl 0x82530df0
	ctx.lr = 0x82530DD4;
	sub_82530DF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82526858
	ctx.lr = 0x82530DE4;
	sub_82526858(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530DEC"))) PPC_WEAK_FUNC(sub_82530DEC);
PPC_FUNC_IMPL(__imp__sub_82530DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530DF0"))) PPC_WEAK_FUNC(sub_82530DF0);
PPC_FUNC_IMPL(__imp__sub_82530DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82530DF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,180(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82530fb0
	if (ctx.cr6.eq) goto loc_82530FB0;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82526518
	ctx.lr = 0x82530E38;
	sub_82526518(ctx, base);
	// lwz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// lwz r20,88(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r22,-31885
	ctx.r22.s64 = -2089615360;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82530f80
	if (!ctx.cr6.gt) goto loc_82530F80;
	// lwz r21,92(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_82530E58:
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82530eb4
	if (ctx.cr6.eq) goto loc_82530EB4;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82530eb4
	if (ctx.cr6.eq) goto loc_82530EB4;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82530e94
	if (!ctx.cr6.eq) goto loc_82530E94;
	// bl 0x822900a0
	ctx.lr = 0x82530E90;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_82530E94:
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
	ctx.lr = 0x82530EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82530EB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82530ecc
	if (!ctx.cr6.eq) goto loc_82530ECC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82530f5c
	if (ctx.cr6.eq) goto loc_82530F5C;
loc_82530ECC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82530f5c
	if (!ctx.cr6.gt) goto loc_82530F5C;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82530EDC:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,216(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82530f50
	if (!ctx.cr6.eq) goto loc_82530F50;
	// lwz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82530f50
	if (!ctx.cr6.eq) goto loc_82530F50;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82530f3c
	if (!ctx.cr6.gt) goto loc_82530F3C;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82530F3C;
	sub_82294520(ctx, base);
loc_82530F3C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82530f50
	if (ctx.cr0.eq) goto loc_82530F50;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82530F50:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82530edc
	if (!ctx.cr0.eq) goto loc_82530EDC;
loc_82530F5C:
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82530fb8
	ctx.lr = 0x82530F6C;
	sub_82530FB8(ctx, base);
	// lwz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82530e58
	if (ctx.cr6.lt) goto loc_82530E58;
loc_82530F80:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82530fb0
	if (ctx.cr6.eq) goto loc_82530FB0;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82530f9c
	if (!ctx.cr6.eq) goto loc_82530F9C;
	// bl 0x822900a0
	ctx.lr = 0x82530F98;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_82530F9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82530FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82530FB0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530FB8"))) PPC_WEAK_FUNC(sub_82530FB8);
PPC_FUNC_IMPL(__imp__sub_82530FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82530fcc
	if (ctx.cr6.eq) goto loc_82530FCC;
	// lfs f13,144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82530fd4
	goto loc_82530FD4;
loc_82530FCC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
loc_82530FD4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82530ff0
	if (ctx.cr6.eq) goto loc_82530FF0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-17656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17656);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82530FF0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82531040
	if (!ctx.cr6.gt) goto loc_82531040;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82531004:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531034
	if (ctx.cr6.eq) goto loc_82531034;
	// lbz r7,192(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82531034
	if (!ctx.cr6.eq) goto loc_82531034;
	// lfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82531034
	if (ctx.cr6.lt) goto loc_82531034;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82531034:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82531004
	if (!ctx.cr0.eq) goto loc_82531004;
loc_82531040:
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531048"))) PPC_WEAK_FUNC(sub_82531048);
PPC_FUNC_IMPL(__imp__sub_82531048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82531050;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae8
	ctx.lr = 0x82531058;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x82526af8
	ctx.lr = 0x82531068;
	sub_82526AF8(ctx, base);
	// lwz r11,200(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253120c
	if (!ctx.cr6.gt) goto loc_8253120C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// lfs f30,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
loc_82531088:
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r30,r25,r11
	ctx.r30.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82530fb8
	ctx.lr = 0x8253109C;
	sub_82530FB8(ctx, base);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825311f8
	if (ctx.cr6.eq) goto loc_825311F8;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825311f8
	if (ctx.cr6.eq) goto loc_825311F8;
	// lfs f0,188(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f31,196(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// lfs f11,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f29,f10,f28
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// bne cr6,0x825310fc
	if (!ctx.cr6.eq) goto loc_825310FC;
	// stfs f31,200(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 200, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82683598
	ctx.lr = 0x825310FC;
	sub_82683598(ctx, base);
loc_825310FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825311f8
	if (!ctx.cr6.eq) goto loc_825311F8;
	// lfs f0,196(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x825311f8
	if (ctx.cr6.eq) goto loc_825311F8;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825311f8
	if (ctx.cr6.eq) goto loc_825311F8;
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x825311f8
	if (!ctx.cr6.gt) goto loc_825311F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252ab18
	ctx.lr = 0x82531134;
	sub_8252AB18(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825311f8
	if (!ctx.cr6.gt) goto loc_825311F8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253114C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825311e4
	if (ctx.cr6.eq) goto loc_825311E4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825311e4
	if (ctx.cr6.eq) goto loc_825311E4;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825311e4
	if (ctx.cr6.eq) goto loc_825311E4;
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x825311e4
	if (!ctx.cr6.gt) goto loc_825311E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252abb0
	ctx.lr = 0x82531188;
	sub_8252ABB0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f2,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82cb4fa0
	ctx.lr = 0x8253119C;
	sub_82CB4FA0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f1,f29
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x825311c8
	if (!ctx.cr6.lt) goto loc_825311C8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x825311c4
	if (ctx.cr6.lt) goto loc_825311C4;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x825311c8
	goto loc_825311C8;
loc_825311C4:
	// fadds f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_825311C8:
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82683598
	ctx.lr = 0x825311E4;
	sub_82683598(ctx, base);
loc_825311E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8253114c
	if (ctx.cr6.lt) goto loc_8253114C;
loc_825311F8:
	// lwz r11,200(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82531088
	if (ctx.cr6.lt) goto loc_82531088;
loc_8253120C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b34
	ctx.lr = 0x82531218;
	__restfpr_28(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253121C"))) PPC_WEAK_FUNC(sub_8253121C);
PPC_FUNC_IMPL(__imp__sub_8253121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531220"))) PPC_WEAK_FUNC(sub_82531220);
PPC_FUNC_IMPL(__imp__sub_82531220) {
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
	// bl 0x8252a0f0
	ctx.lr = 0x82531238;
	sub_8252A0F0(ctx, base);
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82531274
	if (ctx.cr6.eq) goto loc_82531274;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// ble 0x82531260
	if (!ctx.cr0.gt) goto loc_82531260;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82533920
	ctx.lr = 0x8253125C;
	sub_82533920(ctx, base);
	// b 0x82531274
	goto loc_82531274;
loc_82531260:
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r5,r11
	ctx.r5.s64 = -ctx.r11.s64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x8232d180
	ctx.lr = 0x82531274;
	sub_8232D180(ctx, base);
loc_82531274:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825312c0
	if (ctx.cr6.lt) goto loc_825312C0;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825312c0
	if (!ctx.cr6.lt) goto loc_825312C0;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825312c0
	if (ctx.cr6.eq) goto loc_825312C0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825312c0
	if (ctx.cr6.eq) goto loc_825312C0;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825312d4
	if (!ctx.cr6.eq) goto loc_825312D4;
loc_825312C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82531788
	ctx.lr = 0x825312D4;
	sub_82531788(ctx, base);
loc_825312D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825312E8"))) PPC_WEAK_FUNC(sub_825312E8);
PPC_FUNC_IMPL(__imp__sub_825312E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x8252a398
	ctx.lr = 0x82531320;
	sub_8252A398(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82531390
	if (!ctx.cr6.gt) goto loc_82531390;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r30,r30,220
	ctx.r30.s64 = ctx.r30.s64 + 220;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x8253134c
	if (!ctx.cr6.lt) goto loc_8253134C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825338a8
	ctx.lr = 0x82531348;
	sub_825338A8(ctx, base);
	// b 0x82531354
	goto loc_82531354;
loc_8253134C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82533920
	ctx.lr = 0x82531354;
	sub_82533920(ctx, base);
loc_82531354:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f13,26252(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26252);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// std r6,12(r11)
	PPC_STORE_U64(ctx.r11.u32 + 12, ctx.r6.u64);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82531390:
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

__attribute__((alias("__imp__sub_825313A8"))) PPC_WEAK_FUNC(sub_825313A8);
PPC_FUNC_IMPL(__imp__sub_825313A8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825313D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8252a398
	ctx.lr = 0x825313E0;
	sub_8252A398(ctx, base);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82531404
	if (!ctx.cr6.lt) goto loc_82531404;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x8232d180
	ctx.lr = 0x82531404;
	sub_8232D180(ctx, base);
loc_82531404:
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

__attribute__((alias("__imp__sub_8253141C"))) PPC_WEAK_FUNC(sub_8253141C);
PPC_FUNC_IMPL(__imp__sub_8253141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531420"))) PPC_WEAK_FUNC(sub_82531420);
PPC_FUNC_IMPL(__imp__sub_82531420) {
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
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82527d78
	ctx.lr = 0x82531448;
	sub_82527D78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82531470
	if (ctx.cr6.eq) goto loc_82531470;
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82531470
	if (!ctx.cr6.eq) goto loc_82531470;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82531788
	ctx.lr = 0x82531470;
	sub_82531788(ctx, base);
loc_82531470:
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

__attribute__((alias("__imp__sub_8253148C"))) PPC_WEAK_FUNC(sub_8253148C);
PPC_FUNC_IMPL(__imp__sub_8253148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531490"))) PPC_WEAK_FUNC(sub_82531490);
PPC_FUNC_IMPL(__imp__sub_82531490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82531498;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,184(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825314c8
	if (!ctx.cr6.eq) goto loc_825314C8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_825314C8:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531528
	if (ctx.cr6.eq) goto loc_82531528;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82531528
	if (ctx.cr6.lt) goto loc_82531528;
	// lwz r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82531528
	if (!ctx.cr6.lt) goto loc_82531528;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,220(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82531528
	if (ctx.cr6.eq) goto loc_82531528;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82531528:
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82531768
	if (!ctx.cr6.gt) goto loc_82531768;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f30.f64 = double(temp.f32);
loc_82531558:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825315b8
	if (ctx.cr6.eq) goto loc_825315B8;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825315b8
	if (!ctx.cr6.lt) goto loc_825315B8;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x825315b8
	if (ctx.cr6.gt) goto loc_825315B8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825315b8
	if (ctx.cr6.eq) goto loc_825315B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ab8c0
	ctx.lr = 0x825315A0;
	sub_822AB8C0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,220(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_825315B8:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82531558
	if (ctx.cr6.lt) goto loc_82531558;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82531768
	if (!ctx.cr6.gt) goto loc_82531768;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294ac0
	ctx.lr = 0x825315FC;
	sub_82294AC0(ctx, base);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x82531650
	if (!ctx.cr6.gt) goto loc_82531650;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r7,r27,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lfs f0,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
loc_82531624:
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f13,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82531624
	if (!ctx.cr0.eq) goto loc_82531624;
loc_82531650:
	// bl 0x82cb2308
	ctx.lr = 0x82531654;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addic. r9,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r9.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-18116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// ble 0x825316ac
	if (!ctx.cr0.gt) goto loc_825316AC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82531688:
	// lfsx f13,r10,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x825316ac
	if (!ctx.cr6.gt) goto loc_825316AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lwzx r29,r10,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// blt cr6,0x82531688
	if (ctx.cr6.lt) goto loc_82531688;
loc_825316AC:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x825316f8
	if (!ctx.cr6.gt) goto loc_825316F8;
	// bl 0x82cb2308
	ctx.lr = 0x825316D4;
	sub_82CB2308(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// divw r8,r3,r9
	ctx.r8.s32 = ctx.r3.s32 / ctx.r9.s32;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r6,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r6.u8);
loc_825316F8:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8253172c
	if (ctx.cr6.eq) goto loc_8253172C;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82531718
	if (!ctx.cr6.eq) goto loc_82531718;
	// bl 0x822900a0
	ctx.lr = 0x82531714;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82531718:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253172C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253172C:
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82531740
	if (!ctx.cr6.eq) goto loc_82531740;
	// bl 0x822900a0
	ctx.lr = 0x8253173C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82531740:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82531768:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// bl 0x822b41e8
	ctx.lr = 0x82531774;
	sub_822B41E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531788"))) PPC_WEAK_FUNC(sub_82531788);
PPC_FUNC_IMPL(__imp__sub_82531788) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x825317ec
	if (ctx.cr6.lt) goto loc_825317EC;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825317ec
	if (!ctx.cr6.lt) goto loc_825317EC;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825317ec
	if (!ctx.cr6.lt) goto loc_825317EC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82531840
	if (!ctx.cr6.eq) goto loc_82531840;
loc_825317EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82531950
	if (ctx.cr6.lt) goto loc_82531950;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82531950
	if (!ctx.cr6.lt) goto loc_82531950;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82531950
	if (!ctx.cr6.lt) goto loc_82531950;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82531950
	if (ctx.cr6.eq) goto loc_82531950;
loc_82531840:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82531870;
	sub_825355D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// beq cr6,0x82531938
	if (ctx.cr6.eq) goto loc_82531938;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82cb2308
	ctx.lr = 0x82531898;
	sub_82CB2308(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfs f12,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f0,-18116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfd f13,-17672(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -17672);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f1,f7,f6,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x825318e0
	if (!ctx.cr6.lt) goto loc_825318E0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f1,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
loc_825318E0:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82531904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82531938
	if (!ctx.cr6.gt) goto loc_82531938;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// fmuls f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531938:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253194C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
loc_82531950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531970"))) PPC_WEAK_FUNC(sub_82531970);
PPC_FUNC_IMPL(__imp__sub_82531970) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82531a28
	if (ctx.cr6.lt) goto loc_82531A28;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82531a28
	if (!ctx.cr6.lt) goto loc_82531A28;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82531a3c
	if (ctx.cr6.eq) goto loc_82531A3C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82531a3c
	if (!ctx.cr6.gt) goto loc_82531A3C;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531a3c
	if (ctx.cr6.eq) goto loc_82531A3C;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531a3c
	if (ctx.cr6.eq) goto loc_82531A3C;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82531a3c
	if (ctx.cr6.gt) goto loc_82531A3C;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// b 0x82531a34
	goto loc_82531A34;
loc_82531A28:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f2,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_82531A34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82531788
	ctx.lr = 0x82531A3C;
	sub_82531788(ctx, base);
loc_82531A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8252a1b0
	ctx.lr = 0x82531A4C;
	sub_8252A1B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531A70"))) PPC_WEAK_FUNC(sub_82531A70);
PPC_FUNC_IMPL(__imp__sub_82531A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82531aa8
	if (ctx.cr6.eq) goto loc_82531AA8;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x82531aac
	goto loc_82531AAC;
loc_82531AA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82531AAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82531ad0
	if (!ctx.cr6.eq) goto loc_82531AD0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82531ac4
	if (ctx.cr6.eq) goto loc_82531AC4;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x82531ac8
	goto loc_82531AC8;
loc_82531AC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82531AC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531afc
	if (ctx.cr6.eq) goto loc_82531AFC;
loc_82531AD0:
	// lbz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82531afc
	if (ctx.cr6.eq) goto loc_82531AFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// lfs f1,31796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31796);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82531AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252a1b0
	ctx.lr = 0x82531B0C;
	sub_8252A1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531B28"))) PPC_WEAK_FUNC(sub_82531B28);
PPC_FUNC_IMPL(__imp__sub_82531B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531b64
	if (ctx.cr6.eq) goto loc_82531B64;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x823f1ed0
	ctx.lr = 0x82531B60;
	sub_823F1ED0(ctx, base);
	// b 0x82531b68
	goto loc_82531B68;
loc_82531B64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82531B68:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531bec
	if (ctx.cr6.eq) goto loc_82531BEC;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531bc4
	if (ctx.cr6.eq) goto loc_82531BC4;
	// lbz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82531ba0
	if (ctx.cr6.lt) goto loc_82531BA0;
	// bne cr6,0x82531bc4
	if (!ctx.cr6.eq) goto loc_82531BC4;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x82531bbc
	goto loc_82531BBC;
loc_82531BA0:
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82531bc4
	if (!ctx.cr6.eq) goto loc_82531BC4;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_82531BBC:
	// bne cr6,0x82531bc4
	if (!ctx.cr6.eq) goto loc_82531BC4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82531BC4:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82531bec
	if (ctx.cr6.eq) goto loc_82531BEC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,31796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31796);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82531BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531BEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252a1b0
	ctx.lr = 0x82531BFC;
	sub_8252A1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531C18"))) PPC_WEAK_FUNC(sub_82531C18);
PPC_FUNC_IMPL(__imp__sub_82531C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82531C20;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531d30
	if (ctx.cr6.eq) goto loc_82531D30;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82526518
	ctx.lr = 0x82531C70;
	sub_82526518(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82531C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82531cd4
	if (ctx.cr6.lt) goto loc_82531CD4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82531CA8:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f1,188(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 188, temp.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stfs f1,188(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 188, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f1,188(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 188, temp.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f1,188(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 188, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82531ca8
	if (!ctx.cr0.eq) goto loc_82531CA8;
loc_82531CD4:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82531cfc
	if (!ctx.cr6.lt) goto loc_82531CFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82531CE8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f1,188(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 188, temp.u32);
	// bne 0x82531ce8
	if (!ctx.cr0.eq) goto loc_82531CE8;
loc_82531CFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82531d30
	if (ctx.cr6.eq) goto loc_82531D30;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82531d1c
	if (!ctx.cr6.eq) goto loc_82531D1C;
	// bl 0x822900a0
	ctx.lr = 0x82531D18;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82531D1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531D30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82526af8
	ctx.lr = 0x82531D40;
	sub_82526AF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531D50"))) PPC_WEAK_FUNC(sub_82531D50);
PPC_FUNC_IMPL(__imp__sub_82531D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531D58"))) PPC_WEAK_FUNC(sub_82531D58);
PPC_FUNC_IMPL(__imp__sub_82531D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531d6c
	if (ctx.cr6.eq) goto loc_82531D6C;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x82531d70
	goto loc_82531D70;
loc_82531D6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82531D70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531db0
	if (ctx.cr6.eq) goto loc_82531DB0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-17672(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17672);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82531db0
	if (!ctx.cr6.gt) goto loc_82531DB0;
	// lfs f13,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// blr 
	return;
loc_82531DB0:
	// lfs f1,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531DB8"))) PPC_WEAK_FUNC(sub_82531DB8);
PPC_FUNC_IMPL(__imp__sub_82531DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82531e50
	if (ctx.cr6.eq) goto loc_82531E50;
	// lfs f0,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82531e50
	if (ctx.cr6.lt) goto loc_82531E50;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x825355d8
	ctx.lr = 0x82531E10;
	sub_825355D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531e50
	if (ctx.cr6.eq) goto loc_82531E50;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531e50
	if (ctx.cr6.eq) goto loc_82531E50;
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82531e44
	if (ctx.cr6.gt) goto loc_82531E44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82531E44:
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
loc_82531E50:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82531e70
	if (ctx.cr6.eq) goto loc_82531E70;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x82531e74
	goto loc_82531E74;
loc_82531E70:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82531E74:
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82531eb0
	if (ctx.cr6.eq) goto loc_82531EB0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82531ea8
	if (!ctx.cr6.eq) goto loc_82531EA8;
	// lfs f0,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82531ea8
	if (ctx.cr6.lt) goto loc_82531EA8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
loc_82531EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825280d8
	ctx.lr = 0x82531EB0;
	sub_825280D8(ctx, base);
loc_82531EB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82528048
	ctx.lr = 0x82531EC0;
	sub_82528048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531EE0"))) PPC_WEAK_FUNC(sub_82531EE0);
PPC_FUNC_IMPL(__imp__sub_82531EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82531EE8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ae8
	ctx.lr = 0x82531EF0;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// std r25,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r25.u64);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r29,200(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r26,204(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82531f34
	if (!ctx.cr6.eq) goto loc_82531F34;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82532040
	if (ctx.cr6.eq) goto loc_82532040;
loc_82531F34:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x82532040
	if (!ctx.cr6.gt) goto loc_82532040;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x825355d8
	ctx.lr = 0x82531F48;
	sub_825355D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82532040
	if (ctx.cr6.eq) goto loc_82532040;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825280d8
	ctx.lr = 0x82531F68;
	sub_825280D8(ctx, base);
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r9.u32);
	// beq cr6,0x82531f88
	if (ctx.cr6.eq) goto loc_82531F88;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82531f8c
	goto loc_82531F8C;
loc_82531F88:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_82531F8C:
	// stfs f0,212(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82531fcc
	if (!ctx.cr6.eq) goto loc_82531FCC;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82531fcc
	if (!ctx.cr6.eq) goto loc_82531FCC;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82531fcc
	if (ctx.cr6.eq) goto loc_82531FCC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82531fcc
	if (!ctx.cr6.eq) goto loc_82531FCC;
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82532040
	if (ctx.cr6.eq) goto loc_82532040;
loc_82531FCC:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82531fe4
	if (!ctx.cr6.eq) goto loc_82531FE4;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82531ffc
	if (ctx.cr6.eq) goto loc_82531FFC;
loc_82531FE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531FFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253201C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,364(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82532030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b34
	ctx.lr = 0x8253203C;
	__restfpr_28(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82532040:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b34
	ctx.lr = 0x82532050;
	__restfpr_28(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532054"))) PPC_WEAK_FUNC(sub_82532054);
PPC_FUNC_IMPL(__imp__sub_82532054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532058"))) PPC_WEAK_FUNC(sub_82532058);
PPC_FUNC_IMPL(__imp__sub_82532058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82532060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r30.u64);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82532090
	if (!ctx.cr6.eq) goto loc_82532090;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825320d0
	if (ctx.cr6.eq) goto loc_825320D0;
loc_82532090:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x825320d0
	if (!ctx.cr6.gt) goto loc_825320D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x825e58d8
	ctx.lr = 0x825320AC;
	sub_825E58D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825320d0
	if (ctx.cr6.eq) goto loc_825320D0;
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82531ee0
	ctx.lr = 0x825320D0;
	sub_82531EE0(ctx, base);
loc_825320D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825320D8"))) PPC_WEAK_FUNC(sub_825320D8);
PPC_FUNC_IMPL(__imp__sub_825320D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stfs f1,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825320F8"))) PPC_WEAK_FUNC(sub_825320F8);
PPC_FUNC_IMPL(__imp__sub_825320F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82532100;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82526858
	ctx.lr = 0x82532114;
	sub_82526858(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f30,-18284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82532148
	if (!ctx.cr6.gt) goto loc_82532148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527ce8
	ctx.lr = 0x82532138;
	sub_82527CE8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x82532148
	if (ctx.cr6.gt) goto loc_82532148;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_82532148:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825321cc
	if (ctx.cr6.eq) goto loc_825321CC;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r30,r31,212
	ctx.r30.s64 = ctx.r31.s64 + 212;
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82532184
	if (ctx.cr6.eq) goto loc_82532184;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82532184;
	sub_82294520(ctx, base);
loc_82532184:
	// lwz r28,184(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x825321A0;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x825321B8;
	sub_82E640B8(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825321cc
	if (!ctx.cr6.gt) goto loc_825321CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_825321CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527ce8
	ctx.lr = 0x825321D4;
	sub_82527CE8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x825321ec
	if (ctx.cr6.gt) goto loc_825321EC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lfs f1,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82532f60
	ctx.lr = 0x825321EC;
	sub_82532F60(ctx, base);
loc_825321EC:
	// stw r29,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532200"))) PPC_WEAK_FUNC(sub_82532200);
PPC_FUNC_IMPL(__imp__sub_82532200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82532208;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// std r30,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r30.u64);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825322a4
	if (!ctx.cr6.lt) goto loc_825322A4;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532244;
	sub_825355D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825322a4
	if (ctx.cr6.eq) goto loc_825322A4;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82532270
	if (!ctx.cr6.eq) goto loc_82532270;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82532288
	if (ctx.cr6.eq) goto loc_82532288;
loc_82532270:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82532288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82532288:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825322A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825322A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825322B0"))) PPC_WEAK_FUNC(sub_825322B0);
PPC_FUNC_IMPL(__imp__sub_825322B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825322d4
	if (!ctx.cr6.eq) goto loc_825322D4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// blr 
	return;
loc_825322D4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x825324fc
	if (ctx.cr6.lt) goto loc_825324FC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f11,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// blt cr6,0x82532474
	if (ctx.cr6.lt) goto loc_82532474;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
loc_82532324:
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82532354
	if (!ctx.cr6.lt) goto loc_82532354;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82532354
	if (ctx.cr6.lt) goto loc_82532354;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82532358
	if (ctx.cr6.lt) goto loc_82532358;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82532358
	goto loc_82532358;
loc_82532354:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82532358:
	// fsubs f10,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,12(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// bge cr6,0x825323a0
	if (!ctx.cr6.lt) goto loc_825323A0;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfsx f0,r6,r8
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x825323a0
	if (ctx.cr6.lt) goto loc_825323A0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825323a4
	if (ctx.cr6.lt) goto loc_825323A4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x825323a4
	goto loc_825323A4;
loc_825323A0:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_825323A4:
	// fsubs f10,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,-52(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -52, temp.u32);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f8,-52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -52);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// bge cr6,0x825323f0
	if (!ctx.cr6.lt) goto loc_825323F0;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfs f0,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x825323f0
	if (ctx.cr6.lt) goto loc_825323F0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825323f4
	if (ctx.cr6.lt) goto loc_825323F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x825323f4
	goto loc_825323F4;
loc_825323F0:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_825323F4:
	// fsubs f10,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,-116(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -116, temp.u32);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f8,-116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -116);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// bge cr6,0x82532440
	if (!ctx.cr6.lt) goto loc_82532440;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfs f0,-8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82532440
	if (ctx.cr6.lt) goto loc_82532440;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82532444
	if (ctx.cr6.lt) goto loc_82532444;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82532444
	goto loc_82532444;
loc_82532440:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82532444:
	// fsubs f10,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,-180(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -180, temp.u32);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f8,-180(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -180);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// bne 0x82532324
	if (!ctx.cr0.eq) goto loc_82532324;
loc_82532474:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x825324f0
	if (!ctx.cr6.gt) goto loc_825324F0;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
loc_82532490:
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x825324b8
	if (!ctx.cr6.lt) goto loc_825324B8;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfsx f0,r6,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x825324b8
	if (ctx.cr6.lt) goto loc_825324B8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825324bc
	if (ctx.cr6.lt) goto loc_825324BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x825324bc
	goto loc_825324BC;
loc_825324B8:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_825324BC:
	// fsubs f10,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,12(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// lfs f8,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// bgt 0x82532490
	if (ctx.cr0.gt) goto loc_82532490;
loc_825324F0:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_825324FC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532504"))) PPC_WEAK_FUNC(sub_82532504);
PPC_FUNC_IMPL(__imp__sub_82532504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532508"))) PPC_WEAK_FUNC(sub_82532508);
PPC_FUNC_IMPL(__imp__sub_82532508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82532510;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r24,184(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 184);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82532664
	if (!ctx.cr6.gt) goto loc_82532664;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-16172
	ctx.r4.s64 = ctx.r11.s64 + -16172;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82532540;
	sub_8233E028(ctx, base);
	// lwz r10,180(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// ble cr6,0x82532664
	if (!ctx.cr6.gt) goto loc_82532664;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r29,64
	ctx.r29.s64 = 64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// addi r23,r10,11272
	ctx.r23.s64 = ctx.r10.s64 + 11272;
	// addi r25,r11,-16156
	ctx.r25.s64 = ctx.r11.s64 + -16156;
loc_8253257C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8232e868
	ctx.lr = 0x8253258C;
	sub_8232E868(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x825325a4
	if (!ctx.cr6.eq) goto loc_825325A4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_825325A4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x825325B8;
	sub_8233E028(ctx, base);
	// lwz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82532618
	if (ctx.cr6.eq) goto loc_82532618;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82532648
	if (ctx.cr6.eq) goto loc_82532648;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825325f8
	if (!ctx.cr6.eq) goto loc_825325F8;
	// bl 0x822900a0
	ctx.lr = 0x825325F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_825325F8:
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
	ctx.lr = 0x82532614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82532618:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82532648
	if (ctx.cr6.eq) goto loc_82532648;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82532634
	if (!ctx.cr6.eq) goto loc_82532634;
	// bl 0x822900a0
	ctx.lr = 0x82532630;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_82532634:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82532648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82532648:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8253257c
	if (ctx.cr6.lt) goto loc_8253257C;
loc_82532664:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253266C"))) PPC_WEAK_FUNC(sub_8253266C);
PPC_FUNC_IMPL(__imp__sub_8253266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532670"))) PPC_WEAK_FUNC(sub_82532670);
PPC_FUNC_IMPL(__imp__sub_82532670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,184(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// lfs f0,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82532720
	if (ctx.cr6.lt) goto loc_82532720;
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// addi r9,r7,-3
	ctx.r9.s64 = ctx.r7.s64 + -3;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
loc_825326A0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825326b4
	if (ctx.cr6.eq) goto loc_825326B4;
	// lfs f13,-64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825326bc
	if (!ctx.cr6.lt) goto loc_825326BC;
loc_825326B4:
	// lfs f0,-64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_825326BC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825326d0
	if (ctx.cr6.eq) goto loc_825326D0;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825326d8
	if (!ctx.cr6.lt) goto loc_825326D8;
loc_825326D0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_825326D8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825326ec
	if (ctx.cr6.eq) goto loc_825326EC;
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825326f4
	if (!ctx.cr6.lt) goto loc_825326F4;
loc_825326EC:
	// lfs f0,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
loc_825326F4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82532708
	if (ctx.cr6.eq) goto loc_82532708;
	// lfs f13,128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82532710
	if (!ctx.cr6.lt) goto loc_82532710;
loc_82532708:
	// lfs f0,128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_82532710:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825326a0
	if (ctx.cr6.lt) goto loc_825326A0;
loc_82532720:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82532738:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8253274c
	if (ctx.cr6.eq) goto loc_8253274C;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82532754
	if (!ctx.cr6.lt) goto loc_82532754;
loc_8253274C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82532754:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82532738
	if (ctx.cr6.lt) goto loc_82532738;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532768"))) PPC_WEAK_FUNC(sub_82532768);
PPC_FUNC_IMPL(__imp__sub_82532768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82532770;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ae8
	ctx.lr = 0x82532778;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// std r27,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r27.u64);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r25,204(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x825327bc
	if (!ctx.cr6.eq) goto loc_825327BC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82532938
	if (ctx.cr6.eq) goto loc_82532938;
loc_825327BC:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82532938
	if (!ctx.cr6.gt) goto loc_82532938;
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825327d8
	if (ctx.cr6.lt) goto loc_825327D8;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x825327e8
	if (!ctx.cr6.gt) goto loc_825327E8;
loc_825327D8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532670
	ctx.lr = 0x825327E4;
	sub_82532670(ctx, base);
	// stw r3,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r3.u32);
loc_825327E8:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82532938
	if (ctx.cr6.lt) goto loc_82532938;
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82532938
	if (!ctx.cr6.lt) goto loc_82532938;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532814;
	sub_825355D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82532938
	if (ctx.cr6.eq) goto loc_82532938;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82532868
	if (!ctx.cr6.eq) goto loc_82532868;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82532868
	if (ctx.cr6.eq) goto loc_82532868;
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82532868
	if (!ctx.cr6.eq) goto loc_82532868;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82532868
	if (!ctx.cr6.eq) goto loc_82532868;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82532868
	if (!ctx.cr6.eq) goto loc_82532868;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825328d0
	if (!ctx.cr6.eq) goto loc_825328D0;
loc_82532868:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8253288c
	if (!ctx.cr6.eq) goto loc_8253288C;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8253288c
	if (!ctx.cr6.eq) goto loc_8253288C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825328b0
	if (!ctx.cr6.eq) goto loc_825328B0;
loc_8253288C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825328A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82532938
	if (ctx.cr6.eq) goto loc_82532938;
loc_825328B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825328D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825328D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82532f60
	ctx.lr = 0x825328E0;
	sub_82532F60(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r10.u32);
	// beq cr6,0x82532900
	if (ctx.cr6.eq) goto loc_82532900;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82532904
	goto loc_82532904;
loc_82532900:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_82532904:
	// stfs f0,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532b18
	ctx.lr = 0x82532914;
	sub_82532B18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82532928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b34
	ctx.lr = 0x82532934;
	__restfpr_28(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82532938:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b34
	ctx.lr = 0x82532948;
	__restfpr_28(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253294C"))) PPC_WEAK_FUNC(sub_8253294C);
PPC_FUNC_IMPL(__imp__sub_8253294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532950"))) PPC_WEAK_FUNC(sub_82532950);
PPC_FUNC_IMPL(__imp__sub_82532950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82532958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r30.u64);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82532988
	if (!ctx.cr6.eq) goto loc_82532988;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825329d8
	if (ctx.cr6.eq) goto loc_825329D8;
loc_82532988:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x825329d8
	if (!ctx.cr6.gt) goto loc_825329D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x825e58d8
	ctx.lr = 0x825329A4;
	sub_825E58D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825329d8
	if (ctx.cr6.eq) goto loc_825329D8;
	// lfs f12,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x825329c4
	if (!ctx.cr6.gt) goto loc_825329C4;
	// fdivs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
loc_825329C4:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532768
	ctx.lr = 0x825329D8;
	sub_82532768(ctx, base);
loc_825329D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825329E0"))) PPC_WEAK_FUNC(sub_825329E0);
PPC_FUNC_IMPL(__imp__sub_825329E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532a34
	if (!ctx.cr6.gt) goto loc_82532A34;
	// lwz r10,180(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532A14;
	sub_825355D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82532a34
	if (ctx.cr6.eq) goto loc_82532A34;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x82532a40
	goto loc_82532A40;
loc_82532A34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82532A40:
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

__attribute__((alias("__imp__sub_82532A58"))) PPC_WEAK_FUNC(sub_82532A58);
PPC_FUNC_IMPL(__imp__sub_82532A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// b 0x82532f60
	sub_82532F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532A78"))) PPC_WEAK_FUNC(sub_82532A78);
PPC_FUNC_IMPL(__imp__sub_82532A78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532A7C"))) PPC_WEAK_FUNC(sub_82532A7C);
PPC_FUNC_IMPL(__imp__sub_82532A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532A80"))) PPC_WEAK_FUNC(sub_82532A80);
PPC_FUNC_IMPL(__imp__sub_82532A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82532b04
	if (ctx.cr6.eq) goto loc_82532B04;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532b04
	if (!ctx.cr6.gt) goto loc_82532B04;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532AC8;
	sub_825355D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82532b04
	if (ctx.cr6.eq) goto loc_82532B04;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82532af0
	if (!ctx.cr6.eq) goto loc_82532AF0;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82532b04
	if (ctx.cr6.eq) goto loc_82532B04;
loc_82532AF0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82532B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82532B04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532B18"))) PPC_WEAK_FUNC(sub_82532B18);
PPC_FUNC_IMPL(__imp__sub_82532B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82532B20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82532b9c
	if (!ctx.cr6.gt) goto loc_82532B9C;
	// li r30,64
	ctx.r30.s64 = 64;
loc_82532B40:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532B50;
	sub_825355D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82532b88
	if (ctx.cr6.eq) goto loc_82532B88;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82532b78
	if (ctx.cr6.eq) goto loc_82532B78;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x82532b7c
	if (ctx.cr6.eq) goto loc_82532B7C;
loc_82532B78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82532B7C:
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwimi r10,r11,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
loc_82532B88:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82532b40
	if (ctx.cr6.lt) goto loc_82532B40;
loc_82532B9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532BA4"))) PPC_WEAK_FUNC(sub_82532BA4);
PPC_FUNC_IMPL(__imp__sub_82532BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532BA8"))) PPC_WEAK_FUNC(sub_82532BA8);
PPC_FUNC_IMPL(__imp__sub_82532BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532bc8
	if (!ctx.cr6.gt) goto loc_82532BC8;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825355d8
	sub_825355D8(ctx, base);
	return;
loc_82532BC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532BD0"))) PPC_WEAK_FUNC(sub_82532BD0);
PPC_FUNC_IMPL(__imp__sub_82532BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82532BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532c1c
	if (!ctx.cr6.gt) goto loc_82532C1C;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532C08;
	sub_825355D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82532c1c
	if (ctx.cr6.eq) goto loc_82532C1C;
	// stb r31,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r31.u8);
	// stb r30,237(r3)
	PPC_STORE_U8(ctx.r3.u32 + 237, ctx.r30.u8);
	// stb r29,238(r3)
	PPC_STORE_U8(ctx.r3.u32 + 238, ctx.r29.u8);
loc_82532C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532C24"))) PPC_WEAK_FUNC(sub_82532C24);
PPC_FUNC_IMPL(__imp__sub_82532C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532C28"))) PPC_WEAK_FUNC(sub_82532C28);
PPC_FUNC_IMPL(__imp__sub_82532C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82532C30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// std r25,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r25.u64);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532d4c
	if (!ctx.cr6.gt) goto loc_82532D4C;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532C60;
	sub_825355D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82532d4c
	if (ctx.cr6.eq) goto loc_82532D4C;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// lwz r26,188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82532c8c
	if (!ctx.cr6.eq) goto loc_82532C8C;
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82532d4c
	if (ctx.cr6.eq) goto loc_82532D4C;
loc_82532C8C:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82532cfc
	if (!ctx.cr6.eq) goto loc_82532CFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r3,716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// bl 0x82526300
	ctx.lr = 0x82532CB8;
	sub_82526300(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82532cf4
	if (!ctx.cr6.gt) goto loc_82532CF4;
loc_82532CC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82535918
	ctx.lr = 0x82532CD4;
	sub_82535918(ctx, base);
	// stw r3,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82532cf4
	if (!ctx.cr6.eq) goto loc_82532CF4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82532cc8
	if (ctx.cr6.lt) goto loc_82532CC8;
loc_82532CF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825365c0
	ctx.lr = 0x82532CFC;
	sub_825365C0(ctx, base);
loc_82532CFC:
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82532d4c
	if (ctx.cr6.eq) goto loc_82532D4C;
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82532d20
	if (!ctx.cr6.eq) goto loc_82532D20;
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82532d2c
	if (ctx.cr6.eq) goto loc_82532D2C;
loc_82532D20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,216(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 216);
	// bl 0x82530ac0
	ctx.lr = 0x82532D2C;
	sub_82530AC0(ctx, base);
loc_82532D2C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82532d3c
	if (!ctx.cr6.eq) goto loc_82532D3C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82532d4c
	if (ctx.cr6.eq) goto loc_82532D4C;
loc_82532D3C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82530a18
	ctx.lr = 0x82532D4C;
	sub_82530A18(ctx, base);
loc_82532D4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532D54"))) PPC_WEAK_FUNC(sub_82532D54);
PPC_FUNC_IMPL(__imp__sub_82532D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532D58"))) PPC_WEAK_FUNC(sub_82532D58);
PPC_FUNC_IMPL(__imp__sub_82532D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82532e5c
	if (ctx.cr6.eq) goto loc_82532E5C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532ebc
	if (!ctx.cr6.gt) goto loc_82532EBC;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825355d8
	ctx.lr = 0x82532DB8;
	sub_825355D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82532dd0
	if (ctx.cr6.eq) goto loc_82532DD0;
	// lwz r11,204(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82532df8
	if (!ctx.cr6.eq) goto loc_82532DF8;
loc_82532DD0:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82532df8
	if (ctx.cr6.eq) goto loc_82532DF8;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532f60
	ctx.lr = 0x82532DF8;
	sub_82532F60(ctx, base);
loc_82532DF8:
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82532e5c
	if (ctx.cr6.lt) goto loc_82532E5C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82532e5c
	if (ctx.cr6.eq) goto loc_82532E5C;
	// lwz r11,204(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82532e5c
	if (ctx.cr6.eq) goto loc_82532E5C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82532E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82532e5c
	if (ctx.cr6.gt) goto loc_82532E5C;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82532e5c
	if (ctx.cr6.eq) goto loc_82532E5C;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532f60
	ctx.lr = 0x82532E5C;
	sub_82532F60(ctx, base);
loc_82532E5C:
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82532f2c
	if (!ctx.cr6.gt) goto loc_82532F2C;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82532ec4
	if (ctx.cr6.gt) goto loc_82532EC4;
	// stfs f31,224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532f2c
	if (!ctx.cr6.gt) goto loc_82532F2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82532E8C:
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82532e8c
	if (ctx.cr6.lt) goto loc_82532E8C;
	// b 0x82532f2c
	goto loc_82532F2C;
loc_82532EBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82532dd0
	goto loc_82532DD0;
loc_82532EC4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82532f20
	if (!ctx.cr6.gt) goto loc_82532F20;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82532ED8:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lfsx f13,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fdivs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmadds f8,f9,f30,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f10.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82532ed8
	if (ctx.cr6.lt) goto loc_82532ED8;
loc_82532F20:
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,224(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
loc_82532F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82526af8
	ctx.lr = 0x82532F3C;
	sub_82526AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532F5C"))) PPC_WEAK_FUNC(sub_82532F5C);
PPC_FUNC_IMPL(__imp__sub_82532F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532F60"))) PPC_WEAK_FUNC(sub_82532F60);
PPC_FUNC_IMPL(__imp__sub_82532F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82532f74
	if (ctx.cr6.lt) goto loc_82532F74;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82532f78
	if (ctx.cr6.lt) goto loc_82532F78;
loc_82532F74:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82532F78:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lfs f12,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,-18284(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18284);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82532fb4
	if (!ctx.cr6.lt) goto loc_82532FB4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82532FB4:
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82533024
	if (!ctx.cr6.gt) goto loc_82533024;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82532FCC:
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82532ff4
	if (!ctx.cr6.eq) goto loc_82532FF4;
	// stfsx f12,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8253300c
	if (!ctx.cr6.eq) goto loc_8253300C;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// b 0x8253300c
	goto loc_8253300C;
loc_82532FF4:
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8253300c
	if (!ctx.cr6.eq) goto loc_8253300C;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_8253300C:
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82532fcc
	if (ctx.cr6.lt) goto loc_82532FCC;
loc_82533024:
	// stw r4,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// stfs f13,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82533030"))) PPC_WEAK_FUNC(sub_82533030);
PPC_FUNC_IMPL(__imp__sub_82533030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82533054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8252a398
	ctx.lr = 0x82533060;
	sub_8252A398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82533074"))) PPC_WEAK_FUNC(sub_82533074);
PPC_FUNC_IMPL(__imp__sub_82533074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533078"))) PPC_WEAK_FUNC(sub_82533078);
PPC_FUNC_IMPL(__imp__sub_82533078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253309C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8252a398
	ctx.lr = 0x825330A8;
	sub_8252A398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825330BC"))) PPC_WEAK_FUNC(sub_825330BC);
PPC_FUNC_IMPL(__imp__sub_825330BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825330C0"))) PPC_WEAK_FUNC(sub_825330C0);
PPC_FUNC_IMPL(__imp__sub_825330C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825330CC"))) PPC_WEAK_FUNC(sub_825330CC);
PPC_FUNC_IMPL(__imp__sub_825330CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825330D0"))) PPC_WEAK_FUNC(sub_825330D0);
PPC_FUNC_IMPL(__imp__sub_825330D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82533100
	if (!ctx.cr6.gt) goto loc_82533100;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_825330E8:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82533104
	if (ctx.cr6.eq) goto loc_82533104;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825330e8
	if (ctx.cr6.lt) goto loc_825330E8;
loc_82533100:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82533104:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82533118"))) PPC_WEAK_FUNC(sub_82533118);
PPC_FUNC_IMPL(__imp__sub_82533118) {
	PPC_FUNC_PROLOGUE();
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82294498
	sub_82294498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253312C"))) PPC_WEAK_FUNC(sub_8253312C);
PPC_FUNC_IMPL(__imp__sub_8253312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533130"))) PPC_WEAK_FUNC(sub_82533130);
PPC_FUNC_IMPL(__imp__sub_82533130) {
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
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82294498
	ctx.lr = 0x82533160;
	sub_82294498(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x82533170;
	sub_82E640B8(ctx, base);
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

