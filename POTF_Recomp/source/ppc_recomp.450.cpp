#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DFF920"))) PPC_WEAK_FUNC(sub_82DFF920);
PPC_FUNC_IMPL(__imp__sub_82DFF920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,11888
	ctx.r11.s64 = ctx.r11.s64 + 11888;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFF930"))) PPC_WEAK_FUNC(sub_82DFF930);
PPC_FUNC_IMPL(__imp__sub_82DFF930) {
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
	// bl 0x82e106e8
	ctx.lr = 0x82DFF94C;
	sub_82E106E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dff9f0
	if (!ctx.cr6.eq) goto loc_82DFF9F0;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dff97c
	if (ctx.cr6.eq) goto loc_82DFF97C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DFF978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
loc_82DFF97C:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dff9a0
	if (ctx.cr6.eq) goto loc_82DFF9A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DFF99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_82DFF9A0:
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dff9c4
	if (ctx.cr6.eq) goto loc_82DFF9C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DFF9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
loc_82DFF9C4:
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dff9e8
	if (ctx.cr6.eq) goto loc_82DFF9E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DFF9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
loc_82DFF9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
loc_82DFF9F0:
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

__attribute__((alias("__imp__sub_82DFFA08"))) PPC_WEAK_FUNC(sub_82DFFA08);
PPC_FUNC_IMPL(__imp__sub_82DFFA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82DFFA10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,92(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffa44
	if (ctx.cr6.eq) goto loc_82DFFA44;
	// lwz r10,144(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// lwz r9,128(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_82DFFA44:
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r30,1116(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1116);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82dffa70
	if (!ctx.cr6.eq) goto loc_82DFFA70;
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82dffa70
	if (!ctx.cr6.eq) goto loc_82DFFA70;
loc_82DFFA64:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82DFFA70:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r11.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,116(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// beq cr6,0x82dffa64
	if (ctx.cr6.eq) goto loc_82DFFA64;
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// lwz r4,148(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DFFAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r28,388
	ctx.r3.s64 = ctx.r28.s64 + 388;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// lwz r11,1116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1116);
	// stw r10,804(r28)
	PPC_STORE_U32(ctx.r28.u32 + 804, ctx.r10.u32);
	// stw r3,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r3.u32);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82da6d28
	ctx.lr = 0x82DFFAD8;
	sub_82DA6D28(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,792(r28)
	PPC_STORE_U32(ctx.r28.u32 + 792, ctx.r25.u32);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// stw r11,796(r28)
	PPC_STORE_U32(ctx.r28.u32 + 796, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82dffb14
	if (!ctx.cr6.eq) goto loc_82DFFB14;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82dffb14
	if (!ctx.cr6.eq) goto loc_82DFFB14;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// b 0x82dffc08
	goto loc_82DFFC08;
loc_82DFFB14:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82dffb3c
	if (!ctx.cr6.eq) goto loc_82DFFB3C;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82dffb3c
	if (!ctx.cr6.eq) goto loc_82DFFB3C;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// b 0x82dffc08
	goto loc_82DFFC08;
loc_82DFFB3C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bne cr6,0x82dffbe0
	if (!ctx.cr6.eq) goto loc_82DFFBE0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82dffb74
	if (!ctx.cr6.eq) goto loc_82DFFB74;
	// lbz r11,229(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 229);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffbc4
	if (ctx.cr6.eq) goto loc_82DFFBC4;
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r11.u32);
	// b 0x82dffbc4
	goto loc_82DFFBC4;
loc_82DFFB74:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82dffb98
	if (!ctx.cr6.eq) goto loc_82DFFB98;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r11.u32);
	// b 0x82dffbc4
	goto loc_82DFFBC4;
loc_82DFFB98:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82dffbc4
	if (!ctx.cr6.eq) goto loc_82DFFBC4;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
loc_82DFFBC4:
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,148(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DFFBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82dffc08
	goto loc_82DFFC08;
loc_82DFFBE0:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82dffbf8
	if (!ctx.cr6.eq) goto loc_82DFFBF8;
	// lbz r11,229(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 229);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffc08
	if (ctx.cr6.eq) goto loc_82DFFC08;
	// b 0x82dffc00
	goto loc_82DFFC00;
loc_82DFFBF8:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82dffc08
	if (!ctx.cr6.eq) goto loc_82DFFC08;
loc_82DFFC00:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r11,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r11.u32);
loc_82DFFC08:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r11.u32);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DFFC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dffce0
	if (!ctx.cr6.eq) goto loc_82DFFCE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// stw r28,748(r27)
	PPC_STORE_U32(ctx.r27.u32 + 748, ctx.r28.u32);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 140, temp.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r11,344(r28)
	PPC_STORE_U32(ctx.r28.u32 + 344, ctx.r11.u32);
	// lwz r11,748(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// lwz r10,124(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// lwz r11,748(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// lwz r10,128(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// lwz r11,748(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// lfs f0,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,748(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// stfs f0,220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// lwz r11,748(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// lwz r4,92(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,152(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffcdc
	if (ctx.cr6.eq) goto loc_82DFFCDC;
	// lwz r3,748(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// bl 0x82d95be8
	ctx.lr = 0x82DFFCBC;
	sub_82D95BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dffce0
	if (!ctx.cr6.eq) goto loc_82DFFCE0;
	// lwz r11,748(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// stw r25,812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 812, ctx.r25.u32);
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r10,748(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r11,816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 816, ctx.r11.u32);
loc_82DFFCDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DFFCE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFFCE8"))) PPC_WEAK_FUNC(sub_82DFFCE8);
PPC_FUNC_IMPL(__imp__sub_82DFFCE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dffd08
	if (!ctx.cr6.eq) goto loc_82DFFD08;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82DFFD08:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffd2c
	if (ctx.cr6.eq) goto loc_82DFFD2C;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffd2c
	if (ctx.cr6.eq) goto loc_82DFFD2C;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82DFFD2C:
	// lwz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffd44
	if (ctx.cr6.eq) goto loc_82DFFD44;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82DFFD44:
	// lwz r11,740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffd5c
	if (ctx.cr6.eq) goto loc_82DFFD5C;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82DFFD5C:
	// lwz r11,748(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dffd74
	if (ctx.cr6.eq) goto loc_82DFFD74;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82DFFD74:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFFD94"))) PPC_WEAK_FUNC(sub_82DFFD94);
PPC_FUNC_IMPL(__imp__sub_82DFFD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFFD98"))) PPC_WEAK_FUNC(sub_82DFFD98);
PPC_FUNC_IMPL(__imp__sub_82DFFD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82DFFDA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dffde8
	if (ctx.cr6.eq) goto loc_82DFFDE8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d95c18
	ctx.lr = 0x82DFFDC8;
	sub_82D95C18(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82d95450
	ctx.lr = 0x82DFFDE8;
	sub_82D95450(ctx, base);
loc_82DFFDE8:
	// lwz r3,748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dffe3c
	if (ctx.cr6.eq) goto loc_82DFFE3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d95c18
	ctx.lr = 0x82DFFE04;
	sub_82D95C18(ctx, base);
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// bl 0x82d95450
	ctx.lr = 0x82DFFE24;
	sub_82D95450(ctx, base);
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// lwz r10,808(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 808);
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r29,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r29.u8);
	// stw r29,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r29.u32);
loc_82DFFE3C:
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dffe80
	if (ctx.cr6.eq) goto loc_82DFFE80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d95c18
	ctx.lr = 0x82DFFE54;
	sub_82D95C18(ctx, base);
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DFFE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r29.u32);
loc_82DFFE80:
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dffec8
	if (ctx.cr6.eq) goto loc_82DFFEC8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d95c18
	ctx.lr = 0x82DFFE98;
	sub_82D95C18(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x82d95450
	ctx.lr = 0x82DFFEB8;
	sub_82D95450(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82DFFEC8:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dfff3c
	if (ctx.cr6.eq) goto loc_82DFFF3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d95728
	ctx.lr = 0x82DFFEE0;
	sub_82D95728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dfff54
	if (!ctx.cr6.eq) goto loc_82DFFF54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dfff3c
	if (!ctx.cr6.gt) goto loc_82DFFF3C;
loc_82DFFEF8:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d95ee8
	ctx.lr = 0x82DFFF10;
	sub_82D95EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dfff2c
	if (!ctx.cr6.eq) goto loc_82DFFF2C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d95348
	ctx.lr = 0x82DFFF24;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dfff54
	if (!ctx.cr6.eq) goto loc_82DFFF54;
loc_82DFFF2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dffef8
	if (ctx.cr6.lt) goto loc_82DFFEF8;
loc_82DFFF3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e10778
	ctx.lr = 0x82DFFF50;
	sub_82E10778(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DFFF54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFFF5C"))) PPC_WEAK_FUNC(sub_82DFFF5C);
PPC_FUNC_IMPL(__imp__sub_82DFFF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFFF60"))) PPC_WEAK_FUNC(sub_82DFFF60);
PPC_FUNC_IMPL(__imp__sub_82DFFF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// bne cr6,0x82dfff7c
	if (!ctx.cr6.eq) goto loc_82DFFF7C;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// b 0x82dfff80
	goto loc_82DFFF80;
loc_82DFFF7C:
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82DFFF80:
	// stw r9,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r9.u32);
	// lwz r11,744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dfffac
	if (ctx.cr6.eq) goto loc_82DFFFAC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// bne cr6,0x82dfffa4
	if (!ctx.cr6.eq) goto loc_82DFFFA4;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82dfffa8
	goto loc_82DFFFA8;
loc_82DFFFA4:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82DFFFA8:
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82DFFFAC:
	// b 0x82e107b8
	sub_82E107B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFFFB0"))) PPC_WEAK_FUNC(sub_82DFFFB0);
PPC_FUNC_IMPL(__imp__sub_82DFFFB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f0,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82e00030
	if (ctx.cr6.eq) goto loc_82E00030;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00030
	if (ctx.cr6.eq) goto loc_82E00030;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82E00030:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f0,296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82e0017c
	if (ctx.cr6.eq) goto loc_82E0017C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f11,-784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e0010c
	if (ctx.cr6.eq) goto loc_82E0010C;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r8,r8,38120
	ctx.r8.u64 = ctx.r8.u64 | 38120;
	// ori r7,r7,38124
	ctx.r7.u64 = ctx.r7.u64 | 38124;
	// lfsx f12,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f9,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f13,-18328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e000bc
	if (!ctx.cr6.gt) goto loc_82E000BC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18332);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82E000BC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82e000cc
	if (ctx.cr6.gt) goto loc_82E000CC;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x82e0010c
	goto loc_82E0010C;
loc_82E000CC:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82e000e4
	if (ctx.cr6.lt) goto loc_82E000E4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38128
	ctx.r11.u64 = ctx.r11.u64 | 38128;
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e0010c
	goto loc_82E0010C;
loc_82E000E4:
	// fsubs f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r10,0
	ctx.r10.s64 = 0;
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r10,38128
	ctx.r10.u64 = ctx.r10.u64 | 38128;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
loc_82E0010C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fcmpu cr6,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// lfs f0,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// blt cr6,0x82e00140
	if (ctx.cr6.lt) goto loc_82E00140;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82e00140
	if (ctx.cr6.lt) goto loc_82E00140;
	// lwz r11,240(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, ctx.r11.u32);
	// b 0x82e00180
	goto loc_82E00180;
loc_82E00140:
	// fmuls f13,f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lwz r11,240(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, ctx.r11.u32);
	// fmuls f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82e00160
	if (!ctx.cr6.lt) goto loc_82E00160;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E00160:
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E00178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e00180
	goto loc_82E00180;
loc_82E0017C:
	// fmuls f31,f8,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
loc_82E00180:
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82def150
	ctx.lr = 0x82E0018C;
	sub_82DEF150(ctx, base);
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

__attribute__((alias("__imp__sub_82E001A4"))) PPC_WEAK_FUNC(sub_82E001A4);
PPC_FUNC_IMPL(__imp__sub_82E001A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E001A8"))) PPC_WEAK_FUNC(sub_82E001A8);
PPC_FUNC_IMPL(__imp__sub_82E001A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E001B0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6adc
	ctx.lr = 0x82E001B8;
	__savefpr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e001e4
	if (!ctx.cr6.eq) goto loc_82E001E4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b28
	ctx.lr = 0x82E001E0;
	__restfpr_25(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E001E4:
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r29,r7,39936
	ctx.r29.u64 = ctx.r7.u64 | 39936;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lfd f28,-16744(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r8.u32 + -16744);
	// lfs f29,-17404(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17404);
	ctx.f29.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f26,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f26.f64 = double(temp.f32);
	// addi r26,r30,12
	ctx.r26.s64 = ctx.r30.s64 + 12;
	// lfs f25,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f25.f64 = double(temp.f32);
	// ori r27,r7,40520
	ctx.r27.u64 = ctx.r7.u64 | 40520;
loc_82E0021C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00428
	if (ctx.cr6.eq) goto loc_82E00428;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da54d8
	ctx.lr = 0x82E00244;
	sub_82DA54D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0043c
	if (!ctx.cr6.eq) goto loc_82E0043C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00438
	if (ctx.cr6.eq) goto loc_82E00438;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d8a890
	ctx.lr = 0x82E00264;
	sub_82D8A890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0043c
	if (!ctx.cr6.eq) goto loc_82E0043C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f0,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// fsubs f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bne cr6,0x82e0031c
	if (!ctx.cr6.eq) goto loc_82E0031C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e002e4
	if (ctx.cr6.eq) goto loc_82E002E4;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e002b8
	if (ctx.cr6.eq) goto loc_82E002B8;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// b 0x82e00418
	goto loc_82E00418;
loc_82E002B8:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82E002DC;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82e003d0
	goto loc_82E003D0;
loc_82E002E4:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82E00308;
	sub_82CB59B0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e00410
	goto loc_82E00410;
loc_82E0031C:
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bne cr6,0x82e00364
	if (!ctx.cr6.eq) goto loc_82E00364;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00370
	if (ctx.cr6.eq) goto loc_82E00370;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82E0035C;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82e003d0
	goto loc_82E003D0;
loc_82E00364:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00378
	if (ctx.cr6.eq) goto loc_82E00378;
loc_82E00370:
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// b 0x82e00418
	goto loc_82E00418;
loc_82E00378:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da6248
	ctx.lr = 0x82E00390;
	sub_82DA6248(ctx, base);
	// lfs f0,548(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82e003a4
	if (!ctx.cr6.gt) goto loc_82E003A4;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82E003A4:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82E003C8;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82E003D0:
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f12,304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x82e00414
	if (ctx.cr6.eq) goto loc_82E00414;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00414
	if (ctx.cr6.eq) goto loc_82E00414;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
loc_82E00410:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82E00414:
	// fmuls f1,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_82E00418:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82def150
	ctx.lr = 0x82E00420;
	sub_82DEF150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0043c
	if (!ctx.cr6.eq) goto loc_82E0043C;
loc_82E00428:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,132
	ctx.r26.s64 = ctx.r26.s64 + 132;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82e0021c
	if (ctx.cr6.lt) goto loc_82E0021C;
loc_82E00438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E0043C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b28
	ctx.lr = 0x82E00448;
	__restfpr_25(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0044C"))) PPC_WEAK_FUNC(sub_82E0044C);
PPC_FUNC_IMPL(__imp__sub_82E0044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00450"))) PPC_WEAK_FUNC(sub_82E00450);
PPC_FUNC_IMPL(__imp__sub_82E00450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82e00464
	if (!ctx.cr6.eq) goto loc_82E00464;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E00464:
	// lwz r11,68(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e0047c
	if (ctx.cr6.eq) goto loc_82E0047C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e004a0
	goto loc_82E004A0;
loc_82E0047C:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e00490
	if (ctx.cr6.eq) goto loc_82E00490;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82e004a0
	goto loc_82E004A0;
loc_82E00490:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_82E004A0:
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r3,r3,-25600
	ctx.r3.s64 = ctx.r3.s64 + -25600;
	// b 0x82da54d8
	sub_82DA54D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E004C0"))) PPC_WEAK_FUNC(sub_82E004C0);
PPC_FUNC_IMPL(__imp__sub_82E004C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E004C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82e0056c
	if (ctx.cr6.gt) goto loc_82E0056C;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f2,380(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 380, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f1,376(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 376, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f0,296(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f1,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82dfffb0
	ctx.lr = 0x82E0050C;
	sub_82DFFFB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00570
	if (!ctx.cr6.eq) goto loc_82E00570;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r29,r10,41104
	ctx.r29.u64 = ctx.r10.u64 | 41104;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e0056c
	if (ctx.cr6.eq) goto loc_82E0056C;
loc_82E00530:
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e00558
	if (!ctx.cr6.eq) goto loc_82E00558;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e001a8
	ctx.lr = 0x82E00550;
	sub_82E001A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00570
	if (!ctx.cr6.eq) goto loc_82E00570;
loc_82E00558:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e00530
	if (!ctx.cr6.eq) goto loc_82E00530;
loc_82E0056C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E00570:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E00578"))) PPC_WEAK_FUNC(sub_82E00578);
PPC_FUNC_IMPL(__imp__sub_82E00578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E00580;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82e0064c
	if (ctx.cr6.gt) goto loc_82E0064C;
	// bl 0x82dfffb0
	ctx.lr = 0x82E005A0;
	sub_82DFFFB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00650
	if (!ctx.cr6.eq) goto loc_82E00650;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e0064c
	if (!ctx.cr6.eq) goto loc_82E0064C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,-25600
	ctx.r4.s64 = ctx.r4.s64 + -25600;
	// bl 0x82e001a8
	ctx.lr = 0x82E005D0;
	sub_82E001A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00650
	if (!ctx.cr6.eq) goto loc_82E00650;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,-25016
	ctx.r4.s64 = ctx.r4.s64 + -25016;
	// bl 0x82e001a8
	ctx.lr = 0x82E005F0;
	sub_82E001A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00650
	if (!ctx.cr6.eq) goto loc_82E00650;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r29,r10,41104
	ctx.r29.u64 = ctx.r10.u64 | 41104;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e0064c
	if (ctx.cr6.eq) goto loc_82E0064C;
loc_82E00614:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e00638
	if (!ctx.cr6.eq) goto loc_82E00638;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e001a8
	ctx.lr = 0x82E00630;
	sub_82E001A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00650
	if (!ctx.cr6.eq) goto loc_82E00650;
loc_82E00638:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e00614
	if (!ctx.cr6.eq) goto loc_82E00614;
loc_82E0064C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E00650:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0065C"))) PPC_WEAK_FUNC(sub_82E0065C);
PPC_FUNC_IMPL(__imp__sub_82E0065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00660"))) PPC_WEAK_FUNC(sub_82E00660);
PPC_FUNC_IMPL(__imp__sub_82E00660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,736(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e006e0
	if (!ctx.cr6.eq) goto loc_82E006E0;
	// lwz r10,748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e006e0
	if (!ctx.cr6.eq) goto loc_82E006E0;
	// lwz r3,424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e006d8
	if (ctx.cr6.eq) goto loc_82E006D8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lfs f13,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lfs f11,308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82e006c4
	if (!ctx.cr6.gt) goto loc_82E006C4;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82E006C4:
	// lfs f0,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82e006d4
	if (!ctx.cr6.lt) goto loc_82E006D4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E006D4:
	// b 0x82df7f80
	sub_82DF7F80(ctx, base);
	return;
loc_82E006D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E006E0:
	// lwz r10,748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e006f0
	if (ctx.cr6.eq) goto loc_82E006F0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82E006F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e00700
	if (!ctx.cr6.eq) goto loc_82E00700;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E00700:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lfs f13,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,140(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lfs f11,308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,84(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82e0073c
	if (!ctx.cr6.gt) goto loc_82E0073C;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82E0073C:
	// lfs f0,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82e0074c
	if (!ctx.cr6.lt) goto loc_82E0074C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E0074C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82df6490
	sub_82DF6490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E00754"))) PPC_WEAK_FUNC(sub_82E00754);
PPC_FUNC_IMPL(__imp__sub_82E00754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00758"))) PPC_WEAK_FUNC(sub_82E00758);
PPC_FUNC_IMPL(__imp__sub_82E00758) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f4,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// fadds f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// beq cr6,0x82e0079c
	if (ctx.cr6.eq) goto loc_82E0079C;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x82e007ac
	goto loc_82E007AC;
loc_82E0079C:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e008ac
	if (ctx.cr6.eq) goto loc_82E008AC;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
loc_82E007AC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82e007fc
	if (!ctx.cr6.eq) goto loc_82E007FC;
	// fsubs f13,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsqrts f1,f13
	ctx.f1.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f8,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E007EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E007FC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bgt cr6,0x82e00818
	if (ctx.cr6.gt) goto loc_82E00818;
	// lfs f13,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82e00828
	goto loc_82E00828;
loc_82E00818:
	// fsubs f13,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82E00828:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82e00878
	if (!ctx.cr6.eq) goto loc_82E00878;
	// rlwinm r11,r9,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e00878
	if (!ctx.cr6.eq) goto loc_82E00878;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E00868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E00878:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f8,f2
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64;
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// fmr f6,f2
	ctx.f6.f64 = ctx.f2.f64;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0089C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E008AC:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E008C0"))) PPC_WEAK_FUNC(sub_82E008C0);
PPC_FUNC_IMPL(__imp__sub_82E008C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e00900
	if (ctx.cr6.eq) goto loc_82E00900;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,168(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// stw r9,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r9.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,172(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// stw r9,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r9.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,176(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r9,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r9.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,180(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// stw r9,300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 300, ctx.r9.u32);
loc_82E00900:
	// lwz r10,748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e00924
	if (!ctx.cr6.eq) goto loc_82E00924;
	// lwz r9,736(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e00954
	if (ctx.cr6.eq) goto loc_82E00954;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e00924
	if (!ctx.cr6.eq) goto loc_82E00924;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82E00924:
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,168(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// stw r9,368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 368, ctx.r9.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,172(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// stw r9,372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 372, ctx.r9.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,176(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r9,376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 376, ctx.r9.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
loc_82E00954:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0095C"))) PPC_WEAK_FUNC(sub_82E0095C);
PPC_FUNC_IMPL(__imp__sub_82E0095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00960"))) PPC_WEAK_FUNC(sub_82E00960);
PPC_FUNC_IMPL(__imp__sub_82E00960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e0099c
	if (!ctx.cr6.gt) goto loc_82E0099C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E0099C:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e009e0
	if (ctx.cr6.eq) goto loc_82E009E0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r8,r8,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e009c8
	if (ctx.cr6.eq) goto loc_82E009C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82e009f0
	goto loc_82E009F0;
loc_82E009C8:
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e009f0
	if (ctx.cr6.eq) goto loc_82E009F0;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82e009f0
	goto loc_82E009F0;
loc_82E009E0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00ac8
	if (ctx.cr6.eq) goto loc_82E00AC8;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
loc_82E009F0:
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ori r8,r8,38436
	ctx.r8.u64 = ctx.r8.u64 | 38436;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d93948
	ctx.lr = 0x82E00A20;
	sub_82D93948(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00acc
	if (!ctx.cr6.eq) goto loc_82E00ACC;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,116(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00aa8
	if (ctx.cr6.eq) goto loc_82E00AA8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1256(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e00aa8
	if (!ctx.cr6.gt) goto loc_82E00AA8;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
loc_82E00A5C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82e00a94
	if (!ctx.cr6.gt) goto loc_82E00A94;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r6,228
	ctx.r9.s64 = ctx.r6.s64 + 228;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82E00A70:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e00a70
	if (!ctx.cr6.eq) goto loc_82E00A70;
loc_82E00A94:
	// lwz r11,1256(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1256);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e00a5c
	if (ctx.cr6.lt) goto loc_82E00A5C;
loc_82E00AA8:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// bl 0x82deeef8
	ctx.lr = 0x82E00AB4;
	sub_82DEEEF8(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E00AC8:
	// li r3,36
	ctx.r3.s64 = 36;
loc_82E00ACC:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E00AE0"))) PPC_WEAK_FUNC(sub_82E00AE0);
PPC_FUNC_IMPL(__imp__sub_82E00AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E00AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e00b14
	if (!ctx.cr6.gt) goto loc_82E00B14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E00B14:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,752(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82def0a0
	ctx.lr = 0x82E00B24;
	sub_82DEF0A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00c28
	if (!ctx.cr6.eq) goto loc_82E00C28;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82e00bb8
	if (ctx.cr6.lt) goto loc_82E00BB8;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm r8,r29,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r10,r11,232
	ctx.r10.s64 = ctx.r11.s64 + 232;
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E00B60:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lfs f13,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne cr6,0x82e00b60
	if (!ctx.cr6.eq) goto loc_82E00B60;
loc_82E00BB8:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82e00c18
	if (!ctx.cr6.lt) goto loc_82E00C18;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r5,r11,57
	ctx.r5.s64 = ctx.r11.s64 + 57;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82E00BF0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e00bf0
	if (!ctx.cr6.eq) goto loc_82E00BF0;
loc_82E00C18:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,752(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82deeef8
	ctx.lr = 0x82E00C28;
	sub_82DEEEF8(ctx, base);
loc_82E00C28:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E00C30"))) PPC_WEAK_FUNC(sub_82E00C30);
PPC_FUNC_IMPL(__imp__sub_82E00C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82e10ed0
	ctx.lr = 0x82E00C48;
	sub_82E10ED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00c78
	if (!ctx.cr6.eq) goto loc_82E00C78;
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00c74
	if (ctx.cr6.eq) goto loc_82E00C74;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
loc_82E00C74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E00C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E00C8C"))) PPC_WEAK_FUNC(sub_82E00C8C);
PPC_FUNC_IMPL(__imp__sub_82E00C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00C90"))) PPC_WEAK_FUNC(sub_82E00C90);
PPC_FUNC_IMPL(__imp__sub_82E00C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82e10f10
	ctx.lr = 0x82E00CA8;
	sub_82E10F10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00cc8
	if (!ctx.cr6.eq) goto loc_82E00CC8;
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00cc4
	if (ctx.cr6.eq) goto loc_82E00CC4;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
loc_82E00CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E00CC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E00CDC"))) PPC_WEAK_FUNC(sub_82E00CDC);
PPC_FUNC_IMPL(__imp__sub_82E00CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00CE0"))) PPC_WEAK_FUNC(sub_82E00CE0);
PPC_FUNC_IMPL(__imp__sub_82E00CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82e110d8
	ctx.lr = 0x82E00CF8;
	sub_82E110D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00d18
	if (!ctx.cr6.eq) goto loc_82E00D18;
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00d14
	if (ctx.cr6.eq) goto loc_82E00D14;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
loc_82E00D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E00D18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E00D2C"))) PPC_WEAK_FUNC(sub_82E00D2C);
PPC_FUNC_IMPL(__imp__sub_82E00D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00D30"))) PPC_WEAK_FUNC(sub_82E00D30);
PPC_FUNC_IMPL(__imp__sub_82E00D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E00D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e00d58
	if (!ctx.cr6.eq) goto loc_82E00D58;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E00D58:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00d70
	if (ctx.cr6.eq) goto loc_82E00D70;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e00ee0
	goto loc_82E00EE0;
loc_82E00D70:
	// lwz r11,748(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00dc0
	if (ctx.cr6.eq) goto loc_82E00DC0;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e00da4
	if (ctx.cr6.eq) goto loc_82E00DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82e00ee0
	goto loc_82E00EE0;
loc_82E00DA4:
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82e00ee0
	goto loc_82E00EE0;
loc_82E00DC0:
	// lwz r3,736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e00e68
	if (ctx.cr6.eq) goto loc_82E00E68;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d956b0
	ctx.lr = 0x82E00DD8;
	sub_82D956B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00edc
	if (!ctx.cr6.eq) goto loc_82E00EDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e00e58
	if (!ctx.cr6.gt) goto loc_82E00E58;
loc_82E00DF4:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 736);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d95dd0
	ctx.lr = 0x82E00E0C;
	sub_82D95DD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e00edc
	if (!ctx.cr6.eq) goto loc_82E00EDC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e00e30
	if (ctx.cr6.eq) goto loc_82E00E30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e00e38
	goto loc_82E00E38;
loc_82E00E30:
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_82E00E38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00e48
	if (ctx.cr6.eq) goto loc_82E00E48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82E00E48:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e00df4
	if (ctx.cr6.lt) goto loc_82E00DF4;
loc_82E00E58:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82e00edc
	if (ctx.cr6.eq) goto loc_82E00EDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e00ee0
	goto loc_82E00EE0;
loc_82E00E68:
	// lwz r11,424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00ea8
	if (ctx.cr6.eq) goto loc_82E00EA8;
	// lwz r10,92(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e00edc
	if (ctx.cr6.eq) goto loc_82E00EDC;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e00da4
	if (ctx.cr6.eq) goto loc_82E00DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82e00ee0
	goto loc_82E00EE0;
loc_82E00EA8:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00edc
	if (ctx.cr6.eq) goto loc_82E00EDC;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e00da4
	if (ctx.cr6.eq) goto loc_82E00DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82e00ee0
	goto loc_82E00EE0;
loc_82E00EDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E00EE0:
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e00f00
	if (!ctx.cr6.eq) goto loc_82E00F00;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r11.u32);
loc_82E00F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E00F0C"))) PPC_WEAK_FUNC(sub_82E00F0C);
PPC_FUNC_IMPL(__imp__sub_82E00F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E00F10"))) PPC_WEAK_FUNC(sub_82E00F10);
PPC_FUNC_IMPL(__imp__sub_82E00F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E00F18;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,26704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26704);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-31893
	ctx.r9.s64 = -2090139648;
	// addi r27,r9,-6064
	ctx.r27.s64 = ctx.r9.s64 + -6064;
	// bne cr6,0x82e00f5c
	if (!ctx.cr6.eq) goto loc_82E00F5C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,26704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26704, ctx.r11.u32);
	// bl 0x82de0ce0
	ctx.lr = 0x82E00F5C;
	sub_82DE0CE0(ctx, base);
loc_82E00F5C:
	// lwz r28,152(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e00f74
	if (!ctx.cr6.eq) goto loc_82E00F74;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E00F74:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 512, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
	// cmpwi cr6,r31,2048
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2048, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
	// cmpwi cr6,r31,4096
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4096, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
	// cmpwi cr6,r31,8192
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8192, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// beq cr6,0x82e00fc4
	if (ctx.cr6.eq) goto loc_82E00FC4;
loc_82E00FB8:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E00FC4:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e00fd8
	if (ctx.cr6.eq) goto loc_82E00FD8;
	// lwz r30,64(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82e00fe8
	goto loc_82E00FE8;
loc_82E00FD8:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e01084
	if (ctx.cr6.eq) goto loc_82E01084;
	// lwz r30,116(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
loc_82E00FE8:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82e00fb8
	if (!ctx.cr6.lt) goto loc_82E00FB8;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82de22a0
	ctx.lr = 0x82E00FFC;
	sub_82DE22A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01088
	if (!ctx.cr6.eq) goto loc_82E01088;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82de2370
	ctx.lr = 0x82E01018;
	sub_82DE2370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01088
	if (!ctx.cr6.eq) goto loc_82E01088;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e00fb8
	if (ctx.cr6.gt) goto loc_82E00FB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82d88f38
	ctx.lr = 0x82E0103C;
	sub_82D88F38(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bge cr6,0x82e0105c
	if (!ctx.cr6.lt) goto loc_82E0105C;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
loc_82E0105C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de1358
	ctx.lr = 0x82E0107C;
	sub_82DE1358(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E01084:
	// li r3,36
	ctx.r3.s64 = 36;
loc_82E01088:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E01090"))) PPC_WEAK_FUNC(sub_82E01090);
PPC_FUNC_IMPL(__imp__sub_82E01090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E01098;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,152(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e010c0
	if (!ctx.cr6.eq) goto loc_82E010C0;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E010C0:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e010d4
	if (ctx.cr6.eq) goto loc_82E010D4;
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82e010e4
	goto loc_82E010E4;
loc_82E010D4:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e01290
	if (ctx.cr6.eq) goto loc_82E01290;
	// lwz r31,116(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
loc_82E010E4:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82e010f8
	if (ctx.cr6.lt) goto loc_82E010F8;
loc_82E010EC:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E010F8:
	// li r4,16384
	ctx.r4.s64 = 16384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de22a0
	ctx.lr = 0x82E01104;
	sub_82DE22A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01294
	if (!ctx.cr6.eq) goto loc_82E01294;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de2370
	ctx.lr = 0x82E01120;
	sub_82DE2370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01294
	if (!ctx.cr6.eq) goto loc_82E01294;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82e010ec
	if (ctx.cr6.gt) goto loc_82E010EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x82e01150
	if (!ctx.cr6.lt) goto loc_82E01150;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E01150:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82e01234
	if (ctx.cr6.lt) goto loc_82E01234;
	// addi r7,r28,-4
	ctx.r7.s64 = ctx.r28.s64 + -4;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E01174:
	// mullw r7,r11,r31
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// blt cr6,0x82e011a0
	if (ctx.cr6.lt) goto loc_82E011A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E011A0:
	// mullw r7,r11,r31
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// blt cr6,0x82e011cc
	if (ctx.cr6.lt) goto loc_82E011CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E011CC:
	// mullw r7,r11,r31
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blt cr6,0x82e011f8
	if (ctx.cr6.lt) goto loc_82E011F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E011F8:
	// mullw r7,r11,r31
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blt cr6,0x82e01224
	if (ctx.cr6.lt) goto loc_82E01224;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E01224:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82e01174
	if (!ctx.cr6.eq) goto loc_82E01174;
loc_82E01234:
	// cmpw cr6,r5,r28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82e01284
	if (!ctx.cr6.lt) goto loc_82E01284;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r5,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r5.s64;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_82E01248:
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blt cr6,0x82e01274
	if (ctx.cr6.lt) goto loc_82E01274;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E01274:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82e01248
	if (!ctx.cr6.eq) goto loc_82E01248;
loc_82E01284:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E01290:
	// li r3,36
	ctx.r3.s64 = 36;
loc_82E01294:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0129C"))) PPC_WEAK_FUNC(sub_82E0129C);
PPC_FUNC_IMPL(__imp__sub_82E0129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E012A0"))) PPC_WEAK_FUNC(sub_82E012A0);
PPC_FUNC_IMPL(__imp__sub_82E012A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E012B0"))) PPC_WEAK_FUNC(sub_82E012B0);
PPC_FUNC_IMPL(__imp__sub_82E012B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E012B8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82e012e0
	if (!ctx.cr6.eq) goto loc_82E012E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E012E0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r27,r10,39948
	ctx.r27.u64 = ctx.r10.u64 | 39948;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// ori r28,r10,39936
	ctx.r28.u64 = ctx.r10.u64 | 39936;
loc_82E01300:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e01374
	if (ctx.cr6.eq) goto loc_82E01374;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d96a20
	ctx.lr = 0x82E01330;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01490
	if (!ctx.cr6.eq) goto loc_82E01490;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da5590
	ctx.lr = 0x82E01358;
	sub_82DA5590(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da61f0
	ctx.lr = 0x82E01374;
	sub_82DA61F0(ctx, base);
loc_82E01374:
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,528
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 528, ctx.xer);
	// blt cr6,0x82e01300
	if (ctx.cr6.lt) goto loc_82E01300;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-25004
	ctx.r11.s64 = ctx.r11.s64 + -25004;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e01400
	if (ctx.cr6.eq) goto loc_82E01400;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d96a20
	ctx.lr = 0x82E013B4;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01490
	if (!ctx.cr6.eq) goto loc_82E01490;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r30,r10,40520
	ctx.r30.u64 = ctx.r10.u64 | 40520;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da5590
	ctx.lr = 0x82E013E4;
	sub_82DA5590(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da61f0
	ctx.lr = 0x82E01400;
	sub_82DA61F0(ctx, base);
loc_82E01400:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r29,r10,41104
	ctx.r29.u64 = ctx.r10.u64 | 41104;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e0148c
	if (ctx.cr6.eq) goto loc_82E0148C;
loc_82E0141C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e01478
	if (ctx.cr6.eq) goto loc_82E01478;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d96a20
	ctx.lr = 0x82E0143C;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01490
	if (!ctx.cr6.eq) goto loc_82E01490;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da5590
	ctx.lr = 0x82E01460;
	sub_82DA5590(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da61f0
	ctx.lr = 0x82E01478;
	sub_82DA61F0(ctx, base);
loc_82E01478:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e0141c
	if (!ctx.cr6.eq) goto loc_82E0141C;
loc_82E0148C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E01490:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0149C"))) PPC_WEAK_FUNC(sub_82E0149C);
PPC_FUNC_IMPL(__imp__sub_82E0149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E014A0"))) PPC_WEAK_FUNC(sub_82E014A0);
PPC_FUNC_IMPL(__imp__sub_82E014A0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e014cc
	if (!ctx.cr6.eq) goto loc_82E014CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e01508
	goto loc_82E01508;
loc_82E014CC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e014f0
	if (ctx.cr6.eq) goto loc_82E014F0;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e014f0
	if (ctx.cr6.eq) goto loc_82E014F0;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82d95348
	ctx.lr = 0x82E014E8;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01508
	if (!ctx.cr6.eq) goto loc_82E01508;
loc_82E014F0:
	// addi r7,r31,752
	ctx.r7.s64 = ctx.r31.s64 + 752;
	// lwz r6,752(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82d96a20
	ctx.lr = 0x82E01508;
	sub_82D96A20(ctx, base);
loc_82E01508:
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

__attribute__((alias("__imp__sub_82E01520"))) PPC_WEAK_FUNC(sub_82E01520);
PPC_FUNC_IMPL(__imp__sub_82E01520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E01528;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e1d7a8
	ctx.lr = 0x82E01534;
	sub_82E1D7A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// addi r11,r11,13760
	ctx.r11.s64 = ctx.r11.s64 + 13760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82d96640
	ctx.lr = 0x82E0154C;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,432
	ctx.r29.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,5752
	ctx.r11.s64 = ctx.r11.s64 + 5752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82d96640
	ctx.lr = 0x82E01564;
	sub_82D96640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,6016
	ctx.r10.s64 = ctx.r11.s64 + 6016;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E015A0"))) PPC_WEAK_FUNC(sub_82E015A0);
PPC_FUNC_IMPL(__imp__sub_82E015A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E015B4"))) PPC_WEAK_FUNC(sub_82E015B4);
PPC_FUNC_IMPL(__imp__sub_82E015B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E015B8"))) PPC_WEAK_FUNC(sub_82E015B8);
PPC_FUNC_IMPL(__imp__sub_82E015B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,11888
	ctx.r11.s64 = ctx.r11.s64 + 11888;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E015C8"))) PPC_WEAK_FUNC(sub_82E015C8);
PPC_FUNC_IMPL(__imp__sub_82E015C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11888
	ctx.r11.s64 = ctx.r11.s64 + 11888;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e015fc
	if (ctx.cr6.eq) goto loc_82E015FC;
	// bl 0x822990f0
	ctx.lr = 0x82E015F8;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E015FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E01610"))) PPC_WEAK_FUNC(sub_82E01610);
PPC_FUNC_IMPL(__imp__sub_82E01610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E01618;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e10700
	ctx.lr = 0x82E01624;
	sub_82E10700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e01820
	if (!ctx.cr6.eq) goto loc_82E01820;
	// lwz r30,424(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e01654
	if (!ctx.cr6.eq) goto loc_82E01654;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E01654:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r29.u32);
	// bl 0x82d95348
	ctx.lr = 0x82E01668;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e0168c
	if (ctx.cr6.eq) goto loc_82E0168C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95348
	ctx.lr = 0x82E01684;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
loc_82E0168C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x82d95348
	ctx.lr = 0x82E01698;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// addi r7,r31,752
	ctx.r7.s64 = ctx.r31.s64 + 752;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// beq cr6,0x82e0171c
	if (ctx.cr6.eq) goto loc_82E0171C;
	// bl 0x82d96a20
	ctx.lr = 0x82E016CC;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,740(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96a20
	ctx.lr = 0x82E016EC;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96a20
	ctx.lr = 0x82E0170C;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e01748
	if (ctx.cr6.eq) goto loc_82E01748;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E0171C:
	// bl 0x82d96a20
	ctx.lr = 0x82E01720;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96a20
	ctx.lr = 0x82E01740;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
loc_82E01748:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e01770
	if (!ctx.cr6.eq) goto loc_82E01770;
	// lwz r4,424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// bl 0x82e012b0
	ctx.lr = 0x82E01768;
	sub_82E012B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
loc_82E01770:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E01790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r31,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r29,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r29.u32);
	// stw r29,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r29.u32);
	// stw r29,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r29.u32);
	// stw r11,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r11.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82d95c18
	ctx.lr = 0x82E017CC;
	sub_82D95C18(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e017f4
	if (ctx.cr6.eq) goto loc_82E017F4;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82E017F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95c18
	ctx.lr = 0x82E01804;
	sub_82D95C18(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E01820:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e0183c
	if (ctx.cr6.eq) goto loc_82E0183C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e01844
	goto loc_82E01844;
loc_82E0183C:
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_82E01844:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e0185c
	if (!ctx.cr6.eq) goto loc_82E0185C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d8b3e0
	ctx.lr = 0x82E0185C;
	sub_82D8B3E0(ctx, base);
loc_82E0185C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82d95348
	ctx.lr = 0x82E01868;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e0188c
	if (ctx.cr6.eq) goto loc_82E0188C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95348
	ctx.lr = 0x82E01884;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
loc_82E0188C:
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e018a8
	if (ctx.cr6.eq) goto loc_82E018A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95348
	ctx.lr = 0x82E018A0;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
loc_82E018A8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d88680
	ctx.lr = 0x82E018BC;
	sub_82D88680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82e01900
	if (!ctx.cr6.eq) goto loc_82E01900;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,1116(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1116);
	// beq cr6,0x82e018f0
	if (ctx.cr6.eq) goto loc_82E018F0;
	// lbz r11,229(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 229);
	// b 0x82e018fc
	goto loc_82E018FC;
loc_82E018F0:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lbz r11,229(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 229);
loc_82E018FC:
	// stb r11,229(r9)
	PPC_STORE_U8(ctx.r9.u32 + 229, ctx.r11.u8);
loc_82E01900:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e01914
	if (!ctx.cr6.eq) goto loc_82E01914;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// bl 0x82da41c0
	ctx.lr = 0x82E01914;
	sub_82DA41C0(ctx, base);
loc_82E01914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dffa08
	ctx.lr = 0x82E01920;
	sub_82DFFA08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e01938
	if (!ctx.cr6.eq) goto loc_82E01938;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// bl 0x82da4200
	ctx.lr = 0x82E01938;
	sub_82DA4200(ctx, base);
loc_82E01938:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e0194c
	if (ctx.cr6.eq) goto loc_82E0194C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E0194C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95c18
	ctx.lr = 0x82E0195C;
	sub_82D95C18(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d95c18
	ctx.lr = 0x82E0197C;
	sub_82D95C18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r31,752
	ctx.r7.s64 = ctx.r31.s64 + 752;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// beq cr6,0x82e01a08
	if (ctx.cr6.eq) goto loc_82E01A08;
	// bl 0x82d96a20
	ctx.lr = 0x82E019B8;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,740(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96a20
	ctx.lr = 0x82E019D8;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96a20
	ctx.lr = 0x82E019F8;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e01a34
	if (ctx.cr6.eq) goto loc_82E01A34;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E01A08:
	// bl 0x82d96a20
	ctx.lr = 0x82E01A0C;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96a20
	ctx.lr = 0x82E01A2C;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
loc_82E01A34:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e01a5c
	if (!ctx.cr6.eq) goto loc_82E01A5C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// bl 0x82e012b0
	ctx.lr = 0x82E01A54;
	sub_82E012B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01a60
	if (!ctx.cr6.eq) goto loc_82E01A60;
loc_82E01A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E01A60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E01A68"))) PPC_WEAK_FUNC(sub_82E01A68);
PPC_FUNC_IMPL(__imp__sub_82E01A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E01A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82e10700
	ctx.lr = 0x82E01A80;
	sub_82E10700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,17
	ctx.r10.s64 = 17;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r29,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r29.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E01AB4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e01ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E01AB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13908
	ctx.r4.s64 = ctx.r11.s64 + 13908;
	// bl 0x82da4448
	ctx.lr = 0x82E01AD0;
	sub_82DA4448(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r30,r31,736
	ctx.r30.s64 = ctx.r31.s64 + 736;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// bl 0x82d8ced0
	ctx.lr = 0x82E01B00;
	sub_82D8CED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d95be8
	ctx.lr = 0x82E01B14;
	sub_82D95BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E01B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// bl 0x82d95348
	ctx.lr = 0x82E01B70;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// lwz r3,740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e01b94
	if (ctx.cr6.eq) goto loc_82E01B94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95348
	ctx.lr = 0x82E01B8C;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
loc_82E01B94:
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e01bb0
	if (ctx.cr6.eq) goto loc_82E01BB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95348
	ctx.lr = 0x82E01BA8;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
loc_82E01BB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96a20
	ctx.lr = 0x82E01BC8;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d96a20
	ctx.lr = 0x82E01BE8;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,752
	ctx.r7.s64 = ctx.r31.s64 + 752;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d96a20
	ctx.lr = 0x82E01C10;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// bl 0x82e012b0
	ctx.lr = 0x82E01C28;
	sub_82E012B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01ccc
	if (!ctx.cr6.eq) goto loc_82E01CCC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e01c6c
	if (ctx.cr6.eq) goto loc_82E01C6C;
	// stw r29,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r29.u32);
loc_82E01C6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d95c18
	ctx.lr = 0x82E01C7C;
	sub_82D95C18(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d95c18
	ctx.lr = 0x82E01C9C;
	sub_82D95C18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// bl 0x82d95c18
	ctx.lr = 0x82E01CBC;
	sub_82D95C18(ctx, base);
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,240(r28)
	PPC_STORE_U32(ctx.r28.u32 + 240, ctx.r11.u32);
loc_82E01CCC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E01CD4"))) PPC_WEAK_FUNC(sub_82E01CD4);
PPC_FUNC_IMPL(__imp__sub_82E01CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E01CD8"))) PPC_WEAK_FUNC(sub_82E01CD8);
PPC_FUNC_IMPL(__imp__sub_82E01CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E01CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e01d00
	if (!ctx.cr6.eq) goto loc_82E01D00;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E01D00:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfd f1,-16744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16744);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-17404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17404);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82E01D30;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f13,300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82e01d58
	if (ctx.cr6.eq) goto loc_82E01D58;
	// stfs f0,300(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82dfffb0
	ctx.lr = 0x82E01D58;
	sub_82DFFFB0(ctx, base);
loc_82E01D58:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e01d70
	if (ctx.cr6.eq) goto loc_82E01D70;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82e01d94
	goto loc_82E01D94;
loc_82E01D70:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e01d84
	if (ctx.cr6.eq) goto loc_82E01D84;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82e01d94
	goto loc_82E01D94;
loc_82E01D84:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r30,r11,30
	ctx.r30.u64 = ctx.r11.u32 & 0x3;
loc_82E01D94:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r29,r10,39936
	ctx.r29.u64 = ctx.r10.u64 | 39936;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da5590
	ctx.lr = 0x82E01DBC;
	sub_82DA5590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01fc8
	if (!ctx.cr6.eq) goto loc_82E01FC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r30,132
	ctx.r10.s64 = ctx.r30.s64 * 132;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r9,39948
	ctx.r9.u64 = ctx.r9.u64 | 39948;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e01e54
	if (ctx.cr6.eq) goto loc_82E01E54;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x82da54d8
	ctx.lr = 0x82E01E00;
	sub_82DA54D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e01e34
	if (!ctx.cr6.eq) goto loc_82E01E34;
	// lwz r4,748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e01e28
	if (!ctx.cr6.eq) goto loc_82E01E28;
	// lwz r4,736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e01e28
	if (!ctx.cr6.eq) goto loc_82E01E28;
	// lwz r4,424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
loc_82E01E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// bl 0x82e012b0
	ctx.lr = 0x82E01E34;
	sub_82E012B0(ctx, base);
loc_82E01E34:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f1,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e001a8
	ctx.lr = 0x82E01E4C;
	sub_82E001A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01fc8
	if (!ctx.cr6.eq) goto loc_82E01FC8;
loc_82E01E54:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r30,r10,40520
	ctx.r30.u64 = ctx.r10.u64 | 40520;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da5590
	ctx.lr = 0x82E01E7C;
	sub_82DA5590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01fc8
	if (!ctx.cr6.eq) goto loc_82E01FC8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r10,40532
	ctx.r10.u64 = ctx.r10.u64 | 40532;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e01ef4
	if (ctx.cr6.eq) goto loc_82E01EF4;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x82da54d8
	ctx.lr = 0x82E01EB8;
	sub_82DA54D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e01ed4
	if (!ctx.cr6.eq) goto loc_82E01ED4;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// bl 0x82e012b0
	ctx.lr = 0x82E01ED4;
	sub_82E012B0(ctx, base);
loc_82E01ED4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f1,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e001a8
	ctx.lr = 0x82E01EEC;
	sub_82E001A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01fc8
	if (!ctx.cr6.eq) goto loc_82E01FC8;
loc_82E01EF4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r29,r10,41104
	ctx.r29.u64 = ctx.r10.u64 | 41104;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e01fc4
	if (ctx.cr6.eq) goto loc_82E01FC4;
loc_82E01F10:
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e01fb0
	if (!ctx.cr6.eq) goto loc_82E01FB0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da5590
	ctx.lr = 0x82E01F38;
	sub_82DA5590(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e01fb0
	if (ctx.cr6.eq) goto loc_82E01FB0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82da54d8
	ctx.lr = 0x82E01F60;
	sub_82DA54D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e01f94
	if (!ctx.cr6.eq) goto loc_82E01F94;
	// lwz r4,748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e01f88
	if (!ctx.cr6.eq) goto loc_82E01F88;
	// lwz r4,736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e01f88
	if (!ctx.cr6.eq) goto loc_82E01F88;
	// lwz r4,424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
loc_82E01F88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// bl 0x82e012b0
	ctx.lr = 0x82E01F94;
	sub_82E012B0(ctx, base);
loc_82E01F94:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e001a8
	ctx.lr = 0x82E01FA8;
	sub_82E001A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e01fc8
	if (!ctx.cr6.eq) goto loc_82E01FC8;
loc_82E01FB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e01f10
	if (!ctx.cr6.eq) goto loc_82E01F10;
loc_82E01FC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E01FC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E01FD0"))) PPC_WEAK_FUNC(sub_82E01FD0);
PPC_FUNC_IMPL(__imp__sub_82E01FD0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// ble cr6,0x82e02008
	if (!ctx.cr6.gt) goto loc_82E02008;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E02008:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x82e02034
	if (ctx.cr6.eq) goto loc_82E02034;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x82e02034
	if (ctx.cr6.eq) goto loc_82E02034;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x82e02034
	if (ctx.cr6.eq) goto loc_82E02034;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E02034:
	// lwz r7,748(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e02048
	if (ctx.cr6.eq) goto loc_82E02048;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// b 0x82e02078
	goto loc_82E02078;
loc_82E02048:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02068
	if (ctx.cr6.eq) goto loc_82E02068;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82e02084
	goto loc_82E02084;
loc_82E02068:
	// lwz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02320
	if (ctx.cr6.eq) goto loc_82E02320;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82E02078:
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// li r10,5
	ctx.r10.s64 = 5;
loc_82E02084:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82e02094
	if (!ctx.cr6.eq) goto loc_82E02094;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// b 0x82e02208
	goto loc_82E02208;
loc_82E02094:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x82e021cc
	if (!ctx.cr6.eq) goto loc_82E021CC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82e02208
	if (ctx.cr6.eq) goto loc_82E02208;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x82e02208
	if (ctx.cr6.gt) goto loc_82E02208;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,8388
	ctx.r12.s64 = ctx.r12.s64 + 8388;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82E02130;
	case 1:
		goto loc_82E020F0;
	case 2:
		goto loc_82E020F8;
	case 3:
		goto loc_82E02100;
	case 4:
		goto loc_82E02108;
	case 5:
		goto loc_82E02108;
	case 6:
		goto loc_82E02130;
	case 7:
		goto loc_82E02130;
	case 8:
		goto loc_82E02130;
	case 9:
		goto loc_82E02130;
	case 10:
		goto loc_82E02130;
	default:
		__builtin_unreachable();
	}
	// lwz r23,8496(0)
	ctx.r23.u64 = PPC_LOAD_U32(8496);
	// lwz r23,8432(0)
	ctx.r23.u64 = PPC_LOAD_U32(8432);
	// lwz r23,8440(0)
	ctx.r23.u64 = PPC_LOAD_U32(8440);
	// lwz r23,8448(0)
	ctx.r23.u64 = PPC_LOAD_U32(8448);
	// lwz r23,8456(0)
	ctx.r23.u64 = PPC_LOAD_U32(8456);
	// lwz r23,8456(0)
	ctx.r23.u64 = PPC_LOAD_U32(8456);
	// lwz r23,8496(0)
	ctx.r23.u64 = PPC_LOAD_U32(8496);
	// lwz r23,8496(0)
	ctx.r23.u64 = PPC_LOAD_U32(8496);
	// lwz r23,8496(0)
	ctx.r23.u64 = PPC_LOAD_U32(8496);
	// lwz r23,8496(0)
	ctx.r23.u64 = PPC_LOAD_U32(8496);
	// lwz r23,8496(0)
	ctx.r23.u64 = PPC_LOAD_U32(8496);
loc_82E020F0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82e0210c
	goto loc_82E0210C;
loc_82E020F8:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82e0210c
	goto loc_82E0210C;
loc_82E02100:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82e0210c
	goto loc_82E0210C;
loc_82E02108:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82E0210C:
	// li r10,0
	ctx.r10.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r10,r8,3,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 3) & 0x7FFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// twllei r9,0
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divwu r4,r11,r9
	ctx.r4.u32 = ctx.r11.u32 / ctx.r9.u32;
	// b 0x82e02208
	goto loc_82E02208;
loc_82E02130:
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,8520
	ctx.r12.s64 = ctx.r12.s64 + 8520;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r23,8636(0)
	ctx.r23.u64 = PPC_LOAD_U32(8636);
	// lwz r23,8712(0)
	ctx.r23.u64 = PPC_LOAD_U32(8712);
	// lwz r23,8712(0)
	ctx.r23.u64 = PPC_LOAD_U32(8712);
	// lwz r23,8712(0)
	ctx.r23.u64 = PPC_LOAD_U32(8712);
	// lwz r23,8712(0)
	ctx.r23.u64 = PPC_LOAD_U32(8712);
	// lwz r23,8712(0)
	ctx.r23.u64 = PPC_LOAD_U32(8712);
	// lwz r23,8564(0)
	ctx.r23.u64 = PPC_LOAD_U32(8564);
	// lwz r23,8584(0)
	ctx.r23.u64 = PPC_LOAD_U32(8584);
	// lwz r23,8616(0)
	ctx.r23.u64 = PPC_LOAD_U32(8616);
	// lwz r23,8332(0)
	ctx.r23.u64 = PPC_LOAD_U32(8332);
	// lwz r23,8332(0)
	ctx.r23.u64 = PPC_LOAD_U32(8332);
	// mulli r11,r8,14
	ctx.r11.s64 = ctx.r8.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r9,0
	// divwu r4,r11,r9
	ctx.r4.u32 = ctx.r11.u32 / ctx.r9.u32;
	// b 0x82e02208
	goto loc_82E02208;
	// lis r10,14563
	ctx.r10.s64 = 954400768;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r10,r10,36409
	ctx.r10.u64 = ctx.r10.u64 | 36409;
	// twllei r9,0
	// mulhwu r11,r11,r10
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r4,r11,r9
	ctx.r4.u32 = ctx.r11.u32 / ctx.r9.u32;
	// b 0x82e02208
	goto loc_82E02208;
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r9,0
	// divwu r4,r11,r9
	ctx.r4.u32 = ctx.r11.u32 / ctx.r9.u32;
	// b 0x82e02208
	goto loc_82E02208;
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r9,0
	// divwu r4,r11,r9
	ctx.r4.u32 = ctx.r11.u32 / ctx.r9.u32;
	// b 0x82e02208
	goto loc_82E02208;
loc_82E021CC:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82e02208
	if (!ctx.cr6.eq) goto loc_82E02208;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E02208:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02244
	if (ctx.cr6.eq) goto loc_82E02244;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e02230
	if (ctx.cr6.eq) goto loc_82E02230;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82e02248
	goto loc_82E02248;
loc_82E02230:
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82e02248
	goto loc_82E02248;
loc_82E02244:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82E02248:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e02264
	if (!ctx.cr6.gt) goto loc_82E02264;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E02264:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e02294
	if (ctx.cr6.eq) goto loc_82E02294;
	// lwz r3,748(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E02284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E02294:
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e022c8
	if (ctx.cr6.eq) goto loc_82E022C8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E022B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E022C8:
	// lwz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e022fc
	if (ctx.cr6.eq) goto loc_82E022FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E022EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E022FC:
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E02310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E02320:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E02334"))) PPC_WEAK_FUNC(sub_82E02334);
PPC_FUNC_IMPL(__imp__sub_82E02334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E02338"))) PPC_WEAK_FUNC(sub_82E02338);
PPC_FUNC_IMPL(__imp__sub_82E02338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E02340;
	__savegprlr_26(ctx, base);
	// lwz r29,144(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne cr6,0x82e0235c
	if (!ctx.cr6.eq) goto loc_82E0235C;
loc_82E02354:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E0235C:
	// rlwinm r5,r5,0,4,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r28,8
	ctx.r28.s64 = 524288;
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e023c0
	if (!ctx.cr6.eq) goto loc_82E023C0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E02378:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E0237C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e02398
	if (ctx.cr6.eq) goto loc_82E02398;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02354
	if (ctx.cr6.eq) goto loc_82E02354;
loc_82E02398:
	// lwz r11,748(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02418
	if (ctx.cr6.eq) goto loc_82E02418;
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lfs f0,72(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,116(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// lwz r30,812(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 812);
	// b 0x82e02458
	goto loc_82E02458;
loc_82E023C0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e023d4
	if (!ctx.cr6.eq) goto loc_82E023D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82e02378
	goto loc_82E02378;
loc_82E023D4:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e023e8
	if (!ctx.cr6.eq) goto loc_82E023E8;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82e02378
	goto loc_82E02378;
loc_82E023E8:
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82e02378
	if (ctx.cr6.eq) goto loc_82E02378;
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82e02378
	if (ctx.cr6.eq) goto loc_82E02378;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x82e0237c
	if (ctx.cr6.eq) goto loc_82E0237C;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x82e0237c
	if (ctx.cr6.eq) goto loc_82E0237C;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x82e0237c
	if (ctx.cr6.eq) goto loc_82E0237C;
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02418:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e02444
	if (ctx.cr6.eq) goto loc_82E02444;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02444
	if (ctx.cr6.eq) goto loc_82E02444;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lfs f0,72(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,64(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x82e0245c
	goto loc_82E0245C;
loc_82E02444:
	// lwz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02738
	if (ctx.cr6.eq) goto loc_82E02738;
	// lwz r31,116(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
loc_82E02458:
	// li r6,5
	ctx.r6.s64 = 5;
loc_82E0245C:
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e024a8
	if (ctx.cr6.eq) goto loc_82E024A8;
	// lwz r10,156(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 156);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e024a8
	if (!ctx.cr6.gt) goto loc_82E024A8;
	// lwz r10,152(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82E02480:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82e024a8
	if (ctx.cr6.lt) goto loc_82E024A8;
	// lwz r26,92(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,156(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e02480
	if (ctx.cr6.lt) goto loc_82E02480;
loc_82E024A8:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x82e0272c
	if (ctx.cr6.eq) goto loc_82E0272C;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x82e026c8
	if (!ctx.cr6.eq) goto loc_82E026C8;
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bgt cr6,0x82e02730
	if (ctx.cr6.gt) goto loc_82E02730;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,9432
	ctx.r12.s64 = ctx.r12.s64 + 9432;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u64) {
	case 0:
		goto loc_82E02594;
	case 1:
		goto loc_82E02504;
	case 2:
		goto loc_82E02528;
	case 3:
		goto loc_82E0254C;
	case 4:
		goto loc_82E02570;
	case 5:
		goto loc_82E02570;
	case 6:
		goto loc_82E02594;
	case 7:
		goto loc_82E02594;
	case 8:
		goto loc_82E02594;
	case 9:
		goto loc_82E02594;
	case 10:
		goto loc_82E02594;
	default:
		__builtin_unreachable();
	}
	// lwz r23,9620(0)
	ctx.r23.u64 = PPC_LOAD_U32(9620);
	// lwz r23,9476(0)
	ctx.r23.u64 = PPC_LOAD_U32(9476);
	// lwz r23,9512(0)
	ctx.r23.u64 = PPC_LOAD_U32(9512);
	// lwz r23,9548(0)
	ctx.r23.u64 = PPC_LOAD_U32(9548);
	// lwz r23,9584(0)
	ctx.r23.u64 = PPC_LOAD_U32(9584);
	// lwz r23,9584(0)
	ctx.r23.u64 = PPC_LOAD_U32(9584);
	// lwz r23,9620(0)
	ctx.r23.u64 = PPC_LOAD_U32(9620);
	// lwz r23,9620(0)
	ctx.r23.u64 = PPC_LOAD_U32(9620);
	// lwz r23,9620(0)
	ctx.r23.u64 = PPC_LOAD_U32(9620);
	// lwz r23,9620(0)
	ctx.r23.u64 = PPC_LOAD_U32(9620);
	// lwz r23,9620(0)
	ctx.r23.u64 = PPC_LOAD_U32(9620);
loc_82E02504:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02528:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E0254C:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02570:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02594:
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,9644
	ctx.r12.s64 = ctx.r12.s64 + 9644;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r23,9900(0)
	ctx.r23.u64 = PPC_LOAD_U32(9900);
	// lwz r23,10032(0)
	ctx.r23.u64 = PPC_LOAD_U32(10032);
	// lwz r23,10032(0)
	ctx.r23.u64 = PPC_LOAD_U32(10032);
	// lwz r23,10032(0)
	ctx.r23.u64 = PPC_LOAD_U32(10032);
	// lwz r23,10032(0)
	ctx.r23.u64 = PPC_LOAD_U32(10032);
	// lwz r23,10032(0)
	ctx.r23.u64 = PPC_LOAD_U32(10032);
	// lwz r23,9688(0)
	ctx.r23.u64 = PPC_LOAD_U32(9688);
	// lwz r23,9772(0)
	ctx.r23.u64 = PPC_LOAD_U32(9772);
	// lwz r23,9816(0)
	ctx.r23.u64 = PPC_LOAD_U32(9816);
	// lwz r23,10028(0)
	ctx.r23.u64 = PPC_LOAD_U32(10028);
	// lwz r23,10028(0)
	ctx.r23.u64 = PPC_LOAD_U32(10028);
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
	// addi r10,r11,27
	ctx.r10.s64 = ctx.r11.s64 + 27;
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E026C8:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82e02704
	if (!ctx.cr6.eq) goto loc_82E02704;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f0,8044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8044);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02704:
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e02718
	if (!ctx.cr6.eq) goto loc_82E02718;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02718:
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e02730
	if (!ctx.cr6.eq) goto loc_82E02730;
	// lwz r11,152(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82E0272C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E02730:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02738:
	// li r3,36
	ctx.r3.s64 = 36;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E02740"))) PPC_WEAK_FUNC(sub_82E02740);
PPC_FUNC_IMPL(__imp__sub_82E02740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E02748;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82e106a8
	ctx.lr = 0x82E02770;
	sub_82E106A8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,17
	ctx.r10.s64 = 17;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E02780:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e02780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E02780;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13948
	ctx.r4.s64 = ctx.r11.s64 + 13948;
	// bl 0x82da4448
	ctx.lr = 0x82E0279C;
	sub_82DA4448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r29,r10,256
	ctx.r29.u64 = ctx.r10.u64 | 256;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// bl 0x82d8ced0
	ctx.lr = 0x82E027D4;
	sub_82D8CED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e02918
	if (!ctx.cr6.eq) goto loc_82E02918;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d95c18
	ctx.lr = 0x82E027EC;
	sub_82D95C18(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e0280c
	if (!ctx.cr6.eq) goto loc_82E0280C;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02820
	if (ctx.cr6.eq) goto loc_82E02820;
loc_82E0280C:
	// addi r5,r31,740
	ctx.r5.s64 = ctx.r31.s64 + 740;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82d8d030
	ctx.lr = 0x82E02818;
	sub_82D8D030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e02918
	if (!ctx.cr6.eq) goto loc_82E02918;
loc_82E02820:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,17
	ctx.r10.s64 = 17;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E02830:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e02830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E02830;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13928
	ctx.r4.s64 = ctx.r11.s64 + 13928;
	// bl 0x82da4448
	ctx.lr = 0x82E0284C;
	sub_82DA4448(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r8,r31,432
	ctx.r8.s64 = ctx.r31.s64 + 432;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r9,r9,-32648
	ctx.r9.s64 = ctx.r9.s64 + -32648;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r10,r10,-32640
	ctx.r10.s64 = ctx.r10.s64 + -32640;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r8.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// addi r11,r11,-32728
	ctx.r11.s64 = ctx.r11.s64 + -32728;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// bl 0x82d8ced0
	ctx.lr = 0x82E028B0;
	sub_82D8CED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e02918
	if (!ctx.cr6.eq) goto loc_82E02918;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d95c18
	ctx.lr = 0x82E028C8;
	sub_82D95C18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d95be8
	ctx.lr = 0x82E028D4;
	sub_82D95BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e02918
	if (!ctx.cr6.eq) goto loc_82E02918;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,220(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E02904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e02918
	if (!ctx.cr6.eq) goto loc_82E02918;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
loc_82E02918:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E02920"))) PPC_WEAK_FUNC(sub_82E02920);
PPC_FUNC_IMPL(__imp__sub_82E02920) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8363
	ctx.r10.s64 = 8363;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E02948"))) PPC_WEAK_FUNC(sub_82E02948);
PPC_FUNC_IMPL(__imp__sub_82E02948) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,1016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82e02980
	if (!ctx.cr6.gt) goto loc_82E02980;
	// lwz r7,1020(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
loc_82E02964:
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e02988
	if (ctx.cr6.eq) goto loc_82E02988;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,608
	ctx.r9.s64 = ctx.r9.s64 + 608;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e02964
	if (ctx.cr6.lt) goto loc_82E02964;
loc_82E02980:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_82E02988:
	// mulli r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 * 608;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,64
	ctx.r8.s64 = 64;
	// lis r7,64
	ctx.r7.s64 = 4194304;
	// li r5,128
	ctx.r5.s64 = 128;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stb r10,475(r11)
	PPC_STORE_U8(ctx.r11.u32 + 475, ctx.r10.u8);
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// stw r8,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r8.u32);
	// stw r7,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r7.u32);
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// stb r10,536(r11)
	PPC_STORE_U8(ctx.r11.u32 + 536, ctx.r10.u8);
	// stw r10,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r10.u32);
	// stw r10,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r10.u32);
	// stw r5,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r5.u32);
	// stw r4,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r4.u32);
	// stw r10,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// stb r10,560(r11)
	PPC_STORE_U8(ctx.r11.u32 + 560, ctx.r10.u8);
	// stw r10,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
	// stw r10,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r10.u32);
	// stw r10,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r10.u32);
	// stw r10,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r10.u32);
	// stb r10,584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// stw r9,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r9.u32);
	// beq cr6,0x82e02a24
	if (ctx.cr6.eq) goto loc_82E02A24;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82E02A24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E02A2C"))) PPC_WEAK_FUNC(sub_82E02A2C);
PPC_FUNC_IMPL(__imp__sub_82E02A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E02A30"))) PPC_WEAK_FUNC(sub_82E02A30);
PPC_FUNC_IMPL(__imp__sub_82E02A30) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x82d9ab70
	ctx.lr = 0x82E02A5C;
	sub_82D9AB70(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e02ac4
	if (!ctx.cr6.eq) goto loc_82E02AC4;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,1032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e02a98
	if (ctx.cr6.eq) goto loc_82E02A98;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E02A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E02A98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r30,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r30.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
loc_82E02AC4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82E02AE0"))) PPC_WEAK_FUNC(sub_82E02AE0);
PPC_FUNC_IMPL(__imp__sub_82E02AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x82e02aec
	if (!ctx.cr6.lt) goto loc_82E02AEC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82E02AEC:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f13,2016(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2016);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,2048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2048, ctx.r4.u32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,10320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10320);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,7712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e02b54
	if (ctx.cr6.lt) goto loc_82E02B54;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r3,1132
	ctx.r10.s64 = ctx.r3.s64 + 1132;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
loc_82E02B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E02B5C"))) PPC_WEAK_FUNC(sub_82E02B5C);
PPC_FUNC_IMPL(__imp__sub_82E02B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E02B60"))) PPC_WEAK_FUNC(sub_82E02B60);
PPC_FUNC_IMPL(__imp__sub_82E02B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E02B68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addic. r11,r29,760
	ctx.xer.ca = ctx.r29.u32 > 4294966535;
	ctx.r11.s64 = ctx.r29.s64 + 760;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r28,2036(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2036, ctx.r28.u8);
	// stb r10,2037(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2037, ctx.r10.u8);
	// beq 0x82e02c50
	if (ctx.cr0.eq) goto loc_82E02C50;
	// lwz r10,756(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 756);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e02c50
	if (!ctx.cr6.gt) goto loc_82E02C50;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82E02B9C:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e02c3c
	if (ctx.cr6.eq) goto loc_82E02C3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e02c3c
	if (ctx.cr6.eq) goto loc_82E02C3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7c440
	ctx.lr = 0x82E02BBC;
	sub_82D7C440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e02c3c
	if (!ctx.cr6.eq) goto loc_82E02C3C;
loc_82E02BC8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82d9cb18
	ctx.lr = 0x82E02BF4;
	sub_82D9CB18(ctx, base);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// lwz r11,1032(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02c20
	if (ctx.cr6.eq) goto loc_82E02C20;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E02C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E02C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02a30
	ctx.lr = 0x82E02C28;
	sub_82E02A30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7c440
	ctx.lr = 0x82E02C30;
	sub_82D7C440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02bc8
	if (ctx.cr6.eq) goto loc_82E02BC8;
loc_82E02C3C:
	// lwz r11,756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 756);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e02b9c
	if (ctx.cr6.lt) goto loc_82E02B9C;
loc_82E02C50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E02C5C"))) PPC_WEAK_FUNC(sub_82E02C5C);
PPC_FUNC_IMPL(__imp__sub_82E02C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E02C60"))) PPC_WEAK_FUNC(sub_82E02C60);
PPC_FUNC_IMPL(__imp__sub_82E02C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E02C68;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82e02ca8
	if (ctx.cr6.eq) goto loc_82E02CA8;
	// lwz r11,1016(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1016);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e02cac
	goto loc_82E02CAC;
loc_82E02CA8:
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82E02CAC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1024);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da9590
	ctx.lr = 0x82E02CC4;
	sub_82DA9590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e02e08
	if (!ctx.cr6.eq) goto loc_82E02E08;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r11.u8);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02cfc
	if (ctx.cr6.eq) goto loc_82E02CFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d99380
	ctx.lr = 0x82E02CFC;
	sub_82D99380(ctx, base);
loc_82E02CFC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x82e02d14
	if (ctx.cr6.eq) goto loc_82E02D14;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// b 0x82e02d1c
	goto loc_82E02D1C;
loc_82E02D14:
	// addi r11,r28,1036
	ctx.r11.s64 = ctx.r28.s64 + 1036;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82E02D1C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9d898
	ctx.lr = 0x82E02D34;
	sub_82D9D898(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e02d78
	if (ctx.cr6.eq) goto loc_82E02D78;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9cb18
	ctx.lr = 0x82E02D6C;
	sub_82D9CB18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E02D78:
	// lwz r4,504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e02d98
	if (ctx.cr6.eq) goto loc_82E02D98;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9cf10
	ctx.lr = 0x82E02D90;
	sub_82D9CF10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
loc_82E02D98:
	// lwz r11,1032(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02dec
	if (ctx.cr6.eq) goto loc_82E02DEC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,1032(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1032);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E02DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e02dec
	if (ctx.cr6.eq) goto loc_82E02DEC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,1032(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1032);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d9b120
	ctx.lr = 0x82E02DEC;
	sub_82D9B120(ctx, base);
loc_82E02DEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d99238
	ctx.lr = 0x82E02DF8;
	sub_82D99238(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82d8b3e0
	ctx.lr = 0x82E02E04;
	sub_82D8B3E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E02E08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E02E10"))) PPC_WEAK_FUNC(sub_82E02E10);
PPC_FUNC_IMPL(__imp__sub_82E02E10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e02e20
	if (!ctx.cr6.eq) goto loc_82E02E20;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E02E20:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82e02f74
	if (ctx.cr6.gt) goto loc_82E02F74;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,11844
	ctx.r12.s64 = ctx.r12.s64 + 11844;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E02F74;
	case 1:
		goto loc_82E02E84;
	case 2:
		goto loc_82E02E94;
	case 3:
		goto loc_82E02EA4;
	case 4:
		goto loc_82E02EB4;
	case 5:
		goto loc_82E02EC4;
	case 6:
		goto loc_82E02ED4;
	case 7:
		goto loc_82E02EE4;
	case 8:
		goto loc_82E02EF4;
	case 9:
		goto loc_82E02F04;
	case 10:
		goto loc_82E02F14;
	case 11:
		goto loc_82E02F24;
	case 12:
		goto loc_82E02F34;
	case 13:
		goto loc_82E02F44;
	case 14:
		goto loc_82E02F54;
	case 15:
		goto loc_82E02F64;
	default:
		__builtin_unreachable();
	}
	// lwz r23,12148(0)
	ctx.r23.u64 = PPC_LOAD_U32(12148);
	// lwz r23,11908(0)
	ctx.r23.u64 = PPC_LOAD_U32(11908);
	// lwz r23,11924(0)
	ctx.r23.u64 = PPC_LOAD_U32(11924);
	// lwz r23,11940(0)
	ctx.r23.u64 = PPC_LOAD_U32(11940);
	// lwz r23,11956(0)
	ctx.r23.u64 = PPC_LOAD_U32(11956);
	// lwz r23,11972(0)
	ctx.r23.u64 = PPC_LOAD_U32(11972);
	// lwz r23,11988(0)
	ctx.r23.u64 = PPC_LOAD_U32(11988);
	// lwz r23,12004(0)
	ctx.r23.u64 = PPC_LOAD_U32(12004);
	// lwz r23,12020(0)
	ctx.r23.u64 = PPC_LOAD_U32(12020);
	// lwz r23,12036(0)
	ctx.r23.u64 = PPC_LOAD_U32(12036);
	// lwz r23,12052(0)
	ctx.r23.u64 = PPC_LOAD_U32(12052);
	// lwz r23,12068(0)
	ctx.r23.u64 = PPC_LOAD_U32(12068);
	// lwz r23,12084(0)
	ctx.r23.u64 = PPC_LOAD_U32(12084);
	// lwz r23,12100(0)
	ctx.r23.u64 = PPC_LOAD_U32(12100);
	// lwz r23,12116(0)
	ctx.r23.u64 = PPC_LOAD_U32(12116);
	// lwz r23,12132(0)
	ctx.r23.u64 = PPC_LOAD_U32(12132);
loc_82E02E84:
	// li r11,8413
	ctx.r11.s64 = 8413;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02E94:
	// li r11,8463
	ctx.r11.s64 = 8463;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02EA4:
	// li r11,8529
	ctx.r11.s64 = 8529;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02EB4:
	// li r11,8581
	ctx.r11.s64 = 8581;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02EC4:
	// li r11,8651
	ctx.r11.s64 = 8651;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02ED4:
	// li r11,8723
	ctx.r11.s64 = 8723;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02EE4:
	// li r11,8757
	ctx.r11.s64 = 8757;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02EF4:
	// li r11,7895
	ctx.r11.s64 = 7895;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F04:
	// li r11,7941
	ctx.r11.s64 = 7941;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F14:
	// li r11,7985
	ctx.r11.s64 = 7985;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F24:
	// li r11,8046
	ctx.r11.s64 = 8046;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F34:
	// li r11,8107
	ctx.r11.s64 = 8107;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F44:
	// li r11,8169
	ctx.r11.s64 = 8169;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F54:
	// li r11,8232
	ctx.r11.s64 = 8232;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F64:
	// li r11,8280
	ctx.r11.s64 = 8280;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02F74:
	// li r11,8363
	ctx.r11.s64 = 8363;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E02F84"))) PPC_WEAK_FUNC(sub_82E02F84);
PPC_FUNC_IMPL(__imp__sub_82E02F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E02F88"))) PPC_WEAK_FUNC(sub_82E02F88);
PPC_FUNC_IMPL(__imp__sub_82E02F88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bne cr6,0x82e02fa4
	if (!ctx.cr6.eq) goto loc_82E02FA4;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02FA4:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bne cr6,0x82e02fbc
	if (!ctx.cr6.eq) goto loc_82E02FBC;
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E02FBC:
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// bne cr6,0x82e02fe0
	if (!ctx.cr6.eq) goto loc_82E02FE0;
	// lwz r10,2056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 500);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E02FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E02FE8"))) PPC_WEAK_FUNC(sub_82E02FE8);
PPC_FUNC_IMPL(__imp__sub_82E02FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bne cr6,0x82e03004
	if (!ctx.cr6.eq) goto loc_82E03004;
	// lwz r11,2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E03004:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bne cr6,0x82e03024
	if (!ctx.cr6.eq) goto loc_82E03024;
	// lwz r10,2056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 500);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E03024:
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// bne cr6,0x82e03034
	if (!ctx.cr6.eq) goto loc_82E03034;
	// lwz r11,2052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2052);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E03034:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0303C"))) PPC_WEAK_FUNC(sub_82E0303C);
PPC_FUNC_IMPL(__imp__sub_82E0303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03040"))) PPC_WEAK_FUNC(sub_82E03040);
PPC_FUNC_IMPL(__imp__sub_82E03040) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e03050
	if (!ctx.cr6.eq) goto loc_82E03050;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E03050:
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03060"))) PPC_WEAK_FUNC(sub_82E03060);
PPC_FUNC_IMPL(__imp__sub_82E03060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e030b0
	if (ctx.cr6.lt) goto loc_82E030B0;
	// lwz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e030b0
	if (!ctx.cr6.lt) goto loc_82E030B0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82e030b0
	if (ctx.cr6.lt) goto loc_82E030B0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82e030b0
	if (ctx.cr6.gt) goto loc_82E030B0;
	// addi r10,r4,190
	ctx.r10.s64 = ctx.r4.s64 + 190;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f1,640(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 640, temp.u32);
	// blr 
	return;
loc_82E030B0:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E030B8"))) PPC_WEAK_FUNC(sub_82E030B8);
PPC_FUNC_IMPL(__imp__sub_82E030B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e030f4
	if (ctx.cr6.lt) goto loc_82E030F4;
	// lwz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e030f4
	if (!ctx.cr6.lt) goto loc_82E030F4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e030f4
	if (ctx.cr6.eq) goto loc_82E030F4;
	// addi r10,r4,190
	ctx.r10.s64 = ctx.r4.s64 + 190;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_82E030F4:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E030FC"))) PPC_WEAK_FUNC(sub_82E030FC);
PPC_FUNC_IMPL(__imp__sub_82E030FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03100"))) PPC_WEAK_FUNC(sub_82E03100);
PPC_FUNC_IMPL(__imp__sub_82E03100) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82e03110
	if (!ctx.cr6.eq) goto loc_82E03110;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E03110:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bne cr6,0x82e03128
	if (!ctx.cr6.eq) goto loc_82E03128;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E03128:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bne cr6,0x82e03140
	if (!ctx.cr6.eq) goto loc_82E03140;
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E03140:
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// bne cr6,0x82e03164
	if (!ctx.cr6.eq) goto loc_82E03164;
	// lwz r10,2056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 500);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E03164:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0316C"))) PPC_WEAK_FUNC(sub_82E0316C);
PPC_FUNC_IMPL(__imp__sub_82E0316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03170"))) PPC_WEAK_FUNC(sub_82E03170);
PPC_FUNC_IMPL(__imp__sub_82E03170) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82e03180
	if (!ctx.cr6.eq) goto loc_82E03180;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E03180:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bne cr6,0x82e03198
	if (!ctx.cr6.eq) goto loc_82E03198;
	// lwz r11,2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E03198:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bne cr6,0x82e031b8
	if (!ctx.cr6.eq) goto loc_82E031B8;
	// lwz r10,2056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 500);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E031B8:
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// bne cr6,0x82e031c8
	if (!ctx.cr6.eq) goto loc_82E031C8;
	// lwz r11,2052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2052);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E031C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E031D0"))) PPC_WEAK_FUNC(sub_82E031D0);
PPC_FUNC_IMPL(__imp__sub_82E031D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82e031e0
	if (!ctx.cr6.eq) goto loc_82E031E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E031E0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e031f0
	if (!ctx.cr6.eq) goto loc_82E031F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E031F0:
	// lwz r11,756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03200"))) PPC_WEAK_FUNC(sub_82E03200);
PPC_FUNC_IMPL(__imp__sub_82E03200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82e03210
	if (!ctx.cr6.eq) goto loc_82E03210;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E03210:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e0325c
	if (ctx.cr6.lt) goto loc_82E0325C;
	// lwz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e0325c
	if (!ctx.cr6.lt) goto loc_82E0325C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82e0325c
	if (ctx.cr6.lt) goto loc_82E0325C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82e0325c
	if (ctx.cr6.gt) goto loc_82E0325C;
	// addi r10,r4,190
	ctx.r10.s64 = ctx.r4.s64 + 190;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f1,640(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 640, temp.u32);
	// blr 
	return;
loc_82E0325C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03264"))) PPC_WEAK_FUNC(sub_82E03264);
PPC_FUNC_IMPL(__imp__sub_82E03264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03268"))) PPC_WEAK_FUNC(sub_82E03268);
PPC_FUNC_IMPL(__imp__sub_82E03268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82e03278
	if (!ctx.cr6.eq) goto loc_82E03278;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E03278:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e032b0
	if (ctx.cr6.lt) goto loc_82E032B0;
	// lwz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e032b0
	if (!ctx.cr6.lt) goto loc_82E032B0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e032b0
	if (ctx.cr6.eq) goto loc_82E032B0;
	// addi r10,r4,190
	ctx.r10.s64 = ctx.r4.s64 + 190;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_82E032B0:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E032B8"))) PPC_WEAK_FUNC(sub_82E032B8);
PPC_FUNC_IMPL(__imp__sub_82E032B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8363
	ctx.r7.s64 = 8363;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82E032CC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bge cr6,0x82e032cc
	if (!ctx.cr6.lt) goto loc_82E032CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E032F8"))) PPC_WEAK_FUNC(sub_82E032F8);
PPC_FUNC_IMPL(__imp__sub_82E032F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E03300;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e02b60
	ctx.lr = 0x82E03310;
	sub_82E02B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e034bc
	if (!ctx.cr6.eq) goto loc_82E034BC;
	// lbz r10,1276(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1276);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// addi r11,r31,1036
	ctx.r11.s64 = ctx.r31.s64 + 1036;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r9.u32);
	// stw r28,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r28.u32);
	// stw r28,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r28.u32);
	// stw r28,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r28.u32);
	// lfs f31,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// stw r28,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r28.u32);
	// stw r28,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r28.u32);
	// stw r28,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r28.u32);
	// stw r28,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r28.u32);
	// stw r28,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r28.u32);
	// stw r28,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r28.u32);
	// stb r28,2037(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2037, ctx.r28.u8);
	// beq cr6,0x82e033ac
	if (ctx.cr6.eq) goto loc_82E033AC;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f31,80(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,76(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f31,72(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
loc_82E033AC:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// stfs f31,1092(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// lwz r3,496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// beq cr6,0x82e033d8
	if (ctx.cr6.eq) goto loc_82E033D8;
	// lwz r11,1280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82cb16f0
	ctx.lr = 0x82E033D8;
	sub_82CB16F0(ctx, base);
loc_82E033D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// bl 0x82e02ae0
	ctx.lr = 0x82E033E4;
	sub_82E02AE0(ctx, base);
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e03454
	if (ctx.cr6.eq) goto loc_82E03454;
	// addic. r27,r31,760
	ctx.xer.ca = ctx.r31.u32 > 4294966535;
	ctx.r27.s64 = ctx.r31.s64 + 760;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82e03454
	if (ctx.cr0.eq) goto loc_82E03454;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e03454
	if (!ctx.cr6.gt) goto loc_82E03454;
	// addi r29,r31,1148
	ctx.r29.s64 = ctx.r31.s64 + 1148;
	// subfic r26,r31,-1148
	ctx.xer.ca = ctx.r31.u32 <= 4294966148;
	ctx.r26.s64 = -1148 - ctx.r31.s64;
loc_82E03408:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,704
	ctx.r5.s64 = 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E0341C;
	sub_82CB16F0(ctx, base);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lbz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// stw r11,636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 636, ctx.r11.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f31,640(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 640, temp.u32);
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// stw r11,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r11.u32);
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e03408
	if (ctx.cr6.lt) goto loc_82E03408;
loc_82E03454:
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e034b0
	if (ctx.cr6.eq) goto loc_82E034B0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ble cr6,0x82e034b0
	if (!ctx.cr6.gt) goto loc_82E034B0;
loc_82E03468:
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// li r5,608
	ctx.r5.s64 = 608;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E03480;
	sub_82CB16F0(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82d98af8
	ctx.lr = 0x82E03488;
	sub_82D98AF8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r31,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r31.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,608
	ctx.r28.s64 = ctx.r28.s64 + 608;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e03468
	if (ctx.cr6.lt) goto loc_82E03468;
loc_82E034B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,2036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2036, ctx.r11.u8);
loc_82E034BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E034C8"))) PPC_WEAK_FUNC(sub_82E034C8);
PPC_FUNC_IMPL(__imp__sub_82E034C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E034D0"))) PPC_WEAK_FUNC(sub_82E034D0);
PPC_FUNC_IMPL(__imp__sub_82E034D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82e034e8
	if (ctx.cr6.eq) goto loc_82E034E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E034E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E034F4"))) PPC_WEAK_FUNC(sub_82E034F4);
PPC_FUNC_IMPL(__imp__sub_82E034F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E034F8"))) PPC_WEAK_FUNC(sub_82E034F8);
PPC_FUNC_IMPL(__imp__sub_82E034F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,126
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 126, ctx.xer);
	// ble cr6,0x82e03508
	if (!ctx.cr6.gt) goto loc_82E03508;
loc_82E03500:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E03508:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82e03500
	if (!ctx.cr6.eq) goto loc_82E03500;
	// addi r11,r4,152
	ctx.r11.s64 = ctx.r4.s64 + 152;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bne cr6,0x82e03540
	if (!ctx.cr6.eq) goto loc_82E03540;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r10.u32);
loc_82E03540:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03548"))) PPC_WEAK_FUNC(sub_82E03548);
PPC_FUNC_IMPL(__imp__sub_82E03548) {
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
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82e0357c
	if (ctx.cr6.eq) goto loc_82E0357C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e0362c
	goto loc_82E0362C;
loc_82E0357C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e03628
	if (!ctx.cr6.eq) goto loc_82E03628;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e035f0
	if (!ctx.cr6.eq) goto loc_82E035F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// lwz r3,1120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82cb4a20
	ctx.lr = 0x82E035B4;
	sub_82CB4A20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e035e0
	if (!ctx.cr6.eq) goto loc_82E035E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82e0362c
	goto loc_82E0362C;
loc_82E035E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,1128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1128, ctx.r10.u32);
loc_82E035F0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,17472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17472);
	// lwz r9,1124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,1120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E03618;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r10.u32);
loc_82E03628:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E0362C:
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

__attribute__((alias("__imp__sub_82E03644"))) PPC_WEAK_FUNC(sub_82E03644);
PPC_FUNC_IMPL(__imp__sub_82E03644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03648"))) PPC_WEAK_FUNC(sub_82E03648);
PPC_FUNC_IMPL(__imp__sub_82E03648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82e03660
	if (ctx.cr6.eq) goto loc_82E03660;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E03660:
	// li r11,608
	ctx.r11.s64 = 608;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82E03668:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,1120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1120, ctx.xer);
	// blt cr6,0x82e03668
	if (ctx.cr6.lt) goto loc_82E03668;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03690"))) PPC_WEAK_FUNC(sub_82E03690);
PPC_FUNC_IMPL(__imp__sub_82E03690) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,126
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 126, ctx.xer);
	// ble cr6,0x82e036a0
	if (!ctx.cr6.gt) goto loc_82E036A0;
loc_82E03698:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E036A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82e03698
	if (!ctx.cr6.eq) goto loc_82E03698;
	// addi r10,r4,152
	ctx.r10.s64 = ctx.r4.s64 + 152;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne cr6,0x82e036d4
	if (!ctx.cr6.eq) goto loc_82E036D4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,1124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1124, ctx.r11.u32);
loc_82E036D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E036DC"))) PPC_WEAK_FUNC(sub_82E036DC);
PPC_FUNC_IMPL(__imp__sub_82E036DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E036E0"))) PPC_WEAK_FUNC(sub_82E036E0);
PPC_FUNC_IMPL(__imp__sub_82E036E0) {
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
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82e03714
	if (ctx.cr6.eq) goto loc_82E03714;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e037c4
	goto loc_82E037C4;
loc_82E03714:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e037c0
	if (ctx.cr6.eq) goto loc_82E037C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e03788
	if (!ctx.cr6.eq) goto loc_82E03788;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// lwz r3,1120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82cb4a20
	ctx.lr = 0x82E0374C;
	sub_82CB4A20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e03778
	if (!ctx.cr6.eq) goto loc_82E03778;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82e037c4
	goto loc_82E037C4;
loc_82E03778:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,1128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1128, ctx.r10.u32);
loc_82E03788:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,17472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17472);
	// lwz r9,1124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,1120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E037B0;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r10.u32);
loc_82E037C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E037C4:
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

__attribute__((alias("__imp__sub_82E037DC"))) PPC_WEAK_FUNC(sub_82E037DC);
PPC_FUNC_IMPL(__imp__sub_82E037DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E037E0"))) PPC_WEAK_FUNC(sub_82E037E0);
PPC_FUNC_IMPL(__imp__sub_82E037E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82e0381c
	if (ctx.cr6.eq) goto loc_82E0381C;
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
loc_82E0381C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// bl 0x82cb16f0
	ctx.lr = 0x82E03830;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03854"))) PPC_WEAK_FUNC(sub_82E03854);
PPC_FUNC_IMPL(__imp__sub_82E03854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03858"))) PPC_WEAK_FUNC(sub_82E03858);
PPC_FUNC_IMPL(__imp__sub_82E03858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03864"))) PPC_WEAK_FUNC(sub_82E03864);
PPC_FUNC_IMPL(__imp__sub_82E03864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03868"))) PPC_WEAK_FUNC(sub_82E03868);
PPC_FUNC_IMPL(__imp__sub_82E03868) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,15460
	ctx.r11.s64 = ctx.r11.s64 + 15460;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03884"))) PPC_WEAK_FUNC(sub_82E03884);
PPC_FUNC_IMPL(__imp__sub_82E03884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03888"))) PPC_WEAK_FUNC(sub_82E03888);
PPC_FUNC_IMPL(__imp__sub_82E03888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03894"))) PPC_WEAK_FUNC(sub_82E03894);
PPC_FUNC_IMPL(__imp__sub_82E03894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03898"))) PPC_WEAK_FUNC(sub_82E03898);
PPC_FUNC_IMPL(__imp__sub_82E03898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e038b0
	if (ctx.cr6.eq) goto loc_82E038B0;
	// ld r3,304(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 304);
	// blr 
	return;
loc_82E038B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E038B8"))) PPC_WEAK_FUNC(sub_82E038B8);
PPC_FUNC_IMPL(__imp__sub_82E038B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E038C4"))) PPC_WEAK_FUNC(sub_82E038C4);
PPC_FUNC_IMPL(__imp__sub_82E038C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E038C8"))) PPC_WEAK_FUNC(sub_82E038C8);
PPC_FUNC_IMPL(__imp__sub_82E038C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E038D4"))) PPC_WEAK_FUNC(sub_82E038D4);
PPC_FUNC_IMPL(__imp__sub_82E038D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E038D8"))) PPC_WEAK_FUNC(sub_82E038D8);
PPC_FUNC_IMPL(__imp__sub_82E038D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E038E4"))) PPC_WEAK_FUNC(sub_82E038E4);
PPC_FUNC_IMPL(__imp__sub_82E038E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E038E8"))) PPC_WEAK_FUNC(sub_82E038E8);
PPC_FUNC_IMPL(__imp__sub_82E038E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E038F4"))) PPC_WEAK_FUNC(sub_82E038F4);
PPC_FUNC_IMPL(__imp__sub_82E038F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E038F8"))) PPC_WEAK_FUNC(sub_82E038F8);
PPC_FUNC_IMPL(__imp__sub_82E038F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03904"))) PPC_WEAK_FUNC(sub_82E03904);
PPC_FUNC_IMPL(__imp__sub_82E03904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03908"))) PPC_WEAK_FUNC(sub_82E03908);
PPC_FUNC_IMPL(__imp__sub_82E03908) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r30,240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 240, ctx.r30.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3600, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e1fe60
	ctx.lr = 0x82E03940;
	sub_82E1FE60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e03950
	if (!ctx.cr6.eq) goto loc_82E03950;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82e03968
	goto loc_82E03968;
loc_82E03950:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r30.u32);
loc_82E03968:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E03988"))) PPC_WEAK_FUNC(sub_82E03988);
PPC_FUNC_IMPL(__imp__sub_82E03988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E03990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e03908
	ctx.lr = 0x82E0399C;
	sub_82E03908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e039fc
	if (ctx.cr6.eq) goto loc_82E039FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,3604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e03a08
	if (!ctx.cr6.eq) goto loc_82E03A08;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82caff58
	ctx.lr = 0x82E039C0;
	sub_82CAFF58(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e039fc
	if (ctx.cr6.eq) goto loc_82E039FC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e03a0c
	if (ctx.cr6.eq) goto loc_82E03A0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E039F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e03a0c
	if (!ctx.cr6.eq) goto loc_82E03A0C;
loc_82E039FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E03A08:
	// stw r30,3604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3604, ctx.r30.u32);
loc_82E03A0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e03a50
	if (ctx.cr6.eq) goto loc_82E03A50;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e03a50
	if (ctx.cr6.eq) goto loc_82E03A50;
	// bl 0x82cb3d50
	ctx.lr = 0x82E03A40;
	sub_82CB3D50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r30.u32);
loc_82E03A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,3600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3600, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,3612
	ctx.r3.s64 = ctx.r11.s64 + 3612;
	// bl 0x82e21e28
	ctx.lr = 0x82E03A6C;
	sub_82E21E28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r30,6112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 6112, ctx.r30.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6128, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E03A88"))) PPC_WEAK_FUNC(sub_82E03A88);
PPC_FUNC_IMPL(__imp__sub_82E03A88) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20128
	ctx.lr = 0x82E03AA0;
	sub_82E20128(ctx, base);
	// rlwinm r3,r3,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03AB4"))) PPC_WEAK_FUNC(sub_82E03AB4);
PPC_FUNC_IMPL(__imp__sub_82E03AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03AB8"))) PPC_WEAK_FUNC(sub_82E03AB8);
PPC_FUNC_IMPL(__imp__sub_82E03AB8) {
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
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// bl 0x82cb16f0
	ctx.lr = 0x82E03B30;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E03B64"))) PPC_WEAK_FUNC(sub_82E03B64);
PPC_FUNC_IMPL(__imp__sub_82E03B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03B68"))) PPC_WEAK_FUNC(sub_82E03B68);
PPC_FUNC_IMPL(__imp__sub_82E03B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 32768;
	// bl 0x82caff58
	ctx.lr = 0x82E03B84;
	sub_82CAFF58(ctx, base);
	// bl 0x82cb8d38
	ctx.lr = 0x82E03B88;
	sub_82CB8D38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd5120
	ctx.lr = 0x82E03B90;
	sub_82CD5120(ctx, base);
	// bl 0x82caff58
	ctx.lr = 0x82E03B94;
	sub_82CAFF58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03BA8"))) PPC_WEAK_FUNC(sub_82E03BA8);
PPC_FUNC_IMPL(__imp__sub_82E03BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E03BB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e03bdc
	if (ctx.cr6.gt) goto loc_82E03BDC;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e03cd0
	if (!ctx.cr6.gt) goto loc_82E03CD0;
loc_82E03BDC:
	// li r29,60
	ctx.r29.s64 = 60;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E03BE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e03c08
	if (ctx.cr6.eq) goto loc_82E03C08;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82cb3d50
	ctx.lr = 0x82E03C00;
	sub_82CB3D50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r30,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82E03C08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r29,3508
	ctx.r28.s64 = ctx.r29.s64 + 3508;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e03c38
	if (ctx.cr6.eq) goto loc_82E03C38;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82cb3d50
	ctx.lr = 0x82E03C24;
	sub_82CB3D50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r30,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82E03C38:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,92
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 92, ctx.xer);
	// blt cr6,0x82e03be4
	if (ctx.cr6.lt) goto loc_82E03BE4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e03cc0
	if (ctx.cr6.eq) goto loc_82E03CC0;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// li r29,92
	ctx.r29.s64 = 92;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E03C5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E03C64;
	sub_82CB0FE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e03cdc
	if (ctx.cr6.eq) goto loc_82E03CDC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r10,3476
	ctx.r4.s64 = ctx.r10.s64 + 3476;
	// bl 0x82e22188
	ctx.lr = 0x82E03CA8;
	sub_82E22188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03cdc
	if (ctx.cr6.eq) goto loc_82E03CDC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82e03c5c
	if (ctx.cr6.lt) goto loc_82E03C5C;
loc_82E03CC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r26,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r26.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r25,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r25.u32);
loc_82E03CD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82E03CDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E03CF4"))) PPC_WEAK_FUNC(sub_82E03CF4);
PPC_FUNC_IMPL(__imp__sub_82E03CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E03CF8"))) PPC_WEAK_FUNC(sub_82E03CF8);
PPC_FUNC_IMPL(__imp__sub_82E03CF8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e03d70
	if (ctx.cr6.eq) goto loc_82E03D70;
	// lwz r6,1120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r11,17472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17472);
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82E03D20:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e03d58
	if (ctx.cr6.eq) goto loc_82E03D58;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82E03D38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e03d58
	if (!ctx.cr0.eq) goto loc_82E03D58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82e03d38
	if (!ctx.cr6.eq) goto loc_82E03D38;
loc_82E03D58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82e03d7c
	if (ctx.cr6.eq) goto loc_82E03D7C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82e03d20
	if (ctx.cr6.lt) goto loc_82E03D20;
loc_82E03D70:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E03D7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E03D88"))) PPC_WEAK_FUNC(sub_82E03D88);
PPC_FUNC_IMPL(__imp__sub_82E03D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E03D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r28.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,17436(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17436);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E03DD8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e03dec
	if (!ctx.cr6.eq) goto loc_82E03DEC;
loc_82E03DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E03DEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r29,17440(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17440);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E03E14;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,17444(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17444);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E03E48;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,17448(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17448);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E03E7C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,17452(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17452);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E03EB0;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,17456(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17456);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E03EE4;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,17460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17460);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E03F1C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,17464(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17464);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,304
	ctx.r4.s64 = ctx.r11.s64 + 304;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e203c8
	ctx.lr = 0x82E03F54;
	sub_82E203C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E03F70;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e03de0
	if (ctx.cr6.eq) goto loc_82E03DE0;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// subf r4,r11,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x82e20528
	ctx.lr = 0x82E03F94;
	sub_82E20528(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E03FA8"))) PPC_WEAK_FUNC(sub_82E03FA8);
PPC_FUNC_IMPL(__imp__sub_82E03FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E03FB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,14563
	ctx.r9.s64 = 954400768;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// ori r9,r9,36409
	ctx.r9.u64 = ctx.r9.u64 | 36409;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r10.u32);
	// mulhwu r11,r26,r9
	ctx.r11.u64 = (uint64_t(ctx.r26.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r4,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r4.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r26,440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 440, ctx.r26.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb4a20
	ctx.lr = 0x82E0400C;
	sub_82CB4A20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e0403c
	if (!ctx.cr6.eq) goto loc_82E0403C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82E0403C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e04100
	if (!ctx.cr6.gt) goto loc_82E04100;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
loc_82E04060:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,17476(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17476);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e203c8
	ctx.lr = 0x82E04070;
	sub_82E203C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04140
	if (ctx.cr6.eq) goto loc_82E04140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// stdx r10,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,17480(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17480);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e203c8
	ctx.lr = 0x82E0409C;
	sub_82E203C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04140
	if (ctx.cr6.eq) goto loc_82E04140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,17484(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17484);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E040CC;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04140
	if (ctx.cr6.eq) goto loc_82E04140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e04060
	if (ctx.cr6.lt) goto loc_82E04060;
loc_82E04100:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r11,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e04134
	if (ctx.cr6.eq) goto loc_82E04134;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20528
	ctx.lr = 0x82E04128;
	sub_82E20528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82e04138
	if (ctx.cr6.eq) goto loc_82E04138;
loc_82E04134:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E04138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82E04140:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0414C"))) PPC_WEAK_FUNC(sub_82E0414C);
PPC_FUNC_IMPL(__imp__sub_82E0414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E04150"))) PPC_WEAK_FUNC(sub_82E04150);
PPC_FUNC_IMPL(__imp__sub_82E04150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E04158;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20468
	ctx.lr = 0x82E04170;
	sub_82E20468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e04184
	if (!ctx.cr6.eq) goto loc_82E04184;
loc_82E04178:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E04184:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e041ec
	if (ctx.cr6.eq) goto loc_82E041EC;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E04198;
	sub_82CB0FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// bne cr6,0x82e041c0
	if (!ctx.cr6.eq) goto loc_82E041C0;
loc_82E041A8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E041C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E041D0;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04178
	if (ctx.cr6.eq) goto loc_82E04178;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// b 0x82e041f4
	goto loc_82E041F4;
loc_82E041EC:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82E041F4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20468
	ctx.lr = 0x82E04208;
	sub_82E20468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04178
	if (ctx.cr6.eq) goto loc_82E04178;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e042f0
	if (ctx.cr6.eq) goto loc_82E042F0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E04224;
	sub_82CB0FE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// beq cr6,0x82e041a8
	if (ctx.cr6.eq) goto loc_82E041A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e042f4
	if (!ctx.cr6.gt) goto loc_82E042F4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82E04244:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20468
	ctx.lr = 0x82E04258;
	sub_82E20468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04178
	if (ctx.cr6.eq) goto loc_82E04178;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e042cc
	if (ctx.cr6.eq) goto loc_82E042CC;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E0427C;
	sub_82CB0FE0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e041a8
	if (ctx.cr6.eq) goto loc_82E041A8;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E042AC;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04178
	if (ctx.cr6.eq) goto loc_82E04178;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// b 0x82e042d0
	goto loc_82E042D0;
loc_82E042CC:
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
loc_82E042D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e04244
	if (ctx.cr6.lt) goto loc_82E04244;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E042F0:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_82E042F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E04300"))) PPC_WEAK_FUNC(sub_82E04300);
PPC_FUNC_IMPL(__imp__sub_82E04300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82E04308;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E04324;
	sub_82CB16F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,17544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17544);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82e20618
	ctx.lr = 0x82E04340;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e04354
	if (!ctx.cr6.eq) goto loc_82E04354;
loc_82E04348:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82E04354:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r25,136
	ctx.r4.s64 = ctx.r25.s64 + 136;
	// lwz r5,17548(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17548);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e203c8
	ctx.lr = 0x82E0436C;
	sub_82E203C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17552(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17552);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E0438C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,144(r25)
	PPC_STORE_U32(ctx.r25.u32 + 144, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,17556(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17556);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e211b0
	ctx.lr = 0x82E043BC;
	sub_82E211B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17560(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17560);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E043DC;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,148(r25)
	PPC_STORE_U32(ctx.r25.u32 + 148, ctx.r3.u32);
	// beq cr6,0x82e04618
	if (ctx.cr6.eq) goto loc_82E04618;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82cb92c0
	ctx.lr = 0x82E043FC;
	sub_82CB92C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,152(r25)
	PPC_STORE_U32(ctx.r25.u32 + 152, ctx.r3.u32);
	// bne cr6,0x82e04420
	if (!ctx.cr6.eq) goto loc_82E04420;
loc_82E04408:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82E04420:
	// lwz r11,148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e04618
	if (!ctx.cr6.gt) goto loc_82E04618;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// lis r21,-32255
	ctx.r21.s64 = -2113863680;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// lis r15,-32255
	ctx.r15.s64 = -2113863680;
	// lis r18,-32255
	ctx.r18.s64 = -2113863680;
	// lis r19,-32255
	ctx.r19.s64 = -2113863680;
	// lis r16,-32255
	ctx.r16.s64 = -2113863680;
	// lis r20,-32255
	ctx.r20.s64 = -2113863680;
	// lis r17,-32255
	ctx.r17.s64 = -2113863680;
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
loc_82E0445C:
	// lwz r11,152(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r31,r23,r11
	ctx.r31.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r5,17516(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17516);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e203c8
	ctx.lr = 0x82E04478;
	sub_82E203C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17520(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17520);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04494;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r31,9
	ctx.r4.s64 = ctx.r31.s64 + 9;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r11,17524(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17524);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E044BC;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17528(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 17528);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E044D8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,17532(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 17532);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04504;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,17536(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 17536);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e211b0
	ctx.lr = 0x82E0452C;
	sub_82E211B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17540(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 17540);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04548;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// beq cr6,0x82e04604
	if (ctx.cr6.eq) goto loc_82E04604;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82cb92c0
	ctx.lr = 0x82E04570;
	sub_82CB92C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x82e04408
	if (ctx.cr6.eq) goto loc_82E04408;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e04604
	if (ctx.cr6.eq) goto loc_82E04604;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82E04590:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r5,17504(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17504);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e203c8
	ctx.lr = 0x82E045AC;
	sub_82E203C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17508(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17508);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E045C8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,17512(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17512);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e211b0
	ctx.lr = 0x82E045E8;
	sub_82E211B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04348
	if (ctx.cr6.eq) goto loc_82E04348;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e04590
	if (ctx.cr6.lt) goto loc_82E04590;
loc_82E04604:
	// lwz r11,148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e0445c
	if (ctx.cr6.lt) goto loc_82E0445C;
loc_82E04618:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E04624"))) PPC_WEAK_FUNC(sub_82E04624);
PPC_FUNC_IMPL(__imp__sub_82E04624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E04628"))) PPC_WEAK_FUNC(sub_82E04628);
PPC_FUNC_IMPL(__imp__sub_82E04628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E04630;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,17564(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17564);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04650;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e04664
	if (!ctx.cr6.eq) goto loc_82E04664;
loc_82E04658:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E04664:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17568(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17568);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E0467C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E04690;
	sub_82CB0FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// bne cr6,0x82e046b8
	if (!ctx.cr6.eq) goto loc_82E046B8;
loc_82E046A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E046B8:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e046dc
	if (ctx.cr6.eq) goto loc_82E046DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E046D0;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E046DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stbx r29,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,17572(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17572);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04700;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E04714;
	sub_82CB0FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// beq cr6,0x82e046a0
	if (ctx.cr6.eq) goto loc_82E046A0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e04748
	if (ctx.cr6.eq) goto loc_82E04748;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E0473C;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E04748:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stbx r29,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,17576(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17576);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04768;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r5,17580(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17580);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04788;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r5,17584(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17584);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E047A8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r5,17588(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17588);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E047C8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,17592(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17592);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E047EC;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04658
	if (ctx.cr6.eq) goto loc_82E04658;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82cb0fe0
	ctx.lr = 0x82E047FC;
	sub_82CB0FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// beq cr6,0x82e046a0
	if (ctx.cr6.eq) goto loc_82E046A0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e04830
	if (ctx.cr6.eq) goto loc_82E04830;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E04824;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82e04834
	if (ctx.cr6.eq) goto loc_82E04834;
loc_82E04830:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E04834:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0483C"))) PPC_WEAK_FUNC(sub_82E0483C);
PPC_FUNC_IMPL(__imp__sub_82E0483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E04840"))) PPC_WEAK_FUNC(sub_82E04840);
PPC_FUNC_IMPL(__imp__sub_82E04840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E04848;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04864;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e04878
	if (!ctx.cr6.eq) goto loc_82E04878;
loc_82E0486C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E04878:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E04880:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E04894;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e0486c
	if (ctx.cr6.eq) goto loc_82E0486C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwimi r11,r30,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x82e04880
	if (ctx.cr6.lt) goto loc_82E04880;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20528
	ctx.lr = 0x82E048C4;
	sub_82E20528(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E048D8"))) PPC_WEAK_FUNC(sub_82E048D8);
PPC_FUNC_IMPL(__imp__sub_82E048D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E048E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r4,15
	ctx.r9.s64 = ctx.r4.s64 + 15;
	// mulli r10,r4,292
	ctx.r10.s64 = ctx.r4.s64 * 292;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwzx r28,r9,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1176, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20370
	ctx.lr = 0x82E0491C;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0492c
	if (!ctx.cr6.eq) goto loc_82E0492C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E0492C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,1180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1180, ctx.r11.u32);
	// beq cr6,0x82e04974
	if (ctx.cr6.eq) goto loc_82E04974;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e04974
	if (!ctx.cr6.gt) goto loc_82E04974;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E04954:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,1136(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e04954
	if (ctx.cr6.lt) goto loc_82E04954;
loc_82E04974:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E04980"))) PPC_WEAK_FUNC(sub_82E04980);
PPC_FUNC_IMPL(__imp__sub_82E04980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E04988;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r28,23
	ctx.r9.s64 = ctx.r28.s64 + 23;
	// mulli r10,r28,292
	ctx.r10.s64 = ctx.r28.s64 * 292;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,1176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1176, ctx.r8.u32);
	// stw r29,1180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1180, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e04a0c
	if (!ctx.cr6.gt) goto loc_82E04A0C;
loc_82E049D4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e20370
	ctx.lr = 0x82E049E4;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04a40
	if (ctx.cr6.eq) goto loc_82E04A40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e049d4
	if (ctx.cr6.lt) goto loc_82E049D4;
loc_82E04A0C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82e04a34
	if (ctx.cr6.eq) goto loc_82E04A34;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r28,15
	ctx.r10.s64 = ctx.r28.s64 + 15;
	// lwz r4,1180(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1180);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E04A34;
	sub_82CB1160(ctx, base);
loc_82E04A34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82E04A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E04A4C"))) PPC_WEAK_FUNC(sub_82E04A4C);
PPC_FUNC_IMPL(__imp__sub_82E04A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E04A50"))) PPC_WEAK_FUNC(sub_82E04A50);
PPC_FUNC_IMPL(__imp__sub_82E04A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E04A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e04ab8
	if (ctx.cr6.eq) goto loc_82E04AB8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E04A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04ab8
	if (ctx.cr6.eq) goto loc_82E04AB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E04AB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e04b70
	if (!ctx.cr6.gt) goto loc_82E04B70;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,3608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e04ae0
	if (ctx.cr6.eq) goto loc_82E04AE0;
	// lwz r11,6128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6128);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x82e04b70
	if (ctx.cr6.gt) goto loc_82E04B70;
loc_82E04AE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E04B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82e04b70
	if (ctx.cr6.eq) goto loc_82E04B70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e04b4c
	if (!ctx.cr6.eq) goto loc_82E04B4C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82e04b58
	if (ctx.cr6.eq) goto loc_82E04B58;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e04b4c
	if (ctx.cr6.eq) goto loc_82E04B4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E04B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e04b58
	if (!ctx.cr6.eq) goto loc_82E04B58;
loc_82E04B4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E04B58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E04B70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E04B88"))) PPC_WEAK_FUNC(sub_82E04B88);
PPC_FUNC_IMPL(__imp__sub_82E04B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E04B90;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,3608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e04c74
	if (ctx.cr6.eq) goto loc_82E04C74;
	// ld r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r3,r11,3728
	ctx.r3.s64 = ctx.r11.s64 + 3728;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2384
	ctx.r5.s64 = 2384;
	// ld r28,6120(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6120);
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E04BCC;
	sub_82CB1160(ctx, base);
	// cmpld cr6,r29,r28
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r28.u64, ctx.xer);
	// bgt cr6,0x82e04c68
	if (ctx.cr6.gt) goto loc_82E04C68;
	// cmpld cr6,r28,r27
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r27.u64, ctx.xer);
	// bge cr6,0x82e04c68
	if (!ctx.cr6.lt) goto loc_82E04C68;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r8,3608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3608, ctx.r8.u32);
	// beq cr6,0x82e04cc8
	if (ctx.cr6.eq) goto loc_82E04CC8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e04c34
	if (ctx.cr6.eq) goto loc_82E04C34;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r7,r9,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r9.s64;
loc_82E04C18:
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82e04c18
	if (!ctx.cr6.eq) goto loc_82E04C18;
loc_82E04C34:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrldi r10,r6,32
	ctx.r10.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,3728(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3728);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r9,3728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3728, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r9,3752(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3752);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,3752(r11)
	PPC_STORE_U64(ctx.r11.u32 + 3752, ctx.r10.u64);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,3728
	ctx.r4.s64 = ctx.r11.s64 + 3728;
	// b 0x82e04cd4
	goto loc_82E04CD4;
loc_82E04C68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E04C74:
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e04c84
	if (!ctx.cr6.eq) goto loc_82E04C84;
	// stw r10,3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3600, ctx.r10.u32);
loc_82E04C84:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,3600(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3600);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e04cc8
	if (ctx.cr6.eq) goto loc_82E04CC8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,3612
	ctx.r3.s64 = ctx.r11.s64 + 3612;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82e21f60
	ctx.lr = 0x82E04CB4;
	sub_82E21F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e04cc8
	if (!ctx.cr6.eq) goto loc_82E04CC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E04CC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82E04CD4:
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E04CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E04CF0"))) PPC_WEAK_FUNC(sub_82E04CF0);
PPC_FUNC_IMPL(__imp__sub_82E04CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e04d14
	if (!ctx.cr6.eq) goto loc_82E04D14;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82E04D14:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,6128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E04D30"))) PPC_WEAK_FUNC(sub_82E04D30);
PPC_FUNC_IMPL(__imp__sub_82E04D30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e04d94
	if (ctx.cr6.eq) goto loc_82E04D94;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82cb7b50
	ctx.lr = 0x82E04D6C;
	sub_82CB7B50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82cb7728
	ctx.lr = 0x82E04D7C;
	sub_82CB7728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e04d94
	if (!ctx.cr6.eq) goto loc_82E04D94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82e04d98
	goto loc_82E04D98;
loc_82E04D94:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82E04D98:
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

__attribute__((alias("__imp__sub_82E04DB0"))) PPC_WEAK_FUNC(sub_82E04DB0);
PPC_FUNC_IMPL(__imp__sub_82E04DB0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82caff58
	ctx.lr = 0x82E04DD4;
	sub_82CAFF58(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e04de4
	if (!ctx.cr6.eq) goto loc_82E04DE4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82e04e00
	goto loc_82E04E00;
loc_82E04DE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r4,r30,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb7c40
	ctx.lr = 0x82E04DF4;
	sub_82CB7C40(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82E04E00:
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

__attribute__((alias("__imp__sub_82E04E18"))) PPC_WEAK_FUNC(sub_82E04E18);
PPC_FUNC_IMPL(__imp__sub_82E04E18) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82caff58
	ctx.lr = 0x82E04E3C;
	sub_82CAFF58(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e04e4c
	if (!ctx.cr6.eq) goto loc_82E04E4C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82e04e70
	goto loc_82E04E70;
loc_82E04E4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb7f78
	ctx.lr = 0x82E04E54;
	sub_82CB7F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82e04e64
	if (!ctx.cr6.lt) goto loc_82E04E64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e04e70
	goto loc_82E04E70;
loc_82E04E64:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82E04E70:
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

__attribute__((alias("__imp__sub_82E04E88"))) PPC_WEAK_FUNC(sub_82E04E88);
PPC_FUNC_IMPL(__imp__sub_82E04E88) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82caff58
	ctx.lr = 0x82E04EAC;
	sub_82CAFF58(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e04ebc
	if (!ctx.cr6.eq) goto loc_82E04EBC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82e04ef0
	goto loc_82E04EF0;
loc_82E04EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb8d38
	ctx.lr = 0x82E04EC8;
	sub_82CB8D38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ff1a78
	ctx.lr = 0x82E04ED0;
	sub_82FF1A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e04ee0
	if (ctx.cr6.eq) goto loc_82E04EE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e04ef0
	goto loc_82E04EF0;
loc_82E04EE0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82E04EF0:
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

__attribute__((alias("__imp__sub_82E04F08"))) PPC_WEAK_FUNC(sub_82E04F08);
PPC_FUNC_IMPL(__imp__sub_82E04F08) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82cb76d0
	ctx.lr = 0x82E04F20;
	sub_82CB76D0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E04F3C"))) PPC_WEAK_FUNC(sub_82E04F3C);
PPC_FUNC_IMPL(__imp__sub_82E04F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E04F40"))) PPC_WEAK_FUNC(sub_82E04F40);
PPC_FUNC_IMPL(__imp__sub_82E04F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E04F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb92c0
	ctx.lr = 0x82E04F58;
	sub_82CB92C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e0500c
	if (ctx.cr6.eq) goto loc_82E0500C;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb92c0
	ctx.lr = 0x82E04F70;
	sub_82CB92C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e05004
	if (ctx.cr6.eq) goto loc_82E05004;
	// li r4,6136
	ctx.r4.s64 = 6136;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb92c0
	ctx.lr = 0x82E04F88;
	sub_82CB92C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82e04ffc
	if (ctx.cr6.eq) goto loc_82E04FFC;
	// bl 0x82e1fd88
	ctx.lr = 0x82E04F98;
	sub_82E1FD88(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e04ff8
	if (ctx.cr6.eq) goto loc_82E04FF8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,1128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1128, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,17472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17472);
	// lwz r10,1128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1128);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82cb0fe0
	ctx.lr = 0x82E04FD4;
	sub_82CB0FE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e05018
	if (!ctx.cr6.eq) goto loc_82E05018;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e21148
	ctx.lr = 0x82E04FF4;
	sub_82E21148(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82E04FF8:
	// bl 0x82cb3d50
	ctx.lr = 0x82E04FFC;
	sub_82CB3D50(ctx, base);
loc_82E04FFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb3d50
	ctx.lr = 0x82E05004;
	sub_82CB3D50(ctx, base);
loc_82E05004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3d50
	ctx.lr = 0x82E0500C;
	sub_82CB3D50(ctx, base);
loc_82E0500C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E05018:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3568, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3572, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3576, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3580, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3584, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3588, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3592, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3596, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r30.u32);
loc_82E050F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x82e1f968
	ctx.lr = 0x82E05104;
	sub_82E1F968(ctx, base);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r29,96
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 96, ctx.xer);
	// blt cr6,0x82e050f4
	if (ctx.cr6.lt) goto loc_82E050F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// bl 0x82e03ab8
	ctx.lr = 0x82E05120;
	sub_82E03AB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E05138"))) PPC_WEAK_FUNC(sub_82E05138);
PPC_FUNC_IMPL(__imp__sub_82E05138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E05140;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82e05180
	if (ctx.cr6.eq) goto loc_82E05180;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E05180:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e05198
	if (ctx.cr6.eq) goto loc_82E05198;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E05198:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e05314
	if (ctx.cr6.eq) goto loc_82E05314;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e05314
	if (ctx.cr6.eq) goto loc_82E05314;
	// lwz r23,244(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82e05314
	if (ctx.cr6.eq) goto loc_82E05314;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e051d4
	if (ctx.cr6.eq) goto loc_82E051D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e05314
	if (ctx.cr6.eq) goto loc_82E05314;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e05314
	if (ctx.cr6.eq) goto loc_82E05314;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82e05314
	if (ctx.cr6.eq) goto loc_82E05314;
loc_82E051D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,3524
	ctx.r3.s64 = ctx.r11.s64 + 3524;
	// bl 0x82e234a0
	ctx.lr = 0x82E051E0;
	sub_82E234A0(ctx, base);
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r8,r10,12704
	ctx.r8.s64 = ctx.r10.s64 + 12704;
	// addi r7,r11,12832
	ctx.r7.s64 = ctx.r11.s64 + 12832;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// addi r9,r11,12704
	ctx.r9.s64 = ctx.r11.s64 + 12704;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// addi r10,r10,12704
	ctx.r10.s64 = ctx.r10.s64 + 12704;
	// addi r4,r11,19024
	ctx.r4.s64 = ctx.r11.s64 + 19024;
	// stw r7,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e1fd98
	ctx.lr = 0x82E05238;
	sub_82E1FD98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05258
	if (!ctx.cr6.eq) goto loc_82E05258;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E05258:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r26,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r26.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r25.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r24,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r23,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r23.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r11,240(r10)
	PPC_STORE_U64(ctx.r10.u32 + 240, ctx.r11.u64);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,3520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3520, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r10,3600(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3600, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,3608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3608, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,3604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3604, ctx.r8.u32);
	// bl 0x82e03988
	ctx.lr = 0x82E052FC;
	sub_82E03988(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E05314:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E05320"))) PPC_WEAK_FUNC(sub_82E05320);
PPC_FUNC_IMPL(__imp__sub_82E05320) {
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
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82e05138
	ctx.lr = 0x82E0534C;
	sub_82E05138(ctx, base);
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

__attribute__((alias("__imp__sub_82E05360"))) PPC_WEAK_FUNC(sub_82E05360);
PPC_FUNC_IMPL(__imp__sub_82E05360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0537C"))) PPC_WEAK_FUNC(sub_82E0537C);
PPC_FUNC_IMPL(__imp__sub_82E0537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E05380"))) PPC_WEAK_FUNC(sub_82E05380);
PPC_FUNC_IMPL(__imp__sub_82E05380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E05388;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82e053cc
	if (ctx.cr6.eq) goto loc_82E053CC;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E053CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e054b8
	if (ctx.cr6.eq) goto loc_82E054B8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e054b8
	if (ctx.cr6.eq) goto loc_82E054B8;
	// bl 0x82caff58
	ctx.lr = 0x82E053E0;
	sub_82CAFF58(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e05408
	if (!ctx.cr6.eq) goto loc_82E05408;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// bl 0x82caff58
	ctx.lr = 0x82E053F4;
	sub_82CAFF58(ctx, base);
	// bl 0x82cb8d38
	ctx.lr = 0x82E053F8;
	sub_82CB8D38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cd5120
	ctx.lr = 0x82E05400;
	sub_82CD5120(ctx, base);
	// bl 0x82caff58
	ctx.lr = 0x82E05404;
	sub_82CAFF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E05408:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// bl 0x82caff58
	ctx.lr = 0x82E05414;
	sub_82CAFF58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e0542c
	if (!ctx.cr6.eq) goto loc_82E0542C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82e05434
	goto loc_82E05434;
loc_82E0542C:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// addi r29,r11,20104
	ctx.r29.s64 = ctx.r11.s64 + 20104;
loc_82E05434:
	// bl 0x82caff58
	ctx.lr = 0x82E05438;
	sub_82CAFF58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e05450
	if (!ctx.cr6.eq) goto loc_82E05450;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82e05458
	goto loc_82E05458;
loc_82E05450:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// addi r30,r11,19992
	ctx.r30.s64 = ctx.r11.s64 + 19992;
loc_82E05458:
	// bl 0x82caff58
	ctx.lr = 0x82E0545C;
	sub_82CAFF58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e05474
	if (!ctx.cr6.eq) goto loc_82E05474;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e0547c
	goto loc_82E0547C;
loc_82E05474:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// addi r5,r11,19888
	ctx.r5.s64 = ctx.r11.s64 + 19888;
loc_82E0547C:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r8,20232
	ctx.r8.s64 = ctx.r8.s64 + 20232;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,19760
	ctx.r4.s64 = ctx.r11.s64 + 19760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05138
	ctx.lr = 0x82E054B0;
	sub_82E05138(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E054B8:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E054CC"))) PPC_WEAK_FUNC(sub_82E054CC);
PPC_FUNC_IMPL(__imp__sub_82E054CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E054D0"))) PPC_WEAK_FUNC(sub_82E054D0);
PPC_FUNC_IMPL(__imp__sub_82E054D0) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82e05380
	sub_82E05380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E054D8"))) PPC_WEAK_FUNC(sub_82E054D8);
PPC_FUNC_IMPL(__imp__sub_82E054D8) {
	PPC_FUNC_PROLOGUE();
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82e05380
	sub_82E05380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E054E0"))) PPC_WEAK_FUNC(sub_82E054E0);
PPC_FUNC_IMPL(__imp__sub_82E054E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E054E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82e0552c
	if (ctx.cr6.eq) goto loc_82E0552C;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E0552C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e05594
	if (ctx.cr6.eq) goto loc_82E05594;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e05594
	if (ctx.cr6.eq) goto loc_82E05594;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e05554
	if (ctx.cr6.eq) goto loc_82E05554;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,6224
	ctx.r4.s64 = ctx.r11.s64 + 6224;
	// bl 0x82cb7178
	ctx.lr = 0x82E05550;
	sub_82CB7178(ctx, base);
	// b 0x82e05558
	goto loc_82E05558;
loc_82E05554:
	// bl 0x82caff58
	ctx.lr = 0x82E05558;
	sub_82CAFF58(ctx, base);
loc_82E05558:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0556c
	if (!ctx.cr6.eq) goto loc_82E0556C;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E0556C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05380
	ctx.lr = 0x82E0558C;
	sub_82E05380(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05594:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E055A8"))) PPC_WEAK_FUNC(sub_82E055A8);
PPC_FUNC_IMPL(__imp__sub_82E055A8) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82e054e0
	sub_82E054E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E055B0"))) PPC_WEAK_FUNC(sub_82E055B0);
PPC_FUNC_IMPL(__imp__sub_82E055B0) {
	PPC_FUNC_PROLOGUE();
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82e054e0
	sub_82E054E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E055B8"))) PPC_WEAK_FUNC(sub_82E055B8);
PPC_FUNC_IMPL(__imp__sub_82E055B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E055C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82e055ec
	if (!ctx.cr6.eq) goto loc_82E055EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E055EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,3612
	ctx.r4.s64 = ctx.r11.s64 + 3612;
	// addi r3,r11,3708
	ctx.r3.s64 = ctx.r11.s64 + 3708;
	// bl 0x82e22068
	ctx.lr = 0x82E055FC;
	sub_82E22068(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e0562c
	if (ctx.cr6.eq) goto loc_82E0562C;
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e0562c
	if (ctx.cr6.eq) goto loc_82E0562C;
	// bl 0x82cb3d50
	ctx.lr = 0x82E0561C;
	sub_82CB3D50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r30.u32);
loc_82E0562C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e1fe00
	ctx.lr = 0x82E05638;
	sub_82E1FE00(ctx, base);
	// li r29,60
	ctx.r29.s64 = 60;
loc_82E0563C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e05660
	if (ctx.cr6.eq) goto loc_82E05660;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82cb3d50
	ctx.lr = 0x82E05658;
	sub_82CB3D50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r30,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82E05660:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r29,3508
	ctx.r28.s64 = ctx.r29.s64 + 3508;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e05690
	if (ctx.cr6.eq) goto loc_82E05690;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82cb3d50
	ctx.lr = 0x82E0567C;
	sub_82CB3D50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r30,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82E05690:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,92
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 92, ctx.xer);
	// blt cr6,0x82e0563c
	if (ctx.cr6.lt) goto loc_82E0563C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e056e0
	if (ctx.cr6.eq) goto loc_82E056E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82caff58
	ctx.lr = 0x82E056C8;
	sub_82CAFF58(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82e056d8
	if (ctx.cr6.eq) goto loc_82E056D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb72c0
	ctx.lr = 0x82E056D8;
	sub_82CB72C0(ctx, base);
loc_82E056D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
loc_82E056E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0572c
	if (ctx.cr6.eq) goto loc_82E0572C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r10,312
	ctx.r11.s64 = ctx.r10.s64 + 312;
	// addi r10,r10,3708
	ctx.r10.s64 = ctx.r10.s64 + 3708;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E05700:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e05720
	if (!ctx.cr0.eq) goto loc_82E05720;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e05700
	if (!ctx.cr6.eq) goto loc_82E05700;
loc_82E05720:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82e0572c
	if (ctx.cr6.eq) goto loc_82E0572C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82E0572C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,3608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3608, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// bl 0x82cb16f0
	ctx.lr = 0x82E05790;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,9
	ctx.r10.s64 = 9;
	// cntlzw r9,r27
	ctx.r9.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E057C8"))) PPC_WEAK_FUNC(sub_82E057C8);
PPC_FUNC_IMPL(__imp__sub_82E057C8) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e057fc
	if (!ctx.cr6.eq) goto loc_82E057FC;
loc_82E057F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e05858
	goto loc_82E05858;
loc_82E057FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E05818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e057f4
	if (!ctx.cr6.eq) goto loc_82E057F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20100
	ctx.lr = 0x82E0582C;
	sub_82E20100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e057f4
	if (ctx.cr6.eq) goto loc_82E057F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20128
	ctx.lr = 0x82E05840;
	sub_82E20128(ctx, base);
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82E05858:
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

__attribute__((alias("__imp__sub_82E05870"))) PPC_WEAK_FUNC(sub_82E05870);
PPC_FUNC_IMPL(__imp__sub_82E05870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E05878;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r22,r11,-16592
	ctx.r22.s64 = ctx.r11.s64 + -16592;
	// li r23,1
	ctx.r23.s64 = 1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r21,r11,17424
	ctx.r21.s64 = ctx.r11.s64 + 17424;
	// li r24,255
	ctx.r24.s64 = 255;
loc_82E058A8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,3520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e058cc
	if (ctx.cr6.eq) goto loc_82E058CC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,3566(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3566);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r25,3520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3520, ctx.r25.u32);
	// b 0x82e058e4
	goto loc_82E058E4;
loc_82E058CC:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e20150
	ctx.lr = 0x82E058DC;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e059a8
	if (ctx.cr6.eq) goto loc_82E059A8;
loc_82E058E4:
	// lbzx r10,r29,r21
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r21.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e0591c
	if (!ctx.cr6.eq) goto loc_82E0591C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82e058a8
	if (ctx.cr6.lt) goto loc_82E058A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82E0591C:
	// lbzx r10,r27,r22
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r22.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e059b4
	if (!ctx.cr6.eq) goto loc_82E059B4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bne cr6,0x82e058a8
	if (!ctx.cr6.eq) goto loc_82E058A8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E0594C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e059a8
	if (ctx.cr6.eq) goto loc_82E059A8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E0595C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E05970;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e059a8
	if (ctx.cr6.eq) goto loc_82E059A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwimi r11,r30,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x82e0595c
	if (ctx.cr6.lt) goto loc_82E0595C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20528
	ctx.lr = 0x82E059A0;
	sub_82E20528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e058a8
	if (!ctx.cr6.eq) goto loc_82E058A8;
loc_82E059A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82E059B4:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82e05a10
	if (!ctx.cr6.eq) goto loc_82E05A10;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r24,3564(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3564, ctx.r24.u8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E059DC;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e059a8
	if (ctx.cr6.eq) goto loc_82E059A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82e05a04
	if (!ctx.cr6.eq) goto loc_82E05A04;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stb r24,3566(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3566, ctx.r24.u8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r23,3520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3520, ctx.r23.u32);
	// b 0x82e05a10
	goto loc_82E05A10;
loc_82E05A04:
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r10,248
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 248, ctx.xer);
	// beq cr6,0x82e05a50
	if (ctx.cr6.eq) goto loc_82E05A50;
loc_82E05A10:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82e058a8
	if (ctx.cr6.eq) goto loc_82E058A8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e05a48
	if (!ctx.cr6.eq) goto loc_82E05A48;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E05A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E05A48:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82e058a8
	goto loc_82E058A8;
loc_82E05A50:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3565(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3565, ctx.r11.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E05A70"))) PPC_WEAK_FUNC(sub_82E05A70);
PPC_FUNC_IMPL(__imp__sub_82E05A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E05A78;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,17596(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17596);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E05A98;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e05d1c
	if (ctx.cr6.eq) goto loc_82E05D1C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r5,17600(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17600);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82e20150
	ctx.lr = 0x82E05AC8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e05d1c
	if (ctx.cr6.eq) goto loc_82E05D1C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,17604(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17604);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E05AE8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e05d1c
	if (ctx.cr6.eq) goto loc_82E05D1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e05bb0
	if (!ctx.cr6.eq) goto loc_82E05BB0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e03d88
	ctx.lr = 0x82E05B10;
	sub_82E03D88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e05d1c
	if (ctx.cr6.eq) goto loc_82E05D1C;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,15596
	ctx.r10.s64 = ctx.r11.s64 + 15596;
	// stw r8,248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 248, ctx.r8.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E05B38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e05b58
	if (!ctx.cr0.eq) goto loc_82E05B58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e05b38
	if (!ctx.cr6.eq) goto loc_82E05B38;
loc_82E05B58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82e05b68
	if (!ctx.cr6.eq) goto loc_82E05B68;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r27,3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3600, ctx.r27.u32);
loc_82E05B68:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,3608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e05fb0
	if (!ctx.cr6.eq) goto loc_82E05FB0;
	// lwz r10,608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e05fb0
	if (ctx.cr6.eq) goto loc_82E05FB0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e05fb0
	if (ctx.cr6.eq) goto loc_82E05FB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E05BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e05fb0
	goto loc_82E05FB0;
loc_82E05BB0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e05c28
	if (!ctx.cr6.eq) goto loc_82E05C28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e03fa8
	ctx.lr = 0x82E05BC8;
	sub_82E03FA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e05d1c
	if (ctx.cr6.eq) goto loc_82E05D1C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e05fb0
	if (!ctx.cr6.eq) goto loc_82E05FB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e05fb0
	if (ctx.cr6.eq) goto loc_82E05FB0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e05fb0
	if (ctx.cr6.eq) goto loc_82E05FB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,432
	ctx.r4.s64 = ctx.r11.s64 + 432;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E05C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e05fb0
	goto loc_82E05FB0;
loc_82E05C28:
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x82e05d00
	if (!ctx.cr6.eq) goto loc_82E05D00;
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,17472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17472);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82e20618
	ctx.lr = 0x82E05C74;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e05d1c
	if (ctx.cr6.eq) goto loc_82E05D1C;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,17472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17472);
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r4,1124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// subf r30,r8,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r8.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e05cfc
	if (ctx.cr6.eq) goto loc_82E05CFC;
	// lwz r6,1120(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82E05CA0:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e05cd8
	if (ctx.cr6.eq) goto loc_82E05CD8;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82E05CB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e05cd8
	if (!ctx.cr0.eq) goto loc_82E05CD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82e05cb8
	if (!ctx.cr6.eq) goto loc_82E05CB8;
loc_82E05CD8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82e05cf4
	if (ctx.cr6.eq) goto loc_82E05CF4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82e05ca0
	if (ctx.cr6.lt) goto loc_82E05CA0;
	// b 0x82e05cfc
	goto loc_82E05CFC;
loc_82E05CF4:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82E05CFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E05D00:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e05d28
	if (ctx.cr6.eq) goto loc_82E05D28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82e20528
	ctx.lr = 0x82E05D14;
	sub_82E20528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05fb0
	if (!ctx.cr6.eq) goto loc_82E05FB0;
loc_82E05D1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05D28:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82e05e38
	if (ctx.cr6.gt) goto loc_82E05E38;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,23880
	ctx.r12.s64 = ctx.r12.s64 + 23880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E05E60;
	case 1:
		goto loc_82E05D64;
	case 2:
		goto loc_82E05D80;
	case 3:
		goto loc_82E05E60;
	case 4:
		goto loc_82E05DE4;
	case 5:
		goto loc_82E05E00;
	case 6:
		goto loc_82E05E1C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,24160(0)
	ctx.r23.u64 = PPC_LOAD_U32(24160);
	// lwz r23,23908(0)
	ctx.r23.u64 = PPC_LOAD_U32(23908);
	// lwz r23,23936(0)
	ctx.r23.u64 = PPC_LOAD_U32(23936);
	// lwz r23,24160(0)
	ctx.r23.u64 = PPC_LOAD_U32(24160);
	// lwz r23,24036(0)
	ctx.r23.u64 = PPC_LOAD_U32(24036);
	// lwz r23,24064(0)
	ctx.r23.u64 = PPC_LOAD_U32(24064);
	// lwz r23,24092(0)
	ctx.r23.u64 = PPC_LOAD_U32(24092);
loc_82E05D64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82e20528
	ctx.lr = 0x82E05D70;
	sub_82E20528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05e5c
	if (!ctx.cr6.eq) goto loc_82E05E5C;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05D80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e05dd8
	if (ctx.cr6.eq) goto loc_82E05DD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E05D90;
	sub_82CB0FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
loc_82E05D98:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e05db8
	if (!ctx.cr6.eq) goto loc_82E05DB8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05DB8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20618
	ctx.lr = 0x82E05DC8;
	sub_82E20618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05e5c
	if (!ctx.cr6.eq) goto loc_82E05E5C;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05DD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// b 0x82e05e64
	goto loc_82E05E64;
loc_82E05DE4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e04150
	ctx.lr = 0x82E05DF0;
	sub_82E04150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05e5c
	if (!ctx.cr6.eq) goto loc_82E05E5C;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05E00:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e04300
	ctx.lr = 0x82E05E0C;
	sub_82E04300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05e5c
	if (!ctx.cr6.eq) goto loc_82E05E5C;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05E1C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e04628
	ctx.lr = 0x82E05E28;
	sub_82E04628(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05e5c
	if (!ctx.cr6.eq) goto loc_82E05E5C;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E05E38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e05e54
	if (ctx.cr6.eq) goto loc_82E05E54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0fe0
	ctx.lr = 0x82E05E48;
	sub_82CB0FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// b 0x82e05d98
	goto loc_82E05D98;
loc_82E05E54:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// b 0x82e05e60
	goto loc_82E05E60;
loc_82E05E5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E05E60:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82E05E64:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,3608(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82e05ea4
	if (!ctx.cr6.eq) goto loc_82E05EA4;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e05ea4
	if (ctx.cr6.eq) goto loc_82E05EA4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E05E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82E05EA4:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82e05fa0
	if (ctx.cr6.gt) goto loc_82E05FA0;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,24260
	ctx.r12.s64 = ctx.r12.s64 + 24260;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E05FA0;
	case 1:
		goto loc_82E05FB0;
	case 2:
		goto loc_82E05FA4;
	case 3:
		goto loc_82E05FA0;
	case 4:
		goto loc_82E05EE0;
	case 5:
		goto loc_82E05F34;
	case 6:
		goto loc_82E05F7C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,24480(0)
	ctx.r23.u64 = PPC_LOAD_U32(24480);
	// lwz r23,24496(0)
	ctx.r23.u64 = PPC_LOAD_U32(24496);
	// lwz r23,24484(0)
	ctx.r23.u64 = PPC_LOAD_U32(24484);
	// lwz r23,24480(0)
	ctx.r23.u64 = PPC_LOAD_U32(24480);
	// lwz r23,24288(0)
	ctx.r23.u64 = PPC_LOAD_U32(24288);
	// lwz r23,24372(0)
	ctx.r23.u64 = PPC_LOAD_U32(24372);
	// lwz r23,24444(0)
	ctx.r23.u64 = PPC_LOAD_U32(24444);
loc_82E05EE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e05eec
	if (ctx.cr6.eq) goto loc_82E05EEC;
	// bl 0x82cb3d50
	ctx.lr = 0x82E05EEC;
	sub_82CB3D50(ctx, base);
loc_82E05EEC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e05f2c
	if (ctx.cr6.eq) goto loc_82E05F2C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82E05F00:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e05f1c
	if (ctx.cr6.eq) goto loc_82E05F1C;
	// bl 0x82cb3d50
	ctx.lr = 0x82E05F18;
	sub_82CB3D50(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82E05F1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e05f00
	if (ctx.cr6.lt) goto loc_82E05F00;
loc_82E05F2C:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82e05fa4
	goto loc_82E05FA4;
loc_82E05F34:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e05f74
	if (ctx.cr6.eq) goto loc_82E05F74;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82E05F48:
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e05f64
	if (ctx.cr6.eq) goto loc_82E05F64;
	// bl 0x82cb3d50
	ctx.lr = 0x82E05F60;
	sub_82CB3D50(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
loc_82E05F64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e05f48
	if (ctx.cr6.lt) goto loc_82E05F48;
loc_82E05F74:
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// b 0x82e05fa4
	goto loc_82E05FA4;
loc_82E05F7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e05f88
	if (ctx.cr6.eq) goto loc_82E05F88;
	// bl 0x82cb3d50
	ctx.lr = 0x82E05F88;
	sub_82CB3D50(ctx, base);
loc_82E05F88:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e05f98
	if (ctx.cr6.eq) goto loc_82E05F98;
	// bl 0x82cb3d50
	ctx.lr = 0x82E05F98;
	sub_82CB3D50(ctx, base);
loc_82E05F98:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x82e05fa4
	goto loc_82E05FA4;
loc_82E05FA0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82E05FA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e05fb0
	if (ctx.cr6.eq) goto loc_82E05FB0;
	// bl 0x82cb3d50
	ctx.lr = 0x82E05FB0;
	sub_82CB3D50(ctx, base);
loc_82E05FB0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82e05fe4
	if (ctx.cr6.eq) goto loc_82E05FE4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,6112
	ctx.r4.s64 = ctx.r11.s64 + 6112;
	// bl 0x82e057c8
	ctx.lr = 0x82E05FC8;
	sub_82E057C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e05fd8
	if (!ctx.cr6.eq) goto loc_82E05FD8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// std r27,6112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 6112, ctx.r27.u64);
loc_82E05FD8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E05FE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E05FF0"))) PPC_WEAK_FUNC(sub_82E05FF0);
PPC_FUNC_IMPL(__imp__sub_82E05FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E05FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e06048
	if (ctx.cr6.eq) goto loc_82E06048;
	// ld r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 304);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// ble cr6,0x82e06048
	if (!ctx.cr6.gt) goto loc_82E06048;
	// ld r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82e06048
	if (ctx.cr6.lt) goto loc_82E06048;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E06048:
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20100
	ctx.lr = 0x82E06050;
	sub_82E20100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0608c
	if (!ctx.cr6.eq) goto loc_82E0608C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20118
	ctx.lr = 0x82E06064;
	sub_82E20118(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E06078;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0608c
	if (!ctx.cr6.eq) goto loc_82E0608C;
loc_82E06080:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E0608C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,255
	ctx.r30.s64 = 255;
loc_82E06094:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,3520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e060b8
	if (ctx.cr6.eq) goto loc_82E060B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,3566(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3566);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,3520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3520, ctx.r29.u32);
	// b 0x82e060d0
	goto loc_82E060D0;
loc_82E060B8:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e20150
	ctx.lr = 0x82E060C8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06080
	if (ctx.cr6.eq) goto loc_82E06080;
loc_82E060D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82e0612c
	if (!ctx.cr6.eq) goto loc_82E0612C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,3564(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3564, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E060F8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06080
	if (ctx.cr6.eq) goto loc_82E06080;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82e06120
	if (!ctx.cr6.eq) goto loc_82E06120;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,3566(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3566, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,3520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3520, ctx.r27.u32);
	// b 0x82e0612c
	goto loc_82E0612C;
loc_82E06120:
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r10,248
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 248, ctx.xer);
	// beq cr6,0x82e06168
	if (ctx.cr6.eq) goto loc_82E06168;
loc_82E0612C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e06094
	if (ctx.cr6.eq) goto loc_82E06094;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e06160
	if (!ctx.cr6.eq) goto loc_82E06160;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E06160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E06160:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82e06094
	goto loc_82E06094;
loc_82E06168:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3565(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3565, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E06188"))) PPC_WEAK_FUNC(sub_82E06188);
PPC_FUNC_IMPL(__imp__sub_82E06188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E06190;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e061d0
	if (ctx.cr6.eq) goto loc_82E061D0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r9,272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// lwz r10,276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e061d4
	if (!ctx.cr6.eq) goto loc_82E061D4;
loc_82E061D0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E061D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e061f4
	if (ctx.cr6.eq) goto loc_82E061F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e061f8
	if (ctx.cr6.eq) goto loc_82E061F8;
loc_82E061F4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E061F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r23,2
	ctx.r23.s64 = 2;
	// lbz r10,3564(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3564);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lbz r11,3565(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3565);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e06224
	if (ctx.cr6.eq) goto loc_82E06224;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82E06224:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E06228:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E0623C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82e062ec
	if (ctx.cr6.eq) goto loc_82E062EC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x82e06228
	if (ctx.cr6.lt) goto loc_82E06228;
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82e06398
	if (ctx.cr6.gt) goto loc_82E06398;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,25248
	ctx.r12.s64 = ctx.r12.s64 + 25248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E06340;
	case 1:
		goto loc_82E06360;
	case 2:
		goto loc_82E06370;
	case 3:
		goto loc_82E06370;
	case 4:
		goto loc_82E06370;
	case 5:
		goto loc_82E06370;
	case 6:
		goto loc_82E0637C;
	case 7:
		goto loc_82E0637C;
	case 8:
		goto loc_82E06384;
	case 9:
		goto loc_82E06384;
	case 10:
		goto loc_82E06384;
	case 11:
		goto loc_82E06384;
	case 12:
		goto loc_82E06384;
	case 13:
		goto loc_82E06384;
	case 14:
		goto loc_82E06384;
	case 15:
		goto loc_82E06384;
	default:
		__builtin_unreachable();
	}
	// lwz r23,25408(0)
	ctx.r23.u64 = PPC_LOAD_U32(25408);
	// lwz r23,25440(0)
	ctx.r23.u64 = PPC_LOAD_U32(25440);
	// lwz r23,25456(0)
	ctx.r23.u64 = PPC_LOAD_U32(25456);
	// lwz r23,25456(0)
	ctx.r23.u64 = PPC_LOAD_U32(25456);
	// lwz r23,25456(0)
	ctx.r23.u64 = PPC_LOAD_U32(25456);
	// lwz r23,25456(0)
	ctx.r23.u64 = PPC_LOAD_U32(25456);
	// lwz r23,25468(0)
	ctx.r23.u64 = PPC_LOAD_U32(25468);
	// lwz r23,25468(0)
	ctx.r23.u64 = PPC_LOAD_U32(25468);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
	// lwz r23,25476(0)
	ctx.r23.u64 = PPC_LOAD_U32(25476);
loc_82E062E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E062EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r10,3566(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3566, ctx.r10.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,3520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3520, ctx.r28.u32);
loc_82E06300:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0694c
	if (!ctx.cr6.eq) goto loc_82E0694C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0632C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E06340:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e06358
	if (ctx.cr6.eq) goto loc_82E06358;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// stw r10,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r10.u32);
	// b 0x82e06398
	goto loc_82E06398;
loc_82E06358:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// b 0x82e06398
	goto loc_82E06398;
loc_82E06360:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r10,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r10.u32);
	// b 0x82e06398
	goto loc_82E06398;
loc_82E06370:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,576
	ctx.r9.s64 = 576;
	// b 0x82e0638c
	goto loc_82E0638C;
loc_82E0637C:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82e06398
	goto loc_82E06398;
loc_82E06384:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r9,256
	ctx.r9.s64 = 256;
loc_82E0638C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,1136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1136, ctx.r11.u32);
loc_82E06398:
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82e06420
	if (ctx.cr6.gt) goto loc_82E06420;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,25540
	ctx.r12.s64 = ctx.r12.s64 + 25540;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E06404;
	case 1:
		goto loc_82E06464;
	case 2:
		goto loc_82E06464;
	case 3:
		goto loc_82E06464;
	case 4:
		goto loc_82E0646C;
	case 5:
		goto loc_82E06478;
	case 6:
		goto loc_82E06484;
	case 7:
		goto loc_82E06490;
	case 8:
		goto loc_82E0649C;
	case 9:
		goto loc_82E064A8;
	case 10:
		goto loc_82E064B8;
	case 11:
		goto loc_82E064C8;
	case 12:
		goto loc_82E064D8;
	case 13:
		goto loc_82E064D8;
	case 14:
		goto loc_82E064D8;
	case 15:
		goto loc_82E06300;
	default:
		__builtin_unreachable();
	}
	// lwz r23,25604(0)
	ctx.r23.u64 = PPC_LOAD_U32(25604);
	// lwz r23,25700(0)
	ctx.r23.u64 = PPC_LOAD_U32(25700);
	// lwz r23,25700(0)
	ctx.r23.u64 = PPC_LOAD_U32(25700);
	// lwz r23,25700(0)
	ctx.r23.u64 = PPC_LOAD_U32(25700);
	// lwz r23,25708(0)
	ctx.r23.u64 = PPC_LOAD_U32(25708);
	// lwz r23,25720(0)
	ctx.r23.u64 = PPC_LOAD_U32(25720);
	// lwz r23,25732(0)
	ctx.r23.u64 = PPC_LOAD_U32(25732);
	// lwz r23,25744(0)
	ctx.r23.u64 = PPC_LOAD_U32(25744);
	// lwz r23,25756(0)
	ctx.r23.u64 = PPC_LOAD_U32(25756);
	// lwz r23,25768(0)
	ctx.r23.u64 = PPC_LOAD_U32(25768);
	// lwz r23,25784(0)
	ctx.r23.u64 = PPC_LOAD_U32(25784);
	// lwz r23,25800(0)
	ctx.r23.u64 = PPC_LOAD_U32(25800);
	// lwz r23,25816(0)
	ctx.r23.u64 = PPC_LOAD_U32(25816);
	// lwz r23,25816(0)
	ctx.r23.u64 = PPC_LOAD_U32(25816);
	// lwz r23,25816(0)
	ctx.r23.u64 = PPC_LOAD_U32(25816);
	// lwz r23,25344(0)
	ctx.r23.u64 = PPC_LOAD_U32(25344);
loc_82E06404:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e06464
	if (ctx.cr6.eq) goto loc_82E06464;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
loc_82E0641C:
	// stw r10,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
loc_82E06420:
	// lbz r11,115(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82e06500
	if (ctx.cr6.eq) goto loc_82E06500;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r23,1144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1144, ctx.r23.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82e064f4
	if (ctx.cr6.lt) goto loc_82E064F4;
	// beq cr6,0x82e064e8
	if (ctx.cr6.eq) goto loc_82E064E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82e064e0
	if (ctx.cr6.lt) goto loc_82E064E0;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// b 0x82e06518
	goto loc_82E06518;
loc_82E06464:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// b 0x82e06420
	goto loc_82E06420;
loc_82E0646C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,8000
	ctx.r10.s64 = 8000;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E06478:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,16000
	ctx.r10.s64 = 16000;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E06484:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,22050
	ctx.r10.s64 = 22050;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E06490:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,24000
	ctx.r10.s64 = 24000;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E0649C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,32000
	ctx.r10.s64 = 32000;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E064A8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r10,44100
	ctx.r10.u64 = ctx.r10.u64 | 44100;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E064B8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E064C8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r10,30464
	ctx.r10.u64 = ctx.r10.u64 | 30464;
	// b 0x82e0641c
	goto loc_82E0641C;
loc_82E064D8:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// b 0x82e06420
	goto loc_82E06420;
loc_82E064E0:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82e06510
	goto loc_82E06510;
loc_82E064E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r23,1148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1148, ctx.r23.u32);
	// b 0x82e06518
	goto loc_82E06518;
loc_82E064F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,1148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1148, ctx.r28.u32);
	// b 0x82e06518
	goto loc_82E06518;
loc_82E06500:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1144, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E06510:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,1148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1148, ctx.r10.u32);
loc_82E06518:
	// lbz r11,115(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// rlwinm r11,r11,31,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82e065d8
	if (ctx.cr6.gt) goto loc_82E065D8;
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,25924
	ctx.r12.s64 = ctx.r12.s64 + 25924;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E06564;
	case 1:
		goto loc_82E06584;
	case 2:
		goto loc_82E06594;
	case 3:
		goto loc_82E065D4;
	case 4:
		goto loc_82E065A4;
	case 5:
		goto loc_82E065B4;
	case 6:
		goto loc_82E065C4;
	case 7:
		goto loc_82E065D4;
	default:
		__builtin_unreachable();
	}
	// lwz r23,25956(0)
	ctx.r23.u64 = PPC_LOAD_U32(25956);
	// lwz r23,25988(0)
	ctx.r23.u64 = PPC_LOAD_U32(25988);
	// lwz r23,26004(0)
	ctx.r23.u64 = PPC_LOAD_U32(26004);
	// lwz r23,26068(0)
	ctx.r23.u64 = PPC_LOAD_U32(26068);
	// lwz r23,26020(0)
	ctx.r23.u64 = PPC_LOAD_U32(26020);
	// lwz r23,26036(0)
	ctx.r23.u64 = PPC_LOAD_U32(26036);
	// lwz r23,26052(0)
	ctx.r23.u64 = PPC_LOAD_U32(26052);
	// lwz r23,26068(0)
	ctx.r23.u64 = PPC_LOAD_U32(26068);
loc_82E06564:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e065d4
	if (ctx.cr6.eq) goto loc_82E065D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x82e065d8
	goto loc_82E065D8;
loc_82E06584:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x82e065d8
	goto loc_82E065D8;
loc_82E06594:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x82e065d8
	goto loc_82E065D8;
loc_82E065A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x82e065d8
	goto loc_82E065D8;
loc_82E065B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x82e065d8
	goto loc_82E065D8;
loc_82E065C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x82e065d8
	goto loc_82E065D8;
loc_82E065D4:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82E065D8:
	// lbz r11,115(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e06300
	if (!ctx.cr6.eq) goto loc_82E06300;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e067d8
	if (ctx.cr6.eq) goto loc_82E067D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82e067d0
	if (ctx.cr6.eq) goto loc_82E067D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20f68
	ctx.lr = 0x82E06610;
	sub_82E20F68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x82e06684
	if (!ctx.cr6.eq) goto loc_82E06684;
loc_82E06624:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r11,3566(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3566, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,3520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3520, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0694c
	if (!ctx.cr6.eq) goto loc_82E0694C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E06670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E06684:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r28.u32);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r11,1160(r10)
	PPC_STORE_U64(ctx.r10.u32 + 1160, ctx.r11.u64);
loc_82E06698:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82e06730
	if (ctx.cr6.eq) goto loc_82E06730;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E066B4;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 7, ctx.xer);
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82e06724
	if (!ctx.cr6.eq) goto loc_82E06724;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E066F0;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82E06724:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1136, ctx.r11.u32);
loc_82E06730:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e068bc
	if (ctx.cr6.eq) goto loc_82E068BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E0674C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r24,12
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12, ctx.xer);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82e0689c
	if (ctx.cr6.eq) goto loc_82E0689C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82e20150
	ctx.lr = 0x82E06788;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r24,13
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 13, ctx.xer);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82e068a8
	if (!ctx.cr6.eq) goto loc_82E068A8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,1140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1140, ctx.r11.u32);
	// b 0x82e068bc
	goto loc_82E068BC;
loc_82E067D0:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// b 0x82e06730
	goto loc_82E06730;
loc_82E067D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20db0
	ctx.lr = 0x82E067F0;
	sub_82E20DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e06624
	if (ctx.cr6.eq) goto loc_82E06624;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82e06848
	if (ctx.cr6.eq) goto loc_82E06848;
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulld r10,r9,r10
	ctx.r10.s64 = ctx.r9.s64 * ctx.r10.s64;
	// std r10,1160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1160, ctx.r10.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// b 0x82e06698
	goto loc_82E06698;
loc_82E06848:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82e0687c
	if (ctx.cr6.eq) goto loc_82E0687C;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e06874
	if (ctx.cr6.eq) goto loc_82E06874;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mulld r10,r9,r10
	ctx.r10.s64 = ctx.r9.s64 * ctx.r10.s64;
	// std r10,1160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1160, ctx.r10.u64);
	// b 0x82e06698
	goto loc_82E06698;
loc_82E06874:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// b 0x82e06698
	goto loc_82E06698;
loc_82E0687C:
	// lwz r9,1136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulld r10,r9,r10
	ctx.r10.s64 = ctx.r9.s64 * ctx.r10.s64;
	// std r10,1160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1160, ctx.r10.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// b 0x82e06730
	goto loc_82E06730;
loc_82E0689C:
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// stw r10,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x82e068bc
	goto loc_82E068BC;
loc_82E068A8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,1140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1140, ctx.r11.u32);
loc_82E068BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E068D0;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e062e0
	if (ctx.cr6.eq) goto loc_82E062E0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e23510
	ctx.lr = 0x82E068E8;
	sub_82E23510(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e06300
	if (!ctx.cr6.eq) goto loc_82E06300;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82e06954
	if (ctx.cr6.eq) goto loc_82E06954;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne cr6,0x82e06940
	if (!ctx.cr6.eq) goto loc_82E06940;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0692C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E06940:
	// lwz r10,6128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6128, ctx.r10.u32);
loc_82E0694C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82E06954:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E06960"))) PPC_WEAK_FUNC(sub_82E06960);
PPC_FUNC_IMPL(__imp__sub_82E06960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82E06968;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// slw r17,r11,r23
	ctx.r17.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// lwz r11,1136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// srw r27,r11,r23
	ctx.r27.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r23.u8 & 0x3F));
	// bne cr6,0x82e069e8
	if (!ctx.cr6.eq) goto loc_82E069E8;
	// subf r27,r19,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r19.s64;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82e069f8
	if (!ctx.cr6.lt) goto loc_82E069F8;
loc_82E069A8:
	// lwz r11,3608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e069d0
	if (!ctx.cr6.eq) goto loc_82E069D0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E069D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E069D0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E069DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E069E8:
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82e069a8
	if (ctx.cr6.lt) goto loc_82E069A8;
	// cmplwi cr6,r23,6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 6, ctx.xer);
	// bge cr6,0x82e06a00
	if (!ctx.cr6.lt) goto loc_82E06A00;
loc_82E069F8:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82e06a04
	goto loc_82E06A04;
loc_82E06A00:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82E06A04:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e1f9d8
	ctx.lr = 0x82E06A0C;
	sub_82E1F9D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e06a28
	if (!ctx.cr6.eq) goto loc_82E06A28;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E06A28:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82e069dc
	if (ctx.cr6.eq) goto loc_82E069DC;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r20,-32255
	ctx.r20.s64 = -2113863680;
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// lis r21,-32255
	ctx.r21.s64 = -2113863680;
loc_82E06A48:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17656(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17656);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E06A5C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06b64
	if (ctx.cr6.eq) goto loc_82E06B64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,17664(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17664);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e06ac0
	if (!ctx.cr6.lt) goto loc_82E06AC0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82e06a94
	if (ctx.cr6.eq) goto loc_82E06A94;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// subf r31,r19,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r19.s64;
	// beq cr6,0x82e06a98
	if (ctx.cr6.eq) goto loc_82E06A98;
loc_82E06A94:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82E06A98:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20a28
	ctx.lr = 0x82E06AB0;
	sub_82E20A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06b64
	if (ctx.cr6.eq) goto loc_82E06B64;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x82e06b48
	goto loc_82E06B48;
loc_82E06AC0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17660(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17660);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E06AD4;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06b64
	if (ctx.cr6.eq) goto loc_82E06B64;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// beq cr6,0x82e06afc
	if (ctx.cr6.eq) goto loc_82E06AFC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// beq cr6,0x82e06b00
	if (ctx.cr6.eq) goto loc_82E06B00;
loc_82E06AFC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E06B00:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82e06b48
	if (!ctx.cr6.lt) goto loc_82E06B48;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_82E06B10:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20370
	ctx.lr = 0x82E06B24;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06b64
	if (ctx.cr6.eq) goto loc_82E06B64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// blt cr6,0x82e06b10
	if (ctx.cr6.lt) goto loc_82E06B10;
loc_82E06B48:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r17
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82e06a48
	if (ctx.cr6.lt) goto loc_82E06A48;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E06B64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E06B70"))) PPC_WEAK_FUNC(sub_82E06B70);
PPC_FUNC_IMPL(__imp__sub_82E06B70) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20100
	ctx.lr = 0x82E06B90;
	sub_82E20100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e06c20
	if (!ctx.cr6.eq) goto loc_82E06C20;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20118
	ctx.lr = 0x82E06BAC;
	sub_82E20118(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E06BC0;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e06bdc
	if (!ctx.cr6.eq) goto loc_82E06BDC;
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
loc_82E06BDC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e06c20
	if (ctx.cr6.eq) goto loc_82E06C20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e06c14
	if (!ctx.cr6.eq) goto loc_82E06C14;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E06C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E06C14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E06C20:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82E06C38"))) PPC_WEAK_FUNC(sub_82E06C38);
PPC_FUNC_IMPL(__imp__sub_82E06C38) {
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
	// bl 0x82e055b8
	ctx.lr = 0x82E06C54;
	sub_82E055B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,1120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e06c68
	if (ctx.cr6.eq) goto loc_82E06C68;
	// bl 0x82cb3d50
	ctx.lr = 0x82E06C68;
	sub_82CB3D50(ctx, base);
loc_82E06C68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e21148
	ctx.lr = 0x82E06C74;
	sub_82E21148(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E06C78:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x82e1f980
	ctx.lr = 0x82E06C88;
	sub_82E1F980(ctx, base);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r31,96
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 96, ctx.xer);
	// blt cr6,0x82e06c78
	if (ctx.cr6.lt) goto loc_82E06C78;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82cb3d50
	ctx.lr = 0x82E06C9C;
	sub_82CB3D50(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cb3d50
	ctx.lr = 0x82E06CA4;
	sub_82CB3D50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb3d50
	ctx.lr = 0x82E06CAC;
	sub_82CB3D50(ctx, base);
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

__attribute__((alias("__imp__sub_82E06CC4"))) PPC_WEAK_FUNC(sub_82E06CC4);
PPC_FUNC_IMPL(__imp__sub_82E06CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E06CC8"))) PPC_WEAK_FUNC(sub_82E06CC8);
PPC_FUNC_IMPL(__imp__sub_82E06CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82e06d50
	if (ctx.cr6.gt) goto loc_82E06D50;
loc_82E06CEC:
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,27908
	ctx.r12.s64 = ctx.r12.s64 + 27908;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E06D24;
	case 1:
		goto loc_82E06D30;
	case 2:
		goto loc_82E06D68;
	case 3:
		goto loc_82E06D68;
	case 4:
		goto loc_82E06D68;
	case 5:
		goto loc_82E06D50;
	case 6:
		goto loc_82E06D50;
	case 7:
		goto loc_82E06D68;
	default:
		__builtin_unreachable();
	}
	// lwz r23,27940(0)
	ctx.r23.u64 = PPC_LOAD_U32(27940);
	// lwz r23,27952(0)
	ctx.r23.u64 = PPC_LOAD_U32(27952);
	// lwz r23,28008(0)
	ctx.r23.u64 = PPC_LOAD_U32(28008);
	// lwz r23,28008(0)
	ctx.r23.u64 = PPC_LOAD_U32(28008);
	// lwz r23,28008(0)
	ctx.r23.u64 = PPC_LOAD_U32(28008);
	// lwz r23,27984(0)
	ctx.r23.u64 = PPC_LOAD_U32(27984);
	// lwz r23,27984(0)
	ctx.r23.u64 = PPC_LOAD_U32(27984);
	// lwz r23,28008(0)
	ctx.r23.u64 = PPC_LOAD_U32(28008);
loc_82E06D24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05870
	ctx.lr = 0x82E06D2C;
	sub_82E05870(ctx, base);
	// b 0x82e06d38
	goto loc_82E06D38;
loc_82E06D30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05a70
	ctx.lr = 0x82E06D38;
	sub_82E05A70(ctx, base);
loc_82E06D38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06d50
	if (ctx.cr6.eq) goto loc_82E06D50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82e06cec
	if (!ctx.cr6.gt) goto loc_82E06CEC;
loc_82E06D50:
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
loc_82E06D68:
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

__attribute__((alias("__imp__sub_82E06D80"))) PPC_WEAK_FUNC(sub_82E06D80);
PPC_FUNC_IMPL(__imp__sub_82E06D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E06D88;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r23,2
	ctx.r23.s64 = 2;
	// mulli r11,r28,292
	ctx.r11.s64 = ctx.r28.s64 * 292;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r28,23
	ctx.r10.s64 = ctx.r28.s64 + 23;
	// addi r30,r11,1180
	ctx.r30.s64 = ctx.r11.s64 + 1180;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r23,1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1176, ctx.r23.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// beq cr6,0x82e06e14
	if (ctx.cr6.eq) goto loc_82E06E14;
	// addi r26,r30,16
	ctx.r26.s64 = ctx.r30.s64 + 16;
loc_82E06DE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20370
	ctx.lr = 0x82E06DF4;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06e88
	if (ctx.cr6.eq) goto loc_82E06E88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// blt cr6,0x82e06de0
	if (ctx.cr6.lt) goto loc_82E06DE0;
loc_82E06E14:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17648(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17648);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E06E2C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06e88
	if (ctx.cr6.eq) goto loc_82E06E88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e06eb4
	if (ctx.cr6.eq) goto loc_82E06EB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne cr6,0x82e06e94
	if (!ctx.cr6.eq) goto loc_82E06E94;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E06E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E06E88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E06E94:
	// lwz r10,6128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6128);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6128, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E06EB4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17652(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17652);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E06ECC;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06e88
	if (ctx.cr6.eq) goto loc_82E06E88;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82e06f2c
	if (!ctx.cr6.eq) goto loc_82E06F2C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r10,124
	ctx.r6.s64 = ctx.r10.s64 + 124;
	// lwzx r7,r11,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82e06960
	ctx.lr = 0x82E06F24;
	sub_82E06960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e06e88
	if (ctx.cr6.eq) goto loc_82E06E88;
loc_82E06F2C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82e06f74
	if (ctx.cr6.eq) goto loc_82E06F74;
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r3,r27,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E06F54;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r9,1136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// subf r4,r29,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r29.s64;
	// bl 0x82e23e58
	ctx.lr = 0x82E06F74;
	sub_82E23E58(ctx, base);
loc_82E06F74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E06F80"))) PPC_WEAK_FUNC(sub_82E06F80);
PPC_FUNC_IMPL(__imp__sub_82E06F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E06F88;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// mulli r11,r26,292
	ctx.r11.s64 = ctx.r26.s64 * 292;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r26,23
	ctx.r10.s64 = ctx.r26.s64 + 23;
	// addi r31,r11,1180
	ctx.r31.s64 = ctx.r11.s64 + 1180;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r9,1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1176, ctx.r9.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// beq cr6,0x82e07014
	if (ctx.cr6.eq) goto loc_82E07014;
	// addi r27,r31,152
	ctx.r27.s64 = ctx.r31.s64 + 152;
loc_82E06FE0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20370
	ctx.lr = 0x82E06FF4;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07094
	if (ctx.cr6.eq) goto loc_82E07094;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// blt cr6,0x82e06fe0
	if (ctx.cr6.lt) goto loc_82E06FE0;
loc_82E07014:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17672(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17672);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E0702C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07094
	if (ctx.cr6.eq) goto loc_82E07094;
	// lwz r11,17672(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17672);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e070a0
	if (!ctx.cr6.eq) goto loc_82E070A0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0707c
	if (!ctx.cr6.eq) goto loc_82E0707C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0707C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E0707C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E07094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E070A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,17676(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17676);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20370
	ctx.lr = 0x82E070C0;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07094
	if (ctx.cr6.eq) goto loc_82E07094;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82e07114
	if (ctx.cr6.eq) goto loc_82E07114;
	// addi r27,r31,24
	ctx.r27.s64 = ctx.r31.s64 + 24;
loc_82E070E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20370
	ctx.lr = 0x82E070F4;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07094
	if (ctx.cr6.eq) goto loc_82E07094;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// blt cr6,0x82e070e0
	if (ctx.cr6.lt) goto loc_82E070E0;
loc_82E07114:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17648(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17648);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E0712C;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07094
	if (ctx.cr6.eq) goto loc_82E07094;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e071b0
	if (ctx.cr6.eq) goto loc_82E071B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bne cr6,0x82e0718c
	if (!ctx.cr6.eq) goto loc_82E0718C;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E07174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E0718C:
	// lwz r10,6128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6128);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6128, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E071B0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,17652(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17652);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E071C8;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07094
	if (ctx.cr6.eq) goto loc_82E07094;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82e07228
	if (!ctx.cr6.eq) goto loc_82E07228;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r10,124
	ctx.r6.s64 = ctx.r10.s64 + 124;
	// lwzx r7,r11,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82e06960
	ctx.lr = 0x82E07220;
	sub_82E06960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07094
	if (ctx.cr6.eq) goto loc_82E07094;
loc_82E07228:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82e07320
	if (ctx.cr6.eq) goto loc_82E07320;
	// addi r11,r26,15
	ctx.r11.s64 = ctx.r26.s64 + 15;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r3,r27,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E07250;
	sub_82CB1160(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82e23fc8
	ctx.lr = 0x82E0725C;
	sub_82E23FC8(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82e072f0
	if (ctx.cr6.gt) goto loc_82E072F0;
	// cmplwi cr6,r24,16
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 16, ctx.xer);
	// bgt cr6,0x82e072d8
	if (ctx.cr6.gt) goto loc_82E072D8;
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16, ctx.xer);
	// bgt cr6,0x82e072d8
	if (ctx.cr6.gt) goto loc_82E072D8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r9,1136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// subf r4,r29,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r29.s64;
	// bgt cr6,0x82e072c0
	if (ctx.cr6.gt) goto loc_82E072C0;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E072B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E072C0:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E072CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E072D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r9,1136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82e07304
	goto loc_82E07304;
loc_82E072F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r9,1136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82E07304:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r4,r29,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r29.s64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E07320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E07320:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0732C"))) PPC_WEAK_FUNC(sub_82E0732C);
PPC_FUNC_IMPL(__imp__sub_82E0732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E07330"))) PPC_WEAK_FUNC(sub_82E07330);
PPC_FUNC_IMPL(__imp__sub_82E07330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E07338;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E07360;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e07374
	if (!ctx.cr6.eq) goto loc_82E07374;
loc_82E07368:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E07374:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi r22,r11,31
	ctx.r22.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82e073d4
	if (ctx.cr6.eq) goto loc_82E073D4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20748
	ctx.lr = 0x82E073A0;
	sub_82E20748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07368
	if (ctx.cr6.eq) goto loc_82E07368;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r25,r26,292
	ctx.r25.s64 = ctx.r26.s64 * 292;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// b 0x82e073e0
	goto loc_82E073E0;
loc_82E073D4:
	// mulli r25,r26,292
	ctx.r25.s64 = ctx.r26.s64 * 292;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stw r24,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r24.u32);
loc_82E073E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e07434
	if (ctx.cr6.eq) goto loc_82E07434;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0741c
	if (!ctx.cr6.eq) goto loc_82E0741C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0741C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E0741C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E07434:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e074bc
	if (!ctx.cr6.eq) goto loc_82E074BC;
	// addi r10,r26,15
	ctx.r10.s64 = ctx.r26.s64 + 15;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r24,1176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1176, ctx.r24.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20370
	ctx.lr = 0x82E07468;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07368
	if (ctx.cr6.eq) goto loc_82E07368;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,1180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1180, ctx.r11.u32);
	// beq cr6,0x82e0764c
	if (ctx.cr6.eq) goto loc_82E0764C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e0764c
	if (!ctx.cr6.gt) goto loc_82E0764C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E07498:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,1136(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e07498
	if (ctx.cr6.lt) goto loc_82E07498;
	// b 0x82e0764c
	goto loc_82E0764C;
loc_82E074BC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82e0755c
	if (!ctx.cr6.eq) goto loc_82E0755C;
	// addi r10,r26,23
	ctx.r10.s64 = ctx.r26.s64 + 23;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,1176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1176, ctx.r9.u32);
	// stw r29,1180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1180, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e07530
	if (!ctx.cr6.gt) goto loc_82E07530;
loc_82E074F8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82e20370
	ctx.lr = 0x82E07508;
	sub_82E20370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07368
	if (ctx.cr6.eq) goto loc_82E07368;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e074f8
	if (ctx.cr6.lt) goto loc_82E074F8;
loc_82E07530:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82e0764c
	if (ctx.cr6.eq) goto loc_82E0764C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r26,15
	ctx.r10.s64 = ctx.r26.s64 + 15;
	// lwz r4,1180(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1180);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E07558;
	sub_82CB1160(ctx, base);
	// b 0x82e0764c
	goto loc_82E0764C;
loc_82E0755C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82e075cc
	if (!ctx.cr6.lt) goto loc_82E075CC;
loc_82E07564:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne cr6,0x82e075a8
	if (!ctx.cr6.eq) goto loc_82E075A8;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E07590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E075A8:
	// lwz r10,6128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6128);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6128, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E075CC:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82e07610
	if (ctx.cr6.gt) goto loc_82E07610;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// rlwinm r6,r11,31,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e06d80
	ctx.lr = 0x82E075EC;
	sub_82E06D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07368
	if (ctx.cr6.eq) goto loc_82E07368;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e0764c
	if (!ctx.cr6.eq) goto loc_82E0764C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E07610:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x82e07564
	if (ctx.cr6.lt) goto loc_82E07564;
	// rlwinm r11,r11,31,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1F;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e06f80
	ctx.lr = 0x82E07634;
	sub_82E06F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07368
	if (ctx.cr6.eq) goto loc_82E07368;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82e076bc
	if (ctx.cr6.eq) goto loc_82E076BC;
loc_82E0764C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82e076bc
	if (ctx.cr6.eq) goto loc_82E076BC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82e076bc
	if (ctx.cr6.eq) goto loc_82E076BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r9,1464(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1464);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e076bc
	if (!ctx.cr6.gt) goto loc_82E076BC;
	// addi r9,r26,15
	ctx.r9.s64 = ctx.r26.s64 + 15;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E07688:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,1136(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e07688
	if (ctx.cr6.lt) goto loc_82E07688;
loc_82E076BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E076C8"))) PPC_WEAK_FUNC(sub_82E076C8);
PPC_FUNC_IMPL(__imp__sub_82E076C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E076D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r10,r11,-16408
	ctx.r10.s64 = ctx.r11.s64 + -16408;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,3564(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3564);
	// lbz r8,3565(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3565);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82e20060
	ctx.lr = 0x82E07728;
	sub_82E20060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e06188
	ctx.lr = 0x82E07730;
	sub_82E06188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e07744
	if (!ctx.cr6.eq) goto loc_82E07744;
loc_82E07738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E07744:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82e07aa4
	if (ctx.cr6.eq) goto loc_82E07AA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// lwz r4,1136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// bl 0x82e03ba8
	ctx.lr = 0x82E07768;
	sub_82E03BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07738
	if (ctx.cr6.eq) goto loc_82E07738;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e077f0
	if (!ctx.cr6.gt) goto loc_82E077F0;
loc_82E07784:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// lwz r5,1152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82e077a8
	if (ctx.cr6.eq) goto loc_82E077A8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82e078e4
	if (ctx.cr6.eq) goto loc_82E078E4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82e077b4
	if (!ctx.cr6.eq) goto loc_82E077B4;
loc_82E077A8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
loc_82E077AC:
	// bne cr6,0x82e077b4
	if (!ctx.cr6.eq) goto loc_82E077B4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82E077B4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e07330
	ctx.lr = 0x82E077C4;
	sub_82E07330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07738
	if (ctx.cr6.eq) goto loc_82E07738;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82e07aa4
	if (ctx.cr6.eq) goto loc_82E07AA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e07784
	if (ctx.cr6.lt) goto loc_82E07784;
loc_82E077F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e06b70
	ctx.lr = 0x82E077F8;
	sub_82E06B70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07738
	if (ctx.cr6.eq) goto loc_82E07738;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e20078
	ctx.lr = 0x82E0780C;
	sub_82E20078(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r5,17644(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17644);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82e20150
	ctx.lr = 0x82E07828;
	sub_82E20150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07738
	if (ctx.cr6.eq) goto loc_82E07738;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e0798c
	if (!ctx.cr6.eq) goto loc_82E0798C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e07a08
	if (ctx.cr6.eq) goto loc_82E07A08;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82e0793c
	if (ctx.cr6.eq) goto loc_82E0793C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82e078ec
	if (ctx.cr6.eq) goto loc_82E078EC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82e07a08
	if (!ctx.cr6.eq) goto loc_82E07A08;
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e07a08
	if (!ctx.cr6.gt) goto loc_82E07A08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E07878:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82e078a0
	if (ctx.cr6.eq) goto loc_82E078A0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E078A0:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,60(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,64(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e07878
	if (ctx.cr6.lt) goto loc_82E07878;
	// b 0x82e07a08
	goto loc_82E07A08;
loc_82E078E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// b 0x82e077ac
	goto loc_82E077AC;
loc_82E078EC:
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e07a08
	if (!ctx.cr6.gt) goto loc_82E07A08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E07900:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,1136(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e07900
	if (ctx.cr6.lt) goto loc_82E07900;
	// b 0x82e07a08
	goto loc_82E07A08;
loc_82E0793C:
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e07a08
	if (!ctx.cr6.gt) goto loc_82E07A08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E07950:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,1136(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e07950
	if (ctx.cr6.lt) goto loc_82E07950;
	// b 0x82e07a08
	goto loc_82E07A08;
loc_82E0798C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,3608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e079b8
	if (!ctx.cr6.eq) goto loc_82E079B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E079B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E079B8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e07a08
	if (ctx.cr6.eq) goto loc_82E07A08;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e07a08
	if (!ctx.cr6.gt) goto loc_82E07A08;
	// li r29,60
	ctx.r29.s64 = 60;
loc_82E079D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x82E079F0;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e079d8
	if (ctx.cr6.lt) goto loc_82E079D8;
loc_82E07A08:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// ld r9,1160(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1160);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 240, ctx.r10.u64);
	// beq cr6,0x82e07a98
	if (ctx.cr6.eq) goto loc_82E07A98;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// addi r4,r11,1136
	ctx.r4.s64 = ctx.r11.s64 + 1136;
	// bl 0x82e04b88
	ctx.lr = 0x82E07A90;
	sub_82E04B88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e07738
	if (!ctx.cr6.eq) goto loc_82E07738;
loc_82E07A98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E07AA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E07AB0"))) PPC_WEAK_FUNC(sub_82E07AB0);
PPC_FUNC_IMPL(__imp__sub_82E07AB0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82e07b1c
	if (ctx.cr6.gt) goto loc_82E07B1C;
loc_82E07AD4:
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,31468
	ctx.r12.s64 = ctx.r12.s64 + 31468;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E07B0C;
	case 1:
		goto loc_82E07B94;
	case 2:
		goto loc_82E07B34;
	case 3:
		goto loc_82E07B5C;
	case 4:
		goto loc_82E07B44;
	case 5:
		goto loc_82E07B1C;
	case 6:
		goto loc_82E07B1C;
	case 7:
		goto loc_82E07B44;
	default:
		__builtin_unreachable();
	}
	// lwz r23,31500(0)
	ctx.r23.u64 = PPC_LOAD_U32(31500);
	// lwz r23,31636(0)
	ctx.r23.u64 = PPC_LOAD_U32(31636);
	// lwz r23,31540(0)
	ctx.r23.u64 = PPC_LOAD_U32(31540);
	// lwz r23,31580(0)
	ctx.r23.u64 = PPC_LOAD_U32(31580);
	// lwz r23,31556(0)
	ctx.r23.u64 = PPC_LOAD_U32(31556);
	// lwz r23,31516(0)
	ctx.r23.u64 = PPC_LOAD_U32(31516);
	// lwz r23,31516(0)
	ctx.r23.u64 = PPC_LOAD_U32(31516);
	// lwz r23,31556(0)
	ctx.r23.u64 = PPC_LOAD_U32(31556);
loc_82E07B0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05870
	ctx.lr = 0x82E07B14;
	sub_82E05870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e07b80
	if (!ctx.cr6.eq) goto loc_82E07B80;
loc_82E07B1C:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82E07B34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05ff0
	ctx.lr = 0x82E07B3C;
	sub_82E05FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e07b80
	if (!ctx.cr6.eq) goto loc_82E07B80;
loc_82E07B44:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82E07B5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e076c8
	ctx.lr = 0x82E07B6C;
	sub_82E076C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07b1c
	if (ctx.cr6.eq) goto loc_82E07B1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e07b44
	if (!ctx.cr6.eq) goto loc_82E07B44;
loc_82E07B80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82e07ad4
	if (!ctx.cr6.gt) goto loc_82E07AD4;
	// b 0x82e07b1c
	goto loc_82E07B1C;
loc_82E07B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05a70
	ctx.lr = 0x82E07B9C;
	sub_82E05A70(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82E07BBC"))) PPC_WEAK_FUNC(sub_82E07BBC);
PPC_FUNC_IMPL(__imp__sub_82E07BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E07BC0"))) PPC_WEAK_FUNC(sub_82E07BC0);
PPC_FUNC_IMPL(__imp__sub_82E07BC0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82e07c84
	if (ctx.cr6.gt) goto loc_82E07C84;
loc_82E07BE4:
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,31740
	ctx.r12.s64 = ctx.r12.s64 + 31740;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E07C1C;
	case 1:
		goto loc_82E07C28;
	case 2:
		goto loc_82E07C34;
	case 3:
		goto loc_82E07C5C;
	case 4:
		goto loc_82E07C44;
	case 5:
		goto loc_82E07C84;
	case 6:
		goto loc_82E07C84;
	case 7:
		goto loc_82E07C44;
	default:
		__builtin_unreachable();
	}
	// lwz r23,31772(0)
	ctx.r23.u64 = PPC_LOAD_U32(31772);
	// lwz r23,31784(0)
	ctx.r23.u64 = PPC_LOAD_U32(31784);
	// lwz r23,31796(0)
	ctx.r23.u64 = PPC_LOAD_U32(31796);
	// lwz r23,31836(0)
	ctx.r23.u64 = PPC_LOAD_U32(31836);
	// lwz r23,31812(0)
	ctx.r23.u64 = PPC_LOAD_U32(31812);
	// lwz r23,31876(0)
	ctx.r23.u64 = PPC_LOAD_U32(31876);
	// lwz r23,31876(0)
	ctx.r23.u64 = PPC_LOAD_U32(31876);
	// lwz r23,31812(0)
	ctx.r23.u64 = PPC_LOAD_U32(31812);
loc_82E07C1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05870
	ctx.lr = 0x82E07C24;
	sub_82E05870(ctx, base);
	// b 0x82e07c6c
	goto loc_82E07C6C;
loc_82E07C28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05a70
	ctx.lr = 0x82E07C30;
	sub_82E05A70(ctx, base);
	// b 0x82e07c6c
	goto loc_82E07C6C;
loc_82E07C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05ff0
	ctx.lr = 0x82E07C3C;
	sub_82E05FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e07c74
	if (!ctx.cr6.eq) goto loc_82E07C74;
loc_82E07C44:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82E07C5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e076c8
	ctx.lr = 0x82E07C6C;
	sub_82E076C8(ctx, base);
loc_82E07C6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07c84
	if (ctx.cr6.eq) goto loc_82E07C84;
loc_82E07C74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82e07be4
	if (!ctx.cr6.gt) goto loc_82E07BE4;
loc_82E07C84:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82E07C9C"))) PPC_WEAK_FUNC(sub_82E07C9C);
PPC_FUNC_IMPL(__imp__sub_82E07C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E07CA0"))) PPC_WEAK_FUNC(sub_82E07CA0);
PPC_FUNC_IMPL(__imp__sub_82E07CA0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82e07d58
	if (ctx.cr6.gt) goto loc_82E07D58;
loc_82E07CC4:
	// lis r12,-32032
	ctx.r12.s64 = -2099249152;
	// addi r12,r12,31964
	ctx.r12.s64 = ctx.r12.s64 + 31964;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E07D58;
	case 1:
		goto loc_82E07D58;
	case 2:
		goto loc_82E07CFC;
	case 3:
		goto loc_82E07D24;
	case 4:
		goto loc_82E07D0C;
	case 5:
		goto loc_82E07D58;
	case 6:
		goto loc_82E07D58;
	case 7:
		goto loc_82E07D0C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,32088(0)
	ctx.r23.u64 = PPC_LOAD_U32(32088);
	// lwz r23,32088(0)
	ctx.r23.u64 = PPC_LOAD_U32(32088);
	// lwz r23,31996(0)
	ctx.r23.u64 = PPC_LOAD_U32(31996);
	// lwz r23,32036(0)
	ctx.r23.u64 = PPC_LOAD_U32(32036);
	// lwz r23,32012(0)
	ctx.r23.u64 = PPC_LOAD_U32(32012);
	// lwz r23,32088(0)
	ctx.r23.u64 = PPC_LOAD_U32(32088);
	// lwz r23,32088(0)
	ctx.r23.u64 = PPC_LOAD_U32(32088);
	// lwz r23,32012(0)
	ctx.r23.u64 = PPC_LOAD_U32(32012);
loc_82E07CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e05ff0
	ctx.lr = 0x82E07D04;
	sub_82E05FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e07d48
	if (!ctx.cr6.eq) goto loc_82E07D48;
loc_82E07D0C:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82E07D24:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e076c8
	ctx.lr = 0x82E07D34;
	sub_82E076C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e07d58
	if (ctx.cr6.eq) goto loc_82E07D58;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e07d0c
	if (!ctx.cr6.eq) goto loc_82E07D0C;
loc_82E07D48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82e07cc4
	if (!ctx.cr6.gt) goto loc_82E07CC4;
loc_82E07D58:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82E07D70"))) PPC_WEAK_FUNC(sub_82E07D70);
PPC_FUNC_IMPL(__imp__sub_82E07D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E07D78;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// ld r30,6112(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e07dac
	if (ctx.cr6.eq) goto loc_82E07DAC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r31,304(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 304);
	// b 0x82e07db0
	goto loc_82E07DB0;
loc_82E07DAC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82E07DB0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r8,272(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,284(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// lwz r6,280(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// beq cr6,0x82e07de8
	if (ctx.cr6.eq) goto loc_82E07DE8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r10,448
	ctx.r3.s64 = ctx.r10.s64 + 448;
	// b 0x82e07dec
	goto loc_82E07DEC;
loc_82E07DE8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82E07DEC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e07dfc
	if (!ctx.cr6.eq) goto loc_82E07DFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
loc_82E07DFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e07e0c
	if (!ctx.cr6.eq) goto loc_82E07E0C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
loc_82E07E0C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e07e24
	if (ctx.cr6.eq) goto loc_82E07E24;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// b 0x82e07e50
	goto loc_82E07E50;
loc_82E07E24:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82e07e44
	if (!ctx.cr6.eq) goto loc_82E07E44;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e07e44
	if (ctx.cr6.eq) goto loc_82E07E44;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82e07e4c
	goto loc_82E07E4C;
loc_82E07E44:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,9,3,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FFFFE00;
loc_82E07E4C:
	// addi r28,r11,64
	ctx.r28.s64 = ctx.r11.s64 + 64;
loc_82E07E50:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bgt cr6,0x82e07e6c
	if (ctx.cr6.gt) goto loc_82E07E6C;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82E07E6C:
	// cmpldi cr6,r26,0
	ctx.cr6.compare<uint64_t>(ctx.r26.u64, 0, ctx.xer);
	// bne cr6,0x82e07e78
	if (!ctx.cr6.eq) goto loc_82E07E78;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82E07E78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e07f6c
	if (ctx.cr6.eq) goto loc_82E07F6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r7,17488(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17488);
	// blt cr6,0x82e07f04
	if (ctx.cr6.lt) goto loc_82E07F04;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82E07EAC:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82e07ec0
	if (ctx.cr6.eq) goto loc_82E07EC0;
	// cmpld cr6,r9,r24
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r24.u64, ctx.xer);
	// ble cr6,0x82e07ed4
	if (!ctx.cr6.gt) goto loc_82E07ED4;
loc_82E07EC0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82e07eac
	if (!ctx.cr6.lt) goto loc_82E07EAC;
	// b 0x82e07f04
	goto loc_82E07F04;
loc_82E07ED4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e07f04
	if (ctx.cr6.lt) goto loc_82E07F04;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ldx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_82E07F04:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82e07f3c
	if (!ctx.cr6.gt) goto loc_82E07F3C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82E07F18:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82e07f2c
	if (ctx.cr6.eq) goto loc_82E07F2C;
	// cmpld cr6,r9,r24
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r24.u64, ctx.xer);
	// bgt cr6,0x82e07f3c
	if (ctx.cr6.gt) goto loc_82E07F3C;
loc_82E07F2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e07f18
	if (ctx.cr6.lt) goto loc_82E07F18;
loc_82E07F3C:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82e07f6c
	if (!ctx.cr6.lt) goto loc_82E07F6C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ldx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_82E07F6C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpld cr6,r27,r26
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r26.u64, ctx.xer);
	// std r24,6120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 6120, ctx.r24.u64);
	// bge cr6,0x82e08160
	if (!ctx.cr6.lt) goto loc_82E08160;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r25,2
	ctx.r25.s64 = 2;
	// ori r30,r11,43691
	ctx.r30.u64 = ctx.r11.u64 | 43691;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// rldimi r30,r11,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82E07F9C:
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82e08160
	if (ctx.cr6.gt) goto loc_82E08160;
	// subf r9,r27,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r27.s64;
	// subf r8,r27,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r27.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r6,r28,32
	ctx.r6.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fmul f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x82e08000
	if (ctx.cr6.lt) goto loc_82E08000;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_82E08000:
	// cmpd cr6,r31,r10
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r10.s64, ctx.xer);
	// bge cr6,0x82e0800c
	if (!ctx.cr6.lt) goto loc_82E0800C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82E0800C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E08028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e08160
	if (!ctx.cr6.eq) goto loc_82E08160;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// std r23,240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 240, ctx.r23.u64);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r23,3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3600, ctx.r23.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82e1fe60
	ctx.lr = 0x82E0804C;
	sub_82E1FE60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08178
	if (ctx.cr6.eq) goto loc_82E08178;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r23,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r23.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r23,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r23.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r23,6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6128, ctx.r23.u32);
	// bl 0x82e07ab0
	ctx.lr = 0x82E0807C;
	sub_82E07AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08160
	if (ctx.cr6.eq) goto loc_82E08160;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,3608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e08190
	if (ctx.cr6.eq) goto loc_82E08190;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// ld r11,3752(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3752);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82e08144
	if (ctx.cr6.eq) goto loc_82E08144;
	// lwz r10,3728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3728);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r26.u64, ctx.xer);
	// blt cr6,0x82e080c0
	if (ctx.cr6.lt) goto loc_82E080C0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82e08144
	if (ctx.cr6.eq) goto loc_82E08144;
loc_82E080C0:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmpld cr6,r11,r27
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, ctx.xer);
	// blt cr6,0x82e08160
	if (ctx.cr6.lt) goto loc_82E08160;
	// cmpld cr6,r24,r11
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, ctx.r11.u64, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x82e08110
	if (!ctx.cr6.lt) goto loc_82E08110;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82e057c8
	ctx.lr = 0x82E080E4;
	sub_82E057C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08160
	if (ctx.cr6.eq) goto loc_82E08160;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// mulhdu r10,r10,r30
	ctx.r10.u64 = (ctx.r10.u64 * ctx.r30.u64) >> 64;
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82e08158
	goto loc_82E08158;
loc_82E08110:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x82e057c8
	ctx.lr = 0x82E0811C;
	sub_82E057C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08160
	if (ctx.cr6.eq) goto loc_82E08160;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// mulhdu r11,r11,r30
	ctx.r11.u64 = (ctx.r11.u64 * ctx.r30.u64) >> 64;
	// rldicl r11,r11,63,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// b 0x82e08154
	goto loc_82E08154;
loc_82E08144:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpd cr6,r31,r10
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r10.s64, ctx.xer);
	// beq cr6,0x82e08160
	if (ctx.cr6.eq) goto loc_82E08160;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82E08154:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82E08158:
	// cmpld cr6,r27,r26
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r26.u64, ctx.xer);
	// blt cr6,0x82e07f9c
	if (ctx.cr6.lt) goto loc_82E07F9C;
loc_82E08160:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E08178:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E08190:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0819C"))) PPC_WEAK_FUNC(sub_82E0819C);
PPC_FUNC_IMPL(__imp__sub_82E0819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E081A0"))) PPC_WEAK_FUNC(sub_82E081A0);
PPC_FUNC_IMPL(__imp__sub_82E081A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E081A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e081f0
	if (ctx.cr6.eq) goto loc_82E081F0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82e081f0
	if (ctx.cr6.eq) goto loc_82E081F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82e081f0
	if (ctx.cr6.eq) goto loc_82E081F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82e081f0
	if (ctx.cr6.eq) goto loc_82E081F0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82e081f0
	if (ctx.cr6.eq) goto loc_82E081F0;
loc_82E081E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E081F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e081e4
	if (ctx.cr6.eq) goto loc_82E081E4;
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e08220
	if (ctx.cr6.eq) goto loc_82E08220;
	// ld r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 304);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82e08220
	if (!ctx.cr6.gt) goto loc_82E08220;
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82e081e4
	if (!ctx.cr6.lt) goto loc_82E081E4;
loc_82E08220:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3608, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3600, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E08254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08270
	if (ctx.cr6.eq) goto loc_82E08270;
loc_82E0825C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,3608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3608, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E08270:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e08288
	if (ctx.cr6.eq) goto loc_82E08288;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e082cc
	if (!ctx.cr6.eq) goto loc_82E082CC;
loc_82E08288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e06cc8
	ctx.lr = 0x82E08290;
	sub_82E06CC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e0825c
	if (ctx.cr6.eq) goto loc_82E0825C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e082cc
	if (ctx.cr6.eq) goto loc_82E082CC;
	// ld r11,304(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 304);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82e082cc
	if (!ctx.cr6.gt) goto loc_82E082CC;
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82e082cc
	if (ctx.cr6.lt) goto loc_82E082CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,3608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3608, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E082CC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e07d70
	ctx.lr = 0x82E082DC;
	sub_82E07D70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3608, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E082EC"))) PPC_WEAK_FUNC(sub_82E082EC);
PPC_FUNC_IMPL(__imp__sub_82E082EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E082F0"))) PPC_WEAK_FUNC(sub_82E082F0);
PPC_FUNC_IMPL(__imp__sub_82E082F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E08310"))) PPC_WEAK_FUNC(sub_82E08310);
PPC_FUNC_IMPL(__imp__sub_82E08310) {
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
	// bl 0x82cb8f58
	ctx.lr = 0x82E0832C;
	sub_82CB8F58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e08348
	if (!ctx.cr6.eq) goto loc_82E08348;
loc_82E08340:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82e083b8
	goto loc_82E083B8;
loc_82E08348:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e083b4
	if (ctx.cr6.eq) goto loc_82E083B4;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// li r4,8500
	ctx.r4.s64 = 8500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e24998
	ctx.lr = 0x82E08364;
	sub_82E24998(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// li r5,8500
	ctx.r5.s64 = 8500;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0837C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82e08398
	if (!ctx.cr6.gt) goto loc_82E08398;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e24a60
	ctx.lr = 0x82E08394;
	sub_82E24A60(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82E08398:
	// bne cr6,0x82e083ac
	if (!ctx.cr6.eq) goto loc_82E083AC;
	// bl 0x82cb8f58
	ctx.lr = 0x82E083A0;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e08340
	if (!ctx.cr6.eq) goto loc_82E08340;
loc_82E083AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e083b8
	goto loc_82E083B8;
loc_82E083B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E083B8:
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

__attribute__((alias("__imp__sub_82E083D0"))) PPC_WEAK_FUNC(sub_82E083D0);
PPC_FUNC_IMPL(__imp__sub_82E083D0) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e08434
	if (ctx.cr6.eq) goto loc_82E08434;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e0842c
	if (ctx.cr6.eq) goto loc_82E0842C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E08410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e0842c
	if (ctx.cr6.eq) goto loc_82E0842C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// bl 0x82e25140
	ctx.lr = 0x82E08424;
	sub_82E25140(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e08438
	goto loc_82E08438;
loc_82E0842C:
	// li r3,-128
	ctx.r3.s64 = -128;
	// b 0x82e08438
	goto loc_82E08438;
loc_82E08434:
	// li r3,-129
	ctx.r3.s64 = -129;
loc_82E08438:
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

__attribute__((alias("__imp__sub_82E08450"))) PPC_WEAK_FUNC(sub_82E08450);
PPC_FUNC_IMPL(__imp__sub_82E08450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E08458;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// ble cr6,0x82e08478
	if (!ctx.cr6.gt) goto loc_82E08478;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82E08478:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82E0847C:
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// ble cr6,0x82e08490
	if (!ctx.cr6.gt) goto loc_82E08490;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpd cr6,r11,r28
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r28.s64, ctx.xer);
	// bge cr6,0x82e08560
	if (!ctx.cr6.lt) goto loc_82E08560;
loc_82E08490:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e24a90
	ctx.lr = 0x82E084A0;
	sub_82E24A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82e084c0
	if (!ctx.cr6.lt) goto loc_82E084C0;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// b 0x82e0847c
	goto loc_82E0847C;
loc_82E084C0:
	// bne cr6,0x82e0856c
	if (!ctx.cr6.eq) goto loc_82E0856C;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// beq cr6,0x82e08560
	if (ctx.cr6.eq) goto loc_82E08560;
	// bl 0x82cb8f58
	ctx.lr = 0x82E084D0;
	sub_82CB8F58(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e08538
	if (ctx.cr6.eq) goto loc_82E08538;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e08554
	if (ctx.cr6.eq) goto loc_82E08554;
	// li r4,8500
	ctx.r4.s64 = 8500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e24998
	ctx.lr = 0x82E084F8;
	sub_82E24998(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// li r5,8500
	ctx.r5.s64 = 8500;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E08510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e0852c
	if (!ctx.cr6.gt) goto loc_82E0852C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e24a60
	ctx.lr = 0x82E08528;
	sub_82E24A60(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_82E0852C:
	// beq cr6,0x82e08544
	if (ctx.cr6.eq) goto loc_82E08544;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82e0847c
	if (!ctx.cr6.lt) goto loc_82E0847C;
loc_82E08538:
	// li r3,-128
	ctx.r3.s64 = -128;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E08544:
	// bl 0x82cb8f58
	ctx.lr = 0x82E08548;
	sub_82CB8F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e08538
	if (!ctx.cr6.eq) goto loc_82E08538;
loc_82E08554:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E08560:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E0856C:
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E08584"))) PPC_WEAK_FUNC(sub_82E08584);
PPC_FUNC_IMPL(__imp__sub_82E08584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E08588"))) PPC_WEAK_FUNC(sub_82E08588);
PPC_FUNC_IMPL(__imp__sub_82E08588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E08590;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E085A8:
	// addi r29,r29,-8500
	ctx.r29.s64 = ctx.r29.s64 + -8500;
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// bge cr6,0x82e085b8
	if (!ctx.cr6.lt) goto loc_82E085B8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E085B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e08604
	if (ctx.cr6.eq) goto loc_82E08604;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e085fc
	if (ctx.cr6.eq) goto loc_82E085FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E085E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e085fc
	if (ctx.cr6.eq) goto loc_82E085FC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
	// bl 0x82e25140
	ctx.lr = 0x82E085F4;
	sub_82E25140(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e08608
	goto loc_82E08608;
loc_82E085FC:
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x82e08608
	goto loc_82E08608;
loc_82E08604:
	// li r11,-129
	ctx.r11.s64 = -129;
loc_82E08608:
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x82e08694
	if (!ctx.cr6.eq) goto loc_82E08694;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpd cr6,r11,r30
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r30.s64, ctx.xer);
	// bge cr6,0x82e08654
	if (!ctx.cr6.lt) goto loc_82E08654;
loc_82E08620:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82e08450
	ctx.lr = 0x82E08634;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,-128
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -128, ctx.xer);
	// beq cr6,0x82e0869c
	if (ctx.cr6.eq) goto loc_82E0869C;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e08654
	if (ctx.cr6.lt) goto loc_82E08654;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpd cr6,r11,r30
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r30.s64, ctx.xer);
	// blt cr6,0x82e08620
	if (ctx.cr6.lt) goto loc_82E08620;
loc_82E08654:
	// cmpdi cr6,r28,-1
	ctx.cr6.compare<int64_t>(ctx.r28.s64, -1, ctx.xer);
	// beq cr6,0x82e085a8
	if (ctx.cr6.eq) goto loc_82E085A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e083d0
	ctx.lr = 0x82E08668;
	sub_82E083D0(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x82e08694
	if (!ctx.cr6.eq) goto loc_82E08694;
	// li r5,8500
	ctx.r5.s64 = 8500;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E08684;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// li r3,-129
	ctx.r3.s64 = -129;
	// blt cr6,0x82e08694
	if (ctx.cr6.lt) goto loc_82E08694;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82E08694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E0869C:
	// li r3,-128
	ctx.r3.s64 = -128;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E086A8"))) PPC_WEAK_FUNC(sub_82E086A8);
PPC_FUNC_IMPL(__imp__sub_82E086A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E086B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e24158
	ctx.lr = 0x82E086C0;
	sub_82E24158(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e086f4
	if (ctx.cr6.eq) goto loc_82E086F4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,194
	ctx.r6.s64 = 194;
	// addi r5,r10,15616
	ctx.r5.s64 = ctx.r10.s64 + 15616;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d86610
	ctx.lr = 0x82E086F0;
	sub_82D86610(ctx, base);
	// b 0x82e08708
	goto loc_82E08708;
loc_82E086F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,196
	ctx.r5.s64 = 196;
	// addi r4,r11,15616
	ctx.r4.s64 = ctx.r11.s64 + 15616;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d865c0
	ctx.lr = 0x82E08708;
	sub_82D865C0(ctx, base);
loc_82E08708:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e08724
	if (!ctx.cr6.eq) goto loc_82E08724;
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E08724:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E08740"))) PPC_WEAK_FUNC(sub_82E08740);
PPC_FUNC_IMPL(__imp__sub_82E08740) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e24158
	ctx.lr = 0x82E08760;
	sub_82E24158(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e0878c
	if (ctx.cr6.eq) goto loc_82E0878C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e0878c
	if (ctx.cr6.eq) goto loc_82E0878C;
loc_82E08770:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82e087a8
	if (ctx.cr6.eq) goto loc_82E087A8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82e08770
	if (!ctx.cr6.eq) goto loc_82E08770;
loc_82E0878C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E08790:
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
loc_82E087A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e08790
	goto loc_82E08790;
}

__attribute__((alias("__imp__sub_82E087B0"))) PPC_WEAK_FUNC(sub_82E087B0);
PPC_FUNC_IMPL(__imp__sub_82E087B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E087B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,8500
	ctx.r5.s64 = 8500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// bl 0x82e08450
	ctx.lr = 0x82E087E0;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,-2
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -2, ctx.xer);
	// beq cr6,0x82e088a4
	if (ctx.cr6.eq) goto loc_82E088A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,15616
	ctx.r26.s64 = ctx.r11.s64 + 15616;
loc_82E087F0:
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e088b0
	if (ctx.cr6.lt) goto loc_82E088B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240d8
	ctx.lr = 0x82E08800;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e088a4
	if (ctx.cr6.eq) goto loc_82E088A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82e24158
	ctx.lr = 0x82E08818;
	sub_82E24158(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e08844
	if (ctx.cr6.eq) goto loc_82E08844;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e08844
	if (ctx.cr6.eq) goto loc_82E08844;
loc_82E08828:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82e088bc
	if (ctx.cr6.eq) goto loc_82E088BC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82e08828
	if (!ctx.cr6.eq) goto loc_82E08828;
loc_82E08844:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e24158
	ctx.lr = 0x82E0884C;
	sub_82E24158(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,194
	ctx.r6.s64 = 194;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d86610
	ctx.lr = 0x82E08870;
	sub_82D86610(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e088e8
	if (ctx.cr6.eq) goto loc_82E088E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8500
	ctx.r5.s64 = 8500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// bl 0x82e08450
	ctx.lr = 0x82E0889C;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,-2
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -2, ctx.xer);
	// bne cr6,0x82e087f0
	if (!ctx.cr6.eq) goto loc_82E087F0;
loc_82E088A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82E088B0:
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82E088BC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e088d4
	if (ctx.cr6.eq) goto loc_82E088D4;
	// li r5,237
	ctx.r5.s64 = 237;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E088D4;
	sub_82D86638(ctx, base);
loc_82E088D4:
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// li r3,-133
	ctx.r3.s64 = -133;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82E088E8:
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E088F4"))) PPC_WEAK_FUNC(sub_82E088F4);
PPC_FUNC_IMPL(__imp__sub_82E088F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E088F8"))) PPC_WEAK_FUNC(sub_82E088F8);
PPC_FUNC_IMPL(__imp__sub_82E088F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82E08900;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpd cr6,r29,r26
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r26.s64, ctx.xer);
	// bge cr6,0x82e08a24
	if (!ctx.cr6.lt) goto loc_82E08A24;
loc_82E08934:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// cmpdi cr6,r11,8500
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 8500, ctx.xer);
	// bge cr6,0x82e08948
	if (!ctx.cr6.lt) goto loc_82E08948;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82e08958
	goto loc_82E08958;
loc_82E08948:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r30,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r30.s64 = ctx.r11.s64 >> 1;
loc_82E08958:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e089a4
	if (ctx.cr6.eq) goto loc_82E089A4;
	// lwz r11,700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e0899c
	if (ctx.cr6.eq) goto loc_82E0899C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E08980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e0899c
	if (ctx.cr6.eq) goto loc_82E0899C;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// std r30,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r30.u64);
	// bl 0x82e25140
	ctx.lr = 0x82E08994;
	sub_82E25140(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82e089a8
	goto loc_82E089A8;
loc_82E0899C:
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x82e089a8
	goto loc_82E089A8;
loc_82E089A4:
	// li r11,-129
	ctx.r11.s64 = -129;
loc_82E089A8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x82e08aa8
	if (!ctx.cr6.eq) goto loc_82E08AA8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E089C4;
	sub_82E08450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpdi cr6,r31,-128
	ctx.cr6.compare<int64_t>(ctx.r31.s64, -128, ctx.xer);
	// beq cr6,0x82e08ab4
	if (ctx.cr6.eq) goto loc_82E08AB4;
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(ctx.r31.s64, 0, ctx.xer);
	// blt cr6,0x82e08a0c
	if (ctx.cr6.lt) goto loc_82E08A0C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e08740
	ctx.lr = 0x82E089E8;
	sub_82E08740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08a0c
	if (ctx.cr6.eq) goto loc_82E08A0C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82e08a1c
	goto loc_82E08A1C;
loc_82E08A0C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(ctx.r31.s64, 0, ctx.xer);
	// blt cr6,0x82e08a1c
	if (ctx.cr6.lt) goto loc_82E08A1C;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82E08A1C:
	// cmpd cr6,r29,r27
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r27.s64, ctx.xer);
	// blt cr6,0x82e08934
	if (ctx.cr6.lt) goto loc_82E08934;
loc_82E08A24:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x82e083d0
	ctx.lr = 0x82E08A38;
	sub_82E083D0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x82e08aa8
	if (!ctx.cr6.eq) goto loc_82E08AA8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e087b0
	ctx.lr = 0x82E08A54;
	sub_82E087B0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x82e08aa8
	if (!ctx.cr6.eq) goto loc_82E08AA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpd cr6,r29,r26
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r26.s64, ctx.xer);
	// addi r30,r11,15616
	ctx.r30.s64 = ctx.r11.s64 + 15616;
	// bge cr6,0x82e08ac0
	if (!ctx.cr6.lt) goto loc_82E08AC0;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82e08ac0
	if (ctx.cr6.eq) goto loc_82E08AC0;
	// addi r9,r21,1
	ctx.r9.s64 = ctx.r21.s64 + 1;
	// ld r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e088f8
	ctx.lr = 0x82E08A9C;
	sub_82E088F8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82e08b00
	if (ctx.cr6.eq) goto loc_82E08B00;
loc_82E08AA8:
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82E08AB4:
	// li r3,-128
	ctx.r3.s64 = -128;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82E08AC0:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r5,301
	ctx.r5.s64 = 301;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
	// bl 0x82d865c0
	ctx.lr = 0x82E08ADC;
	sub_82D865C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r3.u32);
	// bne cr6,0x82e08af4
	if (!ctx.cr6.eq) goto loc_82E08AF4;
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_82E08AF4:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r29,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r29.u64);
loc_82E08B00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e08b18
	if (ctx.cr6.eq) goto loc_82E08B18;
	// li r5,313
	ctx.r5.s64 = 313;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E08B18;
	sub_82D86638(ctx, base);
loc_82E08B18:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// rlwinm r10,r21,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stdx r20,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r20.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E08B30"))) PPC_WEAK_FUNC(sub_82E08B30);
PPC_FUNC_IMPL(__imp__sub_82E08B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E08B38;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e08b88
	if (!ctx.cr6.eq) goto loc_82E08B88;
	// li r5,8500
	ctx.r5.s64 = 8500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e08450
	ctx.lr = 0x82E08B68;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,-128
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -128, ctx.xer);
	// bne cr6,0x82e08b7c
	if (!ctx.cr6.eq) goto loc_82E08B7C;
loc_82E08B70:
	// li r3,-128
	ctx.r3.s64 = -128;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E08B7C:
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e08d58
	if (ctx.cr6.lt) goto loc_82E08D58;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E08B88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e0cfd8
	ctx.lr = 0x82E08B90;
	sub_82E0CFD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08ba4
	if (ctx.cr6.eq) goto loc_82E08BA4;
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E08BA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e0ca10
	ctx.lr = 0x82E08BAC;
	sub_82E0CA10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e240d8
	ctx.lr = 0x82E08BB4;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08c34
	if (ctx.cr6.eq) goto loc_82E08C34;
	// addi r27,r29,112
	ctx.r27.s64 = ctx.r29.s64 + 112;
loc_82E08BC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e24158
	ctx.lr = 0x82E08BC8;
	sub_82E24158(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e251a8
	ctx.lr = 0x82E08BD4;
	sub_82E251A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e24d18
	ctx.lr = 0x82E08BE0;
	sub_82E24D18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E08BEC;
	sub_82E25328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82e08c04
	if (!ctx.cr6.gt) goto loc_82E08C04;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e0d8e0
	ctx.lr = 0x82E08BFC;
	sub_82E0D8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e08c3c
	if (!ctx.cr6.eq) goto loc_82E08C3C;
loc_82E08C04:
	// li r5,8500
	ctx.r5.s64 = 8500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E08C14;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,-128
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -128, ctx.xer);
	// beq cr6,0x82e08b70
	if (ctx.cr6.eq) goto loc_82E08B70;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e08d58
	if (ctx.cr6.lt) goto loc_82E08D58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e240d8
	ctx.lr = 0x82E08C2C;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e08bc0
	if (!ctx.cr6.eq) goto loc_82E08BC0;
loc_82E08C34:
	// li r31,-132
	ctx.r31.s64 = -132;
	// b 0x82e08d34
	goto loc_82E08D34;
loc_82E08C3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e08c4c
	if (ctx.cr6.eq) goto loc_82E08C4C;
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E08C4C:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// bl 0x82e0d9c0
	ctx.lr = 0x82E08C64;
	sub_82E0D9C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82e08d34
	if (!ctx.cr6.eq) goto loc_82E08D34;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82E08C74:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x82e08cc0
	if (!ctx.cr6.lt) goto loc_82E08CC0;
loc_82E08C7C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E08C88;
	sub_82E25328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08ccc
	if (ctx.cr6.eq) goto loc_82E08CCC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e08d30
	if (ctx.cr6.eq) goto loc_82E08D30;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e0d9c0
	ctx.lr = 0x82E08CA8;
	sub_82E0D9C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82e08d34
	if (!ctx.cr6.eq) goto loc_82E08D34;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x82e08c7c
	if (ctx.cr6.lt) goto loc_82E08C7C;
loc_82E08CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E08CCC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x82e08cc0
	if (!ctx.cr6.lt) goto loc_82E08CC0;
loc_82E08CD4:
	// li r5,8500
	ctx.r5.s64 = 8500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E08CE4;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e08d30
	if (ctx.cr6.lt) goto loc_82E08D30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e24158
	ctx.lr = 0x82E08CF4;
	sub_82E24158(ctx, base);
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82e08d20
	if (ctx.cr6.eq) goto loc_82E08D20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e240d8
	ctx.lr = 0x82E08D08;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08cd4
	if (ctx.cr6.eq) goto loc_82E08CD4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82e08d30
	if (!ctx.cr6.eq) goto loc_82E08D30;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82e08cd4
	goto loc_82E08CD4;
loc_82E08D20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e24d18
	ctx.lr = 0x82E08D2C;
	sub_82E24D18(ctx, base);
	// b 0x82e08c74
	goto loc_82E08C74;
loc_82E08D30:
	// li r31,-133
	ctx.r31.s64 = -133;
loc_82E08D34:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e0d048
	ctx.lr = 0x82E08D3C;
	sub_82E0D048(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e0cee8
	ctx.lr = 0x82E08D44;
	sub_82E0CEE8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82E08D58:
	// li r3,-132
	ctx.r3.s64 = -132;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E08D64"))) PPC_WEAK_FUNC(sub_82E08D64);
PPC_FUNC_IMPL(__imp__sub_82E08D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E08D68"))) PPC_WEAK_FUNC(sub_82E08D68);
PPC_FUNC_IMPL(__imp__sub_82E08D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E08D70;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r30,r11,15616
	ctx.r30.s64 = ctx.r11.s64 + 15616;
	// li r6,445
	ctx.r6.s64 = 445;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r4,r10,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82d86610
	ctx.lr = 0x82E08D9C;
	sub_82D86610(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// bne cr6,0x82e08db4
	if (!ctx.cr6.eq) goto loc_82E08DB4;
loc_82E08DA8:
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E08DB4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,450
	ctx.r6.s64 = 450;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d86610
	ctx.lr = 0x82E08DCC;
	sub_82D86610(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// beq cr6,0x82e08da8
	if (ctx.cr6.eq) goto loc_82E08DA8;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,455
	ctx.r5.s64 = 455;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d865c0
	ctx.lr = 0x82E08DEC;
	sub_82D865C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// beq cr6,0x82e08da8
	if (ctx.cr6.eq) goto loc_82E08DA8;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,460
	ctx.r5.s64 = 460;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82d865c0
	ctx.lr = 0x82E08E0C;
	sub_82D865C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// beq cr6,0x82e08da8
	if (ctx.cr6.eq) goto loc_82E08DA8;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,465
	ctx.r5.s64 = 465;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d865c0
	ctx.lr = 0x82E08E2C;
	sub_82D865C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x82e08da8
	if (ctx.cr6.eq) goto loc_82E08DA8;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e0911c
	if (!ctx.cr6.gt) goto loc_82E0911C;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82E08E4C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e08e88
	if (!ctx.cr6.eq) goto loc_82E08E88;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// std r23,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// bl 0x82e083d0
	ctx.lr = 0x82E08E74;
	sub_82E083D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08ef8
	if (ctx.cr6.eq) goto loc_82E08EF8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// b 0x82e08ef8
	goto loc_82E08EF8;
loc_82E08E88:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82e083d0
	ctx.lr = 0x82E08E98;
	sub_82E083D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08eac
	if (ctx.cr6.eq) goto loc_82E08EAC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stdx r24,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u64);
	// b 0x82e08ef8
	goto loc_82E08EF8;
loc_82E08EAC:
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08b30
	ctx.lr = 0x82E08EDC;
	sub_82E08B30(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82e08ef0
	if (!ctx.cr6.lt) goto loc_82E08EF0;
	// stdx r24,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u64);
	// b 0x82e08ef8
	goto loc_82E08EF8;
loc_82E08EF0:
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stdx r10,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
loc_82E08EF8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r25,r29,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r25.u32);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82e09028
	if (ctx.cr6.eq) goto loc_82E09028;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r26,r29,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r31,112
	ctx.r27.s64 = ctx.r31.s64 + 112;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x82e251a8
	ctx.lr = 0x82E08F2C;
	sub_82E251A8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E08F3C;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e0901c
	if (ctx.cr6.lt) goto loc_82E0901C;
loc_82E08F44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240d8
	ctx.lr = 0x82E08F4C;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e09010
	if (!ctx.cr6.eq) goto loc_82E09010;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e24158
	ctx.lr = 0x82E08F5C;
	sub_82E24158(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e08fe8
	if (!ctx.cr6.eq) goto loc_82E08FE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e24d18
	ctx.lr = 0x82E08F78;
	sub_82E24D18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E08F84;
	sub_82E25328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e08fd8
	if (ctx.cr6.eq) goto loc_82E08FD8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_82E08F90:
	// ble cr6,0x82e08fc4
	if (!ctx.cr6.gt) goto loc_82E08FC4;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e25740
	ctx.lr = 0x82E08FA8;
	sub_82E25740(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82e08fc0
	if (ctx.cr6.eq) goto loc_82E08FC0;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// sradi r11,r11,2
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 2;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82E08FC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E08FC4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E08FD0;
	sub_82E25328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e08f90
	if (!ctx.cr6.eq) goto loc_82E08F90;
loc_82E08FD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240f8
	ctx.lr = 0x82E08FE0;
	sub_82E240F8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x82e09004
	if (!ctx.cr6.eq) goto loc_82E09004;
loc_82E08FE8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E08FF8;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x82e08f44
	if (!ctx.cr6.lt) goto loc_82E08F44;
	// b 0x82e09010
	goto loc_82E09010;
loc_82E09004:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240f8
	ctx.lr = 0x82E0900C;
	sub_82E240F8(ctx, base);
	// subf r28,r28,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r28.s64;
loc_82E09010:
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// bge cr6,0x82e0901c
	if (!ctx.cr6.lt) goto loc_82E0901C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82E0901C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stdx r28,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u64);
loc_82E09028:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82e083d0
	ctx.lr = 0x82E0903C;
	sub_82E083D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e09068
	if (ctx.cr6.eq) goto loc_82E09068;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e0d048
	ctx.lr = 0x82E09054;
	sub_82E0D048(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e0cee8
	ctx.lr = 0x82E09064;
	sub_82E0CEE8(ctx, base);
	// b 0x82e0910c
	goto loc_82E0910C;
loc_82E09068:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08588
	ctx.lr = 0x82E09074;
	sub_82E08588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// blt cr6,0x82e090c8
	if (ctx.cr6.lt) goto loc_82E090C8;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E09084:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e24158
	ctx.lr = 0x82E0908C;
	sub_82E24158(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e090ac
	if (!ctx.cr6.eq) goto loc_82E090AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240f8
	ctx.lr = 0x82E090A4;
	sub_82E240F8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x82e090ec
	if (!ctx.cr6.eq) goto loc_82E090EC;
loc_82E090AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08588
	ctx.lr = 0x82E090BC;
	sub_82E08588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bge cr6,0x82e09084
	if (!ctx.cr6.lt) goto loc_82E09084;
loc_82E090C8:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e0d048
	ctx.lr = 0x82E090D8;
	sub_82E0D048(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e0cee8
	ctx.lr = 0x82E090E8;
	sub_82E0CEE8(ctx, base);
	// b 0x82e0910c
	goto loc_82E0910C;
loc_82E090EC:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e240f8
	ctx.lr = 0x82E09100;
	sub_82E240F8(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_82E0910C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e08e4c
	if (ctx.cr6.lt) goto loc_82E08E4C;
loc_82E0911C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E09128"))) PPC_WEAK_FUNC(sub_82E09128);
PPC_FUNC_IMPL(__imp__sub_82E09128) {
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82e091cc
	if (ctx.cr6.gt) goto loc_82E091CC;
	// bge cr6,0x82e09158
	if (!ctx.cr6.lt) goto loc_82E09158;
	// li r3,-129
	ctx.r3.s64 = -129;
	// b 0x82e091d0
	goto loc_82E091D0;
loc_82E09158:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,472
	ctx.r30.s64 = ctx.r31.s64 + 472;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82e09190
	if (ctx.cr6.eq) goto loc_82E09190;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e269f0
	ctx.lr = 0x82E09180;
	sub_82E269F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e091a8
	if (ctx.cr6.eq) goto loc_82E091A8;
	// li r3,-137
	ctx.r3.s64 = -137;
	// b 0x82e091d0
	goto loc_82E091D0;
loc_82E09190:
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82e269f0
	ctx.lr = 0x82E09198;
	sub_82E269F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e091a8
	if (ctx.cr6.eq) goto loc_82E091A8;
	// li r3,-137
	ctx.r3.s64 = -137;
	// b 0x82e091d0
	goto loc_82E091D0;
loc_82E091A8:
	// addi r4,r31,584
	ctx.r4.s64 = ctx.r31.s64 + 584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e25880
	ctx.lr = 0x82E091B4;
	sub_82E25880(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_82E091CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E091D0:
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

__attribute__((alias("__imp__sub_82E091E8"))) PPC_WEAK_FUNC(sub_82E091E8);
PPC_FUNC_IMPL(__imp__sub_82E091E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e25e68
	ctx.lr = 0x82E09204;
	sub_82E25E68(ctx, base);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E0920C;
	sub_82E25A58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E09228"))) PPC_WEAK_FUNC(sub_82E09228);
PPC_FUNC_IMPL(__imp__sub_82E09228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E09230;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82E0924C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82e092c8
	if (!ctx.cr6.eq) goto loc_82E092C8;
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
loc_82E0925C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bne cr6,0x82e0926c
	if (!ctx.cr6.eq) goto loc_82E0926C;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_82E0926C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E09278;
	sub_82E25328(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e09454
	if (ctx.cr6.eq) goto loc_82E09454;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82e092c8
	if (!ctx.cr6.gt) goto loc_82E092C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25480
	ctx.lr = 0x82E0929C;
	sub_82E25480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0925c
	if (!ctx.cr6.eq) goto loc_82E0925C;
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e27498
	ctx.lr = 0x82E092B4;
	sub_82E27498(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e09460
	if (ctx.cr6.eq) goto loc_82E09460;
	// li r3,-129
	ctx.r3.s64 = -129;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E092C8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e09384
	if (ctx.cr6.lt) goto loc_82E09384;
loc_82E092D4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82e09568
	if (ctx.cr6.eq) goto loc_82E09568;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E092EC;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e09574
	if (ctx.cr6.lt) goto loc_82E09574;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bne cr6,0x82e09390
	if (!ctx.cr6.eq) goto loc_82E09390;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e24158
	ctx.lr = 0x82E09330;
	sub_82E24158(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82e09384
	if (ctx.cr6.eq) goto loc_82E09384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e240d8
	ctx.lr = 0x82E09344;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e092d4
	if (ctx.cr6.eq) goto loc_82E092D4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82e09574
	if (ctx.cr6.eq) goto loc_82E09574;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e25e68
	ctx.lr = 0x82E0935C;
	sub_82E25E68(ctx, base);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E09364;
	sub_82E25A58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0939c
	if (!ctx.cr6.eq) goto loc_82E0939C;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82e0d048
	ctx.lr = 0x82E0937C;
	sub_82E0D048(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82e0cee8
	ctx.lr = 0x82E09384;
	sub_82E0CEE8(ctx, base);
loc_82E09384:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82e09444
	if (ctx.cr6.eq) goto loc_82E09444;
loc_82E09390:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82e09434
	if (!ctx.cr6.lt) goto loc_82E09434;
loc_82E0939C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e09408
	if (ctx.cr6.eq) goto loc_82E09408;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e24158
	ctx.lr = 0x82E093B0;
	sub_82E24158(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e093e8
	if (!ctx.cr6.gt) goto loc_82E093E8;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_82E093C8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82e093e8
	if (ctx.cr6.eq) goto loc_82E093E8;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e093c8
	if (ctx.cr6.lt) goto loc_82E093C8;
loc_82E093E8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82e0924c
	if (ctx.cr6.eq) goto loc_82E0924C;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e251a8
	ctx.lr = 0x82E09400;
	sub_82E251A8(ctx, base);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// b 0x82e09434
	goto loc_82E09434;
loc_82E09408:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08b30
	ctx.lr = 0x82E09420;
	sub_82E08B30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e09578
	if (!ctx.cr6.eq) goto loc_82E09578;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82E09434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09128
	ctx.lr = 0x82E0943C;
	sub_82E09128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82e09578
	if (ctx.cr6.lt) goto loc_82E09578;
loc_82E09444:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82e24d18
	ctx.lr = 0x82E09450;
	sub_82E24D18(ctx, base);
	// b 0x82e0924c
	goto loc_82E0924C;
loc_82E09454:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E09460:
	// addi r4,r31,584
	ctx.r4.s64 = ctx.r31.s64 + 584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e26a50
	ctx.lr = 0x82E0946C;
	sub_82E26A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e27498
	ctx.lr = 0x82E09478;
	sub_82E27498(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// cmpdi cr6,r29,-1
	ctx.cr6.compare<int64_t>(ctx.r29.s64, -1, ctx.xer);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// beq cr6,0x82e0955c
	if (ctx.cr6.eq) goto loc_82E0955C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0955c
	if (!ctx.cr6.eq) goto loc_82E0955C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e094e8
	if (ctx.cr6.eq) goto loc_82E094E8;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x82e094ec
	goto loc_82E094EC;
loc_82E094E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E094EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0950c
	if (ctx.cr6.eq) goto loc_82E0950C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e0950c
	if (!ctx.cr6.gt) goto loc_82E0950C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82E0950C:
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// bge cr6,0x82e09518
	if (!ctx.cr6.lt) goto loc_82E09518;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E09518:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e27498
	ctx.lr = 0x82E09524;
	sub_82E27498(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// ble cr6,0x82e09558
	if (!ctx.cr6.gt) goto loc_82E09558;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82E09540:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e09540
	if (!ctx.cr6.eq) goto loc_82E09540;
loc_82E09558:
	// std r9,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r9.u64);
loc_82E0955C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E09568:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E09574:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82E09578:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E09580"))) PPC_WEAK_FUNC(sub_82E09580);
PPC_FUNC_IMPL(__imp__sub_82E09580) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e09590
	if (!ctx.cr6.eq) goto loc_82E09590;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E09590:
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// b 0x82cb7c40
	sub_82CB7C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E09598"))) PPC_WEAK_FUNC(sub_82E09598);
PPC_FUNC_IMPL(__imp__sub_82E09598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E095A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e096e0
	if (ctx.cr6.eq) goto loc_82E096E0;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E095B8;
	sub_82E25A58(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e25e68
	ctx.lr = 0x82E095C0;
	sub_82E25E68(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82e242b0
	ctx.lr = 0x82E095C8;
	sub_82E242B0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,15616
	ctx.r27.s64 = ctx.r11.s64 + 15616;
	// beq cr6,0x82e09648
	if (ctx.cr6.eq) goto loc_82E09648;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e09648
	if (ctx.cr6.eq) goto loc_82E09648;
	// li r28,0
	ctx.r28.s64 = 0;
	// ble cr6,0x82e09628
	if (!ctx.cr6.gt) goto loc_82E09628;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E095F8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82e0d048
	ctx.lr = 0x82E09604;
	sub_82E0D048(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82e0cee8
	ctx.lr = 0x82E09610;
	sub_82E0CEE8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e095f8
	if (ctx.cr6.lt) goto loc_82E095F8;
loc_82E09628:
	// li r5,935
	ctx.r5.s64 = 935;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E09638;
	sub_82D86638(ctx, base);
	// li r5,936
	ctx.r5.s64 = 936;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d86638
	ctx.lr = 0x82E09648;
	sub_82D86638(ctx, base);
loc_82E09648:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e09660
	if (ctx.cr6.eq) goto loc_82E09660;
	// li r5,938
	ctx.r5.s64 = 938;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E09660;
	sub_82D86638(ctx, base);
loc_82E09660:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e09678
	if (ctx.cr6.eq) goto loc_82E09678;
	// li r5,939
	ctx.r5.s64 = 939;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E09678;
	sub_82D86638(ctx, base);
loc_82E09678:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e09690
	if (ctx.cr6.eq) goto loc_82E09690;
	// li r5,940
	ctx.r5.s64 = 940;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E09690;
	sub_82D86638(ctx, base);
loc_82E09690:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e096a8
	if (ctx.cr6.eq) goto loc_82E096A8;
	// li r5,941
	ctx.r5.s64 = 941;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E096A8;
	sub_82D86638(ctx, base);
loc_82E096A8:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82e248d8
	ctx.lr = 0x82E096B0;
	sub_82E248D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e096d0
	if (ctx.cr6.eq) goto loc_82E096D0;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e096d0
	if (ctx.cr6.eq) goto loc_82E096D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E096D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E096D0:
	// li r5,712
	ctx.r5.s64 = 712;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E096E0;
	sub_82CB16F0(ctx, base);
loc_82E096E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E096EC"))) PPC_WEAK_FUNC(sub_82E096EC);
PPC_FUNC_IMPL(__imp__sub_82E096EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E096F0"))) PPC_WEAK_FUNC(sub_82E096F0);
PPC_FUNC_IMPL(__imp__sub_82E096F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E096F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e09798
	if (ctx.cr6.eq) goto loc_82E09798;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e09798
	if (ctx.cr6.eq) goto loc_82E09798;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e09740
	if (ctx.cr6.lt) goto loc_82E09740;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e25e68
	ctx.lr = 0x82E09730;
	sub_82E25E68(ctx, base);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E09738;
	sub_82E25A58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82E09740:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e09780
	if (!ctx.cr6.gt) goto loc_82E09780;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E09754:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82e25808
	ctx.lr = 0x82E09764;
	sub_82E25808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0978c
	if (!ctx.cr6.eq) goto loc_82E0978C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e09754
	if (ctx.cr6.lt) goto loc_82E09754;
loc_82E09780:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E0978C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e096f0
	ctx.lr = 0x82E09798;
	sub_82E096F0(ctx, base);
loc_82E09798:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E097A4"))) PPC_WEAK_FUNC(sub_82E097A4);
PPC_FUNC_IMPL(__imp__sub_82E097A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E097A8"))) PPC_WEAK_FUNC(sub_82E097A8);
PPC_FUNC_IMPL(__imp__sub_82E097A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e097bc
	if (!ctx.cr6.eq) goto loc_82E097BC;
	// li r3,-131
	ctx.r3.s64 = -131;
	// blr 
	return;
loc_82E097BC:
	// b 0x82e25840
	sub_82E25840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E097C0"))) PPC_WEAK_FUNC(sub_82E097C0);
PPC_FUNC_IMPL(__imp__sub_82E097C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E097C8"))) PPC_WEAK_FUNC(sub_82E097C8);
PPC_FUNC_IMPL(__imp__sub_82E097C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E097D0"))) PPC_WEAK_FUNC(sub_82E097D0);
PPC_FUNC_IMPL(__imp__sub_82E097D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e097e4
	if (ctx.cr6.eq) goto loc_82E097E4;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82e097e8
	goto loc_82E097E8;
loc_82E097E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E097E8:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e097fc
	if (!ctx.cr6.lt) goto loc_82E097FC;
	// li r3,-131
	ctx.r3.s64 = -131;
	// blr 
	return;
loc_82E097FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e09818
	if (!ctx.cr6.eq) goto loc_82E09818;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E09818:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfd f0,-18360(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18360);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E09870"))) PPC_WEAK_FUNC(sub_82E09870);
PPC_FUNC_IMPL(__imp__sub_82E09870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
loc_82E09874:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e09884
	if (ctx.cr6.lt) goto loc_82E09884;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x82e09874
	goto loc_82E09874;
loc_82E09884:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e098a0
	if (!ctx.cr6.eq) goto loc_82E098A0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e098a8
	if (ctx.cr6.lt) goto loc_82E098A8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82e09874
	goto loc_82E09874;
loc_82E098A0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82e098b0
	if (!ctx.cr6.lt) goto loc_82E098B0;
loc_82E098A8:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
loc_82E098B0:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E098C0"))) PPC_WEAK_FUNC(sub_82E098C0);
PPC_FUNC_IMPL(__imp__sub_82E098C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E098C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e09958
	if (ctx.cr6.lt) goto loc_82E09958;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e09958
	if (ctx.cr6.eq) goto loc_82E09958;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82e09958
	if (!ctx.cr6.lt) goto loc_82E09958;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82e09938
	if (!ctx.cr6.lt) goto loc_82E09938;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e0992c
	if (!ctx.cr6.gt) goto loc_82E0992C;
loc_82E0990C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e098c0
	ctx.lr = 0x82E09918;
	sub_82E098C0(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e0990c
	if (ctx.cr6.lt) goto loc_82E0990C;
loc_82E0992C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E09938:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E09958:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E09964"))) PPC_WEAK_FUNC(sub_82E09964);
PPC_FUNC_IMPL(__imp__sub_82E09964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E09968"))) PPC_WEAK_FUNC(sub_82E09968);
PPC_FUNC_IMPL(__imp__sub_82E09968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E09970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e099f8
	if (ctx.cr6.lt) goto loc_82E099F8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e099f8
	if (ctx.cr6.eq) goto loc_82E099F8;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82e099f8
	if (!ctx.cr6.lt) goto loc_82E099F8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82e099e0
	if (!ctx.cr6.lt) goto loc_82E099E0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e099d4
	if (!ctx.cr6.gt) goto loc_82E099D4;
loc_82E099B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e09968
	ctx.lr = 0x82E099C0;
	sub_82E09968(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e099b4
	if (ctx.cr6.lt) goto loc_82E099B4;
loc_82E099D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E099E0:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82E099F8:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E09A04"))) PPC_WEAK_FUNC(sub_82E09A04);
PPC_FUNC_IMPL(__imp__sub_82E09A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E09A08"))) PPC_WEAK_FUNC(sub_82E09A08);
PPC_FUNC_IMPL(__imp__sub_82E09A08) {
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e09ad8
	if (ctx.cr6.lt) goto loc_82E09AD8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e09ad8
	if (ctx.cr6.eq) goto loc_82E09AD8;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82e09ad8
	if (!ctx.cr6.lt) goto loc_82E09AD8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82e09a8c
	if (!ctx.cr6.lt) goto loc_82E09A8C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82e09a84
	if (!ctx.cr6.gt) goto loc_82E09A84;
loc_82E09A64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09a08
	ctx.lr = 0x82E09A70;
	sub_82E09A08(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e09a64
	if (ctx.cr6.lt) goto loc_82E09A64;
loc_82E09A84:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82e09ae0
	goto loc_82E09AE0;
loc_82E09A8C:
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r8,r4,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82e09ae0
	goto loc_82E09AE0;
loc_82E09AD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,15700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15700);
	ctx.f1.f64 = double(temp.f32);
loc_82E09AE0:
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

__attribute__((alias("__imp__sub_82E09AFC"))) PPC_WEAK_FUNC(sub_82E09AFC);
PPC_FUNC_IMPL(__imp__sub_82E09AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E09B00"))) PPC_WEAK_FUNC(sub_82E09B00);
PPC_FUNC_IMPL(__imp__sub_82E09B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E09B08;
	__savegprlr_22(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e09e38
	if (ctx.cr6.lt) goto loc_82E09E38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e09b38
	if (!ctx.cr6.eq) goto loc_82E09B38;
	// li r3,-138
	ctx.r3.s64 = -138;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E09B38:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// blt cr6,0x82e09e38
	if (ctx.cr6.lt) goto loc_82E09E38;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpd cr6,r30,r11
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x82e09e38
	if (ctx.cr6.gt) goto loc_82E09E38;
	// li r22,-1
	ctx.r22.s64 = -1;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r22,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r22.u64);
	// bl 0x82e251a8
	ctx.lr = 0x82E09B64;
	sub_82E251A8(ctx, base);
	// addi r25,r31,472
	ctx.r25.s64 = ctx.r31.s64 + 472;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e26980
	ctx.lr = 0x82E09B70;
	sub_82E26980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e083d0
	ctx.lr = 0x82E09B7C;
	sub_82E083D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x82e09bb4
	if (ctx.cr6.eq) goto loc_82E09BB4;
	// std r22,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r22.u64);
	// bl 0x82e242b0
	ctx.lr = 0x82E09B90;
	sub_82E242B0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e25e68
	ctx.lr = 0x82E09B98;
	sub_82E25E68(ctx, base);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E09BA0;
	sub_82E25A58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,-137
	ctx.r3.s64 = -137;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E09BB4:
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82e241f8
	ctx.lr = 0x82E09BC8;
	sub_82E241F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82e09bdc
	if (!ctx.cr6.lt) goto loc_82E09BDC;
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E09BDC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e25168
	ctx.lr = 0x82E09BE4;
	sub_82E25168(ctx, base);
	// li r24,2
	ctx.r24.s64 = 2;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82E09BEC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e09c9c
	if (ctx.cr6.lt) goto loc_82E09C9C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e25328
	ctx.lr = 0x82E09C04;
	sub_82E25328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82e09c9c
	if (!ctx.cr6.gt) goto loc_82E09C9C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e09c90
	if (ctx.cr6.eq) goto loc_82E09C90;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e25740
	ctx.lr = 0x82E09C30;
	sub_82E25740(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82e09c50
	if (!ctx.cr6.lt) goto loc_82E09C50;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E09C48;
	sub_82E25328(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82e09c7c
	goto loc_82E09C7C;
loc_82E09C50:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e09c68
	if (ctx.cr6.eq) goto loc_82E09C68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E09C64;
	sub_82E25328(ctx, base);
	// b 0x82e09c7c
	goto loc_82E09C7C;
loc_82E09C68:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e09c7c
	if (ctx.cr6.eq) goto loc_82E09C7C;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82E09C7C:
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpdi cr6,r9,-1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, -1, ctx.xer);
	// bne cr6,0x82e09da8
	if (!ctx.cr6.eq) goto loc_82E09DA8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82e09bec
	goto loc_82E09BEC;
loc_82E09C90:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E09C9C;
	sub_82E25328(ctx, base);
loc_82E09C9C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82e09e10
	if (!ctx.cr6.eq) goto loc_82E09E10;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E09CB4;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e09dfc
	if (ctx.cr6.lt) goto loc_82E09DFC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e09d14
	if (ctx.cr6.lt) goto loc_82E09D14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e24158
	ctx.lr = 0x82E09CD0;
	sub_82E24158(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82e09d08
	if (ctx.cr6.eq) goto loc_82E09D08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240d8
	ctx.lr = 0x82E09CE4;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e09d08
	if (ctx.cr6.eq) goto loc_82E09D08;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e25e68
	ctx.lr = 0x82E09CF4;
	sub_82E25E68(ctx, base);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E09CFC;
	sub_82E25A58(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// bl 0x82e242b0
	ctx.lr = 0x82E09D08;
	sub_82E242B0(ctx, base);
loc_82E09D08:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82e09d80
	if (!ctx.cr6.lt) goto loc_82E09D80;
loc_82E09D14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e24158
	ctx.lr = 0x82E09D1C;
	sub_82E24158(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e09d54
	if (!ctx.cr6.gt) goto loc_82E09D54;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_82E09D34:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82e09d54
	if (ctx.cr6.eq) goto loc_82E09D54;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e09d34
	if (ctx.cr6.lt) goto loc_82E09D34;
loc_82E09D54:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82e09bec
	if (ctx.cr6.eq) goto loc_82E09BEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bl 0x82e251a8
	ctx.lr = 0x82E09D70;
	sub_82E251A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e251a8
	ctx.lr = 0x82E09D7C;
	sub_82E251A8(ctx, base);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_82E09D80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e24d18
	ctx.lr = 0x82E09D8C;
	sub_82E24D18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e24d18
	ctx.lr = 0x82E09D98;
	sub_82E24D18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240e8
	ctx.lr = 0x82E09DA0;
	sub_82E240E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82e09bec
	goto loc_82E09BEC;
loc_82E09DA8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bge cr6,0x82e09dc8
	if (!ctx.cr6.lt) goto loc_82E09DC8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82E09DC8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e09dec
	if (!ctx.cr6.gt) goto loc_82E09DEC;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82E09DD4:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e09dd4
	if (!ctx.cr6.eq) goto loc_82E09DD4;
loc_82E09DEC:
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// b 0x82e09e14
	goto loc_82E09E14;
loc_82E09DFC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09968
	ctx.lr = 0x82E09E08;
	sub_82E09968(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// b 0x82e09e14
	goto loc_82E09E14;
loc_82E09E10:
	// std r22,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r22.u64);
loc_82E09E14:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e242b0
	ctx.lr = 0x82E09E1C;
	sub_82E242B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E09E38:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E09E44"))) PPC_WEAK_FUNC(sub_82E09E44);
PPC_FUNC_IMPL(__imp__sub_82E09E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E09E48"))) PPC_WEAK_FUNC(sub_82E09E48);
PPC_FUNC_IMPL(__imp__sub_82E09E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82E09E50;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82e09968
	ctx.lr = 0x82E09E64;
	sub_82E09968(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e0a350
	if (ctx.cr6.lt) goto loc_82E0A350;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e09e8c
	if (!ctx.cr6.eq) goto loc_82E09E8C;
	// li r3,-138
	ctx.r3.s64 = -138;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E09E8C:
	// cmpdi cr6,r19,0
	ctx.cr6.compare<int64_t>(ctx.r19.s64, 0, ctx.xer);
	// blt cr6,0x82e0a350
	if (ctx.cr6.lt) goto loc_82E0A350;
	// cmpd cr6,r19,r20
	ctx.cr6.compare<int64_t>(ctx.r19.s64, ctx.r20.s64, ctx.xer);
	// bgt cr6,0x82e0a350
	if (ctx.cr6.gt) goto loc_82E0A350;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x82e09edc
	if (ctx.cr6.lt) goto loc_82E09EDC;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82E09EBC:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subf r20,r10,r20
	ctx.r20.s64 = ctx.r20.s64 - ctx.r10.s64;
	// cmpd cr6,r19,r20
	ctx.cr6.compare<int64_t>(ctx.r19.s64, ctx.r20.s64, ctx.xer);
	// bge cr6,0x82e09edc
	if (!ctx.cr6.lt) goto loc_82E09EDC;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82e09ebc
	if (!ctx.cr6.lt) goto loc_82E09EBC;
loc_82E09EDC:
	// lwz r8,68(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r9,r23,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r17,2
	ctx.r17.s64 = 2;
	// li r18,-1
	ctx.r18.s64 = -1;
	// ld r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// subf r11,r20,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r20.s64;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// add r22,r10,r27
	ctx.r22.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r25,r11,r19
	ctx.r25.u64 = ctx.r11.u64 + ctx.r19.u64;
	// cmpd cr6,r28,r26
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r26.s64, ctx.xer);
	// bge cr6,0x82e0a134
	if (!ctx.cr6.lt) goto loc_82E0A134;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r24,r11,44100
	ctx.r24.u64 = ctx.r11.u64 | 44100;
loc_82E09F2C:
	// subf r11,r28,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r28.s64;
	// cmpdi cr6,r11,8500
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 8500, ctx.xer);
	// bge cr6,0x82e09f40
	if (!ctx.cr6.lt) goto loc_82E09F40;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82e09f78
	goto loc_82E09F78;
loc_82E09F40:
	// subf r10,r27,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r27.s64;
	// subf r9,r27,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r27.s64;
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * ctx.r11.s64;
	// divd r11,r10,r9
	ctx.r11.s64 = ctx.r10.s64 / ctx.r9.s64;
	// rotldi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,-8500
	ctx.r31.s64 = ctx.r11.s64 + -8500;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// tdllei r9,0
	// cmpd cr6,r31,r28
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r28.s64, ctx.xer);
	// tdlgei r11,-1
	// bgt cr6,0x82e09f78
	if (ctx.cr6.gt) goto loc_82E09F78;
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
loc_82E09F78:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e09fc4
	if (ctx.cr6.eq) goto loc_82E09FC4;
	// lwz r11,700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e09fbc
	if (ctx.cr6.eq) goto loc_82E09FBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E09FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e09fbc
	if (ctx.cr6.eq) goto loc_82E09FBC;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// std r31,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r31.u64);
	// bl 0x82e25140
	ctx.lr = 0x82E09FB4;
	sub_82E25140(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e09fc8
	goto loc_82E09FC8;
loc_82E09FBC:
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x82e09fc8
	goto loc_82E09FC8;
loc_82E09FC4:
	// li r11,-129
	ctx.r11.s64 = -129;
loc_82E09FC8:
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bne cr6,0x82e0a32c
	if (!ctx.cr6.eq) goto loc_82E0A32C;
loc_82E09FD4:
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r5,r11,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r11.s64;
	// bl 0x82e08450
	ctx.lr = 0x82E09FE8;
	sub_82E08450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,-128
	ctx.cr6.compare<int64_t>(ctx.r30.s64, -128, ctx.xer);
	// beq cr6,0x82e0a32c
	if (ctx.cr6.eq) goto loc_82E0A32C;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bge cr6,0x82e0a080
	if (!ctx.cr6.lt) goto loc_82E0A080;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x82e0a134
	if (!ctx.cr6.gt) goto loc_82E0A134;
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(ctx.r31.s64, 0, ctx.xer);
	// beq cr6,0x82e0a32c
	if (ctx.cr6.eq) goto loc_82E0A32C;
	// addi r31,r31,-8500
	ctx.r31.s64 = ctx.r31.s64 + -8500;
	// cmpd cr6,r31,r28
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r28.s64, ctx.xer);
	// bgt cr6,0x82e0a020
	if (ctx.cr6.gt) goto loc_82E0A020;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E0A020:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e0a074
	if (ctx.cr6.eq) goto loc_82E0A074;
	// lwz r11,700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e0a068
	if (ctx.cr6.eq) goto loc_82E0A068;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0A048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e0a068
	if (ctx.cr6.eq) goto loc_82E0A068;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// std r31,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r31.u64);
	// bl 0x82e25140
	ctx.lr = 0x82E0A05C;
	sub_82E25140(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// b 0x82e0a110
	goto loc_82E0A110;
loc_82E0A068:
	// li r11,-128
	ctx.r11.s64 = -128;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// b 0x82e0a110
	goto loc_82E0A110;
loc_82E0A074:
	// li r11,-129
	ctx.r11.s64 = -129;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// b 0x82e0a110
	goto loc_82E0A110;
loc_82E0A080:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e24158
	ctx.lr = 0x82E0A088;
	sub_82E24158(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e0a118
	if (!ctx.cr6.eq) goto loc_82E0A118;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e240f8
	ctx.lr = 0x82E0A0A4;
	sub_82E240F8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82e0a118
	if (ctx.cr6.eq) goto loc_82E0A118;
	// cmpd cr6,r3,r25
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r25.s64, ctx.xer);
	// bge cr6,0x82e0a0d4
	if (!ctx.cr6.lt) goto loc_82E0A0D4;
	// subf r11,r3,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r3.s64;
	// ld r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpd cr6,r11,r24
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r24.s64, ctx.xer);
	// bgt cr6,0x82e0a12c
	if (ctx.cr6.gt) goto loc_82E0A12C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82e0a118
	goto loc_82E0A118;
loc_82E0A0D4:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x82e0a134
	if (!ctx.cr6.gt) goto loc_82E0A134;
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// cmpd cr6,r26,r10
	ctx.cr6.compare<int64_t>(ctx.r26.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x82e0a124
	if (!ctx.cr6.eq) goto loc_82E0A124;
	// addi r31,r31,-8500
	ctx.r31.s64 = ctx.r31.s64 + -8500;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpd cr6,r31,r28
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r28.s64, ctx.xer);
	// bgt cr6,0x82e0a100
	if (ctx.cr6.gt) goto loc_82E0A100;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E0A100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e083d0
	ctx.lr = 0x82E0A10C;
	sub_82E083D0(ctx, base);
	// extsw r30,r3
	ctx.r30.s64 = ctx.r3.s32;
loc_82E0A110:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bne cr6,0x82e0a32c
	if (!ctx.cr6.eq) goto loc_82E0A32C;
loc_82E0A118:
	// cmpd cr6,r28,r26
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r26.s64, ctx.xer);
	// blt cr6,0x82e09fd4
	if (ctx.cr6.lt) goto loc_82E09FD4;
	// b 0x82e0a134
	goto loc_82E0A134;
loc_82E0A124:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82E0A12C:
	// cmpd cr6,r28,r26
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r26.s64, ctx.xer);
	// blt cr6,0x82e09f2c
	if (ctx.cr6.lt) goto loc_82E09F2C;
loc_82E0A134:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e083d0
	ctx.lr = 0x82E0A140;
	sub_82E083D0(ctx, base);
	// extsw r30,r3
	ctx.r30.s64 = ctx.r3.s32;
	// std r18,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r18.u64);
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bne cr6,0x82e0a32c
	if (!ctx.cr6.eq) goto loc_82E0A32C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E0A160;
	sub_82E08450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// blt cr6,0x82e0a32c
	if (ctx.cr6.lt) goto loc_82E0A32C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r3,r29,472
	ctx.r3.s64 = ctx.r29.s64 + 472;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82e0a1ac
	if (ctx.cr6.eq) goto loc_82E0A1AC;
	// bl 0x82e25e68
	ctx.lr = 0x82E0A180;
	sub_82E25E68(ctx, base);
	// addi r3,r29,584
	ctx.r3.s64 = ctx.r29.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E0A188;
	sub_82E25A58(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r17,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r17.u32);
	// stw r23,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r23.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r9.u32);
	// stw r11,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// b 0x82e0a1b0
	goto loc_82E0A1B0;
loc_82E0A1AC:
	// bl 0x82e26980
	ctx.lr = 0x82E0A1B0;
	sub_82E26980(ctx, base);
loc_82E0A1B0:
	// addi r31,r29,112
	ctx.r31.s64 = ctx.r29.s64 + 112;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e251a8
	ctx.lr = 0x82E0A1C0;
	sub_82E251A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e24d18
	ctx.lr = 0x82E0A1CC;
	sub_82E24D18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e25330
	ctx.lr = 0x82E0A1D8;
	sub_82E25330(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82e0a21c
	if (ctx.cr6.eq) goto loc_82E0A21C;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
loc_82E0A1E8:
	// blt cr6,0x82e0a2b4
	if (ctx.cr6.lt) goto loc_82E0A2B4;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x82e0a2bc
	if (!ctx.cr6.eq) goto loc_82E0A2BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E0A204;
	sub_82E25328(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e25330
	ctx.lr = 0x82E0A210;
	sub_82E25330(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x82e0a1e8
	if (!ctx.cr6.eq) goto loc_82E0A1E8;
loc_82E0A21C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e083d0
	ctx.lr = 0x82E0A228;
	sub_82E083D0(ctx, base);
	// extsw r30,r3
	ctx.r30.s64 = ctx.r3.s32;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// blt cr6,0x82e0a32c
	if (ctx.cr6.lt) goto loc_82E0A32C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e08588
	ctx.lr = 0x82E0A240;
	sub_82E08588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// blt cr6,0x82e0a32c
	if (ctx.cr6.lt) goto loc_82E0A32C;
loc_82E0A24C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e24158
	ctx.lr = 0x82E0A254;
	sub_82E24158(ctx, base);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e0a280
	if (!ctx.cr6.eq) goto loc_82E0A280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240f8
	ctx.lr = 0x82E0A268;
	sub_82E240F8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bgt cr6,0x82e0a2a0
	if (ctx.cr6.gt) goto loc_82E0A2A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240c8
	ctx.lr = 0x82E0A278;
	sub_82E240C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e0a2a0
	if (ctx.cr6.eq) goto loc_82E0A2A0;
loc_82E0A280:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e08588
	ctx.lr = 0x82E0A290;
	sub_82E08588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bge cr6,0x82e0a24c
	if (!ctx.cr6.lt) goto loc_82E0A24C;
	// b 0x82e0a32c
	goto loc_82E0A32C;
loc_82E0A2A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e09b00
	ctx.lr = 0x82E0A2AC;
	sub_82E09B00(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E0A2B4:
	// li r30,-136
	ctx.r30.s64 = -136;
	// b 0x82e0a32c
	goto loc_82E0A32C;
loc_82E0A2BC:
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// std r11,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r11.u64);
	// bge cr6,0x82e0a2e4
	if (!ctx.cr6.lt) goto loc_82E0A2E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r11.u64);
loc_82E0A2E4:
	// ld r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 80);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpd cr6,r11,r19
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r19.s64, ctx.xer);
	// std r11,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r11.u64);
	// bgt cr6,0x82e0a328
	if (ctx.cr6.gt) goto loc_82E0A328;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e09968
	ctx.lr = 0x82E0A304;
	sub_82E09968(ctx, base);
	// cmpd cr6,r19,r3
	ctx.cr6.compare<int64_t>(ctx.r19.s64, ctx.r3.s64, ctx.xer);
	// bgt cr6,0x82e0a328
	if (ctx.cr6.gt) goto loc_82E0A328;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// stfs f0,104(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E0A328:
	// li r30,-129
	ctx.r30.s64 = -129;
loc_82E0A32C:
	// addi r3,r29,472
	ctx.r3.s64 = ctx.r29.s64 + 472;
	// std r18,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r18.u64);
	// bl 0x82e25e68
	ctx.lr = 0x82E0A338;
	sub_82E25E68(ctx, base);
	// addi r3,r29,584
	ctx.r3.s64 = ctx.r29.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E0A340;
	sub_82E25A58(ctx, base);
	// extsw r3,r30
	ctx.r3.s64 = ctx.r30.s32;
	// stw r17,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r17.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82E0A350:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0A35C"))) PPC_WEAK_FUNC(sub_82E0A35C);
PPC_FUNC_IMPL(__imp__sub_82E0A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0A360"))) PPC_WEAK_FUNC(sub_82E0A360);
PPC_FUNC_IMPL(__imp__sub_82E0A360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E0A368;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x82e09e48
	ctx.lr = 0x82E0A380;
	sub_82E09E48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82e0a654
	if (ctx.cr6.lt) goto loc_82E0A654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09128
	ctx.lr = 0x82E0A390;
	sub_82E09128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0a654
	if (!ctx.cr6.eq) goto loc_82E0A654;
	// addi r27,r31,112
	ctx.r27.s64 = ctx.r31.s64 + 112;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82E0A3A4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e25330
	ctx.lr = 0x82E0A3B0;
	sub_82E25330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82e0a4c8
	if (!ctx.cr6.gt) goto loc_82E0A4C8;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e25740
	ctx.lr = 0x82E0A3D0;
	sub_82E25740(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82e0a3ec
	if (!ctx.cr6.lt) goto loc_82E0A3EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E0A3E8;
	sub_82E25328(ctx, base);
	// b 0x82e0a3a4
	goto loc_82E0A3A4;
loc_82E0A3EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e0a40c
	if (ctx.cr6.eq) goto loc_82E0A40C;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// sradi r11,r11,2
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
loc_82E0A40C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82e0cfb8
	ctx.lr = 0x82E0A418;
	sub_82E0CFB8(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// sradi r11,r11,2
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpd cr6,r11,r24
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r24.s64, ctx.xer);
	// bge cr6,0x82e0a5ac
	if (!ctx.cr6.lt) goto loc_82E0A5AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e25328
	ctx.lr = 0x82E0A440;
	sub_82E25328(ctx, base);
	// addi r30,r31,584
	ctx.r30.s64 = ctx.r31.s64 + 584;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e25640
	ctx.lr = 0x82E0A450;
	sub_82E25640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e26a50
	ctx.lr = 0x82E0A45C;
	sub_82E26A50(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// ble cr6,0x82e0a4c0
	if (!ctx.cr6.gt) goto loc_82E0A4C0;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// bge cr6,0x82e0a48c
	if (!ctx.cr6.lt) goto loc_82E0A48C;
	// std r25,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r25.u64);
loc_82E0A48C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e0a4c0
	if (!ctx.cr6.gt) goto loc_82E0A4C0;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
loc_82E0A49C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ld r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r9.u64);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e0a49c
	if (ctx.cr6.lt) goto loc_82E0A49C;
loc_82E0A4C0:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82e0a3a4
	goto loc_82E0A3A4;
loc_82E0A4C8:
	// bge cr6,0x82e0a4d4
	if (!ctx.cr6.lt) goto loc_82E0A4D4;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x82e0a5ac
	if (!ctx.cr6.eq) goto loc_82E0A5AC;
loc_82E0A4D4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08450
	ctx.lr = 0x82E0A4E4;
	sub_82E08450(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x82e0a5ac
	if (ctx.cr6.lt) goto loc_82E0A5AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e240d8
	ctx.lr = 0x82E0A4F4;
	sub_82E240D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e0a510
	if (ctx.cr6.eq) goto loc_82E0A510;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e25e68
	ctx.lr = 0x82E0A504;
	sub_82E25E68(ctx, base);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82e25a58
	ctx.lr = 0x82E0A50C;
	sub_82E25A58(ctx, base);
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
loc_82E0A510:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82e0a59c
	if (!ctx.cr6.lt) goto loc_82E0A59C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e24158
	ctx.lr = 0x82E0A524;
	sub_82E24158(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e0a55c
	if (!ctx.cr6.gt) goto loc_82E0A55C;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_82E0A53C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82e0a55c
	if (ctx.cr6.eq) goto loc_82E0A55C;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e0a53c
	if (ctx.cr6.lt) goto loc_82E0A53C;
loc_82E0A55C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82e0a3a4
	if (ctx.cr6.eq) goto loc_82E0A3A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bl 0x82e24158
	ctx.lr = 0x82E0A574;
	sub_82E24158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82e251a8
	ctx.lr = 0x82E0A588;
	sub_82E251A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09128
	ctx.lr = 0x82E0A590;
	sub_82E09128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0a654
	if (!ctx.cr6.eq) goto loc_82E0A654;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82E0A59C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e24d18
	ctx.lr = 0x82E0A5A8;
	sub_82E24D18(ctx, base);
	// b 0x82e0a3a4
	goto loc_82E0A3A4;
loc_82E0A5AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// cmpd cr6,r10,r24
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r24.s64, ctx.xer);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// bge cr6,0x82e0a650
	if (!ctx.cr6.lt) goto loc_82E0A650;
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
loc_82E0A5CC:
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r29,r11,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r11.s64;
	// bl 0x82e27498
	ctx.lr = 0x82E0A5E0;
	sub_82E27498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, ctx.xer);
	// ble cr6,0x82e0a5f4
	if (!ctx.cr6.gt) goto loc_82E0A5F4;
	// extsw r30,r29
	ctx.r30.s64 = ctx.r29.s32;
loc_82E0A5F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e27520
	ctx.lr = 0x82E0A600;
	sub_82E27520(ctx, base);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, ctx.xer);
	// std r10,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r10.u64);
	// bge cr6,0x82e0a644
	if (!ctx.cr6.lt) goto loc_82E0A644;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09228
	ctx.lr = 0x82E0A62C;
	sub_82E09228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82e0a644
	if (ctx.cr6.gt) goto loc_82E0A644;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09968
	ctx.lr = 0x82E0A640;
	sub_82E09968(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
loc_82E0A644:
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// cmpd cr6,r11,r24
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r24.s64, ctx.xer);
	// blt cr6,0x82e0a5cc
	if (ctx.cr6.lt) goto loc_82E0A5CC;
loc_82E0A650:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E0A654:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0A65C"))) PPC_WEAK_FUNC(sub_82E0A65C);
PPC_FUNC_IMPL(__imp__sub_82E0A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0A660"))) PPC_WEAK_FUNC(sub_82E0A660);
PPC_FUNC_IMPL(__imp__sub_82E0A660) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,88(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// lfs f12,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82e0a69c
	if (!ctx.cr6.lt) goto loc_82E0A69C;
loc_82E0A694:
	// li r3,-131
	ctx.r3.s64 = -131;
	// b 0x82e0a764
	goto loc_82E0A764;
loc_82E0A69C:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0a6b0
	if (!ctx.cr6.eq) goto loc_82E0A6B0;
	// li r3,-138
	ctx.r3.s64 = -138;
	// b 0x82e0a764
	goto loc_82E0A764;
loc_82E0A6B0:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82e0a694
	if (ctx.cr6.lt) goto loc_82E0A694;
	// lwz r30,52(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e0a708
	if (!ctx.cr6.gt) goto loc_82E0A708;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82E0A6CC:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e09a08
	ctx.lr = 0x82E0A6D8;
	sub_82E09A08(ctx, base);
	// fadds f0,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82e0a708
	if (ctx.cr6.lt) goto loc_82E0A708;
	// lwz r11,68(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82e0a6cc
	if (ctx.cr6.lt) goto loc_82E0A6CC;
loc_82E0A708:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82e0a694
	if (ctx.cr6.eq) goto loc_82E0A694;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// fsubs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82e0a360
	ctx.lr = 0x82E0A764;
	sub_82E0A360(ctx, base);
loc_82E0A764:
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

__attribute__((alias("__imp__sub_82E0A77C"))) PPC_WEAK_FUNC(sub_82E0A77C);
PPC_FUNC_IMPL(__imp__sub_82E0A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0A780"))) PPC_WEAK_FUNC(sub_82E0A780);
PPC_FUNC_IMPL(__imp__sub_82E0A780) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,88(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// lfs f12,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82e0a7bc
	if (!ctx.cr6.lt) goto loc_82E0A7BC;
loc_82E0A7B4:
	// li r3,-131
	ctx.r3.s64 = -131;
	// b 0x82e0a884
	goto loc_82E0A884;
loc_82E0A7BC:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e0a7d0
	if (!ctx.cr6.eq) goto loc_82E0A7D0;
	// li r3,-138
	ctx.r3.s64 = -138;
	// b 0x82e0a884
	goto loc_82E0A884;
loc_82E0A7D0:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82e0a7b4
	if (ctx.cr6.lt) goto loc_82E0A7B4;
	// lwz r30,52(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e0a828
	if (!ctx.cr6.gt) goto loc_82E0A828;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82E0A7EC:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e09a08
	ctx.lr = 0x82E0A7F8;
	sub_82E09A08(ctx, base);
	// fadds f0,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82e0a828
	if (ctx.cr6.lt) goto loc_82E0A828;
	// lwz r11,68(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82e0a7ec
	if (ctx.cr6.lt) goto loc_82E0A7EC;
loc_82E0A828:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82e0a7b4
	if (ctx.cr6.eq) goto loc_82E0A7B4;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// fsubs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82e09e48
	ctx.lr = 0x82E0A884;
	sub_82E09E48(ctx, base);
loc_82E0A884:
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

__attribute__((alias("__imp__sub_82E0A89C"))) PPC_WEAK_FUNC(sub_82E0A89C);
PPC_FUNC_IMPL(__imp__sub_82E0A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0A8A0"))) PPC_WEAK_FUNC(sub_82E0A8A0);
PPC_FUNC_IMPL(__imp__sub_82E0A8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e0a8b4
	if (!ctx.cr6.lt) goto loc_82E0A8B4;
	// li r3,-131
	ctx.r3.s64 = -131;
	// blr 
	return;
loc_82E0A8B4:
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0A8BC"))) PPC_WEAK_FUNC(sub_82E0A8BC);
PPC_FUNC_IMPL(__imp__sub_82E0A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0A8C0"))) PPC_WEAK_FUNC(sub_82E0A8C0);
PPC_FUNC_IMPL(__imp__sub_82E0A8C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e0a8d4
	if (!ctx.cr6.lt) goto loc_82E0A8D4;
	// li r3,-131
	ctx.r3.s64 = -131;
	// blr 
	return;
loc_82E0A8D4:
	// ld r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0A8DC"))) PPC_WEAK_FUNC(sub_82E0A8DC);
PPC_FUNC_IMPL(__imp__sub_82E0A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0A8E0"))) PPC_WEAK_FUNC(sub_82E0A8E0);
PPC_FUNC_IMPL(__imp__sub_82E0A8E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,88(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// lfs f12,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82e0a920
	if (!ctx.cr6.lt) goto loc_82E0A920;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,15700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15700);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e0a9e4
	goto loc_82E0A9E4;
loc_82E0A920:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0a9a0
	if (ctx.cr6.eq) goto loc_82E0A9A0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82e09968
	ctx.lr = 0x82E0A938;
	sub_82E09968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82e09a08
	ctx.lr = 0x82E0A948;
	sub_82E09A08(ctx, base);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82e0a9a0
	if (ctx.cr6.lt) goto loc_82E0A9A0;
	// lwz r11,68(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r30,80(r7)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_82E0A970:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// bl 0x82e09a08
	ctx.lr = 0x82E0A984;
	sub_82E09A08(ctx, base);
	// cmpd cr6,r30,r5
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r5.s64, ctx.xer);
	// fsubs f12,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// bge cr6,0x82e0a9a0
	if (!ctx.cr6.lt) goto loc_82E0A9A0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82e0a970
	if (!ctx.cr6.lt) goto loc_82E0A970;
loc_82E0A9A0:
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r9,80(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r5,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82E0A9E4:
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

__attribute__((alias("__imp__sub_82E0A9FC"))) PPC_WEAK_FUNC(sub_82E0A9FC);
PPC_FUNC_IMPL(__imp__sub_82E0A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0AA00"))) PPC_WEAK_FUNC(sub_82E0AA00);
PPC_FUNC_IMPL(__imp__sub_82E0AA00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0aa58
	if (ctx.cr6.eq) goto loc_82E0AA58;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82e0aa34
	if (!ctx.cr6.lt) goto loc_82E0AA34;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0aa58
	if (ctx.cr6.lt) goto loc_82E0AA58;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82E0AA34:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e0aa48
	if (ctx.cr6.lt) goto loc_82E0AA48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E0AA48:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82E0AA58:
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0AA60"))) PPC_WEAK_FUNC(sub_82E0AA60);
PPC_FUNC_IMPL(__imp__sub_82E0AA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0aab8
	if (ctx.cr6.eq) goto loc_82E0AAB8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82e0aa94
	if (!ctx.cr6.lt) goto loc_82E0AA94;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0aab8
	if (ctx.cr6.lt) goto loc_82E0AAB8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82E0AA94:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e0aaa8
	if (ctx.cr6.lt) goto loc_82E0AAA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E0AAA8:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82E0AAB8:
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0AAC0"))) PPC_WEAK_FUNC(sub_82E0AAC0);
PPC_FUNC_IMPL(__imp__sub_82E0AAC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0AAC8"))) PPC_WEAK_FUNC(sub_82E0AAC8);
PPC_FUNC_IMPL(__imp__sub_82E0AAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E0AAD0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,88(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e0ab08
	if (!ctx.cr6.lt) goto loc_82E0AB08;
loc_82E0AAFC:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E0AB08:
	// lwz r11,88(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82e0ab2c
	if (!ctx.cr6.eq) goto loc_82E0AB2C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r24,472
	ctx.r3.s64 = ctx.r24.s64 + 472;
	// bl 0x82e27498
	ctx.lr = 0x82E0AB20;
	sub_82E27498(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82e0ab58
	if (!ctx.cr6.eq) goto loc_82E0AB58;
loc_82E0AB2C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e09228
	ctx.lr = 0x82E0AB40;
	sub_82E09228(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82e0b670
	if (ctx.cr6.eq) goto loc_82E0B670;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82e0ab08
	if (ctx.cr6.gt) goto loc_82E0AB08;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E0AB58:
	// ble cr6,0x82e0b664
	if (!ctx.cr6.gt) goto loc_82E0B664;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0ab88
	if (ctx.cr6.eq) goto loc_82E0AB88;
	// lwz r11,88(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0ab88
	if (ctx.cr6.lt) goto loc_82E0AB88;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// lwz r10,72(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e0ab8c
	goto loc_82E0AB8C;
loc_82E0AB88:
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
loc_82E0AB8C:
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mullw r23,r26,r29
	ctx.r23.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// divw r11,r30,r23
	ctx.r11.s32 = ctx.r30.s32 / ctx.r23.s32;
	// andc r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 & ~ctx.r10.u64;
	// twllei r23,0
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// twlgei r10,-1
	// ble cr6,0x82e0abb8
	if (!ctx.cr6.gt) goto loc_82E0ABB8;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82E0ABB8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82e0aafc
	if (!ctx.cr6.gt) goto loc_82E0AAFC;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82e0adb8
	if (!ctx.cr6.eq) goto loc_82E0ADB8;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm r8,r11,2,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x80;
	// ble cr6,0x82e0b62c
	if (!ctx.cr6.gt) goto loc_82E0B62C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lfs f13,6380(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17348);
	ctx.f0.f64 = double(temp.f32);
loc_82E0ABF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82e0ad38
	if (ctx.cr6.lt) goto loc_82E0AD38;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E0AC14:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfsx f12,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x82e0ac40
	if (!ctx.cr6.gt) goto loc_82E0AC40;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82e0ac4c
	goto loc_82E0AC4C;
loc_82E0AC40:
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x82e0ac50
	if (!ctx.cr6.lt) goto loc_82E0AC50;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82E0AC4C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0AC50:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lfsx f12,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x82e0ac84
	if (!ctx.cr6.gt) goto loc_82E0AC84;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82e0ac90
	goto loc_82E0AC90;
loc_82E0AC84:
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x82e0ac94
	if (!ctx.cr6.lt) goto loc_82E0AC94;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82E0AC90:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0AC94:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfsx f12,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x82e0acc8
	if (!ctx.cr6.gt) goto loc_82E0ACC8;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82e0acd4
	goto loc_82E0ACD4;
loc_82E0ACC8:
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x82e0acd8
	if (!ctx.cr6.lt) goto loc_82E0ACD8;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82E0ACD4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0ACD8:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfsx f12,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x82e0ad0c
	if (!ctx.cr6.gt) goto loc_82E0AD0C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82e0ad18
	goto loc_82E0AD18;
loc_82E0AD0C:
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x82e0ad1c
	if (!ctx.cr6.lt) goto loc_82E0AD1C;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82E0AD18:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0AD1C:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x82e0ac14
	if (!ctx.cr6.eq) goto loc_82E0AC14;
loc_82E0AD38:
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82e0ada4
	if (!ctx.cr6.lt) goto loc_82E0ADA4;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82E0AD4C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfsx f12,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x82e0ad78
	if (!ctx.cr6.gt) goto loc_82E0AD78;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82e0ad84
	goto loc_82E0AD84;
loc_82E0AD78:
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x82e0ad88
	if (!ctx.cr6.lt) goto loc_82E0AD88;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82E0AD84:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0AD88:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne cr6,0x82e0ad4c
	if (!ctx.cr6.eq) goto loc_82E0AD4C;
loc_82E0ADA4:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e0abf4
	if (!ctx.cr6.eq) goto loc_82E0ABF4;
	// b 0x82e0b62c
	goto loc_82E0B62C;
loc_82E0ADB8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e0adc8
	if (ctx.cr6.eq) goto loc_82E0ADC8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82e0add0
	goto loc_82E0ADD0;
loc_82E0ADC8:
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
loc_82E0ADD0:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82e0b1b4
	if (!ctx.cr6.eq) goto loc_82E0B1B4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e0afc0
	if (ctx.cr6.eq) goto loc_82E0AFC0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82e0b62c
	if (!ctx.cr6.gt) goto loc_82E0B62C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f13,-17812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
loc_82E0AE00:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// lwzx r5,r4,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// blt cr6,0x82e0af40
	if (ctx.cr6.lt) goto loc_82E0AF40;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// rlwinm r8,r26,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E0AE30:
	// lfs f12,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82e0ae58
	if (!ctx.cr6.gt) goto loc_82E0AE58;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82e0ae64
	goto loc_82E0AE64;
loc_82E0AE58:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82e0ae68
	if (!ctx.cr6.lt) goto loc_82E0AE68;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82E0AE64:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82E0AE68:
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lfs f12,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82e0ae98
	if (!ctx.cr6.gt) goto loc_82E0AE98;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82e0aea4
	goto loc_82E0AEA4;
loc_82E0AE98:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82e0aea8
	if (!ctx.cr6.lt) goto loc_82E0AEA8;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82E0AEA4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0AEA8:
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82e0aed8
	if (!ctx.cr6.gt) goto loc_82E0AED8;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82e0aee4
	goto loc_82E0AEE4;
loc_82E0AED8:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82e0aee8
	if (!ctx.cr6.lt) goto loc_82E0AEE8;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82E0AEE4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0AEE8:
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82e0af18
	if (!ctx.cr6.gt) goto loc_82E0AF18;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82e0af24
	goto loc_82E0AF24;
loc_82E0AF18:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82e0af28
	if (!ctx.cr6.lt) goto loc_82E0AF28;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82E0AF24:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82E0AF28:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82e0ae30
	if (!ctx.cr6.eq) goto loc_82E0AE30;
loc_82E0AF40:
	// cmpw cr6,r6,r25
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82e0afa8
	if (!ctx.cr6.lt) goto loc_82E0AFA8;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r26,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r10,r6,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r6.s64;
loc_82E0AF58:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82e0af80
	if (!ctx.cr6.gt) goto loc_82E0AF80;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82e0af8c
	goto loc_82E0AF8C;
loc_82E0AF80:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82e0af90
	if (!ctx.cr6.lt) goto loc_82E0AF90;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82E0AF8C:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82E0AF90:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e0af58
	if (!ctx.cr6.eq) goto loc_82E0AF58;
loc_82E0AFA8:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0ae00
	if (!ctx.cr6.eq) goto loc_82E0AE00;
	// b 0x82e0b62c
	goto loc_82E0B62C;
loc_82E0AFC0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82e0b62c
	if (!ctx.cr6.gt) goto loc_82E0B62C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lfs f13,-17812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
loc_82E0AFE0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// lwzx r4,r3,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blt cr6,0x82e0b130
	if (ctx.cr6.lt) goto loc_82E0B130;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// rlwinm r8,r26,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E0B010:
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b038
	if (!ctx.cr6.gt) goto loc_82E0B038;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82e0b044
	goto loc_82E0B044;
loc_82E0B038:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b048
	if (!ctx.cr6.lt) goto loc_82E0B048;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82E0B044:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82E0B048:
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b07c
	if (!ctx.cr6.gt) goto loc_82E0B07C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b088
	goto loc_82E0B088;
loc_82E0B07C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b08c
	if (!ctx.cr6.lt) goto loc_82E0B08C;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B088:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82E0B08C:
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b0c0
	if (!ctx.cr6.gt) goto loc_82E0B0C0;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b0cc
	goto loc_82E0B0CC;
loc_82E0B0C0:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b0d0
	if (!ctx.cr6.lt) goto loc_82E0B0D0;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B0CC:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82E0B0D0:
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b104
	if (!ctx.cr6.gt) goto loc_82E0B104;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b110
	goto loc_82E0B110;
loc_82E0B104:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b114
	if (!ctx.cr6.lt) goto loc_82E0B114;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B110:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82E0B114:
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x82e0b010
	if (!ctx.cr6.eq) goto loc_82E0B010;
loc_82E0B130:
	// cmpw cr6,r5,r25
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82e0b19c
	if (!ctx.cr6.lt) goto loc_82E0B19C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r26,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r11,r5,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r5.s64;
loc_82E0B148:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f12.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b170
	if (!ctx.cr6.gt) goto loc_82E0B170;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82e0b17c
	goto loc_82E0B17C;
loc_82E0B170:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b180
	if (!ctx.cr6.lt) goto loc_82E0B180;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_82E0B17C:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_82E0B180:
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bne cr6,0x82e0b148
	if (!ctx.cr6.eq) goto loc_82E0B148;
loc_82E0B19C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e0afe0
	if (!ctx.cr6.eq) goto loc_82E0AFE0;
	// b 0x82e0b62c
	goto loc_82E0B62C;
loc_82E0B1B4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e0b400
	if (ctx.cr6.eq) goto loc_82E0B400;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82e0b62c
	if (!ctx.cr6.gt) goto loc_82E0B62C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f13,-17812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
loc_82E0B1E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82e0b370
	if (ctx.cr6.lt) goto loc_82E0B370;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E0B200:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b22c
	if (!ctx.cr6.gt) goto loc_82E0B22C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b238
	goto loc_82E0B238;
loc_82E0B22C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b238
	if (!ctx.cr6.lt) goto loc_82E0B238;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B238:
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b284
	if (!ctx.cr6.gt) goto loc_82E0B284;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b290
	goto loc_82E0B290;
loc_82E0B284:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b290
	if (!ctx.cr6.lt) goto loc_82E0B290;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B290:
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b2dc
	if (!ctx.cr6.gt) goto loc_82E0B2DC;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b2e8
	goto loc_82E0B2E8;
loc_82E0B2DC:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b2e8
	if (!ctx.cr6.lt) goto loc_82E0B2E8;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B2E8:
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b334
	if (!ctx.cr6.gt) goto loc_82E0B334;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b340
	goto loc_82E0B340;
loc_82E0B334:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b340
	if (!ctx.cr6.lt) goto loc_82E0B340;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B340:
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srawi r31,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 8;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// bne cr6,0x82e0b200
	if (!ctx.cr6.eq) goto loc_82E0B200;
loc_82E0B370:
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82e0b3ec
	if (!ctx.cr6.lt) goto loc_82E0B3EC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r5,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r5.s64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82E0B384:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfsx f12,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b3b0
	if (!ctx.cr6.gt) goto loc_82E0B3B0;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82e0b3bc
	goto loc_82E0B3BC;
loc_82E0B3B0:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b3bc
	if (!ctx.cr6.lt) goto loc_82E0B3BC;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82E0B3BC:
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// bne cr6,0x82e0b384
	if (!ctx.cr6.eq) goto loc_82E0B384;
loc_82E0B3EC:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0b1e0
	if (!ctx.cr6.eq) goto loc_82E0B1E0;
	// b 0x82e0b62c
	goto loc_82E0B62C;
loc_82E0B400:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82e0b62c
	if (!ctx.cr6.gt) goto loc_82E0B62C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f13,-17812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
loc_82E0B424:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82e0b5a4
	if (ctx.cr6.lt) goto loc_82E0B5A4;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E0B444:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b470
	if (!ctx.cr6.gt) goto loc_82E0B470;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b47c
	goto loc_82E0B47C;
loc_82E0B470:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b47c
	if (!ctx.cr6.lt) goto loc_82E0B47C;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B47C:
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// srawi r29,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 8;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b4c4
	if (!ctx.cr6.gt) goto loc_82E0B4C4;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b4d0
	goto loc_82E0B4D0;
loc_82E0B4C4:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b4d0
	if (!ctx.cr6.lt) goto loc_82E0B4D0;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B4D0:
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// srawi r29,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfsx f12,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b518
	if (!ctx.cr6.gt) goto loc_82E0B518;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b524
	goto loc_82E0B524;
loc_82E0B518:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b524
	if (!ctx.cr6.lt) goto loc_82E0B524;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B524:
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// srawi r29,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfsx f12,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b56c
	if (!ctx.cr6.gt) goto loc_82E0B56C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82e0b578
	goto loc_82E0B578;
loc_82E0B56C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b578
	if (!ctx.cr6.lt) goto loc_82E0B578;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82E0B578:
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srawi r30,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// bne cr6,0x82e0b444
	if (!ctx.cr6.eq) goto loc_82E0B444;
loc_82E0B5A4:
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82e0b61c
	if (!ctx.cr6.lt) goto loc_82E0B61C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r5,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r5.s64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82E0B5B8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfsx f12,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82e0b5e4
	if (!ctx.cr6.gt) goto loc_82E0B5E4;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82e0b5f0
	goto loc_82E0B5F0;
loc_82E0B5E4:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82e0b5f0
	if (!ctx.cr6.lt) goto loc_82E0B5F0;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82E0B5F0:
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r5,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// bne cr6,0x82e0b5b8
	if (!ctx.cr6.eq) goto loc_82E0B5B8;
loc_82E0B61C:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0b424
	if (!ctx.cr6.eq) goto loc_82E0B424;
loc_82E0B62C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r24,472
	ctx.r3.s64 = ctx.r24.s64 + 472;
	// bl 0x82e27520
	ctx.lr = 0x82E0B638;
	sub_82E27520(ctx, base);
	// ld r10,80(r24)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r24.u32 + 80);
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,80(r24)
	PPC_STORE_U64(ctx.r24.u32 + 80, ctx.r11.u64);
	// beq cr6,0x82e0b658
	if (ctx.cr6.eq) goto loc_82E0B658;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82E0B658:
	// mullw r3,r23,r25
	ctx.r3.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E0B664:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E0B670:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0B67C"))) PPC_WEAK_FUNC(sub_82E0B67C);
PPC_FUNC_IMPL(__imp__sub_82E0B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0B680"))) PPC_WEAK_FUNC(sub_82E0B680);
PPC_FUNC_IMPL(__imp__sub_82E0B680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E0B688;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e0b6b4
	if (!ctx.cr6.lt) goto loc_82E0B6B4;
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E0B6B4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82e0b6d8
	if (!ctx.cr6.eq) goto loc_82E0B6D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e27498
	ctx.lr = 0x82E0B6CC;
	sub_82E27498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82e0b704
	if (!ctx.cr6.eq) goto loc_82E0B704;
loc_82E0B6D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09228
	ctx.lr = 0x82E0B6EC;
	sub_82E09228(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82e0b758
	if (ctx.cr6.eq) goto loc_82E0B758;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82e0b6b4
	if (ctx.cr6.gt) goto loc_82E0B6B4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E0B704:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e0b714
	if (ctx.cr6.eq) goto loc_82E0B714;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E0B714:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82e0b720
	if (!ctx.cr6.gt) goto loc_82E0B720;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E0B720:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e27520
	ctx.lr = 0x82E0B72C;
	sub_82E27520(ctx, base);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// beq cr6,0x82e0b74c
	if (ctx.cr6.eq) goto loc_82E0B74C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82E0B74C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82E0B758:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0B764"))) PPC_WEAK_FUNC(sub_82E0B764);
PPC_FUNC_IMPL(__imp__sub_82E0B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0B768"))) PPC_WEAK_FUNC(sub_82E0B768);
PPC_FUNC_IMPL(__imp__sub_82E0B768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E0B770;
	__savegprlr_23(ctx, base);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82e0b788
	if (!ctx.cr6.gt) goto loc_82E0B788;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82E0B788:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82e0b8e0
	if (!ctx.cr6.gt) goto loc_82E0B8E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subf r23,r3,r4
	ctx.r23.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
loc_82E0B7A4:
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82e0b9d0
	if (!ctx.cr6.lt) goto loc_82E0B9D0;
	// lwzx r5,r23,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r25.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x82e0b880
	if (ctx.cr6.lt) goto loc_82E0B880;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r31,r5,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r5.s64;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E0B7E4:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r29,r4,r11
	ctx.r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f13,f7,f11,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r31,r29
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f12,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82e0b7e4
	if (!ctx.cr6.eq) goto loc_82E0B7E4;
loc_82E0B880:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82e0b8d0
	if (!ctx.cr6.lt) goto loc_82E0B8D0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r5,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r5.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r9,r30,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r10,r28,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82E0B89C:
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfsx f13,r4,r6
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82e0b89c
	if (!ctx.cr6.eq) goto loc_82E0B89C;
loc_82E0B8D0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e0b7a4
	if (ctx.cr6.lt) goto loc_82E0B7A4;
loc_82E0B8E0:
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82e0b9d0
	if (!ctx.cr6.lt) goto loc_82E0B9D0;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r24,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r24.s64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82E0B8F4:
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x82e0b984
	if (ctx.cr6.lt) goto loc_82E0B984;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r26,12
	ctx.r10.s64 = ctx.r26.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r8,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r8.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E0B920:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f0,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82e0b920
	if (!ctx.cr6.eq) goto loc_82E0B920;
loc_82E0B984:
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82e0b9c0
	if (!ctx.cr6.lt) goto loc_82E0B9C0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r8.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r10,r7,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r7.s64;
loc_82E0B99C:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82e0b99c
	if (!ctx.cr6.eq) goto loc_82E0B99C;
loc_82E0B9C0:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e0b8f4
	if (!ctx.cr6.eq) goto loc_82E0B8F4;
loc_82E0B9D0:
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0B9D4"))) PPC_WEAK_FUNC(sub_82E0B9D4);
PPC_FUNC_IMPL(__imp__sub_82E0B9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0B9D8"))) PPC_WEAK_FUNC(sub_82E0B9D8);
PPC_FUNC_IMPL(__imp__sub_82E0B9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82e0ba28
	if (ctx.cr6.eq) goto loc_82E0BA28;
loc_82E0B9F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09228
	ctx.lr = 0x82E0BA0C;
	sub_82E09228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82e0ba1c
	if (!ctx.cr6.lt) goto loc_82E0BA1C;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x82e0ba2c
	if (!ctx.cr6.eq) goto loc_82E0BA2C;
loc_82E0BA1C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82e0b9f8
	if (!ctx.cr6.eq) goto loc_82E0B9F8;
loc_82E0BA28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E0BA2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E0BA40"))) PPC_WEAK_FUNC(sub_82E0BA40);
PPC_FUNC_IMPL(__imp__sub_82E0BA40) {
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
	// addi r30,r31,472
	ctx.r30.s64 = ctx.r31.s64 + 472;
loc_82E0BA5C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82e0ba7c
	if (!ctx.cr6.eq) goto loc_82E0BA7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e27498
	ctx.lr = 0x82E0BA74;
	sub_82E27498(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0baa4
	if (!ctx.cr6.eq) goto loc_82E0BAA4;
loc_82E0BA7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09228
	ctx.lr = 0x82E0BA90;
	sub_82E09228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82e0ba5c
	if (!ctx.cr6.lt) goto loc_82E0BA5C;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// beq cr6,0x82e0ba5c
	if (ctx.cr6.eq) goto loc_82E0BA5C;
	// b 0x82e0baa8
	goto loc_82E0BAA8;
loc_82E0BAA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E0BAA8:
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

__attribute__((alias("__imp__sub_82E0BAC0"))) PPC_WEAK_FUNC(sub_82E0BAC0);
PPC_FUNC_IMPL(__imp__sub_82E0BAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E0BAC8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82e0bc60
	if (!ctx.cr6.gt) goto loc_82E0BC60;
loc_82E0BAEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e27498
	ctx.lr = 0x82E0BAF8;
	sub_82E27498(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82e0bb70
	if (ctx.cr6.eq) goto loc_82E0BB70;
	// subf r11,r27,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r27.s64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e0bb14
	if (!ctx.cr6.gt) goto loc_82E0BB14;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82E0BB14:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e0bb5c
	if (!ctx.cr6.gt) goto loc_82E0BB5C;
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E0BB30:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r11,r31,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E0BB48;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e0bb30
	if (ctx.cr6.lt) goto loc_82E0BB30;
loc_82E0BB5C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// bl 0x82e27520
	ctx.lr = 0x82E0BB6C;
	sub_82E27520(ctx, base);
	// b 0x82e0bb8c
	goto loc_82E0BB8C;
loc_82E0BB70:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e09228
	ctx.lr = 0x82E0BB84;
	sub_82E09228(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82e0bb9c
	if (ctx.cr6.eq) goto loc_82E0BB9C;
loc_82E0BB8C:
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82e0baec
	if (ctx.cr6.lt) goto loc_82E0BAEC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82E0BB9C:
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82e0bc60
	if (!ctx.cr6.lt) goto loc_82E0BC60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r21,472
	ctx.r3.s64 = ctx.r21.s64 + 472;
	// bl 0x82e27560
	ctx.lr = 0x82E0BBB0;
	sub_82E27560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0bc08
	if (!ctx.cr6.eq) goto loc_82E0BC08;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e0bc60
	if (!ctx.cr6.gt) goto loc_82E0BC60;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r27,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E0BBD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E0BBEC;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e0bbd8
	if (ctx.cr6.lt) goto loc_82E0BBD8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82E0BC08:
	// subf r11,r27,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r27.s64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e0bc18
	if (!ctx.cr6.gt) goto loc_82E0BC18;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82E0BC18:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e0bc60
	if (!ctx.cr6.gt) goto loc_82E0BC60;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E0BC34:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r11,r31,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E0BC4C;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e0bc34
	if (ctx.cr6.lt) goto loc_82E0BC34;
loc_82E0BC60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0BC68"))) PPC_WEAK_FUNC(sub_82E0BC68);
PPC_FUNC_IMPL(__imp__sub_82E0BC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E0BC70;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r22,r25
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82e0be64
	if (ctx.cr6.eq) goto loc_82E0BE64;
	// lwz r11,88(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e0bca0
	if (!ctx.cr6.lt) goto loc_82E0BCA0;
loc_82E0BC94:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82E0BCA0:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e0bc94
	if (ctx.cr6.lt) goto loc_82E0BC94;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e0b9d8
	ctx.lr = 0x82E0BCB4;
	sub_82E0B9D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0be68
	if (!ctx.cr6.eq) goto loc_82E0BE68;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e0ba40
	ctx.lr = 0x82E0BCC4;
	sub_82E0BA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0be68
	if (!ctx.cr6.eq) goto loc_82E0BE68;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r3,72(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0bcf8
	if (ctx.cr6.eq) goto loc_82E0BCF8;
	// lwz r11,88(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0bcf8
	if (ctx.cr6.lt) goto loc_82E0BCF8;
	// lwz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 96);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82e0bcfc
	goto loc_82E0BCFC;
loc_82E0BCF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E0BCFC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0bd28
	if (ctx.cr6.eq) goto loc_82E0BD28;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0bd28
	if (ctx.cr6.lt) goto loc_82E0BD28;
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e0bd2c
	goto loc_82E0BD2C;
loc_82E0BD28:
	// lwz r21,72(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
loc_82E0BD2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0bd3c
	if (!ctx.cr6.eq) goto loc_82E0BD3C;
	// li r28,-131
	ctx.r28.s64 = -131;
	// b 0x82e0bd44
	goto loc_82E0BD44;
loc_82E0BD3C:
	// bl 0x82e25840
	ctx.lr = 0x82E0BD40;
	sub_82E25840(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82E0BD44:
	// lwz r3,72(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0bd58
	if (!ctx.cr6.eq) goto loc_82E0BD58;
	// li r26,-131
	ctx.r26.s64 = -131;
	// b 0x82e0bd60
	goto loc_82E0BD60;
loc_82E0BD58:
	// bl 0x82e25840
	ctx.lr = 0x82E0BD5C;
	sub_82E25840(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82E0BD60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E0BD74;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82e0cfb8
	ctx.lr = 0x82E0BD8C;
	sub_82E0CFB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// sraw r28,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r28.s64 = ctx.r11.s32 >> temp.u32;
	// bl 0x82e0cfb8
	ctx.lr = 0x82E0BDA4;
	sub_82E0CFB8(ctx, base);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r27,r22,472
	ctx.r27.s64 = ctx.r22.s64 + 472;
	// li r4,0
	ctx.r4.s64 = 0;
	// sraw r24,r3,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r24.s64 = ctx.r3.s32 >> temp.u32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e27958
	ctx.lr = 0x82E0BDBC;
	sub_82E27958(ctx, base);
	// addi r26,r25,472
	ctx.r26.s64 = ctx.r25.s64 + 472;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e27958
	ctx.lr = 0x82E0BDD0;
	sub_82E27958(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e0be1c
	if (!ctx.cr6.gt) goto loc_82E0BE1C;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82E0BDEC:
	// neg r11,r8
	ctx.r11.s64 = -ctx.r8.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E0BDF8;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e0bdec
	if (ctx.cr6.lt) goto loc_82E0BDEC;
loc_82E0BE1C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e0bac0
	ctx.lr = 0x82E0BE34;
	sub_82E0BAC0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e27560
	ctx.lr = 0x82E0BE40;
	sub_82E27560(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e0b768
	ctx.lr = 0x82E0BE64;
	sub_82E0B768(ctx, base);
loc_82E0BE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E0BE68:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0BE70"))) PPC_WEAK_FUNC(sub_82E0BE70);
PPC_FUNC_IMPL(__imp__sub_82E0BE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E0BE78;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e0bea4
	if (!ctx.cr6.lt) goto loc_82E0BEA4;
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82E0BEA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e0b9d8
	ctx.lr = 0x82E0BEAC;
	sub_82E0B9D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c04c
	if (!ctx.cr6.eq) goto loc_82E0C04C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0bee0
	if (ctx.cr6.eq) goto loc_82E0BEE0;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0bee0
	if (ctx.cr6.lt) goto loc_82E0BEE0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82e0bee4
	goto loc_82E0BEE4;
loc_82E0BEE0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82E0BEE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0bef4
	if (!ctx.cr6.eq) goto loc_82E0BEF4;
	// li r11,-131
	ctx.r11.s64 = -131;
	// b 0x82e0befc
	goto loc_82E0BEFC;
loc_82E0BEF4:
	// bl 0x82e25840
	ctx.lr = 0x82E0BEF8;
	sub_82E25840(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E0BEFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bl 0x82e0cfb8
	ctx.lr = 0x82E0BF10;
	sub_82E0CFB8(ctx, base);
	// addi r27,r30,472
	ctx.r27.s64 = ctx.r30.s64 + 472;
	// li r4,0
	ctx.r4.s64 = 0;
	// sraw r25,r3,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r25.s64 = ctx.r3.s32 >> temp.u32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e27958
	ctx.lr = 0x82E0BF24;
	sub_82E27958(ctx, base);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E0BF38;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x82e0bf84
	if (!ctx.cr6.gt) goto loc_82E0BF84;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82E0BF58:
	// neg r11,r8
	ctx.r11.s64 = -ctx.r8.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E0BF64;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82e0bf58
	if (!ctx.cr6.eq) goto loc_82E0BF58;
loc_82E0BF84:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e0bac0
	ctx.lr = 0x82E0BF9C;
	sub_82E0BAC0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x82E0BFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c04c
	if (!ctx.cr6.eq) goto loc_82E0C04C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e0ba40
	ctx.lr = 0x82E0BFBC;
	sub_82E0BA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c04c
	if (!ctx.cr6.eq) goto loc_82E0C04C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0bff0
	if (ctx.cr6.eq) goto loc_82E0BFF0;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0bff0
	if (ctx.cr6.lt) goto loc_82E0BFF0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e0bff4
	goto loc_82E0BFF4;
loc_82E0BFF0:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
loc_82E0BFF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82e0cfb8
	ctx.lr = 0x82E0C000;
	sub_82E0CFB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sraw r29,r11,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r29.s64 = ctx.r11.s32 >> temp.u32;
	// bl 0x82e27958
	ctx.lr = 0x82E0C014;
	sub_82E27958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e27560
	ctx.lr = 0x82E0C024;
	sub_82E27560(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82e0b768
	ctx.lr = 0x82E0C048;
	sub_82E0B768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E0C04C:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C054"))) PPC_WEAK_FUNC(sub_82E0C054);
PPC_FUNC_IMPL(__imp__sub_82E0C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0C058"))) PPC_WEAK_FUNC(sub_82E0C058);
PPC_FUNC_IMPL(__imp__sub_82E0C058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32031
	ctx.r11.s64 = -2099183616;
	// addi r5,r11,-25856
	ctx.r5.s64 = ctx.r11.s64 + -25856;
	// b 0x82e0be70
	sub_82E0BE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C064"))) PPC_WEAK_FUNC(sub_82E0C064);
PPC_FUNC_IMPL(__imp__sub_82E0C064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0C068"))) PPC_WEAK_FUNC(sub_82E0C068);
PPC_FUNC_IMPL(__imp__sub_82E0C068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32031
	ctx.r11.s64 = -2099183616;
	// addi r5,r11,-23712
	ctx.r5.s64 = ctx.r11.s64 + -23712;
	// b 0x82e0be70
	sub_82E0BE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C074"))) PPC_WEAK_FUNC(sub_82E0C074);
PPC_FUNC_IMPL(__imp__sub_82E0C074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0C078"))) PPC_WEAK_FUNC(sub_82E0C078);
PPC_FUNC_IMPL(__imp__sub_82E0C078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32031
	ctx.r11.s64 = -2099183616;
	// addi r5,r11,-25016
	ctx.r5.s64 = ctx.r11.s64 + -25016;
	// b 0x82e0be70
	sub_82E0BE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C084"))) PPC_WEAK_FUNC(sub_82E0C084);
PPC_FUNC_IMPL(__imp__sub_82E0C084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0C088"))) PPC_WEAK_FUNC(sub_82E0C088);
PPC_FUNC_IMPL(__imp__sub_82E0C088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E0C090;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82e0c0c4
	if (!ctx.cr6.lt) goto loc_82E0C0C4;
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82E0C0C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e0b9d8
	ctx.lr = 0x82E0C0CC;
	sub_82E0B9D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c26c
	if (!ctx.cr6.eq) goto loc_82E0C26C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0c100
	if (ctx.cr6.eq) goto loc_82E0C100;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0c100
	if (ctx.cr6.lt) goto loc_82E0C100;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82e0c104
	goto loc_82E0C104;
loc_82E0C100:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82E0C104:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e0c114
	if (!ctx.cr6.eq) goto loc_82E0C114;
	// li r11,-131
	ctx.r11.s64 = -131;
	// b 0x82e0c11c
	goto loc_82E0C11C;
loc_82E0C114:
	// bl 0x82e25840
	ctx.lr = 0x82E0C118;
	sub_82E25840(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E0C11C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bl 0x82e0cfb8
	ctx.lr = 0x82E0C130;
	sub_82E0CFB8(ctx, base);
	// addi r27,r30,472
	ctx.r27.s64 = ctx.r30.s64 + 472;
	// li r4,0
	ctx.r4.s64 = 0;
	// sraw r25,r3,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r25.s64 = ctx.r3.s32 >> temp.u32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e27958
	ctx.lr = 0x82E0C144;
	sub_82E27958(ctx, base);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E0C158;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x82e0c1a4
	if (!ctx.cr6.gt) goto loc_82E0C1A4;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82E0C178:
	// neg r11,r8
	ctx.r11.s64 = -ctx.r8.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E0C184;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82e0c178
	if (!ctx.cr6.eq) goto loc_82E0C178;
loc_82E0C1A4:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e0bac0
	ctx.lr = 0x82E0C1BC;
	sub_82E0BAC0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x82E0C1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c26c
	if (!ctx.cr6.eq) goto loc_82E0C26C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e0ba40
	ctx.lr = 0x82E0C1DC;
	sub_82E0BA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c26c
	if (!ctx.cr6.eq) goto loc_82E0C26C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e0c210
	if (ctx.cr6.eq) goto loc_82E0C210;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82e0c210
	if (ctx.cr6.lt) goto loc_82E0C210;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e0c214
	goto loc_82E0C214;
loc_82E0C210:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
loc_82E0C214:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82e0cfb8
	ctx.lr = 0x82E0C220;
	sub_82E0CFB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sraw r29,r11,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r29.s64 = ctx.r11.s32 >> temp.u32;
	// bl 0x82e27958
	ctx.lr = 0x82E0C234;
	sub_82E27958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e27560
	ctx.lr = 0x82E0C244;
	sub_82E27560(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82e0b768
	ctx.lr = 0x82E0C268;
	sub_82E0B768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E0C26C:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C278"))) PPC_WEAK_FUNC(sub_82E0C278);
PPC_FUNC_IMPL(__imp__sub_82E0C278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32031
	ctx.r11.s64 = -2099183616;
	// addi r5,r11,-22944
	ctx.r5.s64 = ctx.r11.s64 + -22944;
	// b 0x82e0c088
	sub_82E0C088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C284"))) PPC_WEAK_FUNC(sub_82E0C284);
PPC_FUNC_IMPL(__imp__sub_82E0C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0C288"))) PPC_WEAK_FUNC(sub_82E0C288);
PPC_FUNC_IMPL(__imp__sub_82E0C288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32031
	ctx.r11.s64 = -2099183616;
	// addi r5,r11,-22656
	ctx.r5.s64 = ctx.r11.s64 + -22656;
	// b 0x82e0c088
	sub_82E0C088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C294"))) PPC_WEAK_FUNC(sub_82E0C294);
PPC_FUNC_IMPL(__imp__sub_82E0C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0C298"))) PPC_WEAK_FUNC(sub_82E0C298);
PPC_FUNC_IMPL(__imp__sub_82E0C298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E0C2A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// ld r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82e0c2fc
	if (ctx.cr6.eq) goto loc_82E0C2FC;
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e0c2fc
	if (ctx.cr6.eq) goto loc_82E0C2FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0C2E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0C2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// b 0x82e0c300
	goto loc_82E0C300;
loc_82E0C2FC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82E0C300:
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bne cr6,0x82e0c31c
	if (!ctx.cr6.eq) goto loc_82E0C31C;
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E0C31C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08588
	ctx.lr = 0x82E0C328;
	sub_82E08588(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// bge cr6,0x82e0c340
	if (!ctx.cr6.lt) goto loc_82E0C340;
	// extsw r3,r29
	ctx.r3.s64 = ctx.r29.s32;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E0C340:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e083d0
	ctx.lr = 0x82E0C34C;
	sub_82E083D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c3ec
	if (!ctx.cr6.eq) goto loc_82E0C3EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e087b0
	ctx.lr = 0x82E0C364;
	sub_82E087B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c3ec
	if (!ctx.cr6.eq) goto loc_82E0C3EC;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e088f8
	ctx.lr = 0x82E0C390;
	sub_82E088F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82e0c3a4
	if (!ctx.cr6.lt) goto loc_82E0C3A4;
	// li r3,-128
	ctx.r3.s64 = -128;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E0C3A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e0c3c0
	if (ctx.cr6.eq) goto loc_82E0C3C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,628
	ctx.r5.s64 = 628;
	// addi r4,r11,15616
	ctx.r4.s64 = ctx.r11.s64 + 15616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d86638
	ctx.lr = 0x82E0C3C0;
	sub_82D86638(ctx, base);
loc_82E0C3C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e08d68
	ctx.lr = 0x82E0C3CC;
	sub_82E08D68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e0c3e0
	if (ctx.cr6.eq) goto loc_82E0C3E0;
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E0C3E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e09b00
	ctx.lr = 0x82E0C3EC;
	sub_82E09B00(ctx, base);
loc_82E0C3EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C3F4"))) PPC_WEAK_FUNC(sub_82E0C3F4);
PPC_FUNC_IMPL(__imp__sub_82E0C3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E0C3F8"))) PPC_WEAK_FUNC(sub_82E0C3F8);
PPC_FUNC_IMPL(__imp__sub_82E0C3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E0C400;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e0c448
	if (ctx.cr6.eq) goto loc_82E0C448;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e0c448
	if (ctx.cr6.eq) goto loc_82E0C448;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E0C440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82e0c44c
	goto loc_82E0C44C;
loc_82E0C448:
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82E0C44C:
	// li r5,712
	ctx.r5.s64 = 712;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E0C45C;
	sub_82CB16F0(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r31,696
	ctx.r10.s64 = ctx.r31.s64 + 696;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82e248a8
	ctx.lr = 0x82E0C494;
	sub_82E248A8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e0c4c0
	if (ctx.cr6.eq) goto loc_82E0C4C0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e24998
	ctx.lr = 0x82E0C4A8;
	sub_82E24998(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E0C4B4;
	sub_82CB1160(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e24a60
	ctx.lr = 0x82E0C4C0;
	sub_82E24A60(ctx, base);
loc_82E0C4C0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82e0c4d0
	if (ctx.cr6.eq) goto loc_82E0C4D0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82E0C4D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// li r5,884
	ctx.r5.s64 = 884;
	// addi r30,r11,15616
	ctx.r30.s64 = ctx.r11.s64 + 15616;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d865e8
	ctx.lr = 0x82E0C4EC;
	sub_82D865E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// bne cr6,0x82e0c504
	if (!ctx.cr6.eq) goto loc_82E0C504;
loc_82E0C4F8:
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E0C504:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,889
	ctx.r5.s64 = 889;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d865e8
	ctx.lr = 0x82E0C518;
	sub_82D865E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// beq cr6,0x82e0c4f8
	if (ctx.cr6.eq) goto loc_82E0C4F8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82e241f8
	ctx.lr = 0x82E0C530;
	sub_82E241F8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82e08b30
	ctx.lr = 0x82E0C548;
	sub_82E08B30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82e0c570
	if (!ctx.cr6.lt) goto loc_82E0C570;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e09598
	ctx.lr = 0x82E0C564;
	sub_82E09598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E0C570:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E0C580"))) PPC_WEAK_FUNC(sub_82E0C580);
PPC_FUNC_IMPL(__imp__sub_82E0C580) {
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82e0c5ac
	if (ctx.cr6.eq) goto loc_82E0C5AC;
	// li r3,-131
	ctx.r3.s64 = -131;
	// b 0x82e0c5f8
	goto loc_82E0C5F8;
loc_82E0C5AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82e0c5ec
	if (ctx.cr6.eq) goto loc_82E0C5EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e0c298
	ctx.lr = 0x82E0C5C8;
	sub_82E0C298(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e0c5e4
	if (ctx.cr6.eq) goto loc_82E0C5E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e09598
	ctx.lr = 0x82E0C5E4;
	sub_82E09598(ctx, base);
loc_82E0C5E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82e0c5f8
	goto loc_82E0C5F8;
loc_82E0C5EC:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82E0C5F8:
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

__attribute__((alias("__imp__sub_82E0C610"))) PPC_WEAK_FUNC(sub_82E0C610);
PPC_FUNC_IMPL(__imp__sub_82E0C610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82e0c3f8
	ctx.lr = 0x82E0C628;
	sub_82E0C3F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e0c638
	if (!ctx.cr6.eq) goto loc_82E0C638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e0c580
	ctx.lr = 0x82E0C638;
	sub_82E0C580(ctx, base);
loc_82E0C638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

