#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8229AE7C"))) PPC_WEAK_FUNC(sub_8229AE7C);
PPC_FUNC_IMPL(__imp__sub_8229AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AE80"))) PPC_WEAK_FUNC(sub_8229AE80);
PPC_FUNC_IMPL(__imp__sub_8229AE80) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AE9C"))) PPC_WEAK_FUNC(sub_8229AE9C);
PPC_FUNC_IMPL(__imp__sub_8229AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AEA0"))) PPC_WEAK_FUNC(sub_8229AEA0);
PPC_FUNC_IMPL(__imp__sub_8229AEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8229AEA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8229aeec
	if (ctx.cr6.eq) goto loc_8229AEEC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// beq cr6,0x8229aeec
	if (ctx.cr6.eq) goto loc_8229AEEC;
loc_8229AED8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229aeec
	if (ctx.cr6.eq) goto loc_8229AEEC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229aed8
	if (!ctx.cr6.eq) goto loc_8229AED8;
loc_8229AEEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229af30
	if (ctx.cr6.eq) goto loc_8229AF30;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822a0678
	ctx.lr = 0x8229AF08;
	sub_822A0678(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8229b1ac
	if (ctx.cr6.eq) goto loc_8229B1AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229af30
	if (ctx.cr6.eq) goto loc_8229AF30;
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229af30
	if (ctx.cr6.eq) goto loc_8229AF30;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8229AF30:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229b1ac
	if (!ctx.cr6.eq) goto loc_8229B1AC;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229af50
	if (!ctx.cr6.eq) goto loc_8229AF50;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x822a82b0
	ctx.lr = 0x8229AF50;
	sub_822A82B0(ctx, base);
loc_8229AF50:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229af7c
	if (ctx.cr6.eq) goto loc_8229AF7C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8229AF74;
	sub_8233E028(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8229afa8
	goto loc_8229AFA8;
loc_8229AF7C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bne cr6,0x8229af90
	if (!ctx.cr6.eq) goto loc_8229AF90;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_8229AF90:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x822a8460
	ctx.lr = 0x8229AFA8;
	sub_822A8460(ctx, base);
loc_8229AFA8:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e1a0
	ctx.lr = 0x8229AFBC;
	sub_8233E1A0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229afd0
	if (ctx.cr6.eq) goto loc_8229AFD0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8229afd8
	goto loc_8229AFD8;
loc_8229AFD0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_8229AFD8:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-23728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23728);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229AFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x8229AFFC;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8590
	ctx.lr = 0x8229B004;
	sub_822A8590(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229b018
	if (ctx.cr6.eq) goto loc_8229B018;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822aa9e8
	ctx.lr = 0x8229B018;
	sub_822AA9E8(ctx, base);
loc_8229B018:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229b0e4
	if (ctx.cr6.eq) goto loc_8229B0E4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8229b04c
	if (ctx.cr6.eq) goto loc_8229B04C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8229b068
	if (!ctx.cr6.eq) goto loc_8229B068;
loc_8229B04C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8229b068
	if (!ctx.cr6.eq) goto loc_8229B068;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8229b06c
	if (ctx.cr6.eq) goto loc_8229B06C;
loc_8229B068:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8229B06C:
	// lwz r25,52(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82294680
	ctx.lr = 0x8229B074;
	sub_82294680(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8229b088
	if (!ctx.cr6.eq) goto loc_8229B088;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229b0e4
	if (ctx.cr6.eq) goto loc_8229B0E4;
loc_8229B088:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8229b0e4
	if (!ctx.cr6.eq) goto loc_8229B0E4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229b0e4
	if (!ctx.cr6.eq) goto loc_8229B0E4;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r25,44(r31)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r24,40(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r30,28868(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r23,r9,34,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0xFFFFFFFC00000000;
	// bl 0x822b4148
	ctx.lr = 0x8229B0C0;
	sub_822B4148(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x822a93e8
	ctx.lr = 0x8229B0E0;
	sub_822A93E8(ctx, base);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
loc_8229B0E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8229b12c
	if (ctx.cr6.eq) goto loc_8229B12C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bc00
	ctx.lr = 0x8229B0F8;
	sub_8229BC00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8229B0FC:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229b114
	if (ctx.cr6.eq) goto loc_8229B114;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229b0fc
	if (!ctx.cr6.eq) goto loc_8229B0FC;
loc_8229B114:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c07b0
	ctx.lr = 0x8229B11C;
	sub_822C07B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822aa9e8
	ctx.lr = 0x8229B128;
	sub_822AA9E8(ctx, base);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
loc_8229B12C:
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// ld r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r11,r11,-3600
	ctx.r11.s64 = ctx.r11.s64 + -3600;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r9,29168
	ctx.r9.s64 = ctx.r9.s64 + 29168;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// rlwinm r10,r6,2,17,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rlwinm r11,r5,2,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7FFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8229B1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229B1AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B1B8"))) PPC_WEAK_FUNC(sub_8229B1B8);
PPC_FUNC_IMPL(__imp__sub_8229B1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B1BC"))) PPC_WEAK_FUNC(sub_8229B1BC);
PPC_FUNC_IMPL(__imp__sub_8229B1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B1C0"))) PPC_WEAK_FUNC(sub_8229B1C0);
PPC_FUNC_IMPL(__imp__sub_8229B1C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229b1d0
	if (!ctx.cr6.eq) goto loc_8229B1D0;
loc_8229B1C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229B1D0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8229b1c8
	if (ctx.cr6.lt) goto loc_8229B1C8;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,-21944
	ctx.r11.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8229b1c8
	if (!ctx.cr6.lt) goto loc_8229B1C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b1c8
	if (ctx.cr6.eq) goto loc_8229B1C8;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B214"))) PPC_WEAK_FUNC(sub_8229B214);
PPC_FUNC_IMPL(__imp__sub_8229B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B218"))) PPC_WEAK_FUNC(sub_8229B218);
PPC_FUNC_IMPL(__imp__sub_8229B218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// rlwinm r8,r9,0,21,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8229b260
	if (!ctx.cr6.eq) goto loc_8229B260;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8229b2cc
	if (ctx.cr6.eq) goto loc_8229B2CC;
loc_8229B260:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e890
	ctx.lr = 0x8229B278;
	sub_8229E890(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229b2cc
	if (ctx.cr6.eq) goto loc_8229B2CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x8229B2BC;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x8229B2C4;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8229B2CC;
	sub_82299080(ctx, base);
loc_8229B2CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B2E0"))) PPC_WEAK_FUNC(sub_8229B2E0);
PPC_FUNC_IMPL(__imp__sub_8229B2E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229B2F4"))) PPC_WEAK_FUNC(sub_8229B2F4);
PPC_FUNC_IMPL(__imp__sub_8229B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B2F8"))) PPC_WEAK_FUNC(sub_8229B2F8);
PPC_FUNC_IMPL(__imp__sub_8229B2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
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
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229B318"))) PPC_WEAK_FUNC(sub_8229B318);
PPC_FUNC_IMPL(__imp__sub_8229B318) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229b3b8
	if (ctx.cr6.eq) goto loc_8229B3B8;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8229b3b8
	if (!ctx.cr6.eq) goto loc_8229B3B8;
	// li r12,1
	ctx.r12.s64 = 1;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 | ctx.r12.u64;
	// lwz r11,-3764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3764);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b3b8
	if (ctx.cr6.eq) goto loc_8229B3B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229B398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,116(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8229B3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b4260
	ctx.lr = 0x8229B3B8;
	sub_822B4260(ctx, base);
loc_8229B3B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229B3D4;
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

__attribute__((alias("__imp__sub_8229B3EC"))) PPC_WEAK_FUNC(sub_8229B3EC);
PPC_FUNC_IMPL(__imp__sub_8229B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B3F0"))) PPC_WEAK_FUNC(sub_8229B3F0);
PPC_FUNC_IMPL(__imp__sub_8229B3F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229B424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r7,r8,0,21,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// beq cr6,0x8229b49c
	if (ctx.cr6.eq) goto loc_8229B49C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229b49c
	if (!ctx.cr6.eq) goto loc_8229B49C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b49c
	if (ctx.cr6.eq) goto loc_8229B49C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229B47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8229B494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b4260
	ctx.lr = 0x8229B49C;
	sub_822B4260(ctx, base);
loc_8229B49C:
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

__attribute__((alias("__imp__sub_8229B4B4"))) PPC_WEAK_FUNC(sub_8229B4B4);
PPC_FUNC_IMPL(__imp__sub_8229B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B4B8"))) PPC_WEAK_FUNC(sub_8229B4B8);
PPC_FUNC_IMPL(__imp__sub_8229B4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229B4C8"))) PPC_WEAK_FUNC(sub_8229B4C8);
PPC_FUNC_IMPL(__imp__sub_8229B4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229B4D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229b504
	if (ctx.cr6.eq) goto loc_8229B504;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8229B504;
	sub_82294520(ctx, base);
loc_8229B504:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229b674
	if (ctx.cr6.eq) goto loc_8229B674;
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8229b5b4
	if (!ctx.cr6.eq) goto loc_8229B5B4;
	// bl 0x822955c8
	ctx.lr = 0x8229B524;
	sub_822955C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82295518
	ctx.lr = 0x8229B538;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8229B540:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8229b674
	if (!ctx.cr6.lt) goto loc_8229B674;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8229b5a8
	if (ctx.cr6.eq) goto loc_8229B5A8;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b58c
	if (ctx.cr6.eq) goto loc_8229B58C;
loc_8229B578:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229b59c
	if (ctx.cr6.eq) goto loc_8229B59C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229b578
	if (!ctx.cr6.eq) goto loc_8229B578;
loc_8229B58C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229b5a8
	if (ctx.cr6.eq) goto loc_8229B5A8;
loc_8229B59C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b4070
	ctx.lr = 0x8229B5A8;
	sub_822B4070(ctx, base);
loc_8229B5A8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82295518
	ctx.lr = 0x8229B5B0;
	sub_82295518(ctx, base);
	// b 0x8229b540
	goto loc_8229B540;
loc_8229B5B4:
	// bl 0x822955c8
	ctx.lr = 0x8229B5B8;
	sub_822955C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82295518
	ctx.lr = 0x8229B5CC;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8229B5D4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8229b674
	if (!ctx.cr6.lt) goto loc_8229B674;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x8229b668
	if (ctx.cr6.eq) goto loc_8229B668;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b620
	if (ctx.cr6.eq) goto loc_8229B620;
loc_8229B60C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229b630
	if (ctx.cr6.eq) goto loc_8229B630;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229b60c
	if (!ctx.cr6.eq) goto loc_8229B60C;
loc_8229B620:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229b668
	if (ctx.cr6.eq) goto loc_8229B668;
loc_8229B630:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b668
	if (ctx.cr6.eq) goto loc_8229B668;
loc_8229B63C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229b65c
	if (ctx.cr6.eq) goto loc_8229B65C;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229b63c
	if (!ctx.cr6.eq) goto loc_8229B63C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82295518
	ctx.lr = 0x8229B658;
	sub_82295518(ctx, base);
	// b 0x8229b5d4
	goto loc_8229B5D4;
loc_8229B65C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b4070
	ctx.lr = 0x8229B668;
	sub_822B4070(ctx, base);
loc_8229B668:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82295518
	ctx.lr = 0x8229B670;
	sub_82295518(ctx, base);
	// b 0x8229b5d4
	goto loc_8229B5D4;
loc_8229B674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B67C"))) PPC_WEAK_FUNC(sub_8229B67C);
PPC_FUNC_IMPL(__imp__sub_8229B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B680"))) PPC_WEAK_FUNC(sub_8229B680);
PPC_FUNC_IMPL(__imp__sub_8229B680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8229B688;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229b75c
	if (!ctx.cr6.gt) goto loc_8229B75C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8229B6B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r26,r29,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,56(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8229b748
	if (!ctx.cr6.eq) goto loc_8229B748;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8229b714
	if (!ctx.cr6.gt) goto loc_8229B714;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8229B704;
	sub_82294520(ctx, base);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8229b718
	goto loc_8229B718;
loc_8229B714:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8229B718:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229b728
	if (ctx.cr0.eq) goto loc_8229B728;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_8229B728:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d180
	ctx.lr = 0x8229B740;
	sub_8232D180(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_8229B748:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229b6b8
	if (ctx.cr6.lt) goto loc_8229B6B8;
loc_8229B75C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8229b7dc
	if (!ctx.cr6.gt) goto loc_8229B7DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// rldicr r29,r11,32,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
loc_8229B774:
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r9,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r9.u64);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8229B798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-3764(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3764);
	// bl 0x823c00b0
	ctx.lr = 0x8229B7A4;
	sub_823C00B0(ctx, base);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8229B7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,116(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229B7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8229b774
	if (!ctx.cr0.eq) goto loc_8229B774;
loc_8229B7DC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8229b810
	if (ctx.cr6.eq) goto loc_8229B810;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229b7fc
	if (!ctx.cr6.eq) goto loc_8229B7FC;
	// bl 0x822900a0
	ctx.lr = 0x8229B7F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8229B7FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229B810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229B810:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B818"))) PPC_WEAK_FUNC(sub_8229B818);
PPC_FUNC_IMPL(__imp__sub_8229B818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8229B820;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229b8f4
	if (!ctx.cr6.gt) goto loc_8229B8F4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8229B850:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r26,r29,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,56(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8229b8e0
	if (!ctx.cr6.eq) goto loc_8229B8E0;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8229b8ac
	if (!ctx.cr6.gt) goto loc_8229B8AC;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8229B89C;
	sub_82294520(ctx, base);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8229b8b0
	goto loc_8229B8B0;
loc_8229B8AC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8229B8B0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229b8c0
	if (ctx.cr0.eq) goto loc_8229B8C0;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_8229B8C0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d180
	ctx.lr = 0x8229B8D8;
	sub_8232D180(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_8229B8E0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229b850
	if (ctx.cr6.lt) goto loc_8229B850;
loc_8229B8F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8229b974
	if (!ctx.cr6.gt) goto loc_8229B974;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// rldicr r29,r11,32,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
loc_8229B90C:
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r9,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r9.u64);
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8229B930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-3764(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3764);
	// bl 0x823c00b0
	ctx.lr = 0x8229B93C;
	sub_823C00B0(ctx, base);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,108(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8229B950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,120(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229B968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8229b90c
	if (!ctx.cr0.eq) goto loc_8229B90C;
loc_8229B974:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8229b9a8
	if (ctx.cr6.eq) goto loc_8229B9A8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229b994
	if (!ctx.cr6.eq) goto loc_8229B994;
	// bl 0x822900a0
	ctx.lr = 0x8229B990;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8229B994:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229B9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229B9A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B9B0"))) PPC_WEAK_FUNC(sub_8229B9B0);
PPC_FUNC_IMPL(__imp__sub_8229B9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229B9C4"))) PPC_WEAK_FUNC(sub_8229B9C4);
PPC_FUNC_IMPL(__imp__sub_8229B9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B9C8"))) PPC_WEAK_FUNC(sub_8229B9C8);
PPC_FUNC_IMPL(__imp__sub_8229B9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229B9DC"))) PPC_WEAK_FUNC(sub_8229B9DC);
PPC_FUNC_IMPL(__imp__sub_8229B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B9E0"))) PPC_WEAK_FUNC(sub_8229B9E0);
PPC_FUNC_IMPL(__imp__sub_8229B9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229B9F4"))) PPC_WEAK_FUNC(sub_8229B9F4);
PPC_FUNC_IMPL(__imp__sub_8229B9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B9F8"))) PPC_WEAK_FUNC(sub_8229B9F8);
PPC_FUNC_IMPL(__imp__sub_8229B9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229BA0C"))) PPC_WEAK_FUNC(sub_8229BA0C);
PPC_FUNC_IMPL(__imp__sub_8229BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BA10"))) PPC_WEAK_FUNC(sub_8229BA10);
PPC_FUNC_IMPL(__imp__sub_8229BA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229BA24"))) PPC_WEAK_FUNC(sub_8229BA24);
PPC_FUNC_IMPL(__imp__sub_8229BA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BA28"))) PPC_WEAK_FUNC(sub_8229BA28);
PPC_FUNC_IMPL(__imp__sub_8229BA28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229BA3C"))) PPC_WEAK_FUNC(sub_8229BA3C);
PPC_FUNC_IMPL(__imp__sub_8229BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BA40"))) PPC_WEAK_FUNC(sub_8229BA40);
PPC_FUNC_IMPL(__imp__sub_8229BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x822a8590
	ctx.lr = 0x8229BA58;
	sub_822A8590(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ba7c
	if (ctx.cr6.eq) goto loc_8229BA7C;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mulli r11,r8,108
	ctx.r11.s64 = ctx.r8.s64 * 108;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r9.u32);
loc_8229BA7C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bc00
	ctx.lr = 0x8229BA94;
	sub_8229BC00(ctx, base);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229BAB4"))) PPC_WEAK_FUNC(sub_8229BAB4);
PPC_FUNC_IMPL(__imp__sub_8229BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BAB8"))) PPC_WEAK_FUNC(sub_8229BAB8);
PPC_FUNC_IMPL(__imp__sub_8229BAB8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822a1020
	sub_822A1020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229BACC"))) PPC_WEAK_FUNC(sub_8229BACC);
PPC_FUNC_IMPL(__imp__sub_8229BACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BAD0"))) PPC_WEAK_FUNC(sub_8229BAD0);
PPC_FUNC_IMPL(__imp__sub_8229BAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229baf4
	if (ctx.cr6.eq) goto loc_8229BAF4;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mulli r11,r9,108
	ctx.r11.s64 = ctx.r9.s64 * 108;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r8.u32);
loc_8229BAF4:
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229BB00"))) PPC_WEAK_FUNC(sub_8229BB00);
PPC_FUNC_IMPL(__imp__sub_8229BB00) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229bb74
	if (!ctx.cr6.eq) goto loc_8229BB74;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8229BB10:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229bb28
	if (ctx.cr6.eq) goto loc_8229BB28;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229bb10
	if (!ctx.cr6.eq) goto loc_8229BB10;
loc_8229BB28:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8229bb6c
	if (!ctx.cr6.eq) goto loc_8229BB6C;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21920
	ctx.r11.s64 = ctx.r11.s64 + -21920;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8229bb6c
	if (!ctx.cr6.gt) goto loc_8229BB6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8229BB4C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8229bb74
	if (ctx.cr6.eq) goto loc_8229BB74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8229bb4c
	if (ctx.cr6.lt) goto loc_8229BB4C;
loc_8229BB6C:
	// li r3,455
	ctx.r3.s64 = 455;
	// blr 
	return;
loc_8229BB74:
	// lwz r3,244(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229BB7C"))) PPC_WEAK_FUNC(sub_8229BB7C);
PPC_FUNC_IMPL(__imp__sub_8229BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BB80"))) PPC_WEAK_FUNC(sub_8229BB80);
PPC_FUNC_IMPL(__imp__sub_8229BB80) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229bbf4
	if (!ctx.cr6.eq) goto loc_8229BBF4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8229BB90:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229bba8
	if (ctx.cr6.eq) goto loc_8229BBA8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229bb90
	if (!ctx.cr6.eq) goto loc_8229BB90;
loc_8229BBA8:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8229bbec
	if (!ctx.cr6.eq) goto loc_8229BBEC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21920
	ctx.r11.s64 = ctx.r11.s64 + -21920;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8229bbec
	if (!ctx.cr6.gt) goto loc_8229BBEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8229BBCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8229bbf4
	if (ctx.cr6.eq) goto loc_8229BBF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8229bbcc
	if (ctx.cr6.lt) goto loc_8229BBCC;
loc_8229BBEC:
	// li r3,90
	ctx.r3.s64 = 90;
	// blr 
	return;
loc_8229BBF4:
	// lwz r3,252(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229BBFC"))) PPC_WEAK_FUNC(sub_8229BBFC);
PPC_FUNC_IMPL(__imp__sub_8229BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BC00"))) PPC_WEAK_FUNC(sub_8229BC00);
PPC_FUNC_IMPL(__imp__sub_8229BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229BC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8229bc78
	if (ctx.cr6.eq) goto loc_8229BC78;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8229BC24:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229bc3c
	if (ctx.cr6.eq) goto loc_8229BC3C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229bc24
	if (!ctx.cr6.eq) goto loc_8229BC24;
loc_8229BC3C:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229bc78
	if (!ctx.cr6.eq) goto loc_8229BC78;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8229bc60
	if (ctx.cr6.eq) goto loc_8229BC60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c06e0
	ctx.lr = 0x8229BC60;
	sub_822C06E0(ctx, base);
loc_8229BC60:
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8229bc78
	if (ctx.cr6.eq) goto loc_8229BC78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c0638
	ctx.lr = 0x8229BC78;
	sub_822C0638(ctx, base);
loc_8229BC78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229BC80"))) PPC_WEAK_FUNC(sub_8229BC80);
PPC_FUNC_IMPL(__imp__sub_8229BC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8229bcd0
	ctx.lr = 0x8229BCB4;
	sub_8229BCD0(ctx, base);
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

__attribute__((alias("__imp__sub_8229BCCC"))) PPC_WEAK_FUNC(sub_8229BCCC);
PPC_FUNC_IMPL(__imp__sub_8229BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BCD0"))) PPC_WEAK_FUNC(sub_8229BCD0);
PPC_FUNC_IMPL(__imp__sub_8229BCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229BCD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8229bd78
	if (ctx.cr6.eq) goto loc_8229BD78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229bd78
	if (ctx.cr6.eq) goto loc_8229BD78;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229bd40
	if (ctx.cr6.eq) goto loc_8229BD40;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8229bd40
	if (ctx.cr6.eq) goto loc_8229BD40;
	// bl 0x8229bcd0
	ctx.lr = 0x8229BD0C;
	sub_8229BCD0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82294680
	ctx.lr = 0x8229BD18;
	sub_82294680(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8229bd30
	if (ctx.cr6.eq) goto loc_8229BD30;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r29,52(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82294680
	ctx.lr = 0x8229BD30;
	sub_82294680(ctx, base);
loc_8229BD30:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26964
	ctx.r4.s64 = ctx.r11.s64 + -26964;
	// bl 0x822b3f98
	ctx.lr = 0x8229BD40;
	sub_822B3F98(ctx, base);
loc_8229BD40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229bd64
	if (!ctx.cr6.eq) goto loc_8229BD64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822b3f98
	ctx.lr = 0x8229BD5C;
	sub_822B3F98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8229BD64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8233e300
	ctx.lr = 0x8229BD70;
	sub_8233E300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8229BD78:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822b3f98
	ctx.lr = 0x8229BD88;
	sub_822B3F98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229BD90"))) PPC_WEAK_FUNC(sub_8229BD90);
PPC_FUNC_IMPL(__imp__sub_8229BD90) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8229be4c
	if (ctx.cr6.eq) goto loc_8229BE4C;
	// li r10,129
	ctx.r10.s64 = 129;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x8229BDDC;
	sub_82294520(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229bdfc
	if (!ctx.cr6.eq) goto loc_8229BDFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822b3f98
	ctx.lr = 0x8229BDF8;
	sub_822B3F98(ctx, base);
	// b 0x8229be28
	goto loc_8229BE28;
loc_8229BDFC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8229be1c
	if (!ctx.cr6.eq) goto loc_8229BE1C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822b3f98
	ctx.lr = 0x8229BE18;
	sub_822B3F98(ctx, base);
	// b 0x8229be28
	goto loc_8229BE28;
loc_8229BE1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e300
	ctx.lr = 0x8229BE28;
	sub_8233E300(ctx, base);
loc_8229BE28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822b3f98
	ctx.lr = 0x8229BE38;
	sub_822B3F98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x8229BE48;
	sub_8229BCD0(ctx, base);
	// b 0x8229be58
	goto loc_8229BE58;
loc_8229BE4C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822b3f98
	ctx.lr = 0x8229BE58;
	sub_822B3F98(ctx, base);
loc_8229BE58:
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

__attribute__((alias("__imp__sub_8229BE74"))) PPC_WEAK_FUNC(sub_8229BE74);
PPC_FUNC_IMPL(__imp__sub_8229BE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BE78"))) PPC_WEAK_FUNC(sub_8229BE78);
PPC_FUNC_IMPL(__imp__sub_8229BE78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8229bea4
	if (ctx.cr6.eq) goto loc_8229BEA4;
	// lwz r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// b 0x8229bea8
	goto loc_8229BEA8;
loc_8229BEA4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8229BEA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229beec
	if (ctx.cr6.eq) goto loc_8229BEEC;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229bed0
	if (ctx.cr6.eq) goto loc_8229BED0;
loc_8229BEBC:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229bed0
	if (ctx.cr6.eq) goto loc_8229BED0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bne cr6,0x8229bebc
	if (!ctx.cr6.eq) goto loc_8229BEBC;
loc_8229BED0:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8229bcd0
	ctx.lr = 0x8229BEE4;
	sub_8229BCD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x8229bf04
	goto loc_8229BF04;
loc_8229BEEC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x822960c0
	ctx.lr = 0x8229BF00;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8229BF04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8229BF0C;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229bf24
	if (ctx.cr6.eq) goto loc_8229BF24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x8229BF24;
	sub_82299080(ctx, base);
loc_8229BF24:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229bf38
	if (ctx.cr6.eq) goto loc_8229BF38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x8229BF38;
	sub_82299080(ctx, base);
loc_8229BF38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8229BF54"))) PPC_WEAK_FUNC(sub_8229BF54);
PPC_FUNC_IMPL(__imp__sub_8229BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BF58"))) PPC_WEAK_FUNC(sub_8229BF58);
PPC_FUNC_IMPL(__imp__sub_8229BF58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8229BF60:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229bf60
	if (!ctx.cr6.eq) goto loc_8229BF60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229BF7C"))) PPC_WEAK_FUNC(sub_8229BF7C);
PPC_FUNC_IMPL(__imp__sub_8229BF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BF80"))) PPC_WEAK_FUNC(sub_8229BF80);
PPC_FUNC_IMPL(__imp__sub_8229BF80) {
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
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8229bfe0
	if (ctx.cr6.eq) goto loc_8229BFE0;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229bfe0
	if (!ctx.cr6.eq) goto loc_8229BFE0;
	// lis r12,-3
	ctx.r12.s64 = -196608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8229BFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229BFE0:
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

__attribute__((alias("__imp__sub_8229BFF4"))) PPC_WEAK_FUNC(sub_8229BFF4);
PPC_FUNC_IMPL(__imp__sub_8229BFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BFF8"))) PPC_WEAK_FUNC(sub_8229BFF8);
PPC_FUNC_IMPL(__imp__sub_8229BFF8) {
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
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8229c054
	if (ctx.cr6.eq) goto loc_8229C054;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229c054
	if (!ctx.cr6.eq) goto loc_8229C054;
	// li r12,-33
	ctx.r12.s64 = -33;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// oris r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 65536;
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8229C040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229C054:
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

__attribute__((alias("__imp__sub_8229C068"))) PPC_WEAK_FUNC(sub_8229C068);
PPC_FUNC_IMPL(__imp__sub_8229C068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229c0d8
	if (!ctx.cr6.eq) goto loc_8229C0D8;
	// bl 0x8229bf80
	ctx.lr = 0x8229C090;
	sub_8229BF80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229c0d0
	if (!ctx.cr6.eq) goto loc_8229C0D0;
loc_8229C0AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e645c8
	ctx.lr = 0x8229C0B4;
	sub_82E645C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229c0ac
	if (ctx.cr6.eq) goto loc_8229C0AC;
loc_8229C0D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bff8
	ctx.lr = 0x8229C0D8;
	sub_8229BFF8(ctx, base);
loc_8229C0D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C0EC"))) PPC_WEAK_FUNC(sub_8229C0EC);
PPC_FUNC_IMPL(__imp__sub_8229C0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C0F0"))) PPC_WEAK_FUNC(sub_8229C0F0);
PPC_FUNC_IMPL(__imp__sub_8229C0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8229C10C"))) PPC_WEAK_FUNC(sub_8229C10C);
PPC_FUNC_IMPL(__imp__sub_8229C10C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C110"))) PPC_WEAK_FUNC(sub_8229C110);
PPC_FUNC_IMPL(__imp__sub_8229C110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229c17c
	if (ctx.cr6.eq) goto loc_8229C17C;
	// li r12,-2050
	ctx.r12.s64 = -2050;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// beq cr6,0x8229c15c
	if (ctx.cr6.eq) goto loc_8229C15C;
	// bl 0x8229c110
	ctx.lr = 0x8229C15C;
	sub_8229C110(ctx, base);
loc_8229C15C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c190
	ctx.lr = 0x8229C168;
	sub_8229C190(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229C17C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C190"))) PPC_WEAK_FUNC(sub_8229C190);
PPC_FUNC_IMPL(__imp__sub_8229C190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8229C198;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8229c538
	if (ctx.cr6.eq) goto loc_8229C538;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8229C1C0:
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8229c21c
	if (!ctx.cr6.eq) goto loc_8229C21C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229c1c0
	if (!ctx.cr6.eq) goto loc_8229C1C0;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229c254
	if (ctx.cr6.eq) goto loc_8229C254;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8229c254
	if (ctx.cr6.eq) goto loc_8229C254;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8229c234
	if (ctx.cr6.eq) goto loc_8229C234;
	// bl 0x8229c110
	ctx.lr = 0x8229C218;
	sub_8229C110(ctx, base);
	// b 0x8229c23c
	goto loc_8229C23C;
loc_8229C21C:
	// li r12,-2
	ctx.r12.s64 = -2;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// std r11,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8229C234:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8229c190
	ctx.lr = 0x8229C23C;
	sub_8229C190(ctx, base);
loc_8229C23C:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8229c538
	if (ctx.cr6.eq) goto loc_8229C538;
loc_8229C254:
	// li r12,-2
	ctx.r12.s64 = -2;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
	// bl 0x822c15d0
	ctx.lr = 0x8229C274;
	sub_822C15D0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229c28c
	if (!ctx.cr6.eq) goto loc_8229C28C;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
loc_8229C28C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a0b40
	ctx.lr = 0x8229C298;
	sub_822A0B40(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229c454
	if (ctx.cr6.eq) goto loc_8229C454;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229d200
	ctx.lr = 0x8229C2D0;
	sub_8229D200(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229bb00
	ctx.lr = 0x8229C2D8;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,309
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 309, ctx.xer);
	// bge cr6,0x8229c390
	if (!ctx.cr6.lt) goto loc_8229C390;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mulli r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 * 108;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8229C2F8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8229c390
	if (ctx.cr6.lt) goto loc_8229C390;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8229c390
	if (!ctx.cr6.lt) goto loc_8229C390;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823abf50
	ctx.lr = 0x8229C324;
	sub_823ABF50(ctx, base);
	// bl 0x822af0e0
	ctx.lr = 0x8229C328;
	sub_822AF0E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229c388
	if (ctx.cr6.eq) goto loc_8229C388;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229c37c
	if (!ctx.cr6.eq) goto loc_8229C37C;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229c37c
	if (ctx.cr6.eq) goto loc_8229C37C;
	// li r12,-2
	ctx.r12.s64 = -2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// bl 0x822aa9e8
	ctx.lr = 0x8229C37C;
	sub_822AA9E8(ctx, base);
loc_8229C37C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ac5f8
	ctx.lr = 0x8229C388;
	sub_822AC5F8(ctx, base);
loc_8229C388:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8229c2f8
	goto loc_8229C2F8;
loc_8229C390:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229c404
	if (!ctx.cr6.gt) goto loc_8229C404;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8229C3A4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x822af0e0
	ctx.lr = 0x8229C3B4;
	sub_822AF0E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229c3f0
	if (ctx.cr6.eq) goto loc_8229C3F0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x822abeb8
	ctx.lr = 0x8229C3D0;
	sub_822ABEB8(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229c3f0
	if (!ctx.cr6.eq) goto loc_8229C3F0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,52
	ctx.r3.s64 = ctx.r26.s64 + 52;
	// bl 0x822c2e98
	ctx.lr = 0x8229C3F0;
	sub_822C2E98(ctx, base);
loc_8229C3F0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229c3a4
	if (ctx.cr6.lt) goto loc_8229C3A4;
loc_8229C404:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a0be0
	ctx.lr = 0x8229C410;
	sub_822A0BE0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c448
	if (ctx.cr6.eq) goto loc_8229C448;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229c434
	if (!ctx.cr6.eq) goto loc_8229C434;
	// bl 0x822900a0
	ctx.lr = 0x8229C430;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8229C434:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229C448:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
loc_8229C454:
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229c46c
	if (!ctx.cr6.eq) goto loc_8229C46C;
	// bl 0x822900a0
	ctx.lr = 0x8229C468;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8229C46C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c4c0
	if (ctx.cr6.eq) goto loc_8229C4C0;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229c4ac
	if (!ctx.cr6.eq) goto loc_8229C4AC;
	// bl 0x822900a0
	ctx.lr = 0x8229C4A8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8229C4AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229C4C0:
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// bne cr6,0x8229c4e4
	if (!ctx.cr6.eq) goto loc_8229C4E4;
	// bl 0x822900a0
	ctx.lr = 0x8229C4E0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8229C4E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c538
	if (ctx.cr6.eq) goto loc_8229C538;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229c524
	if (!ctx.cr6.eq) goto loc_8229C524;
	// bl 0x822900a0
	ctx.lr = 0x8229C520;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8229C524:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229C538:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229C540"))) PPC_WEAK_FUNC(sub_8229C540);
PPC_FUNC_IMPL(__imp__sub_8229C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229C548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82294a58
	ctx.lr = 0x8229C55C;
	sub_82294A58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x822add00
	ctx.lr = 0x8229C570;
	sub_822ADD00(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// bl 0x82294a58
	ctx.lr = 0x8229C57C;
	sub_82294A58(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x822ada80
	ctx.lr = 0x8229C58C;
	sub_822ADA80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229C594"))) PPC_WEAK_FUNC(sub_8229C594);
PPC_FUNC_IMPL(__imp__sub_8229C594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C598"))) PPC_WEAK_FUNC(sub_8229C598);
PPC_FUNC_IMPL(__imp__sub_8229C598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8229C5B4;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822ada80
	ctx.lr = 0x8229C5C8;
	sub_822ADA80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C5DC"))) PPC_WEAK_FUNC(sub_8229C5DC);
PPC_FUNC_IMPL(__imp__sub_8229C5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C5E0"))) PPC_WEAK_FUNC(sub_8229C5E0);
PPC_FUNC_IMPL(__imp__sub_8229C5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8229C5FC;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822add00
	ctx.lr = 0x8229C610;
	sub_822ADD00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C624"))) PPC_WEAK_FUNC(sub_8229C624);
PPC_FUNC_IMPL(__imp__sub_8229C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C628"))) PPC_WEAK_FUNC(sub_8229C628);
PPC_FUNC_IMPL(__imp__sub_8229C628) {
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
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r7,r8,-19952
	ctx.r7.s64 = ctx.r8.s64 + -19952;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// beq cr6,0x8229c6b8
	if (ctx.cr6.eq) goto loc_8229C6B8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c6b8
	if (ctx.cr6.eq) goto loc_8229C6B8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229c6b8
	if (!ctx.cr6.eq) goto loc_8229C6B8;
	// bl 0x8229c068
	ctx.lr = 0x8229C690;
	sub_8229C068(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r9,-21932
	ctx.r3.s64 = ctx.r9.s64 + -21932;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// stwx r10,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x822ab8c0
	ctx.lr = 0x8229C6B8;
	sub_822AB8C0(ctx, base);
loc_8229C6B8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229c6d8
	if (ctx.cr6.eq) goto loc_8229C6D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229C6D8:
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

__attribute__((alias("__imp__sub_8229C6F0"))) PPC_WEAK_FUNC(sub_8229C6F0);
PPC_FUNC_IMPL(__imp__sub_8229C6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8229c710
	if (ctx.cr6.lt) goto loc_8229C710;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8229C710:
	// b 0x82294a58
	sub_82294A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229C714"))) PPC_WEAK_FUNC(sub_8229C714);
PPC_FUNC_IMPL(__imp__sub_8229C714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C718"))) PPC_WEAK_FUNC(sub_8229C718);
PPC_FUNC_IMPL(__imp__sub_8229C718) {
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
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229c754
	if (ctx.cr6.eq) goto loc_8229C754;
loc_8229C73C:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229c754
	if (ctx.cr6.eq) goto loc_8229C754;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229c73c
	if (!ctx.cr6.eq) goto loc_8229C73C;
loc_8229C754:
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229c7c8
	if (!ctx.cr6.eq) goto loc_8229C7C8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r11,28880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28880);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c7b4
	if (ctx.cr6.eq) goto loc_8229C7B4;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229c7b4
	if (ctx.cr6.eq) goto loc_8229C7B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa9e8
	ctx.lr = 0x8229C798;
	sub_822AA9E8(ctx, base);
	// lwz r3,28880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28880);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8229c7c8
	goto loc_8229C7C8;
loc_8229C7B4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229c7c8
	if (ctx.cr6.eq) goto loc_8229C7C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa9e8
	ctx.lr = 0x8229C7C8;
	sub_822AA9E8(ctx, base);
loc_8229C7C8:
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

__attribute__((alias("__imp__sub_8229C7E0"))) PPC_WEAK_FUNC(sub_8229C7E0);
PPC_FUNC_IMPL(__imp__sub_8229C7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8229C7E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c818
	if (ctx.cr6.eq) goto loc_8229C818;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x8229c820
	goto loc_8229C820;
loc_8229C818:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8229C820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8229C850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8229C868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8229c888
	if (ctx.cr6.eq) goto loc_8229C888;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_8229C888:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229C890"))) PPC_WEAK_FUNC(sub_8229C890);
PPC_FUNC_IMPL(__imp__sub_8229C890) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229c90c
	if (!ctx.cr6.eq) goto loc_8229C90C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,322
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 322, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x8229c8ec
	if (ctx.cr6.lt) goto loc_8229C8EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8229c904
	goto loc_8229C904;
loc_8229C8EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c90c
	if (ctx.cr6.eq) goto loc_8229C90C;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8229c90c
	if (ctx.cr6.eq) goto loc_8229C90C;
loc_8229C904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bc00
	ctx.lr = 0x8229C90C;
	sub_8229BC00(ctx, base);
loc_8229C90C:
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

__attribute__((alias("__imp__sub_8229C920"))) PPC_WEAK_FUNC(sub_8229C920);
PPC_FUNC_IMPL(__imp__sub_8229C920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8229C928;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r25,r10,14476
	ctx.r25.s64 = ctx.r10.s64 + 14476;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// lwz r11,-31632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31632);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,28912(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28912, ctx.r30.u32);
	// bne cr6,0x8229c974
	if (!ctx.cr6.eq) goto loc_8229C974;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82398580
	ctx.lr = 0x8229C968;
	sub_82398580(ctx, base);
	// stw r3,-31632(r27)
	PPC_STORE_U32(ctx.r27.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8229C970;
	sub_82398640(ctx, base);
	// lwz r11,-31632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31632);
loc_8229C974:
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229ca08
	if (ctx.cr6.eq) goto loc_8229CA08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229c9ac
	if (ctx.cr6.eq) goto loc_8229C9AC;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x823970b8
	ctx.lr = 0x8229C9AC;
	sub_823970B8(ctx, base);
loc_8229C9AC:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229ca08
	if (!ctx.cr6.eq) goto loc_8229CA08;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ca08
	if (ctx.cr6.eq) goto loc_8229CA08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229C9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8229ca08
	if (!ctx.cr6.gt) goto loc_8229CA08;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82396ef8
	ctx.lr = 0x8229C9F4;
	sub_82396EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229CA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229CA08:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229caec
	if (!ctx.cr6.eq) goto loc_8229CAEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229caec
	if (!ctx.cr6.eq) goto loc_8229CAEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// bne cr6,0x8229ca68
	if (!ctx.cr6.eq) goto loc_8229CA68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229CA68:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// bne cr6,0x8229ca98
	if (!ctx.cr6.eq) goto loc_8229CA98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229CA98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229caec
	if (!ctx.cr6.eq) goto loc_8229CAEC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8229CAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
loc_8229CAEC:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229cc6c
	if (ctx.cr6.eq) goto loc_8229CC6C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229cb3c
	if (!ctx.cr6.eq) goto loc_8229CB3C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822959a8
	ctx.lr = 0x8229CB20;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229cb34
	if (ctx.cr6.eq) goto loc_8229CB34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822b3b38
	ctx.lr = 0x8229CB30;
	sub_822B3B38(ctx, base);
	// b 0x8229cb38
	goto loc_8229CB38;
loc_8229CB34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8229CB38:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8229CB3C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229CB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8229CB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229CB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229CBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x822ab928
	ctx.lr = 0x8229CBC0;
	sub_822AB928(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229cc64
	if (ctx.cr6.eq) goto loc_8229CC64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CBE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229cc08
	if (ctx.cr6.eq) goto loc_8229CC08;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x8229cc10
	goto loc_8229CC10;
loc_8229CC08:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8229CC10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8229cc54
	if (ctx.cr6.eq) goto loc_8229CC54;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x8229cc90
	goto loc_8229CC90;
loc_8229CC54:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x8229cc90
	goto loc_8229CC90;
loc_8229CC64:
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// b 0x8229cc90
	goto loc_8229CC90;
loc_8229CC6C:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229cc90
	if (ctx.cr6.eq) goto loc_8229CC90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
loc_8229CC90:
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// lwz r10,25332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25332);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229ccb4
	if (!ctx.cr6.eq) goto loc_8229CCB4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c1eb8
	ctx.lr = 0x8229CCA8;
	sub_822C1EB8(ctx, base);
	// stw r3,25332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25332, ctx.r3.u32);
	// bl 0x822c1f68
	ctx.lr = 0x8229CCB0;
	sub_822C1F68(ctx, base);
	// lwz r10,25332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25332);
loc_8229CCB4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ccd4
	if (ctx.cr6.eq) goto loc_8229CCD4;
loc_8229CCC0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229cce4
	if (ctx.cr6.eq) goto loc_8229CCE4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229ccc0
	if (!ctx.cr6.eq) goto loc_8229CCC0;
loc_8229CCD4:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229ccf0
	if (ctx.cr6.eq) goto loc_8229CCF0;
loc_8229CCE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c0f10
	ctx.lr = 0x8229CCF0;
	sub_822C0F10(ctx, base);
loc_8229CCF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229c890
	ctx.lr = 0x8229CCFC;
	sub_8229C890(ctx, base);
	// lwz r11,-31632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229cd1c
	if (!ctx.cr6.eq) goto loc_8229CD1C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82398580
	ctx.lr = 0x8229CD10;
	sub_82398580(ctx, base);
	// stw r3,-31632(r27)
	PPC_STORE_U32(ctx.r27.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8229CD18;
	sub_82398640(ctx, base);
	// lwz r11,-31632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31632);
loc_8229CD1C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229cd48
	if (ctx.cr6.eq) goto loc_8229CD48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229CD48:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8229CD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,28912(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28912, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229CD8C"))) PPC_WEAK_FUNC(sub_8229CD8C);
PPC_FUNC_IMPL(__imp__sub_8229CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229CD90"))) PPC_WEAK_FUNC(sub_8229CD90);
PPC_FUNC_IMPL(__imp__sub_8229CD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8229CD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CDC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229ce5c
	if (!ctx.cr6.eq) goto loc_8229CE5C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229ce5c
	if (!ctx.cr6.eq) goto loc_8229CE5C;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ce38
	if (ctx.cr6.eq) goto loc_8229CE38;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8229cdf4
	if (!ctx.cr6.eq) goto loc_8229CDF4;
	// lwz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_8229CDF4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8229ce1c
	if (!ctx.cr6.eq) goto loc_8229CE1C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229ce1c
	if (ctx.cr6.eq) goto loc_8229CE1C;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8229CE1C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82393790
	ctx.lr = 0x8229CE34;
	sub_82393790(ctx, base);
	// b 0x8229ced4
	goto loc_8229CED4;
loc_8229CE38:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8229ced4
	goto loc_8229CED4;
loc_8229CE5C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8229ce68
	if (!ctx.cr6.eq) goto loc_8229CE68;
	// lwz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_8229CE68:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229ce84
	if (ctx.cr6.eq) goto loc_8229CE84;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_8229CE84:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229cea0
	if (ctx.cr6.eq) goto loc_8229CEA0;
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x8229cea4
	goto loc_8229CEA4;
loc_8229CEA0:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8229CEA4:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823938e8
	ctx.lr = 0x8229CEB8;
	sub_823938E8(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229ced4
	if (ctx.cr6.eq) goto loc_8229CED4;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_8229CED4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229CEF4"))) PPC_WEAK_FUNC(sub_8229CEF4);
PPC_FUNC_IMPL(__imp__sub_8229CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229CEF8"))) PPC_WEAK_FUNC(sub_8229CEF8);
PPC_FUNC_IMPL(__imp__sub_8229CEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8229CF00;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r4,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229d0e8
	if (ctx.cr6.eq) goto loc_8229D0E8;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// lwz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229cfa0
	if (ctx.cr6.eq) goto loc_8229CFA0;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,14476
	ctx.r28.s64 = ctx.r11.s64 + 14476;
	// lwz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25328);
loc_8229CF60:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,52(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bne cr6,0x8229cf84
	if (!ctx.cr6.eq) goto loc_8229CF84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c0b70
	ctx.lr = 0x8229CF78;
	sub_822C0B70(ctx, base);
	// stw r3,25328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25328, ctx.r3.u32);
	// bl 0x822c0c20
	ctx.lr = 0x8229CF80;
	sub_822C0C20(ctx, base);
	// lwz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25328);
loc_8229CF84:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229cfa0
	if (ctx.cr6.eq) goto loc_8229CFA0;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r27,40
	ctx.r30.s64 = ctx.r27.s64 + 40;
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8229cf60
	if (!ctx.cr6.eq) goto loc_8229CF60;
loc_8229CFA0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ac720
	ctx.lr = 0x8229CFC0;
	sub_822AC720(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229CFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x8229d034
	if (!ctx.cr6.gt) goto loc_8229D034;
	// lwz r6,348(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r7,344(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
loc_8229CFF8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8229d014
	if (!ctx.cr6.eq) goto loc_8229D014;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8229d028
	if (ctx.cr6.eq) goto loc_8229D028;
loc_8229D014:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8229cff8
	if (ctx.cr6.lt) goto loc_8229CFF8;
	// b 0x8229d034
	goto loc_8229D034;
loc_8229D028:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d060
	if (!ctx.cr6.eq) goto loc_8229D060;
loc_8229D034:
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229d060
	if (ctx.cr6.eq) goto loc_8229D060;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// addi r3,r11,300
	ctx.r3.s64 = ctx.r11.s64 + 300;
	// bl 0x822ac380
	ctx.lr = 0x8229D054;
	sub_822AC380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229d060
	if (ctx.cr6.eq) goto loc_8229D060;
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8229D060:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229d0a0
	if (ctx.cr6.eq) goto loc_8229D0A0;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d088
	if (!ctx.cr6.eq) goto loc_8229D088;
	// bl 0x822900a0
	ctx.lr = 0x8229D084;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8229D088:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8229D0A0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
	// stw r24,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x8229d0e8
	if (ctx.cr6.eq) goto loc_8229D0E8;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d0d4
	if (!ctx.cr6.eq) goto loc_8229D0D4;
	// bl 0x822900a0
	ctx.lr = 0x8229D0D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8229D0D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D0E8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229D0F4"))) PPC_WEAK_FUNC(sub_8229D0F4);
PPC_FUNC_IMPL(__imp__sub_8229D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229D0F8"))) PPC_WEAK_FUNC(sub_8229D0F8);
PPC_FUNC_IMPL(__imp__sub_8229D0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x822b4260
	ctx.lr = 0x8229D114;
	sub_822B4260(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
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

__attribute__((alias("__imp__sub_8229D134"))) PPC_WEAK_FUNC(sub_8229D134);
PPC_FUNC_IMPL(__imp__sub_8229D134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229D138"))) PPC_WEAK_FUNC(sub_8229D138);
PPC_FUNC_IMPL(__imp__sub_8229D138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8229D140;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8229d200
	ctx.lr = 0x8229D160;
	sub_8229D200(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ac250
	ctx.lr = 0x8229D16C;
	sub_822AC250(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d1b8
	if (!ctx.cr6.gt) goto loc_8229D1B8;
loc_8229D17C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822c11b0
	ctx.lr = 0x8229D190;
	sub_822C11B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x822ac2b8
	ctx.lr = 0x8229D1A4;
	sub_822AC2B8(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8229d17c
	if (ctx.cr6.lt) goto loc_8229D17C;
loc_8229D1B8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229d1f4
	if (ctx.cr6.eq) goto loc_8229D1F4;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d1e0
	if (!ctx.cr6.eq) goto loc_8229D1E0;
	// bl 0x822900a0
	ctx.lr = 0x8229D1DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8229D1E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D1F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229D1FC"))) PPC_WEAK_FUNC(sub_8229D1FC);
PPC_FUNC_IMPL(__imp__sub_8229D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229D200"))) PPC_WEAK_FUNC(sub_8229D200);
PPC_FUNC_IMPL(__imp__sub_8229D200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8229D208;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229d240
	if (ctx.cr6.eq) goto loc_8229D240;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8229D240;
	sub_82294520(ctx, base);
loc_8229D240:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82299ad8
	ctx.lr = 0x8229D254;
	sub_82299AD8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// cntlzw r6,r28
	ctx.r6.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r7,-19688
	ctx.r4.s64 = ctx.r7.s64 + -19688;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r6,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// xori r8,r5,1
	ctx.r8.u64 = ctx.r5.u64 ^ 1;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x822b4260
	ctx.lr = 0x8229D2C0;
	sub_822B4260(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229D2C8"))) PPC_WEAK_FUNC(sub_8229D2C8);
PPC_FUNC_IMPL(__imp__sub_8229D2C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x822b3718
	ctx.lr = 0x8229D304;
	sub_822B3718(ctx, base);
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d32c
	if (!ctx.cr6.eq) goto loc_8229D32C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x8229D320;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8229D328;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_8229D32C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x8229D340;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8229D348:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8229d384
	if (!ctx.cr6.lt) goto loc_8229D384;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r12,-4
	ctx.r12.s64 = -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x82295518
	ctx.lr = 0x8229D380;
	sub_82295518(ctx, base);
	// b 0x8229d348
	goto loc_8229D348;
loc_8229D384:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r8,128
	ctx.r8.s64 = 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,-24528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24528);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229d3d8
	ctx.lr = 0x8229D3B4;
	sub_8229D3D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3240
	ctx.lr = 0x8229D3BC;
	sub_822B3240(ctx, base);
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

__attribute__((alias("__imp__sub_8229D3D4"))) PPC_WEAK_FUNC(sub_8229D3D4);
PPC_FUNC_IMPL(__imp__sub_8229D3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229D3D8"))) PPC_WEAK_FUNC(sub_8229D3D8);
PPC_FUNC_IMPL(__imp__sub_8229D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8229D3E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r9,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r9.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// stw r27,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r27.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// stw r22,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r22.u32);
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// stw r23,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r23.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// bl 0x822960c0
	ctx.lr = 0x8229D420;
	sub_822960C0(ctx, base);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,-31632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// lwz r30,52(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d450
	if (!ctx.cr6.eq) goto loc_8229D450;
	// bl 0x82398580
	ctx.lr = 0x8229D444;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8229D44C;
	sub_82398640(ctx, base);
	// lwz r11,-31632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8229D450:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8229d46c
	if (!ctx.cr6.eq) goto loc_8229D46C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82396ef8
	ctx.lr = 0x8229D464;
	sub_82396EF8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r23,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r23.u32);
loc_8229D46C:
	// lwz r21,112(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lis r17,-31885
	ctx.r17.s64 = -2089615360;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8229d9d4
	if (ctx.cr6.eq) goto loc_8229D9D4;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r16,532(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r6,-31883
	ctx.r6.s64 = -2089484288;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// addi r26,r7,11272
	ctx.r26.s64 = ctx.r7.s64 + 11272;
	// addi r4,r8,-19580
	ctx.r4.s64 = ctx.r8.s64 + -19580;
	// addi r3,r9,-26828
	ctx.r3.s64 = ctx.r9.s64 + -26828;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// addi r24,r10,-26856
	ctx.r24.s64 = ctx.r10.s64 + -26856;
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// rldicr r18,r5,35,63
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// addi r15,r11,-26864
	ctx.r15.s64 = ctx.r11.s64 + -26864;
	// b 0x8229d4d4
	goto loc_8229D4D4;
loc_8229D4D0:
	// lwz r22,508(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
loc_8229D4D4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229d9c8
	if (ctx.cr6.eq) goto loc_8229D9C8;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229d510
	if (!ctx.cr6.eq) goto loc_8229D510;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822960c0
	ctx.lr = 0x8229D50C;
	sub_822960C0(ctx, base);
	// b 0x8229d518
	goto loc_8229D518;
loc_8229D510:
	// addi r4,r21,44
	ctx.r4.s64 = ctx.r21.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229D518;
	sub_8233E1A0(ctx, base);
loc_8229D518:
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82295908
	ctx.lr = 0x8229D524;
	sub_82295908(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r31,216(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229d570
	if (ctx.cr6.eq) goto loc_8229D570;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229d5a0
	if (ctx.cr6.eq) goto loc_8229D5A0;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d550
	if (!ctx.cr6.eq) goto loc_8229D550;
	// bl 0x822900a0
	ctx.lr = 0x8229D54C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229D550:
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
	ctx.lr = 0x8229D56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8229D570:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229d5a0
	if (ctx.cr6.eq) goto loc_8229D5A0;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d58c
	if (!ctx.cr6.eq) goto loc_8229D58C;
	// bl 0x822900a0
	ctx.lr = 0x8229D588;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229D58C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D5A0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r25.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// stw r25,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// bl 0x822af180
	ctx.lr = 0x8229D5B4;
	sub_822AF180(ctx, base);
	// ld r11,76(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 76);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8229d5dc
	if (ctx.cr6.eq) goto loc_8229D5DC;
	// lwz r10,52(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// rlwinm r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8229d5e0
	if (!ctx.cr6.eq) goto loc_8229D5E0;
loc_8229D5DC:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8229D5E0:
	// ori r28,r16,2
	ctx.r28.u64 = ctx.r16.u64 | 2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229da58
	if (ctx.cr6.eq) goto loc_8229DA58;
	// lwz r28,128(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8229d618
	if (ctx.cr6.eq) goto loc_8229D618;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229d618
	if (ctx.cr6.eq) goto loc_8229D618;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229d61c
	if (!ctx.cr6.eq) goto loc_8229D61C;
loc_8229D618:
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_8229D61C:
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d9c4
	if (!ctx.cr6.gt) goto loc_8229D9C4;
loc_8229D62C:
	// lwz r11,72(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r10,100(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r9,492(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x8229d684
	if (ctx.cr6.eq) goto loc_8229D684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8229d684
	if (!ctx.cr6.lt) goto loc_8229D684;
	// lwz r11,72(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8229D684:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d9a8
	if (!ctx.cr6.gt) goto loc_8229D9A8;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_8229D698:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8229d7c4
	if (ctx.cr6.eq) goto loc_8229D7C4;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8229d7c4
	if (!ctx.cr6.lt) goto loc_8229D7C4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229d70c
	if (ctx.cr6.eq) goto loc_8229D70C;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8229d8f8
	if (ctx.cr6.eq) goto loc_8229D8F8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r6,r16,2
	ctx.r6.u64 = ctx.r16.u64 | 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d8f4
	if (!ctx.cr6.eq) goto loc_8229D8F4;
loc_8229D70C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r8,r16,2
	ctx.r8.u64 = ctx.r16.u64 | 2;
	// lwz r7,524(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8229d7fc
	if (ctx.cr6.eq) goto loc_8229D7FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r31,r24,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229d7fc
	if (ctx.cr6.eq) goto loc_8229D7FC;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229d7fc
	if (!ctx.cr6.eq) goto loc_8229D7FC;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r30,52(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r11,-31496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d794
	if (!ctx.cr6.eq) goto loc_8229D794;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x823ca3e8
	ctx.lr = 0x8229D780;
	sub_823CA3E8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r3,-31496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31496, ctx.r3.u32);
	// bl 0x823ca498
	ctx.lr = 0x8229D78C;
	sub_823CA498(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,-31496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31496);
loc_8229D794:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8229d7cc
	if (!ctx.cr6.eq) goto loc_8229D7CC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,524(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x8229d7d0
	if (ctx.cr6.eq) goto loc_8229D7D0;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x8229d7fc
	goto loc_8229D7FC;
loc_8229D7C4:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x8229d70c
	goto loc_8229D70C;
loc_8229D7CC:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
loc_8229D7D0:
	// or r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 | ctx.r18.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823f9e88
	ctx.lr = 0x8229D7FC;
	sub_823F9E88(ctx, base);
loc_8229D7FC:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229d810
	if (!ctx.cr6.eq) goto loc_8229D810;
	// lwz r31,168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_8229D810:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229d82c
	if (!ctx.cr6.eq) goto loc_8229D82C;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822960c0
	ctx.lr = 0x8229D828;
	sub_822960C0(ctx, base);
	// b 0x8229d834
	goto loc_8229D834;
loc_8229D82C:
	// addi r4,r21,44
	ctx.r4.s64 = ctx.r21.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229D834;
	sub_8233E1A0(ctx, base);
loc_8229D834:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r30,264(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8229d84c
	if (!ctx.cr6.eq) goto loc_8229D84C;
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_8229D84C:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8232fa20
	ctx.lr = 0x8229D858;
	sub_8232FA20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8232d178
	ctx.lr = 0x8229D870;
	sub_8232D178(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229d8b8
	if (ctx.cr6.eq) goto loc_8229D8B8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229d8e8
	if (ctx.cr6.eq) goto loc_8229D8E8;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d898
	if (!ctx.cr6.eq) goto loc_8229D898;
	// bl 0x822900a0
	ctx.lr = 0x8229D894;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229D898:
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
	ctx.lr = 0x8229D8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8229D8B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229d8e8
	if (ctx.cr6.eq) goto loc_8229D8E8;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d8d4
	if (!ctx.cr6.eq) goto loc_8229D8D4;
	// bl 0x822900a0
	ctx.lr = 0x8229D8D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229D8D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229D8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D8E8:
	// stw r25,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// stw r25,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r25.u32);
loc_8229D8F4:
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_8229D8F8:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229d950
	if (ctx.cr6.eq) goto loc_8229D950;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// beq cr6,0x8229d988
	if (ctx.cr6.eq) goto loc_8229D988;
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d92c
	if (!ctx.cr6.eq) goto loc_8229D92C;
	// bl 0x822900a0
	ctx.lr = 0x8229D928;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229D92C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229D94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
loc_8229D950:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229d988
	if (ctx.cr6.eq) goto loc_8229D988;
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d970
	if (!ctx.cr6.eq) goto loc_8229D970;
	// bl 0x822900a0
	ctx.lr = 0x8229D96C;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229D970:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229D988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D988:
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229d698
	if (ctx.cr6.lt) goto loc_8229D698;
loc_8229D9A8:
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229d62c
	if (ctx.cr6.lt) goto loc_8229D62C;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r27,492(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r24,172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
loc_8229D9C4:
	// lwz r23,524(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
loc_8229D9C8:
	// lwz r21,104(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 104);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8229d4d0
	if (!ctx.cr6.eq) goto loc_8229D4D0;
loc_8229D9D4:
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r31,280(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229da20
	if (ctx.cr6.eq) goto loc_8229DA20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229da50
	if (ctx.cr6.eq) goto loc_8229DA50;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229da00
	if (!ctx.cr6.eq) goto loc_8229DA00;
	// bl 0x822900a0
	ctx.lr = 0x8229D9FC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229DA00:
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
	ctx.lr = 0x8229DA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8229DA20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229da50
	if (ctx.cr6.eq) goto loc_8229DA50;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229da3c
	if (!ctx.cr6.eq) goto loc_8229DA3C;
	// bl 0x822900a0
	ctx.lr = 0x8229DA38;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229DA3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229DA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229DA50:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8229DA58:
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229d9c8
	if (!ctx.cr6.gt) goto loc_8229D9C8;
loc_8229DA68:
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// beq cr6,0x8229daa0
	if (ctx.cr6.eq) goto loc_8229DAA0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229DA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// lwz r7,516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8229daa4
	if (ctx.cr6.lt) goto loc_8229DAA4;
loc_8229DAA0:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_8229DAA4:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823c4f48
	ctx.lr = 0x8229DAC0;
	sub_823C4F48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229dca4
	if (ctx.cr6.eq) goto loc_8229DCA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229db68
	if (ctx.cr6.eq) goto loc_8229DB68;
	// lwz r11,72(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// lwz r10,100(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r31,r10,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229db68
	if (ctx.cr6.eq) goto loc_8229DB68;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229db68
	if (!ctx.cr6.eq) goto loc_8229DB68;
	// lwz r22,52(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// bl 0x822b3078
	ctx.lr = 0x8229DB0C;
	sub_822B3078(ctx, base);
	// cmplw cr6,r22,r3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8229db38
	if (!ctx.cr6.eq) goto loc_8229DB38;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x8229db3c
	if (ctx.cr6.eq) goto loc_8229DB3C;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x8229db68
	goto loc_8229DB68;
loc_8229DB38:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
loc_8229DB3C:
	// or r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 | ctx.r18.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823f9e88
	ctx.lr = 0x8229DB68;
	sub_823F9E88(ctx, base);
loc_8229DB68:
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// lwz r31,184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bne cr6,0x8229dc0c
	if (!ctx.cr6.eq) goto loc_8229DC0C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229db88
	if (!ctx.cr6.eq) goto loc_8229DB88;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8229DB88:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229dba4
	if (!ctx.cr6.eq) goto loc_8229DBA4;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822960c0
	ctx.lr = 0x8229DBA0;
	sub_822960C0(ctx, base);
	// b 0x8229dbac
	goto loc_8229DBAC;
loc_8229DBA4:
	// addi r4,r21,44
	ctx.r4.s64 = ctx.r21.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229DBAC;
	sub_8233E1A0(ctx, base);
loc_8229DBAC:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229dbc0
	if (!ctx.cr6.eq) goto loc_8229DBC0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_8229DBC0:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8232fa20
	ctx.lr = 0x8229DBCC;
	sub_8232FA20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8232d178
	ctx.lr = 0x8229DBE0;
	sub_8232D178(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r25,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229dc04
	if (ctx.cr6.eq) goto loc_8229DC04;
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82294520
	ctx.lr = 0x8229DC04;
	sub_82294520(ctx, base);
loc_8229DC04:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// b 0x8229dc9c
	goto loc_8229DC9C;
loc_8229DC0C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229dc18
	if (!ctx.cr6.eq) goto loc_8229DC18;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8229DC18:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229dc34
	if (!ctx.cr6.eq) goto loc_8229DC34;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822960c0
	ctx.lr = 0x8229DC30;
	sub_822960C0(ctx, base);
	// b 0x8229dc3c
	goto loc_8229DC3C;
loc_8229DC34:
	// addi r4,r21,44
	ctx.r4.s64 = ctx.r21.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229DC3C;
	sub_8233E1A0(ctx, base);
loc_8229DC3C:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r6,248(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229dc50
	if (!ctx.cr6.eq) goto loc_8229DC50;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_8229DC50:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8232fa20
	ctx.lr = 0x8229DC5C;
	sub_8232FA20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8232d178
	ctx.lr = 0x8229DC74;
	sub_8232D178(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r25,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229dc98
	if (ctx.cr6.eq) goto loc_8229DC98;
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82294520
	ctx.lr = 0x8229DC98;
	sub_82294520(ctx, base);
loc_8229DC98:
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
loc_8229DC9C:
	// bl 0x82294cc8
	ctx.lr = 0x8229DCA0;
	sub_82294CC8(ctx, base);
	// lwz r22,508(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
loc_8229DCA4:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229dd00
	if (ctx.cr6.eq) goto loc_8229DD00;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229dd3c
	if (ctx.cr6.eq) goto loc_8229DD3C;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229dcdc
	if (!ctx.cr6.eq) goto loc_8229DCDC;
	// bl 0x822900a0
	ctx.lr = 0x8229DCD8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229DCDC:
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
	ctx.lr = 0x8229DCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// b 0x8229dd04
	goto loc_8229DD04;
loc_8229DD00:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_8229DD04:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229dd3c
	if (ctx.cr6.eq) goto loc_8229DD3C;
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229dd24
	if (!ctx.cr6.eq) goto loc_8229DD24;
	// bl 0x822900a0
	ctx.lr = 0x8229DD20;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8229DD24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229DD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229DD3C:
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229da68
	if (ctx.cr6.lt) goto loc_8229DA68;
	// b 0x8229d9c8
	goto loc_8229D9C8;
}

__attribute__((alias("__imp__sub_8229DD5C"))) PPC_WEAK_FUNC(sub_8229DD5C);
PPC_FUNC_IMPL(__imp__sub_8229DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229DD60"))) PPC_WEAK_FUNC(sub_8229DD60);
PPC_FUNC_IMPL(__imp__sub_8229DD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229dd94
	if (ctx.cr6.eq) goto loc_8229DD94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229DD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229DD94:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822959a8
	ctx.lr = 0x8229DDA0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229ddb4
	if (ctx.cr6.eq) goto loc_8229DDB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b3b38
	ctx.lr = 0x8229DDB0;
	sub_822B3B38(ctx, base);
	// b 0x8229ddb8
	goto loc_8229DDB8;
loc_8229DDB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229DDB8:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229DDE4"))) PPC_WEAK_FUNC(sub_8229DDE4);
PPC_FUNC_IMPL(__imp__sub_8229DDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229DDE8"))) PPC_WEAK_FUNC(sub_8229DDE8);
PPC_FUNC_IMPL(__imp__sub_8229DDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8229DDF0;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-544
	ctx.r31.s64 = ctx.r1.s64 + -544;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r4,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r4.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r27,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r27,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r27.u32);
	// bl 0x82333438
	ctx.lr = 0x8229DE30;
	sub_82333438(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229e2d8
	if (ctx.cr6.eq) goto loc_8229E2D8;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r20,128(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r22,r11,11272
	ctx.r22.s64 = ctx.r11.s64 + 11272;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// bne cr6,0x8229de58
	if (!ctx.cr6.eq) goto loc_8229DE58;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8229DE58:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,17912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229de70
	if (!ctx.cr6.eq) goto loc_8229DE70;
	// bl 0x8233e3e0
	ctx.lr = 0x8229DE70;
	sub_8233E3E0(ctx, base);
loc_8229DE70:
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82343a80
	ctx.lr = 0x8229DE84;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229de98
	if (ctx.cr6.eq) goto loc_8229DE98;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_8229DE98:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229dee8
	if (ctx.cr6.eq) goto loc_8229DEE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x822946f0
	ctx.lr = 0x8229DEB0;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229dee8
	if (ctx.cr6.eq) goto loc_8229DEE8;
loc_8229DEC8:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8229DED4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229dfa8
	if (ctx.cr6.eq) goto loc_8229DFA8;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229dec8
	if (!ctx.cr6.eq) goto loc_8229DEC8;
loc_8229DEE8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8229DEF0:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// bne cr6,0x8229df08
	if (!ctx.cr6.eq) goto loc_8229DF08;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8229e2d8
	if (ctx.cr6.eq) goto loc_8229E2D8;
loc_8229DF08:
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8229e490
	ctx.lr = 0x8229DF18;
	sub_8229E490(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8229e2d8
	if (ctx.cr6.eq) goto loc_8229E2D8;
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229e2d8
	if (ctx.cr6.eq) goto loc_8229E2D8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x822b3028
	ctx.lr = 0x8229DF44;
	sub_822B3028(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229df88
	if (ctx.cr6.eq) goto loc_8229DF88;
loc_8229DF50:
	// ld r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 76);
	// rlwinm r9,r10,0,21,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x780;
	// rlwinm r9,r9,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r9,128
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 128, ctx.xer);
	// bne cr6,0x8229df88
	if (!ctx.cr6.eq) goto loc_8229DF88;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8229DF7C;
	sub_822B2F88(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229df50
	if (!ctx.cr6.eq) goto loc_8229DF50;
loc_8229DF88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822af270
	ctx.lr = 0x8229DF90;
	sub_822AF270(ctx, base);
	// lhz r5,158(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 158);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8229dfb0
	if (!ctx.cr6.eq) goto loc_8229DFB0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x8229dfd0
	goto loc_8229DFD0;
loc_8229DFA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8229def0
	goto loc_8229DEF0;
loc_8229DFB0:
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x8229DFC4;
	sub_82CB8074(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
loc_8229DFD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8229DFDC;
	sub_82E640B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x822b3028
	ctx.lr = 0x8229DFE8;
	sub_822B3028(ctx, base);
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229e0e8
	if (ctx.cr6.eq) goto loc_8229E0E8;
loc_8229DFF4:
	// ld r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 76);
	// rlwinm r10,r11,0,21,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x780;
	// rlwinm r10,r10,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r10,128
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 128, ctx.xer);
	// bne cr6,0x8229e0e8
	if (!ctx.cr6.eq) goto loc_8229E0E8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8229e070
	if (!ctx.cr6.eq) goto loc_8229E070;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8229e070
	if (ctx.cr6.eq) goto loc_8229E070;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229e070
	if (ctx.cr6.eq) goto loc_8229E070;
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e054
	if (ctx.cr6.eq) goto loc_8229E054;
loc_8229E040:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229e064
	if (ctx.cr6.eq) goto loc_8229E064;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229e040
	if (!ctx.cr6.eq) goto loc_8229E040;
loc_8229E054:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229e070
	if (ctx.cr6.eq) goto loc_8229E070;
loc_8229E064:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stwx r24,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r24.u32);
	// b 0x8229e0c8
	goto loc_8229E0C8;
loc_8229E070:
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// bl 0x82333258
	ctx.lr = 0x8229E078;
	sub_82333258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8229e088
	if (ctx.cr6.eq) goto loc_8229E088;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8229E088:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,572(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229E0B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229e200
	if (ctx.cr6.eq) goto loc_8229E200;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8229e200
	if (ctx.cr6.eq) goto loc_8229E200;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
loc_8229E0C8:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8229E0D8;
	sub_822B2F88(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229dff4
	if (!ctx.cr6.eq) goto loc_8229DFF4;
loc_8229E0E8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229E108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229E108:
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r25,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8229E11C;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229e178
	if (ctx.cr6.eq) goto loc_8229E178;
loc_8229E128:
	// ld r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 76);
	// rlwinm r10,r11,0,21,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x780;
	// rlwinm r10,r10,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r10,128
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 128, ctx.xer);
	// bne cr6,0x8229e178
	if (!ctx.cr6.eq) goto loc_8229E178;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229E15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8229E16C;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229e128
	if (!ctx.cr6.eq) goto loc_8229E128;
loc_8229E178:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e1c4
	if (ctx.cr6.eq) goto loc_8229E1C4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8229e1f4
	if (ctx.cr6.eq) goto loc_8229E1F4;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229e1a4
	if (!ctx.cr6.eq) goto loc_8229E1A4;
	// bl 0x822900a0
	ctx.lr = 0x8229E1A0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8229E1A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229E1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_8229E1C4:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8229e1f4
	if (ctx.cr6.eq) goto loc_8229E1F4;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229e1e0
	if (!ctx.cr6.eq) goto loc_8229E1E0;
	// bl 0x822900a0
	ctx.lr = 0x8229E1DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8229E1E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229E1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229E1F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,544
	ctx.r1.s64 = ctx.r31.s64 + 544;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_8229E200:
	// ld r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 76);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229e0e8
	if (!ctx.cr6.eq) goto loc_8229E0E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229e230
	if (!ctx.cr6.eq) goto loc_8229E230;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x8229E22C;
	sub_822960C0(ctx, base);
	// b 0x8229e238
	goto loc_8229E238;
loc_8229E230:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229E238;
	sub_8233E1A0(ctx, base);
loc_8229E238:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r29,112(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229e24c
	if (!ctx.cr6.eq) goto loc_8229E24C;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8229E24C:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8233e1a0
	ctx.lr = 0x8229E258;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e26c
	if (ctx.cr6.eq) goto loc_8229E26C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8229e270
	goto loc_8229E270;
loc_8229E26C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8229E270:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-26808
	ctx.r5.s64 = ctx.r10.s64 + -26808;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823338c8
	ctx.lr = 0x8229E298;
	sub_823338C8(ctx, base);
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8229e2ac
	if (!ctx.cr6.eq) goto loc_8229E2AC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8229E2AC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8232d178
	ctx.lr = 0x8229E2BC;
	sub_8232D178(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x8229E2C4;
	sub_82299080(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x8229E2CC;
	sub_82299080(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8229E2D4;
	sub_82299080(ctx, base);
	// b 0x8229e108
	goto loc_8229E108;
loc_8229E2D8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r27,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e2fc
	if (ctx.cr6.eq) goto loc_8229E2FC;
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x8229E2FC;
	sub_82294520(ctx, base);
loc_8229E2FC:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x8229E304;
	sub_82294CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,544
	ctx.r1.s64 = ctx.r31.s64 + 544;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229E310"))) PPC_WEAK_FUNC(sub_8229E310);
PPC_FUNC_IMPL(__imp__sub_8229E310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8229E318;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r27,188(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r29,r10,-19580
	ctx.r29.s64 = ctx.r10.s64 + -19580;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e3d4
	if (ctx.cr6.eq) goto loc_8229E3D4;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229e3d4
	if (ctx.cr6.eq) goto loc_8229E3D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8229e3d4
	if (!ctx.cr6.eq) goto loc_8229E3D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ac938
	ctx.lr = 0x8229E35C;
	sub_822AC938(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229e3d4
	if (ctx.cr6.eq) goto loc_8229E3D4;
loc_8229E368:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8229e37c
	if (ctx.cr6.eq) goto loc_8229E37C;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8229e398
	goto loc_8229E398;
loc_8229E37C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8229E394;
	sub_8233E028(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8229E398:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8229e3b8
	if (!ctx.cr6.eq) goto loc_8229E3B8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8229e3ec
	if (ctx.cr6.eq) goto loc_8229E3EC;
loc_8229E3B8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822adee0
	ctx.lr = 0x8229E3C8;
	sub_822ADEE0(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e368
	if (!ctx.cr6.eq) goto loc_8229E368;
loc_8229E3D4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8229e3f8
	if (ctx.cr6.eq) goto loc_8229E3F8;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x8229e3fc
	goto loc_8229E3FC;
loc_8229E3EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8229E3F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8229E3FC:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822adee0
	ctx.lr = 0x8229E408;
	sub_822ADEE0(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229e480
	if (ctx.cr6.eq) goto loc_8229E480;
loc_8229E414:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8229e428
	if (ctx.cr6.eq) goto loc_8229E428;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8229e444
	goto loc_8229E444;
loc_8229E428:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8229E440;
	sub_8233E028(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8229E444:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8229e464
	if (!ctx.cr6.eq) goto loc_8229E464;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8229e3ec
	if (ctx.cr6.eq) goto loc_8229E3EC;
loc_8229E464:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822adee0
	ctx.lr = 0x8229E474;
	sub_822ADEE0(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e414
	if (!ctx.cr6.eq) goto loc_8229E414;
loc_8229E480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229E48C"))) PPC_WEAK_FUNC(sub_8229E48C);
PPC_FUNC_IMPL(__imp__sub_8229E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229E490"))) PPC_WEAK_FUNC(sub_8229E490);
PPC_FUNC_IMPL(__imp__sub_8229E490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8229E498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,24(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229e550
	if (ctx.cr6.eq) goto loc_8229E550;
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229e550
	if (ctx.cr6.eq) goto loc_8229E550;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8229e550
	if (!ctx.cr6.eq) goto loc_8229E550;
loc_8229E4C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229e57c
	if (!ctx.cr6.eq) goto loc_8229E57C;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x822ac1c0
	ctx.lr = 0x8229E4DC;
	sub_822AC1C0(ctx, base);
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e4c8
	if (!ctx.cr6.eq) goto loc_8229E4C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229e57c
	if (!ctx.cr6.eq) goto loc_8229E57C;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8229e550
	if (ctx.cr0.lt) goto loc_8229E550;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8229E510:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229e53c
	if (ctx.cr6.eq) goto loc_8229E53C;
loc_8229E51C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229e53c
	if (!ctx.cr6.eq) goto loc_8229E53C;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x822ac1c0
	ctx.lr = 0x8229E530;
	sub_822AC1C0(ctx, base);
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e51c
	if (!ctx.cr6.eq) goto loc_8229E51C;
loc_8229E53C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-12
	ctx.r29.s64 = ctx.r29.s64 + -12;
	// bge 0x8229e510
	if (!ctx.cr0.lt) goto loc_8229E510;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229e57c
	if (!ctx.cr6.eq) goto loc_8229E57C;
loc_8229E550:
	// lwz r31,52(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229e57c
	if (ctx.cr6.eq) goto loc_8229E57C;
loc_8229E55C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229e57c
	if (!ctx.cr6.eq) goto loc_8229E57C;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x822ac1c0
	ctx.lr = 0x8229E570;
	sub_822AC1C0(ctx, base);
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e55c
	if (!ctx.cr6.eq) goto loc_8229E55C;
loc_8229E57C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229E584"))) PPC_WEAK_FUNC(sub_8229E584);
PPC_FUNC_IMPL(__imp__sub_8229E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229E588"))) PPC_WEAK_FUNC(sub_8229E588);
PPC_FUNC_IMPL(__imp__sub_8229E588) {
	PPC_FUNC_PROLOGUE();
	// b 0x8229e490
	sub_8229E490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229E58C"))) PPC_WEAK_FUNC(sub_8229E58C);
PPC_FUNC_IMPL(__imp__sub_8229E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229E590"))) PPC_WEAK_FUNC(sub_8229E590);
PPC_FUNC_IMPL(__imp__sub_8229E590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8229E598;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8229e5c0
	if (ctx.cr6.eq) goto loc_8229E5C0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8229e5c4
	goto loc_8229E5C4;
loc_8229E5C0:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_8229E5C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822adfb8
	ctx.lr = 0x8229E5CC;
	sub_822ADFB8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229e660
	if (ctx.cr6.eq) goto loc_8229E660;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r27,188(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r29,r11,-19580
	ctx.r29.s64 = ctx.r11.s64 + -19580;
loc_8229E5E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229e660
	if (!ctx.cr6.eq) goto loc_8229E660;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8229e604
	if (ctx.cr6.eq) goto loc_8229E604;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8229e620
	goto loc_8229E620;
loc_8229E604:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8229E61C;
	sub_8233E028(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8229E620:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8229e644
	if (!ctx.cr6.eq) goto loc_8229E644;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8229e644
	if (!ctx.cr6.eq) goto loc_8229E644;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8229E644:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822adfb8
	ctx.lr = 0x8229E654;
	sub_822ADFB8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e5e8
	if (!ctx.cr6.eq) goto loc_8229E5E8;
loc_8229E660:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229E66C"))) PPC_WEAK_FUNC(sub_8229E66C);
PPC_FUNC_IMPL(__imp__sub_8229E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229E670"))) PPC_WEAK_FUNC(sub_8229E670);
PPC_FUNC_IMPL(__imp__sub_8229E670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229e698
	if (ctx.cr6.eq) goto loc_8229E698;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8229E698:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229E6A0"))) PPC_WEAK_FUNC(sub_8229E6A0);
PPC_FUNC_IMPL(__imp__sub_8229E6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8229E6A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,52(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229e7c0
	if (ctx.cr6.eq) goto loc_8229E7C0;
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229e7c0
	if (!ctx.cr6.eq) goto loc_8229E7C0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8229E6DC:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e6f4
	if (ctx.cr6.eq) goto loc_8229E6F4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229e6dc
	if (!ctx.cr6.eq) goto loc_8229E6DC;
loc_8229E6F4:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229e7c0
	if (ctx.cr6.eq) goto loc_8229E7C0;
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// li r31,63
	ctx.r31.s64 = 63;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229e728
	if (!ctx.cr6.eq) goto loc_8229E728;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x8229E724;
	sub_822960C0(ctx, base);
	// b 0x8229e74c
	goto loc_8229E74C;
loc_8229E728:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8229e744
	if (!ctx.cr6.eq) goto loc_8229E744;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x8229E740;
	sub_822960C0(ctx, base);
	// b 0x8229e74c
	goto loc_8229E74C;
loc_8229E744:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229E74C;
	sub_8233E1A0(ctx, base);
loc_8229E74C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e760
	if (ctx.cr6.eq) goto loc_8229E760;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8229e768
	goto loc_8229E768;
loc_8229E760:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
loc_8229E768:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r11,-23856
	ctx.r4.s64 = ctx.r11.s64 + -23856;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r28,r10,-19548
	ctx.r28.s64 = ctx.r10.s64 + -19548;
	// bl 0x822960c0
	ctx.lr = 0x8229E780;
	sub_822960C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823376a0
	ctx.lr = 0x8229E78C;
	sub_823376A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822952c8
	ctx.lr = 0x8229E79C;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82295ff0
	ctx.lr = 0x8229E7AC;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82295ff0
	ctx.lr = 0x8229E7BC;
	sub_82295FF0(ctx, base);
	// b 0x8229e7cc
	goto loc_8229E7CC;
loc_8229E7C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r31,64
	ctx.r31.s64 = 64;
	// bl 0x822b2c80
	ctx.lr = 0x8229E7CC;
	sub_822B2C80(ctx, base);
loc_8229E7CC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8229E7D8;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e7f0
	if (ctx.cr6.eq) goto loc_8229E7F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,26,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82299080
	ctx.lr = 0x8229E7F0;
	sub_82299080(ctx, base);
loc_8229E7F0:
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e808
	if (ctx.cr6.eq) goto loc_8229E808;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r31,r31,0,27,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82299080
	ctx.lr = 0x8229E808;
	sub_82299080(ctx, base);
loc_8229E808:
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e820
	if (ctx.cr6.eq) goto loc_8229E820;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,28,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82299080
	ctx.lr = 0x8229E820;
	sub_82299080(ctx, base);
loc_8229E820:
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e838
	if (ctx.cr6.eq) goto loc_8229E838;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r31,r31,0,29,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82299080
	ctx.lr = 0x8229E838;
	sub_82299080(ctx, base);
loc_8229E838:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e850
	if (ctx.cr6.eq) goto loc_8229E850;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82299080
	ctx.lr = 0x8229E850;
	sub_82299080(ctx, base);
loc_8229E850:
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e868
	if (ctx.cr6.eq) goto loc_8229E868;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x8229E868;
	sub_82299080(ctx, base);
loc_8229E868:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e87c
	if (ctx.cr6.eq) goto loc_8229E87C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x8229E87C;
	sub_82299080(ctx, base);
loc_8229E87C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229E888"))) PPC_WEAK_FUNC(sub_8229E888);
PPC_FUNC_IMPL(__imp__sub_8229E888) {
	PPC_FUNC_PROLOGUE();
	// ori r6,r6,9
	ctx.r6.u64 = ctx.r6.u64 | 9;
	// b 0x8229e890
	sub_8229E890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229E890"))) PPC_WEAK_FUNC(sub_8229E890);
PPC_FUNC_IMPL(__imp__sub_8229E890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8229E898;
	__savegprlr_14(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// stw r25,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r25.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r29,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r29.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r24,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r24.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8229e8d8
	if (!ctx.cr6.eq) goto loc_8229E8D8;
	// lwz r25,52(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r25,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r25.u32);
	// stw r25,17364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17364, ctx.r25.u32);
loc_8229E8D8:
	// lwz r11,184(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229f174
	if (ctx.cr6.eq) goto loc_8229F174;
	// lwz r4,60(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229e930
	if (ctx.cr6.eq) goto loc_8229E930;
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229ea64
	if (ctx.cr6.eq) goto loc_8229EA64;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e94c
	if (ctx.cr6.eq) goto loc_8229E94C;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8229e890
	ctx.lr = 0x8229E924;
	sub_8229E890(ctx, base);
	// rlwinm r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229f174
	if (!ctx.cr6.eq) goto loc_8229F174;
loc_8229E930:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229eb5c
	if (ctx.cr6.eq) goto loc_8229EB5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x822960c0
	ctx.lr = 0x8229E948;
	sub_822960C0(ctx, base);
	// b 0x8229eb6c
	goto loc_8229EB6C;
loc_8229E94C:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e9dc
	if (ctx.cr6.eq) goto loc_8229E9DC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82293938
	ctx.lr = 0x8229E960;
	sub_82293938(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8229E968:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8229f174
	if (!ctx.cr6.lt) goto loc_8229F174;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e9d0
	if (ctx.cr6.eq) goto loc_8229E9D0;
loc_8229E98C:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8229e9ac
	if (ctx.cr6.eq) goto loc_8229E9AC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229e98c
	if (!ctx.cr6.eq) goto loc_8229E98C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822939e8
	ctx.lr = 0x8229E9A8;
	sub_822939E8(ctx, base);
	// b 0x8229e968
	goto loc_8229E968;
loc_8229E9AC:
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82396ef8
	ctx.lr = 0x8229E9BC;
	sub_82396EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r6,r29,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x8229e890
	ctx.lr = 0x8229E9D0;
	sub_8229E890(ctx, base);
loc_8229E9D0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822939e8
	ctx.lr = 0x8229E9D8;
	sub_822939E8(ctx, base);
	// b 0x8229e968
	goto loc_8229E968;
loc_8229E9DC:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e930
	if (ctx.cr6.eq) goto loc_8229E930;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2bc0
	ctx.lr = 0x8229E9F0;
	sub_822B2BC0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8229E9F8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8229e930
	if (!ctx.cr6.lt) goto loc_8229E930;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ea58
	if (ctx.cr6.eq) goto loc_8229EA58;
loc_8229EA20:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8229ea40
	if (ctx.cr6.eq) goto loc_8229EA40;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229ea20
	if (!ctx.cr6.eq) goto loc_8229EA20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2b40
	ctx.lr = 0x8229EA3C;
	sub_822B2B40(ctx, base);
	// b 0x8229e9f8
	goto loc_8229E9F8;
loc_8229EA40:
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// rlwinm r6,r29,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8229e890
	ctx.lr = 0x8229EA58;
	sub_8229E890(ctx, base);
loc_8229EA58:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2b40
	ctx.lr = 0x8229EA60;
	sub_822B2B40(ctx, base);
	// b 0x8229e9f8
	goto loc_8229E9F8;
loc_8229EA64:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229eaf4
	if (ctx.cr6.eq) goto loc_8229EAF4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82293938
	ctx.lr = 0x8229EA78;
	sub_82293938(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8229EA80:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8229f174
	if (!ctx.cr6.lt) goto loc_8229F174;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229eae8
	if (ctx.cr6.eq) goto loc_8229EAE8;
loc_8229EAA4:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8229eac4
	if (ctx.cr6.eq) goto loc_8229EAC4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229eaa4
	if (!ctx.cr6.eq) goto loc_8229EAA4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822939e8
	ctx.lr = 0x8229EAC0;
	sub_822939E8(ctx, base);
	// b 0x8229ea80
	goto loc_8229EA80;
loc_8229EAC4:
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82396ef8
	ctx.lr = 0x8229EAD4;
	sub_82396EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r6,r29,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x8229e890
	ctx.lr = 0x8229EAE8;
	sub_8229E890(ctx, base);
loc_8229EAE8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822939e8
	ctx.lr = 0x8229EAF0;
	sub_822939E8(ctx, base);
	// b 0x8229ea80
	goto loc_8229EA80;
loc_8229EAF4:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e930
	if (ctx.cr6.eq) goto loc_8229E930;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2bc0
	ctx.lr = 0x8229EB08;
	sub_822B2BC0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8229EB10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8229e930
	if (!ctx.cr6.lt) goto loc_8229E930;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8229eb50
	if (!ctx.cr6.eq) goto loc_8229EB50;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// rlwinm r6,r29,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8229e890
	ctx.lr = 0x8229EB50;
	sub_8229E890(ctx, base);
loc_8229EB50:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2b40
	ctx.lr = 0x8229EB58;
	sub_822B2B40(ctx, base);
	// b 0x8229eb10
	goto loc_8229EB10;
loc_8229EB5C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x8229e6a0
	ctx.lr = 0x8229EB6C;
	sub_8229E6A0(ctx, base);
loc_8229EB6C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82294bb8
	ctx.lr = 0x8229EB78;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229eb90
	if (ctx.cr6.eq) goto loc_8229EB90;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x8229EB90;
	sub_82299080(ctx, base);
loc_8229EB90:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229eba4
	if (ctx.cr6.eq) goto loc_8229EBA4;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82299080
	ctx.lr = 0x8229EBA4;
	sub_82299080(ctx, base);
loc_8229EBA4:
	// lwz r9,52(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229ebcc
	if (ctx.cr6.eq) goto loc_8229EBCC;
	// ld r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8229ebd0
	if (ctx.cr6.eq) goto loc_8229EBD0;
loc_8229EBCC:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8229EBD0:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
	// addi r27,r10,-19580
	ctx.r27.s64 = ctx.r10.s64 + -19580;
	// stw r17,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r17.u32);
	// stw r15,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r15.u32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// addi r20,r11,11272
	ctx.r20.s64 = ctx.r11.s64 + 11272;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// bne cr6,0x8229eccc
	if (!ctx.cr6.eq) goto loc_8229ECCC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bne cr6,0x8229ec20
	if (!ctx.cr6.eq) goto loc_8229EC20;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x8229EC1C;
	sub_822960C0(ctx, base);
	// b 0x8229ec40
	goto loc_8229EC40;
loc_8229EC20:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229ec38
	if (!ctx.cr6.eq) goto loc_8229EC38;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822960c0
	ctx.lr = 0x8229EC34;
	sub_822960C0(ctx, base);
	// b 0x8229ec40
	goto loc_8229EC40;
loc_8229EC38:
	// addi r4,r9,44
	ctx.r4.s64 = ctx.r9.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229EC40;
	sub_8233E1A0(ctx, base);
loc_8229EC40:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r31,168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229ec54
	if (!ctx.cr6.eq) goto loc_8229EC54;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_8229EC54:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229ec70
	if (!ctx.cr6.eq) goto loc_8229EC70;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822960c0
	ctx.lr = 0x8229EC6C;
	sub_822960C0(ctx, base);
	// b 0x8229ec78
	goto loc_8229EC78;
loc_8229EC70:
	// addi r4,r19,44
	ctx.r4.s64 = ctx.r19.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229EC78;
	sub_8233E1A0(ctx, base);
loc_8229EC78:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229ec8c
	if (!ctx.cr6.eq) goto loc_8229EC8C;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_8229EC8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-26784
	ctx.r4.s64 = ctx.r11.s64 + -26784;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8232e868
	ctx.lr = 0x8229ECA0;
	sub_8232E868(ctx, base);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82295908
	ctx.lr = 0x8229ECAC;
	sub_82295908(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82299080
	ctx.lr = 0x8229ECB4;
	sub_82299080(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82299080
	ctx.lr = 0x8229ECBC;
	sub_82299080(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82299080
	ctx.lr = 0x8229ECC4;
	sub_82299080(ctx, base);
	// lwz r15,220(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r17,216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_8229ECCC:
	// lwz r23,116(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// lis r21,-31885
	ctx.r21.s64 = -2089615360;
	// lwz r28,264(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8229f060
	if (ctx.cr6.eq) goto loc_8229F060;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r14,268(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lis r18,-31885
	ctx.r18.s64 = -2089615360;
	// addi r16,r11,-26772
	ctx.r16.s64 = ctx.r11.s64 + -26772;
loc_8229ECF0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8229ed00
	if (ctx.cr6.eq) goto loc_8229ED00;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8229f054
	if (!ctx.cr6.eq) goto loc_8229F054;
loc_8229ED00:
	// ld r11,76(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 76);
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8229ed18
	if (!ctx.cr6.eq) goto loc_8229ED18;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8229ED18:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229ED2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229ed38
	if (!ctx.cr6.eq) goto loc_8229ED38;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8229ED38:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8229ed98
	if (!ctx.cr6.eq) goto loc_8229ED98;
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r22,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r22.u32);
	// bl 0x8229bcd0
	ctx.lr = 0x8229ED58;
	sub_8229BCD0(ctx, base);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82295908
	ctx.lr = 0x8229ED64;
	sub_82295908(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229ed88
	if (ctx.cr6.eq) goto loc_8229ED88;
	// stw r22,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82294520
	ctx.lr = 0x8229ED88;
	sub_82294520(ctx, base);
loc_8229ED88:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82294cc8
	ctx.lr = 0x8229ED90;
	sub_82294CC8(ctx, base);
	// lwz r15,220(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r17,216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_8229ED98:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229edb4
	if (!ctx.cr6.eq) goto loc_8229EDB4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822960c0
	ctx.lr = 0x8229EDB0;
	sub_822960C0(ctx, base);
	// b 0x8229edbc
	goto loc_8229EDBC;
loc_8229EDB4:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229EDBC;
	sub_8233E1A0(ctx, base);
loc_8229EDBC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822af180
	ctx.lr = 0x8229EDC4;
	sub_822AF180(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8229f17c
	if (ctx.cr6.eq) goto loc_8229F17C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bne cr6,0x8229ede0
	if (!ctx.cr6.eq) goto loc_8229EDE0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
loc_8229EDE0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bne cr6,0x8229edf0
	if (!ctx.cr6.eq) goto loc_8229EDF0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_8229EDF0:
	// lwz r3,28876(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28876);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229EE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229efc4
	if (ctx.cr6.eq) goto loc_8229EFC4;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r22.u32);
	// addi r30,r1,184
	ctx.r30.s64 = ctx.r1.s64 + 184;
	// bl 0x82294bb8
	ctx.lr = 0x8229EE34;
	sub_82294BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x822aca48
	ctx.lr = 0x8229EE48;
	sub_822ACA48(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82299080
	ctx.lr = 0x8229EE50;
	sub_82299080(ctx, base);
	// lwz r25,188(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8229efac
	if (!ctx.cr6.gt) goto loc_8229EFAC;
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,128(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// add r26,r11,r19
	ctx.r26.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r8,340(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// lwz r28,72(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8229EE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8229EE9C;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// mullw r5,r25,r28
	ctx.r5.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8229EEB4;
	sub_82E640B8(ctx, base);
	// lwz r29,128(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229ef3c
	if (ctx.cr6.eq) goto loc_8229EF3C;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229ef3c
	if (ctx.cr6.eq) goto loc_8229EF3C;
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ef3c
	if (ctx.cr6.eq) goto loc_8229EF3C;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229ef3c
	if (ctx.cr6.eq) goto loc_8229EF3C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229EF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229ef3c
	if (ctx.cr6.eq) goto loc_8229EF3C;
	// addic. r31,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r31.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8229ef3c
	if (ctx.cr0.lt) goto loc_8229EF3C;
	// mullw r30,r31,r28
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// neg r27,r28
	ctx.r27.s64 = -ctx.r28.s64;
loc_8229EF20:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823d0250
	ctx.lr = 0x8229EF30;
	sub_823D0250(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bge 0x8229ef20
	if (!ctx.cr0.lt) goto loc_8229EF20;
loc_8229EF3C:
	// addic. r31,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r31.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8229efac
	if (ctx.cr0.lt) goto loc_8229EFAC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8229EF5C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229ef74
	if (ctx.cr6.eq) goto loc_8229EF74;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8229ef78
	goto loc_8229EF78;
loc_8229EF74:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_8229EF78:
	// lwz r3,128(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229EF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bge 0x8229ef5c
	if (!ctx.cr0.lt) goto loc_8229EF5C;
loc_8229EFAC:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82295e20
	ctx.lr = 0x8229EFB4;
	sub_82295E20(ctx, base);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,264(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r26,244(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r25,508(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
loc_8229EFC4:
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8229EFC8:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f010
	if (ctx.cr6.eq) goto loc_8229F010;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229f040
	if (ctx.cr6.eq) goto loc_8229F040;
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229eff0
	if (!ctx.cr6.eq) goto loc_8229EFF0;
	// bl 0x822900a0
	ctx.lr = 0x8229EFEC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229EFF0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8229F010:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229f040
	if (ctx.cr6.eq) goto loc_8229F040;
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f02c
	if (!ctx.cr6.eq) goto loc_8229F02C;
	// bl 0x822900a0
	ctx.lr = 0x8229F028;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229F02C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F040:
	// lwz r24,532(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r29,524(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
loc_8229F054:
	// lwz r23,108(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 108);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8229ecf0
	if (!ctx.cr6.eq) goto loc_8229ECF0;
loc_8229F060:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229f084
	if (ctx.cr6.eq) goto loc_8229F084;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F084:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f0cc
	if (ctx.cr6.eq) goto loc_8229F0CC;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8229f0fc
	if (ctx.cr6.eq) goto loc_8229F0FC;
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f0ac
	if (!ctx.cr6.eq) goto loc_8229F0AC;
	// bl 0x822900a0
	ctx.lr = 0x8229F0A8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229F0AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_8229F0CC:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8229f0fc
	if (ctx.cr6.eq) goto loc_8229F0FC;
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f0e8
	if (!ctx.cr6.eq) goto loc_8229F0E8;
	// bl 0x822900a0
	ctx.lr = 0x8229F0E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229F0E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F0FC:
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f144
	if (ctx.cr6.eq) goto loc_8229F144;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229f174
	if (ctx.cr6.eq) goto loc_8229F174;
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f124
	if (!ctx.cr6.eq) goto loc_8229F124;
	// bl 0x822900a0
	ctx.lr = 0x8229F120;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229F124:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8229F144:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229f174
	if (ctx.cr6.eq) goto loc_8229F174;
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f160
	if (!ctx.cr6.eq) goto loc_8229F160;
	// bl 0x822900a0
	ctx.lr = 0x8229F15C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229F160:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F174:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8229F17C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822af368
	ctx.lr = 0x8229F184;
	sub_822AF368(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229f1f8
	if (ctx.cr6.eq) goto loc_8229F1F8;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bne cr6,0x8229f19c
	if (!ctx.cr6.eq) goto loc_8229F19C;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
loc_8229F19C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bne cr6,0x8229f1ac
	if (!ctx.cr6.eq) goto loc_8229F1AC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_8229F1AC:
	// lwz r3,28876(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28876);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229efc4
	if (ctx.cr6.eq) goto loc_8229EFC4;
	// stw r22,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r22,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r22.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x822aca48
	ctx.lr = 0x8229F1EC;
	sub_822ACA48(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82295e20
	ctx.lr = 0x8229F1F4;
	sub_82295E20(ctx, base);
	// b 0x8229efc4
	goto loc_8229EFC4;
loc_8229F1F8:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229efc4
	if (!ctx.cr6.gt) goto loc_8229EFC4;
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8229F20C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8229f2c4
	if (ctx.cr6.eq) goto loc_8229F2C4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8229f230
	if (!ctx.cr6.eq) goto loc_8229F230;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822960c0
	ctx.lr = 0x8229F22C;
	sub_822960C0(ctx, base);
	// b 0x8229f238
	goto loc_8229F238;
loc_8229F230:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229F238;
	sub_8233E1A0(ctx, base);
loc_8229F238:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229f24c
	if (!ctx.cr6.eq) goto loc_8229F24C;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_8229F24C:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8232e868
	ctx.lr = 0x8229F25C;
	sub_8232E868(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82295908
	ctx.lr = 0x8229F268;
	sub_82295908(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f28c
	if (ctx.cr6.eq) goto loc_8229F28C;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294520
	ctx.lr = 0x8229F28C;
	sub_82294520(ctx, base);
loc_8229F28C:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294cc8
	ctx.lr = 0x8229F294;
	sub_82294CC8(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r22,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f2b8
	if (ctx.cr6.eq) goto loc_8229F2B8;
	// stw r22,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82294520
	ctx.lr = 0x8229F2B8;
	sub_82294520(ctx, base);
loc_8229F2B8:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82294cc8
	ctx.lr = 0x8229F2C0;
	sub_82294CC8(ctx, base);
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8229F2C4:
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// bne cr6,0x8229f2e0
	if (!ctx.cr6.eq) goto loc_8229F2E0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
loc_8229F2E0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229f2f4
	if (!ctx.cr6.eq) goto loc_8229F2F4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_8229F2F4:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bne cr6,0x8229f304
	if (!ctx.cr6.eq) goto loc_8229F304;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_8229F304:
	// lwz r3,28876(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28876);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229f36c
	if (ctx.cr6.eq) goto loc_8229F36C;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229f338
	if (!ctx.cr6.eq) goto loc_8229F338;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_8229F338:
	// lwz r11,72(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r10,100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r9,312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r19
	ctx.r5.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229F36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F36C:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f3c8
	if (ctx.cr6.eq) goto loc_8229F3C8;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229f404
	if (ctx.cr6.eq) goto loc_8229F404;
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f3a4
	if (!ctx.cr6.eq) goto loc_8229F3A4;
	// bl 0x822900a0
	ctx.lr = 0x8229F3A0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229F3A4:
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
	ctx.lr = 0x8229F3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// b 0x8229f3cc
	goto loc_8229F3CC;
loc_8229F3C8:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_8229F3CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229f404
	if (ctx.cr6.eq) goto loc_8229F404;
	// lwz r11,28888(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229f3ec
	if (!ctx.cr6.eq) goto loc_8229F3EC;
	// bl 0x822900a0
	ctx.lr = 0x8229F3E8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_8229F3EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229F404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F404:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229f20c
	if (ctx.cr6.lt) goto loc_8229F20C;
	// b 0x8229efc8
	goto loc_8229EFC8;
}

__attribute__((alias("__imp__sub_8229F424"))) PPC_WEAK_FUNC(sub_8229F424);
PPC_FUNC_IMPL(__imp__sub_8229F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229F428"))) PPC_WEAK_FUNC(sub_8229F428);
PPC_FUNC_IMPL(__imp__sub_8229F428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8229F430;
	__savegprlr_14(ctx, base);
	// stwu r1,-2416(r1)
	ea = -2416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-31885
	ctx.r21.s64 = -2089615360;
	// stw r3,2436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2436, ctx.r3.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r7,2468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2468, ctx.r7.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r11,28904(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28904);
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8229fc60
	if (!ctx.cr6.gt) goto loc_8229FC60;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-31905
	ctx.r7.s64 = -2090926080;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r27,r8,11272
	ctx.r27.s64 = ctx.r8.s64 + 11272;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// lis r15,-31885
	ctx.r15.s64 = -2089615360;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// lis r22,-31885
	ctx.r22.s64 = -2089615360;
	// addi r26,r7,-24656
	ctx.r26.s64 = ctx.r7.s64 + -24656;
	// addi r19,r9,-26732
	ctx.r19.s64 = ctx.r9.s64 + -26732;
	// addi r25,r10,-26756
	ctx.r25.s64 = ctx.r10.s64 + -26756;
	// b 0x8229f4a0
	goto loc_8229F4A0;
loc_8229F49C:
	// lwz r27,140(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8229F4A0:
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229f4bc
	if (ctx.cr6.eq) goto loc_8229F4BC;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8229f4c0
	goto loc_8229F4C0;
loc_8229F4BC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8229F4C0:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8232e868
	ctx.lr = 0x8229F4D8;
	sub_8232E868(ctx, base);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// beq cr6,0x8229f53c
	if (ctx.cr6.eq) goto loc_8229F53C;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f50c
	if (!ctx.cr6.eq) goto loc_8229F50C;
	// bl 0x822900a0
	ctx.lr = 0x8229F508;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F50C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// bl 0x82bea998
	ctx.lr = 0x8229F53C;
	sub_82BEA998(ctx, base);
loc_8229F53C:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f584
	if (ctx.cr6.eq) goto loc_8229F584;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229f5b4
	if (ctx.cr6.eq) goto loc_8229F5B4;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f564
	if (!ctx.cr6.eq) goto loc_8229F564;
	// bl 0x822900a0
	ctx.lr = 0x8229F560;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F564:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8229F584:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229f5b4
	if (ctx.cr6.eq) goto loc_8229F5B4;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f5a0
	if (!ctx.cr6.eq) goto loc_8229F5A0;
	// bl 0x822900a0
	ctx.lr = 0x8229F59C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F5A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F5B4:
	// stw r14,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r14.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r14,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r14.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r14,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r14.u32);
	// bne cr6,0x8229f5d0
	if (!ctx.cr6.eq) goto loc_8229F5D0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8229F5D0:
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8229f780
	if (!ctx.cr6.eq) goto loc_8229F780;
	// lwz r11,28904(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28904);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229f61c
	if (ctx.cr6.eq) goto loc_8229F61C;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8229f620
	goto loc_8229F620;
loc_8229F61C:
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8229F620:
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8232e868
	ctx.lr = 0x8229F638;
	sub_8232E868(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294bb8
	ctx.lr = 0x8229F644;
	sub_82294BB8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f690
	if (ctx.cr6.eq) goto loc_8229F690;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229f6c0
	if (ctx.cr6.eq) goto loc_8229F6C0;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f670
	if (!ctx.cr6.eq) goto loc_8229F670;
	// bl 0x822900a0
	ctx.lr = 0x8229F66C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F670:
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
	ctx.lr = 0x8229F68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8229F690:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229f6c0
	if (ctx.cr6.eq) goto loc_8229F6C0;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f6ac
	if (!ctx.cr6.eq) goto loc_8229F6AC;
	// bl 0x822900a0
	ctx.lr = 0x8229F6A8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F6AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F6C0:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r14,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r14.u32);
	// stw r14,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// bne cr6,0x8229f6e0
	if (!ctx.cr6.eq) goto loc_8229F6E0;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8229F6E0:
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r14,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r14.u32);
	// bne cr6,0x8229f7f8
	if (!ctx.cr6.eq) goto loc_8229F7F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f730
	if (ctx.cr6.eq) goto loc_8229F730;
	// stw r14,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r14.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294520
	ctx.lr = 0x8229F730;
	sub_82294520(ctx, base);
loc_8229F730:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294cc8
	ctx.lr = 0x8229F738;
	sub_82294CC8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// beq cr6,0x8229f758
	if (ctx.cr6.eq) goto loc_8229F758;
	// stw r14,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x8229F758;
	sub_82294520(ctx, base);
loc_8229F758:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x8229F760;
	sub_82294CC8(ctx, base);
	// lwz r11,28904(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28904);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8229f49c
	if (ctx.cr6.lt) goto loc_8229F49C;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8229F780:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8229f7c4
	if (ctx.cr6.eq) goto loc_8229F7C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229f844
	if (ctx.cr6.eq) goto loc_8229F844;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f7a4
	if (!ctx.cr6.eq) goto loc_8229F7A4;
	// bl 0x822900a0
	ctx.lr = 0x8229F7A0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F7A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8229F7C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229f844
	if (ctx.cr6.eq) goto loc_8229F844;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f7e0
	if (!ctx.cr6.eq) goto loc_8229F7E0;
	// bl 0x822900a0
	ctx.lr = 0x8229F7DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F7E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8229f844
	goto loc_8229F844;
loc_8229F7F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f814
	if (ctx.cr6.eq) goto loc_8229F814;
	// stw r14,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r14.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294520
	ctx.lr = 0x8229F814;
	sub_82294520(ctx, base);
loc_8229F814:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294cc8
	ctx.lr = 0x8229F81C;
	sub_82294CC8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// beq cr6,0x8229f83c
	if (ctx.cr6.eq) goto loc_8229F83C;
	// stw r14,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x8229F83C;
	sub_82294520(ctx, base);
loc_8229F83C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x8229F844;
	sub_82294CC8(ctx, base);
loc_8229F844:
	// lwz r11,2436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2436);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r14,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r14,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r14.u32);
	// stw r14,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r14.u32);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// stw r14,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r14.u32);
	// stw r14,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r14.u32);
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// stw r14,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r14.u32);
	// lwz r11,100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// add r23,r11,r17
	ctx.r23.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x8229F884;
	sub_822960C0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822aca48
	ctx.lr = 0x8229F898;
	sub_822ACA48(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8229f8e4
	if (ctx.cr6.eq) goto loc_8229F8E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229f914
	if (ctx.cr6.eq) goto loc_8229F914;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f8c4
	if (!ctx.cr6.eq) goto loc_8229F8C4;
	// bl 0x822900a0
	ctx.lr = 0x8229F8C0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F8C4:
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
	ctx.lr = 0x8229F8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8229F8E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229f914
	if (ctx.cr6.eq) goto loc_8229F914;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f900
	if (!ctx.cr6.eq) goto loc_8229F900;
	// bl 0x822900a0
	ctx.lr = 0x8229F8FC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F900:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229F914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229F914:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229f97c
	if (!ctx.cr6.gt) goto loc_8229F97C;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8229fa9c
	if (ctx.cr0.lt) goto loc_8229FA9C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8229F944:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229f958
	if (ctx.cr6.eq) goto loc_8229F958;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8229f95c
	goto loc_8229F95C;
loc_8229F958:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8229F95C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822accf8
	ctx.lr = 0x8229F968;
	sub_822ACCF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bge 0x8229f944
	if (!ctx.cr0.lt) goto loc_8229F944;
	// b 0x8229fa9c
	goto loc_8229FA9C;
loc_8229F97C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r26,140(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r28,r11,-26772
	ctx.r28.s64 = ctx.r11.s64 + -26772;
loc_8229F988:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// sth r11,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x8229F9A0;
	sub_82CB16F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82347258
	ctx.lr = 0x8229F9B4;
	sub_82347258(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822960c0
	ctx.lr = 0x8229F9C0;
	sub_822960C0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822acbd0
	ctx.lr = 0x8229F9CC;
	sub_822ACBD0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229fa1c
	if (ctx.cr6.eq) goto loc_8229FA1C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229fa4c
	if (ctx.cr6.eq) goto loc_8229FA4C;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f9fc
	if (!ctx.cr6.eq) goto loc_8229F9FC;
	// bl 0x822900a0
	ctx.lr = 0x8229F9F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229F9FC:
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
	ctx.lr = 0x8229FA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8229FA1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229fa4c
	if (ctx.cr6.eq) goto loc_8229FA4C;
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229fa38
	if (!ctx.cr6.eq) goto loc_8229FA38;
	// bl 0x822900a0
	ctx.lr = 0x8229FA34;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229FA38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229FA4C:
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r14,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r14.u32);
	// stw r14,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// beq cr6,0x8229fa84
	if (ctx.cr6.eq) goto loc_8229FA84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229fa74
	if (ctx.cr6.eq) goto loc_8229FA74;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8229fa78
	goto loc_8229FA78;
loc_8229FA74:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_8229FA78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822accf8
	ctx.lr = 0x8229FA84;
	sub_822ACCF8(ctx, base);
loc_8229FA84:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229f988
	if (!ctx.cr6.eq) goto loc_8229F988;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229f988
	if (ctx.cr6.lt) goto loc_8229F988;
loc_8229FA9C:
	// lwz r21,2436(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2436);
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// lwz r19,140(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// lwz r20,2468(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// lwz r17,148(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r18,144(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,128(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 128);
	// lwz r25,72(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_8229FAC0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8229fc20
	if (ctx.cr6.lt) goto loc_8229FC20;
	// cmpw cr6,r26,r17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8229fc20
	if (!ctx.cr6.lt) goto loc_8229FC20;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r27,4(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8229fbc4
	if (ctx.cr6.lt) goto loc_8229FBC4;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8229fba8
	if (!ctx.cr6.gt) goto loc_8229FBA8;
	// cmpwi cr6,r25,64
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 64, ctx.xer);
	// ble cr6,0x8229fb24
	if (!ctx.cr6.gt) goto loc_8229FB24;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8229fb50
	goto loc_8229FB50;
loc_8229FB24:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// ble cr6,0x8229fb40
	if (!ctx.cr6.gt) goto loc_8229FB40;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8229fb50
	goto loc_8229FB50;
loc_8229FB40:
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
loc_8229FB50:
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8229fb6c
	if (!ctx.cr6.eq) goto loc_8229FB6C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229fbac
	if (ctx.cr6.eq) goto loc_8229FBAC;
loc_8229FB6C:
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// mullw r30,r10,r25
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229fb84
	if (!ctx.cr6.eq) goto loc_8229FB84;
	// bl 0x822900a0
	ctx.lr = 0x8229FB80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229FB84:
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
	ctx.lr = 0x8229FBA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// b 0x8229fbac
	goto loc_8229FBAC;
loc_8229FBA8:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_8229FBAC:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mullw r11,r31,r25
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// mullw r5,r28,r25
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8229FBC4;
	sub_82E640B8(ctx, base);
loc_8229FBC4:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x8229fbd4
	if (!ctx.cr6.gt) goto loc_8229FBD4;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_8229FBD4:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229fbec
	if (ctx.cr6.eq) goto loc_8229FBEC;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// b 0x8229fbf0
	goto loc_8229FBF0;
loc_8229FBEC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8229FBF0:
	// lwz r3,128(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 128);
	// mullw r11,r27,r25
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229FC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x8229fac0
	goto loc_8229FAC0;
loc_8229FC20:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82295e20
	ctx.lr = 0x8229FC28;
	sub_82295E20(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229fc3c
	if (!ctx.cr6.eq) goto loc_8229FC3C;
	// bl 0x822900a0
	ctx.lr = 0x8229FC38;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28888);
loc_8229FC3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r14,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r14.u32);
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822ae380
	ctx.lr = 0x8229FC60;
	sub_822AE380(ctx, base);
loc_8229FC60:
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229FC68"))) PPC_WEAK_FUNC(sub_8229FC68);
PPC_FUNC_IMPL(__imp__sub_8229FC68) {
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

__attribute__((alias("__imp__sub_8229FC88"))) PPC_WEAK_FUNC(sub_8229FC88);
PPC_FUNC_IMPL(__imp__sub_8229FC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8229FCA4;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822ae380
	ctx.lr = 0x8229FCB8;
	sub_822AE380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229FCCC"))) PPC_WEAK_FUNC(sub_8229FCCC);
PPC_FUNC_IMPL(__imp__sub_8229FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229FCD0"))) PPC_WEAK_FUNC(sub_8229FCD0);
PPC_FUNC_IMPL(__imp__sub_8229FCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8229FCD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,112(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a0204
	if (ctx.cr6.eq) goto loc_822A0204;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-26724
	ctx.r11.s64 = ctx.r11.s64 + -26724;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r15,r8,11272
	ctx.r15.s64 = ctx.r8.s64 + 11272;
	// addi r14,r9,-19580
	ctx.r14.s64 = ctx.r9.s64 + -19580;
	// addi r16,r10,-26716
	ctx.r16.s64 = ctx.r10.s64 + -26716;
loc_8229FD28:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a01f8
	if (ctx.cr6.eq) goto loc_822A01F8;
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a01f8
	if (!ctx.cr6.gt) goto loc_822A01F8;
loc_8229FD54:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// beq cr6,0x8229fe1c
	if (ctx.cr6.eq) goto loc_8229FE1C;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8232e868
	ctx.lr = 0x8229FD80;
	sub_8232E868(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82295908
	ctx.lr = 0x8229FD8C;
	sub_82295908(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229fdd8
	if (ctx.cr6.eq) goto loc_8229FDD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229fe08
	if (ctx.cr6.eq) goto loc_8229FE08;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229fdb8
	if (!ctx.cr6.eq) goto loc_8229FDB8;
	// bl 0x822900a0
	ctx.lr = 0x8229FDB4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229FDB8:
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
	ctx.lr = 0x8229FDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8229FDD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229fe08
	if (ctx.cr6.eq) goto loc_8229FE08;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229fdf4
	if (!ctx.cr6.eq) goto loc_8229FDF4;
	// bl 0x822900a0
	ctx.lr = 0x8229FDF0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229FDF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229FE08:
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
loc_8229FE1C:
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// ble cr6,0x822a0004
	if (!ctx.cr6.gt) goto loc_822A0004;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bne cr6,0x8229fe44
	if (!ctx.cr6.eq) goto loc_8229FE44;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x822960c0
	ctx.lr = 0x8229FE40;
	sub_822960C0(ctx, base);
	// b 0x8229fe4c
	goto loc_8229FE4C;
loc_8229FE44:
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8229FE4C;
	sub_8233E1A0(ctx, base);
loc_8229FE4C:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bne cr6,0x8229fe64
	if (!ctx.cr6.eq) goto loc_8229FE64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
loc_8229FE64:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8232e868
	ctx.lr = 0x8229FE74;
	sub_8232E868(ctx, base);
	// lwz r31,204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r29,200(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8229fef8
	if (ctx.cr6.eq) goto loc_8229FEF8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8229fe9c
	if (ctx.cr6.eq) goto loc_8229FE9C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_8229FE9C:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8229fee0
	if (!ctx.cr6.gt) goto loc_8229FEE0;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8229FED4;
	sub_82294520(ctx, base);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x8229fee4
	goto loc_8229FEE4;
loc_8229FEE0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8229FEE4:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82bea998
	ctx.lr = 0x8229FEF8;
	sub_82BEA998(ctx, base);
loc_8229FEF8:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229ff40
	if (ctx.cr6.eq) goto loc_8229FF40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229ff70
	if (ctx.cr6.eq) goto loc_8229FF70;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229ff20
	if (!ctx.cr6.eq) goto loc_8229FF20;
	// bl 0x822900a0
	ctx.lr = 0x8229FF1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229FF20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8229FF40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229ff70
	if (ctx.cr6.eq) goto loc_8229FF70;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229ff5c
	if (!ctx.cr6.eq) goto loc_8229FF5C;
	// bl 0x822900a0
	ctx.lr = 0x8229FF58;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229FF5C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229FF70:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// beq cr6,0x8229ffc4
	if (ctx.cr6.eq) goto loc_8229FFC4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8229fff4
	if (ctx.cr6.eq) goto loc_8229FFF4;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229ffa4
	if (!ctx.cr6.eq) goto loc_8229FFA4;
	// bl 0x822900a0
	ctx.lr = 0x8229FFA0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229FFA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8229FFC4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8229fff4
	if (ctx.cr6.eq) goto loc_8229FFF4;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229ffe0
	if (!ctx.cr6.eq) goto loc_8229FFE0;
	// bl 0x822900a0
	ctx.lr = 0x8229FFDC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8229FFE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8229FFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229FFF4:
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// b 0x822a012c
	goto loc_822A012C;
loc_822A0004:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bne cr6,0x822a001c
	if (!ctx.cr6.eq) goto loc_822A001C;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A0018;
	sub_822960C0(ctx, base);
	// b 0x822a0024
	goto loc_822A0024;
loc_822A001C:
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A0024;
	sub_8233E1A0(ctx, base);
loc_822A0024:
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822a00a8
	if (ctx.cr6.eq) goto loc_822A00A8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822a004c
	if (ctx.cr6.eq) goto loc_822A004C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_822A004C:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822a0090
	if (!ctx.cr6.gt) goto loc_822A0090;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x822A0084;
	sub_82294520(ctx, base);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x822a0094
	goto loc_822A0094;
loc_822A0090:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_822A0094:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82bea998
	ctx.lr = 0x822A00A8;
	sub_82BEA998(ctx, base);
loc_822A00A8:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a00f0
	if (ctx.cr6.eq) goto loc_822A00F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a0120
	if (ctx.cr6.eq) goto loc_822A0120;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a00d0
	if (!ctx.cr6.eq) goto loc_822A00D0;
	// bl 0x822900a0
	ctx.lr = 0x822A00CC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A00D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A00EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822A00F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a0120
	if (ctx.cr6.eq) goto loc_822A0120;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a010c
	if (!ctx.cr6.eq) goto loc_822A010C;
	// bl 0x822900a0
	ctx.lr = 0x822A0108;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A010C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A0120:
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
loc_822A012C:
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r10,100(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bne cr6,0x822a0150
	if (!ctx.cr6.eq) goto loc_822A0150;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_822A0150:
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a0210
	ctx.lr = 0x822A0164;
	sub_822A0210(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a01ac
	if (ctx.cr6.eq) goto loc_822A01AC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a01dc
	if (ctx.cr6.eq) goto loc_822A01DC;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a018c
	if (!ctx.cr6.eq) goto loc_822A018C;
	// bl 0x822900a0
	ctx.lr = 0x822A0188;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A018C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A01A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_822A01AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a01dc
	if (ctx.cr6.eq) goto loc_822A01DC;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a01c8
	if (!ctx.cr6.eq) goto loc_822A01C8;
	// bl 0x822900a0
	ctx.lr = 0x822A01C4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A01C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A01DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A01DC:
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// blt cr6,0x8229fd54
	if (ctx.cr6.lt) goto loc_8229FD54;
loc_822A01F8:
	// lwz r24,104(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8229fd28
	if (!ctx.cr6.eq) goto loc_8229FD28;
loc_822A0204:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A020C"))) PPC_WEAK_FUNC(sub_822A020C);
PPC_FUNC_IMPL(__imp__sub_822A020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A0210"))) PPC_WEAK_FUNC(sub_822A0210);
PPC_FUNC_IMPL(__imp__sub_822A0210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x822A0218;
	__savegprlr_25(ctx, base);
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a02a4
	if (ctx.cr6.eq) goto loc_822A02A4;
	// lwz r25,52(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822b1190
	ctx.lr = 0x822A0244;
	sub_822B1190(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822a0270
	if (!ctx.cr6.eq) goto loc_822A0270;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8229fcd0
	ctx.lr = 0x822A0268;
	sub_8229FCD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_822A0270:
	// lwz r25,52(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822b2170
	ctx.lr = 0x822A0278;
	sub_822B2170(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822a02a4
	if (!ctx.cr6.eq) goto loc_822A02A4;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229f428
	ctx.lr = 0x822A029C;
	sub_8229F428(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_822A02A4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823338c8
	ctx.lr = 0x822A02C0;
	sub_823338C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a0300
	if (ctx.cr6.eq) goto loc_822A0300;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a0300
	if (!ctx.cr6.gt) goto loc_822A0300;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A0300:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x822A0308;
	sub_82299080(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A0310"))) PPC_WEAK_FUNC(sub_822A0310);
PPC_FUNC_IMPL(__imp__sub_822A0310) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822a0328
	if (!ctx.cr6.eq) goto loc_822A0328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822A0328:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a038c
	if (ctx.cr6.eq) goto loc_822A038C;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x822a034c
	if (!ctx.cr6.eq) goto loc_822A034C;
	// lwz r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// bl 0x822a0310
	ctx.lr = 0x822A034C;
	sub_822A0310(ctx, base);
loc_822A034C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x822A037C;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x822A0384;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822A038C;
	sub_82299080(ctx, base);
loc_822A038C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A039C"))) PPC_WEAK_FUNC(sub_822A039C);
PPC_FUNC_IMPL(__imp__sub_822A039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A03A0"))) PPC_WEAK_FUNC(sub_822A03A0);
PPC_FUNC_IMPL(__imp__sub_822A03A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A03A8"))) PPC_WEAK_FUNC(sub_822A03A8);
PPC_FUNC_IMPL(__imp__sub_822A03A8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822a0310
	sub_822A0310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A03B4"))) PPC_WEAK_FUNC(sub_822A03B4);
PPC_FUNC_IMPL(__imp__sub_822A03B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A03B8"))) PPC_WEAK_FUNC(sub_822A03B8);
PPC_FUNC_IMPL(__imp__sub_822A03B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A03BC"))) PPC_WEAK_FUNC(sub_822A03BC);
PPC_FUNC_IMPL(__imp__sub_822A03BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A03C0"))) PPC_WEAK_FUNC(sub_822A03C0);
PPC_FUNC_IMPL(__imp__sub_822A03C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// stw r3,25204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25204, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A03CC"))) PPC_WEAK_FUNC(sub_822A03CC);
PPC_FUNC_IMPL(__imp__sub_822A03CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A03D0"))) PPC_WEAK_FUNC(sub_822A03D0);
PPC_FUNC_IMPL(__imp__sub_822A03D0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822a03fc
	if (ctx.cr6.lt) goto loc_822A03FC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,-21944
	ctx.r11.s64 = ctx.r11.s64 + -21944;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a03fc
	if (!ctx.cr6.lt) goto loc_822A03FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_822A03FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A0404"))) PPC_WEAK_FUNC(sub_822A0404);
PPC_FUNC_IMPL(__imp__sub_822A0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A0408"))) PPC_WEAK_FUNC(sub_822A0408);
PPC_FUNC_IMPL(__imp__sub_822A0408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x822A0410;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a0544
	if (ctx.cr6.eq) goto loc_822A0544;
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r28,208(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r10,r11,29168
	ctx.r10.s64 = ctx.r11.s64 + 29168;
	// xor r9,r27,r28
	ctx.r9.u64 = ctx.r27.u64 ^ ctx.r28.u64;
	// xor r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// rlwinm r7,r8,2,17,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FFC;
	// lwzx r31,r7,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a0620
	if (ctx.cr6.eq) goto loc_822A0620;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r29,r11,-19580
	ctx.r29.s64 = ctx.r11.s64 + -19580;
loc_822A0464:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a0478
	if (ctx.cr6.eq) goto loc_822A0478;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x822a0494
	goto loc_822A0494;
loc_822A0478:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x822A0490;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_822A0494:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822a0500
	if (!ctx.cr6.eq) goto loc_822A0500;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822a0500
	if (!ctx.cr6.eq) goto loc_822A0500;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a0500
	if (!ctx.cr6.eq) goto loc_822A0500;
	// cmpdi cr6,r25,-1
	ctx.cr6.compare<int64_t>(ctx.r25.s64, -1, ctx.xer);
	// beq cr6,0x822a0500
	if (ctx.cr6.eq) goto loc_822A0500;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a0500
	if (!ctx.cr6.eq) goto loc_822A0500;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a0538
	if (ctx.cr6.eq) goto loc_822A0538;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a0518
	if (ctx.cr6.eq) goto loc_822A0518;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0538
	if (!ctx.cr6.eq) goto loc_822A0538;
loc_822A0500:
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a0464
	if (!ctx.cr6.eq) goto loc_822A0464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_822A0518:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0500
	if (ctx.cr6.eq) goto loc_822A0500;
loc_822A0520:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822a0538
	if (ctx.cr6.eq) goto loc_822A0538;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0520
	if (!ctx.cr6.eq) goto loc_822A0520;
	// b 0x822a0500
	goto loc_822A0500;
loc_822A0538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_822A0544:
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// lwz r29,208(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r10,r11,-3600
	ctx.r10.s64 = ctx.r11.s64 + -3600;
	// xor r9,r28,r29
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// rlwinm r8,r9,2,17,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7FFC;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a0620
	if (ctx.cr6.eq) goto loc_822A0620;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-19580
	ctx.r30.s64 = ctx.r11.s64 + -19580;
loc_822A0570:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a0584
	if (ctx.cr6.eq) goto loc_822A0584;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x822a05a0
	goto loc_822A05A0;
loc_822A0584:
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
	ctx.lr = 0x822A059C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_822A05A0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822a0614
	if (!ctx.cr6.eq) goto loc_822A0614;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822a0614
	if (!ctx.cr6.eq) goto loc_822A0614;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a0614
	if (!ctx.cr6.eq) goto loc_822A0614;
	// cmpdi cr6,r25,-1
	ctx.cr6.compare<int64_t>(ctx.r25.s64, -1, ctx.xer);
	// beq cr6,0x822a0614
	if (ctx.cr6.eq) goto loc_822A0614;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a05ec
	if (!ctx.cr6.eq) goto loc_822A05EC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0614
	if (!ctx.cr6.eq) goto loc_822A0614;
loc_822A05EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a0538
	if (ctx.cr6.eq) goto loc_822A0538;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a062c
	if (ctx.cr6.eq) goto loc_822A062C;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0538
	if (!ctx.cr6.eq) goto loc_822A0538;
loc_822A0614:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a0570
	if (!ctx.cr6.eq) goto loc_822A0570;
loc_822A0620:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_822A062C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0614
	if (ctx.cr6.eq) goto loc_822A0614;
loc_822A0634:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822a0538
	if (ctx.cr6.eq) goto loc_822A0538;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0634
	if (!ctx.cr6.eq) goto loc_822A0634;
	// b 0x822a0614
	goto loc_822A0614;
}

__attribute__((alias("__imp__sub_822A064C"))) PPC_WEAK_FUNC(sub_822A064C);
PPC_FUNC_IMPL(__imp__sub_822A064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A0650"))) PPC_WEAK_FUNC(sub_822A0650);
PPC_FUNC_IMPL(__imp__sub_822A0650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0668
	if (ctx.cr6.eq) goto loc_822A0668;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x822a0670
	goto loc_822A0670;
loc_822A0668:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_822A0670:
	// b 0x822a0408
	sub_822A0408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A0674"))) PPC_WEAK_FUNC(sub_822A0674);
PPC_FUNC_IMPL(__imp__sub_822A0674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A0678"))) PPC_WEAK_FUNC(sub_822A0678);
PPC_FUNC_IMPL(__imp__sub_822A0678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A0680;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x822a06a0
	if (ctx.cr6.eq) goto loc_822A06A0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x822a06a8
	goto loc_822A06A8;
loc_822A06A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822A06A8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822960c0
	ctx.lr = 0x822A06B4;
	sub_822960C0(ctx, base);
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a06dc
	if (!ctx.cr6.eq) goto loc_822A06DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822c0b70
	ctx.lr = 0x822A06D0;
	sub_822C0B70(ctx, base);
	// stw r3,25328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25328, ctx.r3.u32);
	// bl 0x822c0c20
	ctx.lr = 0x822A06D8;
	sub_822C0C20(ctx, base);
	// lwz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25328);
loc_822A06DC:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7100
	ctx.lr = 0x822A06FC;
	sub_822A7100(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a0718
	if (!ctx.cr6.eq) goto loc_822A0718;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x822A070C;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_822A0718:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a072c
	if (ctx.cr6.eq) goto loc_822A072C;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x822a0734
	goto loc_822A0734;
loc_822A072C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_822A0734:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x822A0748;
	sub_8233E028(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0760
	if (ctx.cr6.eq) goto loc_822A0760;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x822a0768
	goto loc_822A0768;
loc_822A0760:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_822A0768:
	// li r11,-1
	ctx.r11.s64 = -1;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x822a0408
	ctx.lr = 0x822A078C;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x822A0798;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A07A4"))) PPC_WEAK_FUNC(sub_822A07A4);
PPC_FUNC_IMPL(__imp__sub_822A07A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A07A8"))) PPC_WEAK_FUNC(sub_822A07A8);
PPC_FUNC_IMPL(__imp__sub_822A07A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x822A07B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x822a07d8
	if (!ctx.cr6.eq) goto loc_822A07D8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_822A07D8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822960c0
	ctx.lr = 0x822A07E4;
	sub_822960C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7100
	ctx.lr = 0x822A07FC;
	sub_822A7100(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a0818
	if (!ctx.cr6.eq) goto loc_822A0818;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x822A080C;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_822A0818:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r22,104(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a0830
	if (ctx.cr6.eq) goto loc_822A0830;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x822a0838
	goto loc_822A0838;
loc_822A0830:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_822A0838:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x822A084C;
	sub_8233E028(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r8,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,24976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0874
	if (!ctx.cr6.eq) goto loc_822A0874;
	// li r25,1
	ctx.r25.s64 = 1;
	// rldicr r25,r25,42,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_822A0874:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a0990
	if (ctx.cr6.eq) goto loc_822A0990;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,29168
	ctx.r10.s64 = ctx.r11.s64 + 29168;
	// xor r9,r27,r28
	ctx.r9.u64 = ctx.r27.u64 ^ ctx.r28.u64;
	// xor r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// rlwinm r7,r8,2,17,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FFC;
	// lwzx r31,r7,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x822a0a80
	if (ctx.cr6.eq) goto loc_822A0A80;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r29,r11,-19580
	ctx.r29.s64 = ctx.r11.s64 + -19580;
loc_822A08B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a08c8
	if (ctx.cr6.eq) goto loc_822A08C8;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x822a08e4
	goto loc_822A08E4;
loc_822A08C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x822A08E0;
	sub_8233E028(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_822A08E4:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822a095c
	if (!ctx.cr6.eq) goto loc_822A095C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822a095c
	if (!ctx.cr6.eq) goto loc_822A095C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a095c
	if (!ctx.cr6.eq) goto loc_822A095C;
	// cmpdi cr6,r25,-1
	ctx.cr6.compare<int64_t>(ctx.r25.s64, -1, ctx.xer);
	// beq cr6,0x822a095c
	if (ctx.cr6.eq) goto loc_822A095C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a095c
	if (!ctx.cr6.eq) goto loc_822A095C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a0950
	if (ctx.cr6.eq) goto loc_822A0950;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822a0970
	if (ctx.cr6.eq) goto loc_822A0970;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a095c
	if (ctx.cr6.eq) goto loc_822A095C;
loc_822A0950:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822b4070
	ctx.lr = 0x822A095C;
	sub_822B4070(ctx, base);
loc_822A095C:
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x822a08b4
	if (!ctx.cr6.eq) goto loc_822A08B4;
	// b 0x822a0a80
	goto loc_822A0A80;
loc_822A0970:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a095c
	if (ctx.cr6.eq) goto loc_822A095C;
loc_822A0978:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822a0950
	if (ctx.cr6.eq) goto loc_822A0950;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0978
	if (!ctx.cr6.eq) goto loc_822A0978;
	// b 0x822a095c
	goto loc_822A095C;
loc_822A0990:
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,-3600
	ctx.r10.s64 = ctx.r11.s64 + -3600;
	// xor r9,r28,r29
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// rlwinm r8,r9,2,17,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7FFC;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x822a0a80
	if (ctx.cr6.eq) goto loc_822A0A80;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-19580
	ctx.r30.s64 = ctx.r11.s64 + -19580;
loc_822A09C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a09d4
	if (ctx.cr6.eq) goto loc_822A09D4;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x822a09f0
	goto loc_822A09F0;
loc_822A09D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x822A09EC;
	sub_8233E028(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_822A09F0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822a0a70
	if (!ctx.cr6.eq) goto loc_822A0A70;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822a0a70
	if (!ctx.cr6.eq) goto loc_822A0A70;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a0a70
	if (!ctx.cr6.eq) goto loc_822A0A70;
	// cmpdi cr6,r25,-1
	ctx.cr6.compare<int64_t>(ctx.r25.s64, -1, ctx.xer);
	// beq cr6,0x822a0a70
	if (ctx.cr6.eq) goto loc_822A0A70;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a0a3c
	if (!ctx.cr6.eq) goto loc_822A0A3C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0a70
	if (!ctx.cr6.eq) goto loc_822A0A70;
loc_822A0A3C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a0a64
	if (ctx.cr6.eq) goto loc_822A0A64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822a0b18
	if (ctx.cr6.eq) goto loc_822A0B18;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0a70
	if (ctx.cr6.eq) goto loc_822A0A70;
loc_822A0A64:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822b4070
	ctx.lr = 0x822A0A70;
	sub_822B4070(ctx, base);
loc_822A0A70:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x822a09c0
	if (!ctx.cr6.eq) goto loc_822A09C0;
loc_822A0A80:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r30,r8,1
	ctx.r30.u64 = ctx.r8.u64 ^ 1;
	// beq cr6,0x822a0adc
	if (ctx.cr6.eq) goto loc_822A0ADC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822a0b0c
	if (ctx.cr6.eq) goto loc_822A0B0C;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a0abc
	if (!ctx.cr6.eq) goto loc_822A0ABC;
	// bl 0x822900a0
	ctx.lr = 0x822A0AB8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_822A0ABC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_822A0ADC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822a0b0c
	if (ctx.cr6.eq) goto loc_822A0B0C;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a0af8
	if (!ctx.cr6.eq) goto loc_822A0AF8;
	// bl 0x822900a0
	ctx.lr = 0x822A0AF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_822A0AF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A0B0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_822A0B18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0a70
	if (ctx.cr6.eq) goto loc_822A0A70;
loc_822A0B20:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822a0a64
	if (ctx.cr6.eq) goto loc_822A0A64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0b20
	if (!ctx.cr6.eq) goto loc_822A0B20;
	// b 0x822a0a70
	goto loc_822A0A70;
}

__attribute__((alias("__imp__sub_822A0B38"))) PPC_WEAK_FUNC(sub_822A0B38);
PPC_FUNC_IMPL(__imp__sub_822A0B38) {
	PPC_FUNC_PROLOGUE();
	// b 0x822a0678
	sub_822A0678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A0B3C"))) PPC_WEAK_FUNC(sub_822A0B3C);
PPC_FUNC_IMPL(__imp__sub_822A0B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A0B40"))) PPC_WEAK_FUNC(sub_822A0B40);
PPC_FUNC_IMPL(__imp__sub_822A0B40) {
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
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a0bc8
	if (ctx.cr6.eq) goto loc_822A0BC8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3824);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a0bc8
	if (!ctx.cr6.eq) goto loc_822A0BC8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a0bac
	if (ctx.cr6.eq) goto loc_822A0BAC;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x822a0bb0
	goto loc_822A0BB0;
loc_822A0BAC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822A0BB0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82395fc0
	ctx.lr = 0x822A0BC8;
	sub_82395FC0(ctx, base);
loc_822A0BC8:
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

__attribute__((alias("__imp__sub_822A0BE0"))) PPC_WEAK_FUNC(sub_822A0BE0);
PPC_FUNC_IMPL(__imp__sub_822A0BE0) {
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
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a0c54
	if (ctx.cr6.eq) goto loc_822A0C54;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a0c38
	if (ctx.cr6.eq) goto loc_822A0C38;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x822a0c3c
	goto loc_822A0C3C;
loc_822A0C38:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822A0C3C:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82395f40
	ctx.lr = 0x822A0C54;
	sub_82395F40(ctx, base);
loc_822A0C54:
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

__attribute__((alias("__imp__sub_822A0C6C"))) PPC_WEAK_FUNC(sub_822A0C6C);
PPC_FUNC_IMPL(__imp__sub_822A0C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A0C70"))) PPC_WEAK_FUNC(sub_822A0C70);
PPC_FUNC_IMPL(__imp__sub_822A0C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A0C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822a0c94
	if (!ctx.cr6.eq) goto loc_822A0C94;
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_822A0C94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a0cac
	if (ctx.cr6.eq) goto loc_822A0CAC;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x822a0ccc
	goto loc_822A0CCC;
loc_822A0CAC:
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
	ctx.lr = 0x822A0CC8;
	sub_8233E028(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822A0CCC:
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,28868(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x822A0CF4;
	sub_822A93E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A0CFC"))) PPC_WEAK_FUNC(sub_822A0CFC);
PPC_FUNC_IMPL(__imp__sub_822A0CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A0D00"))) PPC_WEAK_FUNC(sub_822A0D00);
PPC_FUNC_IMPL(__imp__sub_822A0D00) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822A0D24"))) PPC_WEAK_FUNC(sub_822A0D24);
PPC_FUNC_IMPL(__imp__sub_822A0D24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A0D28"))) PPC_WEAK_FUNC(sub_822A0D28);
PPC_FUNC_IMPL(__imp__sub_822A0D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x822A0D30;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822a0d70
	if (ctx.cr6.eq) goto loc_822A0D70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822a1020
	ctx.lr = 0x822A0D70;
	sub_822A1020(ctx, base);
loc_822A0D70:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// oris r6,r11,16
	ctx.r6.u64 = ctx.r11.u64 | 1048576;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a0da8
	ctx.lr = 0x822A0DA0;
	sub_822A0DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A0DA8"))) PPC_WEAK_FUNC(sub_822A0DA8);
PPC_FUNC_IMPL(__imp__sub_822A0DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x822A0DB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x822a0e4c
	if (!ctx.cr6.eq) goto loc_822A0E4C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822a0e64
	if (ctx.cr6.eq) goto loc_822A0E64;
	// lwz r11,280(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0e64
	if (ctx.cr6.eq) goto loc_822A0E64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a0e64
	if (ctx.cr6.eq) goto loc_822A0E64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82396ef8
	ctx.lr = 0x822A0E14;
	sub_82396EF8(ctx, base);
	// lwz r11,280(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 280);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0e40
	if (ctx.cr6.eq) goto loc_822A0E40;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A0E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x822a0e44
	goto loc_822A0E44;
loc_822A0E40:
	// li r23,0
	ctx.r23.s64 = 0;
loc_822A0E44:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a0e64
	if (ctx.cr6.eq) goto loc_822A0E64;
loc_822A0E4C:
	// cmpwi cr6,r23,60
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 60, ctx.xer);
	// ble cr6,0x822a0e64
	if (!ctx.cr6.gt) goto loc_822A0E64;
	// addi r5,r23,-60
	ctx.r5.s64 = ctx.r23.s64 + -60;
	// addi r4,r24,60
	ctx.r4.s64 = ctx.r24.s64 + 60;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82bea998
	ctx.lr = 0x822A0E64;
	sub_82BEA998(ctx, base);
loc_822A0E64:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x822a0e70
	if (!ctx.cr6.eq) goto loc_822A0E70;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_822A0E70:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822a1014
	if (ctx.cr6.eq) goto loc_822A1014;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a0f7c
	if (ctx.cr6.eq) goto loc_822A0F7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82396ef8
	ctx.lr = 0x822A0E8C;
	sub_82396EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x822b3028
	ctx.lr = 0x822A0E9C;
	sub_822B3028(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a0f7c
	if (ctx.cr6.eq) goto loc_822A0F7C;
loc_822A0EA8:
	// ld r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 76);
	// rlwinm r10,r11,0,10,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FE000;
	// rlwinm r10,r10,0,18,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFE03FFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a0f60
	if (ctx.cr6.eq) goto loc_822A0F60;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a0efc
	if (ctx.cr6.eq) goto loc_822A0EFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x822a0f5c
	goto loc_822A0F5C;
loc_822A0EFC:
	// rlwinm r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bne cr6,0x822a0f28
	if (!ctx.cr6.eq) goto loc_822A0F28;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82bea998
	ctx.lr = 0x822A0F24;
	sub_82BEA998(ctx, base);
	// b 0x822a0f60
	goto loc_822A0F60;
loc_822A0F28:
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x822A0F34;
	sub_82E640B8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A0F5C:
	// bctrl 
	ctx.lr = 0x822A0F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A0F60:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x822A0F70;
	sub_822B2F88(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a0ea8
	if (!ctx.cr6.eq) goto loc_822A0EA8;
loc_822A0F7C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a1014
	if (ctx.cr6.eq) goto loc_822A1014;
	// lwz r31,120(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a1014
	if (ctx.cr6.eq) goto loc_822A1014;
loc_822A0F90:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x822a1008
	if (!ctx.cr6.lt) goto loc_822A1008;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a0fb8
	if (ctx.cr6.eq) goto loc_822A0FB8;
	// ld r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 76);
	// rlwinm r9,r10,0,10,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FE000;
	// rlwinm r9,r9,0,18,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE03FFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a1008
	if (!ctx.cr6.eq) goto loc_822A1008;
loc_822A0FB8:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bl 0x82e640b8
	ctx.lr = 0x822A0FD0;
	sub_82E640B8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bne cr6,0x822a0fe0
	if (!ctx.cr6.eq) goto loc_822A0FE0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_822A0FE0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1008:
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a0f90
	if (!ctx.cr6.eq) goto loc_822A0F90;
loc_822A1014:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A101C"))) PPC_WEAK_FUNC(sub_822A101C);
PPC_FUNC_IMPL(__imp__sub_822A101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A1020"))) PPC_WEAK_FUNC(sub_822A1020);
PPC_FUNC_IMPL(__imp__sub_822A1020) {
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
	// lwz r31,120(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a1084
	if (ctx.cr6.eq) goto loc_822A1084;
loc_822A1044:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a1078
	if (!ctx.cr6.eq) goto loc_822A1078;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1078:
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a1044
	if (!ctx.cr6.eq) goto loc_822A1044;
loc_822A1084:
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

__attribute__((alias("__imp__sub_822A109C"))) PPC_WEAK_FUNC(sub_822A109C);
PPC_FUNC_IMPL(__imp__sub_822A109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A10A0"))) PPC_WEAK_FUNC(sub_822A10A0);
PPC_FUNC_IMPL(__imp__sub_822A10A0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,60(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A10D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x822a0d28
	ctx.lr = 0x822A10F8;
	sub_822A0D28(ctx, base);
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

__attribute__((alias("__imp__sub_822A1110"))) PPC_WEAK_FUNC(sub_822A1110);
PPC_FUNC_IMPL(__imp__sub_822A1110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822A1118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a1220
	if (ctx.cr6.eq) goto loc_822A1220;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a1220
	if (ctx.cr6.eq) goto loc_822A1220;
	// bl 0x822b2970
	ctx.lr = 0x822A1144;
	sub_822B2970(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a1220
	if (ctx.cr6.eq) goto loc_822A1220;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a117c
	if (!ctx.cr6.eq) goto loc_822A117C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x822b2808
	ctx.lr = 0x822A1168;
	sub_822B2808(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a1220
	if (ctx.cr6.eq) goto loc_822A1220;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_822A117C:
	// lwz r8,52(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a1220
	if (ctx.cr6.eq) goto loc_822A1220;
loc_822A1188:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A118C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822a1214
	if (ctx.cr6.lt) goto loc_822A1214;
	// lwz r10,324(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 324);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a1214
	if (!ctx.cr6.lt) goto loc_822A1214;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,320(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822a11e4
	if (ctx.cr6.eq) goto loc_822A11E4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a11dc
	if (ctx.cr6.eq) goto loc_822A11DC;
loc_822A11C8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822a11e4
	if (ctx.cr6.eq) goto loc_822A11E4;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a11c8
	if (!ctx.cr6.eq) goto loc_822A11C8;
loc_822A11DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822a118c
	goto loc_822A118C;
loc_822A11E4:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,320(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1210
	if (ctx.cr6.eq) goto loc_822A1210;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x822a1214
	goto loc_822A1214;
loc_822A1210:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822A1214:
	// lwz r8,60(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822a1188
	if (!ctx.cr6.eq) goto loc_822A1188;
loc_822A1220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A122C"))) PPC_WEAK_FUNC(sub_822A122C);
PPC_FUNC_IMPL(__imp__sub_822A122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A1230"))) PPC_WEAK_FUNC(sub_822A1230);
PPC_FUNC_IMPL(__imp__sub_822A1230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x822A1238;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a1278
	if (!ctx.cr6.eq) goto loc_822A1278;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x822A126C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x822A1274;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_822A1278:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x822A128C;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r29,r11,-21944
	ctx.r29.s64 = ctx.r11.s64 + -21944;
loc_822A1294:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a1390
	if (!ctx.cr6.lt) goto loc_822A1390;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a12d0
	if (ctx.cr6.eq) goto loc_822A12D0;
loc_822A12BC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822a12e0
	if (ctx.cr6.eq) goto loc_822A12E0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a12bc
	if (!ctx.cr6.eq) goto loc_822A12BC;
loc_822A12D0:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a1384
	if (ctx.cr6.eq) goto loc_822A1384;
loc_822A12E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A12F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1384
	if (!ctx.cr6.eq) goto loc_822A1384;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a132c
	if (!ctx.cr6.eq) goto loc_822A132C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822a132c
	if (ctx.cr6.eq) goto loc_822A132C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A132C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A132C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r31,r26
	ctx.r5.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A1354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x822a1384
	if (!ctx.cr6.eq) goto loc_822A1384;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822a1384
	if (ctx.cr6.eq) goto loc_822A1384;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A1384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1384:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295518
	ctx.lr = 0x822A138C;
	sub_82295518(ctx, base);
	// b 0x822a1294
	goto loc_822A1294;
loc_822A1390:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82396ef8
	ctx.lr = 0x822A139C;
	sub_82396EF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A13A4"))) PPC_WEAK_FUNC(sub_822A13A4);
PPC_FUNC_IMPL(__imp__sub_822A13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A13A8"))) PPC_WEAK_FUNC(sub_822A13A8);
PPC_FUNC_IMPL(__imp__sub_822A13A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822A13B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822a6f68
	ctx.lr = 0x822A13D0;
	sub_822A6F68(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822A13EC;
	sub_8233E028(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addi r29,r11,-19580
	ctx.r29.s64 = ctx.r11.s64 + -19580;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bne cr6,0x822a1438
	if (!ctx.cr6.eq) goto loc_822A1438;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822A1438;
	sub_8233E028(ctx, base);
loc_822A1438:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a1454
	if (!ctx.cr6.eq) goto loc_822A1454;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A1450;
	sub_822960C0(ctx, base);
	// b 0x822a145c
	goto loc_822A145C;
loc_822A1454:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e1a0
	ctx.lr = 0x822A145C;
	sub_8233E1A0(ctx, base);
loc_822A145C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a1470
	if (ctx.cr6.eq) goto loc_822A1470;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822a1478
	goto loc_822A1478;
loc_822A1470:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_822A1478:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a0678
	ctx.lr = 0x822A1488;
	sub_822A0678(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x822a14b0
	if (ctx.cr6.eq) goto loc_822A14B0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x822A14B0;
	sub_82294520(ctx, base);
loc_822A14B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x822A14B8;
	sub_82294CC8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8658
	ctx.lr = 0x822A14C4;
	sub_822A8658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A14CC"))) PPC_WEAK_FUNC(sub_822A14CC);
PPC_FUNC_IMPL(__imp__sub_822A14CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A14D0"))) PPC_WEAK_FUNC(sub_822A14D0);
PPC_FUNC_IMPL(__imp__sub_822A14D0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a1530
	if (ctx.cr6.eq) goto loc_822A1530;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x822A1520;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x822A1528;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822A1530;
	sub_82299080(ctx, base);
loc_822A1530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A1540"))) PPC_WEAK_FUNC(sub_822A1540);
PPC_FUNC_IMPL(__imp__sub_822A1540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822A1548;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x822a15c4
	if (!ctx.cr6.gt) goto loc_822A15C4;
loc_822A1568:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a15c4
	if (ctx.cr6.eq) goto loc_822A15C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// and r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 & ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A15A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a15b4
	if (ctx.cr6.eq) goto loc_822A15B4;
	// or r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 | ctx.r30.u64;
loc_822A15B4:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822a1568
	if (ctx.cr6.lt) goto loc_822A1568;
loc_822A15C4:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A15D0"))) PPC_WEAK_FUNC(sub_822A15D0);
PPC_FUNC_IMPL(__imp__sub_822A15D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A15D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// addi r29,r10,-26644
	ctx.r29.s64 = ctx.r10.s64 + -26644;
	// lwz r3,28876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28876);
	// addi r30,r11,-3728
	ctx.r30.s64 = ctx.r11.s64 + -3728;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,25080(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25080, ctx.r11.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r8,-26700
	ctx.r5.s64 = ctx.r8.s64 + -26700;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28876);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r8,-26620
	ctx.r5.s64 = ctx.r8.s64 + -26620;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A1658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,25192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25192, ctx.r3.u32);
	// stw r11,25188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25188, ctx.r11.u32);
	// bl 0x822959a8
	ctx.lr = 0x822A1678;
	sub_822959A8(ctx, base);
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// lis r7,-31884
	ctx.r7.s64 = -2089549824;
	// lwz r29,25188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25188);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,25196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25196, ctx.r3.u32);
	// stw r3,25200(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25200, ctx.r3.u32);
	// beq cr6,0x822a1738
	if (ctx.cr6.eq) goto loc_822A1738;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r30,r10,-21944
	ctx.r30.s64 = ctx.r10.s64 + -21944;
	// ori r11,r11,43928
	ctx.r11.u64 = ctx.r11.u64 | 43928;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822a16d0
	if (ctx.cr6.eq) goto loc_822A16D0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x822A16CC;
	sub_82294520(ctx, base);
	// lwz r29,25188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25188);
loc_822A16D0:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r3,r10,-21932
	ctx.r3.s64 = ctx.r10.s64 + -21932;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,45000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45000, ctx.xer);
	// beq cr6,0x822a1708
	if (ctx.cr6.eq) goto loc_822A1708;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// ori r11,r11,45000
	ctx.r11.u64 = ctx.r11.u64 | 45000;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x822A1704;
	sub_82294520(ctx, base);
	// lwz r29,25188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25188);
loc_822A1708:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82294ac0
	ctx.lr = 0x822A1720;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x822A1738;
	sub_82E640B8(ctx, base);
loc_822A1738:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x822A1750;
	sub_82E640B8(ctx, base);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,29168
	ctx.r3.s64 = ctx.r10.s64 + 29168;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x822A1768;
	sub_82E640B8(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822be010
	ctx.lr = 0x822A1774;
	sub_822BE010(ctx, base);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,25076(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25076, ctx.r11.u32);
	// bl 0x822a17f0
	ctx.lr = 0x822A1784;
	sub_822A17F0(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r8,-26568
	ctx.r4.s64 = ctx.r8.s64 + -26568;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x822A17A4;
	sub_8233E028(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x822b2788
	ctx.lr = 0x822A17B8;
	sub_822B2788(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a17c8
	if (ctx.cr6.eq) goto loc_822A17C8;
	// bl 0x822c00b8
	ctx.lr = 0x822A17C4;
	sub_822C00B8(ctx, base);
	// b 0x822a17cc
	goto loc_822A17CC;
loc_822A17C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822A17CC:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r11,r11,25104
	ctx.r11.s64 = ctx.r11.s64 + 25104;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A17EC"))) PPC_WEAK_FUNC(sub_822A17EC);
PPC_FUNC_IMPL(__imp__sub_822A17EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A17F0"))) PPC_WEAK_FUNC(sub_822A17F0);
PPC_FUNC_IMPL(__imp__sub_822A17F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x822A17F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// lis r27,-31884
	ctx.r27.s64 = -2089549824;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,25088(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25088);
	// lwz r10,25100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,25088(r22)
	PPC_STORE_U32(ctx.r22.u32 + 25088, ctx.r11.u32);
	// beq cr6,0x822a18a0
	if (ctx.cr6.eq) goto loc_822A18A0;
loc_822A182C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x822a1878
	if (!ctx.cr6.gt) goto loc_822A1878;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x822A1864;
	sub_82294520(ctx, base);
	// lwz r10,25100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25100);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822a187c
	goto loc_822A187C;
loc_822A1878:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822A187C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a1890
	if (ctx.cr0.eq) goto loc_822A1890;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,25100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25100);
loc_822A1890:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,25100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25100, ctx.r10.u32);
	// bne cr6,0x822a182c
	if (!ctx.cr6.eq) goto loc_822A182C;
loc_822A18A0:
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822a198c
	if (!ctx.cr6.gt) goto loc_822A198C;
	// li r24,0
	ctx.r24.s64 = 0;
loc_822A18B4:
	// lwzx r3,r24,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a18d8
	if (!ctx.cr6.eq) goto loc_822A18D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A18D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,25100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25100);
loc_822A18D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a197c
	if (ctx.cr6.eq) goto loc_822A197C;
loc_822A18E0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x822a1954
	if (!ctx.cr6.gt) goto loc_822A1954;
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r26,r7,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x822a1914
	if (!ctx.cr6.eq) goto loc_822A1914;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822a1958
	if (ctx.cr6.eq) goto loc_822A1958;
loc_822A1914:
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// rlwinm r31,r26,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a192c
	if (!ctx.cr6.eq) goto loc_822A192C;
	// bl 0x822900a0
	ctx.lr = 0x822A1928;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A192C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A1948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,25100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822a1958
	goto loc_822A1958;
loc_822A1954:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822A1958:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a196c
	if (ctx.cr0.eq) goto loc_822A196C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,25100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25100);
loc_822A196C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,25100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25100, ctx.r10.u32);
	// bne cr6,0x822a18e0
	if (!ctx.cr6.eq) goto loc_822A18E0;
loc_822A197C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r30
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822a18b4
	if (ctx.cr6.lt) goto loc_822A18B4;
loc_822A198C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822a19d0
	if (ctx.cr6.eq) goto loc_822A19D0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a19d0
	if (ctx.cr6.eq) goto loc_822A19D0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a19b0
	if (!ctx.cr6.eq) goto loc_822A19B0;
	// bl 0x822900a0
	ctx.lr = 0x822A19AC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A19B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A19CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822A19D0:
	// lwz r11,25088(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25088);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,25088(r22)
	PPC_STORE_U32(ctx.r22.u32 + 25088, ctx.r11.u32);
	// beq cr6,0x822a1a0c
	if (ctx.cr6.eq) goto loc_822A1A0C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a19f8
	if (!ctx.cr6.eq) goto loc_822A19F8;
	// bl 0x822900a0
	ctx.lr = 0x822A19F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A19F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A1A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1A0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A1A14"))) PPC_WEAK_FUNC(sub_822A1A14);
PPC_FUNC_IMPL(__imp__sub_822A1A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A1A18"))) PPC_WEAK_FUNC(sub_822A1A18);
PPC_FUNC_IMPL(__imp__sub_822A1A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A1A20;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r12,-16385
	ctx.r12.s64 = -16385;
	// lwz r11,25104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// lwz r10,25108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25108);
	// lfs f31,-18220(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18220);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// beq cr6,0x822a1a64
	if (ctx.cr6.eq) goto loc_822A1A64;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239d778
	ctx.lr = 0x822A1A64;
	sub_8239D778(ctx, base);
loc_822A1A64:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,-21944
	ctx.r29.s64 = ctx.r11.s64 + -21944;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a1ab8
	if (!ctx.cr6.gt) goto loc_822A1AB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldicr r7,r11,33,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 33) & 0xFFFFFFFFFFFFFFFF;
loc_822A1A88:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1aa8
	if (ctx.cr6.eq) goto loc_822A1AA8;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_822A1AA8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822a1a88
	if (ctx.cr6.lt) goto loc_822A1A88;
loc_822A1AB8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a1b2c
	if (!ctx.cr6.gt) goto loc_822A1B2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822A1AC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a1b1c
	if (ctx.cr6.eq) goto loc_822A1B1C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a1b1c
	if (ctx.cr6.eq) goto loc_822A1B1C;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r9,r11,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x822a1b1c
	if (!ctx.cr6.eq) goto loc_822A1B1C;
	// lis r12,-3
	ctx.r12.s64 = -196608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822A1B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_822A1B1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822a1ac8
	if (ctx.cr6.lt) goto loc_822A1AC8;
loc_822A1B2C:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// lis r7,-31884
	ctx.r7.s64 = -2089549824;
	// lis r6,-31884
	ctx.r6.s64 = -2089549824;
	// stw r11,24956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24956, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,25180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25180, ctx.r10.u32);
	// stw r9,25188(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25188, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25184(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25184, ctx.r11.u32);
	// bl 0x8239d778
	ctx.lr = 0x822A1B68;
	sub_8239D778(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-21968
	ctx.r31.s64 = ctx.r10.s64 + -21968;
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a1bd0
	if (ctx.cr6.eq) goto loc_822A1BD0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a1bd0
	if (ctx.cr6.eq) goto loc_822A1BD0;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1bb0
	if (!ctx.cr6.eq) goto loc_822A1BB0;
	// bl 0x822900a0
	ctx.lr = 0x822A1BAC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822A1BB0:
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
	ctx.lr = 0x822A1BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822A1BD0:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a1c28
	if (ctx.cr6.eq) goto loc_822A1C28;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a1c28
	if (ctx.cr6.eq) goto loc_822A1C28;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1c08
	if (!ctx.cr6.eq) goto loc_822A1C08;
	// bl 0x822900a0
	ctx.lr = 0x822A1C04;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822A1C08:
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
	ctx.lr = 0x822A1C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_822A1C28:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-21932
	ctx.r31.s64 = ctx.r10.s64 + -21932;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a1c88
	if (ctx.cr6.eq) goto loc_822A1C88;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a1c88
	if (ctx.cr6.eq) goto loc_822A1C88;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1c68
	if (!ctx.cr6.eq) goto loc_822A1C68;
	// bl 0x822900a0
	ctx.lr = 0x822A1C64;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822A1C68:
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
	ctx.lr = 0x822A1C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822A1C88:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-21920
	ctx.r31.s64 = ctx.r10.s64 + -21920;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a1ce8
	if (ctx.cr6.eq) goto loc_822A1CE8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a1ce8
	if (ctx.cr6.eq) goto loc_822A1CE8;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1cc8
	if (!ctx.cr6.eq) goto loc_822A1CC8;
	// bl 0x822900a0
	ctx.lr = 0x822A1CC4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822A1CC8:
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
	ctx.lr = 0x822A1CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822A1CE8:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-21908
	ctx.r31.s64 = ctx.r10.s64 + -21908;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a1d48
	if (ctx.cr6.eq) goto loc_822A1D48;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a1d48
	if (ctx.cr6.eq) goto loc_822A1D48;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1d28
	if (!ctx.cr6.eq) goto loc_822A1D28;
	// bl 0x822900a0
	ctx.lr = 0x822A1D24;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_822A1D28:
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
	ctx.lr = 0x822A1D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822A1D48:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-21896
	ctx.r3.s64 = ctx.r11.s64 + -21896;
	// bl 0x822abdc0
	ctx.lr = 0x822A1D58;
	sub_822ABDC0(ctx, base);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25076, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A1D70"))) PPC_WEAK_FUNC(sub_822A1D70);
PPC_FUNC_IMPL(__imp__sub_822A1D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,31796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31796);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822a1d90
	if (!ctx.cr6.gt) goto loc_822A1D90;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-16108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16108);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82364958
	sub_82364958(ctx, base);
	return;
loc_822A1D90:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,32024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822a1dac
	if (!ctx.cr6.gt) goto loc_822A1DAC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-18240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18240);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82364958
	sub_82364958(ctx, base);
	return;
loc_822A1DAC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-17712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17712);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82364958
	sub_82364958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A1DB8"))) PPC_WEAK_FUNC(sub_822A1DB8);
PPC_FUNC_IMPL(__imp__sub_822A1DB8) {
	PPC_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicr r12,r12,60,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 60) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rldicr r12,r12,60,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 60) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 | ctx.r12.u64;
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822A1DF0"))) PPC_WEAK_FUNC(sub_822A1DF0);
PPC_FUNC_IMPL(__imp__sub_822A1DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A1DF4"))) PPC_WEAK_FUNC(sub_822A1DF4);
PPC_FUNC_IMPL(__imp__sub_822A1DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A1DF8"))) PPC_WEAK_FUNC(sub_822A1DF8);
PPC_FUNC_IMPL(__imp__sub_822A1DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A1E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1ea4
	if (ctx.cr6.eq) goto loc_822A1EA4;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,17368(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a1ea4
	if (!ctx.cr6.eq) goto loc_822A1EA4;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,-21944
	ctx.r30.s64 = ctx.r10.s64 + -21944;
	// stw r11,17368(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17368, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a1ea4
	if (!ctx.cr6.gt) goto loc_822A1EA4;
	// li r31,0
	ctx.r31.s64 = 0;
	// rldicr r29,r11,60,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 60) & 0xFFFFFFFFFFFFFFFF;
loc_822A1E4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a1e94
	if (ctx.cr6.eq) goto loc_822A1E94;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,60,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 60) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x822a1e94
	if (!ctx.cr6.eq) goto loc_822A1E94;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A1E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_822A1E94:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822a1e4c
	if (ctx.cr6.lt) goto loc_822A1E4C;
loc_822A1EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A1EAC"))) PPC_WEAK_FUNC(sub_822A1EAC);
PPC_FUNC_IMPL(__imp__sub_822A1EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A1EB0"))) PPC_WEAK_FUNC(sub_822A1EB0);
PPC_FUNC_IMPL(__imp__sub_822A1EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25080, ctx.r11.u32);
	// b 0x822a17f0
	sub_822A17F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A1EDC"))) PPC_WEAK_FUNC(sub_822A1EDC);
PPC_FUNC_IMPL(__imp__sub_822A1EDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A1EE0"))) PPC_WEAK_FUNC(sub_822A1EE0);
PPC_FUNC_IMPL(__imp__sub_822A1EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A1EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x822a1f14
	if (!ctx.cr6.eq) goto loc_822A1F14;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x822A1F10;
	sub_822960C0(ctx, base);
	// b 0x822a1f38
	goto loc_822A1F38;
loc_822A1F14:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a1f30
	if (!ctx.cr6.eq) goto loc_822A1F30;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x822A1F2C;
	sub_822960C0(ctx, base);
	// b 0x822a1f38
	goto loc_822A1F38;
loc_822A1F30:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A1F38;
	sub_8233E1A0(ctx, base);
loc_822A1F38:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a1f4c
	if (ctx.cr6.eq) goto loc_822A1F4C;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x822a1f54
	goto loc_822A1F54;
loc_822A1F4C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,11272
	ctx.r6.s64 = ctx.r11.s64 + 11272;
loc_822A1F54:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232fa20
	ctx.lr = 0x822A1F60;
	sub_8232FA20(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26548
	ctx.r4.s64 = ctx.r11.s64 + -26548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A1F74;
	sub_8232D178(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x822a1f9c
	if (ctx.cr6.eq) goto loc_822A1F9C;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x822A1F9C;
	sub_82294520(ctx, base);
loc_822A1F9C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x822A1FA4;
	sub_82294CC8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82293938
	ctx.lr = 0x822A1FAC;
	sub_82293938(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_822A1FB4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a1ff4
	if (!ctx.cr6.lt) goto loc_822A1FF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a1fe8
	if (!ctx.cr6.eq) goto loc_822A1FE8;
	// addi r5,r28,2
	ctx.r5.s64 = ctx.r28.s64 + 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a1ee0
	ctx.lr = 0x822A1FE8;
	sub_822A1EE0(ctx, base);
loc_822A1FE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822939e8
	ctx.lr = 0x822A1FF0;
	sub_822939E8(ctx, base);
	// b 0x822a1fb4
	goto loc_822A1FB4;
loc_822A1FF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A1FFC"))) PPC_WEAK_FUNC(sub_822A1FFC);
PPC_FUNC_IMPL(__imp__sub_822A1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2000"))) PPC_WEAK_FUNC(sub_822A2000);
PPC_FUNC_IMPL(__imp__sub_822A2000) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A201C"))) PPC_WEAK_FUNC(sub_822A201C);
PPC_FUNC_IMPL(__imp__sub_822A201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2020"))) PPC_WEAK_FUNC(sub_822A2020);
PPC_FUNC_IMPL(__imp__sub_822A2020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r8,112(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r11,116(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A205C"))) PPC_WEAK_FUNC(sub_822A205C);
PPC_FUNC_IMPL(__imp__sub_822A205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2060"))) PPC_WEAK_FUNC(sub_822A2060);
PPC_FUNC_IMPL(__imp__sub_822A2060) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A2074"))) PPC_WEAK_FUNC(sub_822A2074);
PPC_FUNC_IMPL(__imp__sub_822A2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2078"))) PPC_WEAK_FUNC(sub_822A2078);
PPC_FUNC_IMPL(__imp__sub_822A2078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822A2080;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r11,25208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25208);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a2120
	if (ctx.cr6.eq) goto loc_822A2120;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8229bcd0
	ctx.lr = 0x822A20C4;
	sub_8229BCD0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a20e0
	if (!ctx.cr6.eq) goto loc_822A20E0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_822A20E0:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8229bcd0
	ctx.lr = 0x822A20FC;
	sub_8229BCD0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a2110
	if (!ctx.cr6.eq) goto loc_822A2110;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822A2110:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb0328
	ctx.lr = 0x822A2118;
	sub_82CB0328(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822a212c
	goto loc_822A212C;
loc_822A2120:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822A212C:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a2144
	if (ctx.cr6.eq) goto loc_822A2144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r27,r27,0,31,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x822A2144;
	sub_82299080(ctx, base);
loc_822A2144:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a2158
	if (ctx.cr6.eq) goto loc_822A2158;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x822A2158;
	sub_82299080(ctx, base);
loc_822A2158:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A2164"))) PPC_WEAK_FUNC(sub_822A2164);
PPC_FUNC_IMPL(__imp__sub_822A2164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2168"))) PPC_WEAK_FUNC(sub_822A2168);
PPC_FUNC_IMPL(__imp__sub_822A2168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x822A2170;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,25212
	ctx.r11.s64 = ctx.r11.s64 + 25212;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a2260
	if (ctx.cr6.eq) goto loc_822A2260;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r26,3
	ctx.r26.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r9,-27584
	ctx.r30.s64 = ctx.r9.s64 + -27584;
	// addi r29,r10,-19580
	ctx.r29.s64 = ctx.r10.s64 + -19580;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bne cr6,0x822a21c4
	if (!ctx.cr6.eq) goto loc_822A21C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A21C0;
	sub_822960C0(ctx, base);
	// b 0x822a21e4
	goto loc_822A21E4;
loc_822A21C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822a21dc
	if (!ctx.cr6.eq) goto loc_822A21DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A21D8;
	sub_822960C0(ctx, base);
	// b 0x822a21e4
	goto loc_822A21E4;
loc_822A21DC:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A21E4;
	sub_8233E1A0(ctx, base);
loc_822A21E4:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x822a2200
	if (!ctx.cr6.eq) goto loc_822A2200;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_822A2200:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a221c
	if (!ctx.cr6.eq) goto loc_822A221C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A2218;
	sub_822960C0(ctx, base);
	// b 0x822a223c
	goto loc_822A223C;
loc_822A221C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822a2234
	if (!ctx.cr6.eq) goto loc_822A2234;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A2230;
	sub_822960C0(ctx, base);
	// b 0x822a223c
	goto loc_822A223C;
loc_822A2234:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A223C;
	sub_8233E1A0(ctx, base);
loc_822A223C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a2250
	if (!ctx.cr6.eq) goto loc_822A2250;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822A2250:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb0328
	ctx.lr = 0x822A2258;
	sub_82CB0328(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822a2284
	goto loc_822A2284;
loc_822A2260:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a2278
	if (ctx.cr6.eq) goto loc_822A2278;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x822a2280
	goto loc_822A2280;
loc_822A2278:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_822A2280:
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822A2284:
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a229c
	if (ctx.cr6.eq) goto loc_822A229C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r26,r26,0,31,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x822A229C;
	sub_82299080(ctx, base);
loc_822A229C:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a22b0
	if (ctx.cr6.eq) goto loc_822A22B0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x822A22B0;
	sub_82299080(ctx, base);
loc_822A22B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A22BC"))) PPC_WEAK_FUNC(sub_822A22BC);
PPC_FUNC_IMPL(__imp__sub_822A22BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A22C0"))) PPC_WEAK_FUNC(sub_822A22C0);
PPC_FUNC_IMPL(__imp__sub_822A22C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x822A22C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8229bd90
	ctx.lr = 0x822A22E4;
	sub_8229BD90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r18,r11,11272
	ctx.r18.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a2300
	if (ctx.cr6.eq) goto loc_822A2300;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a2304
	goto loc_822A2304;
loc_822A2300:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_822A2304:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,-26532
	ctx.r4.s64 = ctx.r11.s64 + -26532;
	// bl 0x8232d178
	ctx.lr = 0x822A2314;
	sub_8232D178(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a233c
	if (ctx.cr6.eq) goto loc_822A233C;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82294520
	ctx.lr = 0x822A233C;
	sub_82294520(ctx, base);
loc_822A233C:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82294cc8
	ctx.lr = 0x822A2344;
	sub_82294CC8(ctx, base);
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a236c
	if (!ctx.cr6.eq) goto loc_822A236C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x822A2360;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x822A2368;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_822A236C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x822A2380;
	sub_82295518(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// addi r19,r9,-27344
	ctx.r19.s64 = ctx.r9.s64 + -27344;
	// addi r22,r8,-21944
	ctx.r22.s64 = ctx.r8.s64 + -21944;
	// addi r24,r10,-26460
	ctx.r24.s64 = ctx.r10.s64 + -26460;
	// addi r21,r11,-26488
	ctx.r21.s64 = ctx.r11.s64 + -26488;
loc_822A23A4:
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a25fc
	if (!ctx.cr6.lt) goto loc_822A25FC;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x822a25f0
	if (ctx.cr6.eq) goto loc_822A25F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823c1650
	ctx.lr = 0x822A23DC;
	sub_823C1650(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2578
	ctx.lr = 0x822A23F4;
	sub_822B2578(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ble cr6,0x822a256c
	if (!ctx.cr6.gt) goto loc_822A256C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8229bd90
	ctx.lr = 0x822A2418;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a242c
	if (ctx.cr6.eq) goto loc_822A242C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a2430
	goto loc_822A2430;
loc_822A242C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_822A2430:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A2440;
	sub_8232D178(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a2464
	if (ctx.cr6.eq) goto loc_822A2464;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294520
	ctx.lr = 0x822A2464;
	sub_82294520(ctx, base);
loc_822A2464:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294cc8
	ctx.lr = 0x822A246C;
	sub_82294CC8(ctx, base);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822a256c
	if (!ctx.cr6.gt) goto loc_822A256C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_822A2480:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8229bd90
	ctx.lr = 0x822A2490;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a24a4
	if (ctx.cr6.eq) goto loc_822A24A4;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a24a8
	goto loc_822A24A8;
loc_822A24A4:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_822A24A8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A24B8;
	sub_8232D178(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a2514
	if (ctx.cr6.eq) goto loc_822A2514;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a2550
	if (ctx.cr6.eq) goto loc_822A2550;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a24f0
	if (!ctx.cr6.eq) goto loc_822A24F0;
	// bl 0x822900a0
	ctx.lr = 0x822A24EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_822A24F0:
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
	ctx.lr = 0x822A250C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x822a2518
	goto loc_822A2518;
loc_822A2514:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_822A2518:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2550
	if (ctx.cr6.eq) goto loc_822A2550;
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a2538
	if (!ctx.cr6.eq) goto loc_822A2538;
	// bl 0x822900a0
	ctx.lr = 0x822A2534;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_822A2538:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A2550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A2550:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822a2480
	if (ctx.cr6.lt) goto loc_822A2480;
loc_822A256C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822a259c
	if (ctx.cr6.eq) goto loc_822A259C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a2588
	if (!ctx.cr6.eq) goto loc_822A2588;
	// bl 0x822900a0
	ctx.lr = 0x822A2584;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_822A2588:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A259C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A259C:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// beq cr6,0x822a25e0
	if (ctx.cr6.eq) goto loc_822A25E0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a25cc
	if (!ctx.cr6.eq) goto loc_822A25CC;
	// bl 0x822900a0
	ctx.lr = 0x822A25C8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_822A25CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A25E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A25E0:
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
loc_822A25F0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295518
	ctx.lr = 0x822A25F8;
	sub_82295518(ctx, base);
	// b 0x822a23a4
	goto loc_822A23A4;
loc_822A25FC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A2604"))) PPC_WEAK_FUNC(sub_822A2604);
PPC_FUNC_IMPL(__imp__sub_822A2604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2608"))) PPC_WEAK_FUNC(sub_822A2608);
PPC_FUNC_IMPL(__imp__sub_822A2608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x822ac4e8
	ctx.lr = 0x822A2624;
	sub_822AC4E8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
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

__attribute__((alias("__imp__sub_822A2644"))) PPC_WEAK_FUNC(sub_822A2644);
PPC_FUNC_IMPL(__imp__sub_822A2644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2648"))) PPC_WEAK_FUNC(sub_822A2648);
PPC_FUNC_IMPL(__imp__sub_822A2648) {
	PPC_FUNC_PROLOGUE();
	// std r4,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r4.u64);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A2654"))) PPC_WEAK_FUNC(sub_822A2654);
PPC_FUNC_IMPL(__imp__sub_822A2654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2658"))) PPC_WEAK_FUNC(sub_822A2658);
PPC_FUNC_IMPL(__imp__sub_822A2658) {
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
	// lis r8,-31881
	ctx.r8.s64 = -2089353216;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r31,r8,-28400
	ctx.r31.s64 = ctx.r8.s64 + -28400;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-28400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28400, ctx.r11.u32);
	// addi r6,r7,-26428
	ctx.r6.s64 = ctx.r7.s64 + -26428;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A26A8;
	sub_822AD090(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r11,r4,-26396
	ctx.r11.s64 = ctx.r4.s64 + -26396;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A26C8;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A26E8;
	sub_822AD090(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r7,-26340
	ctx.r5.s64 = ctx.r7.s64 + -26340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2708;
	sub_822AD090(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// addi r11,r4,-26308
	ctx.r11.s64 = ctx.r4.s64 + -26308;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2728;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r10,-26268
	ctx.r8.s64 = ctx.r10.s64 + -26268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2748;
	sub_822AD090(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r7,-26224
	ctx.r5.s64 = ctx.r7.s64 + -26224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2768;
	sub_822AD090(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r3,128
	ctx.r3.s64 = 128;
	// addi r11,r4,-26200
	ctx.r11.s64 = ctx.r4.s64 + -26200;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2788;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r8,r10,-26168
	ctx.r8.s64 = ctx.r10.s64 + -26168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A27A8;
	sub_822AD090(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r7,-26148
	ctx.r5.s64 = ctx.r7.s64 + -26148;
	// li r6,512
	ctx.r6.s64 = 512;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A27C8;
	sub_822AD090(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// addi r11,r4,-26108
	ctx.r11.s64 = ctx.r4.s64 + -26108;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A27E8;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// addi r8,r10,-26076
	ctx.r8.s64 = ctx.r10.s64 + -26076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2808;
	sub_822AD090(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// addi r5,r7,-26052
	ctx.r5.s64 = ctx.r7.s64 + -26052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2828;
	sub_822AD090(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// addi r11,r4,-26008
	ctx.r11.s64 = ctx.r4.s64 + -26008;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2848;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25972
	ctx.r8.s64 = ctx.r10.s64 + -25972;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A286C;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25944
	ctx.r4.s64 = ctx.r6.s64 + -25944;
	// rldicr r11,r5,33,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2890;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25920
	ctx.r8.s64 = ctx.r10.s64 + -25920;
	// rldicr r7,r9,34,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A28B4;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25904
	ctx.r4.s64 = ctx.r6.s64 + -25904;
	// rldicr r11,r5,35,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A28D8;
	sub_822AD090(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// rldicr r8,r10,36,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r7,r9,-25888
	ctx.r7.s64 = ctx.r9.s64 + -25888;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A28FC;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25872
	ctx.r4.s64 = ctx.r6.s64 + -25872;
	// rldicr r11,r5,37,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2920;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25852
	ctx.r8.s64 = ctx.r10.s64 + -25852;
	// rldicr r7,r9,38,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2944;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25828
	ctx.r4.s64 = ctx.r6.s64 + -25828;
	// rldicr r11,r5,39,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2968;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25796
	ctx.r8.s64 = ctx.r10.s64 + -25796;
	// rldicr r7,r9,40,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A298C;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25756
	ctx.r4.s64 = ctx.r6.s64 + -25756;
	// rldicr r11,r5,41,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A29B0;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25736
	ctx.r8.s64 = ctx.r10.s64 + -25736;
	// rldicr r7,r9,42,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A29D4;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25708
	ctx.r4.s64 = ctx.r6.s64 + -25708;
	// rldicr r11,r5,44,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A29F8;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25688
	ctx.r8.s64 = ctx.r10.s64 + -25688;
	// rldicr r7,r9,45,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2A1C;
	sub_822AD090(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// rldicr r4,r6,46,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r5,-26568
	ctx.r11.s64 = ctx.r5.s64 + -26568;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2A40;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25664
	ctx.r8.s64 = ctx.r10.s64 + -25664;
	// rldicr r7,r9,47,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2A64;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25648
	ctx.r4.s64 = ctx.r6.s64 + -25648;
	// rldicr r11,r5,48,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2A88;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25620
	ctx.r8.s64 = ctx.r10.s64 + -25620;
	// rldicr r7,r9,49,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2AAC;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25592
	ctx.r4.s64 = ctx.r6.s64 + -25592;
	// rldicr r11,r5,50,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2AD0;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25568
	ctx.r8.s64 = ctx.r10.s64 + -25568;
	// rldicr r7,r9,51,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2AF4;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25544
	ctx.r4.s64 = ctx.r6.s64 + -25544;
	// rldicr r11,r5,52,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2B18;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25516
	ctx.r8.s64 = ctx.r10.s64 + -25516;
	// rldicr r7,r9,53,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2B3C;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25488
	ctx.r4.s64 = ctx.r6.s64 + -25488;
	// rldicr r11,r5,54,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2B60;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// addi r8,r10,-25464
	ctx.r8.s64 = ctx.r10.s64 + -25464;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2B80;
	sub_822AD090(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r5,r7,-25448
	ctx.r5.s64 = ctx.r7.s64 + -25448;
	// ori r4,r6,32768
	ctx.r4.u64 = ctx.r6.u64 | 32768;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2BA4;
	sub_822AD090(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r3,-25416
	ctx.r10.s64 = ctx.r3.s64 + -25416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad090
	ctx.lr = 0x822A2BC4;
	sub_822AD090(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-25384
	ctx.r7.s64 = ctx.r9.s64 + -25384;
	// rldicr r6,r8,56,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2BE8;
	sub_822AD090(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r5,-25356
	ctx.r3.s64 = ctx.r5.s64 + -25356;
	// rldicr r11,r4,57,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2C0C;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25336
	ctx.r8.s64 = ctx.r10.s64 + -25336;
	// rldicr r7,r9,58,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2C30;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25320
	ctx.r4.s64 = ctx.r6.s64 + -25320;
	// rldicr r11,r5,59,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2C54;
	sub_822AD090(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-25304
	ctx.r8.s64 = ctx.r10.s64 + -25304;
	// rldicr r7,r9,60,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 60) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2C78;
	sub_822AD090(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-25276
	ctx.r4.s64 = ctx.r6.s64 + -25276;
	// rldicr r11,r5,61,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad090
	ctx.lr = 0x822A2C9C;
	sub_822AD090(ctx, base);
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

__attribute__((alias("__imp__sub_822A2CB4"))) PPC_WEAK_FUNC(sub_822A2CB4);
PPC_FUNC_IMPL(__imp__sub_822A2CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A2CB8"))) PPC_WEAK_FUNC(sub_822A2CB8);
PPC_FUNC_IMPL(__imp__sub_822A2CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x822A2CC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-28400
	ctx.r30.s64 = ctx.r11.s64 + -28400;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,-20064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20064);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a2d04
	if (!ctx.cr6.eq) goto loc_822A2D04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-20064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20064, ctx.r11.u32);
	// bl 0x822a2658
	ctx.lr = 0x822A2CF8;
	sub_822A2658(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15744
	ctx.r3.s64 = ctx.r11.s64 + -15744;
	// bl 0x82cb0ae8
	ctx.lr = 0x822A2D04;
	sub_82CB0AE8(ctx, base);
loc_822A2D04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822a2e98
	if (ctx.cr6.eq) goto loc_822A2E98;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8229bd90
	ctx.lr = 0x822A2D1C;
	sub_8229BD90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a2d38
	if (ctx.cr6.eq) goto loc_822A2D38;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a2d3c
	goto loc_822A2D3C;
loc_822A2D38:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_822A2D3C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25252
	ctx.r4.s64 = ctx.r11.s64 + -25252;
	// bl 0x8232e868
	ctx.lr = 0x822A2D4C;
	sub_8232E868(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822A2D54;
	sub_82299080(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ble cr6,0x822a2df4
	if (!ctx.cr6.gt) goto loc_822A2DF4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r27,r11,-25240
	ctx.r27.s64 = ctx.r11.s64 + -25240;
loc_822A2D74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x822a2d98
	if (!ctx.cr6.eq) goto loc_822A2D98;
	// cmpdi cr6,r10,-1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, -1, ctx.xer);
	// bne cr6,0x822a2de4
	if (!ctx.cr6.eq) goto loc_822A2DE4;
loc_822A2D98:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x822A2DA8;
	sub_8232E868(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822951d0
	ctx.lr = 0x822A2DB4;
	sub_822951D0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a2dd8
	if (ctx.cr6.eq) goto loc_822A2DD8;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x822A2DD8;
	sub_82294520(ctx, base);
loc_822A2DD8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x822A2DE0;
	sub_82294CC8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_822A2DE4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a2d74
	if (ctx.cr6.lt) goto loc_822A2D74;
loc_822A2DF4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x822a2e0c
	if (!ctx.cr6.eq) goto loc_822A2E0C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_822A2E0C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,14812
	ctx.r4.s64 = ctx.r11.s64 + 14812;
	// bl 0x8232d178
	ctx.lr = 0x822A2E1C;
	sub_8232D178(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a2e68
	if (ctx.cr6.eq) goto loc_822A2E68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a2e98
	if (ctx.cr6.eq) goto loc_822A2E98;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a2e48
	if (!ctx.cr6.eq) goto loc_822A2E48;
	// bl 0x822900a0
	ctx.lr = 0x822A2E44;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_822A2E48:
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
	ctx.lr = 0x822A2E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822A2E68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a2e98
	if (ctx.cr6.eq) goto loc_822A2E98;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a2e84
	if (!ctx.cr6.eq) goto loc_822A2E84;
	// bl 0x822900a0
	ctx.lr = 0x822A2E80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_822A2E84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A2E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A2E98:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A2EA0"))) PPC_WEAK_FUNC(sub_822A2EA0);
PPC_FUNC_IMPL(__imp__sub_822A2EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822A2EA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2ec8
	if (ctx.cr6.eq) goto loc_822A2EC8;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x822a2ecc
	goto loc_822A2ECC;
loc_822A2EC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A2ECC:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b2f88
	ctx.lr = 0x822A2ED8;
	sub_822B2F88(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a2f78
	if (ctx.cr6.eq) goto loc_822A2F78;
loc_822A2EE4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a2f5c
	if (!ctx.cr6.gt) goto loc_822A2F5C;
loc_822A2EF4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822af578
	ctx.lr = 0x822A2F10;
	sub_822AF578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2f28
	if (ctx.cr6.eq) goto loc_822A2F28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2cb8
	ctx.lr = 0x822A2F24;
	sub_822A2CB8(ctx, base);
	// b 0x822a2f4c
	goto loc_822A2F4C;
loc_822A2F28:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a2f4c
	if (ctx.cr6.eq) goto loc_822A2F4C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a2ea0
	ctx.lr = 0x822A2F4C;
	sub_822A2EA0(ctx, base);
loc_822A2F4C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a2ef4
	if (ctx.cr6.lt) goto loc_822A2EF4;
loc_822A2F5C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x822A2F6C;
	sub_822B2F88(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a2ee4
	if (!ctx.cr6.eq) goto loc_822A2EE4;
loc_822A2F78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A2F80"))) PPC_WEAK_FUNC(sub_822A2F80);
PPC_FUNC_IMPL(__imp__sub_822A2F80) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1156
	ctx.r3.s64 = ctx.r1.s64 + 1156;
	// bl 0x823332d8
	ctx.lr = 0x822A2FB0;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a303c
	if (ctx.cr6.eq) goto loc_822A303C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822af5f8
	ctx.lr = 0x822A2FC8;
	sub_822AF5F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a303c
	if (ctx.cr6.eq) goto loc_822A303C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,1156
	ctx.r3.s64 = ctx.r1.s64 + 1156;
	// bl 0x823332d8
	ctx.lr = 0x822A2FE8;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a303c
	if (ctx.cr6.eq) goto loc_822A303C;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af650
	ctx.lr = 0x822A2FFC;
	sub_822AF650(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a303c
	if (ctx.cr6.eq) goto loc_822A303C;
	// lwz r11,1156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x822a3028
	if (!ctx.cr6.eq) goto loc_822A3028;
loc_822A3018:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x822a3018
	if (ctx.cr6.eq) goto loc_822A3018;
loc_822A3028:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,100(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a1230
	ctx.lr = 0x822A303C;
	sub_822A1230(ctx, base);
loc_822A303C:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

__attribute__((alias("__imp__sub_822A3054"))) PPC_WEAK_FUNC(sub_822A3054);
PPC_FUNC_IMPL(__imp__sub_822A3054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A3058"))) PPC_WEAK_FUNC(sub_822A3058);
PPC_FUNC_IMPL(__imp__sub_822A3058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x822A3060;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-12208(r1)
	ea = -12208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r26,12236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 12236, ctx.r26.u32);
	// addi r4,r11,-25136
	ctx.r4.s64 = ctx.r11.s64 + -25136;
	// stw r20,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
	// bl 0x82333168
	ctx.lr = 0x822A3098;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a31a8
	if (ctx.cr6.eq) goto loc_822A31A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823335a8
	ctx.lr = 0x822A30B0;
	sub_823335A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// lwz r31,244(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r28,240(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x822a30d0
	if (!ctx.cr6.eq) goto loc_822A30D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822A30D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-25128
	ctx.r4.s64 = ctx.r11.s64 + -25128;
	// bl 0x82cb0328
	ctx.lr = 0x822A30DC;
	sub_82CB0328(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// xori r30,r9,1
	ctx.r30.u64 = ctx.r9.u64 ^ 1;
	// bne cr6,0x822a30f8
	if (!ctx.cr6.eq) goto loc_822A30F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822A30F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-25116
	ctx.r4.s64 = ctx.r11.s64 + -25116;
	// bl 0x82cb0328
	ctx.lr = 0x822A3104;
	sub_82CB0328(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x823648a0
	ctx.lr = 0x822A3110;
	sub_823648A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r3,r3,58,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8239dac8
	ctx.lr = 0x822A3120;
	sub_8239DAC8(ctx, base);
	// bl 0x822b4df0
	ctx.lr = 0x822A3124;
	sub_822B4DF0(ctx, base);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a3138
	if (ctx.cr6.eq) goto loc_822A3138;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a3170
	if (ctx.cr6.eq) goto loc_822A3170;
loc_822A3138:
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A3154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r11,-31840(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31840);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3170
	if (ctx.cr6.eq) goto loc_822A3170;
loc_822A3164:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a3164
	if (!ctx.cr6.eq) goto loc_822A3164;
loc_822A3170:
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// stw r25,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r25.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A3194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A319C;
	sub_82299080(ctx, base);
loc_822A319C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A31A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24760
	ctx.r4.s64 = ctx.r11.s64 + -24760;
	// bl 0x82333168
	ctx.lr = 0x822A31B8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a319c
	if (!ctx.cr6.eq) goto loc_822A319C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24740
	ctx.r4.s64 = ctx.r11.s64 + -24740;
	// bl 0x82333168
	ctx.lr = 0x822A31D0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a319c
	if (!ctx.cr6.eq) goto loc_822A319C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24716
	ctx.r4.s64 = ctx.r11.s64 + -24716;
	// bl 0x82333168
	ctx.lr = 0x822A31E8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3214
	if (ctx.cr6.eq) goto loc_822A3214;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r3,28888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28888);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A3208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A3214:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24684
	ctx.r4.s64 = ctx.r11.s64 + -24684;
	// bl 0x82333168
	ctx.lr = 0x822A3224;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a319c
	if (!ctx.cr6.eq) goto loc_822A319C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24660
	ctx.r4.s64 = ctx.r11.s64 + -24660;
	// bl 0x82333168
	ctx.lr = 0x822A323C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x822a3334
	if (ctx.cr6.eq) goto loc_822A3334;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,1296
	ctx.r4.s64 = ctx.r1.s64 + 1296;
	// bl 0x823332d8
	ctx.lr = 0x822A3258;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3328
	if (ctx.cr6.eq) goto loc_822A3328;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1296
	ctx.r4.s64 = ctx.r1.s64 + 1296;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822af5f8
	ctx.lr = 0x822A3270;
	sub_822AF5F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a3328
	if (ctx.cr6.eq) goto loc_822A3328;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,3344
	ctx.r4.s64 = ctx.r1.s64 + 3344;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823332d8
	ctx.lr = 0x822A3290;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3328
	if (ctx.cr6.eq) goto loc_822A3328;
	// addi r4,r1,3344
	ctx.r4.s64 = ctx.r1.s64 + 3344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af650
	ctx.lr = 0x822A32A4;
	sub_822AF650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a3328
	if (ctx.cr6.eq) goto loc_822A3328;
	// stw r25,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r25.u32);
	// stw r25,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r25.u32);
	// stw r25,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r25.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3320
	if (ctx.cr6.eq) goto loc_822A3320;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A32DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a3320
	if (ctx.cr6.eq) goto loc_822A3320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396ef8
	ctx.lr = 0x822A32F0;
	sub_82396EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396ef8
	ctx.lr = 0x822A3300;
	sub_82396EF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,488
	ctx.r5.s64 = ctx.r1.s64 + 488;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// bl 0x823c4f48
	ctx.lr = 0x822A3320;
	sub_823C4F48(ctx, base);
loc_822A3320:
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82299080
	ctx.lr = 0x822A3328;
	sub_82299080(ctx, base);
loc_822A3328:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A3334:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-24652
	ctx.r4.s64 = ctx.r11.s64 + -24652;
	// bl 0x82333168
	ctx.lr = 0x822A3340;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x822a37ec
	if (ctx.cr6.eq) goto loc_822A37EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,2832
	ctx.r4.s64 = ctx.r1.s64 + 2832;
	// bl 0x823332d8
	ctx.lr = 0x822A335C;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a319c
	if (ctx.cr6.eq) goto loc_822A319C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,2832
	ctx.r4.s64 = ctx.r1.s64 + 2832;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822af5f8
	ctx.lr = 0x822A3374;
	sub_822AF5F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a319c
	if (ctx.cr6.eq) goto loc_822A319C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,2320
	ctx.r4.s64 = ctx.r1.s64 + 2320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823332d8
	ctx.lr = 0x822A3398;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a319c
	if (ctx.cr6.eq) goto loc_822A319C;
	// addi r4,r1,2320
	ctx.r4.s64 = ctx.r1.s64 + 2320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af650
	ctx.lr = 0x822A33AC;
	sub_822AF650(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822a319c
	if (ctx.cr6.eq) goto loc_822A319C;
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r25.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r11,-24636
	ctx.r4.s64 = ctx.r11.s64 + -24636;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// bl 0x822af7f0
	ctx.lr = 0x822A33D8;
	sub_822AF7F0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r10,-24620
	ctx.r4.s64 = ctx.r10.s64 + -24620;
	// bl 0x82333168
	ctx.lr = 0x822A33E8;
	sub_82333168(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r9,-24592
	ctx.r4.s64 = ctx.r9.s64 + -24592;
	// bl 0x82333168
	ctx.lr = 0x822A33FC;
	sub_82333168(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// bl 0x822955c8
	ctx.lr = 0x822A3404;
	sub_822955C8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// bl 0x82295518
	ctx.lr = 0x822A3418;
	sub_82295518(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r15,216(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r14,r11,-19580
	ctx.r14.s64 = ctx.r11.s64 + -19580;
	// addi r18,r10,-21944
	ctx.r18.s64 = ctx.r10.s64 + -21944;
	// addi r21,r9,11272
	ctx.r21.s64 = ctx.r9.s64 + 11272;
	// addi r17,r8,-24516
	ctx.r17.s64 = ctx.r8.s64 + -24516;
	// addi r19,r7,-24532
	ctx.r19.s64 = ctx.r7.s64 + -24532;
	// addi r20,r6,-24556
	ctx.r20.s64 = ctx.r6.s64 + -24556;
	// addi r16,r5,-27584
	ctx.r16.s64 = ctx.r5.s64 + -27584;
loc_822A3454:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a319c
	if (!ctx.cr6.lt) goto loc_822A319C;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// lwzx r24,r9,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x822a349c
	if (ctx.cr6.eq) goto loc_822A349C;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a37d4
	if (ctx.cr6.eq) goto loc_822A37D4;
loc_822A3484:
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x822a349c
	if (ctx.cr6.eq) goto loc_822A349C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a3484
	if (!ctx.cr6.eq) goto loc_822A3484;
	// b 0x822a37d4
	goto loc_822A37D4;
loc_822A349C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a34d4
	if (ctx.cr6.eq) goto loc_822A34D4;
loc_822A34A8:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x822a34c8
	if (!ctx.cr6.eq) goto loc_822A34C8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a34a8
	if (!ctx.cr6.eq) goto loc_822A34A8;
	// b 0x822a34d4
	goto loc_822A34D4;
loc_822A34C8:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a37d4
	if (ctx.cr6.eq) goto loc_822A37D4;
loc_822A34D4:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a34fc
	if (!ctx.cr6.eq) goto loc_822A34FC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A34F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a37d4
	if (!ctx.cr6.eq) goto loc_822A37D4;
loc_822A34FC:
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a37d4
	if (ctx.cr6.eq) goto loc_822A37D4;
loc_822A3508:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822a3520
	if (ctx.cr6.eq) goto loc_822A3520;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a3508
	if (!ctx.cr6.eq) goto loc_822A3508;
	// b 0x822a37d4
	goto loc_822A37D4;
loc_822A3520:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x822a3658
	if (ctx.cr6.gt) goto loc_822A3658;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822af180
	ctx.lr = 0x822A3534;
	sub_822AF180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a3658
	if (!ctx.cr6.eq) goto loc_822A3658;
	// stw r25,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r25.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r25,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r25.u32);
	// stw r25,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r25.u32);
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a3588
	if (!ctx.cr6.gt) goto loc_822A3588;
loc_822A3558:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823c4f48
	ctx.lr = 0x822A3578;
	sub_823C4F48(ctx, base);
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a3558
	if (ctx.cr6.lt) goto loc_822A3558;
loc_822A3588:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a35a0
	if (!ctx.cr6.eq) goto loc_822A35A0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A35A0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82cb0328
	ctx.lr = 0x822A35A8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a364c
	if (ctx.cr6.eq) goto loc_822A364C;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r30,400(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a35c4
	if (!ctx.cr6.eq) goto loc_822A35C4;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_822A35C4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a35e0
	if (!ctx.cr6.eq) goto loc_822A35E0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A35DC;
	sub_822960C0(ctx, base);
	// b 0x822a35e8
	goto loc_822A35E8;
loc_822A35E0:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A35E8;
	sub_8233E1A0(ctx, base);
loc_822A35E8:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a35fc
	if (!ctx.cr6.eq) goto loc_822A35FC;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_822A35FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8229bd90
	ctx.lr = 0x822A360C;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a3620
	if (ctx.cr6.eq) goto loc_822A3620;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a3624
	goto loc_822A3624;
loc_822A3620:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_822A3624:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A363C;
	sub_8232D178(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A3644;
	sub_82299080(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A364C;
	sub_82299080(ctx, base);
loc_822A364C:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82299080
	ctx.lr = 0x822A3654;
	sub_82299080(ctx, base);
	// b 0x822a37d4
	goto loc_822A37D4;
loc_822A3658:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r10,100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r31,r10,r24
	ctx.r31.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a3690
	if (!ctx.cr6.eq) goto loc_822A3690;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x822af180
	ctx.lr = 0x822A3684;
	sub_822AF180(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r28,128(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
loc_822A3690:
	// lwz r25,72(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822a37d4
	if (!ctx.cr6.gt) goto loc_822A37D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822A36A8:
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A36DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a36f0
	if (!ctx.cr6.eq) goto loc_822A36F0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A36F0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82cb0328
	ctx.lr = 0x822A36F8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a37bc
	if (ctx.cr6.eq) goto loc_822A37BC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3798
	if (ctx.cr6.eq) goto loc_822A3798;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a372c
	if (!ctx.cr6.eq) goto loc_822A372C;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A3728;
	sub_822960C0(ctx, base);
	// b 0x822a3734
	goto loc_822A3734;
loc_822A372C:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A3734;
	sub_8233E1A0(ctx, base);
loc_822A3734:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r30,256(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a3748
	if (!ctx.cr6.eq) goto loc_822A3748;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_822A3748:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8229bd90
	ctx.lr = 0x822A3758;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a376c
	if (ctx.cr6.eq) goto loc_822A376C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a3770
	goto loc_822A3770;
loc_822A376C:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_822A3770:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,12236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A3784;
	sub_8232D178(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82299080
	ctx.lr = 0x822A378C;
	sub_82299080(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82299080
	ctx.lr = 0x822A3794;
	sub_82299080(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_822A3798:
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,384(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a37ac
	if (!ctx.cr6.eq) goto loc_822A37AC;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_822A37AC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,12236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A37BC;
	sub_8232D178(ctx, base);
loc_822A37BC:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82299080
	ctx.lr = 0x822A37C4;
	sub_82299080(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822a36a8
	if (ctx.cr6.lt) goto loc_822A36A8;
loc_822A37D4:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A37DC;
	sub_82295518(ctx, base);
	// lwz r31,284(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r26,12236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x822a3454
	goto loc_822A3454;
loc_822A37EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-24484
	ctx.r4.s64 = ctx.r11.s64 + -24484;
	// bl 0x82333168
	ctx.lr = 0x822A37F8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x822a39cc
	if (ctx.cr6.eq) goto loc_822A39CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,1808
	ctx.r4.s64 = ctx.r1.s64 + 1808;
	// bl 0x823332d8
	ctx.lr = 0x822A3814;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a319c
	if (ctx.cr6.eq) goto loc_822A319C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1808
	ctx.r4.s64 = ctx.r1.s64 + 1808;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822af5f8
	ctx.lr = 0x822A382C;
	sub_822AF5F8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822a319c
	if (ctx.cr6.eq) goto loc_822A319C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24592
	ctx.r4.s64 = ctx.r11.s64 + -24592;
	// bl 0x82333168
	ctx.lr = 0x822A3848;
	sub_82333168(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x822b2bc0
	ctx.lr = 0x822A3858;
	sub_822B2BC0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r21,12236(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r24,r11,-19580
	ctx.r24.s64 = ctx.r11.s64 + -19580;
	// addi r29,r10,-21944
	ctx.r29.s64 = ctx.r10.s64 + -21944;
	// addi r26,r9,11272
	ctx.r26.s64 = ctx.r9.s64 + 11272;
	// addi r27,r8,-24460
	ctx.r27.s64 = ctx.r8.s64 + -24460;
	// addi r25,r7,-27584
	ctx.r25.s64 = ctx.r7.s64 + -27584;
loc_822A3884:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a319c
	if (!ctx.cr6.lt) goto loc_822A319C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x822a38c0
	if (!ctx.cr6.eq) goto loc_822A38C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A38B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a39c0
	if (!ctx.cr6.eq) goto loc_822A39C0;
loc_822A38C0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a39c0
	if (ctx.cr6.eq) goto loc_822A39C0;
loc_822A38D8:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x822a38f8
	if (ctx.cr6.eq) goto loc_822A38F8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a38d8
	if (!ctx.cr6.eq) goto loc_822A38D8;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x822b2b40
	ctx.lr = 0x822A38F4;
	sub_822B2B40(ctx, base);
	// b 0x822a3884
	goto loc_822A3884;
loc_822A38F8:
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a3958
	if (ctx.cr6.eq) goto loc_822A3958;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3958
	if (ctx.cr6.eq) goto loc_822A3958;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r20,r20,1
	ctx.r20.u64 = ctx.r20.u64 | 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822a3934
	if (!ctx.cr6.eq) goto loc_822A3934;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A3930;
	sub_822960C0(ctx, base);
	// b 0x822a393c
	goto loc_822A393C;
loc_822A3934:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A393C;
	sub_8233E1A0(ctx, base);
loc_822A393C:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a3950
	if (ctx.cr6.eq) goto loc_822A3950;
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x822a395c
	goto loc_822A395C;
loc_822A3950:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x822a395c
	goto loc_822A395C;
loc_822A3958:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_822A395C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8229bd90
	ctx.lr = 0x822A3970;
	sub_8229BD90(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a3984
	if (ctx.cr6.eq) goto loc_822A3984;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a3988
	goto loc_822A3988;
loc_822A3984:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_822A3988:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A399C;
	sub_8232D178(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82299080
	ctx.lr = 0x822A39A8;
	sub_82299080(ctx, base);
	// clrlwi r11,r20,31
	ctx.r11.u64 = ctx.r20.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a39c0
	if (ctx.cr6.eq) goto loc_822A39C0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r20,r20,0,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82299080
	ctx.lr = 0x822A39C0;
	sub_82299080(ctx, base);
loc_822A39C0:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x822b2b40
	ctx.lr = 0x822A39C8;
	sub_822B2B40(ctx, base);
	// b 0x822a3884
	goto loc_822A3884;
loc_822A39CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-24416
	ctx.r4.s64 = ctx.r11.s64 + -24416;
	// bl 0x82333168
	ctx.lr = 0x822A39D8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a39fc
	if (ctx.cr6.eq) goto loc_822A39FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822a2f80
	ctx.lr = 0x822A39F0;
	sub_822A2F80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A39FC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24408
	ctx.r4.s64 = ctx.r11.s64 + -24408;
	// bl 0x82333168
	ctx.lr = 0x822A3A0C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3a30
	if (ctx.cr6.eq) goto loc_822A3A30;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822a2f80
	ctx.lr = 0x822A3A24;
	sub_822A2F80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A3A30:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24388
	ctx.r4.s64 = ctx.r11.s64 + -24388;
	// bl 0x82333168
	ctx.lr = 0x822A3A40;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3bb4
	if (ctx.cr6.eq) goto loc_822A3BB4;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x822ad118
	ctx.lr = 0x822A3A50;
	sub_822AD118(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r29,r11,-21944
	ctx.r29.s64 = ctx.r11.s64 + -21944;
	// addi r28,r10,11272
	ctx.r28.s64 = ctx.r10.s64 + 11272;
	// addi r26,r9,-24236
	ctx.r26.s64 = ctx.r9.s64 + -24236;
	// addi r27,r8,-24352
	ctx.r27.s64 = ctx.r8.s64 + -24352;
loc_822A3A70:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a319c
	if (!ctx.cr6.lt) goto loc_822A319C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x822af0e0
	ctx.lr = 0x822A3A94;
	sub_822AF0E0(ctx, base);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bne cr6,0x822a3ba8
	if (!ctx.cr6.eq) goto loc_822A3BA8;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a3ba8
	if (ctx.cr6.eq) goto loc_822A3BA8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// bne cr6,0x822a3adc
	if (!ctx.cr6.eq) goto loc_822A3ADC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a3b94
	if (ctx.cr6.eq) goto loc_822A3B94;
loc_822A3ADC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A3AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a3b34
	if (ctx.cr6.eq) goto loc_822A3B34;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8229bd90
	ctx.lr = 0x822A3B0C;
	sub_8229BD90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82295908
	ctx.lr = 0x822A3B18;
	sub_82295908(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82299080
	ctx.lr = 0x822A3B20;
	sub_82299080(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82299080
	ctx.lr = 0x822A3B28;
	sub_82299080(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x822ad1c8
	ctx.lr = 0x822A3B30;
	sub_822AD1C8(ctx, base);
	// b 0x822a3a70
	goto loc_822A3A70;
loc_822A3B34:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8229bd90
	ctx.lr = 0x822A3B40;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a3b54
	if (ctx.cr6.eq) goto loc_822A3B54;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a3b58
	goto loc_822A3B58;
loc_822A3B54:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_822A3B58:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8232e868
	ctx.lr = 0x822A3B64;
	sub_8232E868(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82295908
	ctx.lr = 0x822A3B70;
	sub_82295908(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A3B78;
	sub_82299080(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A3B80;
	sub_82299080(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82299080
	ctx.lr = 0x822A3B88;
	sub_82299080(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x822ad1c8
	ctx.lr = 0x822A3B90;
	sub_822AD1C8(ctx, base);
	// b 0x822a3a70
	goto loc_822A3A70;
loc_822A3B94:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822b2a20
	ctx.lr = 0x822A3BA0;
	sub_822B2A20(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82299080
	ctx.lr = 0x822A3BA8;
	sub_82299080(ctx, base);
loc_822A3BA8:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x822ad1c8
	ctx.lr = 0x822A3BB0;
	sub_822AD1C8(ctx, base);
	// b 0x822a3a70
	goto loc_822A3A70;
loc_822A3BB4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24224
	ctx.r4.s64 = ctx.r11.s64 + -24224;
	// bl 0x82333168
	ctx.lr = 0x822A3BC4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x822a60e0
	if (ctx.cr6.eq) goto loc_822A60E0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-24216
	ctx.r4.s64 = ctx.r11.s64 + -24216;
	// bl 0x82333168
	ctx.lr = 0x822A3BDC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a60c4
	if (!ctx.cr6.eq) goto loc_822A60C4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24200
	ctx.r4.s64 = ctx.r11.s64 + -24200;
	// bl 0x82333168
	ctx.lr = 0x822A3BF4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a60c4
	if (!ctx.cr6.eq) goto loc_822A60C4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24192
	ctx.r4.s64 = ctx.r11.s64 + -24192;
	// bl 0x82333168
	ctx.lr = 0x822A3C0C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3c70
	if (ctx.cr6.eq) goto loc_822A3C70;
	// bl 0x822955c8
	ctx.lr = 0x822A3C18;
	sub_822955C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x82295518
	ctx.lr = 0x822A3C2C;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
	// rldicr r30,r10,59,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 59) & 0xFFFFFFFFFFFFFFFF;
loc_822A3C3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a319c
	if (!ctx.cr6.lt) goto loc_822A319C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x82295518
	ctx.lr = 0x822A3C6C;
	sub_82295518(ctx, base);
	// b 0x822a3c3c
	goto loc_822A3C3C;
loc_822A3C70:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24180
	ctx.r4.s64 = ctx.r11.s64 + -24180;
	// bl 0x82333168
	ctx.lr = 0x822A3C80;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3cc4
	if (ctx.cr6.eq) goto loc_822A3CC4;
	// bl 0x822955c8
	ctx.lr = 0x822A3C8C;
	sub_822955C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x82295518
	ctx.lr = 0x822A3CA0;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_822A3CAC:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x822a319c
	if (!ctx.cr6.lt) goto loc_822A319C;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A3CC0;
	sub_82295518(ctx, base);
	// b 0x822a3cac
	goto loc_822A3CAC;
loc_822A3CC4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24160
	ctx.r4.s64 = ctx.r11.s64 + -24160;
	// bl 0x82333168
	ctx.lr = 0x822A3CD4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3d9c
	if (ctx.cr6.eq) goto loc_822A3D9C;
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r4,r11,-24148
	ctx.r4.s64 = ctx.r11.s64 + -24148;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af8c0
	ctx.lr = 0x822A3CF8;
	sub_822AF8C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3d90
	if (ctx.cr6.eq) goto loc_822A3D90;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r4,r11,-24132
	ctx.r4.s64 = ctx.r11.s64 + -24132;
	// addi r5,r1,5904
	ctx.r5.s64 = ctx.r1.s64 + 5904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823328b0
	ctx.lr = 0x822A3D18;
	sub_823328B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3d90
	if (ctx.cr6.eq) goto loc_822A3D90;
	// addi r6,r1,5904
	ctx.r6.s64 = ctx.r1.s64 + 5904;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// bl 0x82332c10
	ctx.lr = 0x822A3D34;
	sub_82332C10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3d90
	if (ctx.cr6.eq) goto loc_822A3D90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822b31a0
	ctx.lr = 0x822A3D4C;
	sub_822B31A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x822a22c0
	ctx.lr = 0x822A3D5C;
	sub_822A22C0(ctx, base);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r25,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,13880
	ctx.r5.s64 = ctx.r10.s64 + 13880;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x8232d6f8
	ctx.lr = 0x822A3D80;
	sub_8232D6F8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82295e20
	ctx.lr = 0x822A3D88;
	sub_82295E20(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x822b3138
	ctx.lr = 0x822A3D90;
	sub_822B3138(ctx, base);
loc_822A3D90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A3D9C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24120
	ctx.r4.s64 = ctx.r11.s64 + -24120;
	// bl 0x82333168
	ctx.lr = 0x822A3DAC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3e34
	if (ctx.cr6.eq) goto loc_822A3E34;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82343970
	ctx.lr = 0x822A3DBC;
	sub_82343970(ctx, base);
	// bl 0x822955c8
	ctx.lr = 0x822A3DC0;
	sub_822955C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x82295518
	ctx.lr = 0x822A3DD4;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_822A3DE0:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x822a3df8
	if (!ctx.cr6.lt) goto loc_822A3DF8;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A3DF4;
	sub_82295518(ctx, base);
	// b 0x822a3de0
	goto loc_822A3DE0;
loc_822A3DF8:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r10,r11,-3600
	ctx.r10.s64 = ctx.r11.s64 + -3600;
loc_822A3E04:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3e1c
	if (ctx.cr6.eq) goto loc_822A3E1C;
loc_822A3E10:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a3e10
	if (!ctx.cr6.eq) goto loc_822A3E10;
loc_822A3E1C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x822a3e04
	if (!ctx.cr0.eq) goto loc_822A3E04;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A3E34:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24108
	ctx.r4.s64 = ctx.r11.s64 + -24108;
	// bl 0x82333168
	ctx.lr = 0x822A3E44;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3fdc
	if (ctx.cr6.eq) goto loc_822A3FDC;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r31,r11,29168
	ctx.r31.s64 = ctx.r11.s64 + 29168;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_822A3E6C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a3eb8
	if (ctx.cr6.eq) goto loc_822A3EB8;
loc_822A3E7C:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a3e90
	if (ctx.cr6.eq) goto loc_822A3E90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822a3e7c
	goto loc_822A3E7C;
loc_822A3E90:
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x822a3ea4
	if (!ctx.cr6.gt) goto loc_822A3EA4;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
loc_822A3EA4:
	// blt cr6,0x822a3eac
	if (ctx.cr6.lt) goto loc_822A3EAC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822A3EAC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x822a3eb8
	if (ctx.cr6.gt) goto loc_822A3EB8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_822A3EB8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r7,8192
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8192, ctx.xer);
	// blt cr6,0x822a3e6c
	if (ctx.cr6.lt) goto loc_822A3E6C;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-16020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16020);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82cb2298
	ctx.lr = 0x822A3EEC;
	sub_82CB2298(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwzx r31,r9,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a3fd0
	if (ctx.cr6.eq) goto loc_822A3FD0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r24,12236(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r26,r11,-19580
	ctx.r26.s64 = ctx.r11.s64 + -19580;
	// addi r28,r10,-23864
	ctx.r28.s64 = ctx.r10.s64 + -23864;
	// addi r27,r9,11272
	ctx.r27.s64 = ctx.r9.s64 + 11272;
	// addi r25,r8,-27584
	ctx.r25.s64 = ctx.r8.s64 + -27584;
loc_822A3F24:
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 30, ctx.xer);
	// bge cr6,0x822a3fd0
	if (!ctx.cr6.lt) goto loc_822A3FD0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8229bd90
	ctx.lr = 0x822A3F3C;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a3f50
	if (ctx.cr6.eq) goto loc_822A3F50;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a3f54
	goto loc_822A3F54;
loc_822A3F50:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822A3F54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bne cr6,0x822a3f6c
	if (!ctx.cr6.eq) goto loc_822A3F6C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A3F68;
	sub_822960C0(ctx, base);
	// b 0x822a3f8c
	goto loc_822A3F8C;
loc_822A3F6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a3f84
	if (!ctx.cr6.eq) goto loc_822A3F84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A3F80;
	sub_822960C0(ctx, base);
	// b 0x822a3f8c
	goto loc_822A3F8C;
loc_822A3F84:
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A3F8C;
	sub_8233E1A0(ctx, base);
loc_822A3F8C:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a3fa0
	if (!ctx.cr6.eq) goto loc_822A3FA0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_822A3FA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A3FB0;
	sub_8232D178(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A3FB8;
	sub_82299080(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A3FC0;
	sub_82299080(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a3f24
	if (!ctx.cr6.eq) goto loc_822A3F24;
loc_822A3FD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A3FDC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23828
	ctx.r4.s64 = ctx.r11.s64 + -23828;
	// bl 0x82333168
	ctx.lr = 0x822A3FEC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a4184
	if (ctx.cr6.eq) goto loc_822A4184;
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r31,r11,-3600
	ctx.r31.s64 = ctx.r11.s64 + -3600;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_822A4014:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4060
	if (ctx.cr6.eq) goto loc_822A4060;
loc_822A4024:
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4038
	if (ctx.cr6.eq) goto loc_822A4038;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822a4024
	goto loc_822A4024;
loc_822A4038:
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x822a404c
	if (!ctx.cr6.gt) goto loc_822A404C;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
loc_822A404C:
	// blt cr6,0x822a4054
	if (ctx.cr6.lt) goto loc_822A4054;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822A4054:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x822a4060
	if (ctx.cr6.gt) goto loc_822A4060;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_822A4060:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r7,8192
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8192, ctx.xer);
	// blt cr6,0x822a4014
	if (ctx.cr6.lt) goto loc_822A4014;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfs f0,-16020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16020);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82cb2298
	ctx.lr = 0x822A4094;
	sub_82CB2298(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwzx r31,r9,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a4178
	if (ctx.cr6.eq) goto loc_822A4178;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r24,12236(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r26,r11,-19580
	ctx.r26.s64 = ctx.r11.s64 + -19580;
	// addi r28,r10,-23864
	ctx.r28.s64 = ctx.r10.s64 + -23864;
	// addi r27,r9,11272
	ctx.r27.s64 = ctx.r9.s64 + 11272;
	// addi r25,r8,-27584
	ctx.r25.s64 = ctx.r8.s64 + -27584;
loc_822A40CC:
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 30, ctx.xer);
	// bge cr6,0x822a4178
	if (!ctx.cr6.lt) goto loc_822A4178;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8229bd90
	ctx.lr = 0x822A40E4;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a40f8
	if (ctx.cr6.eq) goto loc_822A40F8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a40fc
	goto loc_822A40FC;
loc_822A40F8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822A40FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bne cr6,0x822a4114
	if (!ctx.cr6.eq) goto loc_822A4114;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A4110;
	sub_822960C0(ctx, base);
	// b 0x822a4134
	goto loc_822A4134;
loc_822A4114:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a412c
	if (!ctx.cr6.eq) goto loc_822A412C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A4128;
	sub_822960C0(ctx, base);
	// b 0x822a4134
	goto loc_822A4134;
loc_822A412C:
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A4134;
	sub_8233E1A0(ctx, base);
loc_822A4134:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4148
	if (!ctx.cr6.eq) goto loc_822A4148;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_822A4148:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A4158;
	sub_8232D178(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A4160;
	sub_82299080(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A4168;
	sub_82299080(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a40cc
	if (!ctx.cr6.eq) goto loc_822A40CC;
loc_822A4178:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A4184:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23812
	ctx.r4.s64 = ctx.r11.s64 + -23812;
	// bl 0x82333168
	ctx.lr = 0x822A4194;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a41b8
	if (ctx.cr6.eq) goto loc_822A41B8;
	// bl 0x822955c8
	ctx.lr = 0x822A41A0;
	sub_822955C8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822a1ee0
	ctx.lr = 0x822A41AC;
	sub_822A1EE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A41B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x82333168
	ctx.lr = 0x822A41C8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a446c
	if (ctx.cr6.eq) goto loc_822A446C;
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23768
	ctx.r4.s64 = ctx.r11.s64 + -23768;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822af958
	ctx.lr = 0x822A41EC;
	sub_822AF958(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a4460
	if (ctx.cr6.eq) goto loc_822A4460;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r25,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r25.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r25,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r25.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r25.u32);
	// addi r29,r11,-23748
	ctx.r29.s64 = ctx.r11.s64 + -23748;
	// addi r31,r10,11272
	ctx.r31.s64 = ctx.r10.s64 + 11272;
loc_822A4214:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,3858
	ctx.r3.s64 = ctx.r1.s64 + 3858;
	// sth r11,3856(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3856, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x822A422C;
	sub_82CB16F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// bl 0x82347258
	ctx.lr = 0x822A423C;
	sub_82347258(ctx, base);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// addi r4,r1,3856
	ctx.r4.s64 = ctx.r1.s64 + 3856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823328b0
	ctx.lr = 0x822A4250;
	sub_823328B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a42b4
	if (ctx.cr6.eq) goto loc_822A42B4;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82332c90
	ctx.lr = 0x822A4264;
	sub_82332C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a42b4
	if (ctx.cr6.eq) goto loc_822A42B4;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8233e1a0
	ctx.lr = 0x822A4278;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a428c
	if (ctx.cr6.eq) goto loc_822A428C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a4290
	goto loc_822A4290;
loc_822A428C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_822A4290:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a6f68
	ctx.lr = 0x822A429C;
	sub_822A6F68(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x822b4070
	ctx.lr = 0x822A42AC;
	sub_822B4070(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A42B4;
	sub_82299080(ctx, base);
loc_822A42B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x822a4214
	if (ctx.cr6.lt) goto loc_822A4214;
	// stw r25,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r25.u32);
	// addi r5,r1,440
	ctx.r5.s64 = ctx.r1.s64 + 440;
	// stw r25,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r25.u32);
	// lwz r29,236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x822A42E0;
	sub_8229BCD0(ctx, base);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a42f4
	if (!ctx.cr6.eq) goto loc_822A42F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_822A42F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,-23724
	ctx.r4.s64 = ctx.r11.s64 + -23724;
	// bl 0x8232d178
	ctx.lr = 0x822A4304;
	sub_8232D178(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82299080
	ctx.lr = 0x822A430C;
	sub_82299080(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// addi r4,r10,-23684
	ctx.r4.s64 = ctx.r10.s64 + -23684;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332fd0
	ctx.lr = 0x822A4324;
	sub_82332FD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822955c8
	ctx.lr = 0x822A432C;
	sub_822955C8(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// bl 0x82295518
	ctx.lr = 0x822A4340;
	sub_82295518(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r27,r11,-27344
	ctx.r27.s64 = ctx.r11.s64 + -27344;
	// addi r28,r10,-21944
	ctx.r28.s64 = ctx.r10.s64 + -21944;
loc_822A4350:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a4458
	if (!ctx.cr6.lt) goto loc_822A4458;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r10,40(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4390
	if (ctx.cr6.eq) goto loc_822A4390;
loc_822A437C:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822a43a0
	if (ctx.cr6.eq) goto loc_822A43A0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a437c
	if (!ctx.cr6.eq) goto loc_822A437C;
loc_822A4390:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a444c
	if (ctx.cr6.eq) goto loc_822A444C;
loc_822A43A0:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822a43d4
	if (!ctx.cr6.eq) goto loc_822A43D4;
	// addi r7,r1,456
	ctx.r7.s64 = ctx.r1.s64 + 456;
	// lwz r4,12236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x823c0810
	ctx.lr = 0x822A43BC;
	sub_823C0810(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x822b4260
	ctx.lr = 0x822A43C4;
	sub_822B4260(ctx, base);
	// stw r27,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r27.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A43D0;
	sub_82295518(ctx, base);
	// b 0x822a4350
	goto loc_822A4350;
loc_822A43D4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a444c
	if (ctx.cr6.eq) goto loc_822A444C;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// beq cr6,0x822a444c
	if (ctx.cr6.eq) goto loc_822A444C;
loc_822A43EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a444c
	if (ctx.cr6.eq) goto loc_822A444C;
	// lwz r25,52(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82294680
	ctx.lr = 0x822A43FC;
	sub_82294680(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a444c
	if (ctx.cr6.eq) goto loc_822A444C;
	// lwz r25,52(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82294680
	ctx.lr = 0x822A440C;
	sub_82294680(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a4420
	if (ctx.cr6.eq) goto loc_822A4420;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x822a43ec
	goto loc_822A43EC;
loc_822A4420:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822a444c
	if (ctx.cr6.eq) goto loc_822A444C;
	// addi r7,r1,456
	ctx.r7.s64 = ctx.r1.s64 + 456;
	// lwz r4,12236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x823c0810
	ctx.lr = 0x822A4440;
	sub_823C0810(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x822b4260
	ctx.lr = 0x822A4448;
	sub_822B4260(ctx, base);
	// stw r27,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r27.u32);
loc_822A444C:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A4454;
	sub_82295518(ctx, base);
	// b 0x822a4350
	goto loc_822A4350;
loc_822A4458:
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x822b4260
	ctx.lr = 0x822A4460;
	sub_822B4260(ctx, base);
loc_822A4460:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A446C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23668
	ctx.r4.s64 = ctx.r11.s64 + -23668;
	// bl 0x82333168
	ctx.lr = 0x822A447C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a319c
	if (!ctx.cr6.eq) goto loc_822A319C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23656
	ctx.r4.s64 = ctx.r11.s64 + -23656;
	// bl 0x82333168
	ctx.lr = 0x822A4494;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a533c
	if (ctx.cr6.eq) goto loc_822A533C;
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
	// stw r25,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-23624
	ctx.r4.s64 = ctx.r11.s64 + -23624;
	// stw r15,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r15.u32);
	// bl 0x823329d8
	ctx.lr = 0x822A44BC;
	sub_823329D8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// addi r31,r11,-24148
	ctx.r31.s64 = ctx.r11.s64 + -24148;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r16,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r16.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// bl 0x822af8c0
	ctx.lr = 0x822A44EC;
	sub_822AF8C0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r30,r11,-24636
	ctx.r30.s64 = ctx.r11.s64 + -24636;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// bl 0x822af7f0
	ctx.lr = 0x822A4508;
	sub_822AF7F0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,-23768
	ctx.r28.s64 = ctx.r11.s64 + -23768;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822af958
	ctx.lr = 0x822A4524;
	sub_822AF958(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r11,-23612
	ctx.r27.s64 = ctx.r11.s64 + -23612;
	// lwz r17,216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x822a4550
	if (!ctx.cr6.eq) goto loc_822A4550;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822af7f0
	ctx.lr = 0x822A454C;
	sub_822AF7F0(ctx, base);
	// lwz r16,192(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_822A4550:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r4,r11,-23596
	ctx.r4.s64 = ctx.r11.s64 + -23596;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332f80
	ctx.lr = 0x822A456C;
	sub_82332F80(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r22,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82294520
	ctx.lr = 0x822A4590;
	sub_82294520(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// addi r23,r11,-21944
	ctx.r23.s64 = ctx.r11.s64 + -21944;
	// stw r22,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r22.u32);
	// stw r25,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r25.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a45cc
	if (!ctx.cr6.gt) goto loc_822A45CC;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82294520
	ctx.lr = 0x822A45C8;
	sub_82294520(ctx, base);
	// lwz r25,324(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
loc_822A45CC:
	// lwz r19,284(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// addi r29,r11,-23580
	ctx.r29.s64 = ctx.r11.s64 + -23580;
	// beq cr6,0x822a4710
	if (ctx.cr6.eq) goto loc_822A4710;
	// bl 0x822949a0
	ctx.lr = 0x822A45E4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r19,r3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822a460c
	if (!ctx.cr6.eq) goto loc_822A460C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822af8c0
	ctx.lr = 0x822A4600;
	sub_822AF8C0(ctx, base);
	// lwz r15,236(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x822a4620
	if (!ctx.cr6.eq) goto loc_822A4620;
loc_822A460C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232f858
	ctx.lr = 0x822A4618;
	sub_8232F858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a49d0
	if (!ctx.cr6.eq) goto loc_822A49D0;
loc_822A4620:
	// lwz r18,212(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x822a4640
	if (!ctx.cr6.eq) goto loc_822A4640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232f858
	ctx.lr = 0x822A4638;
	sub_8232F858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a49d0
	if (!ctx.cr6.eq) goto loc_822A49D0;
loc_822A4640:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x822a465c
	if (!ctx.cr6.eq) goto loc_822A465C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232f858
	ctx.lr = 0x822A4654;
	sub_8232F858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a49d0
	if (!ctx.cr6.eq) goto loc_822A49D0;
loc_822A465C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x822a4678
	if (!ctx.cr6.eq) goto loc_822A4678;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232f858
	ctx.lr = 0x822A4670;
	sub_8232F858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a49d0
	if (!ctx.cr6.eq) goto loc_822A49D0;
loc_822A4678:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-23568
	ctx.r4.s64 = ctx.r11.s64 + -23568;
	// bl 0x823329d8
	ctx.lr = 0x822A4688;
	sub_823329D8(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r10,-23552
	ctx.r4.s64 = ctx.r10.s64 + -23552;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823329d8
	ctx.lr = 0x822A469C;
	sub_823329D8(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r4,r9,-23520
	ctx.r4.s64 = ctx.r9.s64 + -23520;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823329d8
	ctx.lr = 0x822A46B0;
	sub_823329D8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x822955c8
	ctx.lr = 0x822A46B8;
	sub_822955C8(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A46C8;
	sub_82295518(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r26,216(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r14,304(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r25,r11,-27344
	ctx.r25.s64 = ctx.r11.s64 + -27344;
loc_822A46D8:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a49c8
	if (!ctx.cr6.lt) goto loc_822A49C8;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r9,512
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 512, ctx.xer);
	// bne cr6,0x822a4728
	if (!ctx.cr6.eq) goto loc_822A4728;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822a49bc
	if (ctx.cr6.eq) goto loc_822A49BC;
	// b 0x822a4730
	goto loc_822A4730;
loc_822A4710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232f858
	ctx.lr = 0x822A471C;
	sub_8232F858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a49d0
	if (!ctx.cr6.eq) goto loc_822A49D0;
	// b 0x822a460c
	goto loc_822A460C;
loc_822A4728:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x822a49bc
	if (!ctx.cr6.eq) goto loc_822A49BC;
loc_822A4730:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822a474c
	if (ctx.cr6.eq) goto loc_822A474C;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822a49bc
	if (!ctx.cr6.eq) goto loc_822A49BC;
loc_822A474C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x822a4780
	if (ctx.cr6.eq) goto loc_822A4780;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a49bc
	if (ctx.cr6.eq) goto loc_822A49BC;
loc_822A4760:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x822a4780
	if (ctx.cr6.eq) goto loc_822A4780;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4760
	if (!ctx.cr6.eq) goto loc_822A4760;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A477C;
	sub_82295518(ctx, base);
	// b 0x822a46d8
	goto loc_822A46D8;
loc_822A4780:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822a4794
	if (ctx.cr6.eq) goto loc_822A4794;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x822a49bc
	if (!ctx.cr6.eq) goto loc_822A49BC;
loc_822A4794:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822a47c8
	if (ctx.cr6.eq) goto loc_822A47C8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a49bc
	if (ctx.cr6.eq) goto loc_822A49BC;
loc_822A47A8:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x822a47c8
	if (ctx.cr6.eq) goto loc_822A47C8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a47a8
	if (!ctx.cr6.eq) goto loc_822A47A8;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A47C4;
	sub_82295518(ctx, base);
	// b 0x822a46d8
	goto loc_822A46D8;
loc_822A47C8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x822a47fc
	if (ctx.cr6.eq) goto loc_822A47FC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a49bc
	if (ctx.cr6.eq) goto loc_822A49BC;
loc_822A47DC:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x822a47fc
	if (ctx.cr6.eq) goto loc_822A47FC;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a47dc
	if (!ctx.cr6.eq) goto loc_822A47DC;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A47F8;
	sub_82295518(ctx, base);
	// b 0x822a46d8
	goto loc_822A46D8;
loc_822A47FC:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x822a4834
	if (ctx.cr6.eq) goto loc_822A4834;
	// bl 0x822afa00
	ctx.lr = 0x822A4808;
	sub_822AFA00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4834
	if (ctx.cr6.eq) goto loc_822A4834;
loc_822A4814:
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x822a4834
	if (ctx.cr6.eq) goto loc_822A4834;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4814
	if (!ctx.cr6.eq) goto loc_822A4814;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A4830;
	sub_82295518(ctx, base);
	// b 0x822a46d8
	goto loc_822A46D8;
loc_822A4834:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x822b2388
	ctx.lr = 0x822A4844;
	sub_822B2388(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,204(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A485C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r29,52(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// beq cr6,0x822a48c0
	if (ctx.cr6.eq) goto loc_822A48C0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822a48a0
	if (!ctx.cr6.gt) goto loc_822A48A0;
loc_822A4884:
	// bl 0x822955c8
	ctx.lr = 0x822A4888;
	sub_822955C8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a48a0
	if (ctx.cr6.eq) goto loc_822A48A0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822a4884
	if (ctx.cr6.lt) goto loc_822A4884;
loc_822A48A0:
	// bl 0x822955c8
	ctx.lr = 0x822A48A4;
	sub_822955C8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a48c0
	if (ctx.cr6.eq) goto loc_822A48C0;
loc_822A48AC:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r29,60(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x822955c8
	ctx.lr = 0x822A48B8;
	sub_822955C8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822a48ac
	if (!ctx.cr6.eq) goto loc_822A48AC;
loc_822A48C0:
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a48f4
	if (!ctx.cr6.gt) goto loc_822A48F4;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_822A48D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822a48f4
	if (ctx.cr6.eq) goto loc_822A48F4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822a48d8
	if (ctx.cr6.lt) goto loc_822A48D8;
loc_822A48F4:
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822a4924
	if (!ctx.cr6.eq) goto loc_822A4924;
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// bl 0x822ad2e0
	ctx.lr = 0x822A491C;
	sub_822AD2E0(ctx, base);
	// lwz r14,304(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822A4924:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x822a493c
	if (!ctx.cr6.eq) goto loc_822A493C;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x822a493c
	if (!ctx.cr6.eq) goto loc_822A493C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822a4970
	if (ctx.cr6.eq) goto loc_822A4970;
loc_822A493C:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822afa80
	ctx.lr = 0x822A4948;
	sub_822AFA80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a4970
	if (ctx.cr6.eq) goto loc_822A4970;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r9,736(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_822A4970:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// add r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwz r10,736(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r25,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r25.u32);
loc_822A49BC:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295518
	ctx.lr = 0x822A49C4;
	sub_82295518(ctx, base);
	// b 0x822a46d8
	goto loc_822A46D8;
loc_822A49C8:
	// lwz r25,324(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r22,0
	ctx.r22.s64 = 0;
loc_822A49D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-23492
	ctx.r4.s64 = ctx.r11.s64 + -23492;
	// bl 0x823329d8
	ctx.lr = 0x822A49E0;
	sub_823329D8(ctx, base);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,25212
	ctx.r31.s64 = ctx.r10.s64 + 25212;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r10,-23472
	ctx.r4.s64 = ctx.r10.s64 + -23472;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bl 0x823329d8
	ctx.lr = 0x822A4A00;
	sub_823329D8(ctx, base);
	// lis r30,-31905
	ctx.r30.s64 = -2090926080;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r22,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r22.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r23,r11,11272
	ctx.r23.s64 = ctx.r11.s64 + 11272;
	// lwz r24,-24528(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24528);
	// beq cr6,0x822a4ae8
	if (ctx.cr6.eq) goto loc_822A4AE8;
	// addi r10,r1,396
	ctx.r10.s64 = ctx.r1.s64 + 396;
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x822bc9c8
	ctx.lr = 0x822A4A48;
	sub_822BC9C8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r5,376(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// bl 0x8232e868
	ctx.lr = 0x822A4A70;
	sub_8232E868(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,2064
	ctx.r3.s64 = 2064;
	// bl 0x822959a8
	ctx.lr = 0x822A4A7C;
	sub_822959A8(ctx, base);
	// lwz r29,244(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r28,240(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a4aa4
	if (ctx.cr6.eq) goto loc_822A4AA4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x822a4a9c
	if (!ctx.cr6.eq) goto loc_822A4A9C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_822A4A9C:
	// bl 0x823a4568
	ctx.lr = 0x822A4AA0;
	sub_823A4568(ctx, base);
	// b 0x822a4aa8
	goto loc_822A4AA8;
loc_822A4AA4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_822A4AA8:
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x822a4ac0
	if (!ctx.cr6.eq) goto loc_822A4AC0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_822A4AC0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r3,-24528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24528);
	// addi r4,r11,-23368
	ctx.r4.s64 = ctx.r11.s64 + -23368;
	// bl 0x8232d178
	ctx.lr = 0x822A4AD0;
	sub_8232D178(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82299080
	ctx.lr = 0x822A4AE8;
	sub_82299080(ctx, base);
loc_822A4AE8:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r10,-23288
	ctx.r10.s64 = ctx.r10.s64 + -23288;
	// addi r9,r9,-19580
	ctx.r9.s64 = ctx.r9.s64 + -19580;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// addi r14,r11,-23268
	ctx.r14.s64 = ctx.r11.s64 + -23268;
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// beq cr6,0x822a51ec
	if (ctx.cr6.eq) goto loc_822A51EC;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4b28
	if (!ctx.cr6.eq) goto loc_822A4B28;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x822afb00
	ctx.lr = 0x822A4B28;
	sub_822AFB00(ctx, base);
loc_822A4B28:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,-23308
	ctx.r8.s64 = ctx.r11.s64 + -23308;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r10,-23248
	ctx.r5.s64 = ctx.r10.s64 + -23248;
	// addi r4,r9,-23232
	ctx.r4.s64 = ctx.r9.s64 + -23232;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A4B50;
	sub_8232D178(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x822a51ec
	if (!ctx.cr6.gt) goto loc_822A51EC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r31,320(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r17,r11,-22616
	ctx.r17.s64 = ctx.r11.s64 + -22616;
	// addi r22,r10,-22688
	ctx.r22.s64 = ctx.r10.s64 + -22688;
	// addi r16,r9,-22752
	ctx.r16.s64 = ctx.r9.s64 + -22752;
	// addi r20,r8,-22832
	ctx.r20.s64 = ctx.r8.s64 + -22832;
	// addi r19,r7,-22920
	ctx.r19.s64 = ctx.r7.s64 + -22920;
	// addi r15,r6,-22992
	ctx.r15.s64 = ctx.r6.s64 + -22992;
	// addi r18,r5,-23064
	ctx.r18.s64 = ctx.r5.s64 + -23064;
	// addi r21,r4,-23144
	ctx.r21.s64 = ctx.r4.s64 + -23144;
loc_822A4B9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// bl 0x829d80d0
	ctx.lr = 0x822A4BE4;
	sub_829D80D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4ca0
	if (ctx.cr6.eq) goto loc_822A4CA0;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,224(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4c08
	if (!ctx.cr6.eq) goto loc_822A4C08;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_822A4C08:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r27,200(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4c1c
	if (!ctx.cr6.eq) goto loc_822A4C1C;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_822A4C1C:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r28,256(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4c30
	if (!ctx.cr6.eq) goto loc_822A4C30;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A4C30:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8229bd90
	ctx.lr = 0x822A4C40;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a4c54
	if (ctx.cr6.eq) goto loc_822A4C54;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a4c58
	goto loc_822A4C58;
loc_822A4C54:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822A4C58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A4C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r9,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 10;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A4C98;
	sub_8232D178(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x822a51bc
	goto loc_822A51BC;
loc_822A4CA0:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x829d8238
	ctx.lr = 0x822A4CB0;
	sub_829D8238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4d54
	if (ctx.cr6.eq) goto loc_822A4D54;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,200(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4cd4
	if (!ctx.cr6.eq) goto loc_822A4CD4;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_822A4CD4:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r28,256(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4ce8
	if (!ctx.cr6.eq) goto loc_822A4CE8;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A4CE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x8229bd90
	ctx.lr = 0x822A4CF8;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a4d0c
	if (ctx.cr6.eq) goto loc_822A4D0C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a4d10
	goto loc_822A4D10;
loc_822A4D0C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822A4D10:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A4D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r9,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 10;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A4D4C;
	sub_8232D178(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// b 0x822a51bc
	goto loc_822A51BC;
loc_822A4D54:
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x829d82c0
	ctx.lr = 0x822A4D64;
	sub_829D82C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4df4
	if (ctx.cr6.eq) goto loc_822A4DF4;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4d88
	if (!ctx.cr6.eq) goto loc_822A4D88;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A4D88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x8229bd90
	ctx.lr = 0x822A4D98;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a4dac
	if (ctx.cr6.eq) goto loc_822A4DAC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a4db0
	goto loc_822A4DB0;
loc_822A4DAC:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822A4DB0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A4DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r8,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 10;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r9,376(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A4DEC;
	sub_8232D178(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// b 0x822a51bc
	goto loc_822A51BC;
loc_822A4DF4:
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x829d8500
	ctx.lr = 0x822A4E0C;
	sub_829D8500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4ec0
	if (ctx.cr6.eq) goto loc_822A4EC0;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,288(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4e30
	if (!ctx.cr6.eq) goto loc_822A4E30;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_822A4E30:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4e44
	if (!ctx.cr6.eq) goto loc_822A4E44;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A4E44:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x8229bd90
	ctx.lr = 0x822A4E54;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a4e68
	if (ctx.cr6.eq) goto loc_822A4E68;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a4e6c
	goto loc_822A4E6C;
loc_822A4E68:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822A4E6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A4E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f1.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// srawi r8,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 10;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x8232d178
	ctx.lr = 0x822A4EB8;
	sub_8232D178(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// b 0x822a51bc
	goto loc_822A51BC;
loc_822A4EC0:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x829d8348
	ctx.lr = 0x822A4ED4;
	sub_829D8348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4f7c
	if (ctx.cr6.eq) goto loc_822A4F7C;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,288(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4ef8
	if (!ctx.cr6.eq) goto loc_822A4EF8;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_822A4EF8:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4f0c
	if (!ctx.cr6.eq) goto loc_822A4F0C;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A4F0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x8229bd90
	ctx.lr = 0x822A4F1C;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a4f30
	if (ctx.cr6.eq) goto loc_822A4F30;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a4f34
	goto loc_822A4F34;
loc_822A4F30:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822A4F34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A4F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// srawi r8,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 10;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A4F74;
	sub_8232D178(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// b 0x822a51bc
	goto loc_822A51BC;
loc_822A4F7C:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x829d8670
	ctx.lr = 0x822A4F8C;
	sub_829D8670(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a501c
	if (ctx.cr6.eq) goto loc_822A501C;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,288(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a4fb0
	if (!ctx.cr6.eq) goto loc_822A4FB0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A4FB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8229bd90
	ctx.lr = 0x822A4FC0;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a4fd4
	if (ctx.cr6.eq) goto loc_822A4FD4;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a4fd8
	goto loc_822A4FD8;
loc_822A4FD4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822A4FD8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A4FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r8,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 10;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A5014;
	sub_8232D178(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// b 0x822a51bc
	goto loc_822A51BC;
loc_822A501C:
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x829d8760
	ctx.lr = 0x822A5030;
	sub_829D8760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5134
	if (ctx.cr6.eq) goto loc_822A5134;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5088
	if (ctx.cr6.eq) goto loc_822A5088;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// bne cr6,0x822a5070
	if (!ctx.cr6.eq) goto loc_822A5070;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x822960c0
	ctx.lr = 0x822A506C;
	sub_822960C0(ctx, base);
	// b 0x822a5078
	goto loc_822A5078;
loc_822A5070:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A5078;
	sub_8233E1A0(ctx, base);
loc_822A5078:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r27,336(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a508c
	if (!ctx.cr6.eq) goto loc_822A508C;
loc_822A5088:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_822A508C:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,288(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a50a4
	if (!ctx.cr6.eq) goto loc_822A50A4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A50A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8229bd90
	ctx.lr = 0x822A50B4;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a50c8
	if (ctx.cr6.eq) goto loc_822A50C8;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a50cc
	goto loc_822A50CC;
loc_822A50C8:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_822A50CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A50E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r8,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 10;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A510C;
	sub_8232D178(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82299080
	ctx.lr = 0x822A5114;
	sub_82299080(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822a51c0
	if (ctx.cr6.eq) goto loc_822A51C0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// b 0x822a51bc
	goto loc_822A51BC;
loc_822A5134:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829d8868
	ctx.lr = 0x822A5140;
	sub_829D8868(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bne cr6,0x822a5158
	if (!ctx.cr6.eq) goto loc_822A5158;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822A5158:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8229bd90
	ctx.lr = 0x822A5168;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a517c
	if (ctx.cr6.eq) goto loc_822A517C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a5180
	goto loc_822A5180;
loc_822A517C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_822A5180:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A5194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r9,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 10;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A51B8;
	sub_8232D178(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_822A51BC:
	// bl 0x82299080
	ctx.lr = 0x822A51C0;
	sub_82299080(ctx, base);
loc_822A51C0:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A51C8;
	sub_82299080(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82299080
	ctx.lr = 0x822A51D0;
	sub_82299080(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82299080
	ctx.lr = 0x822A51D8;
	sub_82299080(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82299080
	ctx.lr = 0x822A51E0;
	sub_82299080(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x822a4b9c
	if (!ctx.cr0.eq) goto loc_822A4B9C;
loc_822A51EC:
	// lwz r30,308(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822a52e4
	if (ctx.cr6.eq) goto loc_822A52E4;
	// lwz r31,304(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aff78
	ctx.lr = 0x822A5208;
	sub_822AFF78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r9,r11,-22560
	ctx.r9.s64 = ctx.r11.s64 + -22560;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// addi r6,r10,-22540
	ctx.r6.s64 = ctx.r10.s64 + -22540;
	// addi r5,r5,-22528
	ctx.r5.s64 = ctx.r5.s64 + -22528;
	// addi r4,r4,-22516
	ctx.r4.s64 = ctx.r4.s64 + -22516;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822b02e0
	ctx.lr = 0x822A5238;
	sub_822B02E0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822a52e4
	if (!ctx.cr6.gt) goto loc_822A52E4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r27,236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r29,r11,-22456
	ctx.r29.s64 = ctx.r11.s64 + -22456;
	// addi r28,r10,-27584
	ctx.r28.s64 = ctx.r10.s64 + -27584;
loc_822A5258:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5274
	if (!ctx.cr6.eq) goto loc_822A5274;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A5270;
	sub_822960C0(ctx, base);
	// b 0x822a5294
	goto loc_822A5294;
loc_822A5274:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822a528c
	if (!ctx.cr6.eq) goto loc_822A528C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A5288;
	sub_822960C0(ctx, base);
	// b 0x822a5294
	goto loc_822A5294;
loc_822A528C:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A5294;
	sub_8233E1A0(ctx, base);
loc_822A5294:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a52a8
	if (!ctx.cr6.eq) goto loc_822A52A8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_822A52A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// rlwinm r9,r11,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r8,r10,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// rlwinm r7,r7,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// bl 0x8232d178
	ctx.lr = 0x822A52D0;
	sub_8232D178(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A52D8;
	sub_82299080(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x822a5258
	if (!ctx.cr0.eq) goto loc_822A5258;
loc_822A52E4:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5320
	if (ctx.cr6.eq) goto loc_822A5320;
	// lwz r31,216(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A5308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A5320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5320:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822ad3a8
	ctx.lr = 0x822A5328;
	sub_822AD3A8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822ad268
	ctx.lr = 0x822A5330;
	sub_822AD268(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A533C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-22320
	ctx.r4.s64 = ctx.r11.s64 + -22320;
	// bl 0x82333168
	ctx.lr = 0x822A534C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a54d4
	if (ctx.cr6.eq) goto loc_822A54D4;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// addi r22,r11,-21920
	ctx.r22.s64 = ctx.r11.s64 + -21920;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a54c8
	if (!ctx.cr6.gt) goto loc_822A54C8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r19,12236(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// addi r21,r11,-22280
	ctx.r21.s64 = ctx.r11.s64 + -22280;
	// addi r20,r10,11272
	ctx.r20.s64 = ctx.r10.s64 + 11272;
loc_822A5384:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r31,r11,r23
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a5410
	if (!ctx.cr6.gt) goto loc_822A5410;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822A53A4:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a53c4
	if (!ctx.cr6.eq) goto loc_822A53C4;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a53fc
	if (ctx.cr6.eq) goto loc_822A53FC;
loc_822A53C4:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8233e1a0
	ctx.lr = 0x822A53CC;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a53e0
	if (ctx.cr6.eq) goto loc_822A53E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a53e4
	goto loc_822A53E4;
loc_822A53E0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_822A53E4:
	// bl 0x82cb0ec8
	ctx.lr = 0x822A53E8;
	sub_82CB0EC8(ctx, base);
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82299080
	ctx.lr = 0x822A53FC;
	sub_82299080(ctx, base);
loc_822A53FC:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a53a4
	if (ctx.cr6.lt) goto loc_822A53A4;
loc_822A5410:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,200(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// lwz r30,188(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r28,176(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r27,1388(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// lwz r26,140(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8229bd90
	ctx.lr = 0x822A5434;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5448
	if (ctx.cr6.eq) goto loc_822A5448;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a544c
	goto loc_822A544C;
loc_822A5448:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_822A544C:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5460
	if (ctx.cr6.eq) goto loc_822A5460;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// b 0x822a5464
	goto loc_822A5464;
loc_822A5460:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_822A5464:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mulli r10,r29,108
	ctx.r10.s64 = ctx.r29.s64 * 108;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// srawi r8,r25,10
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r25.s32 >> 10;
	// rlwinm r7,r9,25,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x3FFFFF;
	// rlwinm r3,r10,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r8,r28,25,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x3FFFFF;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A54AC;
	sub_8232D178(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82299080
	ctx.lr = 0x822A54B4;
	sub_82299080(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a5384
	if (ctx.cr6.lt) goto loc_822A5384;
loc_822A54C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A54D4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-22124
	ctx.r4.s64 = ctx.r11.s64 + -22124;
	// bl 0x82333168
	ctx.lr = 0x822A54E4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x822a5548
	if (ctx.cr6.eq) goto loc_822A5548;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// bl 0x823332d8
	ctx.lr = 0x822A5500;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a553c
	if (ctx.cr6.eq) goto loc_822A553C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822b03a8
	ctx.lr = 0x822A5518;
	sub_822B03A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a553c
	if (ctx.cr6.eq) goto loc_822A553C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822a2cb8
	ctx.lr = 0x822A552C;
	sub_822A2CB8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822a2ea0
	ctx.lr = 0x822A553C;
	sub_822A2EA0(ctx, base);
loc_822A553C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A5548:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-22112
	ctx.r4.s64 = ctx.r11.s64 + -22112;
	// bl 0x82333168
	ctx.lr = 0x822A5554;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x822a5600
	if (ctx.cr6.eq) goto loc_822A5600;
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r25,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r25.u32);
	// bl 0x82333438
	ctx.lr = 0x822A5578;
	sub_82333438(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a55ec
	if (ctx.cr6.eq) goto loc_822A55EC;
	// lwz r30,228(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r29,224(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x822a55a0
	if (!ctx.cr6.eq) goto loc_822A55A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_822A55A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822b03a8
	ctx.lr = 0x822A55AC;
	sub_822B03A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a55cc
	if (ctx.cr6.eq) goto loc_822A55CC;
	// bl 0x8229d2c8
	ctx.lr = 0x822A55B8;
	sub_8229D2C8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A55C0;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A55CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x822a55dc
	if (!ctx.cr6.eq) goto loc_822A55DC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_822A55DC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,-22088
	ctx.r4.s64 = ctx.r11.s64 + -22088;
	// bl 0x8232d178
	ctx.lr = 0x822A55EC;
	sub_8232D178(ctx, base);
loc_822A55EC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A55F4;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A5600:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-21952
	ctx.r4.s64 = ctx.r11.s64 + -21952;
	// bl 0x82333168
	ctx.lr = 0x822A560C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5f8c
	if (ctx.cr6.eq) goto loc_822A5F8C;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// addi r4,r11,-24148
	ctx.r4.s64 = ctx.r11.s64 + -24148;
	// stw r25,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r25.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r25,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// stw r20,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// bl 0x822af8c0
	ctx.lr = 0x822A5654;
	sub_822AF8C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a569c
	if (ctx.cr6.eq) goto loc_822A569C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r4,r11,-24132
	ctx.r4.s64 = ctx.r11.s64 + -24132;
	// addi r5,r1,5904
	ctx.r5.s64 = ctx.r1.s64 + 5904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823328b0
	ctx.lr = 0x822A5674;
	sub_823328B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a569c
	if (ctx.cr6.eq) goto loc_822A569C;
	// addi r6,r1,5904
	ctx.r6.s64 = ctx.r1.s64 + 5904;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// bl 0x82332c10
	ctx.lr = 0x822A5690;
	sub_82332C10(ctx, base);
	// lwz r20,216(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a56d0
	if (!ctx.cr6.eq) goto loc_822A56D0;
loc_822A569C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,10000
	ctx.r4.s64 = ctx.r1.s64 + 10000;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823332d8
	ctx.lr = 0x822A56B0;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a56cc
	if (ctx.cr6.eq) goto loc_822A56CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,10000
	ctx.r4.s64 = ctx.r1.s64 + 10000;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822b03a8
	ctx.lr = 0x822A56C8;
	sub_822B03A8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_822A56CC:
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_822A56D0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822a5f58
	if (ctx.cr6.eq) goto loc_822A5F58;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822afa00
	ctx.lr = 0x822A56E0;
	sub_822AFA00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a56fc
	if (ctx.cr6.eq) goto loc_822A56FC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822afa00
	ctx.lr = 0x822A56F0;
	sub_822AFA00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82396ef8
	ctx.lr = 0x822A56F8;
	sub_82396EF8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_822A56FC:
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stw r25,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r25.u32);
	// addi r4,r11,-21940
	ctx.r4.s64 = ctx.r11.s64 + -21940;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332a90
	ctx.lr = 0x822A571C;
	sub_82332A90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r16,r11,11272
	ctx.r16.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x822a573c
	if (ctx.cr6.eq) goto loc_822A573C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-21912
	ctx.r30.s64 = ctx.r11.s64 + -21912;
	// b 0x822a5740
	goto loc_822A5740;
loc_822A573C:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_822A5740:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8229bd90
	ctx.lr = 0x822A5750;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5764
	if (ctx.cr6.eq) goto loc_822A5764;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a5768
	goto loc_822A5768;
loc_822A5764:
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
loc_822A5768:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-21880
	ctx.r4.s64 = ctx.r11.s64 + -21880;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A577C;
	sub_8232D178(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82299080
	ctx.lr = 0x822A5784;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a57e0
	if (ctx.cr6.eq) goto loc_822A57E0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x823fa568
	ctx.lr = 0x822A5794;
	sub_823FA568(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,56(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r5,52(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r8,52(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// bl 0x8229d3d8
	ctx.lr = 0x822A57C4;
	sub_8229D3D8(ctx, base);
	// lwz r3,524(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82294a58
	ctx.lr = 0x822A57CC;
	sub_82294A58(ctx, base);
	// stw r25,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r25.u32);
	// stw r25,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r25.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x822add60
	ctx.lr = 0x822A57DC;
	sub_822ADD60(ctx, base);
	// b 0x822a5e18
	goto loc_822A5E18;
loc_822A57E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-21800
	ctx.r4.s64 = ctx.r11.s64 + -21800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332a90
	ctx.lr = 0x822A57F4;
	sub_82332A90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5804
	if (ctx.cr6.eq) goto loc_822A5804;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// b 0x822a5824
	goto loc_822A5824;
loc_822A5804:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-21788
	ctx.r4.s64 = ctx.r11.s64 + -21788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332a90
	ctx.lr = 0x822A5818;
	sub_82332A90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5838
	if (ctx.cr6.eq) goto loc_822A5838;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_822A5824:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-19584
	ctx.r5.s64 = ctx.r11.s64 + -19584;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8232d6f8
	ctx.lr = 0x822A5838;
	sub_8232D6F8(ctx, base);
loc_822A5838:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,52(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// bl 0x822b3028
	ctx.lr = 0x822A5844;
	sub_822B3028(ctx, base);
	// lwz r24,204(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a5e18
	if (ctx.cr6.eq) goto loc_822A5E18;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r21,252(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r27,260(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r23,308(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r17,r11,-19580
	ctx.r17.s64 = ctx.r11.s64 + -19580;
	// addi r15,r10,-21704
	ctx.r15.s64 = ctx.r10.s64 + -21704;
	// addi r19,r9,-21740
	ctx.r19.s64 = ctx.r9.s64 + -21740;
	// addi r18,r8,-21776
	ctx.r18.s64 = ctx.r8.s64 + -21776;
	// addi r14,r7,-27584
	ctx.r14.s64 = ctx.r7.s64 + -27584;
loc_822A5884:
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a58a8
	if (ctx.cr6.eq) goto loc_822A58A8;
	// stw r25,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82294520
	ctx.lr = 0x822A58A8;
	sub_82294520(ctx, base);
loc_822A58A8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x822a59f0
	if (ctx.cr6.eq) goto loc_822A59F0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ble cr6,0x822a5b30
	if (!ctx.cr6.gt) goto loc_822A5B30;
	// lwz r30,304(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r28,r24,84
	ctx.r28.s64 = ctx.r24.s64 + 84;
loc_822A58C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a58d8
	if (!ctx.cr6.eq) goto loc_822A58D8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5900
	if (ctx.cr6.eq) goto loc_822A5900;
loc_822A58D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ori r21,r21,4
	ctx.r21.u64 = ctx.r21.u64 | 4;
	// bl 0x8233e1a0
	ctx.lr = 0x822A58E8;
	sub_8233E1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b21c0
	ctx.lr = 0x822A58F4;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822a5904
	if (!ctx.cr6.eq) goto loc_822A5904;
loc_822A5900:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_822A5904:
	// rlwinm r10,r21,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a5920
	if (ctx.cr6.eq) goto loc_822A5920;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r21,r21,0,30,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82299080
	ctx.lr = 0x822A5920;
	sub_82299080(ctx, base);
loc_822A5920:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a59e0
	if (!ctx.cr6.eq) goto loc_822A59E0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A5940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a5958
	if (!ctx.cr6.eq) goto loc_822A5958;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822960c0
	ctx.lr = 0x822A5954;
	sub_822960C0(ctx, base);
	// b 0x822a5980
	goto loc_822A5980;
loc_822A5958:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a5974
	if (!ctx.cr6.eq) goto loc_822A5974;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822960c0
	ctx.lr = 0x822A5970;
	sub_822960C0(ctx, base);
	// b 0x822a5980
	goto loc_822A5980;
loc_822A5974:
	// addi r4,r3,44
	ctx.r4.s64 = ctx.r3.s64 + 44;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233e1a0
	ctx.lr = 0x822A5980;
	sub_8233E1A0(ctx, base);
loc_822A5980:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a5994
	if (!ctx.cr6.eq) goto loc_822A5994;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_822A5994:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a59a8
	if (ctx.cr6.eq) goto loc_822A59A8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x822a59ac
	goto loc_822A59AC;
loc_822A59A8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_822A59AC:
	// bl 0x82cb0328
	ctx.lr = 0x822A59B0;
	sub_82CB0328(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82299080
	ctx.lr = 0x822A59C0;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a59e0
	if (!ctx.cr6.eq) goto loc_822A59E0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822a58c0
	if (ctx.cr6.lt) goto loc_822A58C0;
	// stw r21,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r21.u32);
	// b 0x822a5b30
	goto loc_822A5B30;
loc_822A59E0:
	// stw r21,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r21.u32);
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822a5df4
	if (ctx.cr6.lt) goto loc_822A5DF4;
	// b 0x822a5b30
	goto loc_822A5B30;
loc_822A59F0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822a5b30
	if (ctx.cr6.eq) goto loc_822A5B30;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ble cr6,0x822a5b28
	if (!ctx.cr6.gt) goto loc_822A5B28;
	// lwz r30,256(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r28,r24,84
	ctx.r28.s64 = ctx.r24.s64 + 84;
loc_822A5A08:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a5a20
	if (!ctx.cr6.eq) goto loc_822A5A20;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5a4c
	if (ctx.cr6.eq) goto loc_822A5A4C;
loc_822A5A20:
	// ori r21,r21,8
	ctx.r21.u64 = ctx.r21.u64 | 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// stw r21,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r21.u32);
	// bl 0x8233e1a0
	ctx.lr = 0x822A5A34;
	sub_8233E1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b21c0
	ctx.lr = 0x822A5A40;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822a5a50
	if (!ctx.cr6.eq) goto loc_822A5A50;
loc_822A5A4C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_822A5A50:
	// rlwinm r10,r21,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a5a70
	if (ctx.cr6.eq) goto loc_822A5A70;
	// rlwinm r21,r21,0,29,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// stw r21,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r21.u32);
	// bl 0x82299080
	ctx.lr = 0x822A5A70;
	sub_82299080(ctx, base);
loc_822A5A70:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5b28
	if (!ctx.cr6.eq) goto loc_822A5B28;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A5A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a5aa8
	if (!ctx.cr6.eq) goto loc_822A5AA8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822960c0
	ctx.lr = 0x822A5AA4;
	sub_822960C0(ctx, base);
	// b 0x822a5ad0
	goto loc_822A5AD0;
loc_822A5AA8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a5ac4
	if (!ctx.cr6.eq) goto loc_822A5AC4;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822960c0
	ctx.lr = 0x822A5AC0;
	sub_822960C0(ctx, base);
	// b 0x822a5ad0
	goto loc_822A5AD0;
loc_822A5AC4:
	// addi r4,r3,44
	ctx.r4.s64 = ctx.r3.s64 + 44;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8233e1a0
	ctx.lr = 0x822A5AD0;
	sub_8233E1A0(ctx, base);
loc_822A5AD0:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a5ae4
	if (!ctx.cr6.eq) goto loc_822A5AE4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_822A5AE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5af8
	if (ctx.cr6.eq) goto loc_822A5AF8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x822a5afc
	goto loc_822A5AFC;
loc_822A5AF8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_822A5AFC:
	// bl 0x82cb0328
	ctx.lr = 0x822A5B00;
	sub_82CB0328(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82299080
	ctx.lr = 0x822A5B10;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a5b28
	if (!ctx.cr6.eq) goto loc_822A5B28;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822a5a08
	if (ctx.cr6.lt) goto loc_822A5A08;
loc_822A5B28:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x822a5df4
	if (ctx.cr6.eq) goto loc_822A5DF4;
loc_822A5B30:
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822a5c24
	if (!ctx.cr6.gt) goto loc_822A5C24;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a5df4
	if (!ctx.cr6.gt) goto loc_822A5DF4;
	// lwz r29,12236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// li r28,0
	ctx.r28.s64 = 0;
loc_822A5B50:
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5b74
	if (ctx.cr6.eq) goto loc_822A5B74;
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82294520
	ctx.lr = 0x822A5B74;
	sub_82294520(ctx, base);
loc_822A5B74:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823c4f48
	ctx.lr = 0x822A5B94;
	sub_823C4F48(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,272(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bne cr6,0x822a5ba8
	if (!ctx.cr6.eq) goto loc_822A5BA8;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_822A5BA8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a5bc4
	if (!ctx.cr6.eq) goto loc_822A5BC4;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A5BC0;
	sub_822960C0(ctx, base);
	// b 0x822a5bcc
	goto loc_822A5BCC;
loc_822A5BC4:
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A5BCC;
	sub_8233E1A0(ctx, base);
loc_822A5BCC:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r6,336(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a5be0
	if (!ctx.cr6.eq) goto loc_822A5BE0;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
loc_822A5BE0:
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// add r5,r11,r20
	ctx.r5.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A5BFC;
	sub_8232D178(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82299080
	ctx.lr = 0x822A5C04;
	sub_82299080(ctx, base);
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a5b50
	if (ctx.cr6.lt) goto loc_822A5B50;
	// lwz r21,252(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r27,260(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r23,308(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// b 0x822a5df4
	goto loc_822A5DF4;
loc_822A5C24:
	// bl 0x822b2170
	ctx.lr = 0x822A5C28;
	sub_822B2170(ctx, base);
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5c48
	if (ctx.cr6.eq) goto loc_822A5C48;
loc_822A5C34:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a5c58
	if (ctx.cr6.eq) goto loc_822A5C58;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5c34
	if (!ctx.cr6.eq) goto loc_822A5C34;
loc_822A5C48:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a5d70
	if (ctx.cr6.eq) goto loc_822A5D70;
loc_822A5C58:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822af180
	ctx.lr = 0x822A5C60;
	sub_822AF180(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// lwz r10,128(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// add r28,r11,r20
	ctx.r28.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r25,72(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a5df4
	if (!ctx.cr6.gt) goto loc_822A5DF4;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r23,12236(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_822A5C90:
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5cb4
	if (ctx.cr6.eq) goto loc_822A5CB4;
	// stw r22,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82294520
	ctx.lr = 0x822A5CB4;
	sub_82294520(ctx, base);
loc_822A5CB4:
	// lwz r3,128(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A5CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r27,272(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bne cr6,0x822a5cf8
	if (!ctx.cr6.eq) goto loc_822A5CF8;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
loc_822A5CF8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a5d14
	if (!ctx.cr6.eq) goto loc_822A5D14;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A5D10;
	sub_822960C0(ctx, base);
	// b 0x822a5d1c
	goto loc_822A5D1C;
loc_822A5D14:
	// addi r4,r26,44
	ctx.r4.s64 = ctx.r26.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A5D1C;
	sub_8233E1A0(ctx, base);
loc_822A5D1C:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r6,288(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a5d30
	if (!ctx.cr6.eq) goto loc_822A5D30;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
loc_822A5D30:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A5D48;
	sub_8232D178(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82299080
	ctx.lr = 0x822A5D50;
	sub_82299080(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a5c90
	if (ctx.cr6.lt) goto loc_822A5C90;
	// lwz r27,260(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r23,308(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// b 0x822a5df4
	goto loc_822A5DF4;
loc_822A5D70:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823c4f48
	ctx.lr = 0x822A5D90;
	sub_823C4F48(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,272(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bne cr6,0x822a5da4
	if (!ctx.cr6.eq) goto loc_822A5DA4;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_822A5DA4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a5dc0
	if (!ctx.cr6.eq) goto loc_822A5DC0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A5DBC;
	sub_822960C0(ctx, base);
	// b 0x822a5dc8
	goto loc_822A5DC8;
loc_822A5DC0:
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A5DC8;
	sub_8233E1A0(ctx, base);
loc_822A5DC8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a5ddc
	if (!ctx.cr6.eq) goto loc_822A5DDC;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_822A5DDC:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A5DEC;
	sub_8232D178(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A5DF4;
	sub_82299080(ctx, base);
loc_822A5DF4:
	// lwz r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x822A5E04;
	sub_822B2F88(ctx, base);
	// lwz r24,204(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r26,12236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x822a5884
	if (!ctx.cr6.eq) goto loc_822A5884;
loc_822A5E18:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r25,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r25.u32);
	// stw r25,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r25,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r25.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r25,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r25.u32);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A5E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5f34
	if (ctx.cr6.eq) goto loc_822A5F34;
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_822A5E64:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822a5ea8
	if (ctx.cr6.lt) goto loc_822A5EA8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822a5ea8
	if (!ctx.cr6.lt) goto loc_822A5EA8;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x822a5e94
	if (!ctx.cr6.eq) goto loc_822A5E94;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_822A5E94:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a5ea0
	if (!ctx.cr6.lt) goto loc_822A5EA0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_822A5EA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x822a5e64
	goto loc_822A5E64;
loc_822A5EA8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r11,-21688
	ctx.r29.s64 = ctx.r11.s64 + -21688;
loc_822A5EB4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822a5f34
	if (ctx.cr6.lt) goto loc_822A5F34;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822a5f34
	if (!ctx.cr6.lt) goto loc_822A5F34;
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a5ee0
	if (ctx.cr6.eq) goto loc_822A5EE0;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822a5ee4
	goto loc_822A5EE4;
loc_822A5EE0:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_822A5EE4:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8232d4c0
	ctx.lr = 0x822A5EF4;
	sub_8232D4C0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5f08
	if (ctx.cr6.eq) goto loc_822A5F08;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a5f0c
	goto loc_822A5F0C;
loc_822A5F08:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_822A5F0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A5F1C;
	sub_8232D178(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82299080
	ctx.lr = 0x822A5F24;
	sub_82299080(ctx, base);
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822a5eb4
	goto loc_822A5EB4;
loc_822A5F34:
	// lwz r3,428(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// bl 0x82294a58
	ctx.lr = 0x822A5F3C;
	sub_82294A58(ctx, base);
	// stw r25,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r25.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r25,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r25.u32);
	// bl 0x822940a8
	ctx.lr = 0x822A5F4C;
	sub_822940A8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82299080
	ctx.lr = 0x822A5F54;
	sub_82299080(ctx, base);
	// b 0x822a5f70
	goto loc_822A5F70;
loc_822A5F58:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-21672
	ctx.r5.s64 = ctx.r11.s64 + -21672;
	// li r4,768
	ctx.r4.s64 = 768;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d170
	ctx.lr = 0x822A5F70;
	sub_8232D170(ctx, base);
loc_822A5F70:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82295e20
	ctx.lr = 0x822A5F78;
	sub_82295E20(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82295e20
	ctx.lr = 0x822A5F80;
	sub_82295E20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A5F8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21600
	ctx.r4.s64 = ctx.r11.s64 + -21600;
	// bl 0x82333168
	ctx.lr = 0x822A5F9C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a6498
	if (ctx.cr6.eq) goto loc_822A6498;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,7952
	ctx.r4.s64 = ctx.r1.s64 + 7952;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823332d8
	ctx.lr = 0x822A5FB8;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a648c
	if (ctx.cr6.eq) goto loc_822A648C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,7952
	ctx.r4.s64 = ctx.r1.s64 + 7952;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b0470
	ctx.lr = 0x822A5FD0;
	sub_822B0470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a648c
	if (ctx.cr6.eq) goto loc_822A648C;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// addi r5,r1,7952
	ctx.r5.s64 = ctx.r1.s64 + 7952;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,124(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// addi r4,r9,-21592
	ctx.r4.s64 = ctx.r9.s64 + -21592;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r28,-4(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A600C;
	sub_8232D178(ctx, base);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822a648c
	if (!ctx.cr6.gt) goto loc_822A648C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r27,r11,-21492
	ctx.r27.s64 = ctx.r11.s64 + -21492;
	// addi r26,r10,11272
	ctx.r26.s64 = ctx.r10.s64 + 11272;
loc_822A602C:
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a60a8
	if (!ctx.cr6.lt) goto loc_822A60A8;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a60a8
	if (ctx.cr6.eq) goto loc_822A60A8;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a60a8
	if (!ctx.cr6.eq) goto loc_822A60A8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a60a8
	if (ctx.cr6.eq) goto loc_822A60A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8229bd90
	ctx.lr = 0x822A6078;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a608c
	if (ctx.cr6.eq) goto loc_822A608C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a6090
	goto loc_822A6090;
loc_822A608C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_822A6090:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12236);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A60A0;
	sub_8232D178(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82299080
	ctx.lr = 0x822A60A8;
	sub_82299080(ctx, base);
loc_822A60A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822a602c
	if (ctx.cr6.lt) goto loc_822A602C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A60C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r3,r3,58,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8239dac8
	ctx.lr = 0x822A60D4;
	sub_8239DAC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A60E0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-21336
	ctx.r4.s64 = ctx.r11.s64 + -21336;
	// bl 0x82333168
	ctx.lr = 0x822A60EC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a63ec
	if (!ctx.cr6.eq) goto loc_822A63EC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21308
	ctx.r4.s64 = ctx.r11.s64 + -21308;
	// bl 0x82333168
	ctx.lr = 0x822A6104;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a63ec
	if (!ctx.cr6.eq) goto loc_822A63EC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21240
	ctx.r4.s64 = ctx.r11.s64 + -21240;
	// bl 0x82333168
	ctx.lr = 0x822A611C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a613c
	if (ctx.cr6.eq) goto loc_822A613C;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,25064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25064, ctx.r11.u32);
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A613C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21220
	ctx.r4.s64 = ctx.r11.s64 + -21220;
	// bl 0x82333168
	ctx.lr = 0x822A614C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a626c
	if (ctx.cr6.eq) goto loc_822A626C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823335a8
	ctx.lr = 0x822A6164;
	sub_823335A8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6178
	if (ctx.cr6.eq) goto loc_822A6178;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// b 0x822a6180
	goto loc_822A6180;
loc_822A6178:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_822A6180:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8233e028
	ctx.lr = 0x822A6194;
	sub_8233E028(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,363
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 363, ctx.xer);
	// bne cr6,0x822a620c
	if (!ctx.cr6.eq) goto loc_822A620C;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a6220
	if (!ctx.cr6.eq) goto loc_822A6220;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r8,r11,-15944
	ctx.r8.s64 = ctx.r11.s64 + -15944;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a6258
	if (!ctx.cr6.gt) goto loc_822A6258;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rldicr r7,r11,44,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 44) & 0xFFFFFFFFFFFFFFFF;
loc_822A61D0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a61ec
	if (ctx.cr6.eq) goto loc_822A61EC;
	// ld r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// std r5,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r5.u64);
loc_822A61EC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x822a61d0
	if (!ctx.cr0.eq) goto loc_822A61D0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A6200;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A620C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a6220
	if (!ctx.cr6.eq) goto loc_822A6220;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a6258
	if (ctx.cr6.eq) goto loc_822A6258;
loc_822A6220:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r12,1
	ctx.r12.s64 = 1;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,-15944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15944);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// lwz r11,28904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28904);
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// ld r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4);
	// or r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 | ctx.r12.u64;
	// std r5,4(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4, ctx.r5.u64);
	// bl 0x822ac058
	ctx.lr = 0x822A6258;
	sub_822AC058(ctx, base);
loc_822A6258:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A6260;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A626C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21200
	ctx.r4.s64 = ctx.r11.s64 + -21200;
	// bl 0x82333168
	ctx.lr = 0x822A627C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a63c8
	if (ctx.cr6.eq) goto loc_822A63C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823335a8
	ctx.lr = 0x822A6294;
	sub_823335A8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a62a8
	if (ctx.cr6.eq) goto loc_822A62A8;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// b 0x822a62b0
	goto loc_822A62B0;
loc_822A62A8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_822A62B0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8233e028
	ctx.lr = 0x822A62C4;
	sub_8233E028(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,363
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 363, ctx.xer);
	// bne cr6,0x822a6368
	if (!ctx.cr6.eq) goto loc_822A6368;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a637c
	if (!ctx.cr6.eq) goto loc_822A637C;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r8,r11,-15944
	ctx.r8.s64 = ctx.r11.s64 + -15944;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a6328
	if (!ctx.cr6.gt) goto loc_822A6328;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_822A62F8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a631c
	if (ctx.cr6.eq) goto loc_822A631C;
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & ctx.r12.u64;
	// std r6,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r6.u64);
loc_822A631C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822a62f8
	if (!ctx.cr0.eq) goto loc_822A62F8;
loc_822A6328:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r11,28904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28904);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// stw r25,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a63b4
	if (ctx.cr6.eq) goto loc_822A63B4;
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82294520
	ctx.lr = 0x822A6354;
	sub_82294520(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A635C;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A6368:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a637c
	if (!ctx.cr6.eq) goto loc_822A637C;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a63b4
	if (ctx.cr6.eq) goto loc_822A63B4;
loc_822A637C:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r12,-2
	ctx.r12.s64 = -2;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,-15944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15944);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// lwz r11,28904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28904);
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// ld r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4);
	// and r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 & ctx.r12.u64;
	// std r5,4(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4, ctx.r5.u64);
	// bl 0x822ac120
	ctx.lr = 0x822A63B4;
	sub_822AC120(ctx, base);
loc_822A63B4:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x822A63BC;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A63C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21176
	ctx.r4.s64 = ctx.r11.s64 + -21176;
	// bl 0x82333168
	ctx.lr = 0x822A63D8;
	sub_82333168(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A63EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21276
	ctx.r4.s64 = ctx.r11.s64 + -21276;
	// bl 0x82333168
	ctx.lr = 0x822A63FC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a6414
	if (ctx.cr6.eq) goto loc_822A6414;
	// bl 0x822ab5d0
	ctx.lr = 0x822A6408;
	sub_822AB5D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A6414:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21264
	ctx.r4.s64 = ctx.r11.s64 + -21264;
	// bl 0x82333168
	ctx.lr = 0x822A6424;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a645c
	if (ctx.cr6.eq) goto loc_822A645C;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6450
	if (ctx.cr6.eq) goto loc_822A6450;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822a6450
	if (!ctx.cr6.eq) goto loc_822A6450;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822A6450:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A645C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21252
	ctx.r4.s64 = ctx.r11.s64 + -21252;
	// bl 0x82333168
	ctx.lr = 0x822A646C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a6498
	if (ctx.cr6.eq) goto loc_822A6498;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a648c
	if (ctx.cr6.eq) goto loc_822A648C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823eda20
	ctx.lr = 0x822A648C;
	sub_823EDA20(ctx, base);
loc_822A648C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A6498:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,12208
	ctx.r1.s64 = ctx.r1.s64 + 12208;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A64A4"))) PPC_WEAK_FUNC(sub_822A64A4);
PPC_FUNC_IMPL(__imp__sub_822A64A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A64A8"))) PPC_WEAK_FUNC(sub_822A64A8);
PPC_FUNC_IMPL(__imp__sub_822A64A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x822b4260
	ctx.lr = 0x822A64C4;
	sub_822B4260(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
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

__attribute__((alias("__imp__sub_822A64E4"))) PPC_WEAK_FUNC(sub_822A64E4);
PPC_FUNC_IMPL(__imp__sub_822A64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A64E8"))) PPC_WEAK_FUNC(sub_822A64E8);
PPC_FUNC_IMPL(__imp__sub_822A64E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x822A6504;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822add60
	ctx.lr = 0x822A6518;
	sub_822ADD60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A652C"))) PPC_WEAK_FUNC(sub_822A652C);
PPC_FUNC_IMPL(__imp__sub_822A652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A6530"))) PPC_WEAK_FUNC(sub_822A6530);
PPC_FUNC_IMPL(__imp__sub_822A6530) {
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

__attribute__((alias("__imp__sub_822A6550"))) PPC_WEAK_FUNC(sub_822A6550);
PPC_FUNC_IMPL(__imp__sub_822A6550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x822A656C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822940a8
	ctx.lr = 0x822A6580;
	sub_822940A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A6594"))) PPC_WEAK_FUNC(sub_822A6594);
PPC_FUNC_IMPL(__imp__sub_822A6594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A6598"))) PPC_WEAK_FUNC(sub_822A6598);
PPC_FUNC_IMPL(__imp__sub_822A6598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x822A65B4;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822add60
	ctx.lr = 0x822A65C8;
	sub_822ADD60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A65DC"))) PPC_WEAK_FUNC(sub_822A65DC);
PPC_FUNC_IMPL(__imp__sub_822A65DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A65E0"))) PPC_WEAK_FUNC(sub_822A65E0);
PPC_FUNC_IMPL(__imp__sub_822A65E0) {
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
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8352(r1)
	ea = -8352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,25060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a667c
	if (!ctx.cr6.eq) goto loc_822A667C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,8400
	ctx.r10.s64 = ctx.r1.s64 + 8400;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82cb2478
	ctx.lr = 0x822A6644;
	sub_82CB2478(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// addi r4,r9,-20880
	ctx.r4.s64 = ctx.r9.s64 + -20880;
	// addi r3,r8,25392
	ctx.r3.s64 = ctx.r8.s64 + 25392;
	// bl 0x823329d8
	ctx.lr = 0x822A6658;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822a667c
	if (ctx.cr6.eq) goto loc_822A667C;
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a667c
	if (ctx.cr6.eq) goto loc_822A667C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,14812
	ctx.r3.s64 = ctx.r11.s64 + 14812;
	// bl 0x82332848
	ctx.lr = 0x822A667C;
	sub_82332848(ctx, base);
loc_822A667C:
	// addi r1,r1,8352
	ctx.r1.s64 = ctx.r1.s64 + 8352;
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

__attribute__((alias("__imp__sub_822A6694"))) PPC_WEAK_FUNC(sub_822A6694);
PPC_FUNC_IMPL(__imp__sub_822A6694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A6698"))) PPC_WEAK_FUNC(sub_822A6698);
PPC_FUNC_IMPL(__imp__sub_822A6698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x822A66A0;
	__savegprlr_15(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// addi r26,r11,-21920
	ctx.r26.s64 = ctx.r11.s64 + -21920;
	// beq cr6,0x822a6710
	if (ctx.cr6.eq) goto loc_822A6710;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822a6710
	if (!ctx.cr6.gt) goto loc_822A6710;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_822A66E4:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x822a6710
	if (!ctx.cr6.eq) goto loc_822A6710;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822a6700
	if (!ctx.cr6.eq) goto loc_822A6700;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_822A6700:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822a66e4
	if (ctx.cr6.lt) goto loc_822A66E4;
loc_822A6710:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r23,-31889
	ctx.r23.s64 = -2089877504;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// addi r17,r11,-19580
	ctx.r17.s64 = ctx.r11.s64 + -19580;
	// addi r19,r10,-12824
	ctx.r19.s64 = ctx.r10.s64 + -12824;
	// addi r18,r9,14476
	ctx.r18.s64 = ctx.r9.s64 + 14476;
	// addi r22,r8,11272
	ctx.r22.s64 = ctx.r8.s64 + 11272;
	// beq cr6,0x822a6758
	if (ctx.cr6.eq) goto loc_822A6758;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822b2a20
	ctx.lr = 0x822A6754;
	sub_822B2A20(ctx, base);
	// b 0x822a6a8c
	goto loc_822A6A8C;
loc_822A6758:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a68c4
	if (!ctx.cr6.eq) goto loc_822A68C4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822a677c
	if (!ctx.cr6.eq) goto loc_822A677C;
loc_822A6768:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x822A6770;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_822A677C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a6798
	if (!ctx.cr6.eq) goto loc_822A6798;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A6794;
	sub_822960C0(ctx, base);
	// b 0x822a67a0
	goto loc_822A67A0;
loc_822A6798:
	// addi r4,r25,44
	ctx.r4.s64 = ctx.r25.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A67A0;
	sub_8233E1A0(ctx, base);
loc_822A67A0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a67b4
	if (!ctx.cr6.eq) goto loc_822A67B4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_822A67B4:
	// lwz r3,30976(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A67D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82299080
	ctx.lr = 0x822A67E8;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a6a8c
	if (ctx.cr6.eq) goto loc_822A6A8C;
	// rlwinm r11,r15,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a683c
	if (ctx.cr6.eq) goto loc_822A683C;
	// bl 0x82294680
	ctx.lr = 0x822A6800;
	sub_82294680(ctx, base);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6820
	if (ctx.cr6.eq) goto loc_822A6820;
loc_822A680C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a6830
	if (ctx.cr6.eq) goto loc_822A6830;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a680c
	if (!ctx.cr6.eq) goto loc_822A680C;
loc_822A6820:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a683c
	if (ctx.cr6.eq) goto loc_822A683C;
loc_822A6830:
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6768
	if (!ctx.cr6.eq) goto loc_822A6768;
loc_822A683C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a6858
	if (!ctx.cr6.eq) goto loc_822A6858;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A6854;
	sub_822960C0(ctx, base);
	// b 0x822a6860
	goto loc_822A6860;
loc_822A6858:
	// addi r4,r25,44
	ctx.r4.s64 = ctx.r25.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A6860;
	sub_8233E1A0(ctx, base);
loc_822A6860:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a6874
	if (!ctx.cr6.eq) goto loc_822A6874;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_822A6874:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,-20784
	ctx.r5.s64 = ctx.r11.s64 + -20784;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823338c8
	ctx.lr = 0x822A6894;
	sub_823338C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a68a8
	if (!ctx.cr6.eq) goto loc_822A68A8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_822A68A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82332848
	ctx.lr = 0x822A68B0;
	sub_82332848(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A68B8;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x822A68C0;
	sub_82299080(ctx, base);
	// b 0x822a6a8c
	goto loc_822A6A8C;
loc_822A68C4:
	// lwz r3,30976(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A68EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a6768
	if (ctx.cr6.eq) goto loc_822A6768;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// bl 0x82cb2e40
	ctx.lr = 0x822A6908;
	sub_82CB2E40(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// sth r24,702(r1)
	PPC_STORE_U16(ctx.r1.u32 + 702, ctx.r24.u16);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r29,r11,-20720
	ctx.r29.s64 = ctx.r11.s64 + -20720;
	// addi r28,r10,-20724
	ctx.r28.s64 = ctx.r10.s64 + -20724;
	// addi r30,r9,-19588
	ctx.r30.s64 = ctx.r9.s64 + -19588;
loc_822A6924:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A6930;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822a695c
	if (ctx.cr6.eq) goto loc_822A695C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A6944;
	sub_82CAFEE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x822A6950;
	sub_82CB0EC8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x822a6924
	goto loc_822A6924;
loc_822A695C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A6964;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822a6980
	if (ctx.cr6.eq) goto loc_822A6980;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A6978;
	sub_82CAFEE0(ctx, base);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// b 0x822a6924
	goto loc_822A6924;
loc_822A6980:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A6988;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822a69a4
	if (ctx.cr6.eq) goto loc_822A69A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A699C;
	sub_82CAFEE0(ctx, base);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// b 0x822a6924
	goto loc_822A6924;
loc_822A69A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-26964
	ctx.r30.s64 = ctx.r11.s64 + -26964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A69B4;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a69cc
	if (ctx.cr6.eq) goto loc_822A69CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A69C8;
	sub_82CAFEE0(ctx, base);
	// sth r24,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r24.u16);
loc_822A69CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a6f68
	ctx.lr = 0x822A69DC;
	sub_822A6F68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822a6a7c
	if (!ctx.cr6.eq) goto loc_822A6A7C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a6a34
	if (!ctx.cr6.eq) goto loc_822A6A34;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,-20716
	ctx.r5.s64 = ctx.r11.s64 + -20716;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823338c8
	ctx.lr = 0x822A6A10;
	sub_823338C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a6a24
	if (!ctx.cr6.eq) goto loc_822A6A24;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_822A6A24:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82332848
	ctx.lr = 0x822A6A2C;
	sub_82332848(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x822A6A34;
	sub_82299080(ctx, base);
loc_822A6A34:
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822a6a8c
	if (!ctx.cr6.gt) goto loc_822A6A8C;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_822A6A4C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x822a6a8c
	if (!ctx.cr6.eq) goto loc_822A6A8C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822a6a68
	if (!ctx.cr6.eq) goto loc_822A6A68;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_822A6A68:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822a6a4c
	if (ctx.cr6.lt) goto loc_822A6A4C;
	// b 0x822a6a8c
	goto loc_822A6A8C;
loc_822A6A7C:
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822a6a8c
	if (ctx.cr6.eq) goto loc_822A6A8C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a82b0
	ctx.lr = 0x822A6A8C;
	sub_822A82B0(ctx, base);
loc_822A6A8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r30,r11,-27584
	ctx.r30.s64 = ctx.r11.s64 + -27584;
	// beq cr6,0x822a6b9c
	if (ctx.cr6.eq) goto loc_822A6B9C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A6AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a6b9c
	if (!ctx.cr6.eq) goto loc_822A6B9C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x822a6ad4
	if (!ctx.cr6.eq) goto loc_822A6AD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A6AD0;
	sub_822960C0(ctx, base);
	// b 0x822a6af4
	goto loc_822A6AF4;
loc_822A6AD4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a6aec
	if (!ctx.cr6.eq) goto loc_822A6AEC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A6AE8;
	sub_822960C0(ctx, base);
	// b 0x822a6af4
	goto loc_822A6AF4;
loc_822A6AEC:
	// addi r4,r25,44
	ctx.r4.s64 = ctx.r25.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A6AF4;
	sub_8233E1A0(ctx, base);
loc_822A6AF4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a6b08
	if (!ctx.cr6.eq) goto loc_822A6B08;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_822A6B08:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,-20680
	ctx.r5.s64 = ctx.r11.s64 + -20680;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823338c8
	ctx.lr = 0x822A6B28;
	sub_823338C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a6b3c
	if (!ctx.cr6.eq) goto loc_822A6B3C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_822A6B3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82332848
	ctx.lr = 0x822A6B44;
	sub_82332848(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6b68
	if (ctx.cr6.eq) goto loc_822A6B68;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x822A6B68;
	sub_82294520(ctx, base);
loc_822A6B68:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x822A6B70;
	sub_82294CC8(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6b94
	if (ctx.cr6.eq) goto loc_822A6B94;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294520
	ctx.lr = 0x822A6B94;
	sub_82294520(ctx, base);
loc_822A6B94:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294cc8
	ctx.lr = 0x822A6B9C;
	sub_82294CC8(ctx, base);
loc_822A6B9C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x822a6cb8
	if (!ctx.cr6.eq) goto loc_822A6CB8;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// bne cr6,0x822a6bc4
	if (!ctx.cr6.eq) goto loc_822A6BC4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_822A6BC4:
	// lwz r3,30976(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A6BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a6c54
	if (!ctx.cr6.eq) goto loc_822A6C54;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6c14
	if (ctx.cr6.eq) goto loc_822A6C14;
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294520
	ctx.lr = 0x822A6C14;
	sub_82294520(ctx, base);
loc_822A6C14:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294cc8
	ctx.lr = 0x822A6C1C;
	sub_82294CC8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6c40
	if (ctx.cr6.eq) goto loc_822A6C40;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x822A6C40;
	sub_82294520(ctx, base);
loc_822A6C40:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x822A6C48;
	sub_82294CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_822A6C54:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a6c68
	if (!ctx.cr6.eq) goto loc_822A6C68;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_822A6C68:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a8768
	ctx.lr = 0x822A6C74;
	sub_823A8768(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a8868
	ctx.lr = 0x822A6C88;
	sub_823A8868(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a6cb0
	if (ctx.cr6.eq) goto loc_822A6CB0;
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294520
	ctx.lr = 0x822A6CB0;
	sub_82294520(ctx, base);
loc_822A6CB0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294cc8
	ctx.lr = 0x822A6CB8;
	sub_82294CC8(ctx, base);
loc_822A6CB8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x822a6d9c
	if (ctx.cr6.eq) goto loc_822A6D9C;
	// lwz r11,132(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r9,128(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 128);
	// lwz r8,8(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lwz r6,124(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 124);
	// lwz r5,4(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// xor r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r3,120(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 120);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// xor r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// or r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 | ctx.r4.u64;
	// xor r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a6d9c
	if (ctx.cr6.eq) goto loc_822A6D9C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x822a6d1c
	if (!ctx.cr6.eq) goto loc_822A6D1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A6D18;
	sub_822960C0(ctx, base);
	// b 0x822a6d3c
	goto loc_822A6D3C;
loc_822A6D1C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a6d34
	if (!ctx.cr6.eq) goto loc_822A6D34;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A6D30;
	sub_822960C0(ctx, base);
	// b 0x822a6d3c
	goto loc_822A6D3C;
loc_822A6D34:
	// addi r4,r25,44
	ctx.r4.s64 = ctx.r25.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A6D3C;
	sub_8233E1A0(ctx, base);
loc_822A6D3C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a6d50
	if (!ctx.cr6.eq) goto loc_822A6D50;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_822A6D50:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,-20664
	ctx.r5.s64 = ctx.r11.s64 + -20664;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823338c8
	ctx.lr = 0x822A6D70;
	sub_823338C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a6d84
	if (!ctx.cr6.eq) goto loc_822A6D84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_822A6D84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82332848
	ctx.lr = 0x822A6D8C;
	sub_82332848(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A6D94;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x822A6D9C;
	sub_82299080(ctx, base);
loc_822A6D9C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6dfc
	if (ctx.cr6.eq) goto loc_822A6DFC;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a6e34
	if (ctx.cr6.eq) goto loc_822A6E34;
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6dd8
	if (!ctx.cr6.eq) goto loc_822A6DD8;
	// bl 0x822900a0
	ctx.lr = 0x822A6DD4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_822A6DD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A6DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
loc_822A6DFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a6e34
	if (ctx.cr6.eq) goto loc_822A6E34;
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6e1c
	if (!ctx.cr6.eq) goto loc_822A6E1C;
	// bl 0x822900a0
	ctx.lr = 0x822A6E18;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_822A6E1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A6E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A6E34:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A6E40"))) PPC_WEAK_FUNC(sub_822A6E40);
PPC_FUNC_IMPL(__imp__sub_822A6E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822A6E48;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// beq cr6,0x822a6e78
	if (ctx.cr6.eq) goto loc_822A6E78;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b2a20
	ctx.lr = 0x822A6E74;
	sub_822B2A20(ctx, base);
	// b 0x822a6ebc
	goto loc_822A6EBC;
loc_822A6E78:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82294680
	ctx.lr = 0x822A6E88;
	sub_82294680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822a8460
	ctx.lr = 0x822A6E9C;
	sub_822A8460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e1a0
	ctx.lr = 0x822A6EA8;
	sub_8233E1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x822A6EB4;
	sub_82295908(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822A6EBC;
	sub_82299080(ctx, base);
loc_822A6EBC:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x822a7100
	ctx.lr = 0x822A6ED4;
	sub_822A7100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x822a6ef8
	if (!ctx.cr6.eq) goto loc_822A6EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822A6EF8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x82cb0328
	ctx.lr = 0x822A6F04;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a6f2c
	if (ctx.cr6.eq) goto loc_822A6F2C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x822a6f1c
	if (!ctx.cr6.eq) goto loc_822A6F1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_822A6F1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x822b0470
	ctx.lr = 0x822A6F28;
	sub_822B0470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822A6F2C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6f50
	if (ctx.cr6.eq) goto loc_822A6F50;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x822A6F50;
	sub_82294520(ctx, base);
loc_822A6F50:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x822A6F58;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A6F64"))) PPC_WEAK_FUNC(sub_822A6F64);
PPC_FUNC_IMPL(__imp__sub_822A6F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A6F68"))) PPC_WEAK_FUNC(sub_822A6F68);
PPC_FUNC_IMPL(__imp__sub_822A6F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822A6F70;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x822a6fb0
	if (ctx.cr6.eq) goto loc_822A6FB0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b2a20
	ctx.lr = 0x822A6F98;
	sub_822B2A20(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a6fb0
	if (ctx.cr6.eq) goto loc_822A6FB0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a6ff4
	if (!ctx.cr6.eq) goto loc_822A6FF4;
loc_822A6FB0:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82294680
	ctx.lr = 0x822A6FC0;
	sub_82294680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x822a8460
	ctx.lr = 0x822A6FD4;
	sub_822A8460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e1a0
	ctx.lr = 0x822A6FE0;
	sub_8233E1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x822A6FEC;
	sub_82295908(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822A6FF4;
	sub_82299080(ctx, base);
loc_822A6FF4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x822a7100
	ctx.lr = 0x822A700C;
	sub_822A7100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a702c
	if (!ctx.cr6.eq) goto loc_822A702C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822A702C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x82cb0328
	ctx.lr = 0x822A7038;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a70c4
	if (ctx.cr6.eq) goto loc_822A70C4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a7054
	if (!ctx.cr6.eq) goto loc_822A7054;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_822A7054:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x822b0470
	ctx.lr = 0x822A7060;
	sub_822B0470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a70c4
	if (!ctx.cr6.eq) goto loc_822A70C4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a7080
	if (!ctx.cr6.eq) goto loc_822A7080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_822A7080:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822A7094;
	sub_8233E028(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,156
	ctx.r3.s64 = 156;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x822b2788
	ctx.lr = 0x822A70AC;
	sub_822B2788(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a70c0
	if (ctx.cr6.eq) goto loc_822A70C0;
	// bl 0x822c00b8
	ctx.lr = 0x822A70B8;
	sub_822C00B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822a70c4
	goto loc_822A70C4;
loc_822A70C0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822A70C4:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a70e8
	if (ctx.cr6.eq) goto loc_822A70E8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x822A70E8;
	sub_82294520(ctx, base);
loc_822A70E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x822A70F0;
	sub_82294CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A70FC"))) PPC_WEAK_FUNC(sub_822A70FC);
PPC_FUNC_IMPL(__imp__sub_822A70FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A7100"))) PPC_WEAK_FUNC(sub_822A7100);
PPC_FUNC_IMPL(__imp__sub_822A7100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x822A7108;
	__savegprlr_16(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r31,r11,-20632
	ctx.r31.s64 = ctx.r11.s64 + -20632;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x822A712C;
	sub_82CB0EC8(ctx, base);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r21,r11,11272
	ctx.r21.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a714c
	if (ctx.cr6.eq) goto loc_822A714C;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a7150
	goto loc_822A7150;
loc_822A714C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A7150:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb21c0
	ctx.lr = 0x822A7158;
	sub_82CB21C0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r20,0
	ctx.r20.s64 = 0;
	// ori r17,r10,65535
	ctx.r17.u64 = ctx.r10.u64 | 65535;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r19,r11,-26964
	ctx.r19.s64 = ctx.r11.s64 + -26964;
	// bne cr6,0x822a7180
	if (!ctx.cr6.eq) goto loc_822A7180;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r27,r11,-3728
	ctx.r27.s64 = ctx.r11.s64 + -3728;
	// b 0x822a7260
	goto loc_822A7260;
loc_822A7180:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,-20608
	ctx.r31.s64 = ctx.r11.s64 + -20608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x822A7190;
	sub_82CB0EC8(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a71a8
	if (ctx.cr6.eq) goto loc_822A71A8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a71ac
	goto loc_822A71AC;
loc_822A71A8:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822A71AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb21c0
	ctx.lr = 0x822A71B8;
	sub_82CB21C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822a71cc
	if (!ctx.cr6.eq) goto loc_822A71CC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r27,r11,6512
	ctx.r27.s64 = ctx.r11.s64 + 6512;
	// b 0x822a7260
	goto loc_822A7260;
loc_822A71CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,-20588
	ctx.r31.s64 = ctx.r11.s64 + -20588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x822A71DC;
	sub_82CB0EC8(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a71f4
	if (ctx.cr6.eq) goto loc_822A71F4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a71f8
	goto loc_822A71F8;
loc_822A71F4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822A71F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb21c0
	ctx.lr = 0x822A7204;
	sub_82CB21C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822a7218
	if (!ctx.cr6.eq) goto loc_822A7218;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r27,r11,4464
	ctx.r27.s64 = ctx.r11.s64 + 4464;
	// b 0x822a7260
	goto loc_822A7260;
loc_822A7218:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,-20564
	ctx.r31.s64 = ctx.r11.s64 + -20564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x822A7228;
	sub_82CB0EC8(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7240
	if (ctx.cr6.eq) goto loc_822A7240;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a7244
	goto loc_822A7244;
loc_822A7240:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822A7244:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb21c0
	ctx.lr = 0x822A7250;
	sub_82CB21C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822a752c
	if (!ctx.cr6.eq) goto loc_822A752C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r27,r11,-1680
	ctx.r27.s64 = ctx.r11.s64 + -1680;
loc_822A7260:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7274
	if (ctx.cr6.eq) goto loc_822A7274;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a7278
	goto loc_822A7278;
loc_822A7274:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A7278:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A7280;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a752c
	if (ctx.cr6.eq) goto loc_822A752C;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a729c
	if (ctx.cr6.eq) goto loc_822A729C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a72a0
	goto loc_822A72A0;
loc_822A729C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822A72A0:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a752c
	if (ctx.cr6.eq) goto loc_822A752C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a72c0
	if (ctx.cr6.eq) goto loc_822A72C0;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a72c4
	goto loc_822A72C4;
loc_822A72C0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A72C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-20720
	ctx.r4.s64 = ctx.r11.s64 + -20720;
	// bl 0x82cafee0
	ctx.lr = 0x822A72D0;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a7304
	if (ctx.cr6.eq) goto loc_822A7304;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a72f4
	if (ctx.cr6.eq) goto loc_822A72F4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x822a7308
	goto loc_822A7308;
loc_822A72F4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x822a7308
	goto loc_822A7308;
loc_822A7304:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822A7308:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822b1c78
	ctx.lr = 0x822A731C;
	sub_822B1C78(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822b1d38
	ctx.lr = 0x822A7334;
	sub_822B1D38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// beq cr6,0x822a73a8
	if (ctx.cr6.eq) goto loc_822A73A8;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822b1c78
	ctx.lr = 0x822A7368;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82295908
	ctx.lr = 0x822A7374;
	sub_82295908(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x822A737C;
	sub_82299080(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822b1b70
	ctx.lr = 0x822A738C;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295908
	ctx.lr = 0x822A7398;
	sub_82295908(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x822A73A0;
	sub_82299080(ctx, base);
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_822A73A8:
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// bne cr6,0x822a73c4
	if (!ctx.cr6.eq) goto loc_822A73C4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_822A73C4:
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x822a73dc
	if (!ctx.cr6.eq) goto loc_822A73DC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822A73DC:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r3,28876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28876);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A73FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a7508
	if (!ctx.cr6.eq) goto loc_822A7508;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x822a74e4
	if (!ctx.cr6.eq) goto loc_822A74E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822a7418
	if (!ctx.cr6.eq) goto loc_822A7418;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_822A7418:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822a7424
	if (!ctx.cr6.eq) goto loc_822A7424;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_822A7424:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7438
	if (ctx.cr6.eq) goto loc_822A7438;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a743c
	goto loc_822A743C;
loc_822A7438:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_822A743C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-20540
	ctx.r5.s64 = ctx.r10.s64 + -20540;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823338c8
	ctx.lr = 0x822A7464;
	sub_823338C8(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a7478
	if (!ctx.cr6.eq) goto loc_822A7478;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822A7478:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8232e868
	ctx.lr = 0x822A748C;
	sub_8232E868(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x822A7494;
	sub_82299080(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a74a8
	if (!ctx.cr6.eq) goto loc_822A74A8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_822A74A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,-20508
	ctx.r4.s64 = ctx.r11.s64 + -20508;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8232e868
	ctx.lr = 0x822A74BC;
	sub_8232E868(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a74d0
	if (!ctx.cr6.eq) goto loc_822A74D0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A74D0:
	// bl 0x82332848
	ctx.lr = 0x822A74D4;
	sub_82332848(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x822A74DC;
	sub_82299080(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x822A74E4;
	sub_82299080(ctx, base);
loc_822A74E4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x822A74EC;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A74F4;
	sub_82299080(ctx, base);
loc_822A74F4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x822A74FC;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_822A7508:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82295908
	ctx.lr = 0x822A7514;
	sub_82295908(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x822A751C;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A7524;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x822A752C;
	sub_82299080(ctx, base);
loc_822A752C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7540
	if (ctx.cr6.eq) goto loc_822A7540;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a7544
	goto loc_822A7544;
loc_822A7540:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A7544:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-20492
	ctx.r30.s64 = ctx.r11.s64 + -20492;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A7554;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a75d0
	if (ctx.cr6.eq) goto loc_822A75D0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7570
	if (ctx.cr6.eq) goto loc_822A7570;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a7574
	goto loc_822A7574;
loc_822A7570:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822A7574:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x822a75d0
	if (ctx.cr6.eq) goto loc_822A75D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822b1d38
	ctx.lr = 0x822A759C;
	sub_822B1D38(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x822a75d0
	if (!ctx.cr6.gt) goto loc_822A75D0;
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822b1c78
	ctx.lr = 0x822A75BC;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82295908
	ctx.lr = 0x822A75C8;
	sub_82295908(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x822A75D0;
	sub_82299080(ctx, base);
loc_822A75D0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// addi r23,r11,14476
	ctx.r23.s64 = ctx.r11.s64 + 14476;
loc_822A75E4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a75f8
	if (ctx.cr6.eq) goto loc_822A75F8;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a75fc
	goto loc_822A75FC;
loc_822A75F8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_822A75FC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82cafee0
	ctx.lr = 0x822A7604;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a7870
	if (ctx.cr6.eq) goto loc_822A7870;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7620
	if (ctx.cr6.eq) goto loc_822A7620;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x822a7624
	goto loc_822A7624;
loc_822A7620:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822A7624:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r28,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x822a7870
	if (ctx.cr6.eq) goto loc_822A7870;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822b1b70
	ctx.lr = 0x822A7644;
	sub_822B1B70(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// beq cr6,0x822a7674
	if (ctx.cr6.eq) goto loc_822A7674;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a7664
	if (!ctx.cr6.eq) goto loc_822A7664;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822A7664:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x822a6f68
	ctx.lr = 0x822A7670;
	sub_822A6F68(ctx, base);
	// b 0x822a7720
	goto loc_822A7720;
loc_822A7674:
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822a7688
	if (!ctx.cr6.eq) goto loc_822A7688;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_822A7688:
	// lwz r3,25328(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25328);
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a76ac
	if (!ctx.cr6.eq) goto loc_822A76AC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c0b70
	ctx.lr = 0x822A76A0;
	sub_822C0B70(ctx, base);
	// stw r3,25328(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25328, ctx.r3.u32);
	// bl 0x822c0c20
	ctx.lr = 0x822A76A8;
	sub_822C0C20(ctx, base);
	// lwz r3,25328(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25328);
loc_822A76AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0678
	ctx.lr = 0x822A76BC;
	sub_822A0678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a7720
	if (!ctx.cr6.eq) goto loc_822A7720;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a76d8
	if (ctx.cr6.eq) goto loc_822A76D8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822A76D8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bne cr6,0x822a76e8
	if (!ctx.cr6.eq) goto loc_822A76E8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_822A76E8:
	// lwz r3,25216(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a7708
	if (!ctx.cr6.eq) goto loc_822A7708;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822aace8
	ctx.lr = 0x822A76FC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r22)
	PPC_STORE_U32(ctx.r22.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x822A7704;
	sub_822AADA8(ctx, base);
	// lwz r3,25216(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25216);
loc_822A7708:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a0678
	ctx.lr = 0x822A7718;
	sub_822A0678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a74f4
	if (ctx.cr6.eq) goto loc_822A74F4;
loc_822A7720:
	// stw r3,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r3.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b1c78
	ctx.lr = 0x822A7738;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82295908
	ctx.lr = 0x822A7744;
	sub_82295908(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a77a0
	if (ctx.cr6.eq) goto loc_822A77A0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a77dc
	if (ctx.cr6.eq) goto loc_822A77DC;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a777c
	if (!ctx.cr6.eq) goto loc_822A777C;
	// bl 0x822900a0
	ctx.lr = 0x822A7778;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_822A777C:
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
	ctx.lr = 0x822A7798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// b 0x822a77a4
	goto loc_822A77A4;
loc_822A77A0:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_822A77A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a77dc
	if (ctx.cr6.eq) goto loc_822A77DC;
	// lwz r11,28888(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a77c4
	if (!ctx.cr6.eq) goto loc_822A77C4;
	// bl 0x822900a0
	ctx.lr = 0x822A77C0;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_822A77C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A77DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A77DC:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// beq cr6,0x822a7830
	if (ctx.cr6.eq) goto loc_822A7830;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822a7860
	if (ctx.cr6.eq) goto loc_822A7860;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a7810
	if (!ctx.cr6.eq) goto loc_822A7810;
	// bl 0x822900a0
	ctx.lr = 0x822A780C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_822A7810:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A782C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_822A7830:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822a7860
	if (ctx.cr6.eq) goto loc_822A7860;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a784c
	if (!ctx.cr6.eq) goto loc_822A784C;
	// bl 0x822900a0
	ctx.lr = 0x822A7848;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_822A784C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A7860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A7860:
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// b 0x822a75e4
	goto loc_822A75E4;
loc_822A7870:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A787C"))) PPC_WEAK_FUNC(sub_822A787C);
PPC_FUNC_IMPL(__imp__sub_822A787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A7880"))) PPC_WEAK_FUNC(sub_822A7880);
PPC_FUNC_IMPL(__imp__sub_822A7880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x822A7888;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A78B0;
	sub_822960C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x822a7100
	ctx.lr = 0x822A78C8;
	sub_822A7100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r24,r11,11272
	ctx.r24.s64 = ctx.r11.s64 + 11272;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a78e4
	if (!ctx.cr6.eq) goto loc_822A78E4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_822A78E4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822A78F8;
	sub_8233E028(ctx, base);
	// lwz r29,252(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a7ab8
	if (ctx.cr6.eq) goto loc_822A7AB8;
	// ld r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a7968
	if (ctx.cr6.eq) goto loc_822A7968;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7968
	if (ctx.cr6.eq) goto loc_822A7968;
	// lwz r11,24976(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a793c
	if (ctx.cr6.eq) goto loc_822A793C;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// b 0x822a7944
	goto loc_822A7944;
loc_822A793C:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_822A7944:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a0408
	ctx.lr = 0x822A795C;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a7acc
	if (!ctx.cr6.eq) goto loc_822A7ACC;
loc_822A7968:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r11,25084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25084);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25084, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a7984
	if (!ctx.cr6.eq) goto loc_822A7984;
	// bl 0x823648a0
	ctx.lr = 0x822A7984;
	sub_823648A0(ctx, base);
loc_822A7984:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822A7988:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a799c
	if (ctx.cr6.eq) goto loc_822A799C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x822a7988
	if (!ctx.cr6.eq) goto loc_822A7988;
loc_822A799C:
	// rlwinm r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a7a74
	if (!ctx.cr6.eq) goto loc_822A7A74;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ori r5,r28,40
	ctx.r5.u64 = ctx.r28.u64 | 40;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6698
	ctx.lr = 0x822A79C0;
	sub_822A6698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a7a74
	if (ctx.cr6.eq) goto loc_822A7A74;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822a7a4c
	if (ctx.cr6.eq) goto loc_822A7A4C;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a7a4c
	if (!ctx.cr6.eq) goto loc_822A7A4C;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x822A79FC;
	sub_8229BCD0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a7a10
	if (!ctx.cr6.eq) goto loc_822A7A10;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_822A7A10:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x822A7A2C;
	sub_822A7880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x822A7A38;
	sub_82299080(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822a7a74
	if (!ctx.cr6.eq) goto loc_822A7A74;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a7a74
	if (ctx.cr6.eq) goto loc_822A7A74;
loc_822A7A4C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823aba10
	ctx.lr = 0x822A7A68;
	sub_823ABA10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a7aac
	if (!ctx.cr6.eq) goto loc_822A7AAC;
loc_822A7A74:
	// lwz r11,24976(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7a88
	if (ctx.cr6.eq) goto loc_822A7A88;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// b 0x822a7a90
	goto loc_822A7A90;
loc_822A7A88:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_822A7A90:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a0408
	ctx.lr = 0x822A7AA8;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822A7AAC:
	// bl 0x822a8060
	ctx.lr = 0x822A7AB0;
	sub_822A8060(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a7acc
	if (!ctx.cr6.eq) goto loc_822A7ACC;
loc_822A7AB8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x822A7AC0;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_822A7ACC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x822A7AD4;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7AE0"))) PPC_WEAK_FUNC(sub_822A7AE0);
PPC_FUNC_IMPL(__imp__sub_822A7AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A7AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r11,8
	ctx.r6.u64 = ctx.r11.u64 | 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b0540
	ctx.lr = 0x822A7B0C;
	sub_822B0540(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822a7be8
	if (ctx.cr6.eq) goto loc_822A7BE8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822A7B1C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822a7be8
	if (ctx.cr6.eq) goto loc_822A7BE8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a7b1c
	if (!ctx.cr6.eq) goto loc_822A7B1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8229bd90
	ctx.lr = 0x822A7B40;
	sub_8229BD90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7b5c
	if (ctx.cr6.eq) goto loc_822A7B5C;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a7b60
	goto loc_822A7B60;
loc_822A7B5C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822A7B60:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8229bd90
	ctx.lr = 0x822A7B70;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7b84
	if (ctx.cr6.eq) goto loc_822A7B84;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a7b88
	goto loc_822A7B88;
loc_822A7B84:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822A7B88:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-20488
	ctx.r5.s64 = ctx.r10.s64 + -20488;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823338c8
	ctx.lr = 0x822A7BB0;
	sub_823338C8(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a7bc4
	if (!ctx.cr6.eq) goto loc_822A7BC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822A7BC4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82332848
	ctx.lr = 0x822A7BD0;
	sub_82332848(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x822A7BD8;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x822A7BE0;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A7BE8;
	sub_82299080(ctx, base);
loc_822A7BE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7BF4"))) PPC_WEAK_FUNC(sub_822A7BF4);
PPC_FUNC_IMPL(__imp__sub_822A7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A7BF8"))) PPC_WEAK_FUNC(sub_822A7BF8);
PPC_FUNC_IMPL(__imp__sub_822A7BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A7C00;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7c7c
	if (ctx.cr6.eq) goto loc_822A7C7C;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// lwz r11,25084(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25084);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25084, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a7c38
	if (!ctx.cr6.eq) goto loc_822A7C38;
	// bl 0x823648a0
	ctx.lr = 0x822A7C38;
	sub_823648A0(ctx, base);
loc_822A7C38:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x822A7C40;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r30,8
	ctx.r5.u64 = ctx.r30.u64 | 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfd f0,-3832(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -3832);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmul f31,f12,f0
	ctx.f31.f64 = ctx.f12.f64 * ctx.f0.f64;
	// bl 0x822a6698
	ctx.lr = 0x822A7C6C;
	sub_822A6698(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a7c8c
	if (!ctx.cr6.eq) goto loc_822A7C8C;
	// bl 0x822a8060
	ctx.lr = 0x822A7C7C;
	sub_822A8060(ctx, base);
loc_822A7C7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_822A7C8C:
	// rlwinm r30,r30,0,27,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822a7ca4
	if (!ctx.cr6.eq) goto loc_822A7CA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab6e0
	ctx.lr = 0x822A7CA4;
	sub_823AB6E0(ctx, base);
loc_822A7CA4:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x822a8060
	ctx.lr = 0x822A7CAC;
	sub_822A8060(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a7cf0
	if (ctx.cr6.eq) goto loc_822A7CF0;
	// lwz r11,25084(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a7ce8
	if (!ctx.cr6.eq) goto loc_822A7CE8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822a7ce8
	if (!ctx.cr6.eq) goto loc_822A7CE8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x822A7CD0;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,-3832(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -3832);
	// fmsub f11,f12,f0,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f31.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,88(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_822A7CE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a82b0
	ctx.lr = 0x822A7CF0;
	sub_822A82B0(ctx, base);
loc_822A7CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b05c8
	ctx.lr = 0x822A7CF8;
	sub_822B05C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7D04"))) PPC_WEAK_FUNC(sub_822A7D04);
PPC_FUNC_IMPL(__imp__sub_822A7D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A7D08"))) PPC_WEAK_FUNC(sub_822A7D08);
PPC_FUNC_IMPL(__imp__sub_822A7D08) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aa468
	sub_823AA468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7D0C"))) PPC_WEAK_FUNC(sub_822A7D0C);
PPC_FUNC_IMPL(__imp__sub_822A7D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A7D10"))) PPC_WEAK_FUNC(sub_822A7D10);
PPC_FUNC_IMPL(__imp__sub_822A7D10) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822A7D18;
	__savegprlr_27(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// addi r28,r11,-21920
	ctx.r28.s64 = ctx.r11.s64 + -21920;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,25092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25092);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7dc8
	if (ctx.cr6.eq) goto loc_822A7DC8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a7dc8
	if (!ctx.cr6.gt) goto loc_822A7DC8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_822A7D4C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r7,188(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822a7db8
	if (!ctx.cr6.gt) goto loc_822A7DB8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_822A7D68:
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a7d98
	if (ctx.cr6.eq) goto loc_822A7D98;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// rldicr r12,r12,58,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x822a7d98
	if (!ctx.cr6.eq) goto loc_822A7D98;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
loc_822A7D98:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// lwz r11,188(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a7d68
	if (ctx.cr6.lt) goto loc_822A7D68;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_822A7DB8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822a7d4c
	if (ctx.cr6.lt) goto loc_822A7D4C;
loc_822A7DC8:
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r11,25092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25092, ctx.r11.u32);
	// lwz r11,25096(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7e88
	if (ctx.cr6.eq) goto loc_822A7E88;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a7e88
	if (!ctx.cr6.gt) goto loc_822A7E88;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822A7DF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,200(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 200);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a7e78
	if (!ctx.cr6.gt) goto loc_822A7E78;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_822A7E10:
	// lwz r11,196(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 196);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7e60
	if (ctx.cr6.eq) goto loc_822A7E60;
	// lwz r10,76(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a7e60
	if (ctx.cr6.eq) goto loc_822A7E60;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a7e54
	if (ctx.cr6.eq) goto loc_822A7E54;
	// lwz r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// mulli r10,r27,108
	ctx.r10.s64 = ctx.r27.s64 * 108;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
loc_822A7E54:
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r5,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r5.u32);
loc_822A7E60:
	// lwz r11,200(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 200);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,108
	ctx.r7.s64 = ctx.r7.s64 + 108;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a7e10
	if (ctx.cr6.lt) goto loc_822A7E10;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_822A7E78:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822a7df4
	if (ctx.cr6.lt) goto loc_822A7DF4;
loc_822A7E88:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r11,25096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25096, ctx.r11.u32);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7E94"))) PPC_WEAK_FUNC(sub_822A7E94);
PPC_FUNC_IMPL(__imp__sub_822A7E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A7E98"))) PPC_WEAK_FUNC(sub_822A7E98);
PPC_FUNC_IMPL(__imp__sub_822A7E98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r11,25084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25084);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25084, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x823648a0
	sub_823648A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7EB4"))) PPC_WEAK_FUNC(sub_822A7EB4);
PPC_FUNC_IMPL(__imp__sub_822A7EB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A7EB8"))) PPC_WEAK_FUNC(sub_822A7EB8);
PPC_FUNC_IMPL(__imp__sub_822A7EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822A7EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r30,28(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a8034
	if (ctx.cr6.eq) goto loc_822A8034;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a8034
	if (ctx.cr6.eq) goto loc_822A8034;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r11,-19580
	ctx.r27.s64 = ctx.r11.s64 + -19580;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822a7f00
	if (ctx.cr6.eq) goto loc_822A7F00;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x822a7f1c
	goto loc_822A7F1C;
loc_822A7F00:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x822A7F18;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_822A7F1C:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x822a7f38
	if (ctx.cr6.eq) goto loc_822A7F38;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x822a7f54
	goto loc_822A7F54;
loc_822A7F38:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822A7F50;
	sub_8233E028(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822A7F54:
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
	// bne cr6,0x822a7fb0
	if (!ctx.cr6.eq) goto loc_822A7FB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822a7fb0
	if (!ctx.cr6.eq) goto loc_822A7FB0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mulli r9,r11,108
	ctx.r9.s64 = ctx.r11.s64 * 108;
	// lwz r8,196(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mulli r11,r7,108
	ctx.r11.s64 = ctx.r7.s64 * 108;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,36(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r3,36(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_822A7FB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a7fc4
	if (ctx.cr6.eq) goto loc_822A7FC4;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x822a7fe0
	goto loc_822A7FE0;
loc_822A7FC4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x822A7FDC;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_822A7FE0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x822a7ffc
	if (ctx.cr6.eq) goto loc_822A7FFC;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x822a8018
	goto loc_822A8018;
loc_822A7FFC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x822A8014;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_822A8018:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_822A8034:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a8048
	if (!ctx.cr6.eq) goto loc_822A8048;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_822A8048:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A8060"))) PPC_WEAK_FUNC(sub_822A8060);
PPC_FUNC_IMPL(__imp__sub_822A8060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x822A8068;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31884
	ctx.r23.s64 = -2089549824;
	// lwz r11,25084(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 25084);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,25084(r23)
	PPC_STORE_U32(ctx.r23.u32 + 25084, ctx.r11.u32);
	// bne 0x822a82a8
	if (!ctx.cr0.eq) goto loc_822A82A8;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r24,-31884
	ctx.r24.s64 = -2089549824;
	// lis r21,-31884
	ctx.r21.s64 = -2089549824;
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// addi r27,r10,-21968
	ctx.r27.s64 = ctx.r10.s64 + -21968;
loc_822A809C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a80c0
	if (!ctx.cr6.eq) goto loc_822A80C0;
	// lwz r9,25092(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25092);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a80c0
	if (!ctx.cr6.eq) goto loc_822A80C0;
	// lwz r9,25096(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 25096);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a82a8
	if (ctx.cr6.eq) goto loc_822A82A8;
loc_822A80C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r11,25084(r23)
	PPC_STORE_U32(ctx.r23.u32 + 25084, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x822a8258
	if (ctx.cr6.eq) goto loc_822A8258;
loc_822A80E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822abb00
	ctx.lr = 0x822A80EC;
	sub_822ABB00(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8148
	if (ctx.cr6.eq) goto loc_822A8148;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a8148
	if (ctx.cr6.eq) goto loc_822A8148;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a8128
	if (!ctx.cr6.eq) goto loc_822A8128;
	// bl 0x822900a0
	ctx.lr = 0x822A8124;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A8128:
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
	ctx.lr = 0x822A8144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_822A8148:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b0648
	ctx.lr = 0x822A815C;
	sub_822B0648(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822a81ac
	if (!ctx.cr6.gt) goto loc_822A81AC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_822A816C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822a81a0
	if (ctx.cr6.eq) goto loc_822A81A0;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A81A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A81A0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822a816c
	if (!ctx.cr0.eq) goto loc_822A816C;
loc_822A81AC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a80e0
	if (!ctx.cr6.eq) goto loc_822A80E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r10,25016(r24)
	PPC_STORE_U32(ctx.r24.u32 + 25016, ctx.r10.u32);
	// ble cr6,0x822a81e4
	if (!ctx.cr6.gt) goto loc_822A81E4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_822A81CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229c110
	ctx.lr = 0x822A81D4;
	sub_8229C110(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822a81cc
	if (!ctx.cr0.eq) goto loc_822A81CC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_822A81E4:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r10,25016(r24)
	PPC_STORE_U32(ctx.r24.u32 + 25016, ctx.r10.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822a8250
	if (ctx.cr6.eq) goto loc_822A8250;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x822a8210
	if (!ctx.cr6.eq) goto loc_822A8210;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8258
	if (ctx.cr6.eq) goto loc_822A8258;
loc_822A8210:
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a8228
	if (!ctx.cr6.eq) goto loc_822A8228;
	// bl 0x822900a0
	ctx.lr = 0x822A8224;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A8228:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A8244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_822A8250:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a80e0
	if (!ctx.cr6.eq) goto loc_822A80E0;
loc_822A8258:
	// bl 0x822a7d10
	ctx.lr = 0x822A825C;
	sub_822A7D10(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822a828c
	if (ctx.cr6.eq) goto loc_822A828C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a8278
	if (!ctx.cr6.eq) goto loc_822A8278;
	// bl 0x822900a0
	ctx.lr = 0x822A8274;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_822A8278:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A828C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A828C:
	// lwz r11,25084(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 25084);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r11,25084(r23)
	PPC_STORE_U32(ctx.r23.u32 + 25084, ctx.r11.u32);
	// beq 0x822a809c
	if (ctx.cr0.eq) goto loc_822A809C;
loc_822A82A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A82B0"))) PPC_WEAK_FUNC(sub_822A82B0);
PPC_FUNC_IMPL(__imp__sub_822A82B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x822A82B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823648a0
	ctx.lr = 0x822A82C4;
	sub_823648A0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a82f4
	if (ctx.cr6.eq) goto loc_822A82F4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_822A82D4:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a82ec
	if (ctx.cr6.eq) goto loc_822A82EC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a82d4
	if (!ctx.cr6.eq) goto loc_822A82D4;
loc_822A82EC:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x822a82f8
	goto loc_822A82F8;
loc_822A82F4:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822A82F8:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r25,r11,-21920
	ctx.r25.s64 = ctx.r11.s64 + -21920;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// beq cr6,0x822a8354
	if (ctx.cr6.eq) goto loc_822A8354;
	// addic. r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x822a83f8
	if (ctx.cr0.lt) goto loc_822A83F8;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822A8324:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822a8348
	if (ctx.cr6.eq) goto loc_822A8348;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x822a8324
	if (!ctx.cr0.lt) goto loc_822A8324;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_822A8348:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a83f8
	if (ctx.cr6.eq) goto loc_822A83F8;
loc_822A8354:
	// addic. r26,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r26.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x822a83f8
	if (ctx.cr0.lt) goto loc_822A83F8;
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822A8364:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// beq cr6,0x822a83d8
	if (ctx.cr6.eq) goto loc_822A83D8;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822a83d8
	if (ctx.cr6.eq) goto loc_822A83D8;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a83ec
	if (!ctx.cr6.gt) goto loc_822A83EC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822A8394:
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a83c0
	if (!ctx.cr6.eq) goto loc_822A83C0;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r27.u32);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r31.u32);
loc_822A83C0:
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822a8394
	if (ctx.cr6.lt) goto loc_822A8394;
	// b 0x822a83ec
	goto loc_822A83EC;
loc_822A83D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A83EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A83EC:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x822a8364
	if (!ctx.cr0.lt) goto loc_822A8364;
loc_822A83F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A8400"))) PPC_WEAK_FUNC(sub_822A8400);
PPC_FUNC_IMPL(__imp__sub_822A8400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,25076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A840C"))) PPC_WEAK_FUNC(sub_822A840C);
PPC_FUNC_IMPL(__imp__sub_822A840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8410"))) PPC_WEAK_FUNC(sub_822A8410);
PPC_FUNC_IMPL(__imp__sub_822A8410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,25104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A841C"))) PPC_WEAK_FUNC(sub_822A841C);
PPC_FUNC_IMPL(__imp__sub_822A841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8420"))) PPC_WEAK_FUNC(sub_822A8420);
PPC_FUNC_IMPL(__imp__sub_822A8420) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21920(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21920);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A8434"))) PPC_WEAK_FUNC(sub_822A8434);
PPC_FUNC_IMPL(__imp__sub_822A8434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8438"))) PPC_WEAK_FUNC(sub_822A8438);
PPC_FUNC_IMPL(__imp__sub_822A8438) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A8448"))) PPC_WEAK_FUNC(sub_822A8448);
PPC_FUNC_IMPL(__imp__sub_822A8448) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r12,-16385
	ctx.r12.s64 = -16385;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A845C"))) PPC_WEAK_FUNC(sub_822A845C);
PPC_FUNC_IMPL(__imp__sub_822A845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8460"))) PPC_WEAK_FUNC(sub_822A8460);
PPC_FUNC_IMPL(__imp__sub_822A8460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x822A8468;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822a84d4
	if (!ctx.cr6.eq) goto loc_822A84D4;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a84d4
	if (!ctx.cr6.eq) goto loc_822A84D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a84a8
	if (ctx.cr6.eq) goto loc_822A84A8;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x822a84c8
	goto loc_822A84C8;
loc_822A84A8:
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
	ctx.lr = 0x822A84C4;
	sub_8233E028(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822A84C8:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822A84D4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_822A84E4:
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x822a0408
	ctx.lr = 0x822A8514;
	sub_822A0408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a84e4
	if (!ctx.cr6.eq) goto loc_822A84E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A8528"))) PPC_WEAK_FUNC(sub_822A8528);
PPC_FUNC_IMPL(__imp__sub_822A8528) {
	PPC_FUNC_PROLOGUE();
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lis r9,-31889
	ctx.r9.s64 = -2089877504;
	// lis r8,-31890
	ctx.r8.s64 = -2089943040;
	// addi r11,r9,-3600
	ctx.r11.s64 = ctx.r9.s64 + -3600;
	// addi r9,r8,29168
	ctx.r9.s64 = ctx.r8.s64 + 29168;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// rlwinm r10,r5,2,17,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7FFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// ld r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r4,-12(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// xor r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// rlwinm r11,r10,2,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7FFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stwx r3,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A858C"))) PPC_WEAK_FUNC(sub_822A858C);
PPC_FUNC_IMPL(__imp__sub_822A858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8590"))) PPC_WEAK_FUNC(sub_822A8590);
PPC_FUNC_IMPL(__imp__sub_822A8590) {
	PPC_FUNC_PROLOGUE();
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lis r9,-31889
	ctx.r9.s64 = -2089877504;
	// addi r11,r9,-3600
	ctx.r11.s64 = ctx.r9.s64 + -3600;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// rlwinm r10,r6,2,17,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a85ec
	if (ctx.cr6.eq) goto loc_822A85EC;
loc_822A85C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a85e0
	if (ctx.cr6.eq) goto loc_822A85E0;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a85c0
	if (!ctx.cr6.eq) goto loc_822A85C0;
	// b 0x822a85ec
	goto loc_822A85EC;
loc_822A85E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822A85EC:
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r10,29168
	ctx.r10.s64 = ctx.r10.s64 + 29168;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// rlwinm r11,r5,2,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7FFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822A8624:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a8644
	if (ctx.cr6.eq) goto loc_822A8644;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a8624
	if (!ctx.cr6.eq) goto loc_822A8624;
	// blr 
	return;
loc_822A8644:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A8654"))) PPC_WEAK_FUNC(sub_822A8654);
PPC_FUNC_IMPL(__imp__sub_822A8654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8658"))) PPC_WEAK_FUNC(sub_822A8658);
PPC_FUNC_IMPL(__imp__sub_822A8658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822A8660;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
	// bne cr6,0x822a86fc
	if (!ctx.cr6.eq) goto loc_822A86FC;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822a86b0
	if (ctx.cr6.eq) goto loc_822A86B0;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lwz r9,25188(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25188);
	// lwz r11,-24660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24660);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,-24660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24660, ctx.r4.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a86fc
	if (ctx.cr6.lt) goto loc_822A86FC;
loc_822A86B0:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,-21932
	ctx.r11.s64 = ctx.r11.s64 + -21932;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a86e0
	if (ctx.cr6.eq) goto loc_822A86E0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x822a86fc
	goto loc_822A86FC;
loc_822A86E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x822A86F8;
	sub_82294AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822A86FC:
	// lwz r11,25188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25188);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a871c
	if (ctx.cr6.lt) goto loc_822A871C;
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
loc_822A871C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-31889
	ctx.r7.s64 = -2089877504;
	// lis r6,-31890
	ctx.r6.s64 = -2089943040;
	// addi r11,r7,-3600
	ctx.r11.s64 = ctx.r7.s64 + -3600;
	// addi r10,r6,29168
	ctx.r10.s64 = ctx.r6.s64 + 29168;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// ld r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// rlwinm r9,r8,2,17,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FFC;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// rlwinm r11,r8,2,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A8794"))) PPC_WEAK_FUNC(sub_822A8794);
PPC_FUNC_IMPL(__imp__sub_822A8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8798"))) PPC_WEAK_FUNC(sub_822A8798);
PPC_FUNC_IMPL(__imp__sub_822A8798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x822A87A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// std r5,688(r1)
	PPC_STORE_U64(ctx.r1.u32 + 688, ctx.r5.u64);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r10,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r10.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r22,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r22.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822a881c
	if (!ctx.cr6.eq) goto loc_822A881C;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233e1a0
	ctx.lr = 0x822A87DC;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a87f0
	if (ctx.cr6.eq) goto loc_822A87F0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a87f8
	goto loc_822A87F8;
loc_822A87F0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_822A87F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-20452
	ctx.r4.s64 = ctx.r11.s64 + -20452;
	// bl 0x8232d178
	ctx.lr = 0x822A8808;
	sub_8232D178(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A8810;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A881C:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822a8884
	if (!ctx.cr6.eq) goto loc_822A8884;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a8884
	if (!ctx.cr6.eq) goto loc_822A8884;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233e1a0
	ctx.lr = 0x822A8844;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8858
	if (ctx.cr6.eq) goto loc_822A8858;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a8860
	goto loc_822A8860;
loc_822A8858:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_822A8860:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-20400
	ctx.r4.s64 = ctx.r11.s64 + -20400;
	// bl 0x8232d178
	ctx.lr = 0x822A8870;
	sub_8232D178(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A8878;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A8884:
	// lwz r11,184(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 184);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a8974
	if (ctx.cr6.eq) goto loc_822A8974;
	// rlwinm r11,r26,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822a8974
	if (!ctx.cr6.eq) goto loc_822A8974;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x822a88bc
	if (!ctx.cr6.eq) goto loc_822A88BC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x822A88B8;
	sub_822960C0(ctx, base);
	// b 0x822a88c4
	goto loc_822A88C4;
loc_822A88BC:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A88C4;
	sub_8233E1A0(ctx, base);
loc_822A88C4:
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x822a88e0
	if (!ctx.cr6.eq) goto loc_822A88E0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822A88E0:
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233e1a0
	ctx.lr = 0x822A88EC;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8900
	if (ctx.cr6.eq) goto loc_822A8900;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a8904
	goto loc_822A8904;
loc_822A8900:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822A8904:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-20348
	ctx.r5.s64 = ctx.r10.s64 + -20348;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823338c8
	ctx.lr = 0x822A892C;
	sub_823338C8(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a8940
	if (!ctx.cr6.eq) goto loc_822A8940;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_822A8940:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A8950;
	sub_8232D178(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x822A8958;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A8960;
	sub_82299080(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x822A8968;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A8974:
	// lwz r28,692(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r30,688(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bne cr6,0x822a8ab4
	if (!ctx.cr6.eq) goto loc_822A8AB4;
	// bl 0x82294680
	ctx.lr = 0x822A8988;
	sub_82294680(ctx, base);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a8a68
	if (ctx.cr6.eq) goto loc_822A8A68;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233e1a0
	ctx.lr = 0x822A899C;
	sub_8233E1A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a89b8
	if (ctx.cr6.eq) goto loc_822A89B8;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a89bc
	goto loc_822A89BC;
loc_822A89B8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822A89BC:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a89dc
	if (!ctx.cr6.eq) goto loc_822A89DC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x822A89D8;
	sub_822960C0(ctx, base);
	// b 0x822a89e4
	goto loc_822A89E4;
loc_822A89DC:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A89E4;
	sub_8233E1A0(ctx, base);
loc_822A89E4:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a89f8
	if (!ctx.cr6.eq) goto loc_822A89F8;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822A89F8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-20328
	ctx.r5.s64 = ctx.r10.s64 + -20328;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823338c8
	ctx.lr = 0x822A8A20;
	sub_823338C8(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a8a34
	if (!ctx.cr6.eq) goto loc_822A8A34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_822A8A34:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A8A44;
	sub_8232D178(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x822A8A4C;
	sub_82299080(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x822A8A54;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A8A5C;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A8A68:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822a8c8c
	if (!ctx.cr6.eq) goto loc_822A8C8C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822a8c8c
	if (!ctx.cr6.eq) goto loc_822A8C8C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-20304
	ctx.r5.s64 = ctx.r10.s64 + -20304;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823338c8
	ctx.lr = 0x822A8AA0;
	sub_823338C8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A8AA8;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A8AB4:
	// lwz r11,52(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// lwz r10,196(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8ad8
	if (ctx.cr6.eq) goto loc_822A8AD8;
loc_822A8AC4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822a8c8c
	if (ctx.cr6.eq) goto loc_822A8C8C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8ac4
	if (!ctx.cr6.eq) goto loc_822A8AC4;
loc_822A8AD8:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a8c8c
	if (!ctx.cr6.eq) goto loc_822A8C8C;
	// rlwinm r11,r26,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822a8c8c
	if (!ctx.cr6.eq) goto loc_822A8C8C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-27584
	ctx.r31.s64 = ctx.r11.s64 + -27584;
	// addi r26,r9,-19580
	ctx.r26.s64 = ctx.r9.s64 + -19580;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bne cr6,0x822a8b1c
	if (!ctx.cr6.eq) goto loc_822A8B1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A8B18;
	sub_822960C0(ctx, base);
	// b 0x822a8b3c
	goto loc_822A8B3C;
loc_822A8B1C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a8b34
	if (!ctx.cr6.eq) goto loc_822A8B34;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A8B30;
	sub_822960C0(ctx, base);
	// b 0x822a8b3c
	goto loc_822A8B3C;
loc_822A8B34:
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A8B3C;
	sub_8233E1A0(ctx, base);
loc_822A8B3C:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r27,208(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x822a8b58
	if (!ctx.cr6.eq) goto loc_822A8B58;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_822A8B58:
	// lwz r11,52(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8b74
	if (!ctx.cr6.eq) goto loc_822A8B74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A8B70;
	sub_822960C0(ctx, base);
	// b 0x822a8b94
	goto loc_822A8B94;
loc_822A8B74:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822a8b8c
	if (!ctx.cr6.eq) goto loc_822A8B8C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A8B88;
	sub_822960C0(ctx, base);
	// b 0x822a8b94
	goto loc_822A8B94;
loc_822A8B8C:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A8B94;
	sub_8233E1A0(ctx, base);
loc_822A8B94:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a8ba8
	if (!ctx.cr6.eq) goto loc_822A8BA8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_822A8BA8:
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233e1a0
	ctx.lr = 0x822A8BB4;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8bc8
	if (ctx.cr6.eq) goto loc_822A8BC8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a8bcc
	goto loc_822A8BCC;
loc_822A8BC8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822A8BCC:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a8be8
	if (!ctx.cr6.eq) goto loc_822A8BE8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x822A8BE4;
	sub_822960C0(ctx, base);
	// b 0x822a8bf0
	goto loc_822A8BF0;
loc_822A8BE8:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A8BF0;
	sub_8233E1A0(ctx, base);
loc_822A8BF0:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a8c04
	if (!ctx.cr6.eq) goto loc_822A8C04;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822A8C04:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-20268
	ctx.r5.s64 = ctx.r10.s64 + -20268;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823338c8
	ctx.lr = 0x822A8C2C;
	sub_823338C8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a8c40
	if (!ctx.cr6.eq) goto loc_822A8C40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_822A8C40:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x822A8C58;
	sub_8232D178(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A8C60;
	sub_82299080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x822A8C68;
	sub_82299080(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x822A8C70;
	sub_82299080(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x822A8C78;
	sub_82299080(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x822A8C80;
	sub_82299080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A8C8C:
	// rlwinm r11,r26,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822a8d90
	if (ctx.cr6.eq) goto loc_822A8D90;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-20248
	ctx.r11.s64 = ctx.r11.s64 + -20248;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A8CAC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x822a8cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A8CAC;
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82cb16f0
	ctx.lr = 0x822A8CD0;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a8cf0
	if (!ctx.cr6.eq) goto loc_822A8CF0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,44(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x822960c0
	ctx.lr = 0x822A8CEC;
	sub_822960C0(ctx, base);
	// b 0x822a8d00
	goto loc_822A8D00;
loc_822A8CF0:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x8233e1a0
	ctx.lr = 0x822A8D00;
	sub_8233E1A0(ctx, base);
loc_822A8D00:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294bb8
	ctx.lr = 0x822A8D0C;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8d24
	if (ctx.cr6.eq) goto loc_822A8D24;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x822A8D24;
	sub_82299080(ctx, base);
loc_822A8D24:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8d38
	if (ctx.cr6.eq) goto loc_822A8D38;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x822A8D38;
	sub_82299080(ctx, base);
loc_822A8D38:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8d4c
	if (ctx.cr6.eq) goto loc_822A8D4C;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x822a8d54
	goto loc_822A8D54;
loc_822A8D4C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_822A8D54:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823471b8
	ctx.lr = 0x822A8D60;
	sub_823471B8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8233e028
	ctx.lr = 0x822A8D78;
	sub_8233E028(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// stw r28,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r28.u32);
	// b 0x822a8e48
	goto loc_822A8E48;
loc_822A8D90:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822A8D94:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x822a8db4
	if (!ctx.cr6.eq) goto loc_822A8DB4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8d94
	if (!ctx.cr6.eq) goto loc_822A8D94;
	// b 0x822a8e4c
	goto loc_822A8E4C;
loc_822A8DB4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822a8dd4
	if (!ctx.cr6.eq) goto loc_822A8DD4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x822A8DD0;
	sub_822960C0(ctx, base);
	// b 0x822a8ddc
	goto loc_822A8DDC;
loc_822A8DD4:
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x822A8DDC;
	sub_8233E1A0(ctx, base);
loc_822A8DDC:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x822a8df8
	if (!ctx.cr6.eq) goto loc_822A8DF8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_822A8DF8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14476
	ctx.r6.s64 = ctx.r11.s64 + 14476;
	// addi r5,r10,-20228
	ctx.r5.s64 = ctx.r10.s64 + -20228;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823338c8
	ctx.lr = 0x822A8E20;
	sub_823338C8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a8e34
	if (!ctx.cr6.eq) goto loc_822A8E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822A8E34:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82332848
	ctx.lr = 0x822A8E3C;
	sub_82332848(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x822A8E44;
	sub_82299080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_822A8E48:
	// bl 0x82299080
	ctx.lr = 0x822A8E4C;
	sub_82299080(ctx, base);
loc_822A8E4C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// bne cr6,0x822a8e98
	if (!ctx.cr6.eq) goto loc_822A8E98;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822a8e98
	if (!ctx.cr6.eq) goto loc_822A8E98;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x822a8460
	ctx.lr = 0x822A8E84;
	sub_822A8460(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// stw r10,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r10.u32);
	// b 0x822a8ed8
	goto loc_822A8ED8;
loc_822A8E98:
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r5,688(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 688);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a0408
	ctx.lr = 0x822A8EB4;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a8ed8
	if (ctx.cr6.eq) goto loc_822A8ED8;
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822949a0
	ctx.lr = 0x822A8ECC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// beq cr6,0x822a8edc
	if (ctx.cr6.eq) goto loc_822A8EDC;
loc_822A8ED8:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822A8EDC:
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a9008
	if (!ctx.cr6.eq) goto loc_822A9008;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A8F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 104);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x822a8f38
	if (ctx.cr6.gt) goto loc_822A8F38;
	// li r11,8
	ctx.r11.s64 = 8;
loc_822A8F38:
	// li r12,1
	ctx.r12.s64 = 1;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r6,r9
	ctx.r6.u64 = ~ctx.r9.u64;
	// and r7,r26,r12
	ctx.r7.u64 = ctx.r26.u64 & ctx.r12.u64;
	// and r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// beq cr6,0x822a8fc4
	if (ctx.cr6.eq) goto loc_822A8FC4;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r7,25196(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25196);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a8fc4
	if (ctx.cr6.eq) goto loc_822A8FC4;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lis r4,-31884
	ctx.r4.s64 = -2089549824;
	// lwz r9,25200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25200);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,25192(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25192);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// andc r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822a8fb4
	if (ctx.cr6.gt) goto loc_822A8FB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 & ctx.r6.u64;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stw r11,25200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25200, ctx.r11.u32);
	// b 0x822a8fd0
	goto loc_822A8FD0;
loc_822A8FB4:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r11,25068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25068);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,25068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25068, ctx.r11.u32);
loc_822A8FC4:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x822A8FCC;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822A8FD0:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a918c
	if (ctx.cr6.eq) goto loc_822A918C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822a918c
	if (!ctx.cr6.eq) goto loc_822A918C;
	// bl 0x822955c8
	ctx.lr = 0x822A8FEC;
	sub_822955C8(ctx, base);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822a918c
	if (ctx.cr6.eq) goto loc_822A918C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82396ef8
	ctx.lr = 0x822A9000;
	sub_82396EF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x822a918c
	goto loc_822A918C;
loc_822A9008:
	// lis r12,3072
	ctx.r12.s64 = 201326592;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r12,r12,384
	ctx.r12.u64 = ctx.r12.u64 | 384;
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lwz r24,4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r22,36(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// oris r12,r12,8
	ctx.r12.u64 = ctx.r12.u64 | 524288;
	// ori r12,r12,24576
	ctx.r12.u64 = ctx.r12.u64 | 24576;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 | ctx.r26.u64;
	// beq cr6,0x822a906c
	if (ctx.cr6.eq) goto loc_822A906C;
	// or r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 | ctx.r26.u64;
	// li r12,-8194
	ctx.r12.s64 = -8194;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_822A906C:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822a90a8
	if (ctx.cr6.eq) goto loc_822A90A8;
	// li r12,-2050
	ctx.r12.s64 = -2050;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A90A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A90A8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822a90d4
	if (!ctx.cr6.eq) goto loc_822A90D4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a90c4
	if (ctx.cr6.eq) goto loc_822A90C4;
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822a90d4
	goto loc_822A90D4;
loc_822A90C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82396ef8
	ctx.lr = 0x822A90D0;
	sub_82396EF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_822A90D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a9138
	if (ctx.cr6.eq) goto loc_822A9138;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// lwz r10,280(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// lwz r19,196(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// clrlwi r18,r11,31
	ctx.r18.u64 = ctx.r11.u32 & 0x1;
	// lbz r17,192(r29)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r16,288(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// lwz r15,292(r29)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// lwz r14,296(r29)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// beq cr6,0x822a9134
	if (ctx.cr6.eq) goto loc_822A9134;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a9134
	if (ctx.cr6.eq) goto loc_822A9134;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82396ef8
	ctx.lr = 0x822A912C;
	sub_82396EF8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x822a9138
	goto loc_822A9138;
loc_822A9134:
	// li r20,0
	ctx.r20.s64 = 0;
loc_822A9138:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r11,-3788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3788, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x822A9168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,688(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// addi r7,r8,-21932
	ctx.r7.s64 = ctx.r8.s64 + -21932;
	// stw r11,-3788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3788, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
loc_822A918C:
	// rlwinm r11,r26,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822a91b8
	if (!ctx.cr6.eq) goto loc_822A91B8;
	// lwz r11,184(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 184);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a91c4
	if (ctx.cr6.eq) goto loc_822A91C4;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,46,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// or r26,r26,r12
	ctx.r26.u64 = ctx.r26.u64 | ctx.r12.u64;
	// b 0x822a91c4
	goto loc_822A91C4;
loc_822A91B8:
	// li r12,-8194
	ctx.r12.s64 = -8194;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// and r26,r26,r12
	ctx.r26.u64 = ctx.r26.u64 & ctx.r12.u64;
loc_822A91C4:
	// lwz r11,184(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 184);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a91e0
	if (ctx.cr6.eq) goto loc_822A91E0;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r26,r26,r12
	ctx.r26.u64 = ctx.r26.u64 | ctx.r12.u64;
loc_822A91E0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A91F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e640b8
	ctx.lr = 0x822A9204;
	sub_82E640B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,684(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r8,692(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r23,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
	// beq cr6,0x822a9254
	if (ctx.cr6.eq) goto loc_822A9254;
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// mulli r11,r27,108
	ctx.r11.s64 = ctx.r27.s64 * 108;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
loc_822A9254:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822a926c
	if (ctx.cr6.eq) goto loc_822A926C;
	// lwz r11,60(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// b 0x822a9270
	goto loc_822A9270;
loc_822A926C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822A9270:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a9280
	if (!ctx.cr6.eq) goto loc_822A9280;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_822A9280:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822a9294
	if (ctx.cr6.eq) goto loc_822A9294;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822a929c
	goto loc_822A929C;
loc_822A9294:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822A929C:
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A92A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,740(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822a92f4
	if (ctx.cr6.eq) goto loc_822A92F4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a92e4
	if (ctx.cr6.eq) goto loc_822A92E4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822a92d4
	if (!ctx.cr6.eq) goto loc_822A92D4;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_822A92D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x822abeb8
	ctx.lr = 0x822A92E0;
	sub_822ABEB8(ctx, base);
	// b 0x822a92f4
	goto loc_822A92F4;
loc_822A92E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c1658
	ctx.lr = 0x822A92F4;
	sub_822C1658(ctx, base);
loc_822A92F4:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a9314
	if (!ctx.cr6.eq) goto loc_822A9314;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_822A9314:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,732(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x822a0d28
	ctx.lr = 0x822A9350;
	sub_822A0D28(ctx, base);
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bc00
	ctx.lr = 0x822A9360;
	sub_8229BC00(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8658
	ctx.lr = 0x822A936C;
	sub_822A8658(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a93a4
	if (ctx.cr6.eq) goto loc_822A93A4;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// lbz r9,192(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// or r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 | ctx.r18.u64;
	// stw r19,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r19.u32);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r16,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r16.u32);
	// stw r8,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r8.u32);
	// stb r7,192(r29)
	PPC_STORE_U8(ctx.r29.u32 + 192, ctx.r7.u8);
	// stw r15,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r15.u32);
	// stw r14,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r14.u32);
	// stw r20,280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 280, ctx.r20.u32);
loc_822A93A4:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a93d8
	if (ctx.cr6.eq) goto loc_822A93D8;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// or r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 | ctx.r12.u64;
	// addi r3,r10,-21956
	ctx.r3.s64 = ctx.r10.s64 + -21956;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// bl 0x822b4070
	ctx.lr = 0x822A93D8;
	sub_822B4070(ctx, base);
loc_822A93D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A93E4"))) PPC_WEAK_FUNC(sub_822A93E4);
PPC_FUNC_IMPL(__imp__sub_822A93E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A93E8"))) PPC_WEAK_FUNC(sub_822A93E8);
PPC_FUNC_IMPL(__imp__sub_822A93E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x822A93F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x822a94a4
	if (!ctx.cr6.eq) goto loc_822A94A4;
	// lwz r11,184(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a94a4
	if (ctx.cr6.eq) goto loc_822A94A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822959a8
	ctx.lr = 0x822A9444;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a94a0
	if (ctx.cr6.eq) goto loc_822A94A0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// stw r22,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r22.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x822a94a4
	goto loc_822A94A4;
loc_822A94A0:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_822A94A4:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a8798
	ctx.lr = 0x822A94CC;
	sub_822A8798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a9654
	if (ctx.cr6.eq) goto loc_822A9654;
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// rlwinm r11,r25,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r28,-3776(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3776);
	// bne cr6,0x822a94f4
	if (!ctx.cr6.eq) goto loc_822A94F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822A94F4:
	// stw r11,-3776(r29)
	PPC_STORE_U32(ctx.r29.u32 + -3776, ctx.r11.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a9520
	if (ctx.cr6.eq) goto loc_822A9520;
loc_822A9504:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x822a9530
	if (!ctx.cr6.eq) goto loc_822A9530;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a9504
	if (!ctx.cr6.eq) goto loc_822A9504;
loc_822A9520:
	// lwz r11,288(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 288);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822a9544
	goto loc_822A9544;
loc_822A9530:
	// bl 0x822955c8
	ctx.lr = 0x822A9534;
	sub_822955C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A9544:
	// bctrl 
	ctx.lr = 0x822A9548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r28,-3776(r29)
	PPC_STORE_U32(ctx.r29.u32 + -3776, ctx.r28.u32);
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r25,r12
	ctx.r11.u64 = ctx.r25.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822a9654
	if (!ctx.cr6.eq) goto loc_822A9654;
	// lwz r11,184(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a95e4
	if (ctx.cr6.eq) goto loc_822A95E4;
	// rlwinm r11,r25,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822a95e4
	if (!ctx.cr6.eq) goto loc_822A95E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e890
	ctx.lr = 0x822A9594;
	sub_8229E890(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a95e4
	if (ctx.cr6.eq) goto loc_822A95E4;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x82299080
	ctx.lr = 0x822A95D4;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x822A95DC;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x822A95E4;
	sub_82299080(ctx, base);
loc_822A95E4:
	// lwz r11,184(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a9654
	if (ctx.cr6.eq) goto loc_822A9654;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822a9654
	if (!ctx.cr6.eq) goto loc_822A9654;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9654
	if (ctx.cr6.eq) goto loc_822A9654;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a9638
	if (ctx.cr6.eq) goto loc_822A9638;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x822a963c
	goto loc_822A963C;
loc_822A9638:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_822A963C:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82395f40
	ctx.lr = 0x822A9654;
	sub_82395F40(ctx, base);
loc_822A9654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f20d0
	ctx.lr = 0x822A965C;
	sub_823F20D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a9680
	if (ctx.cr6.eq) goto loc_822A9680;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r9,284(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 284);
	// lwz r11,18184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,18184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18184, ctx.r11.u32);
	// stw r9,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r9.u32);
loc_822A9680:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x822a969c
	if (!ctx.cr6.eq) goto loc_822A969C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822a969c
	if (ctx.cr6.eq) goto loc_822A969C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a96a8
	ctx.lr = 0x822A969C;
	sub_822A96A8(ctx, base);
loc_822A969C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A96A8"))) PPC_WEAK_FUNC(sub_822A96A8);
PPC_FUNC_IMPL(__imp__sub_822A96A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x822A96B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82294a58
	ctx.lr = 0x822A96C4;
	sub_82294A58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x822add00
	ctx.lr = 0x822A96D8;
	sub_822ADD00(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// bl 0x82294a58
	ctx.lr = 0x822A96E4;
	sub_82294A58(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x822ada80
	ctx.lr = 0x822A96F4;
	sub_822ADA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x822A96FC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A9708"))) PPC_WEAK_FUNC(sub_822A9708);
PPC_FUNC_IMPL(__imp__sub_822A9708) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A975C"))) PPC_WEAK_FUNC(sub_822A975C);
PPC_FUNC_IMPL(__imp__sub_822A975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9760"))) PPC_WEAK_FUNC(sub_822A9760);
PPC_FUNC_IMPL(__imp__sub_822A9760) {
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

__attribute__((alias("__imp__sub_822A9780"))) PPC_WEAK_FUNC(sub_822A9780);
PPC_FUNC_IMPL(__imp__sub_822A9780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x822A9788;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// beq cr6,0x822a9814
	if (ctx.cr6.eq) goto loc_822A9814;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x82cb20a0
	ctx.lr = 0x822A97E4;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a9814
	if (ctx.cr6.eq) goto loc_822A9814;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x822A9804;
	sub_8233E028(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_822A9814:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// std r28,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x822a98a8
	ctx.lr = 0x822A982C;
	sub_822A98A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82294a58
	ctx.lr = 0x822A9838;
	sub_82294A58(ctx, base);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// bl 0x822ada80
	ctx.lr = 0x822A9848;
	sub_822ADA80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A9854"))) PPC_WEAK_FUNC(sub_822A9854);
PPC_FUNC_IMPL(__imp__sub_822A9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9858"))) PPC_WEAK_FUNC(sub_822A9858);
PPC_FUNC_IMPL(__imp__sub_822A9858) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82294a58
	ctx.lr = 0x822A987C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x822ada80
	ctx.lr = 0x822A9890;
	sub_822ADA80(ctx, base);
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

__attribute__((alias("__imp__sub_822A98A8"))) PPC_WEAK_FUNC(sub_822A98A8);
PPC_FUNC_IMPL(__imp__sub_822A98A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x822A98B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// li r28,8
	ctx.r28.s64 = 8;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// ld r31,16(r25)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// ld r30,24(r25)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// ld r5,8(r25)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r3,32(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r7,56(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// ld r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & ctx.r31.u64;
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// bl 0x822a93e8
	ctx.lr = 0x822A9948;
	sub_822A93E8(ctx, base);
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// lis r23,-31885
	ctx.r23.s64 = -2089615360;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// ble cr6,0x822a9a20
	if (!ctx.cr6.gt) goto loc_822A9A20;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822A9980:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822a9a20
	if (ctx.cr6.lt) goto loc_822A9A20;
	// lwz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a9a20
	if (!ctx.cr6.lt) goto loc_822A9A20;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x822a99c4
	if (!ctx.cr6.eq) goto loc_822A99C4;
	// bl 0x822900a0
	ctx.lr = 0x822A99C0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A99C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A99DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a9a00
	if (ctx.cr6.eq) goto loc_822A9A00;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// b 0x822a9a04
	goto loc_822A9A04;
loc_822A9A00:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_822A9A04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad4a0
	ctx.lr = 0x822A9A10;
	sub_822AD4A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x822a9980
	goto loc_822A9980;
loc_822A9A20:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// ld r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x823c1998
	ctx.lr = 0x822A9A44;
	sub_823C1998(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,56(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x822c1658
	ctx.lr = 0x822A9A60;
	sub_822C1658(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a9b3c
	if (ctx.cr6.eq) goto loc_822A9B3C;
loc_822A9A6C:
	// lwz r10,496(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r29,-4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x8232d180
	ctx.lr = 0x822A9A94;
	sub_8232D180(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A9AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822a9b1c
	if (!ctx.cr6.gt) goto loc_822A9B1C;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r30,r8,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x822a9ae0
	if (!ctx.cr6.eq) goto loc_822A9AE0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822a9b20
	if (ctx.cr6.eq) goto loc_822A9B20;
loc_822A9AE0:
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9af8
	if (!ctx.cr6.eq) goto loc_822A9AF8;
	// bl 0x822900a0
	ctx.lr = 0x822A9AF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9AF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x822a9b20
	goto loc_822A9B20;
loc_822A9B1C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_822A9B20:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a9b30
	if (ctx.cr0.eq) goto loc_822A9B30;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_822A9B30:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a9a6c
	if (!ctx.cr6.eq) goto loc_822A9A6C;
loc_822A9B3C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// li r10,455
	ctx.r10.s64 = 455;
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// addi r9,r11,-7880
	ctx.r9.s64 = ctx.r11.s64 + -7880;
	// stw r27,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// li r8,2327
	ctx.r8.s64 = 2327;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r24,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r24,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r24.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r27,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r27.u32);
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r27,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r27.u32);
	// stw r27,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r27.u32);
	// stw r6,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r6.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// stw r5,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r5.u32);
	// stw r4,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// stw r27,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r27.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stw r24,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r24.u32);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// ble cr6,0x822a9c18
	if (!ctx.cr6.gt) goto loc_822A9C18;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_822A9BE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad570
	ctx.lr = 0x822A9BF4;
	sub_822AD570(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822a9be8
	if (!ctx.cr0.eq) goto loc_822A9BE8;
loc_822A9C18:
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
loc_822A9C24:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822a9c9c
	if (ctx.cr6.lt) goto loc_822A9C9C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a9c9c
	if (!ctx.cr6.lt) goto loc_822A9C9C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r25,40
	ctx.r3.s64 = ctx.r25.s64 + 40;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822abf88
	ctx.lr = 0x822A9C64;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9c94
	if (!ctx.cr6.eq) goto loc_822A9C94;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A9C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A9C94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822a9c24
	goto loc_822A9C24;
loc_822A9C9C:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9d88
	if (ctx.cr6.eq) goto loc_822A9D88;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822A9CAC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x822a9d88
	if (ctx.cr6.lt) goto loc_822A9D88;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a9d88
	if (!ctx.cr6.lt) goto loc_822A9D88;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r25,40
	ctx.r3.s64 = ctx.r25.s64 + 40;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x822abf88
	ctx.lr = 0x822A9CEC;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9d80
	if (!ctx.cr6.eq) goto loc_822A9D80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822af0e0
	ctx.lr = 0x822A9D1C;
	sub_822AF0E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a9d80
	if (ctx.cr6.eq) goto loc_822A9D80;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a9d80
	if (!ctx.cr6.eq) goto loc_822A9D80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822a9d80
	if (!ctx.cr6.eq) goto loc_822A9D80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822a9d80
	if (ctx.cr6.eq) goto loc_822A9D80;
loc_822A9D4C:
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,21,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x822a9d70
	if (!ctx.cr6.eq) goto loc_822A9D70;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a9d4c
	if (!ctx.cr6.eq) goto loc_822A9D4C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x822a9cac
	goto loc_822A9CAC;
loc_822A9D70:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_822A9D80:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x822a9cac
	goto loc_822A9CAC;
loc_822A9D88:
	// lwz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9df8
	if (ctx.cr6.eq) goto loc_822A9DF8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822A9D98:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822a9df8
	if (ctx.cr6.lt) goto loc_822A9DF8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a9df8
	if (!ctx.cr6.lt) goto loc_822A9DF8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r25,40
	ctx.r3.s64 = ctx.r25.s64 + 40;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x822abf88
	ctx.lr = 0x822A9DD4;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9df0
	if (!ctx.cr6.eq) goto loc_822A9DF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,60(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822abeb8
	ctx.lr = 0x822A9DF0;
	sub_822ABEB8(ctx, base);
loc_822A9DF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822a9d98
	goto loc_822A9D98;
loc_822A9DF8:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822A9DFC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x822a9ed8
	if (ctx.cr6.lt) goto loc_822A9ED8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a9ed8
	if (!ctx.cr6.lt) goto loc_822A9ED8;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,8(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a9ed0
	if (ctx.cr6.eq) goto loc_822A9ED0;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9e4c
	if (!ctx.cr6.eq) goto loc_822A9E4C;
	// bl 0x822900a0
	ctx.lr = 0x822A9E48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9E4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a9e9c
	if (ctx.cr6.eq) goto loc_822A9E9C;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9e88
	if (!ctx.cr6.eq) goto loc_822A9E88;
	// bl 0x822900a0
	ctx.lr = 0x822A9E84;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9E88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A9E9C:
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// bne cr6,0x822a9ebc
	if (!ctx.cr6.eq) goto loc_822A9EBC;
	// bl 0x822900a0
	ctx.lr = 0x822A9EB8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9EBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A9ED0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x822a9dfc
	goto loc_822A9DFC;
loc_822A9ED8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r30,r11,-27344
	ctx.r30.s64 = ctx.r11.s64 + -27344;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// beq cr6,0x822a9f14
	if (ctx.cr6.eq) goto loc_822A9F14;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9f00
	if (!ctx.cr6.eq) goto loc_822A9F00;
	// bl 0x822900a0
	ctx.lr = 0x822A9EFC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9F00:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A9F14:
	// lwz r11,496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9f4c
	if (ctx.cr6.eq) goto loc_822A9F4C;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9f38
	if (!ctx.cr6.eq) goto loc_822A9F38;
	// bl 0x822900a0
	ctx.lr = 0x822A9F34;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9F38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A9F4C:
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r27,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r27.u32);
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// bne cr6,0x822a9f74
	if (!ctx.cr6.eq) goto loc_822A9F74;
	// bl 0x822900a0
	ctx.lr = 0x822A9F70;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9F74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9fc8
	if (ctx.cr6.eq) goto loc_822A9FC8;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9fb4
	if (!ctx.cr6.eq) goto loc_822A9FB4;
	// bl 0x822900a0
	ctx.lr = 0x822A9FB0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9FB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A9FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A9FC8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// beq cr6,0x822aa00c
	if (ctx.cr6.eq) goto loc_822AA00C;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a9ff8
	if (!ctx.cr6.eq) goto loc_822A9FF8;
	// bl 0x822900a0
	ctx.lr = 0x822A9FF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822A9FF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AA00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AA00C:
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// bne cr6,0x822aa030
	if (!ctx.cr6.eq) goto loc_822AA030;
	// bl 0x822900a0
	ctx.lr = 0x822AA02C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822AA030:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AA044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa084
	if (ctx.cr6.eq) goto loc_822AA084;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822aa070
	if (!ctx.cr6.eq) goto loc_822AA070;
	// bl 0x822900a0
	ctx.lr = 0x822AA06C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822AA070:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AA084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AA084:
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// bne cr6,0x822aa0a8
	if (!ctx.cr6.eq) goto loc_822AA0A8;
	// bl 0x822900a0
	ctx.lr = 0x822AA0A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822AA0A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AA0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa0fc
	if (ctx.cr6.eq) goto loc_822AA0FC;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822aa0e8
	if (!ctx.cr6.eq) goto loc_822AA0E8;
	// bl 0x822900a0
	ctx.lr = 0x822AA0E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_822AA0E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AA0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AA0FC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AA108"))) PPC_WEAK_FUNC(sub_822AA108);
PPC_FUNC_IMPL(__imp__sub_822AA108) {
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

__attribute__((alias("__imp__sub_822AA128"))) PPC_WEAK_FUNC(sub_822AA128);
PPC_FUNC_IMPL(__imp__sub_822AA128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x822AA144;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822ae6f8
	ctx.lr = 0x822AA158;
	sub_822AE6F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AA16C"))) PPC_WEAK_FUNC(sub_822AA16C);
PPC_FUNC_IMPL(__imp__sub_822AA16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA170"))) PPC_WEAK_FUNC(sub_822AA170);
PPC_FUNC_IMPL(__imp__sub_822AA170) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AA190"))) PPC_WEAK_FUNC(sub_822AA190);
PPC_FUNC_IMPL(__imp__sub_822AA190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x822b4260
	ctx.lr = 0x822AA1AC;
	sub_822B4260(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
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

__attribute__((alias("__imp__sub_822AA1CC"))) PPC_WEAK_FUNC(sub_822AA1CC);
PPC_FUNC_IMPL(__imp__sub_822AA1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

