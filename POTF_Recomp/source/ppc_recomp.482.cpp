#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2C780"))) PPC_WEAK_FUNC(sub_82F2C780);
PPC_FUNC_IMPL(__imp__sub_82F2C780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F2C788;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2C79C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13964
	ctx.r4.s64 = ctx.r11.s64 + 13964;
	// bl 0x82f28770
	ctx.lr = 0x82F2C7B4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2C7C4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12508
	ctx.r4.s64 = ctx.r11.s64 + 12508;
	// bl 0x82f28770
	ctx.lr = 0x82F2C7DC;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,12500
	ctx.r25.s64 = ctx.r11.s64 + 12500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2C808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12248
	ctx.r4.s64 = ctx.r11.s64 + 12248;
	// bl 0x82f28770
	ctx.lr = 0x82F2C820;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,12312
	ctx.r26.s64 = ctx.r11.s64 + 12312;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f2c8b0
	if (!ctx.cr6.gt) goto loc_82F2C8B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13940
	ctx.r29.s64 = ctx.r11.s64 + 13940;
loc_82F2C848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2C850;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eab788
	ctx.lr = 0x82F2C870;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2C884;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2C898;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2c848
	if (ctx.cr6.lt) goto loc_82F2C848;
loc_82F2C8B0:
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r29,r10,13912
	ctx.r29.s64 = ctx.r10.s64 + 13912;
	// addi r27,r11,12528
	ctx.r27.s64 = ctx.r11.s64 + 12528;
	// ble cr6,0x82f2c93c
	if (!ctx.cr6.gt) goto loc_82F2C93C;
loc_82F2C8D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2C8D8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eab788
	ctx.lr = 0x82F2C8F8;
	sub_82EAB788(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eab788
	ctx.lr = 0x82F2C90C;
	sub_82EAB788(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2C924;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2c8d0
	if (ctx.cr6.lt) goto loc_82F2C8D0;
loc_82F2C93C:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,12300
	ctx.r28.s64 = ctx.r11.s64 + 12300;
	// ble cr6,0x82f2c9bc
	if (!ctx.cr6.gt) goto loc_82F2C9BC;
loc_82F2C954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2C95C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2C978;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2C98C;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2C9A4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2c954
	if (ctx.cr6.lt) goto loc_82F2C954;
loc_82F2C9BC:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2ca54
	if (!ctx.cr6.gt) goto loc_82F2CA54;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13812
	ctx.r29.s64 = ctx.r11.s64 + 13812;
loc_82F2C9D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2C9DC;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2C9F8;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CA0C;
	sub_82EAB788(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eab788
	ctx.lr = 0x82F2CA20;
	sub_82EAB788(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CA3C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2c9d4
	if (ctx.cr6.lt) goto loc_82F2C9D4;
loc_82F2CA54:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2caf0
	if (!ctx.cr6.gt) goto loc_82F2CAF0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13780
	ctx.r29.s64 = ctx.r11.s64 + 13780;
loc_82F2CA6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CA74;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82eab788
	ctx.lr = 0x82F2CA94;
	sub_82EAB788(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2CAA8;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CABC;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CAD8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2caf4
	if (ctx.cr0.lt) goto loc_82F2CAF4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2ca6c
	if (ctx.cr6.lt) goto loc_82F2CA6C;
loc_82F2CAF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2CAF4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CAFC"))) PPC_WEAK_FUNC(sub_82F2CAFC);
PPC_FUNC_IMPL(__imp__sub_82F2CAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CB00"))) PPC_WEAK_FUNC(sub_82F2CB00);
PPC_FUNC_IMPL(__imp__sub_82F2CB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F2CB08;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CB1C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12508
	ctx.r4.s64 = ctx.r11.s64 + 12508;
	// bl 0x82f28770
	ctx.lr = 0x82F2CB34;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,12580
	ctx.r4.s64 = ctx.r10.s64 + 12580;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2CB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,12248
	ctx.r27.s64 = ctx.r11.s64 + 12248;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CB84;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2cc5c
	if (!ctx.cr6.gt) goto loc_82F2CC5C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r10,12500
	ctx.r29.s64 = ctx.r10.s64 + 12500;
	// addi r28,r11,12324
	ctx.r28.s64 = ctx.r11.s64 + 12324;
loc_82F2CBAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CBB4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CBD4;
	sub_82EAB788(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2CBEC;
	sub_82EAB788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CBF4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CC0C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2CC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CC44;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2cc60
	if (ctx.cr0.lt) goto loc_82F2CC60;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2cbac
	if (ctx.cr6.lt) goto loc_82F2CBAC;
loc_82F2CC5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2CC60:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CC68"))) PPC_WEAK_FUNC(sub_82F2CC68);
PPC_FUNC_IMPL(__imp__sub_82F2CC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82F2CC70;
	__savegprlr_21(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CC84;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13964
	ctx.r4.s64 = ctx.r11.s64 + 13964;
	// bl 0x82f28770
	ctx.lr = 0x82F2CC9C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,14032
	ctx.r25.s64 = ctx.r11.s64 + 14032;
	// addi r26,r10,12312
	ctx.r26.s64 = ctx.r10.s64 + 12312;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82f2cd30
	if (!ctx.cr6.gt) goto loc_82F2CD30;
loc_82F2CCC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CCCC;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eab788
	ctx.lr = 0x82F2CCEC;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CD00;
	sub_82EAB788(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CD18;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2ccc4
	if (ctx.cr6.lt) goto loc_82F2CCC4;
loc_82F2CD30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CD38;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12508
	ctx.r4.s64 = ctx.r11.s64 + 12508;
	// bl 0x82f28770
	ctx.lr = 0x82F2CD50;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r11,12500
	ctx.r23.s64 = ctx.r11.s64 + 12500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2CD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12248
	ctx.r4.s64 = ctx.r11.s64 + 12248;
	// bl 0x82f28770
	ctx.lr = 0x82F2CD94;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r24,r11,12528
	ctx.r24.s64 = ctx.r11.s64 + 12528;
	// ble cr6,0x82f2ce20
	if (!ctx.cr6.gt) goto loc_82F2CE20;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13940
	ctx.r29.s64 = ctx.r11.s64 + 13940;
loc_82F2CDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CDC4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CDE0;
	sub_82EAB788(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2CDF4;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CE08;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2cdbc
	if (ctx.cr6.lt) goto loc_82F2CDBC;
loc_82F2CE20:
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r27,r10,13912
	ctx.r27.s64 = ctx.r10.s64 + 13912;
	// addi r28,r11,14020
	ctx.r28.s64 = ctx.r11.s64 + 14020;
	// ble cr6,0x82f2cea8
	if (!ctx.cr6.gt) goto loc_82F2CEA8;
loc_82F2CE40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CE48;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2CE64;
	sub_82EAB788(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eab788
	ctx.lr = 0x82F2CE78;
	sub_82EAB788(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CE90;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2ce40
	if (ctx.cr6.lt) goto loc_82F2CE40;
loc_82F2CEA8:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2cf0c
	if (!ctx.cr6.gt) goto loc_82F2CF0C;
loc_82F2CEB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CEC0;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CEDC;
	sub_82EAB788(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CEF4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2ceb8
	if (ctx.cr6.lt) goto loc_82F2CEB8;
loc_82F2CF0C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2cf90
	if (!ctx.cr6.gt) goto loc_82F2CF90;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13812
	ctx.r29.s64 = ctx.r11.s64 + 13812;
loc_82F2CF24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CF2C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CF48;
	sub_82EAB788(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eab788
	ctx.lr = 0x82F2CF5C;
	sub_82EAB788(ctx, base);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CF78;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2cf24
	if (ctx.cr6.lt) goto loc_82F2CF24;
loc_82F2CF90:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2d00c
	if (!ctx.cr6.gt) goto loc_82F2D00C;
loc_82F2CFA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2CFA8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eab788
	ctx.lr = 0x82F2CFC8;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2CFDC;
	sub_82EAB788(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2CFF4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2cfa0
	if (ctx.cr6.lt) goto loc_82F2CFA0;
loc_82F2D00C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D014;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13992
	ctx.r4.s64 = ctx.r11.s64 + 13992;
	// bl 0x82f28770
	ctx.lr = 0x82F2D02C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2d0b8
	if (!ctx.cr6.gt) goto loc_82F2D0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13780
	ctx.r29.s64 = ctx.r11.s64 + 13780;
loc_82F2D04C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D054;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2D070;
	sub_82EAB788(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eab788
	ctx.lr = 0x82F2D084;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D0A0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2d04c
	if (ctx.cr6.lt) goto loc_82F2D04C;
loc_82F2D0B8:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2d134
	if (!ctx.cr6.gt) goto loc_82F2D134;
loc_82F2D0C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D0D0;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eab788
	ctx.lr = 0x82F2D0F0;
	sub_82EAB788(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2D104;
	sub_82EAB788(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D11C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2d0c8
	if (ctx.cr6.lt) goto loc_82F2D0C8;
loc_82F2D134:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,12300
	ctx.r28.s64 = ctx.r11.s64 + 12300;
	// ble cr6,0x82f2d1bc
	if (!ctx.cr6.gt) goto loc_82F2D1BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13752
	ctx.r29.s64 = ctx.r11.s64 + 13752;
loc_82F2D154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D15C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82eab788
	ctx.lr = 0x82F2D178;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2D18C;
	sub_82EAB788(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D1A4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2d154
	if (ctx.cr6.lt) goto loc_82F2D154;
loc_82F2D1BC:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2d26c
	if (!ctx.cr6.gt) goto loc_82F2D26C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,13724
	ctx.r29.s64 = ctx.r11.s64 + 13724;
loc_82F2D1D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D1DC;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82eab788
	ctx.lr = 0x82F2D1FC;
	sub_82EAB788(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82eab788
	ctx.lr = 0x82F2D210;
	sub_82EAB788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2D224;
	sub_82EAB788(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2D238;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D254;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d270
	if (ctx.cr0.lt) goto loc_82F2D270;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2d1d4
	if (ctx.cr6.lt) goto loc_82F2D1D4;
loc_82F2D26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2D270:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D278"))) PPC_WEAK_FUNC(sub_82F2D278);
PPC_FUNC_IMPL(__imp__sub_82F2D278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F2D280;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D294;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d330
	if (ctx.cr0.lt) goto loc_82F2D330;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F2D2BC;
	sub_82F289E8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eab788
	ctx.lr = 0x82F2D2D4;
	sub_82EAB788(ctx, base);
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,14060
	ctx.r4.s64 = ctx.r11.s64 + 14060;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D318;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d330
	if (ctx.cr0.lt) goto loc_82F2D330;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f457c8
	ctx.lr = 0x82F2D330;
	sub_82F457C8(ctx, base);
loc_82F2D330:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D338"))) PPC_WEAK_FUNC(sub_82F2D338);
PPC_FUNC_IMPL(__imp__sub_82F2D338) {
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
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldimi r10,r5,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82f2d3c8
	if (!ctx.cr6.eq) goto loc_82F2D3C8;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f2d3c8
	if (!ctx.cr6.eq) goto loc_82F2D3C8;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82f2d3b4
	if (ctx.cr6.lt) goto loc_82F2D3B4;
	// beq cr6,0x82f2d3a8
	if (ctx.cr6.eq) goto loc_82F2D3A8;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82f2d39c
	if (ctx.cr6.lt) goto loc_82F2D39C;
	// beq cr6,0x82f2d390
	if (ctx.cr6.eq) goto loc_82F2D390;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f2d3e4
	goto loc_82F2D3E4;
loc_82F2D390:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,14192
	ctx.r4.s64 = ctx.r10.s64 + 14192;
	// b 0x82f2d3bc
	goto loc_82F2D3BC;
loc_82F2D39C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,14172
	ctx.r4.s64 = ctx.r10.s64 + 14172;
	// b 0x82f2d3bc
	goto loc_82F2D3BC;
loc_82F2D3A8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,14152
	ctx.r4.s64 = ctx.r10.s64 + 14152;
	// b 0x82f2d3bc
	goto loc_82F2D3BC;
loc_82F2D3B4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,14132
	ctx.r4.s64 = ctx.r10.s64 + 14132;
loc_82F2D3BC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D3C4;
	sub_82F28770(ctx, base);
	// b 0x82f2d3e4
	goto loc_82F2D3E4;
loc_82F2D3C8:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14096
	ctx.r4.s64 = ctx.r10.s64 + 14096;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D3E4;
	sub_82F28770(ctx, base);
loc_82F2D3E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D3F4"))) PPC_WEAK_FUNC(sub_82F2D3F4);
PPC_FUNC_IMPL(__imp__sub_82F2D3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D3F8"))) PPC_WEAK_FUNC(sub_82F2D3F8);
PPC_FUNC_IMPL(__imp__sub_82F2D3F8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14212
	ctx.r4.s64 = ctx.r10.s64 + 14212;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D41C;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D42C"))) PPC_WEAK_FUNC(sub_82F2D42C);
PPC_FUNC_IMPL(__imp__sub_82F2D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D430"))) PPC_WEAK_FUNC(sub_82F2D430);
PPC_FUNC_IMPL(__imp__sub_82F2D430) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14236
	ctx.r4.s64 = ctx.r10.s64 + 14236;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D454;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D464"))) PPC_WEAK_FUNC(sub_82F2D464);
PPC_FUNC_IMPL(__imp__sub_82F2D464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D468"))) PPC_WEAK_FUNC(sub_82F2D468);
PPC_FUNC_IMPL(__imp__sub_82F2D468) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14260
	ctx.r4.s64 = ctx.r10.s64 + 14260;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D48C;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D49C"))) PPC_WEAK_FUNC(sub_82F2D49C);
PPC_FUNC_IMPL(__imp__sub_82F2D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4A0"))) PPC_WEAK_FUNC(sub_82F2D4A0);
PPC_FUNC_IMPL(__imp__sub_82F2D4A0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14284
	ctx.r4.s64 = ctx.r10.s64 + 14284;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D4C4;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D4D4"))) PPC_WEAK_FUNC(sub_82F2D4D4);
PPC_FUNC_IMPL(__imp__sub_82F2D4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4D8"))) PPC_WEAK_FUNC(sub_82F2D4D8);
PPC_FUNC_IMPL(__imp__sub_82F2D4D8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14308
	ctx.r4.s64 = ctx.r11.s64 + 14308;
	// bl 0x82f28770
	ctx.lr = 0x82F2D4F0;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D500"))) PPC_WEAK_FUNC(sub_82F2D500);
PPC_FUNC_IMPL(__imp__sub_82F2D500) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14324
	ctx.r4.s64 = ctx.r11.s64 + 14324;
	// bl 0x82f28770
	ctx.lr = 0x82F2D518;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D528"))) PPC_WEAK_FUNC(sub_82F2D528);
PPC_FUNC_IMPL(__imp__sub_82F2D528) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14344
	ctx.r4.s64 = ctx.r10.s64 + 14344;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D550;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D560"))) PPC_WEAK_FUNC(sub_82F2D560);
PPC_FUNC_IMPL(__imp__sub_82F2D560) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,14372
	ctx.r4.s64 = ctx.r11.s64 + 14372;
	// bl 0x82f28770
	ctx.lr = 0x82F2D57C;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D58C"))) PPC_WEAK_FUNC(sub_82F2D58C);
PPC_FUNC_IMPL(__imp__sub_82F2D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D590"))) PPC_WEAK_FUNC(sub_82F2D590);
PPC_FUNC_IMPL(__imp__sub_82F2D590) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14392
	ctx.r4.s64 = ctx.r10.s64 + 14392;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D5B4;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D5C4"))) PPC_WEAK_FUNC(sub_82F2D5C4);
PPC_FUNC_IMPL(__imp__sub_82F2D5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D5C8"))) PPC_WEAK_FUNC(sub_82F2D5C8);
PPC_FUNC_IMPL(__imp__sub_82F2D5C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14428
	ctx.r4.s64 = ctx.r10.s64 + 14428;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D5EC;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D5FC"))) PPC_WEAK_FUNC(sub_82F2D5FC);
PPC_FUNC_IMPL(__imp__sub_82F2D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D600"))) PPC_WEAK_FUNC(sub_82F2D600);
PPC_FUNC_IMPL(__imp__sub_82F2D600) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14464
	ctx.r4.s64 = ctx.r10.s64 + 14464;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D624;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D634"))) PPC_WEAK_FUNC(sub_82F2D634);
PPC_FUNC_IMPL(__imp__sub_82F2D634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D638"))) PPC_WEAK_FUNC(sub_82F2D638);
PPC_FUNC_IMPL(__imp__sub_82F2D638) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14500
	ctx.r4.s64 = ctx.r10.s64 + 14500;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D65C;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D66C"))) PPC_WEAK_FUNC(sub_82F2D66C);
PPC_FUNC_IMPL(__imp__sub_82F2D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D670"))) PPC_WEAK_FUNC(sub_82F2D670);
PPC_FUNC_IMPL(__imp__sub_82F2D670) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,12900
	ctx.r4.s64 = ctx.r10.s64 + 12900;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D694;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D6A4"))) PPC_WEAK_FUNC(sub_82F2D6A4);
PPC_FUNC_IMPL(__imp__sub_82F2D6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D6A8"))) PPC_WEAK_FUNC(sub_82F2D6A8);
PPC_FUNC_IMPL(__imp__sub_82F2D6A8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,12920
	ctx.r4.s64 = ctx.r11.s64 + 12920;
	// bl 0x82f28770
	ctx.lr = 0x82F2D6C4;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D6D4"))) PPC_WEAK_FUNC(sub_82F2D6D4);
PPC_FUNC_IMPL(__imp__sub_82F2D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D6D8"))) PPC_WEAK_FUNC(sub_82F2D6D8);
PPC_FUNC_IMPL(__imp__sub_82F2D6D8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,12936
	ctx.r4.s64 = ctx.r11.s64 + 12936;
	// bl 0x82f28770
	ctx.lr = 0x82F2D6F4;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D704"))) PPC_WEAK_FUNC(sub_82F2D704);
PPC_FUNC_IMPL(__imp__sub_82F2D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D708"))) PPC_WEAK_FUNC(sub_82F2D708);
PPC_FUNC_IMPL(__imp__sub_82F2D708) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,12952
	ctx.r4.s64 = ctx.r10.s64 + 12952;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D72C;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D73C"))) PPC_WEAK_FUNC(sub_82F2D73C);
PPC_FUNC_IMPL(__imp__sub_82F2D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D740"))) PPC_WEAK_FUNC(sub_82F2D740);
PPC_FUNC_IMPL(__imp__sub_82F2D740) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14536
	ctx.r4.s64 = ctx.r10.s64 + 14536;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D764;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D774"))) PPC_WEAK_FUNC(sub_82F2D774);
PPC_FUNC_IMPL(__imp__sub_82F2D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D778"))) PPC_WEAK_FUNC(sub_82F2D778);
PPC_FUNC_IMPL(__imp__sub_82F2D778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F2D780;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D794;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d7b4
	if (ctx.cr0.lt) goto loc_82F2D7B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,14576
	ctx.r4.s64 = ctx.r11.s64 + 14576;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D7B4;
	sub_82F28770(ctx, base);
loc_82F2D7B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D7BC"))) PPC_WEAK_FUNC(sub_82F2D7BC);
PPC_FUNC_IMPL(__imp__sub_82F2D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D7C0"))) PPC_WEAK_FUNC(sub_82F2D7C0);
PPC_FUNC_IMPL(__imp__sub_82F2D7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F2D7C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D7DC;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d7fc
	if (ctx.cr0.lt) goto loc_82F2D7FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,14612
	ctx.r4.s64 = ctx.r11.s64 + 14612;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D7FC;
	sub_82F28770(ctx, base);
loc_82F2D7FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D804"))) PPC_WEAK_FUNC(sub_82F2D804);
PPC_FUNC_IMPL(__imp__sub_82F2D804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D808"))) PPC_WEAK_FUNC(sub_82F2D808);
PPC_FUNC_IMPL(__imp__sub_82F2D808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F2D810;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,13392
	ctx.r4.s64 = ctx.r11.s64 + 13392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D830;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d86c
	if (ctx.cr0.lt) goto loc_82F2D86C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2D840;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d86c
	if (ctx.cr0.lt) goto loc_82F2D86C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,13372
	ctx.r4.s64 = ctx.r11.s64 + 13372;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D860;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2d86c
	if (ctx.cr0.lt) goto loc_82F2D86C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2D86C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D874"))) PPC_WEAK_FUNC(sub_82F2D874);
PPC_FUNC_IMPL(__imp__sub_82F2D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D878"))) PPC_WEAK_FUNC(sub_82F2D878);
PPC_FUNC_IMPL(__imp__sub_82F2D878) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,12972
	ctx.r4.s64 = ctx.r11.s64 + 12972;
	// bl 0x82f28770
	ctx.lr = 0x82F2D894;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D8A4"))) PPC_WEAK_FUNC(sub_82F2D8A4);
PPC_FUNC_IMPL(__imp__sub_82F2D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D8A8"))) PPC_WEAK_FUNC(sub_82F2D8A8);
PPC_FUNC_IMPL(__imp__sub_82F2D8A8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14648
	ctx.r4.s64 = ctx.r10.s64 + 14648;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D8CC;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D8DC"))) PPC_WEAK_FUNC(sub_82F2D8DC);
PPC_FUNC_IMPL(__imp__sub_82F2D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D8E0"))) PPC_WEAK_FUNC(sub_82F2D8E0);
PPC_FUNC_IMPL(__imp__sub_82F2D8E0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r9,13416
	ctx.r4.s64 = ctx.r9.s64 + 13416;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D90C;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D91C"))) PPC_WEAK_FUNC(sub_82F2D91C);
PPC_FUNC_IMPL(__imp__sub_82F2D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D920"))) PPC_WEAK_FUNC(sub_82F2D920);
PPC_FUNC_IMPL(__imp__sub_82F2D920) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14676
	ctx.r4.s64 = ctx.r10.s64 + 14676;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D944;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D954"))) PPC_WEAK_FUNC(sub_82F2D954);
PPC_FUNC_IMPL(__imp__sub_82F2D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D958"))) PPC_WEAK_FUNC(sub_82F2D958);
PPC_FUNC_IMPL(__imp__sub_82F2D958) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14704
	ctx.r4.s64 = ctx.r10.s64 + 14704;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2D97C;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D98C"))) PPC_WEAK_FUNC(sub_82F2D98C);
PPC_FUNC_IMPL(__imp__sub_82F2D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D990"))) PPC_WEAK_FUNC(sub_82F2D990);
PPC_FUNC_IMPL(__imp__sub_82F2D990) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,14732
	ctx.r4.s64 = ctx.r11.s64 + 14732;
	// bl 0x82f28770
	ctx.lr = 0x82F2D9AC;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D9BC"))) PPC_WEAK_FUNC(sub_82F2D9BC);
PPC_FUNC_IMPL(__imp__sub_82F2D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D9C0"))) PPC_WEAK_FUNC(sub_82F2D9C0);
PPC_FUNC_IMPL(__imp__sub_82F2D9C0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,14752
	ctx.r4.s64 = ctx.r11.s64 + 14752;
	// bl 0x82f28770
	ctx.lr = 0x82F2D9DC;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D9EC"))) PPC_WEAK_FUNC(sub_82F2D9EC);
PPC_FUNC_IMPL(__imp__sub_82F2D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D9F0"))) PPC_WEAK_FUNC(sub_82F2D9F0);
PPC_FUNC_IMPL(__imp__sub_82F2D9F0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14772
	ctx.r4.s64 = ctx.r10.s64 + 14772;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DA14;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DA24"))) PPC_WEAK_FUNC(sub_82F2DA24);
PPC_FUNC_IMPL(__imp__sub_82F2DA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA28"))) PPC_WEAK_FUNC(sub_82F2DA28);
PPC_FUNC_IMPL(__imp__sub_82F2DA28) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14800
	ctx.r4.s64 = ctx.r10.s64 + 14800;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DA4C;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DA5C"))) PPC_WEAK_FUNC(sub_82F2DA5C);
PPC_FUNC_IMPL(__imp__sub_82F2DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA60"))) PPC_WEAK_FUNC(sub_82F2DA60);
PPC_FUNC_IMPL(__imp__sub_82F2DA60) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,14828
	ctx.r4.s64 = ctx.r10.s64 + 14828;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DA88;
	sub_82F28770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DA98"))) PPC_WEAK_FUNC(sub_82F2DA98);
PPC_FUNC_IMPL(__imp__sub_82F2DA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82F2DAA0;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2dbe8
	if (!ctx.cr6.gt) goto loc_82F2DBE8;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r22,29760
	ctx.r22.s64 = 1950351360;
	// addi r29,r6,13636
	ctx.r29.s64 = ctx.r6.s64 + 13636;
	// addi r28,r7,14920
	ctx.r28.s64 = ctx.r7.s64 + 14920;
	// addi r27,r8,14900
	ctx.r27.s64 = ctx.r8.s64 + 14900;
	// addi r26,r9,14884
	ctx.r26.s64 = ctx.r9.s64 + 14884;
	// addi r25,r10,14860
	ctx.r25.s64 = ctx.r10.s64 + 14860;
	// addi r24,r11,12324
	ctx.r24.s64 = ctx.r11.s64 + 12324;
loc_82F2DAFC:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eab788
	ctx.lr = 0x82F2DB14;
	sub_82EAB788(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2DB2C;
	sub_82EAB788(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2DB44;
	sub_82EAB788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DB4C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2dbec
	if (ctx.cr0.lt) goto loc_82F2DBEC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DB64;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2dbec
	if (ctx.cr0.lt) goto loc_82F2DBEC;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82f2dbfc
	if (ctx.cr6.gt) goto loc_82F2DBFC;
	// beq cr6,0x82f2dbf4
	if (ctx.cr6.eq) goto loc_82F2DBF4;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f2dc20
	if (ctx.cr6.eq) goto loc_82F2DC20;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f2dc28
	if (ctx.cr6.eq) goto loc_82F2DC28;
	// lis r11,29616
	ctx.r11.s64 = 1940914176;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f2dbf4
	if (ctx.cr6.eq) goto loc_82F2DBF4;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f2dc30
	if (!ctx.cr6.eq) goto loc_82F2DC30;
loc_82F2DBA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82F2DBAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DBB4;
	sub_82F28770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82f2dbec
	if (ctx.cr6.lt) goto loc_82F2DBEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DBD0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2dbec
	if (ctx.cr0.lt) goto loc_82F2DBEC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2dafc
	if (ctx.cr6.lt) goto loc_82F2DAFC;
loc_82F2DBE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2DBEC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82F2DBF4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82f2dbac
	goto loc_82F2DBAC;
loc_82F2DBFC:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f2dba8
	if (ctx.cr6.eq) goto loc_82F2DBA8;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f2dc28
	if (ctx.cr6.eq) goto loc_82F2DC28;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f2dc30
	if (!ctx.cr6.eq) goto loc_82F2DC30;
loc_82F2DC20:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x82f2dbac
	goto loc_82F2DBAC;
loc_82F2DC28:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82f2dbac
	goto loc_82F2DBAC;
loc_82F2DC30:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f2dbec
	goto loc_82F2DBEC;
}

__attribute__((alias("__imp__sub_82F2DC3C"))) PPC_WEAK_FUNC(sub_82F2DC3C);
PPC_FUNC_IMPL(__imp__sub_82F2DC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DC40"))) PPC_WEAK_FUNC(sub_82F2DC40);
PPC_FUNC_IMPL(__imp__sub_82F2DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F2DC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DC5C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2dc7c
	if (ctx.cr0.lt) goto loc_82F2DC7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,14936
	ctx.r4.s64 = ctx.r11.s64 + 14936;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DC7C;
	sub_82F28770(ctx, base);
loc_82F2DC7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DC84"))) PPC_WEAK_FUNC(sub_82F2DC84);
PPC_FUNC_IMPL(__imp__sub_82F2DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DC88"))) PPC_WEAK_FUNC(sub_82F2DC88);
PPC_FUNC_IMPL(__imp__sub_82F2DC88) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14984
	ctx.r4.s64 = ctx.r11.s64 + 14984;
	// bl 0x82f28770
	ctx.lr = 0x82F2DCA0;
	sub_82F28770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DCB0"))) PPC_WEAK_FUNC(sub_82F2DCB0);
PPC_FUNC_IMPL(__imp__sub_82F2DCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F2DCB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,1816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r27,r11,12312
	ctx.r27.s64 = ctx.r11.s64 + 12312;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f2dd50
	if (!ctx.cr6.gt) goto loc_82F2DD50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,15056
	ctx.r29.s64 = ctx.r11.s64 + 15056;
loc_82F2DCE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DCF0;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ddf0
	if (ctx.cr0.lt) goto loc_82F2DDF0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2DD10;
	sub_82EAB788(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2DD24;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DD38;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ddf0
	if (ctx.cr0.lt) goto loc_82F2DDF0;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2dce8
	if (ctx.cr6.lt) goto loc_82F2DCE8;
loc_82F2DD50:
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2ddec
	if (!ctx.cr6.gt) goto loc_82F2DDEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,15020
	ctx.r29.s64 = ctx.r11.s64 + 15020;
loc_82F2DD68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DD70;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ddf0
	if (ctx.cr0.lt) goto loc_82F2DDF0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eab788
	ctx.lr = 0x82F2DD90;
	sub_82EAB788(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eab788
	ctx.lr = 0x82F2DDA8;
	sub_82EAB788(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2DDBC;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DDD4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ddf0
	if (ctx.cr0.lt) goto loc_82F2DDF0;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2dd68
	if (ctx.cr6.lt) goto loc_82F2DD68;
loc_82F2DDEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2DDF0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DDF8"))) PPC_WEAK_FUNC(sub_82F2DDF8);
PPC_FUNC_IMPL(__imp__sub_82F2DDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F2DE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DE10;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15268
	ctx.r4.s64 = ctx.r11.s64 + 15268;
	// bl 0x82f28770
	ctx.lr = 0x82F2DE28;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DE38;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15252
	ctx.r4.s64 = ctx.r11.s64 + 15252;
	// bl 0x82f28770
	ctx.lr = 0x82F2DE50;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DE60;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15240
	ctx.r4.s64 = ctx.r11.s64 + 15240;
	// bl 0x82f28770
	ctx.lr = 0x82F2DE78;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DE88;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// addi r4,r11,15196
	ctx.r4.s64 = ctx.r11.s64 + 15196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2DEA4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DEB4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12452
	ctx.r4.s64 = ctx.r11.s64 + 12452;
	// bl 0x82f28770
	ctx.lr = 0x82F2DECC;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2DEE8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15176
	ctx.r4.s64 = ctx.r11.s64 + 15176;
	// bl 0x82f28770
	ctx.lr = 0x82F2DF00;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DF10;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15156
	ctx.r4.s64 = ctx.r11.s64 + 15156;
	// bl 0x82f28770
	ctx.lr = 0x82F2DF28;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DF38;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15132
	ctx.r4.s64 = ctx.r11.s64 + 15132;
	// bl 0x82f28770
	ctx.lr = 0x82F2DF50;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DF60;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15112
	ctx.r4.s64 = ctx.r11.s64 + 15112;
	// bl 0x82f28770
	ctx.lr = 0x82F2DF78;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2DF88;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15084
	ctx.r4.s64 = ctx.r11.s64 + 15084;
	// bl 0x82f28770
	ctx.lr = 0x82F2DFA0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48d68
	ctx.lr = 0x82F2DFB4;
	sub_82F48D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2DFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,12488
	ctx.r4.s64 = ctx.r10.s64 + 12488;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28770
	ctx.lr = 0x82F2DFF4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e068
	if (ctx.cr0.lt) goto loc_82F2E068;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f2e020
	if (ctx.cr6.eq) goto loc_82F2E020;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82F2E020:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// bl 0x82ee3870
	ctx.lr = 0x82F2E02C;
	sub_82EE3870(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f2e064
	if (ctx.cr0.lt) goto loc_82F2E064;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,1536(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r31,1532(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F2E05C;
	sub_82CB1160(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F2E064:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F2E068:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E070"))) PPC_WEAK_FUNC(sub_82F2E070);
PPC_FUNC_IMPL(__imp__sub_82F2E070) {
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
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2E094;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e0b8
	if (ctx.cr0.lt) goto loc_82F2E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12492
	ctx.r4.s64 = ctx.r11.s64 + 12492;
	// bl 0x82f28770
	ctx.lr = 0x82F2E0AC;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e0b8
	if (ctx.cr0.lt) goto loc_82F2E0B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2E0B8:
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

__attribute__((alias("__imp__sub_82F2E0CC"))) PPC_WEAK_FUNC(sub_82F2E0CC);
PPC_FUNC_IMPL(__imp__sub_82F2E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E0D0"))) PPC_WEAK_FUNC(sub_82F2E0D0);
PPC_FUNC_IMPL(__imp__sub_82F2E0D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x82f28770
	ctx.lr = 0x82F2E0F0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e15c
	if (ctx.cr0.lt) goto loc_82F2E15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E100;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e15c
	if (ctx.cr0.lt) goto loc_82F2E15C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15296
	ctx.r4.s64 = ctx.r11.s64 + 15296;
	// bl 0x82f28770
	ctx.lr = 0x82F2E11C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e15c
	if (ctx.cr0.lt) goto loc_82F2E15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E12C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e15c
	if (ctx.cr0.lt) goto loc_82F2E15C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12452
	ctx.r4.s64 = ctx.r11.s64 + 12452;
	// bl 0x82f28770
	ctx.lr = 0x82F2E144;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e15c
	if (ctx.cr0.lt) goto loc_82F2E15C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_82F2E15C:
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

__attribute__((alias("__imp__sub_82F2E170"))) PPC_WEAK_FUNC(sub_82F2E170);
PPC_FUNC_IMPL(__imp__sub_82F2E170) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E188;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e1e4
	if (ctx.cr0.lt) goto loc_82F2E1E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15368
	ctx.r4.s64 = ctx.r11.s64 + 15368;
	// bl 0x82f28770
	ctx.lr = 0x82F2E1A4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e1e4
	if (ctx.cr0.lt) goto loc_82F2E1E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E1B4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e1e4
	if (ctx.cr0.lt) goto loc_82F2E1E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12452
	ctx.r4.s64 = ctx.r11.s64 + 12452;
	// bl 0x82f28770
	ctx.lr = 0x82F2E1CC;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e1e4
	if (ctx.cr0.lt) goto loc_82F2E1E4;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_82F2E1E4:
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

__attribute__((alias("__imp__sub_82F2E1F8"))) PPC_WEAK_FUNC(sub_82F2E1F8);
PPC_FUNC_IMPL(__imp__sub_82F2E1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F2E200;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f2e340
	if (ctx.cr6.eq) goto loc_82F2E340;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
loc_82F2E22C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f2e330
	if (ctx.cr6.eq) goto loc_82F2E330;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// bgt cr6,0x82f2e450
	if (ctx.cr6.gt) goto loc_82F2E450;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,11024
	ctx.r12.s64 = ctx.r12.s64 + 11024;
	// lbzx r0,r12,r30
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r30.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// addi r12,r12,-7520
	ctx.r12.s64 = ctx.r12.s64 + -7520;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82F2E448;
	case 1:
		goto loc_82F2E2A0;
	case 2:
		goto loc_82F2E2A8;
	case 3:
		goto loc_82F2E2B0;
	case 4:
		goto loc_82F2E2B8;
	case 5:
		goto loc_82F2E2C0;
	case 6:
		goto loc_82F2E2C8;
	case 7:
		goto loc_82F2E2D0;
	case 8:
		goto loc_82F2E2D8;
	case 9:
		goto loc_82F2E2E0;
	case 10:
		goto loc_82F2E2E8;
	case 11:
		goto loc_82F2E2F0;
	case 12:
		goto loc_82F2E2F8;
	case 13:
		goto loc_82F2E300;
	case 14:
		goto loc_82F2E308;
	case 15:
		goto loc_82F2E450;
	case 16:
		goto loc_82F2E450;
	case 17:
		goto loc_82F2E310;
	case 18:
		goto loc_82F2E310;
	default:
		__builtin_unreachable();
	}
loc_82F2E2A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2B8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2C0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2C8:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2D0:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2D8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2E0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2E8:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2F0:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E2F8:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E300:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E308:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82f2e314
	goto loc_82F2E314;
loc_82F2E310:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82F2E314:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f2e328
	if (ctx.cr6.lt) goto loc_82F2E328;
	// bne cr6,0x82f2e330
	if (!ctx.cr6.eq) goto loc_82F2E330;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82f2e330
	if (!ctx.cr6.lt) goto loc_82F2E330;
loc_82F2E328:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82F2E330:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82f2e22c
	if (ctx.cr6.lt) goto loc_82F2E22C;
loc_82F2E340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E348;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,15724
	ctx.r5.s64 = ctx.r11.s64 + 15724;
	// addi r4,r10,15660
	ctx.r4.s64 = ctx.r10.s64 + 15660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2E368;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E378;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12452
	ctx.r4.s64 = ctx.r11.s64 + 12452;
	// bl 0x82f28770
	ctx.lr = 0x82F2E390;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2E3AC;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15584
	ctx.r4.s64 = ctx.r11.s64 + 15584;
	// bl 0x82f28770
	ctx.lr = 0x82F2E3C4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E3D4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15464
	ctx.r4.s64 = ctx.r11.s64 + 15464;
	// bl 0x82f28770
	ctx.lr = 0x82F2E3F0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2E40C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12492
	ctx.r4.s64 = ctx.r11.s64 + 12492;
	// bl 0x82f28770
	ctx.lr = 0x82F2E424;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e440
	if (ctx.cr0.lt) goto loc_82F2E440;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F2E440:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82F2E448:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f2e440
	goto loc_82F2E440;
loc_82F2E450:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f2e440
	goto loc_82F2E440;
}

__attribute__((alias("__imp__sub_82F2E45C"))) PPC_WEAK_FUNC(sub_82F2E45C);
PPC_FUNC_IMPL(__imp__sub_82F2E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E460"))) PPC_WEAK_FUNC(sub_82F2E460);
PPC_FUNC_IMPL(__imp__sub_82F2E460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F2E468;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f2e628
	if (ctx.cr6.eq) goto loc_82F2E628;
	// bl 0x82f28840
	ctx.lr = 0x82F2E480;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15968
	ctx.r4.s64 = ctx.r11.s64 + 15968;
	// bl 0x82f28770
	ctx.lr = 0x82F2E498;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E4A8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,12452
	ctx.r30.s64 = ctx.r11.s64 + 12452;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2E4C4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2E4E0;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15896
	ctx.r4.s64 = ctx.r11.s64 + 15896;
	// bl 0x82f28770
	ctx.lr = 0x82F2E4F8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E508;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2E51C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,1676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// ble cr6,0x82f2e5c0
	if (!ctx.cr6.gt) goto loc_82F2E5C0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,1548
	ctx.r30.s64 = ctx.r31.s64 + 1548;
	// addi r29,r10,15808
	ctx.r29.s64 = ctx.r10.s64 + 15808;
	// addi r28,r11,15744
	ctx.r28.s64 = ctx.r11.s64 + 15744;
loc_82F2E554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E55C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f28770
	ctx.lr = 0x82F2E578;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E588;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82f28770
	ctx.lr = 0x82F2E5A4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2e554
	if (ctx.cr6.lt) goto loc_82F2E554;
loc_82F2E5C0:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2E5D4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12488
	ctx.r4.s64 = ctx.r11.s64 + 12488;
	// bl 0x82f28770
	ctx.lr = 0x82F2E5EC;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2E608;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12492
	ctx.r4.s64 = ctx.r11.s64 + 12492;
	// bl 0x82f28770
	ctx.lr = 0x82F2E620;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e62c
	if (ctx.cr0.lt) goto loc_82F2E62C;
loc_82F2E628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2E62C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E634"))) PPC_WEAK_FUNC(sub_82F2E634);
PPC_FUNC_IMPL(__imp__sub_82F2E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E638"))) PPC_WEAK_FUNC(sub_82F2E638);
PPC_FUNC_IMPL(__imp__sub_82F2E638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F2E640;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F2E668;
	sub_82F289E8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2E680;
	sub_82EAB788(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r11,15996
	ctx.r28.s64 = ctx.r11.s64 + 15996;
loc_82F2E690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2E698;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e6e0
	if (ctx.cr0.lt) goto loc_82F2E6E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2E6B8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2e6e0
	if (ctx.cr0.lt) goto loc_82F2E6E0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82f2e690
	if (ctx.cr6.lt) goto loc_82F2E690;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f45968
	ctx.lr = 0x82F2E6E0;
	sub_82F45968(ctx, base);
loc_82F2E6E0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E6E8"))) PPC_WEAK_FUNC(sub_82F2E6E8);
PPC_FUNC_IMPL(__imp__sub_82F2E6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F2E6F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f2ebbc
	if (!ctx.cr6.eq) goto loc_82F2EBBC;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bgt cr6,0x82f2edc0
	if (ctx.cr6.gt) goto loc_82F2EDC0;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,11048
	ctx.r12.s64 = ctx.r12.s64 + 11048;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// addi r12,r12,-6284
	ctx.r12.s64 = ctx.r12.s64 + -6284;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82F2EDB8;
	case 1:
		goto loc_82F2E774;
	case 2:
		goto loc_82F2E77C;
	case 3:
		goto loc_82F2E784;
	case 4:
		goto loc_82F2E78C;
	case 5:
		goto loc_82F2E794;
	case 6:
		goto loc_82F2E79C;
	case 7:
		goto loc_82F2E7A4;
	case 8:
		goto loc_82F2E7AC;
	case 9:
		goto loc_82F2E7B4;
	case 10:
		goto loc_82F2E7BC;
	case 11:
		goto loc_82F2E7C4;
	case 12:
		goto loc_82F2E7CC;
	case 13:
		goto loc_82F2E7D4;
	case 14:
		goto loc_82F2E7DC;
	case 15:
		goto loc_82F2EDC0;
	case 16:
		goto loc_82F2EDC0;
	case 17:
		goto loc_82F2E7E4;
	case 18:
		goto loc_82F2E7EC;
	default:
		__builtin_unreachable();
	}
loc_82F2E774:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E77C:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E784:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E78C:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E794:
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E79C:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7A4:
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7AC:
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7B4:
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7BC:
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7C4:
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7CC:
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7D4:
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7DC:
	// li r30,13
	ctx.r30.s64 = 13;
	// b 0x82f2e7f0
	goto loc_82F2E7F0;
loc_82F2E7E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82F2E7EC:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
loc_82F2E7F0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f2e84c
	if (ctx.cr0.eq) goto loc_82F2E84C;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,348(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2E840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f2e874
	if (!ctx.cr0.lt) goto loc_82F2E874;
	// b 0x82f2ebc0
	goto loc_82F2EBC0;
loc_82F2E84C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82F2E874:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// ble cr6,0x82f2e908
	if (!ctx.cr6.gt) goto loc_82F2E908;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
loc_82F2E8BC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bne cr6,0x82f2e8f8
	if (!ctx.cr6.eq) goto loc_82F2E8F8;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f2e8f8
	if (!ctx.cr6.eq) goto loc_82F2E8F8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
loc_82F2E8F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f2e8bc
	if (ctx.cr6.lt) goto loc_82F2E8BC;
loc_82F2E908:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82F2E914:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f2e92c
	if (ctx.cr6.eq) goto loc_82F2E92C;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82F2E92C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f2e914
	if (!ctx.cr0.eq) goto loc_82F2E914;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2E97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r30,1
	ctx.r11.u64 = ctx.r30.u32 & 0x7FFFFFFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bne cr6,0x82f2e990
	if (!ctx.cr6.eq) goto loc_82F2E990;
	// oris r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 983040;
loc_82F2E990:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne 0x82f2e9c4
	if (!ctx.cr0.eq) goto loc_82F2E9C4;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f2e9bc
	if (!ctx.cr0.eq) goto loc_82F2E9BC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f2e9c4
	if (ctx.cr0.eq) goto loc_82F2E9C4;
loc_82F2E9BC:
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82F2E9C4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r9,-31908
	ctx.r9.s64 = -2091122688;
	// rlwimi r10,r11,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// rlwinm r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r9,r9,23080
	ctx.r9.s64 = ctx.r9.s64 + 23080;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r5,r8,16340
	ctx.r5.s64 = ctx.r8.s64 + 16340;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r10,26,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7C;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82eab788
	ctx.lr = 0x82F2EA14;
	sub_82EAB788(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2ebc8
	if (ctx.cr0.eq) goto loc_82F2EBC8;
	// beq cr6,0x82f2ebcc
	if (ctx.cr6.eq) goto loc_82F2EBCC;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r26,1548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1548, ctx.r26.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// bl 0x82f28840
	ctx.lr = 0x82F2EA5C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,16280
	ctx.r4.s64 = ctx.r11.s64 + 16280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2EA7C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2EA8C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2EAAC;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f2eadc
	if (!ctx.cr6.eq) goto loc_82F2EADC;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2EAD8;
	sub_82F1CE30(ctx, base);
	// b 0x82f2eafc
	goto loc_82F2EAFC;
loc_82F2EADC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,16180
	ctx.r5.s64 = ctx.r11.s64 + 16180;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2EAE8;
	sub_82F1CE30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82f28b30
	ctx.lr = 0x82F2EAF4;
	sub_82F28B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
loc_82F2EAFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r10,16164
	ctx.r4.s64 = ctx.r10.s64 + 16164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2EB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x82f28770
	ctx.lr = 0x82F2EB34;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f2ebbc
	if (ctx.cr6.eq) goto loc_82F2EBBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2EB54;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,12324
	ctx.r4.s64 = ctx.r11.s64 + 12324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2EB70;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r6,r10,12332
	ctx.r6.s64 = ctx.r10.s64 + 12332;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2EB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12248
	ctx.r4.s64 = ctx.r11.s64 + 12248;
loc_82F2EBAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2EBB4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
loc_82F2EBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2EBC0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82F2EBC8:
	// bne cr6,0x82f2ebbc
	if (!ctx.cr6.eq) goto loc_82F2EBBC;
loc_82F2EBCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2EBD4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,16104
	ctx.r4.s64 = ctx.r11.s64 + 16104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2EBF4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2EC04;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,16016
	ctx.r4.s64 = ctx.r11.s64 + 16016;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2EC24;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// rlwinm r10,r9,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f2ece8
	if (ctx.cr6.eq) goto loc_82F2ECE8;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82F2EC4C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82f2ec78
	goto loc_82F2EC78;
loc_82F2EC5C:
	// rlwinm. r10,r9,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f2ec80
	if (!ctx.cr0.eq) goto loc_82F2EC80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82F2EC78:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82f2ec5c
	if (ctx.cr6.lt) goto loc_82F2EC5C;
loc_82F2EC80:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f2ec4c
	if (!ctx.cr0.eq) goto loc_82F2EC4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
loc_82F2EC94:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x82f2eca8
	if (ctx.cr6.lt) goto loc_82F2ECA8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82F2ECA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82f2ec94
	if (!ctx.cr6.gt) goto loc_82F2EC94;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r27,136(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bne cr6,0x82f2ecfc
	if (!ctx.cr6.eq) goto loc_82F2ECFC;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82f2ecfc
	if (!ctx.cr6.eq) goto loc_82F2ECFC;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x82f2ecfc
	if (!ctx.cr6.eq) goto loc_82F2ECFC;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bne cr6,0x82f2ecfc
	if (!ctx.cr6.eq) goto loc_82F2ECFC;
loc_82F2ECE8:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2ECF8;
	sub_82F1CE30(ctx, base);
	// b 0x82f2ed84
	goto loc_82F2ED84;
loc_82F2ECFC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,16180
	ctx.r5.s64 = ctx.r11.s64 + 16180;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2ED10;
	sub_82F1CE30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2ED18;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,12324
	ctx.r4.s64 = ctx.r11.s64 + 12324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2ED34;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2ED64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12248
	ctx.r4.s64 = ctx.r11.s64 + 12248;
	// bl 0x82f28770
	ctx.lr = 0x82F2ED7C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
loc_82F2ED84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r10,16164
	ctx.r4.s64 = ctx.r10.s64 + 16164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2EDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2ebc0
	if (ctx.cr0.lt) goto loc_82F2EBC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// b 0x82f2ebac
	goto loc_82F2EBAC;
loc_82F2EDB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f2ebc0
	goto loc_82F2EBC0;
loc_82F2EDC0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f2ebc0
	goto loc_82F2EBC0;
}

__attribute__((alias("__imp__sub_82F2EDCC"))) PPC_WEAK_FUNC(sub_82F2EDCC);
PPC_FUNC_IMPL(__imp__sub_82F2EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EDD0"))) PPC_WEAK_FUNC(sub_82F2EDD0);
PPC_FUNC_IMPL(__imp__sub_82F2EDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F2EDD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// rlwinm. r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2eed0
	if (ctx.cr0.eq) goto loc_82F2EED0;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r11,23080
	ctx.r30.s64 = ctx.r11.s64 + 23080;
	// addi r5,r10,16424
	ctx.r5.s64 = ctx.r10.s64 + 16424;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82eab788
	ctx.lr = 0x82F2EE1C;
	sub_82EAB788(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82f2ee98
	if (!ctx.cr6.eq) goto loc_82F2EE98;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// rlwinm r31,r11,24,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// addi r5,r8,16404
	ctx.r5.s64 = ctx.r8.s64 + 16404;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82eab788
	ctx.lr = 0x82F2EE60;
	sub_82EAB788(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x82f2ee80
	if (!ctx.cr6.gt) goto loc_82F2EE80;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// ble cr6,0x82f2eee8
	if (!ctx.cr6.gt) goto loc_82F2EEE8;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// ble cr6,0x82f2ee80
	if (!ctx.cr6.gt) goto loc_82F2EE80;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bne cr6,0x82f2eee8
	if (!ctx.cr6.eq) goto loc_82F2EEE8;
loc_82F2EE80:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,16396
	ctx.r5.s64 = ctx.r11.s64 + 16396;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f1e838
	ctx.lr = 0x82F2EE94;
	sub_82F1E838(ctx, base);
	// b 0x82f2eee8
	goto loc_82F2EEE8;
loc_82F2EE98:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// rlwimi r8,r31,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r5,r7,16364
	ctx.r5.s64 = ctx.r7.s64 + 16364;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r8,26,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x7C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82eab788
	ctx.lr = 0x82F2EECC;
	sub_82EAB788(ctx, base);
	// b 0x82f2eee8
	goto loc_82F2EEE8;
loc_82F2EED0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F2EEE8;
	sub_82F289E8(ctx, base);
loc_82F2EEE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EEF0"))) PPC_WEAK_FUNC(sub_82F2EEF0);
PPC_FUNC_IMPL(__imp__sub_82F2EEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F2EEF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82f2edd0
	ctx.lr = 0x82F2EF20;
	sub_82F2EDD0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eab788
	ctx.lr = 0x82F2EF38;
	sub_82EAB788(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EF40"))) PPC_WEAK_FUNC(sub_82F2EF40);
PPC_FUNC_IMPL(__imp__sub_82F2EF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F2EF48;
	__savegprlr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r4,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r4.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r9,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r9.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r10,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r20,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r20.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// beq cr6,0x82f2f01c
	if (ctx.cr6.eq) goto loc_82F2F01C;
loc_82F2EF88:
	// lwz r8,788(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x82f2ef98
	if (ctx.cr6.eq) goto loc_82F2EF98;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
loc_82F2EF98:
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// li r7,32
	ctx.r7.s64 = 32;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r5,r31,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r4,r11,0,8,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// bl 0x82f2edd0
	ctx.lr = 0x82F2EFC4;
	sub_82F2EDD0(ctx, base);
	// lwzx r11,r31,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x82f2f010
	if (!ctx.cr6.eq) goto loc_82F2F010;
	// lwzx r11,r31,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f2f010
	if (!ctx.cr0.eq) goto loc_82F2F010;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82eab788
	ctx.lr = 0x82F2F000;
	sub_82EAB788(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F010;
	sub_82F1CE30(ctx, base);
loc_82F2F010:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82f2ef88
	if (ctx.cr6.lt) goto loc_82F2EF88;
loc_82F2F01C:
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// stw r17,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r17,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
	// addi r30,r15,-1
	ctx.r30.s64 = ctx.r15.s64 + -1;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// lis r18,228
	ctx.r18.s64 = 14942208;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
loc_82F2F040:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f2f158
	if (ctx.cr6.eq) goto loc_82F2F158;
	// addi r27,r1,200
	ctx.r27.s64 = ctx.r1.s64 + 200;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwzx r25,r29,r27
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// lwzx r24,r29,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// subf r26,r16,r20
	ctx.r26.s64 = ctx.r20.s64 - ctx.r16.s64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82F2F074:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82f2f088
	if (!ctx.cr6.eq) goto loc_82F2F088;
	// lwzx r11,r7,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82f2f09c
	if (!ctx.cr6.eq) goto loc_82F2F09C;
loc_82F2F088:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82f2f130
	if (!ctx.cr6.eq) goto loc_82F2F130;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f130
	if (ctx.cr0.eq) goto loc_82F2F130;
loc_82F2F09C:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82f2f130
	if (!ctx.cr6.lt) goto loc_82F2F130;
	// addi r4,r6,32
	ctx.r4.s64 = ctx.r6.s64 + 32;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// subf r31,r5,r15
	ctx.r31.s64 = ctx.r15.s64 - ctx.r5.s64;
loc_82F2F0B0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82f2f0c8
	if (!ctx.cr6.eq) goto loc_82F2F0C8;
	// lwzx r11,r3,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r20.u32);
	// lwzx r10,r26,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2f0e4
	if (ctx.cr6.eq) goto loc_82F2F0E4;
loc_82F2F0C8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82f2f11c
	if (!ctx.cr6.eq) goto loc_82F2F11C;
	// lwzx r11,r3,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r16.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f2f11c
	if (!ctx.cr0.eq) goto loc_82F2F11C;
loc_82F2F0E4:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82F2F0EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r18,0(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r18,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r18.s64;
	// beq 0x82f2f110
	if (ctx.cr0.eq) goto loc_82F2F110;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f2f0ec
	if (ctx.cr6.eq) goto loc_82F2F0EC;
loc_82F2F110:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f2f11c
	if (!ctx.cr0.eq) goto loc_82F2F11C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82F2F11C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// bne 0x82f2f0b0
	if (!ctx.cr0.eq) goto loc_82F2F0B0;
	// lis r18,228
	ctx.r18.s64 = 14942208;
loc_82F2F130:
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82f2f13c
	if (!ctx.cr6.gt) goto loc_82F2F13C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_82F2F13C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x82f2f074
	if (!ctx.cr0.eq) goto loc_82F2F074;
	// stwx r25,r29,r27
	PPC_STORE_U32(ctx.r29.u32 + ctx.r27.u32, ctx.r25.u32);
loc_82F2F158:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82f2f040
	if (ctx.cr6.lt) goto loc_82F2F040;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f2f17c
	if (!ctx.cr6.gt) goto loc_82F2F17C;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
loc_82F2F17C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// addi r29,r11,12248
	ctx.r29.s64 = ctx.r11.s64 + 12248;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// beq cr6,0x82f2f2cc
	if (ctx.cr6.eq) goto loc_82F2F2CC;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_82F2F198:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f2f1cc
	if (ctx.cr6.eq) goto loc_82F2F1CC;
	// lis r8,3072
	ctx.r8.s64 = 201326592;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f2f1cc
	if (ctx.cr6.eq) goto loc_82F2F1CC;
	// lis r8,2816
	ctx.r8.s64 = 184549376;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f2f1d0
	if (!ctx.cr6.eq) goto loc_82F2F1D0;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// b 0x82f2f1d0
	goto loc_82F2F1D0;
loc_82F2F1CC:
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_82F2F1D0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f2f198
	if (!ctx.cr0.eq) goto loc_82F2F198;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r11,12580
	ctx.r31.s64 = ctx.r11.s64 + 12580;
	// beq cr6,0x82f2f258
	if (ctx.cr6.eq) goto loc_82F2F258;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2F1F4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,12508
	ctx.r4.s64 = ctx.r11.s64 + 12508;
	// bl 0x82f28770
	ctx.lr = 0x82F2F20C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2F23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2F250;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
loc_82F2F258:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82f2f2cc
	if (ctx.cr6.eq) goto loc_82F2F2CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2F268;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,12548
	ctx.r4.s64 = ctx.r11.s64 + 12548;
	// bl 0x82f28770
	ctx.lr = 0x82F2F280;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2F2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2F2C4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
loc_82F2F2CC:
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// stw r17,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r17.u32);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r17,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// addi r25,r1,192
	ctx.r25.s64 = ctx.r1.s64 + 192;
	// stw r19,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// stw r24,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
loc_82F2F2F0:
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r17,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// beq cr6,0x82f2f404
	if (ctx.cr6.eq) goto loc_82F2F404;
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// subf r27,r16,r20
	ctx.r27.s64 = ctx.r20.s64 - ctx.r16.s64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82F2F324:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82f2f338
	if (!ctx.cr6.eq) goto loc_82F2F338;
	// lwzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82f2f34c
	if (!ctx.cr6.eq) goto loc_82F2F34C;
loc_82F2F338:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82f2f3ec
	if (!ctx.cr6.eq) goto loc_82F2F3EC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f3ec
	if (ctx.cr0.eq) goto loc_82F2F3EC;
loc_82F2F34C:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82f2f3ec
	if (!ctx.cr6.lt) goto loc_82F2F3EC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// subf r29,r16,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r16.s64;
	// subf r31,r5,r15
	ctx.r31.s64 = ctx.r15.s64 - ctx.r5.s64;
loc_82F2F368:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82f2f380
	if (!ctx.cr6.eq) goto loc_82F2F380;
	// lwzx r10,r4,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r20.u32);
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f2f39c
	if (ctx.cr6.eq) goto loc_82F2F39C;
loc_82F2F380:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82f2f3dc
	if (!ctx.cr6.eq) goto loc_82F2F3DC;
	// lwzx r10,r4,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f2f3dc
	if (!ctx.cr0.eq) goto loc_82F2F3DC;
loc_82F2F39C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82F2F3A4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r23,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r23.s64;
	// beq 0x82f2f3c8
	if (ctx.cr0.eq) goto loc_82F2F3C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f2f3a4
	if (ctx.cr6.eq) goto loc_82F2F3A4;
loc_82F2F3C8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f2f3dc
	if (!ctx.cr0.eq) goto loc_82F2F3DC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stwx r19,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r19.u32);
	// stwx r19,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r19.u32);
loc_82F2F3DC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f2f368
	if (!ctx.cr0.eq) goto loc_82F2F368;
loc_82F2F3EC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x82f2f324
	if (!ctx.cr0.eq) goto loc_82F2F324;
loc_82F2F404:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82f2f478
	if (ctx.cr6.eq) goto loc_82F2F478;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// subf r5,r16,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r16.s64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r20
	ctx.r7.s64 = ctx.r20.s64 - ctx.r16.s64;
	// subf r10,r16,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r16.s64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
loc_82F2F42C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82f2f440
	if (!ctx.cr6.eq) goto loc_82F2F440;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82f2f454
	if (!ctx.cr6.eq) goto loc_82F2F454;
loc_82F2F440:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82f2f46c
	if (!ctx.cr6.eq) goto loc_82F2F46C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f2f46c
	if (ctx.cr0.eq) goto loc_82F2F46C;
loc_82F2F454:
	// lwzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82f2f46c
	if (!ctx.cr6.eq) goto loc_82F2F46C;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82F2F46C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f2f42c
	if (!ctx.cr0.eq) goto loc_82F2F42C;
loc_82F2F478:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82f2f2f0
	if (!ctx.cr0.eq) goto loc_82F2F2F0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f2f504
	if (ctx.cr6.eq) goto loc_82F2F504;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// subfic r31,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r31.s64 = 4 - ctx.r11.s64;
loc_82F2F49C:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82f2f4f4
	if (!ctx.cr6.lt) goto loc_82F2F4F4;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// subf r3,r4,r15
	ctx.r3.s64 = ctx.r15.s64 - ctx.r4.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
loc_82F2F4B4:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82f2f4e8
	if (!ctx.cr6.lt) goto loc_82F2F4E8;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r6,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
loc_82F2F4E8:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f2f4b4
	if (!ctx.cr0.eq) goto loc_82F2F4B4;
loc_82F2F4F4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f2f49c
	if (!ctx.cr0.eq) goto loc_82F2F49C;
loc_82F2F504:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82f2f51c
	if (ctx.cr6.eq) goto loc_82F2F51C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r5,r15,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb15e8
	ctx.lr = 0x82F2F51C;
	sub_82CB15E8(ctx, base);
loc_82F2F51C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r18,r1,192
	ctx.r18.s64 = ctx.r1.s64 + 192;
	// addi r19,r11,12540
	ctx.r19.s64 = ctx.r11.s64 + 12540;
	// addi r22,r10,12500
	ctx.r22.s64 = ctx.r10.s64 + 12500;
	// addi r23,r9,12324
	ctx.r23.s64 = ctx.r9.s64 + 12324;
	// addi r21,r8,16444
	ctx.r21.s64 = ctx.r8.s64 + 16444;
	// addi r20,r7,16432
	ctx.r20.s64 = ctx.r7.s64 + 16432;
loc_82F2F548:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82f2f964
	if (ctx.cr6.eq) goto loc_82F2F964;
	// lwz r24,0(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r26,r1,208
	ctx.r26.s64 = ctx.r1.s64 + 208;
loc_82F2F55C:
	// lwz r29,732(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82f2f580
	if (!ctx.cr6.eq) goto loc_82F2F580;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2f59c
	if (ctx.cr6.eq) goto loc_82F2F59C;
loc_82F2F580:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82f2f5bc
	if (!ctx.cr6.eq) goto loc_82F2F5BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f2f5bc
	if (!ctx.cr0.eq) goto loc_82F2F5BC;
loc_82F2F59C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F5B8;
	sub_82F1CE30(ctx, base);
	// b 0x82f2f90c
	goto loc_82F2F90C;
loc_82F2F5BC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f2f6d4
	if (ctx.cr6.eq) goto loc_82F2F6D4;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
loc_82F2F5CC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82f2f5f4
	if (!ctx.cr6.eq) goto loc_82F2F5F4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f2f620
	if (ctx.cr6.eq) goto loc_82F2F620;
loc_82F2F5F4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82f2f664
	if (!ctx.cr6.eq) goto loc_82F2F664;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r16
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// lwzx r8,r8,r16
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f2f664
	if (!ctx.cr0.eq) goto loc_82F2F664;
loc_82F2F620:
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82F2F638:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f2f65c
	if (ctx.cr0.eq) goto loc_82F2F65C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f2f638
	if (ctx.cr6.eq) goto loc_82F2F638;
loc_82F2F65C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f2f678
	if (ctx.cr0.eq) goto loc_82F2F678;
loc_82F2F664:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82f2f5cc
	if (ctx.cr6.lt) goto loc_82F2F5CC;
	// b 0x82f2f6cc
	goto loc_82F2F6CC;
loc_82F2F678:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F6A8;
	sub_82F1CE30(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82F2F6CC:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82f2f90c
	if (ctx.cr6.lt) goto loc_82F2F90C;
loc_82F2F6D4:
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// beq cr6,0x82f2f7b0
	if (ctx.cr6.eq) goto loc_82F2F7B0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82f2f6fc
	if (!ctx.cr6.eq) goto loc_82F2F6FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2f7b0
	if (ctx.cr6.eq) goto loc_82F2F7B0;
loc_82F2F6FC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82f2f718
	if (!ctx.cr6.eq) goto loc_82F2F718;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f7b0
	if (ctx.cr0.eq) goto loc_82F2F7B0;
loc_82F2F718:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82F2F71C:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x82f2f74c
	if (!ctx.cr6.eq) goto loc_82F2F74C;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f750
	if (ctx.cr0.eq) goto loc_82F2F750;
loc_82F2F74C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_82F2F750:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eab788
	ctx.lr = 0x82F2F76C;
	sub_82EAB788(ctx, base);
loc_82F2F76C:
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x82f2f7e0
	if (!ctx.cr6.eq) goto loc_82F2F7E0;
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f2f7e0
	if (!ctx.cr0.eq) goto loc_82F2F7E0;
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f2f7a8
	if (ctx.cr6.eq) goto loc_82F2F7A8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82f2f7e0
	if (!ctx.cr6.eq) goto loc_82F2F7E0;
loc_82F2F7A8:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82f2f7e4
	goto loc_82F2F7E4;
loc_82F2F7B0:
	// lwz r5,700(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f2f71c
	if (ctx.cr6.eq) goto loc_82F2F71C;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F7DC;
	sub_82F1CE30(ctx, base);
	// b 0x82f2f76c
	goto loc_82F2F76C;
loc_82F2F7E0:
	// lwz r27,1816(r14)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1816);
loc_82F2F7E4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f2f90c
	if (ctx.cr6.eq) goto loc_82F2F90C;
loc_82F2F7F0:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2F7F8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82eab788
	ctx.lr = 0x82F2F81C;
	sub_82EAB788(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82eab788
	ctx.lr = 0x82F2F834;
	sub_82EAB788(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2F844;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82f2f890
	if (!ctx.cr6.eq) goto loc_82F2F890;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// rlwinm r8,r11,10,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// rlwinm r7,r11,12,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// rlwinm r6,r11,14,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// rlwinm r5,r11,16,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2F884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// b 0x82f2f8ec
	goto loc_82F2F8EC;
loc_82F2F890:
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f2f8b0
	if (!ctx.cr6.eq) goto loc_82F2F8B0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// b 0x82f2f8d0
	goto loc_82F2F8D0;
loc_82F2F8B0:
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bne cr6,0x82f2f8cc
	if (!ctx.cr6.eq) goto loc_82F2F8CC;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x82f2f8d4
	goto loc_82F2F8D4;
loc_82F2F8CC:
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
loc_82F2F8D0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82F2F8D4:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2F8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82f2f9d8
	if (ctx.cr6.lt) goto loc_82F2F9D8;
loc_82F2F8EC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82f28770
	ctx.lr = 0x82F2F8F8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2f9d8
	if (ctx.cr0.lt) goto loc_82F2F9D8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82f2f7f0
	if (ctx.cr6.lt) goto loc_82F2F7F0;
loc_82F2F90C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82f2f55c
	if (ctx.cr6.lt) goto loc_82F2F55C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82F2F924:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F94C;
	sub_82F1CE30(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x82f2f924
	if (!ctx.cr0.eq) goto loc_82F2F924;
loc_82F2F964:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2, ctx.xer);
	// blt cr6,0x82f2f548
	if (ctx.cr6.lt) goto loc_82F2F548;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r4,748(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82f2f994
	if (ctx.cr6.gt) goto loc_82F2F994;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,740(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F994;
	sub_82F1CE30(ctx, base);
loc_82F2F994:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// ble cr6,0x82f2f9b4
	if (!ctx.cr6.gt) goto loc_82F2F9B4;
	// lwz r4,764(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82f2f9b4
	if (ctx.cr6.gt) goto loc_82F2F9B4;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lwz r3,756(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F9B4;
	sub_82F1CE30(ctx, base);
loc_82F2F9B4:
	// cmplwi cr6,r15,2
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 2, ctx.xer);
	// ble cr6,0x82f2f9d4
	if (!ctx.cr6.gt) goto loc_82F2F9D4;
	// lwz r4,780(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82f2f9d4
	if (ctx.cr6.gt) goto loc_82F2F9D4;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r3,772(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// bl 0x82f1ce30
	ctx.lr = 0x82F2F9D4;
	sub_82F1CE30(ctx, base);
loc_82F2F9D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2F9D8:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F9E0"))) PPC_WEAK_FUNC(sub_82F2F9E0);
PPC_FUNC_IMPL(__imp__sub_82F2F9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82F2F9E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2FA00;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12260
	ctx.r4.s64 = ctx.r11.s64 + 12260;
	// bl 0x82f28770
	ctx.lr = 0x82F2FA18;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,12252
	ctx.r4.s64 = ctx.r10.s64 + 12252;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,12248
	ctx.r24.s64 = ctx.r11.s64 + 12248;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2FA68;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// clrlwi r30,r11,12
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2ef40
	ctx.lr = 0x82F2FB9C;
	sub_82F2EF40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r25,r11,12300
	ctx.r25.s64 = ctx.r11.s64 + 12300;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F2FBBC;
	sub_82F1CE30(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r11,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r8,1816(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r9,12332
	ctx.r28.s64 = ctx.r9.s64 + 12332;
	// addi r27,r10,12324
	ctx.r27.s64 = ctx.r10.s64 + 12324;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r29,r11,12312
	ctx.r29.s64 = ctx.r11.s64 + 12312;
	// ble cr6,0x82f2fc9c
	if (!ctx.cr6.gt) goto loc_82F2FC9C;
loc_82F2FC18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2FC20;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82eab788
	ctx.lr = 0x82F2FC3C;
	sub_82EAB788(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2FC4C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2FC84;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2fc18
	if (ctx.cr6.lt) goto loc_82F2FC18;
loc_82F2FC9C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2fd54
	if (!ctx.cr6.gt) goto loc_82F2FD54;
loc_82F2FCAC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2FCC0;
	sub_82EAB788(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82eab788
	ctx.lr = 0x82F2FCD4;
	sub_82EAB788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2FCDC;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2FCF4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82f2fd1c
	if (ctx.cr6.eq) goto loc_82F2FD1C;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// b 0x82f2fd20
	goto loc_82F2FD20;
loc_82F2FD1C:
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
loc_82F2FD20:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FD28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2FD3C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2fcac
	if (ctx.cr6.lt) goto loc_82F2FCAC;
loc_82F2FD54:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82f2fd7c
	if (ctx.cr6.eq) goto loc_82F2FD7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
loc_82F2FD7C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f2fe20
	if (!ctx.cr6.gt) goto loc_82F2FE20;
loc_82F2FD8C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F2FDA0;
	sub_82EAB788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F2FDA8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2FDC0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82f2fde8
	if (ctx.cr6.eq) goto loc_82F2FDE8;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// b 0x82f2fdec
	goto loc_82F2FDEC;
loc_82F2FDE8:
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
loc_82F2FDEC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F2FE08;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2fe24
	if (ctx.cr0.lt) goto loc_82F2FE24;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2fd8c
	if (ctx.cr6.lt) goto loc_82F2FD8C;
loc_82F2FE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2FE24:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FE2C"))) PPC_WEAK_FUNC(sub_82F2FE2C);
PPC_FUNC_IMPL(__imp__sub_82F2FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FE30"))) PPC_WEAK_FUNC(sub_82F2FE30);
PPC_FUNC_IMPL(__imp__sub_82F2FE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F2FE38;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r26,4336
	ctx.r26.s64 = 284164096;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82f2fff4
	if (ctx.cr6.eq) goto loc_82F2FFF4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2FF30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2FFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2ef40
	ctx.lr = 0x82F2FFEC;
	sub_82F2EF40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
loc_82F2FFF4:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f30020
	if (ctx.cr6.eq) goto loc_82F30020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28b30
	ctx.lr = 0x82F3000C;
	sub_82F28B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f30030
	if (!ctx.cr6.eq) goto loc_82F30030;
loc_82F30020:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f30034
	if (!ctx.cr6.gt) goto loc_82F30034;
loc_82F30030:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F30034:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f30110
	if (!ctx.cr6.eq) goto loc_82F30110;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f3017c
	if (!ctx.cr6.gt) goto loc_82F3017C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r29,r11,12324
	ctx.r29.s64 = ctx.r11.s64 + 12324;
	// addi r28,r10,12300
	ctx.r28.s64 = ctx.r10.s64 + 12300;
loc_82F30068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30070;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f30098
	if (ctx.cr6.eq) goto loc_82F30098;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eab788
	ctx.lr = 0x82F30094;
	sub_82EAB788(ctx, base);
	// b 0x82f300c8
	goto loc_82F300C8;
loc_82F30098:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F300B0;
	sub_82F289E8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eab788
	ctx.lr = 0x82F300C8;
	sub_82EAB788(ctx, base);
loc_82F300C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F300D8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F300F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30068
	if (ctx.cr6.lt) goto loc_82F30068;
	// b 0x82f3017c
	goto loc_82F3017C;
loc_82F30110:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f30130
	if (ctx.cr6.eq) goto loc_82F30130;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,12300
	ctx.r5.s64 = ctx.r11.s64 + 12300;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f1ce30
	ctx.lr = 0x82F3012C;
	sub_82F1CE30(ctx, base);
	// b 0x82f30148
	goto loc_82F30148;
loc_82F30130:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F30148;
	sub_82F289E8(ctx, base);
loc_82F30148:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// rlwinm r4,r11,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F30174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
loc_82F3017C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f301f4
	if (ctx.cr6.eq) goto loc_82F301F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28bd8
	ctx.lr = 0x82F3018C;
	sub_82F28BD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F301AC;
	sub_82F289E8(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f28f18
	ctx.lr = 0x82F301D0;
	sub_82F28F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29050
	ctx.lr = 0x82F301EC;
	sub_82F29050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
loc_82F301F4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x82f28770
	ctx.lr = 0x82F30204;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30214
	if (ctx.cr0.lt) goto loc_82F30214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f46708
	ctx.lr = 0x82F30214;
	sub_82F46708(ctx, base);
loc_82F30214:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3021C"))) PPC_WEAK_FUNC(sub_82F3021C);
PPC_FUNC_IMPL(__imp__sub_82F3021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30220"))) PPC_WEAK_FUNC(sub_82F30220);
PPC_FUNC_IMPL(__imp__sub_82F30220) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30240;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30350
	if (ctx.cr0.lt) goto loc_82F30350;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3027C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30350
	if (ctx.cr0.lt) goto loc_82F30350;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2edd0
	ctx.lr = 0x82F302A0;
	sub_82F2EDD0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F302B8;
	sub_82EAB788(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f302cc
	if (ctx.cr6.eq) goto loc_82F302CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,16480
	ctx.r6.s64 = ctx.r11.s64 + 16480;
	// b 0x82f302d4
	goto loc_82F302D4;
loc_82F302CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,16476
	ctx.r6.s64 = ctx.r11.s64 + 16476;
loc_82F302D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16460
	ctx.r4.s64 = ctx.r11.s64 + 16460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F302E8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30350
	if (ctx.cr0.lt) goto loc_82F30350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F302F8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30350
	if (ctx.cr0.lt) goto loc_82F30350;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12452
	ctx.r4.s64 = ctx.r11.s64 + 12452;
	// bl 0x82f28770
	ctx.lr = 0x82F30310;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30350
	if (ctx.cr0.lt) goto loc_82F30350;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r10,1808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r10.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f46ef0
	ctx.lr = 0x82F30350;
	sub_82F46EF0(ctx, base);
loc_82F30350:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82F30368"))) PPC_WEAK_FUNC(sub_82F30368);
PPC_FUNC_IMPL(__imp__sub_82F30368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F30370;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F3038C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F303A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82f303d4
	if (ctx.cr6.eq) goto loc_82F303D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F303CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
loc_82F303D4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,12332
	ctx.r30.s64 = ctx.r11.s64 + 12332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F303F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F30430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2edd0
	ctx.lr = 0x82F30454;
	sub_82F2EDD0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eab788
	ctx.lr = 0x82F3046C;
	sub_82EAB788(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,11300
	ctx.r4.s64 = ctx.r11.s64 + 11300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F3048C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F3049C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16564
	ctx.r4.s64 = ctx.r11.s64 + 16564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F304B8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82f305cc
	if (ctx.cr6.eq) goto loc_82F305CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16548
	ctx.r4.s64 = ctx.r11.s64 + 16548;
	// bl 0x82f28770
	ctx.lr = 0x82F304DC;
	sub_82F28770(ctx, base);
loc_82F304DC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16524
	ctx.r4.s64 = ctx.r11.s64 + 16524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F304F8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82f28770
	ctx.lr = 0x82F3052C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82f305dc
	if (ctx.cr6.eq) goto loc_82F305DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16484
	ctx.r4.s64 = ctx.r11.s64 + 16484;
	// bl 0x82f28770
	ctx.lr = 0x82F30550;
	sub_82F28770(ctx, base);
loc_82F30550:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30560;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12452
	ctx.r4.s64 = ctx.r11.s64 + 12452;
	// bl 0x82f28770
	ctx.lr = 0x82F30578;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f305f0
	if (ctx.cr0.lt) goto loc_82F305F0;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r10,1544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// stw r10,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r10.u32);
	// beq cr6,0x82f305ec
	if (ctx.cr6.eq) goto loc_82F305EC;
	// bl 0x82f47f78
	ctx.lr = 0x82F305C8;
	sub_82F47F78(ctx, base);
	// b 0x82f305f0
	goto loc_82F305F0;
loc_82F305CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,22868
	ctx.r4.s64 = ctx.r11.s64 + 22868;
	// bl 0x82f28770
	ctx.lr = 0x82F305D8;
	sub_82F28770(ctx, base);
	// b 0x82f304dc
	goto loc_82F304DC;
loc_82F305DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12456
	ctx.r4.s64 = ctx.r11.s64 + 12456;
	// bl 0x82f28770
	ctx.lr = 0x82F305E8;
	sub_82F28770(ctx, base);
	// b 0x82f30550
	goto loc_82F30550;
loc_82F305EC:
	// bl 0x82f47ea8
	ctx.lr = 0x82F305F0;
	sub_82F47EA8(ctx, base);
loc_82F305F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F305F8"))) PPC_WEAK_FUNC(sub_82F305F8);
PPC_FUNC_IMPL(__imp__sub_82F305F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F30600;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f30624
	if (ctx.cr6.eq) goto loc_82F30624;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x82f30628
	goto loc_82F30628;
loc_82F30624:
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
loc_82F30628:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3065C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F3068C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r25,15
	ctx.r25.s64 = 983040;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f306c4
	if (!ctx.cr6.eq) goto loc_82F306C4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f306c4
	if (!ctx.cr6.eq) goto loc_82F306C4;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f306c8
	if (!ctx.cr6.gt) goto loc_82F306C8;
loc_82F306C4:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F306C8:
	// rlwinm r10,r4,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r24,r10,1
	ctx.r24.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x82f30718
	if (ctx.cr6.eq) goto loc_82F30718;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28b30
	ctx.lr = 0x82F306EC;
	sub_82F28B30(ctx, base);
loc_82F306EC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
loc_82F306F4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f30744
	if (ctx.cr6.eq) goto loc_82F30744;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,12300
	ctx.r5.s64 = ctx.r11.s64 + 12300;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f1ce30
	ctx.lr = 0x82F30710;
	sub_82F1CE30(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82f30760
	goto loc_82F30760;
loc_82F30718:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f30730
	if (!ctx.cr6.gt) goto loc_82F30730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28bd8
	ctx.lr = 0x82F3072C;
	sub_82F28BD8(ctx, base);
	// b 0x82f306ec
	goto loc_82F306EC;
loc_82F30730:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82f306f4
	if (ctx.cr6.eq) goto loc_82F306F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28c98
	ctx.lr = 0x82F30740;
	sub_82F28C98(ctx, base);
	// b 0x82f306ec
	goto loc_82F306EC;
loc_82F30744:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F3075C;
	sub_82F289E8(ctx, base);
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
loc_82F30760:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F30798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F307CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2ef40
	ctx.lr = 0x82F3080C;
	sub_82F2EF40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f30960
	if (ctx.cr6.eq) goto loc_82F30960;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F30834;
	sub_82F289E8(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f3085c
	if (!ctx.cr6.gt) goto loc_82F3085C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f308a8
	if (ctx.cr6.eq) goto loc_82F308A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28bd8
	ctx.lr = 0x82F30854;
	sub_82F28BD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
loc_82F3085C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f308a8
	if (ctx.cr6.eq) goto loc_82F308A8;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f30884
	if (!ctx.cr6.eq) goto loc_82F30884;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f30888
	if (!ctx.cr6.gt) goto loc_82F30888;
loc_82F30884:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F30888:
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28f18
	ctx.lr = 0x82F3089C;
	sub_82F28F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82F308A8:
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f308e0
	if (!ctx.cr6.gt) goto loc_82F308E0;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// beq cr6,0x82f308c4
	if (ctx.cr6.eq) goto loc_82F308C4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82F308C4:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29050
	ctx.lr = 0x82F308D4;
	sub_82F29050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82F308E0:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f309fc
	if (ctx.cr6.eq) goto loc_82F309FC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82f30924
	if (ctx.cr6.eq) goto loc_82F30924;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f30908
	if (!ctx.cr6.eq) goto loc_82F30908;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f30924
	if (!ctx.cr6.gt) goto loc_82F30924;
loc_82F30908:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28c98
	ctx.lr = 0x82F30914;
	sub_82F28C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82F30924:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f30940
	if (!ctx.cr6.eq) goto loc_82F30940;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f30940
	if (!ctx.cr6.eq) goto loc_82F30940;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
loc_82F30940:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28d98
	ctx.lr = 0x82F30954;
	sub_82F28D98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f309fc
	if (!ctx.cr0.lt) goto loc_82F309FC;
	// b 0x82f30a18
	goto loc_82F30A18;
loc_82F30960:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f309fc
	if (!ctx.cr6.eq) goto loc_82F309FC;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f309fc
	if (!ctx.cr0.eq) goto loc_82F309FC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f309fc
	if (!ctx.cr6.gt) goto loc_82F309FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,16592
	ctx.r29.s64 = ctx.r11.s64 + 16592;
loc_82F30990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30998;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82eab788
	ctx.lr = 0x82F309B8;
	sub_82EAB788(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82eab788
	ctx.lr = 0x82F309D0;
	sub_82EAB788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F309E4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30990
	if (ctx.cr6.lt) goto loc_82F30990;
loc_82F309FC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x82f28770
	ctx.lr = 0x82F30A0C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f30a18
	if (ctx.cr0.lt) goto loc_82F30A18;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F30A18:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30A20"))) PPC_WEAK_FUNC(sub_82F30A20);
PPC_FUNC_IMPL(__imp__sub_82F30A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82F30A28;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F30A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r29,15
	ctx.r29.s64 = 983040;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f30acc
	if (!ctx.cr6.eq) goto loc_82F30ACC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f30acc
	if (!ctx.cr6.eq) goto loc_82F30ACC;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f30ad0
	if (!ctx.cr6.gt) goto loc_82F30AD0;
loc_82F30ACC:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82F30AD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F30AE8;
	sub_82F289E8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r23,38
	ctx.r23.s64 = 38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r25,r10,12248
	ctx.r25.s64 = ctx.r10.s64 + 12248;
	// addi r26,r9,12324
	ctx.r26.s64 = ctx.r9.s64 + 12324;
	// addi r27,r11,12528
	ctx.r27.s64 = ctx.r11.s64 + 12528;
	// beq cr6,0x82f30bb8
	if (ctx.cr6.eq) goto loc_82F30BB8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f30bb8
	if (!ctx.cr6.gt) goto loc_82F30BB8;
loc_82F30B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30B24;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x82eab788
	ctx.lr = 0x82F30B44;
	sub_82EAB788(ctx, base);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eab788
	ctx.lr = 0x82F30B5C;
	sub_82EAB788(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30B6C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30BA0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30b1c
	if (ctx.cr6.lt) goto loc_82F30B1C;
loc_82F30BB8:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F30BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// clrlwi r5,r9,12
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2ef40
	ctx.lr = 0x82F30C60;
	sub_82F2EF40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f30c84
	if (ctx.cr6.eq) goto loc_82F30C84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28b30
	ctx.lr = 0x82F30C7C;
	sub_82F28B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
loc_82F30C84:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r11,12300
	ctx.r29.s64 = ctx.r11.s64 + 12300;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f30d34
	if (!ctx.cr6.gt) goto loc_82F30D34;
loc_82F30C9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30CA4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82eab788
	ctx.lr = 0x82F30CC4;
	sub_82EAB788(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eab788
	ctx.lr = 0x82F30CD8;
	sub_82EAB788(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30CE8;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30D1C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30c9c
	if (ctx.cr6.lt) goto loc_82F30C9C;
loc_82F30D34:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f30dc8
	if (!ctx.cr6.gt) goto loc_82F30DC8;
loc_82F30D44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30D4C;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eab788
	ctx.lr = 0x82F30D68;
	sub_82EAB788(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30D78;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30DB0;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30d44
	if (ctx.cr6.lt) goto loc_82F30D44;
loc_82F30DC8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82f30f28
	if (ctx.cr6.eq) goto loc_82F30F28;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f30e70
	if (!ctx.cr6.gt) goto loc_82F30E70;
loc_82F30DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30DE8;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eab788
	ctx.lr = 0x82F30E04;
	sub_82EAB788(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30E14;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82f30e38
	if (!ctx.cr0.eq) goto loc_82F30E38;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x82f30e3c
	goto loc_82F30E3C;
loc_82F30E38:
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
loc_82F30E3C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82f31058
	if (ctx.cr6.lt) goto loc_82F31058;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30E58;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30de0
	if (ctx.cr6.lt) goto loc_82F30DE0;
loc_82F30E70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28bd8
	ctx.lr = 0x82F30E78;
	sub_82F28BD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f1ce30
	ctx.lr = 0x82F30E90;
	sub_82F1CE30(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28f18
	ctx.lr = 0x82F30EA8;
	sub_82F28F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29050
	ctx.lr = 0x82F30EC4;
	sub_82F29050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f30f28
	if (ctx.cr6.eq) goto loc_82F30F28;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f30f08
	if (ctx.cr6.eq) goto loc_82F30F08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28c98
	ctx.lr = 0x82F30EFC;
	sub_82F28C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82F30F08:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28d98
	ctx.lr = 0x82F30F20;
	sub_82F28D98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
loc_82F30F28:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f30fbc
	if (!ctx.cr6.gt) goto loc_82F30FBC;
loc_82F30F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30F40;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eab788
	ctx.lr = 0x82F30F5C;
	sub_82EAB788(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30F6C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F30F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F30FA4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30f38
	if (ctx.cr6.lt) goto loc_82F30F38;
loc_82F30FBC:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f31054
	if (!ctx.cr6.gt) goto loc_82F31054;
loc_82F30FCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28840
	ctx.lr = 0x82F30FD4;
	sub_82F28840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x82eab788
	ctx.lr = 0x82F30FF4;
	sub_82EAB788(ctx, base);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eab788
	ctx.lr = 0x82F3100C;
	sub_82EAB788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F31028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28770
	ctx.lr = 0x82F3103C;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31058
	if (ctx.cr0.lt) goto loc_82F31058;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f30fcc
	if (ctx.cr6.lt) goto loc_82F30FCC;
loc_82F31054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F31058:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31060"))) PPC_WEAK_FUNC(sub_82F31060);
PPC_FUNC_IMPL(__imp__sub_82F31060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82F31068;
	__savegprlr_19(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F310C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F310F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r24,652(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f31120
	if (ctx.cr6.eq) goto loc_82F31120;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82f31134
	goto loc_82F31134;
loc_82F31120:
	// lwz r11,1820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x82f31134
	if (!ctx.cr6.eq) goto loc_82F31134;
	// lwz r30,196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
loc_82F31134:
	// lwz r29,612(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f311a8
	if (ctx.cr6.eq) goto loc_82F311A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3116C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F31198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// addi r23,r1,384
	ctx.r23.s64 = ctx.r1.s64 + 384;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F311A8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f31218
	if (ctx.cr6.eq) goto loc_82F31218;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F311DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F31208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// addi r21,r1,352
	ctx.r21.s64 = ctx.r1.s64 + 352;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82F31218:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f31288
	if (ctx.cr6.eq) goto loc_82F31288;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3124C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F31278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// addi r22,r1,320
	ctx.r22.s64 = ctx.r1.s64 + 320;
	// li r27,3
	ctx.r27.s64 = 3;
loc_82F31288:
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r7,204(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// lwz r5,620(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lwz r29,636(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// xor r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r29.u64;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82f2ef40
	ctx.lr = 0x82F312FC;
	sub_82F2EF40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f31330
	if (ctx.cr6.eq) goto loc_82F31330;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28b30
	ctx.lr = 0x82F3131C;
	sub_82F28B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f3138c
	if (!ctx.cr6.eq) goto loc_82F3138C;
loc_82F31330:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f3138c
	if (!ctx.cr6.eq) goto loc_82F3138C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82f3138c
	if (ctx.cr6.gt) goto loc_82F3138C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82f289e8
	ctx.lr = 0x82F31364;
	sub_82F289E8(ctx, base);
loc_82F31364:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82f313a8
	if (!ctx.cr6.eq) goto loc_82F313A8;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82f28898
	ctx.lr = 0x82F31388;
	sub_82F28898(ctx, base);
	// b 0x82f313c0
	goto loc_82F313C0;
loc_82F3138C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,12300
	ctx.r5.s64 = ctx.r11.s64 + 12300;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f1ce30
	ctx.lr = 0x82F313A4;
	sub_82F1CE30(ctx, base);
	// b 0x82f31364
	goto loc_82F31364;
loc_82F313A8:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x82F313C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F313C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f314a4
	if (ctx.cr6.eq) goto loc_82F314A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28bd8
	ctx.lr = 0x82F313D0;
	sub_82F28BD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f289e8
	ctx.lr = 0x82F313F0;
	sub_82F289E8(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f3140c
	if (!ctx.cr6.eq) goto loc_82F3140C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f31410
	if (!ctx.cr6.gt) goto loc_82F31410;
loc_82F3140C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F31410:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28f18
	ctx.lr = 0x82F31424;
	sub_82F28F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29050
	ctx.lr = 0x82F31440;
	sub_82F29050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f314a4
	if (ctx.cr6.eq) goto loc_82F314A4;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f31484
	if (ctx.cr6.eq) goto loc_82F31484;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28c98
	ctx.lr = 0x82F31478;
	sub_82F28C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82F31484:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f28d98
	ctx.lr = 0x82F3149C;
	sub_82F28D98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
loc_82F314A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x82f28770
	ctx.lr = 0x82F314B4;
	sub_82F28770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f314c0
	if (ctx.cr0.lt) goto loc_82F314C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F314C0:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F314C8"))) PPC_WEAK_FUNC(sub_82F314C8);
PPC_FUNC_IMPL(__imp__sub_82F314C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82F314D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r24,16(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82f4b9c0
	ctx.lr = 0x82F31508;
	sub_82F4B9C0(ctx, base);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82f4b9c0
	ctx.lr = 0x82F31518;
	sub_82F4B9C0(ctx, base);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82f4b9c0
	ctx.lr = 0x82F31528;
	sub_82F4B9C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x82f315ac
	if (ctx.cr6.eq) goto loc_82F315AC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
loc_82F31540:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f315ac
	if (!ctx.cr6.eq) goto loc_82F315AC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f3159c
	if (ctx.cr6.eq) goto loc_82F3159C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f3159c
	if (ctx.cr6.eq) goto loc_82F3159C;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82F31568:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm. r4,r4,0,7,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82f31598
	if (!ctx.cr0.eq) goto loc_82F31598;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f31568
	if (ctx.cr6.lt) goto loc_82F31568;
	// b 0x82f3159c
	goto loc_82F3159C;
loc_82F31598:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82F3159C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x82f31540
	if (ctx.cr6.lt) goto loc_82F31540;
loc_82F315AC:
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82f31060
	ctx.lr = 0x82F315E8;
	sub_82F31060(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F315F0"))) PPC_WEAK_FUNC(sub_82F315F0);
PPC_FUNC_IMPL(__imp__sub_82F315F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F315F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// bne cr6,0x82f31670
	if (!ctx.cr6.eq) goto loc_82F31670;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addic. r31,r11,3
	ctx.xer.ca = ctx.r11.u32 > 4294967292;
	ctx.r31.s64 = ctx.r11.s64 + 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x82f316d0
	if (!ctx.cr0.gt) goto loc_82F316D0;
loc_82F31640:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31658;
	sub_82F314C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82f31640
	if (ctx.cr6.lt) goto loc_82F31640;
	// b 0x82f316d0
	goto loc_82F316D0;
loc_82F31670:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f31680
	if (!ctx.cr6.eq) goto loc_82F31680;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82f31694
	goto loc_82F31694;
loc_82F31680:
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
loc_82F31694:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82f316d0
	if (!ctx.cr6.gt) goto loc_82F316D0;
loc_82F316A4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F316BC;
	sub_82F314C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82f316a4
	if (ctx.cr6.lt) goto loc_82F316A4;
loc_82F316D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F316DC"))) PPC_WEAK_FUNC(sub_82F316DC);
PPC_FUNC_IMPL(__imp__sub_82F316DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F316E0"))) PPC_WEAK_FUNC(sub_82F316E0);
PPC_FUNC_IMPL(__imp__sub_82F316E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,16604
	ctx.r5.s64 = ctx.r11.s64 + 16604;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32384
	ctx.r4.s64 = ctx.r10.s64 + 32384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31710;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f470b0
	ctx.lr = 0x82F31718;
	sub_82F470B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3172C"))) PPC_WEAK_FUNC(sub_82F3172C);
PPC_FUNC_IMPL(__imp__sub_82F3172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31730"))) PPC_WEAK_FUNC(sub_82F31730);
PPC_FUNC_IMPL(__imp__sub_82F31730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,16604
	ctx.r5.s64 = ctx.r11.s64 + 16604;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32432
	ctx.r4.s64 = ctx.r10.s64 + 32432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31760;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48270
	ctx.lr = 0x82F31768;
	sub_82F48270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3177C"))) PPC_WEAK_FUNC(sub_82F3177C);
PPC_FUNC_IMPL(__imp__sub_82F3177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31780"))) PPC_WEAK_FUNC(sub_82F31780);
PPC_FUNC_IMPL(__imp__sub_82F31780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8428
	ctx.r5.s64 = ctx.r11.s64 + 8428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32304
	ctx.r4.s64 = ctx.r10.s64 + 32304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F317B0;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48298
	ctx.lr = 0x82F317B8;
	sub_82F48298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F317CC"))) PPC_WEAK_FUNC(sub_82F317CC);
PPC_FUNC_IMPL(__imp__sub_82F317CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F317D0"))) PPC_WEAK_FUNC(sub_82F317D0);
PPC_FUNC_IMPL(__imp__sub_82F317D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16608
	ctx.r5.s64 = ctx.r11.s64 + 16608;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F317FC;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f482a8
	ctx.lr = 0x82F31804;
	sub_82F482A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31818"))) PPC_WEAK_FUNC(sub_82F31818);
PPC_FUNC_IMPL(__imp__sub_82F31818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16620
	ctx.r5.s64 = ctx.r11.s64 + 16620;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31844;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f482d0
	ctx.lr = 0x82F3184C;
	sub_82F482D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31860"))) PPC_WEAK_FUNC(sub_82F31860);
PPC_FUNC_IMPL(__imp__sub_82F31860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,24584
	ctx.r5.s64 = ctx.r11.s64 + 24584;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F3188C;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f47268
	ctx.lr = 0x82F31894;
	sub_82F47268(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F318A8"))) PPC_WEAK_FUNC(sub_82F318A8);
PPC_FUNC_IMPL(__imp__sub_82F318A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8468
	ctx.r5.s64 = ctx.r11.s64 + 8468;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32320
	ctx.r4.s64 = ctx.r10.s64 + 32320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F318D8;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f482f8
	ctx.lr = 0x82F318E0;
	sub_82F482F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F318F4"))) PPC_WEAK_FUNC(sub_82F318F4);
PPC_FUNC_IMPL(__imp__sub_82F318F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F318F8"))) PPC_WEAK_FUNC(sub_82F318F8);
PPC_FUNC_IMPL(__imp__sub_82F318F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16632
	ctx.r5.s64 = ctx.r11.s64 + 16632;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31924;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48320
	ctx.lr = 0x82F3192C;
	sub_82F48320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31940"))) PPC_WEAK_FUNC(sub_82F31940);
PPC_FUNC_IMPL(__imp__sub_82F31940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16644
	ctx.r5.s64 = ctx.r11.s64 + 16644;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F3196C;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48330
	ctx.lr = 0x82F31974;
	sub_82F48330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31988"))) PPC_WEAK_FUNC(sub_82F31988);
PPC_FUNC_IMPL(__imp__sub_82F31988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8448
	ctx.r5.s64 = ctx.r11.s64 + 8448;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32368
	ctx.r4.s64 = ctx.r10.s64 + 32368;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F319B8;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48340
	ctx.lr = 0x82F319C0;
	sub_82F48340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F319D4"))) PPC_WEAK_FUNC(sub_82F319D4);
PPC_FUNC_IMPL(__imp__sub_82F319D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F319D8"))) PPC_WEAK_FUNC(sub_82F319D8);
PPC_FUNC_IMPL(__imp__sub_82F319D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8444
	ctx.r5.s64 = ctx.r11.s64 + 8444;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32416
	ctx.r4.s64 = ctx.r10.s64 + 32416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31A08;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48350
	ctx.lr = 0x82F31A10;
	sub_82F48350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31A24"))) PPC_WEAK_FUNC(sub_82F31A24);
PPC_FUNC_IMPL(__imp__sub_82F31A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31A28"))) PPC_WEAK_FUNC(sub_82F31A28);
PPC_FUNC_IMPL(__imp__sub_82F31A28) {
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
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,2,10,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r11,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f31aa4
	if (!ctx.cr6.eq) goto loc_82F31AA4;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r5,r10,16668
	ctx.r5.s64 = ctx.r10.s64 + 16668;
	// bl 0x82f314c8
	ctx.lr = 0x82F31A94;
	sub_82F314C8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x82f31ab0
	goto loc_82F31AB0;
loc_82F31AA4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,16656
	ctx.r5.s64 = ctx.r11.s64 + 16656;
	// bl 0x82f314c8
	ctx.lr = 0x82F31AB0;
	sub_82F314C8(ctx, base);
loc_82F31AB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f48360
	ctx.lr = 0x82F31AB8;
	sub_82F48360(ctx, base);
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

__attribute__((alias("__imp__sub_82F31AD0"))) PPC_WEAK_FUNC(sub_82F31AD0);
PPC_FUNC_IMPL(__imp__sub_82F31AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16680
	ctx.r5.s64 = ctx.r11.s64 + 16680;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31AFC;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48370
	ctx.lr = 0x82F31B04;
	sub_82F48370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31B18"))) PPC_WEAK_FUNC(sub_82F31B18);
PPC_FUNC_IMPL(__imp__sub_82F31B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16692
	ctx.r5.s64 = ctx.r11.s64 + 16692;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31B44;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48390
	ctx.lr = 0x82F31B4C;
	sub_82F48390(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31B60"))) PPC_WEAK_FUNC(sub_82F31B60);
PPC_FUNC_IMPL(__imp__sub_82F31B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16704
	ctx.r5.s64 = ctx.r11.s64 + 16704;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31B8C;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48390
	ctx.lr = 0x82F31B94;
	sub_82F48390(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31BA8"))) PPC_WEAK_FUNC(sub_82F31BA8);
PPC_FUNC_IMPL(__imp__sub_82F31BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8440
	ctx.r5.s64 = ctx.r11.s64 + 8440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32336
	ctx.r4.s64 = ctx.r10.s64 + 32336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31BD8;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f484c0
	ctx.lr = 0x82F31BE0;
	sub_82F484C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31BF4"))) PPC_WEAK_FUNC(sub_82F31BF4);
PPC_FUNC_IMPL(__imp__sub_82F31BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31BF8"))) PPC_WEAK_FUNC(sub_82F31BF8);
PPC_FUNC_IMPL(__imp__sub_82F31BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8328
	ctx.r5.s64 = ctx.r11.s64 + 8328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32352
	ctx.r4.s64 = ctx.r10.s64 + 32352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31C28;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f484f0
	ctx.lr = 0x82F31C30;
	sub_82F484F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31C44"))) PPC_WEAK_FUNC(sub_82F31C44);
PPC_FUNC_IMPL(__imp__sub_82F31C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31C48"))) PPC_WEAK_FUNC(sub_82F31C48);
PPC_FUNC_IMPL(__imp__sub_82F31C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8432
	ctx.r5.s64 = ctx.r11.s64 + 8432;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32400
	ctx.r4.s64 = ctx.r10.s64 + 32400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31C78;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f47300
	ctx.lr = 0x82F31C80;
	sub_82F47300(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31C94"))) PPC_WEAK_FUNC(sub_82F31C94);
PPC_FUNC_IMPL(__imp__sub_82F31C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31C98"))) PPC_WEAK_FUNC(sub_82F31C98);
PPC_FUNC_IMPL(__imp__sub_82F31C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8324
	ctx.r5.s64 = ctx.r11.s64 + 8324;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32448
	ctx.r4.s64 = ctx.r10.s64 + 32448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31CC8;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f474c8
	ctx.lr = 0x82F31CD0;
	sub_82F474C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31CE4"))) PPC_WEAK_FUNC(sub_82F31CE4);
PPC_FUNC_IMPL(__imp__sub_82F31CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31CE8"))) PPC_WEAK_FUNC(sub_82F31CE8);
PPC_FUNC_IMPL(__imp__sub_82F31CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16716
	ctx.r5.s64 = ctx.r11.s64 + 16716;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31D14;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f475d8
	ctx.lr = 0x82F31D1C;
	sub_82F475D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31D30"))) PPC_WEAK_FUNC(sub_82F31D30);
PPC_FUNC_IMPL(__imp__sub_82F31D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8436
	ctx.r5.s64 = ctx.r11.s64 + 8436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32304
	ctx.r4.s64 = ctx.r10.s64 + 32304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31D60;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48380
	ctx.lr = 0x82F31D68;
	sub_82F48380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31D7C"))) PPC_WEAK_FUNC(sub_82F31D7C);
PPC_FUNC_IMPL(__imp__sub_82F31D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31D80"))) PPC_WEAK_FUNC(sub_82F31D80);
PPC_FUNC_IMPL(__imp__sub_82F31D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,16704
	ctx.r5.s64 = ctx.r11.s64 + 16704;
	// addi r4,r10,16692
	ctx.r4.s64 = ctx.r10.s64 + 16692;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f315f0
	ctx.lr = 0x82F31DA8;
	sub_82F315F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f31db8
	if (ctx.cr0.lt) goto loc_82F31DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f477d8
	ctx.lr = 0x82F31DB8;
	sub_82F477D8(ctx, base);
loc_82F31DB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31DCC"))) PPC_WEAK_FUNC(sub_82F31DCC);
PPC_FUNC_IMPL(__imp__sub_82F31DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31DD0"))) PPC_WEAK_FUNC(sub_82F31DD0);
PPC_FUNC_IMPL(__imp__sub_82F31DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16728
	ctx.r5.s64 = ctx.r11.s64 + 16728;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31DFC;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f470b0
	ctx.lr = 0x82F31E04;
	sub_82F470B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31E18"))) PPC_WEAK_FUNC(sub_82F31E18);
PPC_FUNC_IMPL(__imp__sub_82F31E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16744
	ctx.r5.s64 = ctx.r11.s64 + 16744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31E44;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48270
	ctx.lr = 0x82F31E4C;
	sub_82F48270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31E60"))) PPC_WEAK_FUNC(sub_82F31E60);
PPC_FUNC_IMPL(__imp__sub_82F31E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8428
	ctx.r5.s64 = ctx.r11.s64 + 8428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32304
	ctx.r4.s64 = ctx.r10.s64 + 32304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31E90;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48298
	ctx.lr = 0x82F31E98;
	sub_82F48298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31EAC"))) PPC_WEAK_FUNC(sub_82F31EAC);
PPC_FUNC_IMPL(__imp__sub_82F31EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31EB0"))) PPC_WEAK_FUNC(sub_82F31EB0);
PPC_FUNC_IMPL(__imp__sub_82F31EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16764
	ctx.r5.s64 = ctx.r11.s64 + 16764;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31EDC;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f482a8
	ctx.lr = 0x82F31EE4;
	sub_82F482A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31EF8"))) PPC_WEAK_FUNC(sub_82F31EF8);
PPC_FUNC_IMPL(__imp__sub_82F31EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16776
	ctx.r5.s64 = ctx.r11.s64 + 16776;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31F24;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f482d0
	ctx.lr = 0x82F31F2C;
	sub_82F482D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31F40"))) PPC_WEAK_FUNC(sub_82F31F40);
PPC_FUNC_IMPL(__imp__sub_82F31F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16788
	ctx.r5.s64 = ctx.r11.s64 + 16788;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31F6C;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f47268
	ctx.lr = 0x82F31F74;
	sub_82F47268(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31F88"))) PPC_WEAK_FUNC(sub_82F31F88);
PPC_FUNC_IMPL(__imp__sub_82F31F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16800
	ctx.r5.s64 = ctx.r11.s64 + 16800;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31FB4;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f482f8
	ctx.lr = 0x82F31FBC;
	sub_82F482F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31FD0"))) PPC_WEAK_FUNC(sub_82F31FD0);
PPC_FUNC_IMPL(__imp__sub_82F31FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16824
	ctx.r5.s64 = ctx.r11.s64 + 16824;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F31FFC;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48320
	ctx.lr = 0x82F32004;
	sub_82F48320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32018"))) PPC_WEAK_FUNC(sub_82F32018);
PPC_FUNC_IMPL(__imp__sub_82F32018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16844
	ctx.r5.s64 = ctx.r11.s64 + 16844;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F32044;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48330
	ctx.lr = 0x82F3204C;
	sub_82F48330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32060"))) PPC_WEAK_FUNC(sub_82F32060);
PPC_FUNC_IMPL(__imp__sub_82F32060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8448
	ctx.r5.s64 = ctx.r11.s64 + 8448;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32368
	ctx.r4.s64 = ctx.r10.s64 + 32368;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F32090;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48340
	ctx.lr = 0x82F32098;
	sub_82F48340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F320AC"))) PPC_WEAK_FUNC(sub_82F320AC);
PPC_FUNC_IMPL(__imp__sub_82F320AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F320B0"))) PPC_WEAK_FUNC(sub_82F320B0);
PPC_FUNC_IMPL(__imp__sub_82F320B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8444
	ctx.r5.s64 = ctx.r11.s64 + 8444;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32416
	ctx.r4.s64 = ctx.r10.s64 + 32416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F320E0;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48350
	ctx.lr = 0x82F320E8;
	sub_82F48350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F320FC"))) PPC_WEAK_FUNC(sub_82F320FC);
PPC_FUNC_IMPL(__imp__sub_82F320FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32100"))) PPC_WEAK_FUNC(sub_82F32100);
PPC_FUNC_IMPL(__imp__sub_82F32100) {
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
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,2,10,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r11,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f3217c
	if (!ctx.cr6.eq) goto loc_82F3217C;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r5,r10,16876
	ctx.r5.s64 = ctx.r10.s64 + 16876;
	// bl 0x82f314c8
	ctx.lr = 0x82F3216C;
	sub_82F314C8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x82f32188
	goto loc_82F32188;
loc_82F3217C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,16864
	ctx.r5.s64 = ctx.r11.s64 + 16864;
	// bl 0x82f314c8
	ctx.lr = 0x82F32188;
	sub_82F314C8(ctx, base);
loc_82F32188:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f48360
	ctx.lr = 0x82F32190;
	sub_82F48360(ctx, base);
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

__attribute__((alias("__imp__sub_82F321A8"))) PPC_WEAK_FUNC(sub_82F321A8);
PPC_FUNC_IMPL(__imp__sub_82F321A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16896
	ctx.r5.s64 = ctx.r11.s64 + 16896;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F321D4;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48370
	ctx.lr = 0x82F321DC;
	sub_82F48370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F321F0"))) PPC_WEAK_FUNC(sub_82F321F0);
PPC_FUNC_IMPL(__imp__sub_82F321F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16916
	ctx.r5.s64 = ctx.r11.s64 + 16916;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F3221C;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48390
	ctx.lr = 0x82F32224;
	sub_82F48390(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32238"))) PPC_WEAK_FUNC(sub_82F32238);
PPC_FUNC_IMPL(__imp__sub_82F32238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16932
	ctx.r5.s64 = ctx.r11.s64 + 16932;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F32264;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48390
	ctx.lr = 0x82F3226C;
	sub_82F48390(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32280"))) PPC_WEAK_FUNC(sub_82F32280);
PPC_FUNC_IMPL(__imp__sub_82F32280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8440
	ctx.r5.s64 = ctx.r11.s64 + 8440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32336
	ctx.r4.s64 = ctx.r10.s64 + 32336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F322B0;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f484c0
	ctx.lr = 0x82F322B8;
	sub_82F484C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F322CC"))) PPC_WEAK_FUNC(sub_82F322CC);
PPC_FUNC_IMPL(__imp__sub_82F322CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F322D0"))) PPC_WEAK_FUNC(sub_82F322D0);
PPC_FUNC_IMPL(__imp__sub_82F322D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16948
	ctx.r5.s64 = ctx.r11.s64 + 16948;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F322FC;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f484f0
	ctx.lr = 0x82F32304;
	sub_82F484F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32318"))) PPC_WEAK_FUNC(sub_82F32318);
PPC_FUNC_IMPL(__imp__sub_82F32318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8432
	ctx.r5.s64 = ctx.r11.s64 + 8432;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32400
	ctx.r4.s64 = ctx.r10.s64 + 32400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F32348;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f47300
	ctx.lr = 0x82F32350;
	sub_82F47300(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32364"))) PPC_WEAK_FUNC(sub_82F32364);
PPC_FUNC_IMPL(__imp__sub_82F32364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32368"))) PPC_WEAK_FUNC(sub_82F32368);
PPC_FUNC_IMPL(__imp__sub_82F32368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16960
	ctx.r5.s64 = ctx.r11.s64 + 16960;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F32394;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f474c8
	ctx.lr = 0x82F3239C;
	sub_82F474C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F323B0"))) PPC_WEAK_FUNC(sub_82F323B0);
PPC_FUNC_IMPL(__imp__sub_82F323B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16980
	ctx.r5.s64 = ctx.r11.s64 + 16980;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F323DC;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f475d8
	ctx.lr = 0x82F323E4;
	sub_82F475D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F323F8"))) PPC_WEAK_FUNC(sub_82F323F8);
PPC_FUNC_IMPL(__imp__sub_82F323F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r5,r11,8436
	ctx.r5.s64 = ctx.r11.s64 + 8436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,32304
	ctx.r4.s64 = ctx.r10.s64 + 32304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f314c8
	ctx.lr = 0x82F32428;
	sub_82F314C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f48380
	ctx.lr = 0x82F32430;
	sub_82F48380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32444"))) PPC_WEAK_FUNC(sub_82F32444);
PPC_FUNC_IMPL(__imp__sub_82F32444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32448"))) PPC_WEAK_FUNC(sub_82F32448);
PPC_FUNC_IMPL(__imp__sub_82F32448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,16704
	ctx.r5.s64 = ctx.r11.s64 + 16704;
	// addi r4,r10,16692
	ctx.r4.s64 = ctx.r10.s64 + 16692;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f315f0
	ctx.lr = 0x82F32470;
	sub_82F315F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f32480
	if (ctx.cr0.lt) goto loc_82F32480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f477d8
	ctx.lr = 0x82F32480;
	sub_82F477D8(ctx, base);
loc_82F32480:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32494"))) PPC_WEAK_FUNC(sub_82F32494);
PPC_FUNC_IMPL(__imp__sub_82F32494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32498"))) PPC_WEAK_FUNC(sub_82F32498);
PPC_FUNC_IMPL(__imp__sub_82F32498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f324c4
	if (!ctx.cr6.lt) goto loc_82F324C4;
loc_82F324BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F324C4:
	// ble cr6,0x82f324d0
	if (!ctx.cr6.gt) goto loc_82F324D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82F324D0:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82f324bc
	if (ctx.cr6.gt) goto loc_82F324BC;
	// subfc r11,r4,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F324E4"))) PPC_WEAK_FUNC(sub_82F324E4);
PPC_FUNC_IMPL(__imp__sub_82F324E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F324E8"))) PPC_WEAK_FUNC(sub_82F324E8);
PPC_FUNC_IMPL(__imp__sub_82F324E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,21574
	ctx.r10.s64 = ctx.r11.s64 + 21574;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r8,96(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r7,96(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f3251c
	if (!ctx.cr6.eq) goto loc_82F3251C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F3251C:
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f3252c
	if (ctx.cr6.eq) goto loc_82F3252C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82F3252C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq 0x82f32550
	if (ctx.cr0.eq) goto loc_82F32550;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f3252c
	if (ctx.cr6.eq) goto loc_82F3252C;
loc_82F32550:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82f32560
	if (!ctx.cr0.gt) goto loc_82F32560;
loc_82F32558:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F32560:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82f32570
	if (!ctx.cr6.lt) goto loc_82F32570;
loc_82F32568:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82F32570:
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_82F32580:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq 0x82f325a4
	if (ctx.cr0.eq) goto loc_82F325A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f32580
	if (ctx.cr6.eq) goto loc_82F32580;
loc_82F325A4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82f32558
	if (ctx.cr0.gt) goto loc_82F32558;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82f32568
	if (ctx.cr6.lt) goto loc_82F32568;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82f32558
	if (ctx.cr6.gt) goto loc_82F32558;
	// blt cr6,0x82f32568
	if (ctx.cr6.lt) goto loc_82F32568;
	// lwz r11,116(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// lwz r10,116(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f32568
	if (ctx.cr6.lt) goto loc_82F32568;
	// bgt cr6,0x82f32558
	if (ctx.cr6.gt) goto loc_82F32558;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f32568
	if (ctx.cr6.lt) goto loc_82F32568;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F325F4"))) PPC_WEAK_FUNC(sub_82F325F4);
PPC_FUNC_IMPL(__imp__sub_82F325F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F325F8"))) PPC_WEAK_FUNC(sub_82F325F8);
PPC_FUNC_IMPL(__imp__sub_82F325F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32610"))) PPC_WEAK_FUNC(sub_82F32610);
PPC_FUNC_IMPL(__imp__sub_82F32610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3261C"))) PPC_WEAK_FUNC(sub_82F3261C);
PPC_FUNC_IMPL(__imp__sub_82F3261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32620"))) PPC_WEAK_FUNC(sub_82F32620);
PPC_FUNC_IMPL(__imp__sub_82F32620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// srw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32634"))) PPC_WEAK_FUNC(sub_82F32634);
PPC_FUNC_IMPL(__imp__sub_82F32634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32638"))) PPC_WEAK_FUNC(sub_82F32638);
PPC_FUNC_IMPL(__imp__sub_82F32638) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F32640;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// lwz r19,0(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r11,r19,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFF00000;
	// lis r30,20480
	ctx.r30.s64 = 1342177280;
	// std r21,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r21.u64);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// std r21,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r21.u64);
	// beq cr6,0x82f327ec
	if (ctx.cr6.eq) goto loc_82F327EC;
	// lis r31,28800
	ctx.r31.s64 = 1887436800;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f327ec
	if (ctx.cr6.eq) goto loc_82F327EC;
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f32774
	if (ctx.cr6.eq) goto loc_82F32774;
	// lwz r20,20(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// subf r18,r7,r5
	ctx.r18.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_82F32688:
	// lwzx r11,r18,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r23.u32);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r20
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// beq cr6,0x82f326b0
	if (ctx.cr6.eq) goto loc_82F326B0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82f32764
	if (!ctx.cr6.lt) goto loc_82F32764;
	// b 0x82f326b4
	goto loc_82F326B4;
loc_82F326B0:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82F326B4:
	// lwz r24,12(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f32890
	if (ctx.cr6.eq) goto loc_82F32890;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r30,r1,-192
	ctx.r30.s64 = ctx.r1.s64 + -192;
	// lwz r29,60(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// subf r27,r30,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwzx r28,r31,r5
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
loc_82F326E0:
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82f326fc
	if (!ctx.cr6.eq) goto loc_82F326FC;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f3273c
	if (ctx.cr6.eq) goto loc_82F3273C;
loc_82F326FC:
	// lwz r16,16(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// clrldi r15,r9,32
	ctx.r15.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r3,56(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// clrldi r14,r29,32
	ctx.r14.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// rldimi r14,r3,32,0
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r14.u64 & 0xFFFFFFFF);
	// lwzx r16,r16,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rldimi r15,r16,32,0
	ctx.r15.u64 = (__builtin_rotateleft64(ctx.r16.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r15.u64 & 0xFFFFFFFF);
	// cmpld cr6,r14,r15
	ctx.cr6.compare<uint64_t>(ctx.r14.u64, ctx.r15.u64, ctx.xer);
	// bne cr6,0x82f3274c
	if (!ctx.cr6.eq) goto loc_82F3274C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f3274c
	if (ctx.cr6.eq) goto loc_82F3274C;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r20.u32);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f3274c
	if (!ctx.cr6.eq) goto loc_82F3274C;
loc_82F3273C:
	// addi r3,r1,-176
	ctx.r3.s64 = ctx.r1.s64 + -176;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// stwx r25,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r25.u32);
loc_82F3274C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82f326e0
	if (ctx.cr6.lt) goto loc_82F326E0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82f32890
	if (ctx.cr6.eq) goto loc_82F32890;
loc_82F32764:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplw cr6,r17,r6
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82f32688
	if (ctx.cr6.lt) goto loc_82F32688;
loc_82F32774:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f327a8
	if (!ctx.cr6.eq) goto loc_82F327A8;
	// clrlwi. r10,r19,12
	ctx.r10.u64 = ctx.r19.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq 0x82f327a8
	if (ctx.cr0.eq) goto loc_82F327A8;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
loc_82F3278C:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82f32890
	if (ctx.cr6.eq) goto loc_82F32890;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f3278c
	if (ctx.cr6.lt) goto loc_82F3278C;
loc_82F327A8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82F327B4:
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x82f327d0
	if (!ctx.cr6.lt) goto loc_82F327D0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x82f327d4
	goto loc_82F327D4;
loc_82F327D0:
	// li r10,255
	ctx.r10.s64 = 255;
loc_82F327D4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f327b4
	if (!ctx.cr0.eq) goto loc_82F327B4;
loc_82F327E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F327E8:
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82F327EC:
	// clrlwi r7,r19,12
	ctx.r7.u64 = ctx.r19.u32 & 0xFFFFF;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82F327F8:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82f32808
	if (!ctx.cr6.lt) goto loc_82F32808;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82f32810
	goto loc_82F32810;
loc_82F32808:
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82F32810:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f327f8
	if (ctx.cr6.lt) goto loc_82F327F8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f327e4
	if (ctx.cr6.eq) goto loc_82F327E4;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82F3283C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bne cr6,0x82f3285c
	if (!ctx.cr6.eq) goto loc_82F3285C;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f3287c
	if (ctx.cr6.eq) goto loc_82F3287C;
loc_82F3285C:
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrldi r4,r9,32
	ctx.r4.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x82f32890
	if (!ctx.cr6.eq) goto loc_82F32890;
loc_82F3287C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82f3283c
	if (ctx.cr6.lt) goto loc_82F3283C;
	// b 0x82f327e4
	goto loc_82F327E4;
loc_82F32890:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f327e8
	goto loc_82F327E8;
}

__attribute__((alias("__imp__sub_82F32898"))) PPC_WEAK_FUNC(sub_82F32898);
PPC_FUNC_IMPL(__imp__sub_82F32898) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f328e4
	if (ctx.cr6.eq) goto loc_82F328E4;
loc_82F328A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f328d4
	if (ctx.cr6.eq) goto loc_82F328D4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82F328B8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82f328ec
	if (ctx.cr6.eq) goto loc_82F328EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82f328b8
	if (ctx.cr6.lt) goto loc_82F328B8;
loc_82F328D4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82f328a4
	if (ctx.cr6.lt) goto loc_82F328A4;
loc_82F328E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F328EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F328F4"))) PPC_WEAK_FUNC(sub_82F328F4);
PPC_FUNC_IMPL(__imp__sub_82F328F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F328F8"))) PPC_WEAK_FUNC(sub_82F328F8);
PPC_FUNC_IMPL(__imp__sub_82F328F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F32900;
	__savegprlr_14(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r14,772(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// stw r7,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r8.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// clrlwi r20,r11,12
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r20,r16
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r16.u32, ctx.xer);
	// ble cr6,0x82f32954
	if (!ctx.cr6.gt) goto loc_82F32954;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82f32954
	if (!ctx.cr6.eq) goto loc_82F32954;
loc_82F3294C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f32ec8
	goto loc_82F32EC8;
loc_82F32954:
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f3294c
	if (!ctx.cr6.eq) goto loc_82F3294C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f329c4
	if (!ctx.cr6.eq) goto loc_82F329C4;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82f32988
	if (ctx.cr6.eq) goto loc_82F32988;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_82F32988:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r9,r9,r19
	ctx.r9.s64 = ctx.r19.s64 - ctx.r9.s64;
loc_82F32998:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82f329a8
	if (!ctx.cr6.lt) goto loc_82F329A8;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82f329ac
	goto loc_82F329AC;
loc_82F329A8:
	// li r7,255
	ctx.r7.s64 = 255;
loc_82F329AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82f32998
	if (ctx.cr6.lt) goto loc_82F32998;
	// addi r19,r1,112
	ctx.r19.s64 = ctx.r1.s64 + 112;
loc_82F329C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// beq cr6,0x82f32e64
	if (ctx.cr6.eq) goto loc_82F32E64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,24440
	ctx.r11.s64 = ctx.r11.s64 + 24440;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82F329E0:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// li r17,0
	ctx.r17.s64 = 0;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f32e48
	if (ctx.cr0.eq) goto loc_82F32E48;
loc_82F329F0:
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x82F32A08;
	sub_82CB1160(ctx, base);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82cb16f0
	ctx.lr = 0x82F32A18;
	sub_82CB16F0(ctx, base);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82cb16f0
	ctx.lr = 0x82F32A28;
	sub_82CB16F0(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f32bac
	if (!ctx.cr6.gt) goto loc_82F32BAC;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F32A4C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// subfic r10,r24,1
	ctx.xer.ca = ctx.r24.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r24.s64;
	// bne cr6,0x82f32a5c
	if (!ctx.cr6.eq) goto loc_82F32A5C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82F32A5C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82f3294c
	if (!ctx.cr6.lt) goto loc_82F3294C;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,8(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lwz r8,20(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r31,r10,r22
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// lwzx r27,r11,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bge cr6,0x82f32b24
	if (!ctx.cr6.lt) goto loc_82F32B24;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f32ba4
	if (ctx.cr6.eq) goto loc_82F32BA4;
	// lwz r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,24(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// add r5,r9,r25
	ctx.r5.u64 = ctx.r9.u64 + ctx.r25.u64;
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82f32638
	ctx.lr = 0x82F32AE0;
	sub_82F32638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f32ba4
	if (!ctx.cr0.eq) goto loc_82F32BA4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x82f32b94
	if (ctx.cr6.lt) goto loc_82F32B94;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82f328f8
	ctx.lr = 0x82F32B20;
	sub_82F328F8(ctx, base);
	// b 0x82f32b70
	goto loc_82F32B70;
loc_82F32B24:
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,4
	ctx.r7.s64 = 4;
loc_82F32B3C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82f32b58
	if (!ctx.cr6.lt) goto loc_82F32B58;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82f32b5c
	goto loc_82F32B5C;
loc_82F32B58:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82F32B5C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f32b3c
	if (!ctx.cr0.eq) goto loc_82F32B3C;
loc_82F32B70:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82f32ba8
	if (ctx.cr6.eq) goto loc_82F32BA8;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// add r25,r23,r25
	ctx.r25.u64 = ctx.r23.u64 + ctx.r25.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f32a4c
	if (ctx.cr6.lt) goto loc_82F32A4C;
	// b 0x82f32ba8
	goto loc_82F32BA8;
loc_82F32B94:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f5e840
	ctx.lr = 0x82F32BA4;
	sub_82F5E840(ctx, base);
loc_82F32BA4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F32BA8:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82F32BAC:
	// lwz r28,8(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f32c74
	if (ctx.cr6.eq) goto loc_82F32C74;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F32BC0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// subfic r11,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r4.s64;
	// bne cr6,0x82f32bd0
	if (!ctx.cr6.eq) goto loc_82F32BD0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F32BD0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82f32c64
	if (ctx.cr6.lt) goto loc_82F32C64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f32c64
	if (ctx.cr6.eq) goto loc_82F32C64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82F32BF4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82f32c58
	if (ctx.cr6.eq) goto loc_82F32C58;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
loc_82F32C08:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f32c44
	if (ctx.cr6.eq) goto loc_82F32C44;
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r27,8(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
loc_82F32C28:
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82f32c54
	if (ctx.cr6.eq) goto loc_82F32C54;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82f32c28
	if (ctx.cr6.lt) goto loc_82F32C28;
loc_82F32C44:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82f32c08
	if (ctx.cr6.lt) goto loc_82F32C08;
	// b 0x82f32c58
	goto loc_82F32C58;
loc_82F32C54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F32C58:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82f32bf4
	if (!ctx.cr0.eq) goto loc_82F32BF4;
loc_82F32C64:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 + ctx.r20.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f32bc0
	if (ctx.cr6.lt) goto loc_82F32BC0;
loc_82F32C74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f32e2c
	if (!ctx.cr6.eq) goto loc_82F32E2C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f32e64
	if (!ctx.cr6.eq) goto loc_82F32E64;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f32e64
	if (!ctx.cr6.eq) goto loc_82F32E64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f32da0
	if (ctx.cr6.eq) goto loc_82F32DA0;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82F32CA4:
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f32d94
	if (ctx.cr6.eq) goto loc_82F32D94;
	// lwz r29,12(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82F32CC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f32d88
	if (ctx.cr6.eq) goto loc_82F32D88;
	// lwz r4,24(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82F32CD0:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f32d7c
	if (ctx.cr6.eq) goto loc_82F32D7C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f32d7c
	if (ctx.cr6.eq) goto loc_82F32D7C;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f32d38
	if (ctx.cr6.eq) goto loc_82F32D38;
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
loc_82F32D04:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f32d28
	if (ctx.cr6.eq) goto loc_82F32D28;
	// lwz r24,20(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f32d2c
	if (!ctx.cr6.eq) goto loc_82F32D2C;
loc_82F32D28:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F32D2C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f32d04
	if (!ctx.cr0.eq) goto loc_82F32D04;
loc_82F32D38:
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82f32d44
	if (!ctx.cr6.eq) goto loc_82F32D44;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82F32D44:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82f32d7c
	if (ctx.cr6.eq) goto loc_82F32D7C;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82F32D54:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f32d64
	if (!ctx.cr6.eq) goto loc_82F32D64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82F32D64:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f32d54
	if (!ctx.cr0.eq) goto loc_82F32D54;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82f32d7c
	if (ctx.cr6.eq) goto loc_82F32D7C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F32D7C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82f32cd0
	if (!ctx.cr0.eq) goto loc_82F32CD0;
loc_82F32D88:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82f32cc0
	if (!ctx.cr0.eq) goto loc_82F32CC0;
loc_82F32D94:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82f32ca4
	if (!ctx.cr0.eq) goto loc_82F32CA4;
loc_82F32DA0:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r30,40
	ctx.r30.s64 = 40;
loc_82F32DA8:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82f32e18
	if (ctx.cr6.eq) goto loc_82F32E18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f32e18
	if (ctx.cr6.eq) goto loc_82F32E18;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82F32DD0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f32e0c
	if (ctx.cr6.eq) goto loc_82F32E0C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82F32DE4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f32dfc
	if (ctx.cr6.eq) goto loc_82F32DFC;
	// lwz r29,56(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f32e00
	if (!ctx.cr6.eq) goto loc_82F32E00;
loc_82F32DFC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F32E00:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f32de4
	if (!ctx.cr0.eq) goto loc_82F32DE4;
loc_82F32E0C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82f32dd0
	if (!ctx.cr0.eq) goto loc_82F32DD0;
loc_82F32E18:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82f32da8
	if (!ctx.cr0.eq) goto loc_82F32DA8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f32e64
	if (ctx.cr6.eq) goto loc_82F32E64;
loc_82F32E2C:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f329f0
	if (ctx.cr6.lt) goto loc_82F329F0;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82F32E48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f32e64
	if (ctx.cr6.eq) goto loc_82F32E64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f329e0
	if (ctx.cr6.lt) goto loc_82F329E0;
	// b 0x82f32ec8
	goto loc_82F32EC8;
loc_82F32E64:
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F32E78;
	sub_82CB1160(ctx, base);
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// stwx r18,r31,r15
	PPC_STORE_U32(ctx.r31.u32 + ctx.r15.u32, ctx.r18.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,748(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
loc_82F32E94:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82f32eb4
	if (!ctx.cr6.eq) goto loc_82F32EB4;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f32eb8
	if (ctx.cr6.eq) goto loc_82F32EB8;
loc_82F32EB4:
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82F32EB8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// blt cr6,0x82f32e94
	if (ctx.cr6.lt) goto loc_82F32E94;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F32EC8:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F32ED0"))) PPC_WEAK_FUNC(sub_82F32ED0);
PPC_FUNC_IMPL(__imp__sub_82F32ED0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bge cr6,0x82f32f68
	if (!ctx.cr6.lt) goto loc_82F32F68;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82F32EFC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r3,r9,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f32f20
	if (ctx.cr0.eq) goto loc_82F32F20;
	// rlwinm. r3,r9,0,22,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f32f28
	if (ctx.cr0.eq) goto loc_82F32F28;
loc_82F32F20:
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f32f68
	if (ctx.cr0.eq) goto loc_82F32F68;
loc_82F32F28:
	// lwz r7,104(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwz r9,104(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// lwz r31,36(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r3,36(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lwz r7,32(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rldicr r31,r31,32,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// rldicr r3,r3,32,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 | ctx.r7.u64;
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82f32f68
	if (!ctx.cr6.eq) goto loc_82F32F68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f32efc
	if (ctx.cr6.lt) goto loc_82F32EFC;
loc_82F32F68:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32F7C"))) PPC_WEAK_FUNC(sub_82F32F7C);
PPC_FUNC_IMPL(__imp__sub_82F32F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32F80"))) PPC_WEAK_FUNC(sub_82F32F80);
PPC_FUNC_IMPL(__imp__sub_82F32F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F32F88;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f33028
	if (!ctx.cr6.gt) goto loc_82F33028;
loc_82F32FA8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f32fd8
	if (ctx.cr0.eq) goto loc_82F32FD8;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f32fe0
	if (ctx.cr0.eq) goto loc_82F32FE0;
loc_82F32FD8:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f33014
	if (ctx.cr0.eq) goto loc_82F33014;
loc_82F32FE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F32FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f33014
	if (!ctx.cr0.lt) goto loc_82F33014;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f32ed0
	ctx.lr = 0x82F3300C;
	sub_82F32ED0(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F33014:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f32fa8
	if (ctx.cr6.lt) goto loc_82F32FA8;
loc_82F33028:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f3303c
	if (ctx.cr0.eq) goto loc_82F3303C;
loc_82F33030:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f3317c
	goto loc_82F3317C;
loc_82F3303C:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f33170
	if (ctx.cr6.eq) goto loc_82F33170;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,24500
	ctx.r28.s64 = ctx.r11.s64 + 24500;
loc_82F33058:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f33088
	if (ctx.cr0.eq) goto loc_82F33088;
	// rlwinm. r8,r11,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f33090
	if (ctx.cr0.eq) goto loc_82F33090;
loc_82F33088:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f3315c
	if (ctx.cr0.eq) goto loc_82F3315C;
loc_82F33090:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82f3315c
	if (!ctx.cr6.lt) goto loc_82F3315C;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82F330B0:
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,112(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82f330f0
	if (!ctx.cr6.eq) goto loc_82F330F0;
	// lwz r9,108(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r5,108(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f330f0
	if (!ctx.cr6.eq) goto loc_82F330F0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// rlwinm. r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f33104
	if (!ctx.cr0.eq) goto loc_82F33104;
loc_82F330F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82f330b0
	if (ctx.cr6.lt) goto loc_82F330B0;
	// b 0x82f3315c
	goto loc_82F3315C;
loc_82F33104:
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4d2d8
	ctx.lr = 0x82F33118;
	sub_82F4D2D8(ctx, base);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4d2d8
	ctx.lr = 0x82F3312C;
	sub_82F4D2D8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// li r5,4501
	ctx.r5.s64 = 4501;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5e840
	ctx.lr = 0x82F33148;
	sub_82F5E840(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f32ed0
	ctx.lr = 0x82F33154;
	sub_82F32ED0(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F3315C:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82f33058
	if (ctx.cr6.lt) goto loc_82F33058;
loc_82F33170:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f33030
	if (!ctx.cr0.eq) goto loc_82F33030;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3317C:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33184"))) PPC_WEAK_FUNC(sub_82F33184);
PPC_FUNC_IMPL(__imp__sub_82F33184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F33188"))) PPC_WEAK_FUNC(sub_82F33188);
PPC_FUNC_IMPL(__imp__sub_82F33188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F33190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f331fc
	if (ctx.cr6.eq) goto loc_82F331FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f331fc
	if (!ctx.cr6.gt) goto loc_82F331FC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F331C8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82f33188
	ctx.lr = 0x82F331E8;
	sub_82F33188(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f331c8
	if (ctx.cr6.lt) goto loc_82F331C8;
loc_82F331FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33208"))) PPC_WEAK_FUNC(sub_82F33208);
PPC_FUNC_IMPL(__imp__sub_82F33208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F33210;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f3327c
	if (ctx.cr6.eq) goto loc_82F3327C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f3327c
	if (!ctx.cr6.gt) goto loc_82F3327C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F33248:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82f33208
	ctx.lr = 0x82F33268;
	sub_82F33208(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f33248
	if (ctx.cr6.lt) goto loc_82F33248;
loc_82F3327C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33288"))) PPC_WEAK_FUNC(sub_82F33288);
PPC_FUNC_IMPL(__imp__sub_82F33288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F33290;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f332fc
	if (ctx.cr6.eq) goto loc_82F332FC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f332fc
	if (!ctx.cr6.gt) goto loc_82F332FC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F332C8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82f33288
	ctx.lr = 0x82F332E8;
	sub_82F33288(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f332c8
	if (ctx.cr6.lt) goto loc_82F332C8;
loc_82F332FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33308"))) PPC_WEAK_FUNC(sub_82F33308);
PPC_FUNC_IMPL(__imp__sub_82F33308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F33310;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f3337c
	if (ctx.cr6.eq) goto loc_82F3337C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f3337c
	if (!ctx.cr6.gt) goto loc_82F3337C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F33348:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82f33308
	ctx.lr = 0x82F33368;
	sub_82F33308(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f33348
	if (ctx.cr6.lt) goto loc_82F33348;
loc_82F3337C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33388"))) PPC_WEAK_FUNC(sub_82F33388);
PPC_FUNC_IMPL(__imp__sub_82F33388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F33390;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f33460
	if (ctx.cr0.eq) goto loc_82F33460;
	// extsb r29,r6
	ctx.r29.s64 = ctx.r6.s8;
	// b 0x82f333cc
	goto loc_82F333CC;
loc_82F333C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_82F333CC:
	// bl 0x82cbde98
	ctx.lr = 0x82F333D0;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f333c0
	if (ctx.cr0.eq) goto loc_82F333C0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82F333E4;
	sub_82CC8F70(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82f33440
	if (!ctx.cr6.eq) goto loc_82F33440;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f3348c
	if (ctx.cr6.eq) goto loc_82F3348C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f33470
	if (ctx.cr6.eq) goto loc_82F33470;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
loc_82F3340C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82f33420
	if (!ctx.cr6.eq) goto loc_82F33420;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82F33420:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f3340c
	if (!ctx.cr0.eq) goto loc_82F3340C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f33470
	if (ctx.cr6.eq) goto loc_82F33470;
	// lwz r4,96(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// b 0x82f33474
	goto loc_82F33474;
loc_82F3343C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F33440:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbde98
	ctx.lr = 0x82F3344C;
	sub_82CBDE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f3343c
	if (!ctx.cr0.eq) goto loc_82F3343C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f333cc
	if (!ctx.cr0.eq) goto loc_82F333CC;
loc_82F33460:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82F33468:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82F33470:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F33474:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,4509
	ctx.r5.s64 = 4509;
	// addi r6,r11,24544
	ctx.r6.s64 = ctx.r11.s64 + 24544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f5e840
	ctx.lr = 0x82F33488;
	sub_82F5E840(ctx, base);
	// b 0x82f33460
	goto loc_82F33460;
loc_82F3348C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f33468
	goto loc_82F33468;
}

__attribute__((alias("__imp__sub_82F33498"))) PPC_WEAK_FUNC(sub_82F33498);
PPC_FUNC_IMPL(__imp__sub_82F33498) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F334A0"))) PPC_WEAK_FUNC(sub_82F334A0);
PPC_FUNC_IMPL(__imp__sub_82F334A0) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// stw r10,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// bl 0x82f55c58
	ctx.lr = 0x82F334D8;
	sub_82F55C58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f334e4
	if (ctx.cr0.lt) goto loc_82F334E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F334E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F334F4"))) PPC_WEAK_FUNC(sub_82F334F4);
PPC_FUNC_IMPL(__imp__sub_82F334F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F334F8"))) PPC_WEAK_FUNC(sub_82F334F8);
PPC_FUNC_IMPL(__imp__sub_82F334F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33500"))) PPC_WEAK_FUNC(sub_82F33500);
PPC_FUNC_IMPL(__imp__sub_82F33500) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3350C"))) PPC_WEAK_FUNC(sub_82F3350C);
PPC_FUNC_IMPL(__imp__sub_82F3350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F33510"))) PPC_WEAK_FUNC(sub_82F33510);
PPC_FUNC_IMPL(__imp__sub_82F33510) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33518"))) PPC_WEAK_FUNC(sub_82F33518);
PPC_FUNC_IMPL(__imp__sub_82F33518) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33524"))) PPC_WEAK_FUNC(sub_82F33524);
PPC_FUNC_IMPL(__imp__sub_82F33524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F33528"))) PPC_WEAK_FUNC(sub_82F33528);
PPC_FUNC_IMPL(__imp__sub_82F33528) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33530"))) PPC_WEAK_FUNC(sub_82F33530);
PPC_FUNC_IMPL(__imp__sub_82F33530) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3353C"))) PPC_WEAK_FUNC(sub_82F3353C);
PPC_FUNC_IMPL(__imp__sub_82F3353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F33540"))) PPC_WEAK_FUNC(sub_82F33540);
PPC_FUNC_IMPL(__imp__sub_82F33540) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33548"))) PPC_WEAK_FUNC(sub_82F33548);
PPC_FUNC_IMPL(__imp__sub_82F33548) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
loc_82F33550:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f3364c
	if (!ctx.cr6.gt) goto loc_82F3364C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F33568:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f33630
	if (ctx.cr6.eq) goto loc_82F33630;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82F33588:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f335a4
	if (ctx.cr0.eq) goto loc_82F335A4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82F335A4:
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f335b8
	if (ctx.cr6.eq) goto loc_82F335B8;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
loc_82F335B8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f335c8
	if (ctx.cr0.eq) goto loc_82F335C8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82F335C8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82f33588
	if (!ctx.cr0.eq) goto loc_82F33588;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82f33630
	if (ctx.cr6.eq) goto loc_82F33630;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f33630
	if (!ctx.cr6.gt) goto loc_82F33630;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F335F0:
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r6,r10,0,7,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f3361c
	if (!ctx.cr0.eq) goto loc_82F3361C;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F3361C:
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f335f0
	if (ctx.cr6.lt) goto loc_82F335F0;
loc_82F33630:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f33568
	if (ctx.cr6.lt) goto loc_82F33568;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82f33550
	if (!ctx.cr6.eq) goto loc_82F33550;
loc_82F3364C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f336a8
	if (!ctx.cr6.gt) goto loc_82F336A8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F33660:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f33694
	if (ctx.cr6.eq) goto loc_82F33694;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f33694
	if (ctx.cr0.eq) goto loc_82F33694;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82F33694:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f33660
	if (ctx.cr6.lt) goto loc_82F33660;
loc_82F336A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F336B8"))) PPC_WEAK_FUNC(sub_82F336B8);
PPC_FUNC_IMPL(__imp__sub_82F336B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F336C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,4416
	ctx.r10.s64 = 289406976;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f33884
	if (!ctx.cr6.eq) goto loc_82F33884;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f33884
	if (!ctx.cr6.eq) goto loc_82F33884;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f3371c
	if (!ctx.cr0.eq) goto loc_82F3371C;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r5,4552
	ctx.r5.s64 = 4552;
	// addi r6,r10,24624
	ctx.r6.s64 = ctx.r10.s64 + 24624;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82f5e840
	ctx.lr = 0x82F33710;
	sub_82F5E840(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f33888
	goto loc_82F33888;
loc_82F3371C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F33724;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f33738
	if (ctx.cr0.eq) goto loc_82F33738;
	// bl 0x82f4b940
	ctx.lr = 0x82F33730;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f3373c
	goto loc_82F3373C;
loc_82F33738:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F3373C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f33750
	if (!ctx.cr6.eq) goto loc_82F33750;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f33888
	goto loc_82F33888;
loc_82F33750:
	// lis r4,29776
	ctx.r4.s64 = 1951399936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F3376C;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82f3378c
	if (!ctx.cr0.lt) goto loc_82F3378C;
loc_82F33778:
	// bl 0x82f4b990
	ctx.lr = 0x82F3377C;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F33784;
	sub_82F4C098(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82f33888
	goto loc_82F33888;
loc_82F3378C:
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F33794;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f337a4
	if (!ctx.cr0.lt) goto loc_82F337A4;
loc_82F3379C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f33778
	goto loc_82F33778;
loc_82F337A4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82f4cd50
	ctx.lr = 0x82F337C0;
	sub_82F4CD50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f3379c
	if (ctx.cr6.eq) goto loc_82F3379C;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82f4c668
	ctx.lr = 0x82F337F4;
	sub_82F4C668(ctx, base);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f33850
	if (!ctx.cr6.eq) goto loc_82F33850;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// b 0x82f3385c
	goto loc_82F3385C;
loc_82F33850:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
loc_82F3385C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F33868;
	sub_82F4C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F33874;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F3387C;
	sub_82F4C098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f33888
	goto loc_82F33888;
loc_82F33884:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F33888:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33890"))) PPC_WEAK_FUNC(sub_82F33890);
PPC_FUNC_IMPL(__imp__sub_82F33890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82F33898;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r20,8320
	ctx.r20.s64 = 545259520;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r24,r11,12
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82f338c4
	if (ctx.cr6.eq) goto loc_82F338C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f33b14
	goto loc_82F33B14;
loc_82F338C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r21,r24,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F338D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f33970
	if (ctx.cr6.eq) goto loc_82F33970;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82F338F4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r3,r3,32,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// cmpld cr6,r3,r4
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x82f33970
	if (!ctx.cr6.eq) goto loc_82F33970;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicr r3,r3,32,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82f33970
	if (!ctx.cr6.eq) goto loc_82F33970;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82f338f4
	if (ctx.cr6.lt) goto loc_82F338F4;
loc_82F33970:
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82f33afc
	if (ctx.cr6.eq) goto loc_82F33AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4cdf0
	ctx.lr = 0x82F33994;
	sub_82F4CDF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82f33b1c
	if (ctx.cr6.eq) goto loc_82F33B1C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r25,r26,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwzx r29,r25,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// beq cr6,0x82f33a90
	if (ctx.cr6.eq) goto loc_82F33A90;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82F339C0:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4cf10
	ctx.lr = 0x82F339F4;
	sub_82F4CF10(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f33b1c
	if (ctx.cr6.eq) goto loc_82F33B1C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blt cr6,0x82f339c0
	if (ctx.cr6.lt) goto loc_82F339C0;
loc_82F33A90:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F33A94:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f33ac4
	if (ctx.cr6.gt) goto loc_82F33AC4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f33ae0
	if (ctx.cr6.eq) goto loc_82F33AE0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82f33ae0
	if (!ctx.cr6.eq) goto loc_82F33AE0;
loc_82F33AC4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82f33a94
	goto loc_82F33A94;
loc_82F33AE0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
loc_82F33AFC:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x82f338d4
	if (ctx.cr6.lt) goto loc_82F338D4;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82F33B14:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82F33B1C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f33b14
	goto loc_82F33B14;
}

__attribute__((alias("__imp__sub_82F33B28"))) PPC_WEAK_FUNC(sub_82F33B28);
PPC_FUNC_IMPL(__imp__sub_82F33B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F33B30;
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
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f33b94
	if (ctx.cr0.eq) goto loc_82F33B94;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f33b94
	if (!ctx.cr6.eq) goto loc_82F33B94;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f33d54
	if (ctx.cr6.eq) goto loc_82F33D54;
loc_82F33B94:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f33bd8
	if (!ctx.cr6.gt) goto loc_82F33BD8;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82F33BAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f33bcc
	if (!ctx.cr6.eq) goto loc_82F33BCC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82f33bcc
	if (ctx.cr6.lt) goto loc_82F33BCC;
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
loc_82F33BCC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f33bac
	if (!ctx.cr0.eq) goto loc_82F33BAC;
loc_82F33BD8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4cdf0
	ctx.lr = 0x82F33BF0;
	sub_82F4CDF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f33c04
	if (!ctx.cr6.eq) goto loc_82F33C04;
loc_82F33BF8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f33d60
	goto loc_82F33D60;
loc_82F33C04:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f4b998
	ctx.lr = 0x82F33C1C;
	sub_82F4B998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f33d60
	if (ctx.cr0.lt) goto loc_82F33D60;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f31,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
loc_82F33C34:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F33C4C;
	sub_82F4CD50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f33bf8
	if (ctx.cr6.eq) goto loc_82F33BF8;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4c760
	ctx.lr = 0x82F33C7C;
	sub_82F4C760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f33d60
	if (ctx.cr0.lt) goto loc_82F33D60;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82f33c34
	if (ctx.cr6.lt) goto loc_82F33C34;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f33d40
	if (!ctx.cr6.gt) goto loc_82F33D40;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F33D1C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82f33d1c
	if (ctx.cr6.gt) goto loc_82F33D1C;
loc_82F33D40:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_82F33D54:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
loc_82F33D60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33D6C"))) PPC_WEAK_FUNC(sub_82F33D6C);
PPC_FUNC_IMPL(__imp__sub_82F33D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F33D70"))) PPC_WEAK_FUNC(sub_82F33D70);
PPC_FUNC_IMPL(__imp__sub_82F33D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twllei r11,0
	// beq 0x82f33dbc
	if (ctx.cr0.eq) goto loc_82F33DBC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F33D90:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// bne 0x82f33d90
	if (!ctx.cr0.eq) goto loc_82F33D90;
loc_82F33DBC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33DE4"))) PPC_WEAK_FUNC(sub_82F33DE4);
PPC_FUNC_IMPL(__imp__sub_82F33DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F33DE8"))) PPC_WEAK_FUNC(sub_82F33DE8);
PPC_FUNC_IMPL(__imp__sub_82F33DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F33DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r29,r10,12
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f33ecc
	if (!ctx.cr6.eq) goto loc_82F33ECC;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4ba18
	ctx.lr = 0x82F33E18;
	sub_82F4BA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f33ecc
	if (!ctx.cr0.eq) goto loc_82F33ECC;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4bd50
	ctx.lr = 0x82F33E28;
	sub_82F4BD50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f33e40
	if (ctx.cr0.eq) goto loc_82F33E40;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4baf8
	ctx.lr = 0x82F33E38;
	sub_82F4BAF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f33ecc
	if (ctx.cr0.eq) goto loc_82F33ECC;
loc_82F33E40:
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x82f33ecc
	if (ctx.cr6.gt) goto loc_82F33ECC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f33ecc
	if (ctx.cr6.eq) goto loc_82F33ECC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F33E54:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f33eb8
	if (ctx.cr0.eq) goto loc_82F33EB8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F33E68:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f33ea8
	if (!ctx.cr6.gt) goto loc_82F33EA8;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f33d70
	ctx.lr = 0x82F33EA8;
	sub_82F33D70(ctx, base);
loc_82F33EA8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f33e68
	if (ctx.cr6.lt) goto loc_82F33E68;
loc_82F33EB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f33e54
	if (ctx.cr6.lt) goto loc_82F33E54;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f33ed0
	goto loc_82F33ED0;
loc_82F33ECC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F33ED0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33ED8"))) PPC_WEAK_FUNC(sub_82F33ED8);
PPC_FUNC_IMPL(__imp__sub_82F33ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82F33EE0;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,260(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r20,r11,12
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x82f34388
	if (ctx.cr0.eq) goto loc_82F34388;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f34388
	if (ctx.cr6.eq) goto loc_82F34388;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f34388
	if (ctx.cr6.eq) goto loc_82F34388;
	// divwu. r18,r11,r20
	ctx.r18.u32 = ctx.r11.u32 / ctx.r20.u32;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// twllei r20,0
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82f34388
	if (ctx.cr0.eq) goto loc_82F34388;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F33F40:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f33fc4
	if (ctx.cr6.eq) goto loc_82F33FC4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f33fc4
	if (!ctx.cr0.eq) goto loc_82F33FC4;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f33fb0
	if (ctx.cr6.eq) goto loc_82F33FB0;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82F33F94:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f33fb0
	if (ctx.cr6.eq) goto loc_82F33FB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f33f94
	if (ctx.cr6.lt) goto loc_82F33F94;
loc_82F33FB0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f33fbc
	if (!ctx.cr6.eq) goto loc_82F33FBC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82F33FBC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82F33FC4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r19,r7
	ctx.r7.u64 = ctx.r19.u64 + ctx.r7.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x82f33f40
	if (ctx.cr6.lt) goto loc_82F33F40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f34388
	if (ctx.cr6.eq) goto loc_82F34388;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfd f31,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// beq cr6,0x82f340d8
	if (ctx.cr6.eq) goto loc_82F340D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F33FF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f3404c
	if (ctx.cr6.eq) goto loc_82F3404C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
loc_82F34010:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f34030
	if (ctx.cr6.eq) goto loc_82F34030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f34010
	if (ctx.cr6.lt) goto loc_82F34010;
	// b 0x82f34044
	goto loc_82F34044;
loc_82F34030:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82F34044:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f340c8
	if (ctx.cr6.lt) goto loc_82F340C8;
loc_82F3404C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// li r6,3
	ctx.r6.s64 = 3;
	// beq cr6,0x82f3405c
	if (ctx.cr6.eq) goto loc_82F3405C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82F3405C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,140(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 140);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F34070;
	sub_82F4CD50(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// beq cr6,0x82f34250
	if (ctx.cr6.eq) goto loc_82F34250;
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r9,20(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_82F340C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f33ff8
	if (ctx.cr6.lt) goto loc_82F33FF8;
loc_82F340D8:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82F340E8:
	// lwz r10,260(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f34224
	if (ctx.cr6.eq) goto loc_82F34224;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f34224
	if (!ctx.cr0.eq) goto loc_82F34224;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82f3421c
	if (ctx.cr6.eq) goto loc_82F3421C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82F34140:
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4cd50
	ctx.lr = 0x82F34170;
	sub_82F4CD50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f34250
	if (ctx.cr6.eq) goto loc_82F34250;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c668
	ctx.lr = 0x82F34194;
	sub_82F4C668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f3438c
	if (ctx.cr0.lt) goto loc_82F3438C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f341f8
	if (ctx.cr6.eq) goto loc_82F341F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F341C0;
	sub_82F4CD50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f34250
	if (ctx.cr6.eq) goto loc_82F34250;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,56(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82f4c668
	ctx.lr = 0x82F341EC;
	sub_82F4C668(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82F341F8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x82f34140
	if (ctx.cr6.lt) goto loc_82F34140;
loc_82F3421C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_82F34224:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 + ctx.r24.u64;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x82f340e8
	if (ctx.cr6.lt) goto loc_82F340E8;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F3423C;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f3425c
	if (ctx.cr0.eq) goto loc_82F3425C;
	// bl 0x82f4b940
	ctx.lr = 0x82F34248;
	sub_82F4B940(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f34260
	goto loc_82F34260;
loc_82F34250:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f3438c
	goto loc_82F3438C;
loc_82F3425C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F34260:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f34250
	if (ctx.cr6.eq) goto loc_82F34250;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f342f4
	if (ctx.cr6.eq) goto loc_82F342F4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F34280:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f342b4
	if (ctx.cr6.eq) goto loc_82F342B4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
loc_82F34298:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82f342b4
	if (ctx.cr6.eq) goto loc_82F342B4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f34298
	if (ctx.cr6.lt) goto loc_82F34298;
loc_82F342B4:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f342e4
	if (!ctx.cr6.eq) goto loc_82F342E4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r11,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r9,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82F342E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82f34280
	if (ctx.cr6.lt) goto loc_82F34280;
loc_82F342F4:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F34310;
	sub_82F4C0D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x82f34330
	if (!ctx.cr0.lt) goto loc_82F34330;
loc_82F3431C:
	// bl 0x82f4b990
	ctx.lr = 0x82F34320;
	sub_82F4B990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F34328;
	sub_82F4C098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f3438c
	goto loc_82F3438C;
loc_82F34330:
	// lwz r4,260(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F34338;
	sub_82F4B998(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82f34348
	if (!ctx.cr0.lt) goto loc_82F34348;
loc_82F34340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f3431c
	goto loc_82F3431C;
loc_82F34348:
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F3435C;
	sub_82CB1160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82cb1160
	ctx.lr = 0x82F3436C;
	sub_82CB1160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4cbe0
	ctx.lr = 0x82F34378;
	sub_82F4CBE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f34340
	if (ctx.cr0.lt) goto loc_82F34340;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f3438c
	goto loc_82F3438C;
loc_82F34388:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F3438C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34398"))) PPC_WEAK_FUNC(sub_82F34398);
PPC_FUNC_IMPL(__imp__sub_82F34398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F343A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82f343e8
	if (ctx.cr6.eq) goto loc_82F343E8;
loc_82F343E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f34524
	goto loc_82F34524;
loc_82F343E8:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f343e0
	if (!ctx.cr0.eq) goto loc_82F343E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r11,21768
	ctx.r5.s64 = ctx.r11.s64 + 21768;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F34440;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f34524
	if (!ctx.cr0.eq) goto loc_82F34524;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F34450;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f34460
	if (ctx.cr0.eq) goto loc_82F34460;
	// bl 0x82f4b940
	ctx.lr = 0x82F3445C;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F34460:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f34474
	if (!ctx.cr6.eq) goto loc_82F34474;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f34524
	goto loc_82F34524;
loc_82F34474:
	// lis r4,28880
	ctx.r4.s64 = 1892679680;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F34490;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82f344b0
	if (!ctx.cr0.lt) goto loc_82F344B0;
loc_82F3449C:
	// bl 0x82f4b990
	ctx.lr = 0x82F344A0;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F344A8;
	sub_82F4C098(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82f34524
	goto loc_82F34524;
loc_82F344B0:
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F344B8;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f344c8
	if (!ctx.cr0.lt) goto loc_82F344C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f3449c
	goto loc_82F3449C;
loc_82F344C8:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x82F344E0;
	sub_82CB1160(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F3450C;
	sub_82F4C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F34518;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F34520;
	sub_82F4C098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F34524:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3452C"))) PPC_WEAK_FUNC(sub_82F3452C);
PPC_FUNC_IMPL(__imp__sub_82F3452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34530"))) PPC_WEAK_FUNC(sub_82F34530);
PPC_FUNC_IMPL(__imp__sub_82F34530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f34580
	if (!ctx.cr0.eq) goto loc_82F34580;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F34580:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f345c8
	if (ctx.cr6.eq) goto loc_82F345C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F3458C:
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// bne 0x82f3458c
	if (!ctx.cr0.eq) goto loc_82F3458C;
loc_82F345C8:
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F345DC"))) PPC_WEAK_FUNC(sub_82F345DC);
PPC_FUNC_IMPL(__imp__sub_82F345DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F345E0"))) PPC_WEAK_FUNC(sub_82F345E0);
PPC_FUNC_IMPL(__imp__sub_82F345E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82F345E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r21,r11,12
	ctx.r21.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f34644
	if (ctx.cr6.eq) goto loc_82F34644;
loc_82F3463C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f34ab4
	goto loc_82F34AB4;
loc_82F34644:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f34890
	if (ctx.cr6.eq) goto loc_82F34890;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r21,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,20(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
loc_82F3468C:
	// lwzx r11,r4,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,4(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r20,r3,r5
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// lwzx r3,r23,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r5.u32);
	// lwz r23,4(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm. r23,r23,0,23,23
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82f34700
	if (ctx.cr0.eq) goto loc_82F34700;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f34700
	if (!ctx.cr6.eq) goto loc_82F34700;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f34700
	if (!ctx.cr6.eq) goto loc_82F34700;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r23,r11,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f34700
	if (!ctx.cr6.eq) goto loc_82F34700;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82f34704
	goto loc_82F34704;
loc_82F34700:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F34704:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f34748
	if (ctx.cr0.eq) goto loc_82F34748;
	// lfd f13,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f34748
	if (!ctx.cr6.eq) goto loc_82F34748;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f34748
	if (!ctx.cr6.eq) goto loc_82F34748;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f34748
	if (!ctx.cr6.eq) goto loc_82F34748;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82f3474c
	goto loc_82F3474C;
loc_82F34748:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82F3474C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f3468c
	if (!ctx.cr0.eq) goto loc_82F3468C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82f347ac
	if (ctx.cr6.eq) goto loc_82F347AC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f347ac
	if (!ctx.cr6.eq) goto loc_82F347AC;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F34778;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f34788
	if (ctx.cr0.eq) goto loc_82F34788;
	// bl 0x82f4b940
	ctx.lr = 0x82F34784;
	sub_82F4B940(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82F34788:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82f3479c
	if (!ctx.cr6.eq) goto loc_82F3479C;
loc_82F34790:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f34ab4
	goto loc_82F34AB4;
loc_82F3479C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r11,1803
	ctx.r11.s64 = 1803;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f347f0
	goto loc_82F347F0;
loc_82F347AC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f34890
	if (ctx.cr6.eq) goto loc_82F34890;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82f34890
	if (!ctx.cr6.eq) goto loc_82F34890;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82f3463c
	if (!ctx.cr6.eq) goto loc_82F3463C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F347CC;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f347dc
	if (ctx.cr0.eq) goto loc_82F347DC;
	// bl 0x82f4b940
	ctx.lr = 0x82F347D8;
	sub_82F4B940(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82F347DC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f34790
	if (ctx.cr6.eq) goto loc_82F34790;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r11,451
	ctx.r11.s64 = 451;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_82F347F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F34804;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f34a98
	if (ctx.cr0.lt) goto loc_82F34A98;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,260(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F34818;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f34a98
	if (ctx.cr0.lt) goto loc_82F34A98;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F34834;
	sub_82CB1160(ctx, base);
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82cb1160
	ctx.lr = 0x82F34848;
	sub_82CB1160(ctx, base);
	// lwz r10,260(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82f3486c
	if (!ctx.cr6.eq) goto loc_82F3486C;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82F3486C:
	// bl 0x82cb1160
	ctx.lr = 0x82F34870;
	sub_82CB1160(ctx, base);
loc_82F34870:
	// lwz r11,256(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 256);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4c400
	ctx.lr = 0x82F34888;
	sub_82F4C400(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f34a98
	goto loc_82F34A98;
loc_82F34890:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r4,260(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// cntlzw r11,r18
	ctx.r11.u64 = ctx.r18.u32 == 0 ? 32 : __builtin_clz(ctx.r18.u32);
	// addi r5,r10,18472
	ctx.r5.s64 = ctx.r10.s64 + 18472;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F348C4;
	sub_82F328F8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82f34ab0
	if (!ctx.cr0.eq) goto loc_82F34AB0;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
loc_82F348D8:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_82F348DC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f34a74
	if (ctx.cr6.eq) goto loc_82F34A74;
	// lwz r30,20(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r25,r20,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,16(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
loc_82F348F4:
	// subf r11,r25,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r25.s64;
	// subf r10,r23,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r23.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// add r7,r25,r4
	ctx.r7.u64 = ctx.r25.u64 + ctx.r4.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r23,r4
	ctx.r7.u64 = ctx.r23.u64 + ctx.r4.u64;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwzx r5,r5,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwzx r28,r28,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwzx r27,r29,r26
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// beq cr6,0x82f34994
	if (ctx.cr6.eq) goto loc_82F34994;
	// lwz r29,56(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f34994
	if (ctx.cr6.eq) goto loc_82F34994;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f349c0
	if (ctx.cr6.eq) goto loc_82F349C0;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f349c0
	if (!ctx.cr6.eq) goto loc_82F349C0;
loc_82F34994:
	// lwz r10,60(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// clrldi r7,r6,32
	ctx.r7.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// lwz r5,60(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// clrldi r29,r9,32
	ctx.r29.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// xoris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 ^ 524288;
	// rldimi r29,r5,32,0
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r29.u64 & 0xFFFFFFFF);
	// rldimi r7,r10,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r7,r29
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r29.u64, ctx.xer);
	// bne cr6,0x82f349c0
	if (!ctx.cr6.eq) goto loc_82F349C0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82f34a40
	goto loc_82F34A40;
loc_82F349C0:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f34a3c
	if (!ctx.cr6.eq) goto loc_82F34A3C;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f349f0
	if (ctx.cr6.eq) goto loc_82F349F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f349f0
	if (ctx.cr6.eq) goto loc_82F349F0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f34a04
	if (ctx.cr6.eq) goto loc_82F34A04;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f34a04
	if (!ctx.cr6.eq) goto loc_82F34A04;
loc_82F349F0:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f34a30
	if (ctx.cr6.eq) goto loc_82F34A30;
loc_82F34A04:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f34a3c
	if (ctx.cr0.eq) goto loc_82F34A3C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f34a3c
	if (ctx.cr0.eq) goto loc_82F34A3C;
	// lfd f0,32(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfd f13,32(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f34a3c
	if (!ctx.cr6.eq) goto loc_82F34A3C;
loc_82F34A30:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f34a44
	goto loc_82F34A44;
loc_82F34A3C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82F34A40:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F34A44:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f34a54
	if (!ctx.cr6.eq) goto loc_82F34A54;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// b 0x82f34a60
	goto loc_82F34A60;
loc_82F34A54:
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f34a60
	if (ctx.cr6.eq) goto loc_82F34A60;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82F34A60:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f34a7c
	if (ctx.cr6.eq) goto loc_82F34A7C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82f348f4
	if (ctx.cr6.lt) goto loc_82F348F4;
loc_82F34A74:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f34abc
	if (!ctx.cr6.eq) goto loc_82F34ABC;
loc_82F34A7C:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// blt cr6,0x82f348dc
	if (ctx.cr6.lt) goto loc_82F348DC;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 2, ctx.xer);
	// blt cr6,0x82f348d8
	if (ctx.cr6.lt) goto loc_82F348D8;
loc_82F34A94:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F34A98:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f34ab0
	if (ctx.cr6.eq) goto loc_82F34AB0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F34AA8;
	sub_82F4B990(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F34AB0;
	sub_82F4C098(ctx, base);
loc_82F34AB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82F34AB4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82F34ABC:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F34AC4;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f34ad4
	if (ctx.cr0.eq) goto loc_82F34AD4;
	// bl 0x82f4b940
	ctx.lr = 0x82F34AD0;
	sub_82F4B940(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82F34AD4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82f34ae8
	if (!ctx.cr6.eq) goto loc_82F34AE8;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82f34ab0
	goto loc_82F34AB0;
loc_82F34AE8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82f34c28
	if (ctx.cr6.eq) goto loc_82F34C28;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// beq cr6,0x82f34c30
	if (ctx.cr6.eq) goto loc_82F34C30;
loc_82F34AF8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82f34b28
	if (!ctx.cr6.eq) goto loc_82F34B28;
loc_82F34B00:
	// li r11,451
	ctx.r11.s64 = 451;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F34B20;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f34a98
	if (ctx.cr0.lt) goto loc_82F34A98;
loc_82F34B28:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,260(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F34B34;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f34a98
	if (ctx.cr0.lt) goto loc_82F34A98;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F34B54;
	sub_82CB1160(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r30,r20,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F34B6C;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subf r4,r30,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F34B84;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r8,r6,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f34bd4
	if (!ctx.cr6.eq) goto loc_82F34BD4;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f34a94
	if (ctx.cr6.eq) goto loc_82F34A94;
loc_82F34BD4:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rldicr r9,r9,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x82f34a94
	if (ctx.cr6.eq) goto loc_82F34A94;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f34870
	if (ctx.cr6.eq) goto loc_82F34870;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r22,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r22.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f34c20
	if (ctx.cr6.eq) goto loc_82F34C20;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb15e8
	ctx.lr = 0x82F34C20;
	sub_82CB15E8(ctx, base);
loc_82F34C20:
	// stw r31,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r31.u32);
	// b 0x82f34ab0
	goto loc_82F34AB0;
loc_82F34C28:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82f34c60
	if (!ctx.cr6.eq) goto loc_82F34C60;
loc_82F34C30:
	// li r11,1803
	ctx.r11.s64 = 1803;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F34C50;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f34a98
	if (ctx.cr0.lt) goto loc_82F34A98;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82f34af8
	if (!ctx.cr6.eq) goto loc_82F34AF8;
loc_82F34C60:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// beq cr6,0x82f34b00
	if (ctx.cr6.eq) goto loc_82F34B00;
	// b 0x82f34b28
	goto loc_82F34B28;
}

__attribute__((alias("__imp__sub_82F34C6C"))) PPC_WEAK_FUNC(sub_82F34C6C);
PPC_FUNC_IMPL(__imp__sub_82F34C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34C70"))) PPC_WEAK_FUNC(sub_82F34C70);
PPC_FUNC_IMPL(__imp__sub_82F34C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82F34C78;
	__savegprlr_15(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cntlzw r10,r19
	ctx.r10.u64 = ctx.r19.u32 == 0 ? 32 : __builtin_clz(ctx.r19.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r31,r11,18696
	ctx.r31.s64 = ctx.r11.s64 + 18696;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// clrlwi r28,r9,12
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r31,-128
	ctx.r5.s64 = ctx.r31.s64 + -128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F34CF4;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f34d30
	if (ctx.cr0.eq) goto loc_82F34D30;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// bl 0x82f328f8
	ctx.lr = 0x82F34D28;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f34ea8
	if (!ctx.cr0.eq) goto loc_82F34EA8;
loc_82F34D30:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// addi r23,r1,144
	ctx.r23.s64 = ctx.r1.s64 + 144;
	// addi r24,r1,160
	ctx.r24.s64 = ctx.r1.s64 + 160;
	// lfd f0,24672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24672);
loc_82F34D44:
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// addi r25,r1,176
	ctx.r25.s64 = ctx.r1.s64 + 176;
	// addi r26,r1,192
	ctx.r26.s64 = ctx.r1.s64 + 192;
loc_82F34D50:
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f34e58
	if (ctx.cr6.eq) goto loc_82F34E58;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82F34D74:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r31,r31,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82f34e58
	if (!ctx.cr6.eq) goto loc_82F34E58;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82f34e58
	if (!ctx.cr6.eq) goto loc_82F34E58;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82f34e58
	if (!ctx.cr6.eq) goto loc_82F34E58;
	// lwz r15,4(r8)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r15,r15,r6
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r6.u32);
	// lwz r15,4(r15)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// rlwinm. r15,r15,0,23,23
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x82f34e58
	if (ctx.cr0.eq) goto loc_82F34E58;
	// lwz r15,4(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r15,r15,r6
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r6.u32);
	// lwz r15,4(r15)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// rlwinm. r15,r15,0,23,23
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x82f34e58
	if (ctx.cr0.eq) goto loc_82F34E58;
	// lwz r15,4(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r15,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r6.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82f34e58
	if (ctx.cr0.eq) goto loc_82F34E58;
	// lfd f12,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// lfd f13,32(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// lfd f12,32(r3)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82f34e58
	if (ctx.cr6.gt) goto loc_82F34E58;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82f34e58
	if (!ctx.cr6.eq) goto loc_82F34E58;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f34d74
	if (ctx.cr6.lt) goto loc_82F34D74;
loc_82F34E58:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f34eb0
	if (ctx.cr6.eq) goto loc_82F34EB0;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,-16
	ctx.r26.s64 = ctx.r26.s64 + -16;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x82f34d50
	if (ctx.cr6.lt) goto loc_82F34D50;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,-16
	ctx.r24.s64 = ctx.r24.s64 + -16;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// blt cr6,0x82f34d44
	if (ctx.cr6.lt) goto loc_82F34D44;
loc_82F34E88:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F34E8C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f34ea4
	if (ctx.cr6.eq) goto loc_82F34EA4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F34E9C;
	sub_82F4B990(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F34EA4;
	sub_82F4C098(ctx, base);
loc_82F34EA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F34EA8:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_82F34EB0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F34EB8;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f34ecc
	if (ctx.cr0.eq) goto loc_82F34ECC;
	// bl 0x82f4b940
	ctx.lr = 0x82F34EC4;
	sub_82F4B940(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f34ed0
	goto loc_82F34ED0;
loc_82F34ECC:
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82F34ED0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f34ee4
	if (!ctx.cr6.eq) goto loc_82F34EE4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82f34ea4
	goto loc_82F34EA4;
loc_82F34EE4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82f34f04
	if (ctx.cr6.eq) goto loc_82F34F04;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82f34e88
	if (!ctx.cr6.eq) goto loc_82F34E88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r11,451
	ctx.r11.s64 = 451;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f34f10
	goto loc_82F34F10;
loc_82F34F04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r11,1803
	ctx.r11.s64 = 1803;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_82F34F10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F34F24;
	sub_82F4C0D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f34e8c
	if (ctx.cr0.lt) goto loc_82F34E8C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F34F38;
	sub_82F4B998(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f34e8c
	if (ctx.cr0.lt) goto loc_82F34E8C;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F34F58;
	sub_82CB1160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb1160
	ctx.lr = 0x82F34F68;
	sub_82CB1160(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// beq cr6,0x82f34f8c
	if (ctx.cr6.eq) goto loc_82F34F8C;
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82f34fa4
	goto loc_82F34FA4;
loc_82F34F8C:
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82F34FA4:
	// bl 0x82cb1160
	ctx.lr = 0x82F34FA8;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r8,r6,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f34ff8
	if (!ctx.cr6.eq) goto loc_82F34FF8;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f34e88
	if (ctx.cr6.eq) goto loc_82F34E88;
loc_82F34FF8:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rldicr r9,r9,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x82f34e88
	if (ctx.cr6.eq) goto loc_82F34E88;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f35050
	if (ctx.cr6.eq) goto loc_82F35050;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f35048
	if (ctx.cr6.eq) goto loc_82F35048;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb15e8
	ctx.lr = 0x82F35048;
	sub_82CB15E8(ctx, base);
loc_82F35048:
	// stw r31,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r31.u32);
	// b 0x82f35068
	goto loc_82F35068;
loc_82F35050:
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4c400
	ctx.lr = 0x82F35068;
	sub_82F4C400(ctx, base);
loc_82F35068:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x82f34e8c
	goto loc_82F34E8C;
}

__attribute__((alias("__imp__sub_82F35070"))) PPC_WEAK_FUNC(sub_82F35070);
PPC_FUNC_IMPL(__imp__sub_82F35070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F35078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f35104
	if (!ctx.cr6.gt) goto loc_82F35104;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F35094:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f350f0
	if (ctx.cr6.eq) goto loc_82F350F0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82f350d0
	goto loc_82F350D0;
loc_82F350B4:
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82F350D0:
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f350b4
	if (!ctx.cr6.eq) goto loc_82F350B4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f350f0
	if (ctx.cr6.eq) goto loc_82F350F0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x82f4c760
	ctx.lr = 0x82F350F0;
	sub_82F4C760(ctx, base);
loc_82F350F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f35094
	if (ctx.cr6.lt) goto loc_82F35094;
loc_82F35104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35110"))) PPC_WEAK_FUNC(sub_82F35110);
PPC_FUNC_IMPL(__imp__sub_82F35110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F35118;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f35170
	if (ctx.cr6.eq) goto loc_82F35170;
	// lis r9,4176
	ctx.r9.s64 = 273678336;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f35170
	if (ctx.cr6.eq) goto loc_82F35170;
	// lis r9,4192
	ctx.r9.s64 = 274726912;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f35170
	if (ctx.cr6.eq) goto loc_82F35170;
	// lis r9,4144
	ctx.r9.s64 = 271581184;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f35170
	if (ctx.cr6.eq) goto loc_82F35170;
	// lis r9,4208
	ctx.r9.s64 = 275775488;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f35170
	if (ctx.cr6.eq) goto loc_82F35170;
loc_82F35168:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f354d4
	goto loc_82F354D4;
loc_82F35170:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82f35168
	if (!ctx.cr6.eq) goto loc_82F35168;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r7,84(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82f35168
	if (ctx.cr6.eq) goto loc_82F35168;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f351e8
	if (ctx.cr6.eq) goto loc_82F351E8;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
loc_82F351C0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwz r8,76(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82f351dc
	if (!ctx.cr6.gt) goto loc_82F351DC;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82F351DC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f351c0
	if (!ctx.cr0.eq) goto loc_82F351C0;
loc_82F351E8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rldicr r31,r9,32,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// cmpld cr6,r3,r8
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82f35240
	if (!ctx.cr6.eq) goto loc_82F35240;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f35240
	if (!ctx.cr6.eq) goto loc_82F35240;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f35240
	if (ctx.cr6.eq) goto loc_82F35240;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F35240:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f35168
	if (ctx.cr6.gt) goto loc_82F35168;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82f35260
	if (!ctx.cr6.eq) goto loc_82F35260;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f35168
	if (!ctx.cr6.eq) goto loc_82F35168;
loc_82F35260:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f35298
	if (ctx.cr0.eq) goto loc_82F35298;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f35168
	if (ctx.cr6.eq) goto loc_82F35168;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f35168
	if (ctx.cr6.eq) goto loc_82F35168;
loc_82F35298:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f35168
	if (!ctx.cr6.eq) goto loc_82F35168;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f35168
	if (!ctx.cr0.eq) goto loc_82F35168;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f352f8
	if (!ctx.cr6.gt) goto loc_82F352F8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82F352D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f35168
	if (!ctx.cr6.eq) goto loc_82F35168;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f352d8
	if (ctx.cr6.lt) goto loc_82F352D8;
loc_82F352F8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f35168
	if (!ctx.cr6.eq) goto loc_82F35168;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F3531C;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f35330
	if (ctx.cr0.eq) goto loc_82F35330;
	// bl 0x82f4b940
	ctx.lr = 0x82F35328;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f35334
	goto loc_82F35334;
loc_82F35330:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F35334:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f35348
	if (!ctx.cr6.eq) goto loc_82F35348;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f354d4
	goto loc_82F354D4;
loc_82F35348:
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lwz r9,260(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82f4c0d8
	ctx.lr = 0x82F35374;
	sub_82F4C0D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f35394
	if (!ctx.cr0.lt) goto loc_82F35394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F35384;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F3538C;
	sub_82F4C098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f354d4
	goto loc_82F354D4;
loc_82F35394:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F353A8;
	sub_82CB1160(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f353cc
	if (ctx.cr6.eq) goto loc_82F353CC;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_82F353CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f35478
	if (ctx.cr6.eq) goto loc_82F35478;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82F353E4:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f35460
	if (!ctx.cr6.lt) goto loc_82F35460;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_82F353F4:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r4,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r3,16(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82f3543c
	if (!ctx.cr6.gt) goto loc_82F3543C;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r30,r11,r4
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stwx r3,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r30,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u32);
loc_82F3543C:
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f354dc
	if (ctx.cr6.eq) goto loc_82F354DC;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f353f4
	if (ctx.cr6.lt) goto loc_82F353F4;
loc_82F35460:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f353e4
	if (ctx.cr6.lt) goto loc_82F353E4;
loc_82F35478:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x82F35490;
	sub_82CB1160(ctx, base);
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f354b8
	if (ctx.cr6.eq) goto loc_82F354B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F354B0;
	sub_82F4B990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F354B8;
	sub_82F4C098(ctx, base);
loc_82F354B8:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82F354D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82F354DC:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r5,4822
	ctx.r5.s64 = 4822;
	// addi r6,r10,24680
	ctx.r6.s64 = ctx.r10.s64 + 24680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82f5e840
	ctx.lr = 0x82F354F8;
	sub_82F5E840(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F35500;
	sub_82F4B990(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F35508;
	sub_82F4C098(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f354d4
	goto loc_82F354D4;
}

__attribute__((alias("__imp__sub_82F35514"))) PPC_WEAK_FUNC(sub_82F35514);
PPC_FUNC_IMPL(__imp__sub_82F35514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35518"))) PPC_WEAK_FUNC(sub_82F35518);
PPC_FUNC_IMPL(__imp__sub_82F35518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F35520;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,20488
	ctx.r29.s64 = ctx.r11.s64 + 20488;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r29,-192
	ctx.r5.s64 = ctx.r29.s64 + -192;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F35580;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f35670
	if (!ctx.cr0.eq) goto loc_82F35670;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F35590;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f355a0
	if (ctx.cr0.eq) goto loc_82F355A0;
	// bl 0x82f4b940
	ctx.lr = 0x82F3559C;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F355A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f355b4
	if (!ctx.cr6.eq) goto loc_82F355B4;
loc_82F355A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f35938
	goto loc_82F35938;
loc_82F355B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r11,923
	ctx.r11.s64 = 923;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_82F355C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F355D4;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82f355f4
	if (!ctx.cr0.lt) goto loc_82F355F4;
loc_82F355E0:
	// bl 0x82f4b990
	ctx.lr = 0x82F355E4;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F355EC;
	sub_82F4C098(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82f35938
	goto loc_82F35938;
loc_82F355F4:
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F355FC;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f3560c
	if (!ctx.cr0.lt) goto loc_82F3560C;
loc_82F35604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f355e0
	goto loc_82F355E0;
loc_82F3560C:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F35624;
	sub_82CB1160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82cb1160
	ctx.lr = 0x82F35634;
	sub_82CB1160(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82F35638:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F35648;
	sub_82CB1160(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F35654;
	sub_82F4C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F35660;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F35668;
	sub_82F4C098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f35938
	goto loc_82F35938;
loc_82F35670:
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F35698;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f356d0
	if (!ctx.cr0.eq) goto loc_82F356D0;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F356A8;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f356b8
	if (ctx.cr0.eq) goto loc_82F356B8;
	// bl 0x82f4b940
	ctx.lr = 0x82F356B4;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F356B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f355a8
	if (ctx.cr6.eq) goto loc_82F355A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r11,1845
	ctx.r11.s64 = 1845;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f355c0
	goto loc_82F355C0;
loc_82F356D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F356F8;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f35938
	if (!ctx.cr0.eq) goto loc_82F35938;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r26,20(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f3576c
	if (!ctx.cr6.eq) goto loc_82F3576C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f357cc
	if (ctx.cr6.eq) goto loc_82F357CC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82cb15e8
	ctx.lr = 0x82F3573C;
	sub_82CB15E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F35740:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f35740
	if (!ctx.cr0.eq) goto loc_82F35740;
	// b 0x82f357cc
	goto loc_82F357CC;
loc_82F3576C:
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f35934
	if (!ctx.cr6.eq) goto loc_82F35934;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f357cc
	if (ctx.cr6.eq) goto loc_82F357CC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82cb15e8
	ctx.lr = 0x82F357A0;
	sub_82CB15E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F357A4:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f357a4
	if (!ctx.cr0.eq) goto loc_82F357A4;
loc_82F357CC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f358a0
	if (ctx.cr6.eq) goto loc_82F358A0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfd f12,-18352(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lfd f13,-18344(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18344);
loc_82F357F4:
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f35820
	if (!ctx.cr0.eq) goto loc_82F35820;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F35820:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f35830
	if (ctx.cr6.eq) goto loc_82F35830;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82F35830:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82f3583c
	if (ctx.cr6.eq) goto loc_82F3583C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F3583C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f35868
	if (!ctx.cr0.eq) goto loc_82F35868;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F35868:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82f35878
	if (ctx.cr6.eq) goto loc_82F35878;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82F35878:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f35884
	if (ctx.cr6.eq) goto loc_82F35884;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F35884:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f357f4
	if (!ctx.cr0.eq) goto loc_82F357F4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82f358a0
	if (!ctx.cr6.eq) goto loc_82F358A0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f35934
	if (ctx.cr6.eq) goto loc_82F35934;
loc_82F358A0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F358A8;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f358b8
	if (ctx.cr0.eq) goto loc_82F358B8;
	// bl 0x82f4b940
	ctx.lr = 0x82F358B4;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F358B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f355a8
	if (ctx.cr6.eq) goto loc_82F355A8;
	// clrlwi r11,r30,12
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// oris r4,r11,29536
	ctx.r4.u64 = ctx.r11.u64 | 1935671296;
	// bne cr6,0x82f358d4
	if (!ctx.cr6.eq) goto loc_82F358D4;
	// oris r4,r11,29520
	ctx.r4.u64 = ctx.r11.u64 | 1934622720;
loc_82F358D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F358E8;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82f355e0
	if (ctx.cr0.lt) goto loc_82F355E0;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F358FC;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f35604
	if (ctx.cr0.lt) goto loc_82F35604;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F3591C;
	sub_82CB1160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb1160
	ctx.lr = 0x82F3592C;
	sub_82CB1160(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x82f35638
	goto loc_82F35638;
loc_82F35934:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F35938:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35940"))) PPC_WEAK_FUNC(sub_82F35940);
PPC_FUNC_IMPL(__imp__sub_82F35940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F35948;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r5,r11,19368
	ctx.r5.s64 = ctx.r11.s64 + 19368;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r29,r8,12
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFFF;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F359A8;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f35ad8
	if (!ctx.cr0.eq) goto loc_82F35AD8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfd f31,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f35ab0
	if (ctx.cr6.eq) goto loc_82F35AB0;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r4,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,-18352(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + -18352);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
loc_82F35A0C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f35ae4
	if (ctx.cr6.eq) goto loc_82F35AE4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r4,r4,0,23,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82f35ae4
	if (ctx.cr0.eq) goto loc_82F35AE4;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82f35ae4
	if (!ctx.cr6.eq) goto loc_82F35AE4;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82f35ae4
	if (!ctx.cr6.eq) goto loc_82F35AE4;
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f35a64
	if (!ctx.cr6.eq) goto loc_82F35A64;
	// lfd f12,32(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bne cr6,0x82f35a64
	if (!ctx.cr6.eq) goto loc_82F35A64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82f35a7c
	goto loc_82F35A7C;
loc_82F35A64:
	// lfd f12,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82f35ae4
	if (!ctx.cr6.eq) goto loc_82F35AE4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82f35ae4
	if (!ctx.cr6.eq) goto loc_82F35AE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82F35A7C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f35a0c
	if (ctx.cr6.lt) goto loc_82F35A0C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82f35aa0
	if (ctx.cr6.eq) goto loc_82F35AA0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f35ae4
	if (!ctx.cr6.eq) goto loc_82F35AE4;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// oris r27,r11,29520
	ctx.r27.u64 = ctx.r11.u64 | 1934622720;
loc_82F35AA0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82f35ab0
	if (ctx.cr6.eq) goto loc_82F35AB0;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// oris r27,r11,29536
	ctx.r27.u64 = ctx.r11.u64 | 1935671296;
loc_82F35AB0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F35AB8;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f35ac8
	if (ctx.cr0.eq) goto loc_82F35AC8;
	// bl 0x82f4b940
	ctx.lr = 0x82F35AC4;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F35AC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f35aec
	if (!ctx.cr6.eq) goto loc_82F35AEC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82F35AD8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82F35AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f35ad8
	goto loc_82F35AD8;
loc_82F35AEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F35B04;
	sub_82F4C0D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82f35b24
	if (!ctx.cr0.lt) goto loc_82F35B24;
loc_82F35B10:
	// bl 0x82f4b990
	ctx.lr = 0x82F35B14;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F35B1C;
	sub_82F4C098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f35ad8
	goto loc_82F35AD8;
loc_82F35B24:
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F35B2C;
	sub_82F4B998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f35b40
	if (!ctx.cr0.lt) goto loc_82F35B40;
loc_82F35B34:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82F35B38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f35b10
	goto loc_82F35B10;
loc_82F35B40:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F35B58;
	sub_82CB1160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb1160
	ctx.lr = 0x82F35B68;
	sub_82CB1160(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F35B80;
	sub_82F4CD50(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f35b94
	if (!ctx.cr6.eq) goto loc_82F35B94;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82f35b38
	goto loc_82F35B38;
loc_82F35B94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f35bb4
	if (ctx.cr6.eq) goto loc_82F35BB4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82F35BA0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82f35ba0
	if (!ctx.cr0.eq) goto loc_82F35BA0;
loc_82F35BB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F35BC0;
	sub_82F4C400(ctx, base);
	// b 0x82f35b34
	goto loc_82F35B34;
}

__attribute__((alias("__imp__sub_82F35BC4"))) PPC_WEAK_FUNC(sub_82F35BC4);
PPC_FUNC_IMPL(__imp__sub_82F35BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35BC8"))) PPC_WEAK_FUNC(sub_82F35BC8);
PPC_FUNC_IMPL(__imp__sub_82F35BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F35BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82f35ce8
	if (!ctx.cr6.eq) goto loc_82F35CE8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f35ce8
	if (ctx.cr0.eq) goto loc_82F35CE8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82f35ce8
	if (!ctx.cr6.eq) goto loc_82F35CE8;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// lfd f1,-18344(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82f35ce8
	if (!ctx.cr6.eq) goto loc_82F35CE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f4cd50
	ctx.lr = 0x82F35C4C;
	sub_82F4CD50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82f35c64
	if (!ctx.cr6.eq) goto loc_82F35C64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f35cec
	goto loc_82F35CEC;
loc_82F35C64:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f4c668
	ctx.lr = 0x82F35C90;
	sub_82F4C668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f35cec
	if (ctx.cr0.lt) goto loc_82F35CEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c760
	ctx.lr = 0x82F35CA4;
	sub_82F4C760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f35cec
	if (ctx.cr0.lt) goto loc_82F35CEC;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// bne cr6,0x82f35cd4
	if (!ctx.cr6.eq) goto loc_82F35CD4;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_82F35CD4:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82f35cec
	goto loc_82F35CEC;
loc_82F35CE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F35CEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35CF4"))) PPC_WEAK_FUNC(sub_82F35CF4);
PPC_FUNC_IMPL(__imp__sub_82F35CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35CF8"))) PPC_WEAK_FUNC(sub_82F35CF8);
PPC_FUNC_IMPL(__imp__sub_82F35CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F35D00;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,19944
	ctx.r29.s64 = ctx.r11.s64 + 19944;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r31,r10,12
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F35D64;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f35d98
	if (!ctx.cr6.eq) goto loc_82F35D98;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F35D98;
	sub_82F328F8(ctx, base);
loc_82F35D98:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f35e8c
	if (!ctx.cr6.eq) goto loc_82F35E8C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f35e2c
	if (ctx.cr6.eq) goto loc_82F35E2C;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,-18344(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18344);
loc_82F35DBC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f35e48
	if (!ctx.cr6.eq) goto loc_82F35E48;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f35e48
	if (ctx.cr0.eq) goto loc_82F35E48;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f35e48
	if (!ctx.cr6.eq) goto loc_82F35E48;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f35e48
	if (!ctx.cr6.eq) goto loc_82F35E48;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f35dbc
	if (ctx.cr6.lt) goto loc_82F35DBC;
loc_82F35E2C:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// beq cr6,0x82f35e50
	if (ctx.cr6.eq) goto loc_82F35E50;
	// li r9,1847
	ctx.r9.s64 = 1847;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f35e58
	goto loc_82F35E58;
loc_82F35E48:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f35e8c
	goto loc_82F35E8C;
loc_82F35E50:
	// li r9,231
	ctx.r9.s64 = 231;
	// rlwimi r10,r9,23,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_82F35E58:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f35e88
	if (ctx.cr6.eq) goto loc_82F35E88;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F35E68:
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f35e68
	if (!ctx.cr0.eq) goto loc_82F35E68;
loc_82F35E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F35E8C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35E94"))) PPC_WEAK_FUNC(sub_82F35E94);
PPC_FUNC_IMPL(__imp__sub_82F35E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35E98"))) PPC_WEAK_FUNC(sub_82F35E98);
PPC_FUNC_IMPL(__imp__sub_82F35E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F35EA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,20168
	ctx.r29.s64 = ctx.r11.s64 + 20168;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F35F04;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f35f38
	if (!ctx.cr6.eq) goto loc_82F35F38;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F35F38;
	sub_82F328F8(ctx, base);
loc_82F35F38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f3602c
	if (!ctx.cr6.eq) goto loc_82F3602C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f35f88
	if (ctx.cr6.eq) goto loc_82F35F88;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F35F50:
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f35fa4
	if (!ctx.cr6.eq) goto loc_82F35FA4;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f35fa4
	if (!ctx.cr6.eq) goto loc_82F35FA4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f35fa4
	if (!ctx.cr6.eq) goto loc_82F35FA4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f35f50
	if (ctx.cr6.lt) goto loc_82F35F50;
loc_82F35F88:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq cr6,0x82f35fac
	if (ctx.cr6.eq) goto loc_82F35FAC;
	// li r9,1847
	ctx.r9.s64 = 1847;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f35fb4
	goto loc_82F35FB4;
loc_82F35FA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f3602c
	goto loc_82F3602C;
loc_82F35FAC:
	// li r9,231
	ctx.r9.s64 = 231;
	// rlwimi r10,r9,23,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_82F35FB4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82f4cd50
	ctx.lr = 0x82F35FD4;
	sub_82F4CD50(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f35fe8
	if (!ctx.cr6.eq) goto loc_82F35FE8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f3602c
	goto loc_82F3602C;
loc_82F35FE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f36028
	if (ctx.cr6.eq) goto loc_82F36028;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F35FF8:
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f35ff8
	if (!ctx.cr0.eq) goto loc_82F35FF8;
loc_82F36028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3602C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36034"))) PPC_WEAK_FUNC(sub_82F36034);
PPC_FUNC_IMPL(__imp__sub_82F36034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36038"))) PPC_WEAK_FUNC(sub_82F36038);
PPC_FUNC_IMPL(__imp__sub_82F36038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F36040;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82f3608c
	if (ctx.cr6.eq) goto loc_82F3608C;
loc_82F36084:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f362a8
	goto loc_82F362A8;
loc_82F3608C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,19752
	ctx.r30.s64 = ctx.r11.s64 + 19752;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r30,-288
	ctx.r5.s64 = ctx.r30.s64 + -288;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F360B8;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f36148
	if (!ctx.cr6.eq) goto loc_82F36148;
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F360E8;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f36148
	if (!ctx.cr6.eq) goto loc_82F36148;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36118;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f36148
	if (!ctx.cr6.eq) goto loc_82F36148;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36148;
	sub_82F328F8(ctx, base);
loc_82F36148:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f362a8
	if (!ctx.cr6.eq) goto loc_82F362A8;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f0,-18344(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18344);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82F36170:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82f36084
	if (ctx.cr0.eq) goto loc_82F36084;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f36084
	if (!ctx.cr6.eq) goto loc_82F36084;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f36084
	if (!ctx.cr6.eq) goto loc_82F36084;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x82f36170
	if (ctx.cr6.lt) goto loc_82F36170;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82f361f4
	if (!ctx.cr6.eq) goto loc_82F361F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f361f4
	if (ctx.cr0.eq) goto loc_82F361F4;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82F361F4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lfd f31,-18104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18104);
loc_82F36200:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82f4cd50
	ctx.lr = 0x82F36240;
	sub_82F4CD50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f362c4
	if (ctx.cr6.eq) goto loc_82F362C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c668
	ctx.lr = 0x82F36264;
	sub_82F4C668(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82f362b4
	if (!ctx.cr6.eq) goto loc_82F362B4;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f3627c
	if (!ctx.cr6.eq) goto loc_82F3627C;
	// stw r27,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r27.u32);
loc_82F3627C:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_82F36288:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// blt cr6,0x82f36200
	if (ctx.cr6.lt) goto loc_82F36200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82F362A8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82F362B4:
	// lfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.f0.u64);
	// b 0x82f36288
	goto loc_82F36288;
loc_82F362C4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f362a8
	goto loc_82F362A8;
}

__attribute__((alias("__imp__sub_82F362D0"))) PPC_WEAK_FUNC(sub_82F362D0);
PPC_FUNC_IMPL(__imp__sub_82F362D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F362D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r30,r11,21640
	ctx.r30.s64 = ctx.r11.s64 + 21640;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// clrlwi r29,r10,12
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36338;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f363f4
	if (!ctx.cr0.eq) goto loc_82F363F4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F36348;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f36358
	if (ctx.cr0.eq) goto loc_82F36358;
	// bl 0x82f4b940
	ctx.lr = 0x82F36354;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F36358:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f3636c
	if (!ctx.cr6.eq) goto loc_82F3636C;
loc_82F36360:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f36780
	goto loc_82F36780;
loc_82F3636C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r11,931
	ctx.r11.s64 = 931;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f36450
	goto loc_82F36450;
loc_82F3637C:
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F36384;
	sub_82F4B998(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f363a4
	if (!ctx.cr0.lt) goto loc_82F363A4;
loc_82F3638C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F36390:
	// bl 0x82f4b990
	ctx.lr = 0x82F36394;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F3639C;
	sub_82F4C098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f36780
	goto loc_82F36780;
loc_82F363A4:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F363BC;
	sub_82CB1160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82cb1160
	ctx.lr = 0x82F363CC;
	sub_82CB1160(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82F363D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F363E0;
	sub_82CB1160(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F363EC;
	sub_82F4C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f3638c
	goto loc_82F3638C;
loc_82F363F4:
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F3641C;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f36474
	if (!ctx.cr0.eq) goto loc_82F36474;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F3642C;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f3643c
	if (ctx.cr0.eq) goto loc_82F3643C;
	// bl 0x82f4b940
	ctx.lr = 0x82F36438;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F3643C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f36360
	if (ctx.cr6.eq) goto loc_82F36360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r11,1863
	ctx.r11.s64 = 1863;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_82F36450:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F36464;
	sub_82F4C0D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82f36390
	if (ctx.cr0.lt) goto loc_82F36390;
	// b 0x82f3637c
	goto loc_82F3637C;
loc_82F36474:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F3649C;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f36780
	if (!ctx.cr0.eq) goto loc_82F36780;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r27,20(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f36510
	if (!ctx.cr6.eq) goto loc_82F36510;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f36610
	if (ctx.cr6.eq) goto loc_82F36610;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82cb15e8
	ctx.lr = 0x82F364E0;
	sub_82CB15E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F364E4:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f364e4
	if (!ctx.cr0.eq) goto loc_82F364E4;
	// b 0x82f36610
	goto loc_82F36610;
loc_82F36510:
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lwz r5,60(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f36574
	if (!ctx.cr6.eq) goto loc_82F36574;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f36610
	if (ctx.cr6.eq) goto loc_82F36610;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82cb15e8
	ctx.lr = 0x82F36544;
	sub_82CB15E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F36548:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f36548
	if (!ctx.cr0.eq) goto loc_82F36548;
	// b 0x82f36610
	goto loc_82F36610;
loc_82F36574:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x82f3677c
	if (!ctx.cr6.eq) goto loc_82F3677C;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f365c4
	if (ctx.cr6.eq) goto loc_82F365C4;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f365c4
	if (!ctx.cr6.eq) goto loc_82F365C4;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f365c4
	if (!ctx.cr6.eq) goto loc_82F365C4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82f365c4
	if (!ctx.cr6.eq) goto loc_82F365C4;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// b 0x82f36604
	goto loc_82F36604;
loc_82F365C4:
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f3677c
	if (ctx.cr6.eq) goto loc_82F3677C;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f3677c
	if (!ctx.cr6.eq) goto loc_82F3677C;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f3677c
	if (!ctx.cr6.eq) goto loc_82F3677C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82f3677c
	if (!ctx.cr6.eq) goto loc_82F3677C;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
loc_82F36604:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82F36610:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f366e8
	if (ctx.cr6.eq) goto loc_82F366E8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfd f12,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// lfd f13,-18352(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18352);
loc_82F3663C:
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f36668
	if (!ctx.cr0.eq) goto loc_82F36668;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F36668:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f36678
	if (ctx.cr6.eq) goto loc_82F36678;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82F36678:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82f36684
	if (ctx.cr6.eq) goto loc_82F36684;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F36684:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f366b0
	if (!ctx.cr0.eq) goto loc_82F366B0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F366B0:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82f366c0
	if (ctx.cr6.eq) goto loc_82F366C0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82F366C0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f366cc
	if (ctx.cr6.eq) goto loc_82F366CC;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82F366CC:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f3663c
	if (!ctx.cr0.eq) goto loc_82F3663C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82f366e8
	if (!ctx.cr6.eq) goto loc_82F366E8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f3677c
	if (ctx.cr6.eq) goto loc_82F3677C;
loc_82F366E8:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F366F0;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f36700
	if (ctx.cr0.eq) goto loc_82F36700;
	// bl 0x82f4b940
	ctx.lr = 0x82F366FC;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F36700:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f36360
	if (ctx.cr6.eq) goto loc_82F36360;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// oris r4,r11,29792
	ctx.r4.u64 = ctx.r11.u64 | 1952448512;
	// bne cr6,0x82f3671c
	if (!ctx.cr6.eq) goto loc_82F3671C;
	// oris r4,r11,29808
	ctx.r4.u64 = ctx.r11.u64 | 1953497088;
loc_82F3671C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F36730;
	sub_82F4C0D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82f36390
	if (ctx.cr0.lt) goto loc_82F36390;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F36744;
	sub_82F4B998(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f3638c
	if (ctx.cr0.lt) goto loc_82F3638C;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F36764;
	sub_82CB1160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb1160
	ctx.lr = 0x82F36774;
	sub_82CB1160(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x82f363d0
	goto loc_82F363D0;
loc_82F3677C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F36780:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36788"))) PPC_WEAK_FUNC(sub_82F36788);
PPC_FUNC_IMPL(__imp__sub_82F36788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F36790;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// clrlwi r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// beq cr6,0x82f367f0
	if (ctx.cr6.eq) goto loc_82F367F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f36db4
	goto loc_82F36DB4;
loc_82F367F0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F367F8;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f3680c
	if (ctx.cr0.eq) goto loc_82F3680C;
	// bl 0x82f4b940
	ctx.lr = 0x82F36804;
	sub_82F4B940(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82f36810
	goto loc_82F36810;
loc_82F3680C:
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_82F36810:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82f36824
	if (!ctx.cr6.eq) goto loc_82F36824;
loc_82F36818:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f36db4
	goto loc_82F36DB4;
loc_82F36824:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F36830;
	sub_82F4C400(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82f36850
	if (!ctx.cr0.lt) goto loc_82F36850;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F36840;
	sub_82F4B990(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F36848;
	sub_82F4C098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f36db4
	goto loc_82F36DB4;
loc_82F36850:
	// lis r11,8336
	ctx.r11.s64 = 546308096;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r18,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r18.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82f36db0
	if (ctx.cr6.eq) goto loc_82F36DB0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r10,24728
	ctx.r10.s64 = ctx.r10.s64 + 24728;
	// lfd f31,-18344(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18344);
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// lfd f30,-18352(r8)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18352);
	// rlwinm r15,r28,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r14,4096
	ctx.r14.s64 = 268435456;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r19,r11,24072
	ctx.r19.s64 = ctx.r11.s64 + 24072;
loc_82F368A8:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwzx r11,r11,r15
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82F368F4;
	sub_82CB16F0(ctx, base);
	// addi r5,r19,-512
	ctx.r5.s64 = ctx.r19.s64 + -512;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36920;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f36958
	if (ctx.cr0.eq) goto loc_82F36958;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r5,r19,-320
	ctx.r5.s64 = ctx.r19.s64 + -320;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36950;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f36d94
	if (!ctx.cr0.eq) goto loc_82F36D94;
loc_82F36958:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f36d94
	if (!ctx.cr6.eq) goto loc_82F36D94;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r5,r19,-96
	ctx.r5.s64 = ctx.r19.s64 + -96;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36994;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f369c4
	if (ctx.cr0.eq) goto loc_82F369C4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F369C4;
	sub_82F328F8(ctx, base);
loc_82F369C4:
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r21,448(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f369dc
	if (ctx.cr6.eq) goto loc_82F369DC;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
loc_82F369DC:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82f36d94
	if (ctx.cr6.eq) goto loc_82F36D94;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f36d94
	if (ctx.cr6.eq) goto loc_82F36D94;
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f36d94
	if (ctx.cr6.eq) goto loc_82F36D94;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4368
	ctx.r9.s64 = 286261248;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwzx r22,r11,r5
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f36d94
	if (!ctx.cr6.eq) goto loc_82F36D94;
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82f36ac8
	goto loc_82F36AC8;
loc_82F36A60:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f36ad4
	if (!ctx.cr6.eq) goto loc_82F36AD4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82f36ad4
	if (!ctx.cr6.eq) goto loc_82F36AD4;
	// clrlwi. r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq 0x82f36ad4
	if (ctx.cr0.eq) goto loc_82F36AD4;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
loc_82F36A94:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f36ab4
	if (ctx.cr6.eq) goto loc_82F36AB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82f36a94
	if (ctx.cr6.lt) goto loc_82F36A94;
	// b 0x82f36ad4
	goto loc_82F36AD4;
loc_82F36AB4:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_82F36AC8:
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f36a60
	if (!ctx.cr6.eq) goto loc_82F36A60;
loc_82F36AD4:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f36d94
	if (ctx.cr0.eq) goto loc_82F36D94;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f36d94
	if (ctx.cr0.eq) goto loc_82F36D94;
	// lfd f0,32(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82f36d94
	if (!ctx.cr6.eq) goto loc_82F36D94;
	// lfd f0,32(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82f36d94
	if (!ctx.cr6.eq) goto loc_82F36D94;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r25,r11,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r27,84(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f36d94
	if (ctx.cr6.gt) goto loc_82F36D94;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F36B40:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwzx r30,r11,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f36c7c
	if (ctx.cr6.eq) goto loc_82F36C7C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f36c7c
	if (!ctx.cr6.gt) goto loc_82F36C7C;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_82F36B68:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f36c00
	if (ctx.cr6.eq) goto loc_82F36C00;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f36c64
	if (ctx.cr6.eq) goto loc_82F36C64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82f36bfc
	if (!ctx.cr6.eq) goto loc_82F36BFC;
	// clrlwi. r8,r11,12
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq 0x82f36c00
	if (ctx.cr0.eq) goto loc_82F36C00;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
loc_82F36BCC:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f36bec
	if (ctx.cr6.eq) goto loc_82F36BEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f36bcc
	if (ctx.cr6.lt) goto loc_82F36BCC;
	// b 0x82f36c00
	goto loc_82F36C00;
loc_82F36BEC:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82f36c00
	goto loc_82F36C00;
loc_82F36BFC:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82F36C00:
	// cmplw cr6,r6,r21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82f36c64
	if (!ctx.cr6.eq) goto loc_82F36C64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f36c44
	if (!ctx.cr6.eq) goto loc_82F36C44;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f4ccb0
	ctx.lr = 0x82F36C28;
	sub_82F4CCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F36C40;
	sub_82F4CD50(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82F36C44:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f36c64
	if (ctx.cr6.eq) goto loc_82F36C64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_82F36C64:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f36b68
	if (ctx.cr6.lt) goto loc_82F36B68;
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F36C7C:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f36b40
	if (!ctx.cr6.gt) goto loc_82F36B40;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f36d94
	if (ctx.cr6.eq) goto loc_82F36D94;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F36CA0;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f36cb4
	if (ctx.cr0.eq) goto loc_82F36CB4;
	// bl 0x82f4b940
	ctx.lr = 0x82F36CAC;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f36cb8
	goto loc_82F36CB8;
loc_82F36CB4:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82F36CB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f36818
	if (ctx.cr6.eq) goto loc_82F36818;
	// lis r4,29712
	ctx.r4.s64 = 1947205632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F36CDC;
	sub_82F4C0D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82f36dc4
	if (ctx.cr0.lt) goto loc_82F36DC4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82f4b998
	ctx.lr = 0x82F36CF0;
	sub_82F4B998(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f36dd8
	if (ctx.cr0.lt) goto loc_82F36DD8;
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f4cd50
	ctx.lr = 0x82F36D44;
	sub_82F4CD50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f4cd50
	ctx.lr = 0x82F36D64;
	sub_82F4CD50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f4c400
	ctx.lr = 0x82F36D78;
	sub_82F4C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F36D84;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F36D8C;
	sub_82F4C098(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f36dd0
	if (ctx.cr6.lt) goto loc_82F36DD0;
loc_82F36D94:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f368a8
	if (ctx.cr6.lt) goto loc_82F368A8;
loc_82F36DB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F36DB4:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82F36DC4:
	// bl 0x82f4b990
	ctx.lr = 0x82F36DC8;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F36DD0;
	sub_82F4C098(ctx, base);
loc_82F36DD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f36db4
	goto loc_82F36DB4;
loc_82F36DD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f36dc4
	goto loc_82F36DC4;
}

__attribute__((alias("__imp__sub_82F36DE0"))) PPC_WEAK_FUNC(sub_82F36DE0);
PPC_FUNC_IMPL(__imp__sub_82F36DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F36DE8;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r15,-1
	ctx.r15.s64 = -1;
	// li r14,0
	ctx.r14.s64 = 0;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// clrlwi r17,r11,12
	ctx.r17.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f36e44
	if (ctx.cr6.eq) goto loc_82F36E44;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f377d8
	goto loc_82F377D8;
loc_82F36E44:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F36E4C;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f36e60
	if (ctx.cr0.eq) goto loc_82F36E60;
	// bl 0x82f4b940
	ctx.lr = 0x82F36E58;
	sub_82F4B940(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x82f36e64
	goto loc_82F36E64;
loc_82F36E60:
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
loc_82F36E64:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82f36e78
	if (!ctx.cr6.eq) goto loc_82F36E78;
loc_82F36E6C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f377d8
	goto loc_82F377D8;
loc_82F36E78:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F36E84;
	sub_82F4C400(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt 0x82f377c4
	if (ctx.cr0.lt) goto loc_82F377C4;
	// lis r11,8336
	ctx.r11.s64 = 546308096;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r20,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r20.u32);
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r10,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82f377c4
	if (ctx.cr6.eq) goto loc_82F377C4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,4368
	ctx.r8.s64 = 286261248;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// lfd f31,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// rlwinm r23,r17,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f30,-18352(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18352);
	// ori r24,r8,1
	ctx.r24.u64 = ctx.r8.u64 | 1;
	// addi r26,r11,22120
	ctx.r26.s64 = ctx.r11.s64 + 22120;
loc_82F36EDC:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r10,16(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82F36F28;
	sub_82CB16F0(ctx, base);
	// addi r5,r26,-224
	ctx.r5.s64 = ctx.r26.s64 + -224;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36F60;
	sub_82F328F8(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x82f37018
	if (ctx.cr0.eq) goto loc_82F37018;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// addi r5,r26,128
	ctx.r5.s64 = ctx.r26.s64 + 128;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36F94;
	sub_82F328F8(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x82f36fa4
	if (!ctx.cr0.eq) goto loc_82F36FA4;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x82f37018
	goto loc_82F37018;
loc_82F36FA4:
	// addi r5,r26,544
	ctx.r5.s64 = ctx.r26.s64 + 544;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F36FD0;
	sub_82F328F8(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x82f36fe0
	if (!ctx.cr0.eq) goto loc_82F36FE0;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// b 0x82f37018
	goto loc_82F37018;
loc_82F36FE0:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r5,r26,960
	ctx.r5.s64 = ctx.r26.s64 + 960;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F3700C;
	sub_82F328F8(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x82f37018
	if (!ctx.cr0.eq) goto loc_82F37018;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82F37018:
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// clrldi r10,r21,32
	ctx.r10.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// lwz r27,304(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r10,r27,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f37378
	if (ctx.cr6.eq) goto loc_82F37378;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,84(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82f37378
	if (ctx.cr6.gt) goto loc_82F37378;
	// rldicr r7,r9,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// oris r7,r7,29808
	ctx.r7.u64 = ctx.r7.u64 | 1953497088;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
loc_82F370B4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82f370ec
	if (!ctx.cr6.eq) goto loc_82F370EC;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82f37390
	if (!ctx.cr6.eq) goto loc_82F37390;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
loc_82F370EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82f370b4
	if (!ctx.cr6.gt) goto loc_82F370B4;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82f37378
	if (ctx.cr6.eq) goto loc_82F37378;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82f3713c
	if (ctx.cr6.eq) goto loc_82F3713C;
	// addi r5,r26,1248
	ctx.r5.s64 = ctx.r26.s64 + 1248;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x82f328f8
	ctx.lr = 0x82F37138;
	sub_82F328F8(ctx, base);
	// b 0x82f37184
	goto loc_82F37184;
loc_82F3713C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82f37158
	if (ctx.cr6.eq) goto loc_82F37158;
	// addi r5,r26,800
	ctx.r5.s64 = ctx.r26.s64 + 800;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x82f328f8
	ctx.lr = 0x82F37154;
	sub_82F328F8(ctx, base);
	// b 0x82f37184
	goto loc_82F37184;
loc_82F37158:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82f37174
	if (ctx.cr6.eq) goto loc_82F37174;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r5,r26,384
	ctx.r5.s64 = ctx.r26.s64 + 384;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x82f328f8
	ctx.lr = 0x82F37170;
	sub_82F328F8(ctx, base);
	// b 0x82f37184
	goto loc_82F37184;
loc_82F37174:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// bl 0x82f328f8
	ctx.lr = 0x82F37184;
	sub_82F328F8(ctx, base);
loc_82F37184:
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// beq cr6,0x82f371a0
	if (ctx.cr6.eq) goto loc_82F371A0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82F371A0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f37378
	if (ctx.cr6.eq) goto loc_82F37378;
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f37378
	if (ctx.cr6.eq) goto loc_82F37378;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r11,r4
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r24.u32, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f37378
	if (ctx.cr0.eq) goto loc_82F37378;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82f372e4
	goto loc_82F372E4;
loc_82F37278:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f372f0
	if (!ctx.cr6.eq) goto loc_82F372F0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r11,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f372f0
	if (!ctx.cr6.eq) goto loc_82F372F0;
	// clrlwi. r6,r11,12
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq 0x82f372f0
	if (ctx.cr0.eq) goto loc_82F372F0;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
loc_82F372B0:
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82f372d0
	if (ctx.cr6.eq) goto loc_82F372D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82f372b0
	if (ctx.cr6.lt) goto loc_82F372B0;
	// b 0x82f372f0
	goto loc_82F372F0;
loc_82F372D0:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_82F372E4:
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f37278
	if (!ctx.cr6.eq) goto loc_82F37278;
loc_82F372F0:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f37378
	if (ctx.cr0.eq) goto loc_82F37378;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f37378
	if (ctx.cr0.eq) goto loc_82F37378;
	// lfd f0,32(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lfd f0,32(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f37378
	if (ctx.cr0.eq) goto loc_82F37378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f37378
	if (ctx.cr0.eq) goto loc_82F37378;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f37378
	if (!ctx.cr6.eq) goto loc_82F37378;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f373b4
	if (ctx.cr6.eq) goto loc_82F373B4;
loc_82F37378:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplw cr6,r18,r17
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82f36edc
	if (ctx.cr6.lt) goto loc_82F36EDC;
	// b 0x82f377c4
	goto loc_82F377C4;
loc_82F37390:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,4835
	ctx.r5.s64 = 4835;
	// addi r6,r11,24732
	ctx.r6.s64 = ctx.r11.s64 + 24732;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5e840
	ctx.lr = 0x82F373A8;
	sub_82F5E840(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f377d8
	goto loc_82F377D8;
loc_82F373B4:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r14,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r14.u32);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r11,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r27,84(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f376f4
	if (ctx.cr6.gt) goto loc_82F376F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,24728
	ctx.r24.s64 = ctx.r11.s64 + 24728;
loc_82F373FC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r29,r25,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f37568
	if (ctx.cr6.eq) goto loc_82F37568;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f37568
	if (!ctx.cr6.eq) goto loc_82F37568;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f37568
	if (!ctx.cr6.gt) goto loc_82F37568;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_82F3744C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f374e8
	if (ctx.cr6.eq) goto loc_82F374E8;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f37554
	if (ctx.cr6.eq) goto loc_82F37554;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f374e4
	if (!ctx.cr6.eq) goto loc_82F374E4;
	// clrlwi. r8,r11,12
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq 0x82f374e8
	if (ctx.cr0.eq) goto loc_82F374E8;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
loc_82F374B4:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f374d4
	if (ctx.cr6.eq) goto loc_82F374D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f374b4
	if (ctx.cr6.lt) goto loc_82F374B4;
	// b 0x82f374e8
	goto loc_82F374E8;
loc_82F374D4:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82f374e8
	goto loc_82F374E8;
loc_82F374E4:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82F374E8:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f37554
	if (!ctx.cr6.eq) goto loc_82F37554;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f37534
	if (!ctx.cr6.eq) goto loc_82F37534;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4ccb0
	ctx.lr = 0x82F37518;
	sub_82F4CCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F37530;
	sub_82F4CD50(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_82F37534:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f37554
	if (ctx.cr6.eq) goto loc_82F37554;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_82F37554:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f3744c
	if (ctx.cr6.lt) goto loc_82F3744C;
loc_82F37568:
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f373fc
	if (!ctx.cr6.gt) goto loc_82F373FC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f376f4
	if (ctx.cr6.eq) goto loc_82F376F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F3759C;
	sub_82F4CD50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F375B8;
	sub_82F4CD50(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f36e6c
	if (ctx.cr6.eq) goto loc_82F36E6C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f36e6c
	if (ctx.cr6.eq) goto loc_82F36E6C;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f4c668
	ctx.lr = 0x82F375F8;
	sub_82F4C668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f4c668
	ctx.lr = 0x82F37604;
	sub_82F4C668(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r20,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r20.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bl 0x82f4c040
	ctx.lr = 0x82F37618;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f3762c
	if (ctx.cr0.eq) goto loc_82F3762C;
	// bl 0x82f4b940
	ctx.lr = 0x82F37624;
	sub_82F4B940(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f37630
	goto loc_82F37630;
loc_82F3762C:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_82F37630:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f36e6c
	if (ctx.cr6.eq) goto loc_82F36E6C;
	// lis r4,29712
	ctx.r4.s64 = 1947205632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F37654;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x82f37674
	if (!ctx.cr0.lt) goto loc_82F37674;
loc_82F37660:
	// bl 0x82f4b990
	ctx.lr = 0x82F37664;
	sub_82F4B990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F3766C;
	sub_82F4C098(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82f377d8
	goto loc_82F377D8;
loc_82F37674:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82f4b998
	ctx.lr = 0x82F3767C;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f3768c
	if (!ctx.cr0.lt) goto loc_82F3768C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f37660
	goto loc_82F37660;
loc_82F3768C:
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82f4c400
	ctx.lr = 0x82F376D8;
	sub_82F4C400(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F376E4;
	sub_82F4B990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F376EC;
	sub_82F4C098(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82f377d4
	if (ctx.cr6.lt) goto loc_82F377D4;
loc_82F376F4:
	// lwz r8,84(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f37774
	if (ctx.cr6.gt) goto loc_82F37774;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F37708:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r7,8320
	ctx.r7.s64 = 545259520;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r9,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f37760
	if (!ctx.cr6.eq) goto loc_82F37760;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f37760
	if (!ctx.cr6.eq) goto loc_82F37760;
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// oris r7,r9,4096
	ctx.r7.u64 = ctx.r9.u64 | 268435456;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82F37760:
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f37708
	if (!ctx.cr6.gt) goto loc_82F37708;
loc_82F37774:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f377c4
	if (!ctx.cr6.gt) goto loc_82F377C4;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82F37788:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f377b0
	if (!ctx.cr6.eq) goto loc_82F377B0;
	// lwz r8,16(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
loc_82F377B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f37788
	if (ctx.cr6.lt) goto loc_82F37788;
loc_82F377C4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F377CC;
	sub_82F4B990(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F377D4;
	sub_82F4C098(ctx, base);
loc_82F377D4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82F377D8:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F377E8"))) PPC_WEAK_FUNC(sub_82F377E8);
PPC_FUNC_IMPL(__imp__sub_82F377E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F377F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,21096
	ctx.r29.s64 = ctx.r11.s64 + 21096;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r31,r10,12
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37854;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f37888
	if (!ctx.cr6.eq) goto loc_82F37888;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37888;
	sub_82F328F8(ctx, base);
loc_82F37888:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f3797c
	if (!ctx.cr6.eq) goto loc_82F3797C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f3791c
	if (ctx.cr6.eq) goto loc_82F3791C;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,-18344(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18344);
loc_82F378AC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f37938
	if (!ctx.cr6.eq) goto loc_82F37938;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f37938
	if (ctx.cr0.eq) goto loc_82F37938;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f37938
	if (!ctx.cr6.eq) goto loc_82F37938;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f37938
	if (!ctx.cr6.eq) goto loc_82F37938;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f378ac
	if (ctx.cr6.lt) goto loc_82F378AC;
loc_82F3791C:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// beq cr6,0x82f37940
	if (ctx.cr6.eq) goto loc_82F37940;
	// li r9,465
	ctx.r9.s64 = 465;
	// rlwimi r10,r9,22,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 22) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f37948
	goto loc_82F37948;
loc_82F37938:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f3797c
	goto loc_82F3797C;
loc_82F37940:
	// li r9,1861
	ctx.r9.s64 = 1861;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_82F37948:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f37978
	if (ctx.cr6.eq) goto loc_82F37978;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F37958:
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f37958
	if (!ctx.cr0.eq) goto loc_82F37958;
loc_82F37978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3797C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37984"))) PPC_WEAK_FUNC(sub_82F37984);
PPC_FUNC_IMPL(__imp__sub_82F37984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37988"))) PPC_WEAK_FUNC(sub_82F37988);
PPC_FUNC_IMPL(__imp__sub_82F37988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F37990;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,21320
	ctx.r29.s64 = ctx.r11.s64 + 21320;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F379F4;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f37a28
	if (!ctx.cr6.eq) goto loc_82F37A28;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37A28;
	sub_82F328F8(ctx, base);
loc_82F37A28:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f37b1c
	if (!ctx.cr6.eq) goto loc_82F37B1C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f37a78
	if (ctx.cr6.eq) goto loc_82F37A78;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F37A40:
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f37a94
	if (!ctx.cr6.eq) goto loc_82F37A94;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f37a94
	if (!ctx.cr6.eq) goto loc_82F37A94;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f37a94
	if (!ctx.cr6.eq) goto loc_82F37A94;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f37a40
	if (ctx.cr6.lt) goto loc_82F37A40;
loc_82F37A78:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq cr6,0x82f37a9c
	if (ctx.cr6.eq) goto loc_82F37A9C;
	// li r9,465
	ctx.r9.s64 = 465;
	// rlwimi r10,r9,22,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 22) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82f37aa4
	goto loc_82F37AA4;
loc_82F37A94:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f37b1c
	goto loc_82F37B1C;
loc_82F37A9C:
	// li r9,1861
	ctx.r9.s64 = 1861;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_82F37AA4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82f4cd50
	ctx.lr = 0x82F37AC4;
	sub_82F4CD50(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f37ad8
	if (!ctx.cr6.eq) goto loc_82F37AD8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f37b1c
	goto loc_82F37B1C;
loc_82F37AD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f37b18
	if (ctx.cr6.eq) goto loc_82F37B18;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F37AE8:
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f37ae8
	if (!ctx.cr0.eq) goto loc_82F37AE8;
loc_82F37B18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F37B1C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37B24"))) PPC_WEAK_FUNC(sub_82F37B24);
PPC_FUNC_IMPL(__imp__sub_82F37B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37B28"))) PPC_WEAK_FUNC(sub_82F37B28);
PPC_FUNC_IMPL(__imp__sub_82F37B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F37B30;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82f37b7c
	if (ctx.cr6.eq) goto loc_82F37B7C;
loc_82F37B74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f37d98
	goto loc_82F37D98;
loc_82F37B7C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,20904
	ctx.r30.s64 = ctx.r11.s64 + 20904;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r30,-288
	ctx.r5.s64 = ctx.r30.s64 + -288;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37BA8;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f37c38
	if (!ctx.cr6.eq) goto loc_82F37C38;
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37BD8;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f37c38
	if (!ctx.cr6.eq) goto loc_82F37C38;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37C08;
	sub_82F328F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f37c38
	if (!ctx.cr6.eq) goto loc_82F37C38;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37C38;
	sub_82F328F8(ctx, base);
loc_82F37C38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f37d98
	if (!ctx.cr6.eq) goto loc_82F37D98;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f0,-18344(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18344);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82F37C60:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82f37b74
	if (ctx.cr0.eq) goto loc_82F37B74;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f37b74
	if (!ctx.cr6.eq) goto loc_82F37B74;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f37b74
	if (!ctx.cr6.eq) goto loc_82F37B74;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x82f37c60
	if (ctx.cr6.lt) goto loc_82F37C60;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82f37ce4
	if (!ctx.cr6.eq) goto loc_82F37CE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f37ce4
	if (ctx.cr0.eq) goto loc_82F37CE4;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82F37CE4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lfd f31,-18104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18104);
loc_82F37CF0:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82f4cd50
	ctx.lr = 0x82F37D30;
	sub_82F4CD50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f37db4
	if (ctx.cr6.eq) goto loc_82F37DB4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c668
	ctx.lr = 0x82F37D54;
	sub_82F4C668(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82f37da4
	if (!ctx.cr6.eq) goto loc_82F37DA4;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f37d6c
	if (!ctx.cr6.eq) goto loc_82F37D6C;
	// stw r27,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r27.u32);
loc_82F37D6C:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_82F37D78:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// blt cr6,0x82f37cf0
	if (ctx.cr6.lt) goto loc_82F37CF0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82F37D98:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82F37DA4:
	// lfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.f0.u64);
	// b 0x82f37d78
	goto loc_82F37D78;
loc_82F37DB4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f37d98
	goto loc_82F37D98;
}

__attribute__((alias("__imp__sub_82F37DC0"))) PPC_WEAK_FUNC(sub_82F37DC0);
PPC_FUNC_IMPL(__imp__sub_82F37DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F37DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82F37E04;
	sub_82CB16F0(ctx, base);
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,18952
	ctx.r5.s64 = ctx.r11.s64 + 18952;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r31,r11,12
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37E38;
	sub_82F328F8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82f37f4c
	if (!ctx.cr0.eq) goto loc_82F37F4C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addic. r7,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r7.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// beq 0x82f37edc
	if (ctx.cr0.eq) goto loc_82F37EDC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_82F37E60:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r3,20480
	ctx.r3.s64 = 1342177280;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82f37e8c
	if (!ctx.cr6.eq) goto loc_82F37E8C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f37e88
	if (ctx.cr6.eq) goto loc_82F37E88;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f37f58
	if (!ctx.cr6.eq) goto loc_82F37F58;
loc_82F37E88:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82F37E8C:
	// lis r3,8272
	ctx.r3.s64 = 542113792;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82f37eac
	if (!ctx.cr6.eq) goto loc_82F37EAC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f37ea8
	if (ctx.cr6.eq) goto loc_82F37EA8;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f37f58
	if (!ctx.cr6.eq) goto loc_82F37F58;
loc_82F37EA8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82F37EAC:
	// lis r3,4208
	ctx.r3.s64 = 275775488;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82f37ecc
	if (!ctx.cr6.eq) goto loc_82F37ECC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f37ec8
	if (ctx.cr6.eq) goto loc_82F37EC8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f37f58
	if (!ctx.cr6.eq) goto loc_82F37F58;
loc_82F37EC8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82F37ECC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82f37e60
	if (ctx.cr6.lt) goto loc_82F37E60;
loc_82F37EDC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f37f58
	if (!ctx.cr6.eq) goto loc_82F37F58;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f37f58
	if (!ctx.cr6.eq) goto loc_82F37F58;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f37f38
	if (ctx.cr6.eq) goto loc_82F37F38;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82F37F0C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f37f58
	if (!ctx.cr6.eq) goto loc_82F37F58;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f37f58
	if (!ctx.cr6.eq) goto loc_82F37F58;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82f37f0c
	if (ctx.cr6.lt) goto loc_82F37F0C;
loc_82F37F38:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82cb1160
	ctx.lr = 0x82F37F4C;
	sub_82CB1160(ctx, base);
loc_82F37F4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82F37F50:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82F37F58:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f37f50
	goto loc_82F37F50;
}

__attribute__((alias("__imp__sub_82F37F60"))) PPC_WEAK_FUNC(sub_82F37F60);
PPC_FUNC_IMPL(__imp__sub_82F37F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F37F68;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82F37FA4;
	sub_82CB16F0(ctx, base);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,18824
	ctx.r5.s64 = ctx.r11.s64 + 18824;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// clrlwi r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F37FD8;
	sub_82F328F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x82f37fec
	if (!ctx.cr6.lt) goto loc_82F37FEC;
loc_82F37FE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f38240
	goto loc_82F38240;
loc_82F37FEC:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f38048
	if (ctx.cr6.eq) goto loc_82F38048;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82F38008:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f37fe4
	if (!ctx.cr0.eq) goto loc_82F37FE4;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f37fe4
	if (!ctx.cr6.eq) goto loc_82F37FE4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f38008
	if (ctx.cr6.lt) goto loc_82F38008;
loc_82F38048:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f3823c
	if (!ctx.cr6.eq) goto loc_82F3823C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82F38058:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f37fe4
	if (!ctx.cr6.eq) goto loc_82F37FE4;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f37fe4
	if (!ctx.cr6.eq) goto loc_82F37FE4;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f38098
	if (ctx.cr6.eq) goto loc_82F38098;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f37fe4
	if (!ctx.cr0.eq) goto loc_82F37FE4;
loc_82F38098:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82f38058
	if (ctx.cr6.lt) goto loc_82F38058;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f37fe4
	if (!ctx.cr6.eq) goto loc_82F37FE4;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f37fe4
	if (!ctx.cr6.eq) goto loc_82F37FE4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F380C8;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f380dc
	if (ctx.cr0.eq) goto loc_82F380DC;
	// bl 0x82f4b940
	ctx.lr = 0x82F380D4;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f380e0
	goto loc_82F380E0;
loc_82F380DC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F380E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f380f4
	if (!ctx.cr6.eq) goto loc_82F380F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f38240
	goto loc_82F38240;
loc_82F380F4:
	// li r11,897
	ctx.r11.s64 = 897;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F38114;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82f38230
	if (ctx.cr0.lt) goto loc_82F38230;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F38128;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f3822c
	if (ctx.cr0.lt) goto loc_82F3822C;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F38148;
	sub_82CB1160(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb1160
	ctx.lr = 0x82F38158;
	sub_82CB1160(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f3821c
	if (ctx.cr6.eq) goto loc_82F3821C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82F38168:
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f381ec
	if (ctx.cr0.eq) goto loc_82F381EC;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f381ec
	if (ctx.cr6.eq) goto loc_82F381EC;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82F381EC:
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x82f38168
	if (!ctx.cr0.eq) goto loc_82F38168;
loc_82F3821C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F38228;
	sub_82F4C400(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F3822C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F38230:
	// bl 0x82f4b990
	ctx.lr = 0x82F38234;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F3823C;
	sub_82F4C098(ctx, base);
loc_82F3823C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82F38240:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38248"))) PPC_WEAK_FUNC(sub_82F38248);
PPC_FUNC_IMPL(__imp__sub_82F38248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F38250;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,24296
	ctx.r29.s64 = ctx.r11.s64 + 24296;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F382B8;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f382f4
	if (ctx.cr0.eq) goto loc_82F382F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F382E8;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f38570
	if (!ctx.cr0.eq) goto loc_82F38570;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82F382F4:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f38314
	if (ctx.cr6.eq) goto loc_82F38314;
loc_82F3830C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f38570
	goto loc_82F38570;
loc_82F38314:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x82f38370
	if (!ctx.cr6.gt) goto loc_82F38370;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82F38338:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f3830c
	if (!ctx.cr6.eq) goto loc_82F3830C;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82f3830c
	if (!ctx.cr6.eq) goto loc_82F3830C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f38338
	if (ctx.cr6.lt) goto loc_82F38338;
loc_82F38370:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F38378;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f38388
	if (ctx.cr0.eq) goto loc_82F38388;
	// bl 0x82f4b940
	ctx.lr = 0x82F38384;
	sub_82F4B940(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82F38388:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82f3839c
	if (!ctx.cr6.eq) goto loc_82F3839C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82f3856c
	goto loc_82F3856C;
loc_82F3839C:
	// lis r4,28800
	ctx.r4.s64 = 1887436800;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F383B8;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f3855c
	if (ctx.cr0.lt) goto loc_82F3855C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F383CC;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f3855c
	if (ctx.cr0.lt) goto loc_82F3855C;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F383E8;
	sub_82CB1160(ctx, base);
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bne cr6,0x82f3840c
	if (!ctx.cr6.eq) goto loc_82F3840C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// ld r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x82f38504
	goto loc_82F38504;
loc_82F3840C:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f3844c
	if (ctx.cr6.eq) goto loc_82F3844C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82F3844C:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f38468
	if (ctx.cr6.eq) goto loc_82F38468;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82F38468:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfd f31,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F38488;
	sub_82F4CD50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F384A4;
	sub_82F4CD50(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f38554
	if (ctx.cr6.eq) goto loc_82F38554;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f38554
	if (ctx.cr6.eq) goto loc_82F38554;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// xoris r8,r26,8
	ctx.r8.u64 = ctx.r26.u64 ^ 524288;
	// xoris r7,r27,8
	ctx.r7.u64 = ctx.r27.u64 ^ 524288;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r26,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r27,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82F38504:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F38530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f38540
	if (ctx.cr0.eq) goto loc_82F38540;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x82f3855c
	goto loc_82F3855C;
loc_82F38540:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F3854C;
	sub_82F4C400(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f3855c
	goto loc_82F3855C;
loc_82F38554:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_82F3855C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F38564;
	sub_82F4B990(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F3856C;
	sub_82F4C098(ctx, base);
loc_82F3856C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82F38570:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3857C"))) PPC_WEAK_FUNC(sub_82F3857C);
PPC_FUNC_IMPL(__imp__sub_82F3857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38580"))) PPC_WEAK_FUNC(sub_82F38580);
PPC_FUNC_IMPL(__imp__sub_82F38580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F38588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f385b0
	if (ctx.cr6.eq) goto loc_82F385B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f386e4
	goto loc_82F386E4;
loc_82F385B0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F385B8;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f385cc
	if (ctx.cr0.eq) goto loc_82F385CC;
	// bl 0x82f4b940
	ctx.lr = 0x82F385C4;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f385d0
	goto loc_82F385D0;
loc_82F385CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F385D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f385e4
	if (!ctx.cr6.eq) goto loc_82F385E4;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82f386e0
	goto loc_82F386E0;
loc_82F385E4:
	// lis r4,28800
	ctx.r4.s64 = 1887436800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F38600;
	sub_82F4C0D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f386d0
	if (ctx.cr0.lt) goto loc_82F386D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F38614;
	sub_82F4B998(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82f386d0
	if (ctx.cr0.lt) goto loc_82F386D0;
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82F38634:
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82f38634
	if (ctx.cr6.lt) goto loc_82F38634;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82f4cd50
	ctx.lr = 0x82F38670;
	sub_82F4CD50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f38688
	if (!ctx.cr6.eq) goto loc_82F38688;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f386e4
	goto loc_82F386E4;
loc_82F38688:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F386B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f386c0
	if (ctx.cr0.eq) goto loc_82F386C0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82f386d0
	goto loc_82F386D0;
loc_82F386C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F386CC;
	sub_82F4C400(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F386D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F386D8;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F386E0;
	sub_82F4C098(ctx, base);
loc_82F386E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82F386E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F386EC"))) PPC_WEAK_FUNC(sub_82F386EC);
PPC_FUNC_IMPL(__imp__sub_82F386EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F386F0"))) PPC_WEAK_FUNC(sub_82F386F0);
PPC_FUNC_IMPL(__imp__sub_82F386F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F386F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F38720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f38930
	if (!ctx.cr0.eq) goto loc_82F38930;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f38784
	if (ctx.cr6.eq) goto loc_82F38784;
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
loc_82F38744:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,76(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f38768
	if (ctx.cr6.eq) goto loc_82F38768;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f38768
	if (!ctx.cr6.lt) goto loc_82F38768;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_82F38768:
	// lwz r10,72(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f38778
	if (!ctx.cr6.gt) goto loc_82F38778;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82F38778:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82f38744
	if (!ctx.cr0.eq) goto loc_82F38744;
loc_82F38784:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f388b4
	if (ctx.cr6.eq) goto loc_82F388B4;
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_82F387A0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f388a8
	if (ctx.cr0.eq) goto loc_82F388A8;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f388a8
	if (ctx.cr6.eq) goto loc_82F388A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f38890
	if (!ctx.cr6.lt) goto loc_82F38890;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x82f38890
	goto loc_82F38890;
loc_82F387E4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f388a0
	if (ctx.cr6.eq) goto loc_82F388A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f388a0
	if (ctx.cr6.eq) goto loc_82F388A0;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82F38808:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f38824
	if (ctx.cr6.eq) goto loc_82F38824;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82f38808
	if (ctx.cr6.lt) goto loc_82F38808;
loc_82F38824:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82f388a0
	if (!ctx.cr6.lt) goto loc_82F388A0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f38874
	if (ctx.cr6.eq) goto loc_82F38874;
	// lwz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82F3884C:
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r5
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// lwz r29,16(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f38874
	if (ctx.cr6.eq) goto loc_82F38874;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f3884c
	if (ctx.cr6.lt) goto loc_82F3884C;
loc_82F38874:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82f388a0
	if (!ctx.cr6.lt) goto loc_82F388A0;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
loc_82F38890:
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f387e4
	if (!ctx.cr6.lt) goto loc_82F387E4;
	// b 0x82f388a8
	goto loc_82F388A8;
loc_82F388A0:
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82F388A8:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82f387a0
	if (!ctx.cr0.eq) goto loc_82F387A0;
loc_82F388B4:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f38904
	if (ctx.cr6.eq) goto loc_82F38904;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82F388CC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r29,72(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82f388f4
	if (ctx.cr6.lt) goto loc_82F388F4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82f38904
	if (!ctx.cr6.gt) goto loc_82F38904;
loc_82F388F4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82f388cc
	if (ctx.cr6.lt) goto loc_82F388CC;
loc_82F38904:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82f38930
	if (ctx.cr6.eq) goto loc_82F38930;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F38928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f38950
	if (ctx.cr0.eq) goto loc_82F38950;
loc_82F38930:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f38948
	if (ctx.cr6.eq) goto loc_82F38948;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F38940;
	sub_82F4B990(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F38948;
	sub_82F4C098(ctx, base);
loc_82F38948:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f389e8
	goto loc_82F389E8;
loc_82F38950:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f38978
	if (ctx.cr6.eq) goto loc_82F38978;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F38960:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x82f38960
	if (!ctx.cr0.eq) goto loc_82F38960;
loc_82F38978:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f3899c
	if (ctx.cr6.eq) goto loc_82F3899C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F38994;
	sub_82F4B990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F3899C;
	sub_82F4C098(ctx, base);
loc_82F3899C:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f389e4
	if (!ctx.cr6.gt) goto loc_82F389E4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F389B8:
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r29,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r29.u32);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f389b8
	if (ctx.cr6.lt) goto loc_82F389B8;
loc_82F389E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F389E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F389F0"))) PPC_WEAK_FUNC(sub_82F389F0);
PPC_FUNC_IMPL(__imp__sub_82F389F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F389F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r8,r11,12
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f38ab8
	if (ctx.cr0.eq) goto loc_82F38AB8;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82F38A24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r31,r31,32,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | ctx.r29.u64;
	// cmpld cr6,r4,r31
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r31.u64, ctx.xer);
	// bne cr6,0x82f38b20
	if (!ctx.cr6.eq) goto loc_82F38B20;
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,16(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r29,16(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r31,r31,32,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// or r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 | ctx.r29.u64;
	// cmpld cr6,r31,r4
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x82f38b20
	if (!ctx.cr6.eq) goto loc_82F38B20;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f38b20
	if (!ctx.cr6.eq) goto loc_82F38B20;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f38a24
	if (ctx.cr6.lt) goto loc_82F38A24;
loc_82F38AB8:
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwimi r10,r9,28,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82f38b14
	if (ctx.cr6.eq) goto loc_82F38B14;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f38b14
	if (ctx.cr0.eq) goto loc_82F38B14;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F38B14;
	sub_82CB1160(ctx, base);
loc_82F38B14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38B18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82F38B20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f38b18
	goto loc_82F38B18;
}

__attribute__((alias("__imp__sub_82F38B28"))) PPC_WEAK_FUNC(sub_82F38B28);
PPC_FUNC_IMPL(__imp__sub_82F38B28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F38B30;
	__savegprlr_28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,260(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi. r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f38be0
	if (ctx.cr0.eq) goto loc_82F38BE0;
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// lwz r3,20(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82F38B68:
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// lwzx r31,r31,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// bne cr6,0x82f38c04
	if (!ctx.cr6.eq) goto loc_82F38C04;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lwzx r28,r28,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f38bb4
	if (ctx.cr6.eq) goto loc_82F38BB4;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82f38c04
	if (ctx.cr6.eq) goto loc_82F38C04;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82f38c04
	if (!ctx.cr6.eq) goto loc_82F38C04;
loc_82F38BB4:
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xoris r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 ^ 524288;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f38c04
	if (!ctx.cr6.eq) goto loc_82F38C04;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f38b68
	if (ctx.cr6.lt) goto loc_82F38B68;
loc_82F38BE0:
	// lwz r11,260(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r10,r8,28,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,260(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82F38C00:
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82F38C04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f38c00
	goto loc_82F38C00;
}

__attribute__((alias("__imp__sub_82F38C0C"))) PPC_WEAK_FUNC(sub_82F38C0C);
PPC_FUNC_IMPL(__imp__sub_82F38C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38C10"))) PPC_WEAK_FUNC(sub_82F38C10);
PPC_FUNC_IMPL(__imp__sub_82F38C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F38C18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,260(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f38cfc
	if (ctx.cr0.eq) goto loc_82F38CFC;
	// rotlwi r8,r27,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82F38C4C:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r31,r10,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// lwzx r29,r30,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r8,r26,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// lwzx r30,r31,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bne cr6,0x82f38d3c
	if (!ctx.cr6.eq) goto loc_82F38D3C;
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,56(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwzx r31,r31,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f38ca0
	if (ctx.cr6.eq) goto loc_82F38CA0;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f38d3c
	if (ctx.cr6.eq) goto loc_82F38D3C;
	// lwz r26,56(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f38d3c
	if (!ctx.cr6.eq) goto loc_82F38D3C;
loc_82F38CA0:
	// lwz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// xoris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 ^ 524288;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f38d3c
	if (!ctx.cr6.eq) goto loc_82F38D3C;
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f38cd4
	if (ctx.cr6.eq) goto loc_82F38CD4;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f38d3c
	if (ctx.cr6.eq) goto loc_82F38D3C;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f38d3c
	if (!ctx.cr6.eq) goto loc_82F38D3C;
loc_82F38CD4:
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// xoris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 ^ 524288;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f38d3c
	if (!ctx.cr6.eq) goto loc_82F38D3C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f38c4c
	if (ctx.cr6.lt) goto loc_82F38C4C;
loc_82F38CFC:
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwimi r8,r7,28,0,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 28) & 0xFFF00000) | (ctx.r8.u64 & 0xFFFFFFFF000FFFFF);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F38D30;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38D34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82F38D3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f38d34
	goto loc_82F38D34;
}

__attribute__((alias("__imp__sub_82F38D44"))) PPC_WEAK_FUNC(sub_82F38D44);
PPC_FUNC_IMPL(__imp__sub_82F38D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D48"))) PPC_WEAK_FUNC(sub_82F38D48);
PPC_FUNC_IMPL(__imp__sub_82F38D48) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f38ec0
	if (!ctx.cr6.eq) goto loc_82F38EC0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f38ec0
	if (ctx.cr6.eq) goto loc_82F38EC0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f38ec0
	if (!ctx.cr6.eq) goto loc_82F38EC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f38ec0
	if (ctx.cr6.eq) goto loc_82F38EC0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82F38DCC:
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f38ddc
	if (!ctx.cr6.eq) goto loc_82F38DDC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82F38DDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f38dcc
	if (ctx.cr6.lt) goto loc_82F38DCC;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f38ec0
	if (ctx.cr6.eq) goto loc_82F38EC0;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f38e40
	if (ctx.cr0.eq) goto loc_82F38E40;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x82f38e6c
	goto loc_82F38E6C;
loc_82F38E40:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f38ec0
	if (ctx.cr0.eq) goto loc_82F38EC0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F38E6C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,-18352(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18352);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f13,32(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f38ec0
	if (!ctx.cr6.eq) goto loc_82F38EC0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r10,r10,0,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f38ec0
	if (!ctx.cr6.eq) goto loc_82F38EC0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// b 0x82f38ec4
	goto loc_82F38EC4;
loc_82F38EC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F38EC4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38ED0"))) PPC_WEAK_FUNC(sub_82F38ED0);
PPC_FUNC_IMPL(__imp__sub_82F38ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82F38ED8;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r29,r9,12
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFFF;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82f39040
	if (!ctx.cr0.eq) goto loc_82F39040;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// beq cr6,0x82f38f64
	if (ctx.cr6.eq) goto loc_82F38F64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82F38F30:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r31,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f38d48
	ctx.lr = 0x82F38F4C;
	sub_82F38D48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f392c0
	if (!ctx.cr0.eq) goto loc_82F392C0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f38f30
	if (ctx.cr6.lt) goto loc_82F38F30;
loc_82F38F64:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f38fd8
	if (ctx.cr6.eq) goto loc_82F38FD8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r8,r26,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r26.s64;
	// subf r7,r26,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r26.s64;
loc_82F38F8C:
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r5,56(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f392bc
	if (!ctx.cr6.eq) goto loc_82F392BC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r10,r10,0,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f392bc
	if (!ctx.cr0.eq) goto loc_82F392BC;
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f392bc
	if (!ctx.cr6.eq) goto loc_82F392BC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f38f8c
	if (ctx.cr6.lt) goto loc_82F38F8C;
loc_82F38FD8:
	// lwz r5,12(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f390c8
	if (ctx.cr6.eq) goto loc_82F390C8;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82F38FEC:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f392bc
	if (ctx.cr6.eq) goto loc_82F392BC;
	// lwz r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82F39008:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f39018
	if (!ctx.cr6.eq) goto loc_82F39018;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_82F39018:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f39008
	if (!ctx.cr0.eq) goto loc_82F39008;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82f392bc
	if (!ctx.cr6.eq) goto loc_82F392BC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82f38fec
	if (ctx.cr6.lt) goto loc_82F38FEC;
	// b 0x82f390c8
	goto loc_82F390C8;
loc_82F39040:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// beq cr6,0x82f390c4
	if (ctx.cr6.eq) goto loc_82F390C4;
	// lwz r8,20(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r7,r26,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r26.s64;
loc_82F39054:
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r5,56(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f392bc
	if (!ctx.cr6.eq) goto loc_82F392BC;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// rlwinm r9,r9,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f392bc
	if (!ctx.cr6.eq) goto loc_82F392BC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r5,r9,0,11,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82f392bc
	if (!ctx.cr0.eq) goto loc_82F392BC;
	// rlwinm. r9,r9,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f390b4
	if (!ctx.cr0.eq) goto loc_82F390B4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f392bc
	if (ctx.cr0.eq) goto loc_82F392BC;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f392bc
	if (ctx.cr0.eq) goto loc_82F392BC;
loc_82F390B4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f39054
	if (ctx.cr6.lt) goto loc_82F39054;
loc_82F390C4:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F390C8:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F390D0;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f390e4
	if (ctx.cr0.eq) goto loc_82F390E4;
	// bl 0x82f4b940
	ctx.lr = 0x82F390DC;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f390e8
	goto loc_82F390E8;
loc_82F390E4:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82F390E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f390fc
	if (!ctx.cr6.eq) goto loc_82F390FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f392c0
	goto loc_82F392C0;
loc_82F390FC:
	// li r11,1793
	ctx.r11.s64 = 1793;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mulli r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 * 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F3911C;
	sub_82F4C0D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f392c0
	if (ctx.cr0.lt) goto loc_82F392C0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b998
	ctx.lr = 0x82F39130;
	sub_82F4B998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f392c0
	if (ctx.cr0.lt) goto loc_82F392C0;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F3914C;
	sub_82CB1160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cb1160
	ctx.lr = 0x82F3915C;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r29,r29,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F39174;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F39188;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f391dc
	if (!ctx.cr6.eq) goto loc_82F391DC;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39204
	if (ctx.cr6.eq) goto loc_82F39204;
loc_82F391DC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f391f8
	if (!ctx.cr6.eq) goto loc_82F391F8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f39204
	if (ctx.cr6.eq) goto loc_82F39204;
loc_82F391F8:
	// lwz r11,136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39214
	if (ctx.cr6.eq) goto loc_82F39214;
loc_82F39204:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f39214
	if (!ctx.cr0.eq) goto loc_82F39214;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82F39214:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F39230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f392ac
	if (!ctx.cr0.eq) goto loc_82F392AC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f3925c
	if (!ctx.cr0.eq) goto loc_82F3925C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82f39268
	if (ctx.cr6.eq) goto loc_82F39268;
loc_82F3925C:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f392ac
	if (ctx.cr0.eq) goto loc_82F392AC;
loc_82F39268:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4c400
	ctx.lr = 0x82F3927C;
	sub_82F4C400(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f392c0
	if (ctx.cr0.lt) goto loc_82F392C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F3928C;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F39294;
	sub_82F4C098(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r24,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r24.u32);
	// beq cr6,0x82f392a4
	if (ctx.cr6.eq) goto loc_82F392A4;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
loc_82F392A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f392c0
	goto loc_82F392C0;
loc_82F392AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F392B4;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F392BC;
	sub_82F4C098(ctx, base);
loc_82F392BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F392C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F392C8"))) PPC_WEAK_FUNC(sub_82F392C8);
PPC_FUNC_IMPL(__imp__sub_82F392C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82F392D0;
	__savegprlr_20(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// addi r31,r11,17672
	ctx.r31.s64 = ctx.r11.s64 + 17672;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r5,r31,-96
	ctx.r5.s64 = ctx.r31.s64 + -96;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// clrlwi r26,r9,12
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFFF;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F39334;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f3936c
	if (ctx.cr0.eq) goto loc_82F3936C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f328f8
	ctx.lr = 0x82F39364;
	sub_82F328F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f3961c
	if (!ctx.cr0.eq) goto loc_82F3961C;
loc_82F3936C:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// addi r24,r1,192
	ctx.r24.s64 = ctx.r1.s64 + 192;
	// addi r25,r1,208
	ctx.r25.s64 = ctx.r1.s64 + 208;
	// lis r20,8
	ctx.r20.s64 = 524288;
loc_82F3937C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f39458
	if (ctx.cr6.eq) goto loc_82F39458;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// rlwinm r11,r11,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000;
	// srawi r5,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
loc_82F393A0:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// beq cr6,0x82f393e0
	if (ctx.cr6.eq) goto loc_82F393E0;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82f39458
	if (!ctx.cr6.eq) goto loc_82F39458;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// b 0x82f39440
	goto loc_82F39440;
loc_82F393E0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r3,r3,32,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 | ctx.r31.u64;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpld cr6,r3,r9
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82f39458
	if (!ctx.cr6.eq) goto loc_82F39458;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r3,r3,32,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 | ctx.r31.u64;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpld cr6,r3,r9
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82f39458
	if (!ctx.cr6.eq) goto loc_82F39458;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
loc_82F39440:
	// bne cr6,0x82f39458
	if (!ctx.cr6.eq) goto loc_82F39458;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82f393a0
	if (ctx.cr6.lt) goto loc_82F393A0;
loc_82F39458:
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f39608
	if (!ctx.cr6.eq) goto loc_82F39608;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82f4c040
	ctx.lr = 0x82F39468;
	sub_82F4C040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f3947c
	if (ctx.cr0.eq) goto loc_82F3947C;
	// bl 0x82f4b940
	ctx.lr = 0x82F39474;
	sub_82F4B940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f39480
	goto loc_82F39480;
loc_82F3947C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82F39480:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f39628
	if (ctx.cr6.eq) goto loc_82F39628;
	// li r11,1793
	ctx.r11.s64 = 1793;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mulli r5,r26,3
	ctx.r5.s64 = ctx.r26.s64 * 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c0d8
	ctx.lr = 0x82F394A8;
	sub_82F4C0D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82f39634
	if (ctx.cr0.lt) goto loc_82F39634;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4b998
	ctx.lr = 0x82F394BC;
	sub_82F4B998(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f39648
	if (ctx.cr0.lt) goto loc_82F39648;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x82F394DC;
	sub_82CB1160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82cb1160
	ctx.lr = 0x82F394EC;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F39500;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r29,r26,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F39518;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f3956c
	if (!ctx.cr6.eq) goto loc_82F3956C;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f39594
	if (ctx.cr6.eq) goto loc_82F39594;
loc_82F3956C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f39588
	if (!ctx.cr6.eq) goto loc_82F39588;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f39594
	if (ctx.cr6.eq) goto loc_82F39594;
loc_82F39588:
	// lwz r10,136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f395a4
	if (ctx.cr6.eq) goto loc_82F395A4;
loc_82F39594:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f395a4
	if (!ctx.cr0.eq) goto loc_82F395A4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F395A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F395C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f395f8
	if (!ctx.cr0.eq) goto loc_82F395F8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f395ec
	if (!ctx.cr0.eq) goto loc_82F395EC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f39650
	if (ctx.cr6.eq) goto loc_82F39650;
loc_82F395EC:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f39650
	if (!ctx.cr0.eq) goto loc_82F39650;
loc_82F395F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F39600;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F39608;
	sub_82F4C098(ctx, base);
loc_82F39608:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r25,r25,-16
	ctx.r25.s64 = ctx.r25.s64 + -16;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x82f3937c
	if (ctx.cr6.lt) goto loc_82F3937C;
loc_82F3961C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F39620:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82F39628:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f39620
	goto loc_82F39620;
loc_82F39634:
	// bl 0x82f4b990
	ctx.lr = 0x82F39638;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F39640;
	sub_82F4C098(ctx, base);
loc_82F39640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82f39620
	goto loc_82F39620;
loc_82F39648:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f39634
	goto loc_82F39634;
loc_82F39650:
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82f39668
	if (!ctx.cr6.eq) goto loc_82F39668;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
loc_82F39668:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f396d0
	if (ctx.cr0.eq) goto loc_82F396D0;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f396d0
	if (!ctx.cr0.eq) goto loc_82F396D0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f39694
	if (ctx.cr0.eq) goto loc_82F39694;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f396d0
	if (!ctx.cr0.eq) goto loc_82F396D0;
loc_82F39694:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F3969C;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F396A4;
	sub_82F4C098(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,4703
	ctx.r5.s64 = 4703;
	// addi r6,r11,24772
	ctx.r6.s64 = ctx.r11.s64 + 24772;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82f5e8f8
	ctx.lr = 0x82F396C0;
	sub_82F5E8F8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82f3961c
	if (!ctx.cr6.eq) goto loc_82F3961C;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// b 0x82f3961c
	goto loc_82F3961C;
loc_82F396D0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82f39738
	if (!ctx.cr6.eq) goto loc_82F39738;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f396fc
	if (ctx.cr6.eq) goto loc_82F396FC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_82F396E8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r23,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// bne 0x82f396e8
	if (!ctx.cr0.eq) goto loc_82F396E8;
loc_82F396FC:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f39724
	if (ctx.cr6.eq) goto loc_82F39724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F3971C;
	sub_82F4B990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F39724;
	sub_82F4C098(ctx, base);
loc_82F39724:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// b 0x82f39774
	goto loc_82F39774;
loc_82F39738:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x82f4c400
	ctx.lr = 0x82F39744;
	sub_82F4C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b990
	ctx.lr = 0x82F39750;
	sub_82F4B990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4c098
	ctx.lr = 0x82F39758;
	sub_82F4C098(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f39640
	if (ctx.cr6.lt) goto loc_82F39640;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x82f4b998
	ctx.lr = 0x82F3976C;
	sub_82F4B998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f39620
	if (ctx.cr0.lt) goto loc_82F39620;
loc_82F39774:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f39620
	goto loc_82F39620;
}

__attribute__((alias("__imp__sub_82F3977C"))) PPC_WEAK_FUNC(sub_82F3977C);
PPC_FUNC_IMPL(__imp__sub_82F3977C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39780"))) PPC_WEAK_FUNC(sub_82F39780);
PPC_FUNC_IMPL(__imp__sub_82F39780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f397f8
	if (ctx.cr6.eq) goto loc_82F397F8;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f397f8
	if (ctx.cr6.eq) goto loc_82F397F8;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_82F397B0:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82F397B8:
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f397d4
	if (!ctx.cr6.eq) goto loc_82F397D4;
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f39800
	if (ctx.cr6.eq) goto loc_82F39800;
loc_82F397D4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x82f397b8
	if (ctx.cr6.lt) goto loc_82F397B8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f397b0
	if (!ctx.cr6.eq) goto loc_82F397B0;
loc_82F397F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F39800:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39808"))) PPC_WEAK_FUNC(sub_82F39808);
PPC_FUNC_IMPL(__imp__sub_82F39808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82F39810;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 30, ctx.xer);
	// ble cr6,0x82f3983c
	if (!ctx.cr6.gt) goto loc_82F3983C;
loc_82F39830:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f39a84
	goto loc_82F39A84;
loc_82F3983C:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f39a80
	if (!ctx.cr6.lt) goto loc_82F39A80;
	// lis r27,29504
	ctx.r27.s64 = 1933574144;
	// lis r26,29456
	ctx.r26.s64 = 1930428416;
	// lis r24,29488
	ctx.r24.s64 = 1932525568;
	// lis r22,29440
	ctx.r22.s64 = 1929379840;
	// lis r25,29472
	ctx.r25.s64 = 1931476992;
	// li r23,0
	ctx.r23.s64 = 0;
loc_82F39864:
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82f39a80
	if (ctx.cr6.eq) goto loc_82F39A80;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82f3989c
	if (ctx.cr6.eq) goto loc_82F3989C;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82f39a80
	if (ctx.cr6.eq) goto loc_82F39A80;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82f39a80
	if (ctx.cr6.eq) goto loc_82F39A80;
loc_82F3989C:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82f398bc
	if (ctx.cr6.eq) goto loc_82F398BC;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82f398bc
	if (ctx.cr6.eq) goto loc_82F398BC;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82f398bc
	if (ctx.cr6.eq) goto loc_82F398BC;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f39a1c
	if (!ctx.cr6.eq) goto loc_82F39A1C;
loc_82F398BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82f398d0
	if (ctx.cr6.eq) goto loc_82F398D0;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f398d4
	if (!ctx.cr6.eq) goto loc_82F398D4;
loc_82F398D0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82F398D4:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82f399d0
	if (ctx.cr6.lt) goto loc_82F399D0;
	// lwz r7,16(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// subf r8,r30,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r30.s64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82F398F4:
	// lwzx r20,r8,r11
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82f39910
	if (!ctx.cr6.eq) goto loc_82F39910;
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r20,r3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82f39910
	if (!ctx.cr6.eq) goto loc_82F39910;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F39910:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82f398f4
	if (!ctx.cr0.eq) goto loc_82F398F4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82f399d0
	if (ctx.cr6.eq) goto loc_82F399D0;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82f3993c
	if (ctx.cr6.eq) goto loc_82F3993C;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f3993c
	if (ctx.cr6.eq) goto loc_82F3993C;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// b 0x82f39940
	goto loc_82F39940;
loc_82F3993C:
	// stw r23,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r23.u32);
loc_82F39940:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// lwzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82f39808
	ctx.lr = 0x82F39980;
	sub_82F39808(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82f399a8
	if (!ctx.cr6.eq) goto loc_82F399A8;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// b 0x82f39a1c
	goto loc_82F39A1C;
loc_82F399A8:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f399b8
	if (!ctx.cr6.eq) goto loc_82F399B8;
	// lis r11,29472
	ctx.r11.s64 = 1931476992;
	// b 0x82f399c4
	goto loc_82F399C4;
loc_82F399B8:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f39a1c
	if (!ctx.cr6.eq) goto loc_82F39A1C;
	// lis r11,29440
	ctx.r11.s64 = 1929379840;
loc_82F399C4:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82f39a1c
	goto loc_82F39A1C;
loc_82F399D0:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82f399e0
	if (ctx.cr6.eq) goto loc_82F399E0;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f39a1c
	if (!ctx.cr6.eq) goto loc_82F39A1C;
loc_82F399E0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f39808
	ctx.lr = 0x82F39A1C;
	sub_82F39808(ctx, base);
loc_82F39A1C:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f39830
	if (!ctx.cr6.lt) goto loc_82F39830;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82f39a50
	if (ctx.cr6.eq) goto loc_82F39A50;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f39a64
	if (!ctx.cr6.eq) goto loc_82F39A64;
loc_82F39A50:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82F39A64:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f39864
	if (ctx.cr6.lt) goto loc_82F39864;
loc_82F39A80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F39A84:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39A8C"))) PPC_WEAK_FUNC(sub_82F39A8C);
PPC_FUNC_IMPL(__imp__sub_82F39A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39A90"))) PPC_WEAK_FUNC(sub_82F39A90);
PPC_FUNC_IMPL(__imp__sub_82F39A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82F39A98;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f39dec
	if (!ctx.cr6.eq) goto loc_82F39DEC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f39ad8
	if (ctx.cr0.eq) goto loc_82F39AD8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82F39AD8:
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | ctx.r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r5,r11,64
	ctx.r5.u64 = ctx.r11.u64 | 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f4ccb0
	ctx.lr = 0x82F39AF0;
	sub_82F4CCB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82f39b08
	if (!ctx.cr6.eq) goto loc_82F39B08;
loc_82F39AFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f39df8
	goto loc_82F39DF8;
loc_82F39B08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f39b80
	if (ctx.cr0.eq) goto loc_82F39B80;
	// lwz r10,60(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f39b28
	if (ctx.cr0.eq) goto loc_82F39B28;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F39B28:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,32(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F39B54;
	sub_82F4CD50(ctx, base);
	// stw r3,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f39afc
	if (ctx.cr6.eq) goto loc_82F39AFC;
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4c760
	ctx.lr = 0x82F39B7C;
	sub_82F4C760(ctx, base);
	// b 0x82f39df4
	goto loc_82F39DF4;
loc_82F39B80:
	// lwz r22,8(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f39c4c
	if (ctx.cr6.eq) goto loc_82F39C4C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F39B98:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,96(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r8,r9,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f39bdc
	if (!ctx.cr6.eq) goto loc_82F39BDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f39bdc
	if (ctx.cr6.eq) goto loc_82F39BDC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f39be4
	if (ctx.cr6.eq) goto loc_82F39BE4;
loc_82F39BDC:
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f39c3c
	if (!ctx.cr6.eq) goto loc_82F39C3C;
loc_82F39BE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f4cd50
	ctx.lr = 0x82F39BFC;
	sub_82F4CD50(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f39afc
	if (ctx.cr6.eq) goto loc_82F39AFC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f4c760
	ctx.lr = 0x82F39C20;
	sub_82F4C760(ctx, base);
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,112(r23)
	PPC_STORE_U32(ctx.r23.u32 + 112, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f39c3c
	if (ctx.cr6.eq) goto loc_82F39C3C;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82F39C3C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82f39b98
	if (ctx.cr6.lt) goto loc_82F39B98;
loc_82F39C4C:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f39dec
	if (ctx.cr6.eq) goto loc_82F39DEC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82f39dec
	if (ctx.cr6.eq) goto loc_82F39DEC;
	// rlwinm. r10,r24,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f39c70
	if (ctx.cr0.eq) goto loc_82F39C70;
	// lwz r23,180(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x82f39c74
	goto loc_82F39C74;
loc_82F39C70:
	// lwz r23,184(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
loc_82F39C74:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82f39afc
	if (ctx.cr6.eq) goto loc_82F39AFC;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f39dec
	if (ctx.cr6.eq) goto loc_82F39DEC;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82F39C8C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,96(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r8,r9,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f39cd0
	if (!ctx.cr6.eq) goto loc_82F39CD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f39cd0
	if (ctx.cr6.eq) goto loc_82F39CD0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f39cd8
	if (ctx.cr6.eq) goto loc_82F39CD8;
loc_82F39CD0:
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f39ddc
	if (!ctx.cr6.eq) goto loc_82F39DDC;
loc_82F39CD8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,32(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r3,228(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// bl 0x82f4cd50
	ctx.lr = 0x82F39CF0;
	sub_82F4CD50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82f39afc
	if (ctx.cr6.eq) goto loc_82F39AFC;
	// lwz r8,68(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82f39ddc
	if (ctx.cr6.eq) goto loc_82F39DDC;
	// lwz r3,228(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f39ddc
	if (ctx.cr6.eq) goto loc_82F39DDC;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f39ddc
	if (!ctx.cr6.eq) goto loc_82F39DDC;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f39d74
	if (ctx.cr6.eq) goto loc_82F39D74;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82F39D58:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f39d74
	if (ctx.cr6.eq) goto loc_82F39D74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f39d58
	if (ctx.cr6.lt) goto loc_82F39D58;
loc_82F39D74:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f4cdf0
	ctx.lr = 0x82F39D94;
	sub_82F4CDF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f39afc
	if (ctx.cr6.eq) goto loc_82F39AFC;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4b998
	ctx.lr = 0x82F39DB8;
	sub_82F4B998(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r27,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r27.u32);
loc_82F39DDC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82f39c8c
	if (ctx.cr6.lt) goto loc_82F39C8C;
loc_82F39DEC:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82F39DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F39DF8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39E00"))) PPC_WEAK_FUNC(sub_82F39E00);
PPC_FUNC_IMPL(__imp__sub_82F39E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ble cr6,0x82f39e40
	if (!ctx.cr6.gt) goto loc_82F39E40;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82f39e68
	if (!ctx.cr6.lt) goto loc_82F39E68;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82F39E20:
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// bne 0x82f39e20
	if (!ctx.cr0.eq) goto loc_82F39E20;
	// b 0x82f39e68
	goto loc_82F39E68;
loc_82F39E40:
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82f39e68
	if (!ctx.cr6.gt) goto loc_82F39E68;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82F39E4C:
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// bne 0x82f39e4c
	if (!ctx.cr0.eq) goto loc_82F39E4C;
loc_82F39E68:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39E7C"))) PPC_WEAK_FUNC(sub_82F39E7C);
PPC_FUNC_IMPL(__imp__sub_82F39E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39E80"))) PPC_WEAK_FUNC(sub_82F39E80);
PPC_FUNC_IMPL(__imp__sub_82F39E80) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f39f58
	if (ctx.cr6.eq) goto loc_82F39F58;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f39eac
	if (ctx.cr0.eq) goto loc_82F39EAC;
loc_82F39EA0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82F39EAC:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f39f00
	if (ctx.cr6.eq) goto loc_82F39F00;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82F39EC0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f39ef0
	if (!ctx.cr6.eq) goto loc_82F39EF0;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f39ef0
	if (ctx.cr6.eq) goto loc_82F39EF0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82f39ea0
	if (ctx.cr6.eq) goto loc_82F39EA0;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f39ea0
	if (ctx.cr6.eq) goto loc_82F39EA0;
loc_82F39EF0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f39ec0
	if (ctx.cr6.lt) goto loc_82F39EC0;
loc_82F39F00:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f39f58
	if (ctx.cr6.eq) goto loc_82F39F58;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F39F10:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f39f44
	if (!ctx.cr6.eq) goto loc_82F39F44;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f39f38
	if (!ctx.cr6.eq) goto loc_82F39F38;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// b 0x82f39f44
	goto loc_82F39F44;
loc_82F39F38:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82f39f44
	if (!ctx.cr6.eq) goto loc_82F39F44;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_82F39F44:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f39f10
	if (ctx.cr6.lt) goto loc_82F39F10;
loc_82F39F58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39F60"))) PPC_WEAK_FUNC(sub_82F39F60);
PPC_FUNC_IMPL(__imp__sub_82F39F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,29520
	ctx.r11.s64 = 1934622720;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fa0
	if (ctx.cr6.eq) goto loc_82F39FA0;
	// lis r11,29536
	ctx.r11.s64 = 1935671296;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fa0
	if (ctx.cr6.eq) goto loc_82F39FA0;
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fa0
	if (ctx.cr6.eq) goto loc_82F39FA0;
	// lis r11,29568
	ctx.r11.s64 = 1937768448;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fa0
	if (ctx.cr6.eq) goto loc_82F39FA0;
	// lis r11,4336
	ctx.r11.s64 = 284164096;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82F39FA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39FA8"))) PPC_WEAK_FUNC(sub_82F39FA8);
PPC_FUNC_IMPL(__imp__sub_82F39FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fe8
	if (ctx.cr6.eq) goto loc_82F39FE8;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fe8
	if (ctx.cr6.eq) goto loc_82F39FE8;
	// lis r11,29760
	ctx.r11.s64 = 1950351360;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fe8
	if (ctx.cr6.eq) goto loc_82F39FE8;
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f39fe8
	if (ctx.cr6.eq) goto loc_82F39FE8;
	// lis r11,29744
	ctx.r11.s64 = 1949302784;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82F39FE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

