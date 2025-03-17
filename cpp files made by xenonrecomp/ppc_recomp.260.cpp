#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828BB000"))) PPC_WEAK_FUNC(sub_828BB000);
PPC_FUNC_IMPL(__imp__sub_828BB000) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,18960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18960);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,18960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18960, ctx.r11.u32);
	// b 0x828b6cc8
	sub_828B6CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BB018"))) PPC_WEAK_FUNC(sub_828BB018);
PPC_FUNC_IMPL(__imp__sub_828BB018) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r9,25232
	ctx.r7.s64 = ctx.r9.s64 + 25232;
	// lwz r11,18960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18960);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,18960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18960, ctx.r11.u32);
	// b 0x828b6db8
	sub_828B6DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BB040"))) PPC_WEAK_FUNC(sub_828BB040);
PPC_FUNC_IMPL(__imp__sub_828BB040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828BB048;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828bb0a0
	if (ctx.cr6.eq) goto loc_828BB0A0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bb0a0
	if (ctx.cr6.eq) goto loc_828BB0A0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828BB06C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828bb040
	ctx.lr = 0x828BB07C;
	sub_828BB040(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x828bb1b8
	ctx.lr = 0x828BB094;
	sub_828BB1B8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// blt cr6,0x828bb06c
	if (ctx.cr6.lt) goto loc_828BB06C;
loc_828BB0A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BB0A8"))) PPC_WEAK_FUNC(sub_828BB0A8);
PPC_FUNC_IMPL(__imp__sub_828BB0A8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,30136
	ctx.r4.s64 = ctx.r11.s64 + 30136;
	// bl 0x82333168
	ctx.lr = 0x828BB0D0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bb100
	if (ctx.cr6.eq) goto loc_828BB100;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
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
loc_828BB100:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,30160
	ctx.r4.s64 = ctx.r11.s64 + 30160;
	// bl 0x82333168
	ctx.lr = 0x828BB110;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bb160
	if (ctx.cr6.eq) goto loc_828BB160;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x828bb1b8
	ctx.lr = 0x828BB134;
	sub_828BB1B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828bb040
	ctx.lr = 0x828BB140;
	sub_828BB040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82418040
	ctx.lr = 0x828BB148;
	sub_82418040(ctx, base);
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
loc_828BB160:
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

__attribute__((alias("__imp__sub_828BB178"))) PPC_WEAK_FUNC(sub_828BB178);
PPC_FUNC_IMPL(__imp__sub_828BB178) {
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

__attribute__((alias("__imp__sub_828BB18C"))) PPC_WEAK_FUNC(sub_828BB18C);
PPC_FUNC_IMPL(__imp__sub_828BB18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB190"))) PPC_WEAK_FUNC(sub_828BB190);
PPC_FUNC_IMPL(__imp__sub_828BB190) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BB1B4"))) PPC_WEAK_FUNC(sub_828BB1B4);
PPC_FUNC_IMPL(__imp__sub_828BB1B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB1B8"))) PPC_WEAK_FUNC(sub_828BB1B8);
PPC_FUNC_IMPL(__imp__sub_828BB1B8) {
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
	ctx.lr = 0x828BB1E8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828bb200
	if (ctx.cr0.eq) goto loc_828BB200;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_828BB200:
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

__attribute__((alias("__imp__sub_828BB220"))) PPC_WEAK_FUNC(sub_828BB220);
PPC_FUNC_IMPL(__imp__sub_828BB220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BB228;
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
	// ble cr6,0x828bb290
	if (!ctx.cr6.gt) goto loc_828BB290;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828BB248:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828bb27c
	if (!ctx.cr6.eq) goto loc_828BB27C;
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
	ctx.lr = 0x828BB274;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_828BB27C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bb248
	if (ctx.cr6.lt) goto loc_828BB248;
loc_828BB290:
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

__attribute__((alias("__imp__sub_828BB2A0"))) PPC_WEAK_FUNC(sub_828BB2A0);
PPC_FUNC_IMPL(__imp__sub_828BB2A0) {
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x828bb310
	if (ctx.cr6.eq) goto loc_828BB310;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bb314
	if (!ctx.cr6.gt) goto loc_828BB314;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x828BB2F4;
	sub_82294520(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x828BB308;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_828BB310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BB314:
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

__attribute__((alias("__imp__sub_828BB32C"))) PPC_WEAK_FUNC(sub_828BB32C);
PPC_FUNC_IMPL(__imp__sub_828BB32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB330"))) PPC_WEAK_FUNC(sub_828BB330);
PPC_FUNC_IMPL(__imp__sub_828BB330) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d230
	sub_8232D230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BB340"))) PPC_WEAK_FUNC(sub_828BB340);
PPC_FUNC_IMPL(__imp__sub_828BB340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BB364"))) PPC_WEAK_FUNC(sub_828BB364);
PPC_FUNC_IMPL(__imp__sub_828BB364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB368"))) PPC_WEAK_FUNC(sub_828BB368);
PPC_FUNC_IMPL(__imp__sub_828BB368) {
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
	ctx.lr = 0x828BB398;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828bb3b0
	if (ctx.cr0.eq) goto loc_828BB3B0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_828BB3B0:
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

__attribute__((alias("__imp__sub_828BB3D0"))) PPC_WEAK_FUNC(sub_828BB3D0);
PPC_FUNC_IMPL(__imp__sub_828BB3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828BB3D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x828bb41c
	if (!ctx.cr6.gt) goto loc_828BB41C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_828BB3FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828bb474
	if (ctx.cr6.eq) goto loc_828BB474;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bb3fc
	if (ctx.cr6.lt) goto loc_828BB3FC;
loc_828BB41C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x828bb454
	if (!ctx.cr6.gt) goto loc_828BB454;
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
	ctx.lr = 0x828BB454;
	sub_82294520(ctx, base);
loc_828BB454:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828bb46c
	if (ctx.cr0.eq) goto loc_828BB46C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_828BB46C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_828BB474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BB47C"))) PPC_WEAK_FUNC(sub_828BB47C);
PPC_FUNC_IMPL(__imp__sub_828BB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB480"))) PPC_WEAK_FUNC(sub_828BB480);
PPC_FUNC_IMPL(__imp__sub_828BB480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BB488;
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
	// ble cr6,0x828bb4f0
	if (!ctx.cr6.gt) goto loc_828BB4F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828BB4A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828bb4dc
	if (!ctx.cr6.eq) goto loc_828BB4DC;
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
	ctx.lr = 0x828BB4D4;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_828BB4DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bb4a8
	if (ctx.cr6.lt) goto loc_828BB4A8;
loc_828BB4F0:
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

__attribute__((alias("__imp__sub_828BB500"))) PPC_WEAK_FUNC(sub_828BB500);
PPC_FUNC_IMPL(__imp__sub_828BB500) {
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

__attribute__((alias("__imp__sub_828BB510"))) PPC_WEAK_FUNC(sub_828BB510);
PPC_FUNC_IMPL(__imp__sub_828BB510) {
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x828bb5a8
	if (ctx.cr6.eq) goto loc_828BB5A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828bb584
	if (!ctx.cr6.gt) goto loc_828BB584;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x828bb564
	if (ctx.cr6.eq) goto loc_828BB564;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x828BB564;
	sub_82294520(ctx, base);
loc_828BB564:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x828BB578;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x828bb5a8
	goto loc_828BB5A8;
loc_828BB584:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x828bb5a8
	if (ctx.cr6.eq) goto loc_828BB5A8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x828BB5A8;
	sub_82294520(ctx, base);
loc_828BB5A8:
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

__attribute__((alias("__imp__sub_828BB5C0"))) PPC_WEAK_FUNC(sub_828BB5C0);
PPC_FUNC_IMPL(__imp__sub_828BB5C0) {
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

__attribute__((alias("__imp__sub_828BB5D0"))) PPC_WEAK_FUNC(sub_828BB5D0);
PPC_FUNC_IMPL(__imp__sub_828BB5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB5D8"))) PPC_WEAK_FUNC(sub_828BB5D8);
PPC_FUNC_IMPL(__imp__sub_828BB5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828BB604;
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

__attribute__((alias("__imp__sub_828BB624"))) PPC_WEAK_FUNC(sub_828BB624);
PPC_FUNC_IMPL(__imp__sub_828BB624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB628"))) PPC_WEAK_FUNC(sub_828BB628);
PPC_FUNC_IMPL(__imp__sub_828BB628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828BB654;
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

__attribute__((alias("__imp__sub_828BB674"))) PPC_WEAK_FUNC(sub_828BB674);
PPC_FUNC_IMPL(__imp__sub_828BB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB678"))) PPC_WEAK_FUNC(sub_828BB678);
PPC_FUNC_IMPL(__imp__sub_828BB678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,30248
	ctx.r9.s64 = ctx.r11.s64 + 30248;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828bb6ac
	if (ctx.cr6.eq) goto loc_828BB6AC;
	// bl 0x82294a58
	ctx.lr = 0x828BB6A8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BB6AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB6C0"))) PPC_WEAK_FUNC(sub_828BB6C0);
PPC_FUNC_IMPL(__imp__sub_828BB6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,30248
	ctx.r10.s64 = ctx.r11.s64 + 30248;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB6D0"))) PPC_WEAK_FUNC(sub_828BB6D0);
PPC_FUNC_IMPL(__imp__sub_828BB6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f9,-28(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fsubs f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f7,-24(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f6,-16(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stfs f5,-12(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r6,-24(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r4,-12(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB750"))) PPC_WEAK_FUNC(sub_828BB750);
PPC_FUNC_IMPL(__imp__sub_828BB750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x828bb7c4
	if (ctx.cr6.lt) goto loc_828BB7C4;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x828bb7c4
	if (ctx.cr6.gt) goto loc_828BB7C4;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x828bb7c4
	if (ctx.cr6.lt) goto loc_828BB7C4;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x828bb7c4
	if (ctx.cr6.gt) goto loc_828BB7C4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x828bb7c4
	if (ctx.cr6.lt) goto loc_828BB7C4;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_828BB7C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB7CC"))) PPC_WEAK_FUNC(sub_828BB7CC);
PPC_FUNC_IMPL(__imp__sub_828BB7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB7D0"))) PPC_WEAK_FUNC(sub_828BB7D0);
PPC_FUNC_IMPL(__imp__sub_828BB7D0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,12
	ctx.r3.s64 = ctx.r9.s64 + 12;
	// lfs f7,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f8.f64 = double(temp.f32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f8,8(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x828BB814;
	sub_8281B1A8(ctx, base);
	// stfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x828BB82C;
	sub_8281B1A8(ctx, base);
	// stfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r9,20
	ctx.r3.s64 = ctx.r9.s64 + 20;
	// bl 0x8281b1a8
	ctx.lr = 0x828BB844;
	sub_8281B1A8(ctx, base);
	// stfs f3,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f4,28(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BB85C"))) PPC_WEAK_FUNC(sub_828BB85C);
PPC_FUNC_IMPL(__imp__sub_828BB85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB860"))) PPC_WEAK_FUNC(sub_828BB860);
PPC_FUNC_IMPL(__imp__sub_828BB860) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c9fc0
	ctx.lr = 0x828BB898;
	sub_828C9FC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x828BB8AC;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bb8ec
	if (ctx.cr6.eq) goto loc_828BB8EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828bb8ec
	if (!ctx.cr0.eq) goto loc_828BB8EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BB8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BB8EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76378
	ctx.lr = 0x828BB900;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76f10
	ctx.lr = 0x828BB914;
	sub_82E76F10(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lfs f29,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x828bb7d0
	ctx.lr = 0x828BB944;
	sub_828BB7D0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x828bb7d0
	ctx.lr = 0x828BB95C;
	sub_828BB7D0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x828bb7d0
	ctx.lr = 0x828BB974;
	sub_828BB7D0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828bb7d0
	ctx.lr = 0x828BB98C;
	sub_828BB7D0(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x828BB998;
	sub_82E77010(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_828BB9BC"))) PPC_WEAK_FUNC(sub_828BB9BC);
PPC_FUNC_IMPL(__imp__sub_828BB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BB9C0"))) PPC_WEAK_FUNC(sub_828BB9C0);
PPC_FUNC_IMPL(__imp__sub_828BB9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r7,r10,26144
	ctx.r7.s64 = ctx.r10.s64 + 26144;
	// addi r9,r11,30304
	ctx.r9.s64 = ctx.r11.s64 + 30304;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,26144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26144, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// clrlwi r11,r9,1
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r8,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r8.u32);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BBA00"))) PPC_WEAK_FUNC(sub_828BBA00);
PPC_FUNC_IMPL(__imp__sub_828BBA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r10,r11,26144
	ctx.r10.s64 = ctx.r11.s64 + 26144;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828BBA48"))) PPC_WEAK_FUNC(sub_828BBA48);
PPC_FUNC_IMPL(__imp__sub_828BBA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BBA4C"))) PPC_WEAK_FUNC(sub_828BBA4C);
PPC_FUNC_IMPL(__imp__sub_828BBA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BBA50"))) PPC_WEAK_FUNC(sub_828BBA50);
PPC_FUNC_IMPL(__imp__sub_828BBA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x828BBA58;
	__savegprlr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-25928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828bbc10
	if (!ctx.cr6.eq) goto loc_828BBC10;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// stw r11,-25928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25928, ctx.r11.u32);
	// addi r28,r9,26144
	ctx.r28.s64 = ctx.r9.s64 + 26144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82832788
	ctx.lr = 0x828BBA88;
	sub_82832788(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475bf8
	ctx.lr = 0x828BBA90;
	sub_82475BF8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r6,20
	ctx.r6.s64 = 20;
	// stb r11,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r11.u8);
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// li r5,24
	ctx.r5.s64 = 24;
	// stb r6,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r6.u8);
	// li r30,32
	ctx.r30.s64 = 32;
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// li r8,12
	ctx.r8.s64 = 12;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r30,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r30.u8);
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r30,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r30.u8);
	// li r27,3
	ctx.r27.s64 = 3;
	// stb r30,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r30.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r3,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r3.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// lwz r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r23,116(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,140
	ctx.r5.s64 = 140;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// addi r31,r3,-6728
	ctx.r31.s64 = ctx.r3.s64 + -6728;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stb r27,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r27.u8);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// stw r26,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r26.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x828BBB90;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828328f8
	ctx.lr = 0x828BBB98;
	sub_828328F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82832788
	ctx.lr = 0x828BBBA0;
	sub_82832788(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// addi r11,r11,-22816
	ctx.r11.s64 = ctx.r11.s64 + -22816;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r9,r9,-17840
	ctx.r9.s64 = ctx.r9.s64 + -17840;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_828BBBC4:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x828bbbc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828BBBC4;
	// lis r12,12687
	ctx.r12.s64 = 831455232;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r9.u32);
	// and r7,r10,r12
	ctx.r7.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r8,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// oris r8,r7,33312
	ctx.r8.u64 = ctx.r7.u64 | 2183135232;
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// stw r9,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r9.u32);
	// stw r8,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r8.u32);
loc_828BBC10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BBC1C"))) PPC_WEAK_FUNC(sub_828BBC1C);
PPC_FUNC_IMPL(__imp__sub_828BBC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BBC20"))) PPC_WEAK_FUNC(sub_828BBC20);
PPC_FUNC_IMPL(__imp__sub_828BBC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// addi r31,r11,-22816
	ctx.r31.s64 = ctx.r11.s64 + -22816;
	// addi r7,r9,-17840
	ctx.r7.s64 = ctx.r9.s64 + -17840;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// bl 0x828bbe48
	ctx.lr = 0x828BBC60;
	sub_828BBE48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BBC74"))) PPC_WEAK_FUNC(sub_828BBC74);
PPC_FUNC_IMPL(__imp__sub_828BBC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BBC78"))) PPC_WEAK_FUNC(sub_828BBC78);
PPC_FUNC_IMPL(__imp__sub_828BBC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f8,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lfs f6,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f6.f64 = double(temp.f32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// bl 0x828bbcc0
	ctx.lr = 0x828BBCB0;
	sub_828BBCC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BBCC0"))) PPC_WEAK_FUNC(sub_828BBCC0);
PPC_FUNC_IMPL(__imp__sub_828BBCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BBCC8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ad8
	ctx.lr = 0x828BBCD0;
	__savefpr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,436(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// beq cr6,0x828bbd34
	if (ctx.cr6.eq) goto loc_828BBD34;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BBD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_828BBD34:
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// bl 0x828bb7d0
	ctx.lr = 0x828BBD80;
	sub_828BB7D0(ctx, base);
	// fadds f24,f28,f24
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f28.f64 + ctx.f24.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f26,f30,f26
	ctx.f26.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x828bb7d0
	ctx.lr = 0x828BBDA0;
	sub_828BB7D0(ctx, base);
	// fadds f29,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f25.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fadds f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828bb7d0
	ctx.lr = 0x828BBDC0;
	sub_828BB7D0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828bb7d0
	ctx.lr = 0x828BBDD8;
	sub_828BB7D0(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-22816
	ctx.r3.s64 = ctx.r11.s64 + -22816;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r11,-17840
	ctx.r7.s64 = ctx.r11.s64 + -17840;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828bbe48
	ctx.lr = 0x828BBE20;
	sub_828BBE48(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b24
	ctx.lr = 0x828BBE2C;
	__restfpr_24(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BBE30"))) PPC_WEAK_FUNC(sub_828BBE30);
PPC_FUNC_IMPL(__imp__sub_828BBE30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BBE44"))) PPC_WEAK_FUNC(sub_828BBE44);
PPC_FUNC_IMPL(__imp__sub_828BBE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BBE48"))) PPC_WEAK_FUNC(sub_828BBE48);
PPC_FUNC_IMPL(__imp__sub_828BBE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x828BBE50;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BBE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x823b96c0
	ctx.lr = 0x828BBE88;
	sub_823B96C0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82404f08
	ctx.lr = 0x828BBE98;
	sub_82404F08(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bbed4
	if (ctx.cr6.eq) goto loc_828BBED4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828bbed4
	if (!ctx.cr0.eq) goto loc_828BBED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BBED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BBED4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a1f00
	ctx.lr = 0x828BBEDC;
	sub_823A1F00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824049b0
	ctx.lr = 0x828BBEEC;
	sub_824049B0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bbf28
	if (ctx.cr6.eq) goto loc_828BBF28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828bbf28
	if (!ctx.cr0.eq) goto loc_828BBF28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BBF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BBF28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BBF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r31,r11,-17840
	ctx.r31.s64 = ctx.r11.s64 + -17840;
	// addi r26,r10,-6224
	ctx.r26.s64 = ctx.r10.s64 + -6224;
	// beq cr6,0x828bbf7c
	if (ctx.cr6.eq) goto loc_828BBF7C;
	// addi r29,r30,256
	ctx.r29.s64 = ctx.r30.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x828BBF6C;
	sub_82CB1160(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x828BBF7C;
	sub_82CB1160(ctx, base);
loc_828BBF7C:
	// addi r29,r30,256
	ctx.r29.s64 = ctx.r30.s64 + 256;
	// addi r6,r30,384
	ctx.r6.s64 = ctx.r30.s64 + 384;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82404da8
	ctx.lr = 0x828BBF94;
	sub_82404DA8(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r31,r11,-22816
	ctx.r31.s64 = ctx.r11.s64 + -22816;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828BBFB0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828bbfb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828BBFB0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x828bc00c
	if (ctx.cr6.eq) goto loc_828BC00C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x828bc00c
	if (ctx.cr6.eq) goto loc_828BC00C;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x82843b58
	ctx.lr = 0x828BC008;
	sub_82843B58(ctx, base);
	// b 0x828bc0f4
	goto loc_828BC0F4;
loc_828BC00C:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x823a1f98
	ctx.lr = 0x828BC014;
	sub_823A1F98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82405038
	ctx.lr = 0x828BC024;
	sub_82405038(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bc060
	if (ctx.cr6.eq) goto loc_828BC060;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828bc060
	if (!ctx.cr0.eq) goto loc_828BC060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BC060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BC060:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x828bc0a0
	if (ctx.cr6.eq) goto loc_828BC0A0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x8289da60
	ctx.lr = 0x828BC09C;
	sub_8289DA60(ctx, base);
	// b 0x828bc0f4
	goto loc_828BC0F4;
loc_828BC0A0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bc0dc
	if (ctx.cr6.eq) goto loc_828BC0DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BC0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828BC0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828bc0dc
	if (ctx.cr6.eq) goto loc_828BC0DC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x828bc0f4
	if (!ctx.cr6.eq) goto loc_828BC0F4;
loc_828BC0DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8288bf18
	ctx.lr = 0x828BC0F4;
	sub_8288BF18(ctx, base);
loc_828BC0F4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x828bc10c
	if (ctx.cr6.eq) goto loc_828BC10C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x828BC10C;
	sub_82CB1160(ctx, base);
loc_828BC10C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BC114"))) PPC_WEAK_FUNC(sub_828BC114);
PPC_FUNC_IMPL(__imp__sub_828BC114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC118"))) PPC_WEAK_FUNC(sub_828BC118);
PPC_FUNC_IMPL(__imp__sub_828BC118) {
	PPC_FUNC_PROLOGUE();
	// clrldi r11,r4,58
	ctx.r11.u64 = ctx.r4.u64 & 0x3F;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sld r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC134"))) PPC_WEAK_FUNC(sub_828BC134);
PPC_FUNC_IMPL(__imp__sub_828BC134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC138"))) PPC_WEAK_FUNC(sub_828BC138);
PPC_FUNC_IMPL(__imp__sub_828BC138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828bc15c
	if (!ctx.cr6.eq) goto loc_828BC15C;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_828BC15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC164"))) PPC_WEAK_FUNC(sub_828BC164);
PPC_FUNC_IMPL(__imp__sub_828BC164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC168"))) PPC_WEAK_FUNC(sub_828BC168);
PPC_FUNC_IMPL(__imp__sub_828BC168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BC170;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r27,r28,8
	ctx.r27.s64 = ctx.r28.s64 + 8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BC198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r9,272
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 272, ctx.xer);
	// bge cr6,0x828bc228
	if (!ctx.cr6.lt) goto loc_828BC228;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// std r30,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r30.u64);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze. r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x828bc244
	if (!ctx.cr0.gt) goto loc_828BC244;
loc_828BC1C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BC1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// ld r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sld r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r9.u8 & 0x7F));
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// std r4,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r4.u64);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r11,31
	ctx.r3.s64 = ctx.r11.s64 + 31;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bc1c4
	if (ctx.cr6.lt) goto loc_828BC1C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_828BC228:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BC244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BC244:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BC250"))) PPC_WEAK_FUNC(sub_828BC250);
PPC_FUNC_IMPL(__imp__sub_828BC250) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC25C"))) PPC_WEAK_FUNC(sub_828BC25C);
PPC_FUNC_IMPL(__imp__sub_828BC25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC260"))) PPC_WEAK_FUNC(sub_828BC260);
PPC_FUNC_IMPL(__imp__sub_828BC260) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC278"))) PPC_WEAK_FUNC(sub_828BC278);
PPC_FUNC_IMPL(__imp__sub_828BC278) {
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
	// bl 0x82456638
	ctx.lr = 0x828BC288;
	sub_82456638(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC2A0"))) PPC_WEAK_FUNC(sub_828BC2A0);
PPC_FUNC_IMPL(__imp__sub_828BC2A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r8,r10,30992
	ctx.r8.s64 = ctx.r10.s64 + 30992;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// rlwinm r9,r10,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r10.u8);
	// lbz r9,668(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 668);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC33C"))) PPC_WEAK_FUNC(sub_828BC33C);
PPC_FUNC_IMPL(__imp__sub_828BC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC340"))) PPC_WEAK_FUNC(sub_828BC340);
PPC_FUNC_IMPL(__imp__sub_828BC340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,30332
	ctx.r4.s64 = ctx.r11.s64 + 30332;
	// bl 0x822960c0
	ctx.lr = 0x828BC360;
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

__attribute__((alias("__imp__sub_828BC378"))) PPC_WEAK_FUNC(sub_828BC378);
PPC_FUNC_IMPL(__imp__sub_828BC378) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC380"))) PPC_WEAK_FUNC(sub_828BC380);
PPC_FUNC_IMPL(__imp__sub_828BC380) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC388"))) PPC_WEAK_FUNC(sub_828BC388);
PPC_FUNC_IMPL(__imp__sub_828BC388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC390"))) PPC_WEAK_FUNC(sub_828BC390);
PPC_FUNC_IMPL(__imp__sub_828BC390) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC39C"))) PPC_WEAK_FUNC(sub_828BC39C);
PPC_FUNC_IMPL(__imp__sub_828BC39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC3A0"))) PPC_WEAK_FUNC(sub_828BC3A0);
PPC_FUNC_IMPL(__imp__sub_828BC3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x828bc3b8
	if (!ctx.cr6.lt) goto loc_828BC3B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828BC3B0:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
loc_828BC3B8:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828bc3b0
	if (!ctx.cr6.lt) goto loc_828BC3B0;
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC3C8"))) PPC_WEAK_FUNC(sub_828BC3C8);
PPC_FUNC_IMPL(__imp__sub_828BC3C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC3D4"))) PPC_WEAK_FUNC(sub_828BC3D4);
PPC_FUNC_IMPL(__imp__sub_828BC3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC3D8"))) PPC_WEAK_FUNC(sub_828BC3D8);
PPC_FUNC_IMPL(__imp__sub_828BC3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828bc2a0
	ctx.lr = 0x828BC3F8;
	sub_828BC2A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,31536
	ctx.r10.s64 = ctx.r11.s64 + 31536;
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

__attribute__((alias("__imp__sub_828BC41C"))) PPC_WEAK_FUNC(sub_828BC41C);
PPC_FUNC_IMPL(__imp__sub_828BC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC420"))) PPC_WEAK_FUNC(sub_828BC420);
PPC_FUNC_IMPL(__imp__sub_828BC420) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be580
	sub_828BE580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BC424"))) PPC_WEAK_FUNC(sub_828BC424);
PPC_FUNC_IMPL(__imp__sub_828BC424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC428"))) PPC_WEAK_FUNC(sub_828BC428);
PPC_FUNC_IMPL(__imp__sub_828BC428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC42C"))) PPC_WEAK_FUNC(sub_828BC42C);
PPC_FUNC_IMPL(__imp__sub_828BC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC430"))) PPC_WEAK_FUNC(sub_828BC430);
PPC_FUNC_IMPL(__imp__sub_828BC430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC434"))) PPC_WEAK_FUNC(sub_828BC434);
PPC_FUNC_IMPL(__imp__sub_828BC434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC438"))) PPC_WEAK_FUNC(sub_828BC438);
PPC_FUNC_IMPL(__imp__sub_828BC438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,30392
	ctx.r4.s64 = ctx.r11.s64 + 30392;
	// bl 0x822960c0
	ctx.lr = 0x828BC458;
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

__attribute__((alias("__imp__sub_828BC470"))) PPC_WEAK_FUNC(sub_828BC470);
PPC_FUNC_IMPL(__imp__sub_828BC470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC474"))) PPC_WEAK_FUNC(sub_828BC474);
PPC_FUNC_IMPL(__imp__sub_828BC474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC478"))) PPC_WEAK_FUNC(sub_828BC478);
PPC_FUNC_IMPL(__imp__sub_828BC478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be7c0
	sub_828BE7C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BC47C"))) PPC_WEAK_FUNC(sub_828BC47C);
PPC_FUNC_IMPL(__imp__sub_828BC47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC480"))) PPC_WEAK_FUNC(sub_828BC480);
PPC_FUNC_IMPL(__imp__sub_828BC480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828BC4C0"))) PPC_WEAK_FUNC(sub_828BC4C0);
PPC_FUNC_IMPL(__imp__sub_828BC4C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC4C4"))) PPC_WEAK_FUNC(sub_828BC4C4);
PPC_FUNC_IMPL(__imp__sub_828BC4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC4C8"))) PPC_WEAK_FUNC(sub_828BC4C8);
PPC_FUNC_IMPL(__imp__sub_828BC4C8) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,30968
	ctx.r10.s64 = ctx.r11.s64 + 30968;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x828bc6c0
	ctx.lr = 0x828BC528;
	sub_828BC6C0(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x828bc768
	ctx.lr = 0x828BC530;
	sub_828BC768(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r30.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
	// stw r30,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r30.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bc590
	if (ctx.cr6.eq) goto loc_828BC590;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// rlwinm r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,668(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// rlwinm r7,r8,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828bc590
	if (ctx.cr6.eq) goto loc_828BC590;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// lbz r9,668(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 668);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828bc590
	if (ctx.cr6.eq) goto loc_828BC590;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_828BC590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c0e00
	ctx.lr = 0x828BC598;
	sub_828C0E00(ctx, base);
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

__attribute__((alias("__imp__sub_828BC5B4"))) PPC_WEAK_FUNC(sub_828BC5B4);
PPC_FUNC_IMPL(__imp__sub_828BC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC5B8"))) PPC_WEAK_FUNC(sub_828BC5B8);
PPC_FUNC_IMPL(__imp__sub_828BC5B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5C0"))) PPC_WEAK_FUNC(sub_828BC5C0);
PPC_FUNC_IMPL(__imp__sub_828BC5C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5C8"))) PPC_WEAK_FUNC(sub_828BC5C8);
PPC_FUNC_IMPL(__imp__sub_828BC5C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5D0"))) PPC_WEAK_FUNC(sub_828BC5D0);
PPC_FUNC_IMPL(__imp__sub_828BC5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5D8"))) PPC_WEAK_FUNC(sub_828BC5D8);
PPC_FUNC_IMPL(__imp__sub_828BC5D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5E0"))) PPC_WEAK_FUNC(sub_828BC5E0);
PPC_FUNC_IMPL(__imp__sub_828BC5E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5E8"))) PPC_WEAK_FUNC(sub_828BC5E8);
PPC_FUNC_IMPL(__imp__sub_828BC5E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5F0"))) PPC_WEAK_FUNC(sub_828BC5F0);
PPC_FUNC_IMPL(__imp__sub_828BC5F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC5F8"))) PPC_WEAK_FUNC(sub_828BC5F8);
PPC_FUNC_IMPL(__imp__sub_828BC5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC600"))) PPC_WEAK_FUNC(sub_828BC600);
PPC_FUNC_IMPL(__imp__sub_828BC600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC60C"))) PPC_WEAK_FUNC(sub_828BC60C);
PPC_FUNC_IMPL(__imp__sub_828BC60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC610"))) PPC_WEAK_FUNC(sub_828BC610);
PPC_FUNC_IMPL(__imp__sub_828BC610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC624"))) PPC_WEAK_FUNC(sub_828BC624);
PPC_FUNC_IMPL(__imp__sub_828BC624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC628"))) PPC_WEAK_FUNC(sub_828BC628);
PPC_FUNC_IMPL(__imp__sub_828BC628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC63C"))) PPC_WEAK_FUNC(sub_828BC63C);
PPC_FUNC_IMPL(__imp__sub_828BC63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC640"))) PPC_WEAK_FUNC(sub_828BC640);
PPC_FUNC_IMPL(__imp__sub_828BC640) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828BC65C"))) PPC_WEAK_FUNC(sub_828BC65C);
PPC_FUNC_IMPL(__imp__sub_828BC65C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC660"))) PPC_WEAK_FUNC(sub_828BC660);
PPC_FUNC_IMPL(__imp__sub_828BC660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC66C"))) PPC_WEAK_FUNC(sub_828BC66C);
PPC_FUNC_IMPL(__imp__sub_828BC66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC670"))) PPC_WEAK_FUNC(sub_828BC670);
PPC_FUNC_IMPL(__imp__sub_828BC670) {
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
	// bl 0x828c0350
	ctx.lr = 0x828BC690;
	sub_828C0350(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bc6a8
	if (ctx.cr6.eq) goto loc_828BC6A8;
	// bl 0x82294a58
	ctx.lr = 0x828BC6A4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BC6A8:
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

__attribute__((alias("__imp__sub_828BC6C0"))) PPC_WEAK_FUNC(sub_828BC6C0);
PPC_FUNC_IMPL(__imp__sub_828BC6C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r5,r10,31028
	ctx.r5.s64 = ctx.r10.s64 + 31028;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stb r11,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r11.u8);
	// stb r9,241(r3)
	PPC_STORE_U8(ctx.r3.u32 + 241, ctx.r9.u8);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r8,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r8.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// stb r11,261(r3)
	PPC_STORE_U8(ctx.r3.u32 + 261, ctx.r11.u8);
	// stb r11,262(r3)
	PPC_STORE_U8(ctx.r3.u32 + 262, ctx.r11.u8);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
	// stb r11,273(r3)
	PPC_STORE_U8(ctx.r3.u32 + 273, ctx.r11.u8);
	// stb r11,274(r3)
	PPC_STORE_U8(ctx.r3.u32 + 274, ctx.r11.u8);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stb r11,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r11.u8);
	// stb r11,285(r3)
	PPC_STORE_U8(ctx.r3.u32 + 285, ctx.r11.u8);
	// stb r11,286(r3)
	PPC_STORE_U8(ctx.r3.u32 + 286, ctx.r11.u8);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC760"))) PPC_WEAK_FUNC(sub_828BC760);
PPC_FUNC_IMPL(__imp__sub_828BC760) {
	PPC_FUNC_PROLOGUE();
	// b 0x82475d80
	sub_82475D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BC764"))) PPC_WEAK_FUNC(sub_828BC764);
PPC_FUNC_IMPL(__imp__sub_828BC764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC768"))) PPC_WEAK_FUNC(sub_828BC768);
PPC_FUNC_IMPL(__imp__sub_828BC768) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-17840
	ctx.r4.s64 = ctx.r10.s64 + -17840;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x828BC79C;
	sub_82CB1160(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r6,r7,32292
	ctx.r6.s64 = ctx.r7.s64 + 32292;
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x828bc6c0
	ctx.lr = 0x828BC7CC;
	sub_828BC6C0(ctx, base);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// lis r4,-32233
	ctx.r4.s64 = -2112421888;
	// addi r3,r5,31080
	ctx.r3.s64 = ctx.r5.s64 + 31080;
	// addi r11,r4,31104
	ctx.r11.s64 = ctx.r4.s64 + 31104;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC7FC"))) PPC_WEAK_FUNC(sub_828BC7FC);
PPC_FUNC_IMPL(__imp__sub_828BC7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC800"))) PPC_WEAK_FUNC(sub_828BC800);
PPC_FUNC_IMPL(__imp__sub_828BC800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bne cr6,0x828bc824
	if (!ctx.cr6.eq) goto loc_828BC824;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BC824:
	// bl 0x82475d80
	ctx.lr = 0x828BC828;
	sub_82475D80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,32272
	ctx.r10.s64 = ctx.r11.s64 + 32272;
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

__attribute__((alias("__imp__sub_828BC848"))) PPC_WEAK_FUNC(sub_828BC848);
PPC_FUNC_IMPL(__imp__sub_828BC848) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC88C"))) PPC_WEAK_FUNC(sub_828BC88C);
PPC_FUNC_IMPL(__imp__sub_828BC88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC890"))) PPC_WEAK_FUNC(sub_828BC890);
PPC_FUNC_IMPL(__imp__sub_828BC890) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bne cr6,0x828bc8bc
	if (!ctx.cr6.eq) goto loc_828BC8BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BC8BC:
	// bl 0x82475d80
	ctx.lr = 0x828BC8C0;
	sub_82475D80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x828bc8e4
	if (ctx.cr6.eq) goto loc_828BC8E4;
	// bl 0x82294a58
	ctx.lr = 0x828BC8E0;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BC8E4:
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

__attribute__((alias("__imp__sub_828BC8FC"))) PPC_WEAK_FUNC(sub_828BC8FC);
PPC_FUNC_IMPL(__imp__sub_828BC8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC900"))) PPC_WEAK_FUNC(sub_828BC900);
PPC_FUNC_IMPL(__imp__sub_828BC900) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-17840
	ctx.r4.s64 = ctx.r10.s64 + -17840;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x828BC934;
	sub_82CB1160(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,32292
	ctx.r6.s64 = ctx.r7.s64 + 32292;
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
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

__attribute__((alias("__imp__sub_828BC974"))) PPC_WEAK_FUNC(sub_828BC974);
PPC_FUNC_IMPL(__imp__sub_828BC974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BC978"))) PPC_WEAK_FUNC(sub_828BC978);
PPC_FUNC_IMPL(__imp__sub_828BC978) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r8,r10,31572
	ctx.r8.s64 = ctx.r10.s64 + 31572;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BC9C0"))) PPC_WEAK_FUNC(sub_828BC9C0);
PPC_FUNC_IMPL(__imp__sub_828BC9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,30456
	ctx.r4.s64 = ctx.r11.s64 + 30456;
	// bl 0x822960c0
	ctx.lr = 0x828BC9E0;
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

__attribute__((alias("__imp__sub_828BC9F8"))) PPC_WEAK_FUNC(sub_828BC9F8);
PPC_FUNC_IMPL(__imp__sub_828BC9F8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828c79a0
	sub_828C79A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BCA00"))) PPC_WEAK_FUNC(sub_828BCA00);
PPC_FUNC_IMPL(__imp__sub_828BCA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x828BCA08;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,31672
	ctx.r10.s64 = ctx.r11.s64 + 31672;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r27,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// addi r29,r24,4
	ctx.r29.s64 = ctx.r24.s64 + 4;
	// stw r27,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r27.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r27,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r27.u32);
	// stw r27,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r27.u32);
	// stw r9,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r9.u32);
	// lwz r8,672(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828bca98
	if (!ctx.cr6.gt) goto loc_828BCA98;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// std r11,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r11.u64);
	// std r10,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r10.u64);
loc_828BCA70:
	// lwz r11,668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x828c4648
	ctx.lr = 0x828BCA84;
	sub_828C4648(ctx, base);
	// lwz r11,672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bca70
	if (ctx.cr6.lt) goto loc_828BCA70;
loc_828BCA98:
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// beq cr6,0x828bcb0c
	if (ctx.cr6.eq) goto loc_828BCB0C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828bcb0c
	if (!ctx.cr6.gt) goto loc_828BCB0C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// std r11,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r11.u64);
	// std r9,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r9.u64);
loc_828BCADC:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828c4648
	ctx.lr = 0x828BCAF4;
	sub_828C4648(ctx, base);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bcadc
	if (ctx.cr6.lt) goto loc_828BCADC;
loc_828BCB0C:
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828bcba8
	if (!ctx.cr6.gt) goto loc_828BCBA8;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r28,3
	ctx.r28.s64 = 3;
loc_828BCB24:
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwzx r31,r26,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828bcb94
	if (ctx.cr6.eq) goto loc_828BCB94;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bcb94
	if (ctx.cr6.eq) goto loc_828BCB94;
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// ld r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r10,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r10.u64);
	// std r9,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r9.u64);
	// bl 0x828c4648
	ctx.lr = 0x828BCB6C;
	sub_828C4648(ctx, base);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r5,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
loc_828BCB94:
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bcb24
	if (ctx.cr6.lt) goto loc_828BCB24;
loc_828BCBA8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BCBB4"))) PPC_WEAK_FUNC(sub_828BCBB4);
PPC_FUNC_IMPL(__imp__sub_828BCBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCBB8"))) PPC_WEAK_FUNC(sub_828BCBB8);
PPC_FUNC_IMPL(__imp__sub_828BCBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828BCBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c4768
	ctx.lr = 0x828BCBDC;
	sub_828C4768(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bcbf8
	if (!ctx.cr6.eq) goto loc_828BCBF8;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c4768
	ctx.lr = 0x828BCBF0;
	sub_828C4768(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bcc00
	if (ctx.cr6.eq) goto loc_828BCC00;
loc_828BCBF8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828bcc28
	goto loc_828BCC28;
loc_828BCC00:
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// std r9,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r9.u64);
	// std r8,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r8.u64);
loc_828BCC28:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828BCC34:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x828bcc34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828BCC34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BCC54"))) PPC_WEAK_FUNC(sub_828BCC54);
PPC_FUNC_IMPL(__imp__sub_828BCC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCC58"))) PPC_WEAK_FUNC(sub_828BCC58);
PPC_FUNC_IMPL(__imp__sub_828BCC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bcc98
	if (ctx.cr6.eq) goto loc_828BCC98;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BCC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828bcce4
	goto loc_828BCCE4;
loc_828BCC98:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_828BCCE4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828BCCF0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828bccf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828BCCF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCD1C"))) PPC_WEAK_FUNC(sub_828BCD1C);
PPC_FUNC_IMPL(__imp__sub_828BCD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCD20"))) PPC_WEAK_FUNC(sub_828BCD20);
PPC_FUNC_IMPL(__imp__sub_828BCD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x828BCD28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r27,284(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// clrlwi r30,r11,14
	ctx.r30.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ld r26,20(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20);
	// beq cr6,0x828bce2c
	if (ctx.cr6.eq) goto loc_828BCE2C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264f2c0
	ctx.lr = 0x828BCD64;
	sub_8264F2C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bcdec
	if (ctx.cr6.eq) goto loc_828BCDEC;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r26,r12
	ctx.r11.u64 = ctx.r26.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x828bcdec
	if (ctx.cr6.eq) goto loc_828BCDEC;
	// oris r11,r30,16384
	ctx.r11.u64 = ctx.r30.u64 | 1073741824;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823bbff0
	ctx.lr = 0x828BCD94;
	sub_823BBFF0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x828bcdac
	if (ctx.cr6.gt) goto loc_828BCDAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417c30
	ctx.lr = 0x828BCDAC;
	sub_82417C30(ctx, base);
loc_828BCDAC:
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x828bcdc8
	if (ctx.cr6.eq) goto loc_828BCDC8;
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x828bcdcc
	if (ctx.cr6.gt) goto loc_828BCDCC;
loc_828BCDC8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_828BCDCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x828bcdec
	if (!ctx.cr6.eq) goto loc_828BCDEC;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_828BCDEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264f3a8
	ctx.lr = 0x828BCDF8;
	sub_8264F3A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bce2c
	if (ctx.cr6.eq) goto loc_828BCE2C;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r26,r12
	ctx.r11.u64 = ctx.r26.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x828bce30
	if (ctx.cr6.eq) goto loc_828BCE30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_828BCE2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BCE30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BCE38"))) PPC_WEAK_FUNC(sub_828BCE38);
PPC_FUNC_IMPL(__imp__sub_828BCE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BCE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bced4
	if (ctx.cr6.eq) goto loc_828BCED4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bcedc
	if (ctx.cr6.eq) goto loc_828BCEDC;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BCE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828bceac
	if (ctx.cr6.eq) goto loc_828BCEAC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_828BCEAC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828bcec0
	if (ctx.cr6.eq) goto loc_828BCEC0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828bcec0
	if (ctx.cr6.eq) goto loc_828BCEC0;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_828BCEC0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x828bcedc
	if (ctx.cr6.eq) goto loc_828BCEDC;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_828BCED4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_828BCEDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BCEE4"))) PPC_WEAK_FUNC(sub_828BCEE4);
PPC_FUNC_IMPL(__imp__sub_828BCEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCEE8"))) PPC_WEAK_FUNC(sub_828BCEE8);
PPC_FUNC_IMPL(__imp__sub_828BCEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCEF4"))) PPC_WEAK_FUNC(sub_828BCEF4);
PPC_FUNC_IMPL(__imp__sub_828BCEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCEF8"))) PPC_WEAK_FUNC(sub_828BCEF8);
PPC_FUNC_IMPL(__imp__sub_828BCEF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1019
	ctx.r3.s64 = 1019;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCF00"))) PPC_WEAK_FUNC(sub_828BCF00);
PPC_FUNC_IMPL(__imp__sub_828BCF00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCF10"))) PPC_WEAK_FUNC(sub_828BCF10);
PPC_FUNC_IMPL(__imp__sub_828BCF10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCF1C"))) PPC_WEAK_FUNC(sub_828BCF1C);
PPC_FUNC_IMPL(__imp__sub_828BCF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCF20"))) PPC_WEAK_FUNC(sub_828BCF20);
PPC_FUNC_IMPL(__imp__sub_828BCF20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCF28"))) PPC_WEAK_FUNC(sub_828BCF28);
PPC_FUNC_IMPL(__imp__sub_828BCF28) {
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

__attribute__((alias("__imp__sub_828BCF48"))) PPC_WEAK_FUNC(sub_828BCF48);
PPC_FUNC_IMPL(__imp__sub_828BCF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828BCF64;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x828c6540
	ctx.lr = 0x828BCF78;
	sub_828C6540(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCF8C"))) PPC_WEAK_FUNC(sub_828BCF8C);
PPC_FUNC_IMPL(__imp__sub_828BCF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCF90"))) PPC_WEAK_FUNC(sub_828BCF90);
PPC_FUNC_IMPL(__imp__sub_828BCF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,31680
	ctx.r10.s64 = ctx.r11.s64 + 31680;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCFA0"))) PPC_WEAK_FUNC(sub_828BCFA0);
PPC_FUNC_IMPL(__imp__sub_828BCFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31680
	ctx.r9.s64 = ctx.r11.s64 + 31680;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCFB8"))) PPC_WEAK_FUNC(sub_828BCFB8);
PPC_FUNC_IMPL(__imp__sub_828BCFB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BCFC4"))) PPC_WEAK_FUNC(sub_828BCFC4);
PPC_FUNC_IMPL(__imp__sub_828BCFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BCFC8"))) PPC_WEAK_FUNC(sub_828BCFC8);
PPC_FUNC_IMPL(__imp__sub_828BCFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,31680
	ctx.r9.s64 = ctx.r11.s64 + 31680;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828bcffc
	if (ctx.cr6.eq) goto loc_828BCFFC;
	// bl 0x82294a58
	ctx.lr = 0x828BCFF8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BCFFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BD010"))) PPC_WEAK_FUNC(sub_828BD010);
PPC_FUNC_IMPL(__imp__sub_828BD010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17800);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828bd028
	if (!ctx.cr6.lt) goto loc_828BD028;
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_828BD028:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828bd04c
	if (!ctx.cr6.lt) goto loc_828BD04C;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x828bd0a0
	if (!ctx.cr6.lt) goto loc_828BD0A0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_828BD04C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828bd070
	if (!ctx.cr6.lt) goto loc_828BD070;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x828bd0a0
	if (!ctx.cr6.lt) goto loc_828BD0A0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_828BD070:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828bd094
	if (!ctx.cr6.lt) goto loc_828BD094;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x828bd0a0
	if (!ctx.cr6.lt) goto loc_828BD0A0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_828BD094:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x828bd0a0
	if (!ctx.cr6.lt) goto loc_828BD0A0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_828BD0A0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BD0A8"))) PPC_WEAK_FUNC(sub_828BD0A8);
PPC_FUNC_IMPL(__imp__sub_828BD0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x828BD0B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828bd0dc
	if (ctx.cr6.eq) goto loc_828BD0DC;
	// lwz r3,148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bd0e8
	if (!ctx.cr6.eq) goto loc_828BD0E8;
loc_828BD0DC:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
loc_828BD0E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r7,r9,31688
	ctx.r7.s64 = ctx.r9.s64 + 31688;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,572(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 572);
	// bl 0x8279e5c8
	ctx.lr = 0x828BD120;
	sub_8279E5C8(ctx, base);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BD158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828bd214
	if (ctx.cr6.eq) goto loc_828BD214;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82627378
	ctx.lr = 0x828BD170;
	sub_82627378(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x828bd1d4
	if (ctx.cr6.eq) goto loc_828BD1D4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x828bd214
	if (!ctx.cr6.eq) goto loc_828BD214;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fsubs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BD1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_828BD1D4:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BD1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_828BD214:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BD220"))) PPC_WEAK_FUNC(sub_828BD220);
PPC_FUNC_IMPL(__imp__sub_828BD220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r10,r11,31688
	ctx.r10.s64 = ctx.r11.s64 + 31688;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BD238"))) PPC_WEAK_FUNC(sub_828BD238);
PPC_FUNC_IMPL(__imp__sub_828BD238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x828BD240;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae0
	ctx.lr = 0x828BD248;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x828bd444
	if (ctx.cr6.gt) goto loc_828BD444;
	// lis r12,-32116
	ctx.r12.s64 = -2104754176;
	// addi r12,r12,-11656
	ctx.r12.s64 = ctx.r12.s64 + -11656;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_828BD288;
	case 1:
		goto loc_828BD288;
	case 2:
		goto loc_828BD290;
	case 3:
		goto loc_828BD298;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-11640(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11640);
	// lwz r20,-11640(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11640);
	// lwz r20,-11632(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11632);
	// lwz r20,-11624(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11624);
loc_828BD288:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x828bd29c
	goto loc_828BD29C;
loc_828BD290:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x828bd29c
	goto loc_828BD29C;
loc_828BD298:
	// li r4,4
	ctx.r4.s64 = 4;
loc_828BD29C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x828bd2dc
	if (!ctx.cr6.eq) goto loc_828BD2DC;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// b 0x828bd2e0
	goto loc_828BD2E0;
loc_828BD2DC:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
loc_828BD2E0:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfd f31,32232(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32232);
	// fmul f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 * ctx.f31.f64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82cb4940
	ctx.lr = 0x828BD2F8;
	sub_82CB4940(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// lfs f12,136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x82cb4860
	ctx.lr = 0x828BD310;
	sub_82CB4860(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// lfs f10,136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fmul f9,f10,f31
	ctx.f9.f64 = ctx.f10.f64 * ctx.f31.f64;
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// bl 0x82cb4860
	ctx.lr = 0x828BD328;
	sub_82CB4860(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// lfs f8,136(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fmul f7,f8,f31
	ctx.f7.f64 = ctx.f8.f64 * ctx.f31.f64;
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// bl 0x82cb4940
	ctx.lr = 0x828BD340;
	sub_82CB4940(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fdivs f30,f29,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 / ctx.f30.f64));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f2,144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f1,140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,0(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828BD390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fmuls f2,f30,f28
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// fneg f1,f6
	ctx.f1.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x828BD3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BD3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmuls f2,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// fmuls f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BD3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,164(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828BD404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,200(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x828BD41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,148(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x828BD434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b2c
	ctx.lr = 0x828BD440;
	__restfpr_26(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_828BD444:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b2c
	ctx.lr = 0x828BD454;
	__restfpr_26(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BD458"))) PPC_WEAK_FUNC(sub_828BD458);
PPC_FUNC_IMPL(__imp__sub_828BD458) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BD460"))) PPC_WEAK_FUNC(sub_828BD460);
PPC_FUNC_IMPL(__imp__sub_828BD460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x828BD468;
	__savegprlr_16(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r10,180(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bda8c
	if (!ctx.cr6.gt) goto loc_828BDA8C;
	// ld r8,172(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 172);
	// li r18,1
	ctx.r18.s64 = 1;
loc_828BD498:
	// clrldi r7,r11,58
	ctx.r7.u64 = ctx.r11.u64 & 0x3F;
	// slw r6,r18,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r7.u8 & 0x3F));
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x828bd4b0
	if (ctx.cr6.eq) goto loc_828BD4B0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_828BD4B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bd498
	if (ctx.cr6.lt) goto loc_828BD498;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x828bd540
	if (!ctx.cr6.eq) goto loc_828BD540;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bd500
	if (!ctx.cr6.gt) goto loc_828BD500;
loc_828BD4D0:
	// clrldi r9,r11,58
	ctx.r9.u64 = ctx.r11.u64 & 0x3F;
	// slw r7,r18,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r9.u8 & 0x3F));
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x828bd4f4
	if (ctx.cr6.eq) goto loc_828BD4F4;
	// lwz r9,168(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r7,584(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 584);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828bd50c
	if (ctx.cr6.lt) goto loc_828BD50C;
loc_828BD4F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bd4d0
	if (ctx.cr6.lt) goto loc_828BD4D0;
loc_828BD500:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_828BD50C:
	// lwz r10,168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// lwz r10,580(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x828bd0a8
	ctx.lr = 0x828BD538;
	sub_828BD0A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_828BD540:
	// ble cr6,0x828bda8c
	if (!ctx.cr6.gt) goto loc_828BDA8C;
	// lis r26,-31884
	ctx.r26.s64 = -2089549824;
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
	// li r20,-1
	ctx.r20.s64 = -1;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r11,25344(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25344);
	// lwz r9,568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828bd650
	if (!ctx.cr6.gt) goto loc_828BD650;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bd608
	if (!ctx.cr6.gt) goto loc_828BD608;
loc_828BD584:
	// clrldi r10,r31,58
	ctx.r10.u64 = ctx.r31.u64 & 0x3F;
	// ld r9,172(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 172);
	// slw r8,r18,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828bd5f0
	if (ctx.cr6.eq) goto loc_828BD5F0;
	// lwz r10,168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r11,584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828bd5f0
	if (!ctx.cr6.lt) goto loc_828BD5F0;
	// srawi r11,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828bd5c4
	if (!ctx.cr6.lt) goto loc_828BD5C4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_828BD5C4:
	// lwz r11,580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bd5f0
	if (ctx.cr6.eq) goto loc_828BD5F0;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bd5f0
	if (ctx.cr6.eq) goto loc_828BD5F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8279dc48
	ctx.lr = 0x828BD5F0;
	sub_8279DC48(ctx, base);
loc_828BD5F0:
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bd584
	if (ctx.cr6.lt) goto loc_828BD584;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_828BD608:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// beq cr6,0x828bd644
	if (ctx.cr6.eq) goto loc_828BD644;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bd630
	if (!ctx.cr6.eq) goto loc_828BD630;
	// bl 0x822900a0
	ctx.lr = 0x828BD62C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_828BD630:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BD644:
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
loc_828BD650:
	// lwz r11,25344(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25344);
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bd684
	if (ctx.cr6.lt) goto loc_828BD684;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,30536
	ctx.r4.s64 = ctx.r10.s64 + 30536;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BD67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_828BD684:
	// cmpwi cr6,r17,8
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 8, ctx.xer);
	// bne cr6,0x828bd71c
	if (!ctx.cr6.eq) goto loc_828BD71C;
	// lwz r8,168(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r11,528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 528);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828bd71c
	if (ctx.cr6.eq) goto loc_828BD71C;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// lwz r9,520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x828bd71c
	if (!ctx.cr6.lt) goto loc_828BD71C;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// lwz r9,516(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bd71c
	if (ctx.cr6.eq) goto loc_828BD71C;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bd71c
	if (!ctx.cr6.gt) goto loc_828BD71C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r9,584(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 584);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ble cr6,0x828bd71c
	if (!ctx.cr6.gt) goto loc_828BD71C;
	// lwz r11,580(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 580);
loc_828BD700:
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x828bd934
	if (ctx.cr6.eq) goto loc_828BD934;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bd700
	if (ctx.cr6.lt) goto loc_828BD700;
loc_828BD71C:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stw r21,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r21.u32);
	// addi r4,r11,30592
	ctx.r4.s64 = ctx.r11.s64 + 30592;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e8b0
	ctx.lr = 0x828BD748;
	sub_8230E8B0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BD764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,180(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828bda08
	if (!ctx.cr6.gt) goto loc_828BDA08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r23,r11,11272
	ctx.r23.s64 = ctx.r11.s64 + 11272;
	// addi r22,r10,30656
	ctx.r22.s64 = ctx.r10.s64 + 30656;
loc_828BD78C:
	// clrldi r10,r29,58
	ctx.r10.u64 = ctx.r29.u64 & 0x3F;
	// ld r9,172(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 172);
	// slw r8,r18,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828bd9f4
	if (ctx.cr6.eq) goto loc_828BD9F4;
	// lwz r11,168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828bd9f4
	if (!ctx.cr6.lt) goto loc_828BD9F4;
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x828BD7C8;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82295908
	ctx.lr = 0x828BD7D4;
	sub_82295908(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828bd820
	if (ctx.cr6.eq) goto loc_828BD820;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828bd850
	if (ctx.cr6.eq) goto loc_828BD850;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bd800
	if (!ctx.cr6.eq) goto loc_828BD800;
	// bl 0x822900a0
	ctx.lr = 0x828BD7FC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_828BD800:
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
	ctx.lr = 0x828BD81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_828BD820:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828bd850
	if (ctx.cr6.eq) goto loc_828BD850;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bd83c
	if (!ctx.cr6.eq) goto loc_828BD83C;
	// bl 0x822900a0
	ctx.lr = 0x828BD838;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_828BD83C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BD850:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r24,160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// bne cr6,0x828bd874
	if (!ctx.cr6.eq) goto loc_828BD874;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_828BD874:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x828BD888;
	sub_8233E028(ctx, base);
	// lwz r11,168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x828BD8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,104(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BD8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x828bd974
	if (ctx.cr6.gt) goto loc_828BD974;
	// lis r12,-32116
	ctx.r12.s64 = -2104754176;
	// addi r12,r12,-9948
	ctx.r12.s64 = ctx.r12.s64 + -9948;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_828BD958;
	case 1:
		goto loc_828BD960;
	case 2:
		goto loc_828BD968;
	case 3:
		goto loc_828BD970;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-9896(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9896);
	// lwz r20,-9888(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9888);
	// lwz r20,-9880(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9880);
	// lwz r20,-9872(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9872);
loc_828BD934:
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828bd0a8
	ctx.lr = 0x828BD950;
	sub_828BD0A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_828BD958:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// b 0x828bd974
	goto loc_828BD974;
loc_828BD960:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// b 0x828bd974
	goto loc_828BD974;
loc_828BD968:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// b 0x828bd974
	goto loc_828BD974;
loc_828BD970:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
loc_828BD974:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828bd0a8
	ctx.lr = 0x828BD9A8;
	sub_828BD0A8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,156(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828BD9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x828bd9d8
	if (!ctx.cr6.eq) goto loc_828BD9D8;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// b 0x828bd9f4
	goto loc_828BD9F4;
loc_828BD9D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BD9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_828BD9F4:
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bd78c
	if (ctx.cr6.lt) goto loc_828BD78C;
loc_828BDA08:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828bda50
	if (ctx.cr6.eq) goto loc_828BDA50;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x828bda80
	if (ctx.cr6.eq) goto loc_828BDA80;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bda30
	if (!ctx.cr6.eq) goto loc_828BDA30;
	// bl 0x822900a0
	ctx.lr = 0x828BDA2C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_828BDA30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_828BDA50:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x828bda80
	if (ctx.cr6.eq) goto loc_828BDA80;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bda6c
	if (!ctx.cr6.eq) goto loc_828BDA6C;
	// bl 0x822900a0
	ctx.lr = 0x828BDA68;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_828BDA6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BDA80:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_828BDA8C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BDAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x828BDABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BDAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BDADC"))) PPC_WEAK_FUNC(sub_828BDADC);
PPC_FUNC_IMPL(__imp__sub_828BDADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BDAE0"))) PPC_WEAK_FUNC(sub_828BDAE0);
PPC_FUNC_IMPL(__imp__sub_828BDAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x828BDAE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828bdc1c
	if (!ctx.cr6.gt) goto loc_828BDC1C;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r26,r9,-19580
	ctx.r26.s64 = ctx.r9.s64 + -19580;
	// addi r28,r8,30716
	ctx.r28.s64 = ctx.r8.s64 + 30716;
	// addi r27,r10,30688
	ctx.r27.s64 = ctx.r10.s64 + 30688;
	// addi r25,r11,30684
	ctx.r25.s64 = ctx.r11.s64 + 30684;
	// b 0x828bdb44
	goto loc_828BDB44;
loc_828BDB40:
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_828BDB44:
	// clrldi r10,r31,58
	ctx.r10.u64 = ctx.r31.u64 & 0x3F;
	// ld r9,172(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 172);
	// slw r8,r24,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x828bdbf0
	if (ctx.cr6.eq) goto loc_828BDBF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x828bdb7c
	if (ctx.cr6.eq) goto loc_828BDB7C;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828bdb7c
	if (ctx.cr6.eq) goto loc_828BDB7C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3f98
	ctx.lr = 0x828BDB7C;
	sub_822B3F98(ctx, base);
loc_828BDB7C:
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828bdbe4
	if (!ctx.cr6.lt) goto loc_828BDBE4;
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bdbdc
	if (ctx.cr6.eq) goto loc_828BDBDC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x828bdbbc
	if (!ctx.cr6.eq) goto loc_828BDBBC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x828BDBB8;
	sub_822960C0(ctx, base);
	// b 0x828bdbc4
	goto loc_828BDBC4;
loc_828BDBBC:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x828BDBC4;
	sub_8233E1A0(ctx, base);
loc_828BDBC4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822951d0
	ctx.lr = 0x828BDBD0;
	sub_822951D0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x828BDBD8;
	sub_82299080(ctx, base);
	// b 0x828bdbf0
	goto loc_828BDBF0;
loc_828BDBDC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x828bdbe8
	goto loc_828BDBE8;
loc_828BDBE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828BDBE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3f98
	ctx.lr = 0x828BDBF0;
	sub_822B3F98(ctx, base);
loc_828BDBF0:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bdb40
	if (ctx.cr6.lt) goto loc_828BDB40;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828bdc1c
	if (ctx.cr6.eq) goto loc_828BDC1C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x828bdc24
	goto loc_828BDC24;
loc_828BDC1C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_828BDC24:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,30752
	ctx.r4.s64 = ctx.r11.s64 + 30752;
	// bl 0x8232e868
	ctx.lr = 0x828BDC34;
	sub_8232E868(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828bdc80
	if (ctx.cr6.eq) goto loc_828BDC80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828bdcb0
	if (ctx.cr6.eq) goto loc_828BDCB0;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bdc60
	if (!ctx.cr6.eq) goto loc_828BDC60;
	// bl 0x822900a0
	ctx.lr = 0x828BDC5C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_828BDC60:
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
	ctx.lr = 0x828BDC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_828BDC80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828bdcb0
	if (ctx.cr6.eq) goto loc_828BDCB0;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bdc9c
	if (!ctx.cr6.eq) goto loc_828BDC9C;
	// bl 0x822900a0
	ctx.lr = 0x828BDC98;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_828BDC9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BDCB0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BDCBC"))) PPC_WEAK_FUNC(sub_828BDCBC);
PPC_FUNC_IMPL(__imp__sub_828BDCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BDCC0"))) PPC_WEAK_FUNC(sub_828BDCC0);
PPC_FUNC_IMPL(__imp__sub_828BDCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x828BDCC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bdd74
	if (!ctx.cr6.gt) goto loc_828BDD74;
	// lis r26,-31884
	ctx.r26.s64 = -2089549824;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,25344(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25344);
loc_828BDCF8:
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bdd18
	if (ctx.cr6.eq) goto loc_828BDD18;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bdd24
	if (!ctx.cr6.eq) goto loc_828BDD24;
loc_828BDD18:
	// lwz r3,232(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bdd5c
	if (ctx.cr6.eq) goto loc_828BDD5C;
loc_828BDD24:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828BDD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bdd80
	if (!ctx.cr6.eq) goto loc_828BDD80;
	// lwz r10,25344(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25344);
loc_828BDD5C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// lwz r9,584(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bdcf8
	if (ctx.cr6.lt) goto loc_828BDCF8;
loc_828BDD74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_828BDD80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BDD8C"))) PPC_WEAK_FUNC(sub_828BDD8C);
PPC_FUNC_IMPL(__imp__sub_828BDD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BDD90"))) PPC_WEAK_FUNC(sub_828BDD90);
PPC_FUNC_IMPL(__imp__sub_828BDD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BDD98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bde24
	if (!ctx.cr6.gt) goto loc_828BDE24;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828BDDC0:
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bde0c
	if (ctx.cr6.eq) goto loc_828BDE0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828BDE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bde30
	if (!ctx.cr6.eq) goto loc_828BDE30;
loc_828BDE0C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bddc0
	if (ctx.cr6.lt) goto loc_828BDDC0;
loc_828BDE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_828BDE30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BDE3C"))) PPC_WEAK_FUNC(sub_828BDE3C);
PPC_FUNC_IMPL(__imp__sub_828BDE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BDE40"))) PPC_WEAK_FUNC(sub_828BDE40);
PPC_FUNC_IMPL(__imp__sub_828BDE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x828BDE48;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8233e1a0
	ctx.lr = 0x828BDE60;
	sub_8233E1A0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x828bde78
	if (ctx.cr6.eq) goto loc_828BDE78;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x828bde80
	goto loc_828BDE80;
loc_828BDE78:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_828BDE80:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r31,r11,30808
	ctx.r31.s64 = ctx.r11.s64 + 30808;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cafee0
	ctx.lr = 0x828BDE90;
	sub_82CAFEE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828bdef4
	if (ctx.cr6.eq) goto loc_828BDEF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x828BDEA4;
	sub_82CB0EC8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb2688
	ctx.lr = 0x828BDEB0;
	sub_82CB2688(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828bdef4
	if (!ctx.cr6.lt) goto loc_828BDEF4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bdef4
	if (ctx.cr6.eq) goto loc_828BDEF4;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bdef4
	if (ctx.cr6.eq) goto loc_828BDEF4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_828BDEE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x828BDEE8;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_828BDEF4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828bdf80
	if (!ctx.cr6.gt) goto loc_828BDF80;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828BDF0C:
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bdf68
	if (ctx.cr6.eq) goto loc_828BDF68;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bdf68
	if (ctx.cr6.eq) goto loc_828BDF68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828bdf68
	if (ctx.cr6.eq) goto loc_828BDF68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bdee0
	if (!ctx.cr6.eq) goto loc_828BDEE0;
loc_828BDF68:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bdf0c
	if (ctx.cr6.lt) goto loc_828BDF0C;
loc_828BDF80:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828bdfcc
	if (ctx.cr6.eq) goto loc_828BDFCC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828bdffc
	if (ctx.cr6.eq) goto loc_828BDFFC;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bdfac
	if (!ctx.cr6.eq) goto loc_828BDFAC;
	// bl 0x822900a0
	ctx.lr = 0x828BDFA8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_828BDFAC:
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
	ctx.lr = 0x828BDFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_828BDFCC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828bdffc
	if (ctx.cr6.eq) goto loc_828BDFFC;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828bdfe8
	if (!ctx.cr6.eq) goto loc_828BDFE8;
	// bl 0x822900a0
	ctx.lr = 0x828BDFE4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_828BDFE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BDFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BDFFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BE008"))) PPC_WEAK_FUNC(sub_828BE008);
PPC_FUNC_IMPL(__imp__sub_828BE008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828BE010;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,298
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 298, ctx.xer);
	// blt cr6,0x828be034
	if (ctx.cr6.lt) goto loc_828BE034;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279e6b8
	ctx.lr = 0x828BE034;
	sub_8279E6B8(ctx, base);
loc_828BE034:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r30,172
	ctx.r29.s64 = ctx.r30.s64 + 172;
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828bc168
	ctx.lr = 0x828BE058;
	sub_828BC168(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,297
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 297, ctx.xer);
	// bge cr6,0x828be070
	if (!ctx.cr6.lt) goto loc_828BE070;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238fcc0
	ctx.lr = 0x828BE070;
	sub_8238FCC0(ctx, base);
loc_828BE070:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,350
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 350, ctx.xer);
	// blt cr6,0x828be094
	if (ctx.cr6.lt) goto loc_828BE094;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82756128
	ctx.lr = 0x828BE088;
	sub_82756128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_828BE094:
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// stw r11,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828be0bc
	if (ctx.cr6.eq) goto loc_828BE0BC;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82294520
	ctx.lr = 0x828BE0BC;
	sub_82294520(ctx, base);
loc_828BE0BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BE0C8"))) PPC_WEAK_FUNC(sub_828BE0C8);
PPC_FUNC_IMPL(__imp__sub_828BE0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x828BE0D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8279e850
	ctx.lr = 0x828BE0E4;
	sub_8279E850(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828be24c
	if (!ctx.cr6.gt) goto loc_828BE24C;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828be278
	if (!ctx.cr6.gt) goto loc_828BE278;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_828BE114:
	// clrldi r10,r30,58
	ctx.r10.u64 = ctx.r30.u64 & 0x3F;
	// ld r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 172);
	// slw r8,r26,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828be204
	if (ctx.cr6.eq) goto loc_828BE204;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828be24c
	if (!ctx.cr6.lt) goto loc_828BE24C;
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be24c
	if (ctx.cr6.eq) goto loc_828BE24C;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828be204
	if (ctx.cr6.eq) goto loc_828BE204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828be24c
	if (ctx.cr6.eq) goto loc_828BE24C;
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be24c
	if (ctx.cr6.eq) goto loc_828BE24C;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828be204
	if (!ctx.cr6.lt) goto loc_828BE204;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// xor r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// xor r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// xor r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// xor r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x828be228
	if (!ctx.cr6.eq) goto loc_828BE228;
loc_828BE204:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,56
	ctx.r27.s64 = ctx.r27.s64 + 56;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828be114
	if (ctx.cr6.lt) goto loc_828BE114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828be3b8
	ctx.lr = 0x828BE220;
	sub_828BE3B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_828BE228:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r25,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828be24c
	if (ctx.cr6.eq) goto loc_828BE24C;
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82294520
	ctx.lr = 0x828BE24C;
	sub_82294520(ctx, base);
loc_828BE24C:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828be278
	if (ctx.cr6.eq) goto loc_828BE278;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8238c960
	ctx.lr = 0x828BE264;
	sub_8238C960(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82294a58
	ctx.lr = 0x828BE274;
	sub_82294A58(ctx, base);
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
loc_828BE278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828be3b8
	ctx.lr = 0x828BE280;
	sub_828BE3B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BE288"))) PPC_WEAK_FUNC(sub_828BE288);
PPC_FUNC_IMPL(__imp__sub_828BE288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x828BE290;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,184
	ctx.r28.s64 = ctx.r29.s64 + 184;
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// stw r31,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828be2c4
	if (ctx.cr6.eq) goto loc_828BE2C4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x828BE2C4;
	sub_82294520(ctx, base);
loc_828BE2C4:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828be3b0
	if (!ctx.cr6.gt) goto loc_828BE3B0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_828BE2DC:
	// clrldi r10,r30,58
	ctx.r10.u64 = ctx.r30.u64 & 0x3F;
	// ld r9,172(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 172);
	// slw r8,r26,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828be39c
	if (ctx.cr6.eq) goto loc_828BE39C;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828be380
	if (!ctx.cr6.lt) goto loc_828BE380;
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be368
	if (ctx.cr6.eq) goto loc_828BE368;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828be39c
	if (ctx.cr6.eq) goto loc_828BE39C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828be350
	if (ctx.cr6.eq) goto loc_828BE350;
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be350
	if (ctx.cr6.eq) goto loc_828BE350;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// b 0x828be394
	goto loc_828BE394;
loc_828BE350:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// b 0x828be394
	goto loc_828BE394;
loc_828BE368:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// b 0x828be394
	goto loc_828BE394;
loc_828BE380:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_828BE394:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8246f150
	ctx.lr = 0x828BE39C;
	sub_8246F150(ctx, base);
loc_828BE39C:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,56
	ctx.r27.s64 = ctx.r27.s64 + 56;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828be2dc
	if (ctx.cr6.lt) goto loc_828BE2DC;
loc_828BE3B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BE3B8"))) PPC_WEAK_FUNC(sub_828BE3B8);
PPC_FUNC_IMPL(__imp__sub_828BE3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BE3C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828be490
	if (!ctx.cr6.gt) goto loc_828BE490;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
loc_828BE3E4:
	// clrldi r10,r31,58
	ctx.r10.u64 = ctx.r31.u64 & 0x3F;
	// ld r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 172);
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828be47c
	if (ctx.cr6.eq) goto loc_828BE47C;
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r9,584(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x828be468
	if (!ctx.cr6.lt) goto loc_828BE468;
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be468
	if (ctx.cr6.eq) goto loc_828BE468;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828be468
	if (ctx.cr6.eq) goto loc_828BE468;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_828BE468:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828be47c
	if (ctx.cr6.eq) goto loc_828BE47C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// bl 0x828c44b8
	ctx.lr = 0x828BE47C;
	sub_828C44B8(ctx, base);
loc_828BE47C:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828be3e4
	if (ctx.cr6.lt) goto loc_828BE3E4;
loc_828BE490:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BE498"))) PPC_WEAK_FUNC(sub_828BE498);
PPC_FUNC_IMPL(__imp__sub_828BE498) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,636(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 636);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828be50c
	if (!ctx.cr6.gt) goto loc_828BE50C;
	// lwz r6,640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 640);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_828BE4CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828be4fc
	if (ctx.cr6.eq) goto loc_828BE4FC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,180(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x828be4fc
	if (!ctx.cr6.eq) goto loc_828BE4FC;
	// ld r10,172(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 172);
	// ld r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpld cr6,r10,r31
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r31.u64, ctx.xer);
	// beq cr6,0x828be548
	if (ctx.cr6.eq) goto loc_828BE548;
loc_828BE4FC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828be4cc
	if (ctx.cr6.lt) goto loc_828BE4CC;
loc_828BE50C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828BE530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BE530:
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
loc_828BE548:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828be50c
	if (ctx.cr6.eq) goto loc_828BE50C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,640(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 640);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828be530
	if (ctx.cr6.eq) goto loc_828BE530;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// b 0x828be530
	goto loc_828BE530;
}

__attribute__((alias("__imp__sub_828BE580"))) PPC_WEAK_FUNC(sub_828BE580);
PPC_FUNC_IMPL(__imp__sub_828BE580) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x828be668
	if (ctx.cr6.eq) goto loc_828BE668;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r7,696(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	// lwz r6,692(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne cr6,0x828be5e0
	if (!ctx.cr6.eq) goto loc_828BE5E0;
	// li r8,16
	ctx.r8.s64 = 16;
	// b 0x828be5ec
	goto loc_828BE5EC;
loc_828BE5E0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x828be5ec
	if (!ctx.cr6.eq) goto loc_828BE5EC;
	// li r8,20
	ctx.r8.s64 = 20;
loc_828BE5EC:
	// mullw r4,r10,r8
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c9fc0
	ctx.lr = 0x828BE600;
	sub_828C9FC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x828BE610;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be650
	if (ctx.cr6.eq) goto loc_828BE650;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828be650
	if (!ctx.cr0.eq) goto loc_828BE650;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BE650:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BE668:
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

__attribute__((alias("__imp__sub_828BE67C"))) PPC_WEAK_FUNC(sub_828BE67C);
PPC_FUNC_IMPL(__imp__sub_828BE67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BE680"))) PPC_WEAK_FUNC(sub_828BE680);
PPC_FUNC_IMPL(__imp__sub_828BE680) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be758
	if (ctx.cr6.eq) goto loc_828BE758;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r7,696(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	// lwz r6,692(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne cr6,0x828be6e0
	if (!ctx.cr6.eq) goto loc_828BE6E0;
	// li r8,16
	ctx.r8.s64 = 16;
	// b 0x828be6ec
	goto loc_828BE6EC;
loc_828BE6E0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x828be6ec
	if (!ctx.cr6.eq) goto loc_828BE6EC;
	// li r8,20
	ctx.r8.s64 = 20;
loc_828BE6EC:
	// mullw r4,r10,r8
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c9fc0
	ctx.lr = 0x828BE700;
	sub_828C9FC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x828BE710;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be750
	if (ctx.cr6.eq) goto loc_828BE750;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828be750
	if (!ctx.cr0.eq) goto loc_828BE750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828BE750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828BE750:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_828BE758:
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

__attribute__((alias("__imp__sub_828BE76C"))) PPC_WEAK_FUNC(sub_828BE76C);
PPC_FUNC_IMPL(__imp__sub_828BE76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BE770"))) PPC_WEAK_FUNC(sub_828BE770);
PPC_FUNC_IMPL(__imp__sub_828BE770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be7ac
	if (ctx.cr6.eq) goto loc_828BE7AC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828be7ac
	if (ctx.cr6.eq) goto loc_828BE7AC;
	// bl 0x82473500
	ctx.lr = 0x828BE7A4;
	sub_82473500(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_828BE7AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BE7C0"))) PPC_WEAK_FUNC(sub_828BE7C0);
PPC_FUNC_IMPL(__imp__sub_828BE7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x828BE7C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r10,32(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	// lwz r9,20(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// lwz r8,696(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	// lwz r7,692(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// lwz r27,76(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mullw r11,r8,r16
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r16.s32);
	// mullw r10,r7,r16
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r16.s32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mullw r3,r6,r5
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r3,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r3.u32);
	// lwz r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76378
	ctx.lr = 0x828BE810;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76f10
	ctx.lr = 0x828BE824;
	sub_82E76F10(ctx, base);
	// lwz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lbz r9,60(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + 60);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r8,692(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r10,696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// lwz r6,704(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// divw r5,r7,r8
	ctx.r5.s32 = ctx.r7.s32 / ctx.r8.s32;
	// divw r4,r6,r10
	ctx.r4.s32 = ctx.r6.s32 / ctx.r10.s32;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bne cr6,0x828be864
	if (!ctx.cr6.eq) goto loc_828BE864;
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x828be870
	goto loc_828BE870;
loc_828BE864:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x828be874
	if (!ctx.cr6.eq) goto loc_828BE874;
	// li r9,20
	ctx.r9.s64 = 20;
loc_828BE870:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_828BE874:
	// lfs f0,352(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lwz r20,620(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	// lfs f13,344(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// li r14,0
	ctx.r14.s64 = 0;
	// lfs f12,348(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x828bfa98
	if (ctx.cr6.lt) goto loc_828BFA98;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f11,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,-17648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17648);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f7.f64 = double(temp.f32);
loc_828BE8B0:
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x828bfa84
	if (ctx.cr6.lt) goto loc_828BFA84;
loc_828BE8BC:
	// li r15,0
	ctx.r15.s64 = 0;
loc_828BE8C0:
	// lwz r10,696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// blt cr6,0x828be8d4
	if (ctx.cr6.lt) goto loc_828BE8D4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_828BE8D4:
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828bfa70
	if (!ctx.cr6.lt) goto loc_828BFA70;
	// li r19,0
	ctx.r19.s64 = 0;
loc_828BE8E0:
	// lwz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lwz r8,692(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828be8f8
	if (ctx.cr6.lt) goto loc_828BE8F8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_828BE8F8:
	// cmpw cr6,r19,r10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828bfa68
	if (!ctx.cr6.lt) goto loc_828BFA68;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// divw r9,r20,r16
	ctx.r9.s32 = ctx.r20.s32 / ctx.r16.s32;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,688(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mullw r10,r18,r10
	ctx.r10.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r10.s32);
	// lwz r6,684(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// mullw r11,r9,r19
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// mullw r7,r9,r15
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r15.s32);
	// mullw r8,r14,r8
	ctx.r8.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add. r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r7,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r7.u8);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// lwz r8,644(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// bge 0x828be960
	if (!ctx.cr0.lt) goto loc_828BE960;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828be96c
	goto loc_828BE96C;
loc_828BE960:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828be96c
	if (ctx.cr6.lt) goto loc_828BE96C;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_828BE96C:
	// lwz r7,648(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// bge cr6,0x828be984
	if (!ctx.cr6.lt) goto loc_828BE984;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828be990
	goto loc_828BE990;
loc_828BE984:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828be990
	if (ctx.cr6.lt) goto loc_828BE990;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_828BE990:
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwz r7,492(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r7,r4,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// lwz r6,608(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 608);
	// lwz r8,652(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 652);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x828be9d4
	if (ctx.cr6.lt) goto loc_828BE9D4;
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
	// b 0x828bea00
	goto loc_828BEA00;
loc_828BE9D4:
	// lwz r7,604(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 604);
	// lfs f0,616(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// addi r6,r8,-127
	ctx.r6.s64 = ctx.r8.s64 + -127;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
loc_828BEA00:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r28,644(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// subf. r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// bge 0x828bea28
	if (!ctx.cr0.lt) goto loc_828BEA28;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bea34
	goto loc_828BEA34;
loc_828BEA28:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bea34
	if (ctx.cr6.lt) goto loc_828BEA34;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_828BEA34:
	// lwz r9,648(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r9,-1
	ctx.r29.s64 = ctx.r9.s64 + -1;
	// bge cr6,0x828bea4c
	if (!ctx.cr6.lt) goto loc_828BEA4C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bea58
	goto loc_828BEA58;
loc_828BEA4C:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x828bea58
	if (ctx.cr6.lt) goto loc_828BEA58;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_828BEA58:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add. r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r31,492(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// bge 0x828bea9c
	if (!ctx.cr0.lt) goto loc_828BEA9C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828beaa8
	goto loc_828BEAA8;
loc_828BEA9C:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828beaa8
	if (ctx.cr6.lt) goto loc_828BEAA8;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_828BEAA8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828beab8
	if (!ctx.cr6.lt) goto loc_828BEAB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828beac4
	goto loc_828BEAC4;
loc_828BEAB8:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x828beac4
	if (ctx.cr6.lt) goto loc_828BEAC4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_828BEAC4:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mullw r6,r9,r4
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r8,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r8.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828beb08
	if (!ctx.cr6.lt) goto loc_828BEB08;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828beb14
	goto loc_828BEB14;
loc_828BEB08:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828beb14
	if (ctx.cr6.lt) goto loc_828BEB14;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_828BEB14:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x828beb24
	if (!ctx.cr6.lt) goto loc_828BEB24;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828beb30
	goto loc_828BEB30;
loc_828BEB24:
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x828beb30
	if (ctx.cr6.lt) goto loc_828BEB30;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_828BEB30:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// bge cr6,0x828beb74
	if (!ctx.cr6.lt) goto loc_828BEB74;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828beb80
	goto loc_828BEB80;
loc_828BEB74:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828beb80
	if (ctx.cr6.lt) goto loc_828BEB80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_828BEB80:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x828beb90
	if (!ctx.cr6.lt) goto loc_828BEB90;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828beb9c
	goto loc_828BEB9C;
loc_828BEB90:
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x828beb9c
	if (ctx.cr6.lt) goto loc_828BEB9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_828BEB9C:
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// mullw r9,r28,r6
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lfd f12,216(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// fdivs f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lfd f4,152(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f4
	ctx.f12.f64 = double(ctx.f4.s64);
	// fmuls f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fsubs f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fdivs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// sth r5,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r5.u16);
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sth r6,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r6.u16);
	// lbz r8,60(r17)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r17.u32 + 60);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828bfa58
	if (ctx.cr6.eq) goto loc_828BFA58;
	// lwz r9,620(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828bec78
	if (!ctx.cr6.gt) goto loc_828BEC78;
loc_828BEC3C:
	// divw r4,r11,r9
	ctx.r4.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// subf. r4,r4,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x828bec50
	if (!ctx.cr0.gt) goto loc_828BEC50;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_828BEC50:
	// divw r4,r10,r9
	ctx.r4.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// subf. r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x828bec64
	if (!ctx.cr0.gt) goto loc_828BEC64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_828BEC64:
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x828bec3c
	if (ctx.cr0.gt) goto loc_828BEC3C;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828bec80
	if (ctx.cr6.lt) goto loc_828BEC80;
loc_828BEC78:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x828bec84
	goto loc_828BEC84;
loc_828BEC80:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_828BEC84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r9,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r9.u8);
	// bne cr6,0x828bed08
	if (!ctx.cr6.eq) goto loc_828BED08;
	// lwz r7,644(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// bge cr6,0x828becac
	if (!ctx.cr6.lt) goto loc_828BECAC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828becb8
	goto loc_828BECB8;
loc_828BECAC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828becb8
	if (ctx.cr6.lt) goto loc_828BECB8;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_828BECB8:
	// lwz r11,648(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x828becd0
	if (!ctx.cr6.lt) goto loc_828BECD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x828becdc
	goto loc_828BECDC;
loc_828BECD0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828becdc
	if (ctx.cr6.lt) goto loc_828BECDC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828BECDC:
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r10,492(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// lbz r9,60(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + 60);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r21,r7,r10
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// bne cr6,0x828bfa4c
	if (!ctx.cr6.eq) goto loc_828BFA4C;
	// sth r5,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r5.u16);
	// sth r6,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r6.u16);
	// b 0x828bfa4c
	goto loc_828BFA4C;
loc_828BED08:
	// divw r25,r20,r9
	ctx.r25.s32 = ctx.r20.s32 / ctx.r9.s32;
	// lwz r26,644(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r8,r11,r25
	ctx.r8.s32 = ctx.r11.s32 / ctx.r25.s32;
	// divw r7,r10,r25
	ctx.r7.s32 = ctx.r10.s32 / ctx.r25.s32;
	// mullw r6,r8,r25
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// mullw r5,r7,r25
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// subf r4,r6,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subf r8,r5,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cntlzw r7,r4
	ctx.r7.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r31,r5,1
	ctx.r31.u64 = ctx.r5.u64 ^ 1;
	// xori r30,r4,1
	ctx.r30.u64 = ctx.r4.u64 ^ 1;
	// divw r22,r20,r9
	ctx.r22.s32 = ctx.r20.s32 / ctx.r9.s32;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r24,r26,-1
	ctx.r24.s64 = ctx.r26.s64 + -1;
	// beq cr6,0x828beeb8
	if (ctx.cr6.eq) goto loc_828BEEB8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// subf. r6,r22,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r22.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828bee0c
	if (ctx.cr6.eq) goto loc_828BEE0C;
	// subf r7,r22,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r22.s64;
	// bge 0x828bed70
	if (!ctx.cr0.lt) goto loc_828BED70;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bed7c
	goto loc_828BED7C;
loc_828BED70:
	// cmpw cr6,r6,r24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bed7c
	if (ctx.cr6.lt) goto loc_828BED7C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_828BED7C:
	// lwz r9,648(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r23,r9,-1
	ctx.r23.s64 = ctx.r9.s64 + -1;
	// bge cr6,0x828bed94
	if (!ctx.cr6.lt) goto loc_828BED94;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828beda0
	goto loc_828BEDA0;
loc_828BED94:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828beda0
	if (ctx.cr6.lt) goto loc_828BEDA0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BEDA0:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add. r8,r22,r11
	ctx.r8.u64 = ctx.r22.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r28,492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// add r5,r22,r10
	ctx.r5.u64 = ctx.r22.u64 + ctx.r10.u64;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r6,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// bge 0x828bedd0
	if (!ctx.cr0.lt) goto loc_828BEDD0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828beddc
	goto loc_828BEDDC;
loc_828BEDD0:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828beddc
	if (ctx.cr6.lt) goto loc_828BEDDC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_828BEDDC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x828bedf4
	if (!ctx.cr6.lt) goto loc_828BEDF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r9,r26,r5
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x828bf008
	goto loc_828BF008;
loc_828BEDF4:
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bee00
	if (ctx.cr6.lt) goto loc_828BEE00;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_828BEE00:
	// mullw r9,r26,r5
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x828bf008
	goto loc_828BF008;
loc_828BEE0C:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bge 0x828bee1c
	if (!ctx.cr0.lt) goto loc_828BEE1C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bee28
	goto loc_828BEE28;
loc_828BEE1C:
	// cmpw cr6,r6,r24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bee28
	if (ctx.cr6.lt) goto loc_828BEE28;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_828BEE28:
	// lwz r9,648(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r23,r9,-1
	ctx.r23.s64 = ctx.r9.s64 + -1;
	// bge cr6,0x828bee40
	if (!ctx.cr6.lt) goto loc_828BEE40;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bee4c
	goto loc_828BEE4C;
loc_828BEE40:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bee4c
	if (ctx.cr6.lt) goto loc_828BEE4C;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BEE4C:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add. r8,r22,r11
	ctx.r8.u64 = ctx.r22.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r28,492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r6,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// bge 0x828bee7c
	if (!ctx.cr0.lt) goto loc_828BEE7C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bee88
	goto loc_828BEE88;
loc_828BEE7C:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bee88
	if (ctx.cr6.lt) goto loc_828BEE88;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_828BEE88:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828beea0
	if (!ctx.cr6.lt) goto loc_828BEEA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r9,r26,r5
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x828bf008
	goto loc_828BF008;
loc_828BEEA0:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bee00
	if (ctx.cr6.lt) goto loc_828BEE00;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mullw r9,r26,r5
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x828bf008
	goto loc_828BF008;
loc_828BEEB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// beq cr6,0x828bef60
	if (ctx.cr6.eq) goto loc_828BEF60;
	// subf r8,r22,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r22.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x828beed8
	if (!ctx.cr6.lt) goto loc_828BEED8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828beee4
	goto loc_828BEEE4;
loc_828BEED8:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828beee4
	if (ctx.cr6.lt) goto loc_828BEEE4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_828BEEE4:
	// lwz r9,648(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r23,r9,-1
	ctx.r23.s64 = ctx.r9.s64 + -1;
	// bge cr6,0x828beefc
	if (!ctx.cr6.lt) goto loc_828BEEFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bef08
	goto loc_828BEF08;
loc_828BEEFC:
	// cmpw cr6,r8,r23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bef08
	if (ctx.cr6.lt) goto loc_828BEF08;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_828BEF08:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add r7,r22,r10
	ctx.r7.u64 = ctx.r22.u64 + ctx.r10.u64;
	// lwz r28,492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r4,r5,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// bge cr6,0x828bef3c
	if (!ctx.cr6.lt) goto loc_828BEF3C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bef48
	goto loc_828BEF48;
loc_828BEF3C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bef48
	if (ctx.cr6.lt) goto loc_828BEF48;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_828BEF48:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x828bef58
	if (!ctx.cr6.lt) goto loc_828BEF58;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf000
	goto loc_828BF000;
loc_828BEF58:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// b 0x828beff8
	goto loc_828BEFF8;
loc_828BEF60:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x828bef74
	if (!ctx.cr6.lt) goto loc_828BEF74;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bef80
	goto loc_828BEF80;
loc_828BEF74:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bef80
	if (ctx.cr6.lt) goto loc_828BEF80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_828BEF80:
	// lwz r9,648(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r23,r9,-1
	ctx.r23.s64 = ctx.r9.s64 + -1;
	// bge cr6,0x828bef98
	if (!ctx.cr6.lt) goto loc_828BEF98;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828befa4
	goto loc_828BEFA4;
loc_828BEF98:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828befa4
	if (ctx.cr6.lt) goto loc_828BEFA4;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_828BEFA4:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r28,492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r4,r5,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// bge cr6,0x828befd8
	if (!ctx.cr6.lt) goto loc_828BEFD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828befe4
	goto loc_828BEFE4;
loc_828BEFD8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828befe4
	if (ctx.cr6.lt) goto loc_828BEFE4;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_828BEFE4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828beff4
	if (!ctx.cr6.lt) goto loc_828BEFF4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf000
	goto loc_828BF000;
loc_828BEFF4:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
loc_828BEFF8:
	// blt cr6,0x828bf000
	if (ctx.cr6.lt) goto loc_828BF000;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BF000:
	// mullw r9,r26,r7
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_828BF008:
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,60(r17)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r17.u32 + 60);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// lhzx r9,r8,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r21,r4,16
	ctx.r21.u64 = ctx.r4.u32 & 0xFFFF;
	// bne cr6,0x828bfa4c
	if (!ctx.cr6.eq) goto loc_828BFA4C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828bf5e8
	if (ctx.cr6.eq) goto loc_828BF5E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828bf37c
	if (ctx.cr6.eq) goto loc_828BF37C;
	// subf r31,r22,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r22.s64;
	// subf r29,r22,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r22.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x828bf064
	if (!ctx.cr6.lt) goto loc_828BF064;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bf070
	goto loc_828BF070;
loc_828BF064:
	// cmpw cr6,r5,r24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf070
	if (ctx.cr6.lt) goto loc_828BF070;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_828BF070:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x828bf080
	if (!ctx.cr6.lt) goto loc_828BF080;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bf08c
	goto loc_828BF08C;
loc_828BF080:
	// cmpw cr6,r6,r23
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf08c
	if (ctx.cr6.lt) goto loc_828BF08C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_828BF08C:
	// add r28,r22,r10
	ctx.r28.u64 = ctx.r22.u64 + ctx.r10.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x828bf0a8
	if (!ctx.cr6.lt) goto loc_828BF0A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf0b4
	goto loc_828BF0B4;
loc_828BF0A8:
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf0b4
	if (ctx.cr6.lt) goto loc_828BF0B4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_828BF0B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x828bf0c4
	if (!ctx.cr6.lt) goto loc_828BF0C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828bf0d0
	goto loc_828BF0D0;
loc_828BF0C4:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf0d0
	if (ctx.cr6.lt) goto loc_828BF0D0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_828BF0D0:
	// lwz r10,644(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add r30,r22,r11
	ctx.r30.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r4,492(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lhzx r10,r8,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// lhzx r11,r6,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r8.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf138
	if (!ctx.cr6.lt) goto loc_828BF138;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bf144
	goto loc_828BF144;
loc_828BF138:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bf144
	if (ctx.cr6.lt) goto loc_828BF144;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_828BF144:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x828bf154
	if (!ctx.cr6.lt) goto loc_828BF154;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf160
	goto loc_828BF160;
loc_828BF154:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf160
	if (ctx.cr6.lt) goto loc_828BF160;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BF160:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x828bf178
	if (!ctx.cr6.lt) goto loc_828BF178;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf184
	goto loc_828BF184;
loc_828BF178:
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf184
	if (ctx.cr6.lt) goto loc_828BF184;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_828BF184:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf194
	if (!ctx.cr6.lt) goto loc_828BF194;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x828bf1a0
	goto loc_828BF1A0;
loc_828BF194:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf1a0
	if (ctx.cr6.lt) goto loc_828BF1A0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_828BF1A0:
	// lwz r11,644(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r26,492(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhzx r11,r7,r26
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// lhzx r10,r5,r26
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf204
	if (!ctx.cr6.lt) goto loc_828BF204;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828bf210
	goto loc_828BF210;
loc_828BF204:
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bf210
	if (ctx.cr6.lt) goto loc_828BF210;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_828BF210:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x828bf220
	if (!ctx.cr6.lt) goto loc_828BF220;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bf22c
	goto loc_828BF22C;
loc_828BF220:
	// cmpw cr6,r6,r23
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf22c
	if (ctx.cr6.lt) goto loc_828BF22C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_828BF22C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x828bf244
	if (!ctx.cr6.lt) goto loc_828BF244;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf250
	goto loc_828BF250;
loc_828BF244:
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf250
	if (ctx.cr6.lt) goto loc_828BF250;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_828BF250:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf260
	if (!ctx.cr6.lt) goto loc_828BF260;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x828bf26c
	goto loc_828BF26C;
loc_828BF260:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf26c
	if (ctx.cr6.lt) goto loc_828BF26C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_828BF26C:
	// lwz r11,644(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r29,492(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhzx r11,r6,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// lhzx r10,r4,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf2d0
	if (!ctx.cr6.lt) goto loc_828BF2D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bf2dc
	goto loc_828BF2DC;
loc_828BF2D0:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bf2dc
	if (ctx.cr6.lt) goto loc_828BF2DC;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_828BF2DC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x828bf2ec
	if (!ctx.cr6.lt) goto loc_828BF2EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf2f8
	goto loc_828BF2F8;
loc_828BF2EC:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf2f8
	if (ctx.cr6.lt) goto loc_828BF2F8;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BF2F8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x828bf310
	if (!ctx.cr6.lt) goto loc_828BF310;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828bf31c
	goto loc_828BF31C;
loc_828BF310:
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf31c
	if (ctx.cr6.lt) goto loc_828BF31C;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_828BF31C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x828bf32c
	if (!ctx.cr6.lt) goto loc_828BF32C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828bf338
	goto loc_828BF338;
loc_828BF32C:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf338
	if (ctx.cr6.lt) goto loc_828BF338;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_828BF338:
	// lwz r8,644(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// lwz r6,492(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// lhzx r10,r9,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x828bf9f0
	goto loc_828BF9F0;
loc_828BF37C:
	// subf r5,r22,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r22.s64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x828bf398
	if (!ctx.cr6.lt) goto loc_828BF398;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf3a4
	goto loc_828BF3A4;
loc_828BF398:
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf3a4
	if (ctx.cr6.lt) goto loc_828BF3A4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_828BF3A4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf3b4
	if (!ctx.cr6.lt) goto loc_828BF3B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bf3c0
	goto loc_828BF3C0;
loc_828BF3B4:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf3c0
	if (ctx.cr6.lt) goto loc_828BF3C0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_828BF3C0:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add r30,r22,r11
	ctx.r30.u64 = ctx.r22.u64 + ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lhzx r4,r6,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r9,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// lfd f0,264(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf408
	if (!ctx.cr6.lt) goto loc_828BF408;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf414
	goto loc_828BF414;
loc_828BF408:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bf414
	if (ctx.cr6.lt) goto loc_828BF414;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_828BF414:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf424
	if (!ctx.cr6.lt) goto loc_828BF424;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf430
	goto loc_828BF430;
loc_828BF424:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf430
	if (ctx.cr6.lt) goto loc_828BF430;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BF430:
	// lwz r11,644(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lhzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf474
	if (!ctx.cr6.lt) goto loc_828BF474;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bf480
	goto loc_828BF480;
loc_828BF474:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bf480
	if (ctx.cr6.lt) goto loc_828BF480;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_828BF480:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf490
	if (!ctx.cr6.lt) goto loc_828BF490;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828bf49c
	goto loc_828BF49C;
loc_828BF490:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf49c
	if (ctx.cr6.lt) goto loc_828BF49C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_828BF49C:
	// subf r9,r25,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r25.s64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x828bf4b4
	if (!ctx.cr6.lt) goto loc_828BF4B4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf4c0
	goto loc_828BF4C0;
loc_828BF4B4:
	// cmpw cr6,r7,r24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf4c0
	if (ctx.cr6.lt) goto loc_828BF4C0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_828BF4C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x828bf4d0
	if (!ctx.cr6.lt) goto loc_828BF4D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828bf4dc
	goto loc_828BF4DC;
loc_828BF4D0:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf4dc
	if (ctx.cr6.lt) goto loc_828BF4DC;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_828BF4DC:
	// lwz r11,644(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r29,492(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lhzx r11,r6,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// lhzx r9,r4,r29
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf53c
	if (!ctx.cr6.lt) goto loc_828BF53C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bf548
	goto loc_828BF548;
loc_828BF53C:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828bf548
	if (ctx.cr6.lt) goto loc_828BF548;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_828BF548:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf558
	if (!ctx.cr6.lt) goto loc_828BF558;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x828bf564
	goto loc_828BF564;
loc_828BF558:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf564
	if (ctx.cr6.lt) goto loc_828BF564;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_828BF564:
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x828bf57c
	if (!ctx.cr6.lt) goto loc_828BF57C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828bf588
	goto loc_828BF588;
loc_828BF57C:
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf588
	if (ctx.cr6.lt) goto loc_828BF588;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_828BF588:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x828bf598
	if (!ctx.cr6.lt) goto loc_828BF598;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828bf5a4
	goto loc_828BF5A4;
loc_828BF598:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf5a4
	if (ctx.cr6.lt) goto loc_828BF5A4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_828BF5A4:
	// lwz r8,644(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// lwz r7,492(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r31,r8
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r4,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// lhzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// b 0x828bf9f0
	goto loc_828BF9F0;
loc_828BF5E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828bf85c
	if (ctx.cr6.eq) goto loc_828BF85C;
	// subf r7,r22,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r22.s64;
	// subf. r5,r25,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bge 0x828bf608
	if (!ctx.cr0.lt) goto loc_828BF608;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bf614
	goto loc_828BF614;
loc_828BF608:
	// cmpw cr6,r5,r24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf614
	if (ctx.cr6.lt) goto loc_828BF614;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_828BF614:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x828bf624
	if (!ctx.cr6.lt) goto loc_828BF624;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x828bf630
	goto loc_828BF630;
loc_828BF624:
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf630
	if (ctx.cr6.lt) goto loc_828BF630;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_828BF630:
	// add r29,r22,r10
	ctx.r29.u64 = ctx.r22.u64 + ctx.r10.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x828bf64c
	if (!ctx.cr6.lt) goto loc_828BF64C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bf658
	goto loc_828BF658;
loc_828BF64C:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf658
	if (ctx.cr6.lt) goto loc_828BF658;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_828BF658:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x828bf668
	if (!ctx.cr6.lt) goto loc_828BF668;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828bf674
	goto loc_828BF674;
loc_828BF668:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf674
	if (ctx.cr6.lt) goto loc_828BF674;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_828BF674:
	// lwz r8,492(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r10,644(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r30,r10
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// lhzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf6e8
	if (!ctx.cr6.lt) goto loc_828BF6E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x828bf6f4
	goto loc_828BF6F4;
loc_828BF6E8:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828bf6f4
	if (ctx.cr6.lt) goto loc_828BF6F4;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_828BF6F4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x828bf704
	if (!ctx.cr6.lt) goto loc_828BF704;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828bf710
	goto loc_828BF710;
loc_828BF704:
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf710
	if (ctx.cr6.lt) goto loc_828BF710;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_828BF710:
	// add. r6,r25,r11
	ctx.r6.u64 = ctx.r25.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bge 0x828bf724
	if (!ctx.cr0.lt) goto loc_828BF724;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bf730
	goto loc_828BF730;
loc_828BF724:
	// cmpw cr6,r6,r24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf730
	if (ctx.cr6.lt) goto loc_828BF730;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_828BF730:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x828bf740
	if (!ctx.cr6.lt) goto loc_828BF740;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828bf74c
	goto loc_828BF74C;
loc_828BF740:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf74c
	if (ctx.cr6.lt) goto loc_828BF74C;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_828BF74C:
	// lwz r10,644(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r30,492(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lhzx r10,r4,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r30.u32);
	// lhzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf7ac
	if (!ctx.cr6.lt) goto loc_828BF7AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bf7b8
	goto loc_828BF7B8;
loc_828BF7AC:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828bf7b8
	if (ctx.cr6.lt) goto loc_828BF7B8;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_828BF7B8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x828bf7c8
	if (!ctx.cr6.lt) goto loc_828BF7C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf7d4
	goto loc_828BF7D4;
loc_828BF7C8:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf7d4
	if (ctx.cr6.lt) goto loc_828BF7D4;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BF7D4:
	// lwz r10,644(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf814
	if (!ctx.cr6.lt) goto loc_828BF814;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828bf820
	goto loc_828BF820;
loc_828BF814:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bf820
	if (ctx.cr6.lt) goto loc_828BF820;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828BF820:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x828bf830
	if (!ctx.cr6.lt) goto loc_828BF830;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf83c
	goto loc_828BF83C;
loc_828BF830:
	// cmpw cr6,r8,r23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf83c
	if (ctx.cr6.lt) goto loc_828BF83C;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_828BF83C:
	// mullw r10,r26,r8
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// b 0x828bf9f0
	goto loc_828BF9F0;
loc_828BF85C:
	// subf. r6,r25,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bge 0x828bf870
	if (!ctx.cr0.lt) goto loc_828BF870;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828bf87c
	goto loc_828BF87C;
loc_828BF870:
	// cmpw cr6,r6,r24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828bf87c
	if (ctx.cr6.lt) goto loc_828BF87C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_828BF87C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf88c
	if (!ctx.cr6.lt) goto loc_828BF88C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf898
	goto loc_828BF898;
loc_828BF88C:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf898
	if (ctx.cr6.lt) goto loc_828BF898;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BF898:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add. r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bge 0x828bf8d8
	if (!ctx.cr0.lt) goto loc_828BF8D8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf8e4
	goto loc_828BF8E4;
loc_828BF8D8:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bf8e4
	if (ctx.cr6.lt) goto loc_828BF8E4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_828BF8E4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828bf8f4
	if (!ctx.cr6.lt) goto loc_828BF8F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828bf900
	goto loc_828BF900;
loc_828BF8F4:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf900
	if (ctx.cr6.lt) goto loc_828BF900;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_828BF900:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// subf r7,r25,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r25.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mullw r6,r4,r9
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r4,r6,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf944
	if (!ctx.cr6.lt) goto loc_828BF944;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828bf950
	goto loc_828BF950;
loc_828BF944:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bf950
	if (ctx.cr6.lt) goto loc_828BF950;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_828BF950:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x828bf960
	if (!ctx.cr6.lt) goto loc_828BF960;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x828bf96c
	goto loc_828BF96C;
loc_828BF960:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf96c
	if (ctx.cr6.lt) goto loc_828BF96C;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_828BF96C:
	// lwz r9,644(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x828bf9ac
	if (!ctx.cr6.lt) goto loc_828BF9AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828bf9b8
	goto loc_828BF9B8;
loc_828BF9AC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828bf9b8
	if (ctx.cr6.lt) goto loc_828BF9B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828BF9B8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x828bf9c8
	if (!ctx.cr6.lt) goto loc_828BF9C8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x828bf9d4
	goto loc_828BF9D4;
loc_828BF9C8:
	// cmpw cr6,r8,r23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bf9d4
	if (ctx.cr6.lt) goto loc_828BF9D4;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_828BF9D4:
	// mullw r10,r26,r8
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
loc_828BF9F0:
	// extsw r11,r22
	ctx.r11.s64 = ctx.r22.s32;
	// fcfid f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(ctx.f0.s64);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f5,272(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fdivs f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fdivs f1,f10,f3
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f3.f64));
	// fmuls f0,f2,f9
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f13,f1,f8
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fctiwz f5,f12
	ctx.f5.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f10
	ctx.f4.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// sth r9,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r9.u16);
loc_828BFA4C:
	// rlwinm r10,r21,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 24) & 0xFF;
	// stb r21,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r21.u8);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
loc_828BFA58:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x828be8e0
	goto loc_828BE8E0;
loc_828BFA68:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// b 0x828be8c0
	goto loc_828BE8C0;
loc_828BFA70:
	// lwz r10,32(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r9,692(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// cmpw cr6,r18,r9
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x828be8bc
	if (!ctx.cr6.gt) goto loc_828BE8BC;
loc_828BFA84:
	// lwz r10,32(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// lwz r9,696(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	// cmpw cr6,r14,r9
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x828be8b0
	if (!ctx.cr6.gt) goto loc_828BE8B0;
loc_828BFA98:
	// lwz r11,20(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x828BFAA4;
	sub_82E77010(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r16,44(r17)
	PPC_STORE_U32(ctx.r17.u32 + 44, ctx.r16.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r10.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BFABC"))) PPC_WEAK_FUNC(sub_828BFABC);
PPC_FUNC_IMPL(__imp__sub_828BFABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BFAC0"))) PPC_WEAK_FUNC(sub_828BFAC0);
PPC_FUNC_IMPL(__imp__sub_828BFAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BFAD0"))) PPC_WEAK_FUNC(sub_828BFAD0);
PPC_FUNC_IMPL(__imp__sub_828BFAD0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82456638
	ctx.lr = 0x828BFAE4;
	sub_82456638(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BFB00"))) PPC_WEAK_FUNC(sub_828BFB00);
PPC_FUNC_IMPL(__imp__sub_828BFB00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BFB20"))) PPC_WEAK_FUNC(sub_828BFB20);
PPC_FUNC_IMPL(__imp__sub_828BFB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828BFB28;
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82456638
	ctx.lr = 0x828BFB40;
	sub_82456638(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828bfb88
	if (ctx.cr6.eq) goto loc_828BFB88;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bfb88
	if (ctx.cr6.lt) goto loc_828BFB88;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828bfb88
	if (!ctx.cr6.lt) goto loc_828BFB88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bfb88
	if (ctx.cr6.lt) goto loc_828BFB88;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bfb8c
	if (ctx.cr6.lt) goto loc_828BFB8C;
loc_828BFB88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BFB8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BFB94"))) PPC_WEAK_FUNC(sub_828BFB94);
PPC_FUNC_IMPL(__imp__sub_828BFB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BFB98"))) PPC_WEAK_FUNC(sub_828BFB98);
PPC_FUNC_IMPL(__imp__sub_828BFB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c4c60
	ctx.lr = 0x828BFBB4;
	sub_828C4C60(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r10,r11,31600
	ctx.r10.s64 = ctx.r11.s64 + 31600;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822959a8
	ctx.lr = 0x828BFBCC;
	sub_822959A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bfbf0
	if (ctx.cr6.eq) goto loc_828BFBF0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x828bfbf4
	goto loc_828BFBF4;
loc_828BFBF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828BFBF4:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BFC0C"))) PPC_WEAK_FUNC(sub_828BFC0C);
PPC_FUNC_IMPL(__imp__sub_828BFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BFC10"))) PPC_WEAK_FUNC(sub_828BFC10);
PPC_FUNC_IMPL(__imp__sub_828BFC10) {
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
	// bl 0x828c4d00
	ctx.lr = 0x828BFC30;
	sub_828C4D00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bfc48
	if (ctx.cr6.eq) goto loc_828BFC48;
	// bl 0x82294a58
	ctx.lr = 0x828BFC44;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BFC48:
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

__attribute__((alias("__imp__sub_828BFC60"))) PPC_WEAK_FUNC(sub_828BFC60);
PPC_FUNC_IMPL(__imp__sub_828BFC60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828c4d00
	sub_828C4D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BFC64"))) PPC_WEAK_FUNC(sub_828BFC64);
PPC_FUNC_IMPL(__imp__sub_828BFC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BFC68"))) PPC_WEAK_FUNC(sub_828BFC68);
PPC_FUNC_IMPL(__imp__sub_828BFC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828BFC70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c5718
	ctx.lr = 0x828BFC9C;
	sub_828C5718(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r10,r11,31636
	ctx.r10.s64 = ctx.r11.s64 + 31636;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822959a8
	ctx.lr = 0x828BFCB4;
	sub_822959A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bfcf0
	if (ctx.cr6.eq) goto loc_828BFCF0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_828BFCF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BFD00"))) PPC_WEAK_FUNC(sub_828BFD00);
PPC_FUNC_IMPL(__imp__sub_828BFD00) {
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
	// bl 0x828c57b8
	ctx.lr = 0x828BFD20;
	sub_828C57B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bfd38
	if (ctx.cr6.eq) goto loc_828BFD38;
	// bl 0x82294a58
	ctx.lr = 0x828BFD34;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828BFD38:
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

__attribute__((alias("__imp__sub_828BFD50"))) PPC_WEAK_FUNC(sub_828BFD50);
PPC_FUNC_IMPL(__imp__sub_828BFD50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828c57b8
	sub_828C57B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BFD54"))) PPC_WEAK_FUNC(sub_828BFD54);
PPC_FUNC_IMPL(__imp__sub_828BFD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828BFD58"))) PPC_WEAK_FUNC(sub_828BFD58);
PPC_FUNC_IMPL(__imp__sub_828BFD58) {
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
	// bl 0x828c4440
	ctx.lr = 0x828BFD78;
	sub_828C4440(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x828bfdb8
	if (!ctx.cr6.eq) goto loc_828BFDB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x828c7a28
	ctx.lr = 0x828BFD90;
	sub_828C7A28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828bfdb8
	if (ctx.cr6.eq) goto loc_828BFDB8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_828BFDB8:
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

__attribute__((alias("__imp__sub_828BFDD0"))) PPC_WEAK_FUNC(sub_828BFDD0);
PPC_FUNC_IMPL(__imp__sub_828BFDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x828BFDD8;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r22,r21,724
	ctx.r22.s64 = ctx.r21.s64 + 724;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// lwz r18,40(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// lwz r11,704(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 704);
	// lwz r10,700(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 700);
	// lwz r9,732(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 732);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// std r20,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r20.u64);
	// lwz r8,584(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 584);
	// stw r17,728(r21)
	PPC_STORE_U32(ctx.r21.u32 + 728, ctx.r17.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828bfe2c
	if (ctx.cr6.eq) goto loc_828BFE2C;
	// stw r11,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82294520
	ctx.lr = 0x828BFE2C;
	sub_82294520(ctx, base);
loc_828BFE2C:
	// lwz r11,744(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 744);
	// addi r24,r21,736
	ctx.r24.s64 = ctx.r21.s64 + 736;
	// stw r17,740(r21)
	PPC_STORE_U32(ctx.r21.u32 + 740, ctx.r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828bfe54
	if (ctx.cr6.eq) goto loc_828BFE54;
	// stw r17,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r17.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82294520
	ctx.lr = 0x828BFE54;
	sub_82294520(ctx, base);
loc_828BFE54:
	// lwz r11,688(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 688);
	// lwz r10,704(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 704);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828c0124
	if (!ctx.cr6.lt) goto loc_828C0124;
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
loc_828BFE74:
	// lwz r11,684(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 684);
	// lwz r10,700(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 700);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828c0108
	if (!ctx.cr6.lt) goto loc_828C0108;
loc_828BFE8C:
	// lwz r23,584(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + 584);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x828bff58
	if (!ctx.cr6.gt) goto loc_828BFF58;
	// lwz r11,580(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 580);
	// addi r30,r25,1
	ctx.r30.s64 = ctx.r25.s64 + 1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_828BFEB0:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mullw r8,r10,r30
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 + ctx.r28.u64;
	// slw r5,r26,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// and r29,r6,r5
	ctx.r29.u64 = ctx.r6.u64 & ctx.r5.u64;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r8,r8,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x828bff0c
	if (!ctx.cr6.eq) goto loc_828BFF0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828bff18
	if (ctx.cr6.eq) goto loc_828BFF18;
loc_828BFF0C:
	// sld r11,r26,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r26.u64 << (ctx.r9.u8 & 0x7F));
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// b 0x828bff20
	goto loc_828BFF20;
loc_828BFF18:
	// sld r11,r26,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r26.u64 << (ctx.r9.u8 & 0x7F));
	// andc r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r11.u64;
loc_828BFF20:
	// rotlwi r9,r20,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// and r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x828bff38
	if (!ctx.cr6.eq) goto loc_828BFF38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828bff40
	if (ctx.cr6.eq) goto loc_828BFF40;
loc_828BFF38:
	// or r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 | ctx.r20.u64;
	// b 0x828bff44
	goto loc_828BFF44;
loc_828BFF40:
	// andc r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 & ~ctx.r11.u64;
loc_828BFF44:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r4,56
	ctx.r4.s64 = ctx.r4.s64 + 56;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x828bfeb0
	if (ctx.cr6.lt) goto loc_828BFEB0;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
loc_828BFF58:
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x828bffa8
	if (!ctx.cr6.gt) goto loc_828BFFA8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_828BFF6C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x828bff84
	if (!ctx.cr6.eq) goto loc_828BFF84;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r3
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x828bff9c
	if (ctx.cr6.eq) goto loc_828BFF9C;
loc_828BFF84:
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828bff6c
	if (ctx.cr6.lt) goto loc_828BFF6C;
	// b 0x828bffa8
	goto loc_828BFFA8;
loc_828BFF9C:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x828c005c
	if (!ctx.cr6.eq) goto loc_828C005C;
loc_828BFFA8:
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// ble cr6,0x828c0030
	if (!ctx.cr6.gt) goto loc_828C0030;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r7.u32);
	// bne cr6,0x828bffec
	if (!ctx.cr6.eq) goto loc_828BFFEC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c0030
	if (ctx.cr6.eq) goto loc_828C0030;
loc_828BFFEC:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x828c0010
	if (!ctx.cr6.eq) goto loc_828C0010;
	// bl 0x822900a0
	ctx.lr = 0x828C000C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_828C0010:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C002C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_828C0030:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c005c
	if (ctx.cr0.eq) goto loc_828C005C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_828C005C:
	// lwz r29,4(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// ble cr6,0x828c00dc
	if (!ctx.cr6.gt) goto loc_828C00DC;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r7.u32);
	// bne cr6,0x828c00a0
	if (!ctx.cr6.eq) goto loc_828C00A0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c00dc
	if (ctx.cr6.eq) goto loc_828C00DC;
loc_828C00A0:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828c00bc
	if (!ctx.cr6.eq) goto loc_828C00BC;
	// bl 0x822900a0
	ctx.lr = 0x828C00B8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_828C00BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C00D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r3.u32);
loc_828C00DC:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c00f0
	if (ctx.cr0.eq) goto loc_828C00F0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_828C00F0:
	// lwz r11,700(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 700);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,684(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 684);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bfe8c
	if (ctx.cr6.lt) goto loc_828BFE8C;
loc_828C0108:
	// lwz r11,704(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 704);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,688(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 688);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828bfe74
	if (ctx.cr6.lt) goto loc_828BFE74;
	// std r20,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r20.u64);
loc_828C0124:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x828bfd58
	ctx.lr = 0x828C0130;
	sub_828BFD58(ctx, base);
	// stw r3,748(r21)
	PPC_STORE_U32(ctx.r21.u32 + 748, ctx.r3.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C013C"))) PPC_WEAK_FUNC(sub_828C013C);
PPC_FUNC_IMPL(__imp__sub_828C013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0140"))) PPC_WEAK_FUNC(sub_828C0140);
PPC_FUNC_IMPL(__imp__sub_828C0140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828C0148;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82472a08
	ctx.lr = 0x828C0158;
	sub_82472A08(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c0174
	if (ctx.cr6.eq) goto loc_828C0174;
	// bl 0x822b4df0
	ctx.lr = 0x828C0170;
	sub_822B4DF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828C0174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828bfdd0
	ctx.lr = 0x828C017C;
	sub_828BFDD0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lwz r10,704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r9,700(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,728(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// ble cr6,0x828c01a8
	if (!ctx.cr6.gt) goto loc_828C01A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C01A8:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x828C01B0;
	sub_822959A8(ctx, base);
	// stw r3,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r3.u32);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x828c01c4
	if (!ctx.cr6.gt) goto loc_828C01C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C01C4:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x828C01CC;
	sub_822959A8(ctx, base);
	// stw r3,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r3.u32);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x828c01e0
	if (!ctx.cr6.gt) goto loc_828C01E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C01E0:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x828C01E8;
	sub_822959A8(ctx, base);
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x828c01fc
	if (!ctx.cr6.gt) goto loc_828C01FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C01FC:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x828C0204;
	sub_822959A8(ctx, base);
	// stw r3,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r3.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x828C0214;
	sub_82E640B8(ctx, base);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// lwz r10,692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822959a8
	ctx.lr = 0x828C0230;
	sub_822959A8(ctx, base);
	// stw r3,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x822959a8
	ctx.lr = 0x828C0240;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0258
	if (ctx.cr6.eq) goto loc_828C0258;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,620(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	// bl 0x828bc4c8
	ctx.lr = 0x828C0254;
	sub_828BC4C8(ctx, base);
	// b 0x828c025c
	goto loc_828C025C;
loc_828C0258:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C025C:
	// stw r3,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264fcc8
	ctx.lr = 0x828C0268;
	sub_8264FCC8(ctx, base);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C027C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,680(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C0290"))) PPC_WEAK_FUNC(sub_828C0290);
PPC_FUNC_IMPL(__imp__sub_828C0290) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264ff10
	sub_8264FF10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C0294"))) PPC_WEAK_FUNC(sub_828C0294);
PPC_FUNC_IMPL(__imp__sub_828C0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0298"))) PPC_WEAK_FUNC(sub_828C0298);
PPC_FUNC_IMPL(__imp__sub_828C0298) {
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
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// bl 0x82294a58
	ctx.lr = 0x828C02B8;
	sub_82294A58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// stw r30,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r30.u32);
	// bl 0x82294a58
	ctx.lr = 0x828C02C8;
	sub_82294A58(ctx, base);
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// lwz r3,764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// bl 0x82294a58
	ctx.lr = 0x828C02D4;
	sub_82294A58(ctx, base);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// bl 0x82294a58
	ctx.lr = 0x828C02E0;
	sub_82294A58(ctx, base);
	// stw r30,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r30.u32);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82294a58
	ctx.lr = 0x828C02EC;
	sub_82294A58(ctx, base);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0324
	if (ctx.cr6.eq) goto loc_828C0324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C030C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,680(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// bl 0x822b4ef8
	ctx.lr = 0x828C0320;
	sub_822B4EF8(ctx, base);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
loc_828C0324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826500a8
	ctx.lr = 0x828C032C;
	sub_826500A8(ctx, base);
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

__attribute__((alias("__imp__sub_828C0344"))) PPC_WEAK_FUNC(sub_828C0344);
PPC_FUNC_IMPL(__imp__sub_828C0344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0348"))) PPC_WEAK_FUNC(sub_828C0348);
PPC_FUNC_IMPL(__imp__sub_828C0348) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C0350"))) PPC_WEAK_FUNC(sub_828C0350);
PPC_FUNC_IMPL(__imp__sub_828C0350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828C0358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,30968
	ctx.r10.s64 = ctx.r11.s64 + 30968;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82294a58
	ctx.lr = 0x828C0374;
	sub_82294A58(ctx, base);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0388
	if (ctx.cr6.eq) goto loc_828C0388;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c04a0
	ctx.lr = 0x828C0388;
	sub_828C04A0(ctx, base);
loc_828C0388:
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c03a4
	if (ctx.cr6.eq) goto loc_828C03A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c0518
	ctx.lr = 0x828C03A4;
	sub_828C0518(ctx, base);
loc_828C03A4:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c03c8
	if (ctx.cr6.eq) goto loc_828C03C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C03C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C03C8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c03e0
	if (ctx.cr6.eq) goto loc_828C03E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c0590
	ctx.lr = 0x828C03E0;
	sub_828C0590(ctx, base);
loc_828C03E0:
	// lwz r29,108(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828c0400
	if (ctx.cr6.eq) goto loc_828C0400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82475d80
	ctx.lr = 0x828C03F8;
	sub_82475D80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294a58
	ctx.lr = 0x828C0400;
	sub_82294A58(ctx, base);
loc_828C0400:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0424
	if (ctx.cr6.eq) goto loc_828C0424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C0424:
	// lwz r3,880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c043c
	if (ctx.cr6.eq) goto loc_828C043C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c0590
	ctx.lr = 0x828C043C;
	sub_828C0590(ctx, base);
loc_828C043C:
	// lwz r3,884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0460
	if (ctx.cr6.eq) goto loc_828C0460;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C0460:
	// addic. r29,r31,448
	ctx.xer.ca = ctx.r31.u32 > 4294966847;
	ctx.r29.s64 = ctx.r31.s64 + 448;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r30.u32);
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bne 0x828c0474
	if (!ctx.cr0.eq) goto loc_828C0474;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828C0474:
	// bl 0x82475d80
	ctx.lr = 0x828C0478;
	sub_82475D80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r10,r11,32272
	ctx.r10.s64 = ctx.r11.s64 + 32272;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x82475d80
	ctx.lr = 0x828C048C;
	sub_82475D80(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x828c4580
	ctx.lr = 0x828C0494;
	sub_828C4580(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C049C"))) PPC_WEAK_FUNC(sub_828C049C);
PPC_FUNC_IMPL(__imp__sub_828C049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C04A0"))) PPC_WEAK_FUNC(sub_828C04A0);
PPC_FUNC_IMPL(__imp__sub_828C04A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c04f4
	if (ctx.cr6.eq) goto loc_828C04F4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828c04f4
	if (!ctx.cr0.eq) goto loc_828C04F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C04F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C04F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x828C04FC;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_828C0514"))) PPC_WEAK_FUNC(sub_828C0514);
PPC_FUNC_IMPL(__imp__sub_828C0514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0518"))) PPC_WEAK_FUNC(sub_828C0518);
PPC_FUNC_IMPL(__imp__sub_828C0518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c056c
	if (ctx.cr6.eq) goto loc_828C056C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828c056c
	if (!ctx.cr0.eq) goto loc_828C056C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C056C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C056C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x828C0574;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_828C058C"))) PPC_WEAK_FUNC(sub_828C058C);
PPC_FUNC_IMPL(__imp__sub_828C058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0590"))) PPC_WEAK_FUNC(sub_828C0590);
PPC_FUNC_IMPL(__imp__sub_828C0590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c05e4
	if (ctx.cr6.eq) goto loc_828C05E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828c05e4
	if (!ctx.cr0.eq) goto loc_828C05E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C05E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C05E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x828C05EC;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_828C0604"))) PPC_WEAK_FUNC(sub_828C0604);
PPC_FUNC_IMPL(__imp__sub_828C0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0608"))) PPC_WEAK_FUNC(sub_828C0608);
PPC_FUNC_IMPL(__imp__sub_828C0608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82475d80
	ctx.lr = 0x828C0620;
	sub_82475D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x828C0628;
	sub_82294A58(ctx, base);
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

__attribute__((alias("__imp__sub_828C0640"))) PPC_WEAK_FUNC(sub_828C0640);
PPC_FUNC_IMPL(__imp__sub_828C0640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C0680"))) PPC_WEAK_FUNC(sub_828C0680);
PPC_FUNC_IMPL(__imp__sub_828C0680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C0684"))) PPC_WEAK_FUNC(sub_828C0684);
PPC_FUNC_IMPL(__imp__sub_828C0684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0688"))) PPC_WEAK_FUNC(sub_828C0688);
PPC_FUNC_IMPL(__imp__sub_828C0688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C06C8"))) PPC_WEAK_FUNC(sub_828C06C8);
PPC_FUNC_IMPL(__imp__sub_828C06C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C06CC"))) PPC_WEAK_FUNC(sub_828C06CC);
PPC_FUNC_IMPL(__imp__sub_828C06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C06D0"))) PPC_WEAK_FUNC(sub_828C06D0);
PPC_FUNC_IMPL(__imp__sub_828C06D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divw r10,r11,r4
	ctx.r10.s32 = ctx.r11.s32 / ctx.r4.s32;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C06EC"))) PPC_WEAK_FUNC(sub_828C06EC);
PPC_FUNC_IMPL(__imp__sub_828C06EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C06F0"))) PPC_WEAK_FUNC(sub_828C06F0);
PPC_FUNC_IMPL(__imp__sub_828C06F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divw r10,r11,r4
	ctx.r10.s32 = ctx.r11.s32 / ctx.r4.s32;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// subf. r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C0714"))) PPC_WEAK_FUNC(sub_828C0714);
PPC_FUNC_IMPL(__imp__sub_828C0714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0718"))) PPC_WEAK_FUNC(sub_828C0718);
PPC_FUNC_IMPL(__imp__sub_828C0718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,31984
	ctx.r10.s64 = ctx.r11.s64 + 31984;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0758
	if (ctx.cr6.eq) goto loc_828C0758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C0758:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,31680
	ctx.r10.s64 = ctx.r11.s64 + 31680;
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

__attribute__((alias("__imp__sub_828C0778"))) PPC_WEAK_FUNC(sub_828C0778);
PPC_FUNC_IMPL(__imp__sub_828C0778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_828C0798"))) PPC_WEAK_FUNC(sub_828C0798);
PPC_FUNC_IMPL(__imp__sub_828C0798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C079C"))) PPC_WEAK_FUNC(sub_828C079C);
PPC_FUNC_IMPL(__imp__sub_828C079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C07A0"))) PPC_WEAK_FUNC(sub_828C07A0);
PPC_FUNC_IMPL(__imp__sub_828C07A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C07A8"))) PPC_WEAK_FUNC(sub_828C07A8);
PPC_FUNC_IMPL(__imp__sub_828C07A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C07C4"))) PPC_WEAK_FUNC(sub_828C07C4);
PPC_FUNC_IMPL(__imp__sub_828C07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C07C8"))) PPC_WEAK_FUNC(sub_828C07C8);
PPC_FUNC_IMPL(__imp__sub_828C07C8) {
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
	// bl 0x828c0718
	ctx.lr = 0x828C07E8;
	sub_828C0718(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c0800
	if (ctx.cr6.eq) goto loc_828C0800;
	// bl 0x82294a58
	ctx.lr = 0x828C07FC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828C0800:
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

__attribute__((alias("__imp__sub_828C0818"))) PPC_WEAK_FUNC(sub_828C0818);
PPC_FUNC_IMPL(__imp__sub_828C0818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x828C0820;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ad4
	ctx.lr = 0x828C0828;
	__savefpr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,31984
	ctx.r10.s64 = ctx.r11.s64 + 31984;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8270d7f8
	ctx.lr = 0x828C087C;
	sub_8270D7F8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// li r9,7
	ctx.r9.s64 = 7;
	// lfs f10,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-18304
	ctx.r10.s64 = ctx.r10.s64 + -18304;
	// lfs f8,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f6,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f30,f9,f1,f4
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f4.f64));
	// lfs f3,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f29,f10,f1,f2
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfs f4,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f8,f1,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lfs f2,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f6,f31,f30
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmadds f30,f7,f31,f29
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fmadds f29,f5,f31,f1
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fadds f31,f0,f3
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f30,f4
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f29,f2
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f2.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_828C092C:
	// lfs f28,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f27,f7,f28
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// lfs f26,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f6,f28
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// lfs f24,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f28,f5,f28
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmadds f27,f13,f26,f27
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fmadds f25,f12,f26,f25
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fmadds f28,f11,f26,f28
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f28.f64));
	// fmadds f27,f10,f24,f27
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f24.f64 + ctx.f27.f64));
	// fmadds f26,f9,f24,f25
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f24.f64 + ctx.f25.f64));
	// fmadds f28,f8,f24,f28
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f28.f64));
	// fadds f27,f27,f4
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f4.f64));
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f27,f26,f3
	ctx.f27.f64 = double(float(ctx.f26.f64 + ctx.f3.f64));
	// fadds f28,f28,f2
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// fsubs f26,f1,f28
	ctx.f26.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// lfs f27,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f24,f30,f28
	ctx.f24.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// fsubs f25,f31,f27
	ctx.f25.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// fsubs f23,f29,f27
	ctx.f23.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
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
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r6,r5,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(ctx.f24.f64, ctx.f0.f64);
	// rlwinm r7,r5,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r5,r4,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// rlwinm r4,r4,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
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
	// rlwinm r29,r3,27,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// rlwinm r25,r8,27,29,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r29,r3
	ctx.r5.u64 = ctx.r29.u64 | ctx.r3.u64;
	// or r4,r25,r8
	ctx.r4.u64 = ctx.r25.u64 | ctx.r8.u64;
	// lfsx f26,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f26.f64 = double(temp.f32);
	// lfsx f25,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f25.f64 = double(temp.f32);
	// fsel f1,f26,f28,f1
	ctx.f1.f64 = ctx.f26.f64 >= 0.0 ? ctx.f28.f64 : ctx.f1.f64;
	// fsel f31,f25,f27,f31
	ctx.f31.f64 = ctx.f25.f64 >= 0.0 ? ctx.f27.f64 : ctx.f31.f64;
	// lfsx f26,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f26.f64 = double(temp.f32);
	// lfsx f25,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f25.f64 = double(temp.f32);
	// fsel f30,f26,f30,f28
	ctx.f30.f64 = ctx.f26.f64 >= 0.0 ? ctx.f30.f64 : ctx.f28.f64;
	// fsel f29,f25,f29,f27
	ctx.f29.f64 = ctx.f25.f64 >= 0.0 ? ctx.f29.f64 : ctx.f27.f64;
	// bne 0x828c092c
	if (!ctx.cr0.eq) goto loc_828C092C;
	// bl 0x82cb2298
	ctx.lr = 0x828C0A24;
	sub_82CB2298(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x828c0a40
	if (ctx.cr6.gt) goto loc_828C0A40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_828C0A40:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb2298
	ctx.lr = 0x828C0A4C;
	sub_82CB2298(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x828c0a68
	if (ctx.cr6.gt) goto loc_828C0A68;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_828C0A68:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb3d10
	ctx.lr = 0x828C0A78;
	sub_82CB3D10(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x828c0a94
	if (ctx.cr6.gt) goto loc_828C0A94;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_828C0A94:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb3d10
	ctx.lr = 0x828C0AA0;
	sub_82CB3D10(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x828c0abc
	if (ctx.cr6.gt) goto loc_828C0ABC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_828C0ABC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x828c0b68
	if (ctx.cr6.eq) goto loc_828C0B68;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828c0b68
	if (ctx.cr6.eq) goto loc_828C0B68;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divw r10,r11,r30
	ctx.r10.s32 = ctx.r11.s32 / ctx.r30.s32;
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// divw r5,r6,r30
	ctx.r5.s32 = ctx.r6.s32 / ctx.r30.s32;
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// subf r11,r3,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r3.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// divw r10,r11,r30
	ctx.r10.s32 = ctx.r11.s32 / ctx.r30.s32;
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf. r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x828c0b2c
	if (!ctx.cr0.gt) goto loc_828C0B2C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_828C0B2C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// divw r10,r11,r30
	ctx.r10.s32 = ctx.r11.s32 / ctx.r30.s32;
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf. r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x828c0b4c
	if (!ctx.cr0.gt) goto loc_828C0B4C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_828C0B4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b20
	ctx.lr = 0x828C0B64;
	__restfpr_23(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_828C0B68:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b20
	ctx.lr = 0x828C0B7C;
	__restfpr_23(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C0B80"))) PPC_WEAK_FUNC(sub_828C0B80);
PPC_FUNC_IMPL(__imp__sub_828C0B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828C0B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,76
	ctx.r3.s64 = 76;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822959a8
	ctx.lr = 0x828C0BA4;
	sub_822959A8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0bd8
	if (ctx.cr6.eq) goto loc_828C0BD8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x828bfc68
	ctx.lr = 0x828C0BD4;
	sub_828BFC68(ctx, base);
	// b 0x828c0bdc
	goto loc_828C0BDC;
loc_828C0BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C0BDC:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C0BFC"))) PPC_WEAK_FUNC(sub_828C0BFC);
PPC_FUNC_IMPL(__imp__sub_828C0BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0C00"))) PPC_WEAK_FUNC(sub_828C0C00);
PPC_FUNC_IMPL(__imp__sub_828C0C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828C0C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0d14
	if (ctx.cr6.eq) goto loc_828C0D14;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c0d14
	if (ctx.cr6.eq) goto loc_828C0D14;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x828c0cbc
	if (ctx.cr6.eq) goto loc_828C0CBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0c74
	if (ctx.cr6.eq) goto loc_828C0C74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C0C74:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x822959a8
	ctx.lr = 0x828C0C80;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c0cb4
	if (ctx.cr6.eq) goto loc_828C0CB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x828bfc68
	ctx.lr = 0x828C0CB0;
	sub_828BFC68(ctx, base);
	// b 0x828c0cb8
	goto loc_828C0CB8;
loc_828C0CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C0CB8:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_828C0CBC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r9,r29,r29
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r29.s32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r29,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r29.u32);
	// stw r9,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r6,692(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 692);
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r5,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r5.u32);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7088
	ctx.lr = 0x828C0CF0;
	sub_828C7088(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x828c0d14
	if (!ctx.cr6.gt) goto loc_828C0D14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C0D14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C0D1C"))) PPC_WEAK_FUNC(sub_828C0D1C);
PPC_FUNC_IMPL(__imp__sub_828C0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0D20"))) PPC_WEAK_FUNC(sub_828C0D20);
PPC_FUNC_IMPL(__imp__sub_828C0D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x828C0D28;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x822959a8
	ctx.lr = 0x828C0D48;
	sub_822959A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828c0da0
	if (ctx.cr6.eq) goto loc_828C0DA0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,56(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r26,100(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r25,96(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,576(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828C0D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x828c0818
	ctx.lr = 0x828C0D98;
	sub_828C0818(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x828c0da4
	goto loc_828C0DA4;
loc_828C0DA0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828C0DA4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c0dc0
	if (ctx.cr6.eq) goto loc_828C0DC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c0b80
	ctx.lr = 0x828C0DC0;
	sub_828C0B80(ctx, base);
loc_828C0DC0:
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x828c0dd0
	if (ctx.cr6.lt) goto loc_828C0DD0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_828C0DD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c0c00
	ctx.lr = 0x828C0DE0;
	sub_828C0C00(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,584
	ctx.r3.s64 = ctx.r11.s64 + 584;
	// bl 0x828c4bf8
	ctx.lr = 0x828C0DF4;
	sub_828C4BF8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C0DFC"))) PPC_WEAK_FUNC(sub_828C0DFC);
PPC_FUNC_IMPL(__imp__sub_828C0DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0E00"))) PPC_WEAK_FUNC(sub_828C0E00);
PPC_FUNC_IMPL(__imp__sub_828C0E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828C0E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,-17360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17360);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,104(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r7,696(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// lwz r6,684(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lwz r5,688(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lwz r4,700(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r10,644(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 644);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,648(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 648);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lwz r7,620(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// lwz r6,624(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// lwz r5,680(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 680);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// lfs f0,628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r4,664(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 664);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// lwz r9,652(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 652);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r6,656(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 656);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// mullw r28,r11,r7
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// bne cr6,0x828c0ecc
	if (!ctx.cr6.eq) goto loc_828C0ECC;
	// bl 0x822900a0
	ctx.lr = 0x828C0EC8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_828C0ECC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// blt cr6,0x828c0f40
	if (ctx.cr6.lt) goto loc_828C0F40;
loc_828C0F00:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// blt cr6,0x828c0f30
	if (ctx.cr6.lt) goto loc_828C0F30;
loc_828C0F10:
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stbx r8,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x828c0f10
	if (!ctx.cr6.gt) goto loc_828C0F10;
loc_828C0F30:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x828c0f00
	if (!ctx.cr6.gt) goto loc_828C0F00;
loc_828C0F40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r31.u32);
	// stw r31,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r31.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C0F5C"))) PPC_WEAK_FUNC(sub_828C0F5C);
PPC_FUNC_IMPL(__imp__sub_828C0F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C0F60"))) PPC_WEAK_FUNC(sub_828C0F60);
PPC_FUNC_IMPL(__imp__sub_828C0F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828C0F68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822959a8
	ctx.lr = 0x828C0F7C;
	sub_822959A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828c0fb4
	if (ctx.cr6.eq) goto loc_828C0FB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828bc2a0
	ctx.lr = 0x828C0FA0;
	sub_828BC2A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,31536
	ctx.r10.s64 = ctx.r11.s64 + 31536;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x828c0fb8
	goto loc_828C0FB8;
loc_828C0FB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C0FB8:
	// stw r3,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r3.u32);
	// bl 0x82832990
	ctx.lr = 0x828C0FC0;
	sub_82832990(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// lwz r4,864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C0FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82832990
	ctx.lr = 0x828C0FE4;
	sub_82832990(ctx, base);
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// lwz r4,864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828C1000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r7,r31,448
	ctx.xer.ca = ctx.r31.u32 > 4294966847;
	ctx.r7.s64 = ctx.r31.s64 + 448;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x828c1010
	if (!ctx.cr0.eq) goto loc_828C1010;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C1010:
	// bl 0x82832990
	ctx.lr = 0x828C1014;
	sub_82832990(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822959a8
	ctx.lr = 0x828C1020;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c106c
	if (ctx.cr6.eq) goto loc_828C106C;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// addi r7,r11,31572
	ctx.r7.s64 = ctx.r11.s64 + 31572;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// b 0x828c1070
	goto loc_828C1070;
loc_828C106C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C1070:
	// stw r3,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r3.u32);
	// bl 0x82832990
	ctx.lr = 0x828C1078;
	sub_82832990(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// lwz r29,40(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828c10cc
	if (!ctx.cr6.eq) goto loc_828C10CC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828c10cc
	if (!ctx.cr6.eq) goto loc_828C10CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822959a8
	ctx.lr = 0x828C10AC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c10f8
	if (ctx.cr6.eq) goto loc_828C10F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x828bc2a0
	ctx.lr = 0x828C10C8;
	sub_828BC2A0(ctx, base);
	// b 0x828c10fc
	goto loc_828C10FC;
loc_828C10CC:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822959a8
	ctx.lr = 0x828C10D8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c10f8
	if (ctx.cr6.eq) goto loc_828C10F8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x828bc2a0
	ctx.lr = 0x828C10F4;
	sub_828BC2A0(ctx, base);
	// b 0x828c10fc
	goto loc_828C10FC;
loc_828C10F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C10FC:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82832990
	ctx.lr = 0x828C1108;
	sub_82832990(ctx, base);
	// lwz r11,668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 668);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828c1134
	if (!ctx.cr6.eq) goto loc_828C1134;
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x822959a8
	ctx.lr = 0x828C1124;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1170
	if (ctx.cr6.eq) goto loc_828C1170;
	// bl 0x828bc6c0
	ctx.lr = 0x828C1130;
	sub_828BC6C0(ctx, base);
	// b 0x828c1174
	goto loc_828C1174;
loc_828C1134:
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828c1158
	if (!ctx.cr6.eq) goto loc_828C1158;
	// li r3,348
	ctx.r3.s64 = 348;
	// bl 0x822959a8
	ctx.lr = 0x828C1148;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1170
	if (ctx.cr6.eq) goto loc_828C1170;
	// bl 0x828c1460
	ctx.lr = 0x828C1154;
	sub_828C1460(ctx, base);
	// b 0x828c1174
	goto loc_828C1174;
loc_828C1158:
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x822959a8
	ctx.lr = 0x828C1160;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1170
	if (ctx.cr6.eq) goto loc_828C1170;
	// bl 0x828c14f8
	ctx.lr = 0x828C116C;
	sub_828C14F8(ctx, base);
	// b 0x828c1174
	goto loc_828C1174;
loc_828C1170:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C1174:
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r31,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r31.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r9,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r9.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x828C11A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82832990
	ctx.lr = 0x828C11AC;
	sub_82832990(ctx, base);
	// lwz r11,668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 668);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r6,r11,0,6,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x828c11d8
	if (!ctx.cr6.eq) goto loc_828C11D8;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x822959a8
	ctx.lr = 0x828C11C8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1214
	if (ctx.cr6.eq) goto loc_828C1214;
	// bl 0x828bc768
	ctx.lr = 0x828C11D4;
	sub_828BC768(ctx, base);
	// b 0x828c1218
	goto loc_828C1218;
loc_828C11D8:
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828c11fc
	if (!ctx.cr6.eq) goto loc_828C11FC;
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x822959a8
	ctx.lr = 0x828C11EC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1214
	if (ctx.cr6.eq) goto loc_828C1214;
	// bl 0x828c15a0
	ctx.lr = 0x828C11F8;
	sub_828C15A0(ctx, base);
	// b 0x828c1218
	goto loc_828C1218;
loc_828C11FC:
	// li r3,528
	ctx.r3.s64 = 528;
	// bl 0x822959a8
	ctx.lr = 0x828C1204;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1214
	if (ctx.cr6.eq) goto loc_828C1214;
	// bl 0x828c1638
	ctx.lr = 0x828C1210;
	sub_828C1638(ctx, base);
	// b 0x828c1218
	goto loc_828C1218;
loc_828C1214:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C1218:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C1230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r31.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r7,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r7.u32);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828C1254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82832990
	ctx.lr = 0x828C125C;
	sub_82832990(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x822959a8
	ctx.lr = 0x828C1268;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1288
	if (ctx.cr6.eq) goto loc_828C1288;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828bfb98
	ctx.lr = 0x828C1284;
	sub_828BFB98(ctx, base);
	// b 0x828c128c
	goto loc_828C128C;
loc_828C1288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C128C:
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// bl 0x82832990
	ctx.lr = 0x828C1294;
	sub_82832990(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c1318
	if (ctx.cr6.eq) goto loc_828C1318;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-21884
	ctx.r4.s64 = ctx.r11.s64 + -21884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295070
	ctx.lr = 0x828C12B8;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c12d4
	if (ctx.cr6.eq) goto loc_828C12D4;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r9,r10,31992
	ctx.r9.s64 = ctx.r10.s64 + 31992;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_828C12D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c1320
	if (ctx.cr6.eq) goto loc_828C1320;
	// lwsync 
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r28.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x828C1314;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x828c1320
	goto loc_828C1320;
loc_828C1318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c1970
	ctx.lr = 0x828C1320;
	sub_828C1970(ctx, base);
loc_828C1320:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c1404
	if (ctx.cr6.eq) goto loc_828C1404;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822959a8
	ctx.lr = 0x828C1338;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c1358
	if (ctx.cr6.eq) goto loc_828C1358;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,632(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x828bc2a0
	ctx.lr = 0x828C1354;
	sub_828BC2A0(ctx, base);
	// b 0x828c135c
	goto loc_828C135C;
loc_828C1358:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C135C:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r3.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// lwz r3,880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// bl 0x82832990
	ctx.lr = 0x828C1370;
	sub_82832990(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x822959a8
	ctx.lr = 0x828C137C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c138c
	if (ctx.cr6.eq) goto loc_828C138C;
	// bl 0x828bc6c0
	ctx.lr = 0x828C1388;
	sub_828BC6C0(ctx, base);
	// b 0x828c1390
	goto loc_828C1390;
loc_828C138C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C1390:
	// stw r3,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r3.u32);
	// stw r31,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r31.u32);
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// lwz r10,632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// lwz r4,880(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828C13BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// bl 0x82832990
	ctx.lr = 0x828C13C4;
	sub_82832990(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x822959a8
	ctx.lr = 0x828C13D0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c13f0
	if (ctx.cr6.eq) goto loc_828C13F0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828bfb98
	ctx.lr = 0x828C13EC;
	sub_828BFB98(ctx, base);
	// b 0x828c13f4
	goto loc_828C13F4;
loc_828C13F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C13F4:
	// stw r3,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r3.u32);
	// stw r30,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
	// lwz r3,884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// bl 0x82832990
	ctx.lr = 0x828C1404;
	sub_82832990(ctx, base);
loc_828C1404:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C140C"))) PPC_WEAK_FUNC(sub_828C140C);
PPC_FUNC_IMPL(__imp__sub_828C140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C1410"))) PPC_WEAK_FUNC(sub_828C1410);
PPC_FUNC_IMPL(__imp__sub_828C1410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,31992
	ctx.r10.s64 = ctx.r11.s64 + 31992;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C1428"))) PPC_WEAK_FUNC(sub_828C1428);
PPC_FUNC_IMPL(__imp__sub_828C1428) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x828c1970
	ctx.lr = 0x828C143C;
	sub_828C1970(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C1450"))) PPC_WEAK_FUNC(sub_828C1450);
PPC_FUNC_IMPL(__imp__sub_828C1450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C145C"))) PPC_WEAK_FUNC(sub_828C145C);
PPC_FUNC_IMPL(__imp__sub_828C145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C1460"))) PPC_WEAK_FUNC(sub_828C1460);
PPC_FUNC_IMPL(__imp__sub_828C1460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828bc6c0
	ctx.lr = 0x828C1478;
	sub_828BC6C0(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31156
	ctx.r9.s64 = ctx.r10.s64 + 31156;
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
	// stb r11,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r11.u8);
	// stb r11,306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 306, ctx.r11.u8);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stb r11,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r11.u8);
	// stb r11,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r11.u8);
	// stb r11,318(r31)
	PPC_STORE_U8(ctx.r31.u32 + 318, ctx.r11.u8);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stb r11,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r11.u8);
	// stb r11,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r11.u8);
	// stb r11,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r11.u8);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stb r11,340(r31)
	PPC_STORE_U8(ctx.r31.u32 + 340, ctx.r11.u8);
	// stb r11,341(r31)
	PPC_STORE_U8(ctx.r31.u32 + 341, ctx.r11.u8);
	// stb r11,342(r31)
	PPC_STORE_U8(ctx.r31.u32 + 342, ctx.r11.u8);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C14F4"))) PPC_WEAK_FUNC(sub_828C14F4);
PPC_FUNC_IMPL(__imp__sub_828C14F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C14F8"))) PPC_WEAK_FUNC(sub_828C14F8);
PPC_FUNC_IMPL(__imp__sub_828C14F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828c1460
	ctx.lr = 0x828C1510;
	sub_828C1460(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31284
	ctx.r9.s64 = ctx.r10.s64 + 31284;
	// addi r10,r31,348
	ctx.r10.s64 = ctx.r31.s64 + 348;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stb r11,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r11.u8);
	// stb r11,353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 353, ctx.r11.u8);
	// stb r11,354(r31)
	PPC_STORE_U8(ctx.r31.u32 + 354, ctx.r11.u8);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// stb r11,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r11.u8);
	// stb r11,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r11.u8);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stb r11,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r11.u8);
	// stb r11,377(r31)
	PPC_STORE_U8(ctx.r31.u32 + 377, ctx.r11.u8);
	// stb r11,378(r31)
	PPC_STORE_U8(ctx.r31.u32 + 378, ctx.r11.u8);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stb r11,388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 388, ctx.r11.u8);
	// stb r11,389(r31)
	PPC_STORE_U8(ctx.r31.u32 + 389, ctx.r11.u8);
	// stb r11,390(r31)
	PPC_STORE_U8(ctx.r31.u32 + 390, ctx.r11.u8);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stb r11,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r11.u8);
	// stb r11,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r11.u8);
	// stb r11,402(r31)
	PPC_STORE_U8(ctx.r31.u32 + 402, ctx.r11.u8);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C15A0"))) PPC_WEAK_FUNC(sub_828C15A0);
PPC_FUNC_IMPL(__imp__sub_828C15A0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-17840
	ctx.r4.s64 = ctx.r10.s64 + -17840;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x828C15D4;
	sub_82CB1160(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r6,r7,32292
	ctx.r6.s64 = ctx.r7.s64 + 32292;
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x828c1460
	ctx.lr = 0x828C1604;
	sub_828C1460(ctx, base);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// lis r4,-32233
	ctx.r4.s64 = -2112421888;
	// addi r3,r5,31208
	ctx.r3.s64 = ctx.r5.s64 + 31208;
	// addi r11,r4,31232
	ctx.r11.s64 = ctx.r4.s64 + 31232;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C1634"))) PPC_WEAK_FUNC(sub_828C1634);
PPC_FUNC_IMPL(__imp__sub_828C1634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C1638"))) PPC_WEAK_FUNC(sub_828C1638);
PPC_FUNC_IMPL(__imp__sub_828C1638) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-17840
	ctx.r4.s64 = ctx.r10.s64 + -17840;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x828C166C;
	sub_82CB1160(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r6,r7,32292
	ctx.r6.s64 = ctx.r7.s64 + 32292;
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x828c14f8
	ctx.lr = 0x828C169C;
	sub_828C14F8(ctx, base);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// lis r4,-32233
	ctx.r4.s64 = -2112421888;
	// addi r3,r5,31336
	ctx.r3.s64 = ctx.r5.s64 + 31336;
	// addi r11,r4,31360
	ctx.r11.s64 = ctx.r4.s64 + 31360;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C16CC"))) PPC_WEAK_FUNC(sub_828C16CC);
PPC_FUNC_IMPL(__imp__sub_828C16CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C16D0"))) PPC_WEAK_FUNC(sub_828C16D0);
PPC_FUNC_IMPL(__imp__sub_828C16D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C16E0"))) PPC_WEAK_FUNC(sub_828C16E0);
PPC_FUNC_IMPL(__imp__sub_828C16E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15168
	ctx.r9.s64 = ctx.r11.s64 + 15168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828c1714
	if (ctx.cr6.eq) goto loc_828C1714;
	// bl 0x82294a58
	ctx.lr = 0x828C1710;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828C1714:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C1728"))) PPC_WEAK_FUNC(sub_828C1728);
PPC_FUNC_IMPL(__imp__sub_828C1728) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
	// stb r11,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r11.u8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C1780"))) PPC_WEAK_FUNC(sub_828C1780);
PPC_FUNC_IMPL(__imp__sub_828C1780) {
	PPC_FUNC_PROLOGUE();
	// b 0x82475d80
	sub_82475D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C1784"))) PPC_WEAK_FUNC(sub_828C1784);
PPC_FUNC_IMPL(__imp__sub_828C1784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C1788"))) PPC_WEAK_FUNC(sub_828C1788);
PPC_FUNC_IMPL(__imp__sub_828C1788) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
	// stb r11,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r11.u8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stb r11,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r11.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C17F4"))) PPC_WEAK_FUNC(sub_828C17F4);
PPC_FUNC_IMPL(__imp__sub_828C17F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C17F8"))) PPC_WEAK_FUNC(sub_828C17F8);
PPC_FUNC_IMPL(__imp__sub_828C17F8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bne cr6,0x828c1824
	if (!ctx.cr6.eq) goto loc_828C1824;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C1824:
	// bl 0x82475d80
	ctx.lr = 0x828C1828;
	sub_82475D80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x828c184c
	if (ctx.cr6.eq) goto loc_828C184C;
	// bl 0x82294a58
	ctx.lr = 0x828C1848;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828C184C:
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

__attribute__((alias("__imp__sub_828C1864"))) PPC_WEAK_FUNC(sub_828C1864);
PPC_FUNC_IMPL(__imp__sub_828C1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828C1868"))) PPC_WEAK_FUNC(sub_828C1868);
PPC_FUNC_IMPL(__imp__sub_828C1868) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bne cr6,0x828c1894
	if (!ctx.cr6.eq) goto loc_828C1894;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C1894:
	// bl 0x82475d80
	ctx.lr = 0x828C1898;
	sub_82475D80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x828c18bc
	if (ctx.cr6.eq) goto loc_828C18BC;
	// bl 0x82294a58
	ctx.lr = 0x828C18B8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828C18BC:
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

__attribute__((alias("__imp__sub_828C18D4"))) PPC_WEAK_FUNC(sub_828C18D4);
PPC_FUNC_IMPL(__imp__sub_828C18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

