#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B516F8"))) PPC_WEAK_FUNC(sub_82B516F8);
PPC_FUNC_IMPL(__imp__sub_82B516F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82B51700;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r28,r27,144
	ctx.r28.s64 = ctx.r27.s64 + 144;
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51764
	if (ctx.cr6.eq) goto loc_82B51764;
	// bl 0x82312318
	ctx.lr = 0x82B51720;
	sub_82312318(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51744
	if (ctx.cr6.eq) goto loc_82B51744;
loc_82B51730:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b51754
	if (ctx.cr6.eq) goto loc_82B51754;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b51730
	if (!ctx.cr6.eq) goto loc_82B51730;
loc_82B51744:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51764
	if (ctx.cr6.eq) goto loc_82B51764;
loc_82B51754:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x823f1ed0
	ctx.lr = 0x82B5175C;
	sub_823F1ED0(ctx, base);
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82B51764:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b517a8
	if (ctx.cr6.eq) goto loc_82B517A8;
	// bl 0x823121d8
	ctx.lr = 0x82B51774;
	sub_823121D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51798
	if (ctx.cr6.eq) goto loc_82B51798;
loc_82B51784:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b518a0
	if (ctx.cr6.eq) goto loc_82B518A0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b51784
	if (!ctx.cr6.eq) goto loc_82B51784;
loc_82B51798:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b518a0
	if (!ctx.cr6.eq) goto loc_82B518A0;
loc_82B517A8:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82b517d0
	if (ctx.cr6.gt) goto loc_82B517D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b517d8
	goto loc_82B517D8;
loc_82B517D0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B517D8:
	// lwz r31,1008(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b518a0
	if (ctx.cr6.eq) goto loc_82B518A0;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-28608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28608);
loc_82B517F4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b518a0
	if (!ctx.cr6.eq) goto loc_82B518A0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b5181c
	if (!ctx.cr6.eq) goto loc_82B5181C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82606128
	ctx.lr = 0x82B51810;
	sub_82606128(ctx, base);
	// stw r3,-28608(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28608, ctx.r3.u32);
	// bl 0x826061d8
	ctx.lr = 0x82B51818;
	sub_826061D8(ctx, base);
	// lwz r10,-28608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28608);
loc_82B5181C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5183c
	if (ctx.cr6.eq) goto loc_82B5183C;
loc_82B51828:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b5184c
	if (ctx.cr6.eq) goto loc_82B5184C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b51828
	if (!ctx.cr6.eq) goto loc_82B51828;
loc_82B5183C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51894
	if (ctx.cr6.eq) goto loc_82B51894;
loc_82B5184C:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51874
	if (ctx.cr6.eq) goto loc_82B51874;
	// lwz r11,840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b51874
	if (ctx.cr6.eq) goto loc_82B51874;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// lwz r9,164(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82b51890
	if (ctx.cr6.eq) goto loc_82B51890;
loc_82B51874:
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b51890
	if (ctx.cr6.eq) goto loc_82B51890;
	// lwz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51894
	if (ctx.cr6.eq) goto loc_82B51894;
loc_82B51890:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82B51894:
	// lwz r31,504(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b517f4
	if (!ctx.cr6.eq) goto loc_82B517F4;
loc_82B518A0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82b518b0
	if (!ctx.cr6.eq) goto loc_82B518B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82B518B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B518B8"))) PPC_WEAK_FUNC(sub_82B518B8);
PPC_FUNC_IMPL(__imp__sub_82B518B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,28568
	ctx.r8.s64 = ctx.r9.s64 + 28568;
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

__attribute__((alias("__imp__sub_82B518E0"))) PPC_WEAK_FUNC(sub_82B518E0);
PPC_FUNC_IMPL(__imp__sub_82B518E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B518E8"))) PPC_WEAK_FUNC(sub_82B518E8);
PPC_FUNC_IMPL(__imp__sub_82B518E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,28568
	ctx.r8.s64 = ctx.r9.s64 + 28568;
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

__attribute__((alias("__imp__sub_82B51908"))) PPC_WEAK_FUNC(sub_82B51908);
PPC_FUNC_IMPL(__imp__sub_82B51908) {
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
	// bl 0x82b51978
	ctx.lr = 0x82B51928;
	sub_82B51978(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5195c
	if (ctx.cr6.eq) goto loc_82B5195C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b51954
	if (ctx.cr6.lt) goto loc_82B51954;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b5195c
	if (!ctx.cr6.gt) goto loc_82B5195C;
loc_82B51954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B5195C;
	sub_82294A58(ctx, base);
loc_82B5195C:
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

__attribute__((alias("__imp__sub_82B51978"))) PPC_WEAK_FUNC(sub_82B51978);
PPC_FUNC_IMPL(__imp__sub_82B51978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,28568
	ctx.r10.s64 = ctx.r11.s64 + 28568;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B5199C;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x822b4260
	ctx.lr = 0x82B519A4;
	sub_822B4260(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,30272
	ctx.r8.s64 = ctx.r9.s64 + 30272;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B519B8;
	sub_8229C068(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,11896
	ctx.r6.s64 = ctx.r7.s64 + 11896;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B519CC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248eca0
	ctx.lr = 0x82B519D4;
	sub_8248ECA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B519E8"))) PPC_WEAK_FUNC(sub_82B519E8);
PPC_FUNC_IMPL(__imp__sub_82B519E8) {
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
	// lwz r11,160(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b51a20
	if (!ctx.cr6.eq) goto loc_82B51A20;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lwz r5,164(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// addi r4,r11,28516
	ctx.r4.s64 = ctx.r11.s64 + 28516;
	// bl 0x8232e868
	ctx.lr = 0x82B51A1C;
	sub_8232E868(ctx, base);
	// b 0x82b51a2c
	goto loc_82B51A2C;
loc_82B51A20:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// bl 0x822960c0
	ctx.lr = 0x82B51A2C;
	sub_822960C0(ctx, base);
loc_82B51A2C:
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

__attribute__((alias("__imp__sub_82B51A44"))) PPC_WEAK_FUNC(sub_82B51A44);
PPC_FUNC_IMPL(__imp__sub_82B51A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51A48"))) PPC_WEAK_FUNC(sub_82B51A48);
PPC_FUNC_IMPL(__imp__sub_82B51A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51A4C"))) PPC_WEAK_FUNC(sub_82B51A4C);
PPC_FUNC_IMPL(__imp__sub_82B51A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51A50"))) PPC_WEAK_FUNC(sub_82B51A50);
PPC_FUNC_IMPL(__imp__sub_82B51A50) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51A58"))) PPC_WEAK_FUNC(sub_82B51A58);
PPC_FUNC_IMPL(__imp__sub_82B51A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,29296
	ctx.r10.s64 = ctx.r11.s64 + 29296;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51A68"))) PPC_WEAK_FUNC(sub_82B51A68);
PPC_FUNC_IMPL(__imp__sub_82B51A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51A84"))) PPC_WEAK_FUNC(sub_82B51A84);
PPC_FUNC_IMPL(__imp__sub_82B51A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51A88"))) PPC_WEAK_FUNC(sub_82B51A88);
PPC_FUNC_IMPL(__imp__sub_82B51A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r10,r11,29400
	ctx.r10.s64 = ctx.r11.s64 + 29400;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51AA4"))) PPC_WEAK_FUNC(sub_82B51AA4);
PPC_FUNC_IMPL(__imp__sub_82B51AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B51AA8"))) PPC_WEAK_FUNC(sub_82B51AA8);
PPC_FUNC_IMPL(__imp__sub_82B51AA8) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,29304
	ctx.r10.s64 = ctx.r11.s64 + 29304;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82294a58
	ctx.lr = 0x82B51AD4;
	sub_82294A58(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r30,r31,612
	ctx.r30.s64 = ctx.r31.s64 + 612;
	// addi r8,r9,-23604
	ctx.r8.s64 = ctx.r9.s64 + -23604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r8.u32);
	// bl 0x82832848
	ctx.lr = 0x82B51AEC;
	sub_82832848(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x8292b2f0
	ctx.lr = 0x82B51AF4;
	sub_8292B2F0(ctx, base);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82b57ec8
	ctx.lr = 0x82B51AFC;
	sub_82B57EC8(ctx, base);
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b585b0
	ctx.lr = 0x82B51B10;
	sub_82B585B0(ctx, base);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51b20
	if (ctx.cr6.eq) goto loc_82B51B20;
	// bl 0x82294a58
	ctx.lr = 0x82B51B20;
	sub_82294A58(ctx, base);
loc_82B51B20:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x8264e908
	ctx.lr = 0x82B51B38;
	sub_8264E908(ctx, base);
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

__attribute__((alias("__imp__sub_82B51B50"))) PPC_WEAK_FUNC(sub_82B51B50);
PPC_FUNC_IMPL(__imp__sub_82B51B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82B51B58;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8264e240
	ctx.lr = 0x82B51B68;
	sub_8264E240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r9,r10,29304
	ctx.r9.s64 = ctx.r10.s64 + 29304;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r8,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r8.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// lwz r7,712(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r7,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// addi r28,r31,296
	ctx.r28.s64 = ctx.r31.s64 + 296;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// addi r24,r31,316
	ctx.r24.s64 = ctx.r31.s64 + 316;
	// stw r27,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r27.u32);
	// stw r27,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r27.u32);
	// stw r27,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r27.u32);
	// lwz r6,704(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// stw r6,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r6.u32);
	// stw r27,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r27.u32);
	// stw r27,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r27.u32);
	// stw r27,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r27.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82B51BD0;
	sub_82CB1160(ctx, base);
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// addi r4,r30,304
	ctx.r4.s64 = ctx.r30.s64 + 304;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B51BE8;
	sub_82CB1160(ctx, base);
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B51BF8;
	sub_82CB1160(ctx, base);
	// addi r11,r30,396
	ctx.r11.s64 = ctx.r30.s64 + 396;
	// addi r10,r31,556
	ctx.r10.s64 = ctx.r31.s64 + 556;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B51C08:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82b51c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B51C08;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r11.u8);
	// stb r11,585(r31)
	PPC_STORE_U8(ctx.r31.u32 + 585, ctx.r11.u8);
	// stb r11,586(r31)
	PPC_STORE_U8(ctx.r31.u32 + 586, ctx.r11.u8);
	// stb r11,587(r31)
	PPC_STORE_U8(ctx.r31.u32 + 587, ctx.r11.u8);
	// stb r11,590(r31)
	PPC_STORE_U8(ctx.r31.u32 + 590, ctx.r11.u8);
	// stb r11,589(r31)
	PPC_STORE_U8(ctx.r31.u32 + 589, ctx.r11.u8);
	// stb r11,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r11.u8);
	// stb r11,591(r31)
	PPC_STORE_U8(ctx.r31.u32 + 591, ctx.r11.u8);
	// lwz r10,448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// rlwimi r11,r10,13,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51c7c
	if (ctx.cr6.eq) goto loc_82B51C7C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B51C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82b51c80
	if (!ctx.cr6.eq) goto loc_82B51C80;
loc_82B51C7C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82B51C80:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r10,480(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51cc0
	if (ctx.cr6.eq) goto loc_82B51CC0;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b51cb8
	if (ctx.cr6.eq) goto loc_82B51CB8;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r9,r10,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b51cc0
	if (ctx.cr6.eq) goto loc_82B51CC0;
loc_82B51CB8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82b51cc4
	goto loc_82B51CC4;
loc_82B51CC0:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82B51CC4:
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r9,480(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// rlwimi r10,r9,31,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,480(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// rlwimi r8,r7,31,4,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x8000000) | (ctx.r8.u64 & 0xFFFFFFFFF7FFFFFF);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r8.u32);
	// lwz r6,480(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// rlwimi r5,r6,31,5,5
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 31) & 0x4000000) | (ctx.r5.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r5,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r5.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,356(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B51D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r10,r9,25,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 25) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,352(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 352);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B51D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// rlwimi r6,r3,24,7,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0x1000000) | (ctx.r6.u64 & 0xFFFFFFFFFEFFFFFF);
	// rlwinm r5,r6,0,6,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	// stw r6,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b51d6c
	if (ctx.cr6.eq) goto loc_82B51D6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B51D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b51d70
	if (!ctx.cr6.eq) goto loc_82B51D70;
loc_82B51D6C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B51D70:
	// lwz r10,592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// addi r4,r30,716
	ctx.r4.s64 = ctx.r30.s64 + 716;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// rlwimi r10,r11,23,8,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 23) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// rlwinm r9,r10,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r9,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r9.u32);
	// bl 0x8240a888
	ctx.lr = 0x82B51D8C;
	sub_8240A888(ctx, base);
	// stw r27,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r27.u32);
	// stw r27,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r27.u32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r11,r31,612
	ctx.r11.s64 = ctx.r31.s64 + 612;
	// addi r7,r8,-23604
	ctx.r7.s64 = ctx.r8.s64 + -23604;
	// stw r7,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r7.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r6,628(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// stw r5,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r5.u32);
	// stw r27,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r27.u32);
	// stw r27,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r27.u32);
	// stw r27,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r27.u32);
	// stw r27,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r27.u32);
	// stw r27,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r27.u32);
	// stw r27,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r27.u32);
	// stw r27,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r27.u32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x829d99e0
	ctx.lr = 0x82B51DD8;
	sub_829D99E0(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822959a8
	ctx.lr = 0x82B51DE8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51e18
	if (ctx.cr6.eq) goto loc_82B51E18;
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lwz r8,284(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r9,29400
	ctx.r7.s64 = ctx.r9.s64 + 29400;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x82b51e1c
	goto loc_82B51E1C;
loc_82B51E18:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B51E1C:
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,1312(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r7.u32);
	// beq cr6,0x82b51eb8
	if (ctx.cr6.eq) goto loc_82B51EB8;
	// lfs f0,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f4,544(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// fmuls f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfs f3,548(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// fmuls f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f2,552(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
loc_82B51EB8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lis r22,-31885
	ctx.r22.s64 = -2089615360;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82b51f78
	if (!ctx.cr6.gt) goto loc_82B51F78;
loc_82B51ED0:
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b51ee4
	if (!ctx.cr6.eq) goto loc_82B51EE4;
	// bl 0x822900a0
	ctx.lr = 0x82B51EE0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_82B51EE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B51EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82b51f3c
	if (!ctx.cr6.gt) goto loc_82B51F3C;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
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
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82B51F3C;
	sub_82294520(ctx, base);
loc_82B51F3C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b51f64
	if (ctx.cr6.eq) goto loc_82B51F64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b53ff0
	ctx.lr = 0x82B51F64;
	sub_82B53FF0(ctx, base);
loc_82B51F64:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b51ed0
	if (ctx.cr6.lt) goto loc_82B51ED0;
loc_82B51F78:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b51fd8
	if (!ctx.cr6.gt) goto loc_82B51FD8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82B51F8C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B51FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82b51fcc
	if (!ctx.cr6.eq) goto loc_82B51FCC;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b51f8c
	if (ctx.cr6.lt) goto loc_82B51F8C;
	// b 0x82b51fd8
	goto loc_82B51FD8;
loc_82B51FCC:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// oris r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 4194304;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
loc_82B51FD8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,372(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// bl 0x82b58000
	ctx.lr = 0x82B51FE4;
	sub_82B58000(ctx, base);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b520c4
	if (!ctx.cr6.gt) goto loc_82B520C4;
loc_82B51FF4:
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// lwzx r25,r27,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b520b0
	if (ctx.cr6.eq) goto loc_82B520B0;
	// lwz r26,4(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82b52084
	if (!ctx.cr6.gt) goto loc_82B52084;
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82b52048
	if (!ctx.cr6.eq) goto loc_82B52048;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b52084
	if (ctx.cr6.eq) goto loc_82B52084;
loc_82B52048:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mulli r29,r11,464
	ctx.r29.s64 = ctx.r11.s64 * 464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b52064
	if (!ctx.cr6.eq) goto loc_82B52064;
	// bl 0x822900a0
	ctx.lr = 0x82B52060;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_82B52064:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B52080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_82B52084:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mulli r10,r26,464
	ctx.r10.s64 = ctx.r26.s64 * 464;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b520b0
	if (ctx.cr0.eq) goto loc_82B520B0;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r25,16
	ctx.r4.s64 = ctx.r25.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x8264e6f0
	ctx.lr = 0x82B520B0;
	sub_8264E6F0(ctx, base);
loc_82B520B0:
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b51ff4
	if (ctx.cr6.lt) goto loc_82B51FF4;
loc_82B520C4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B520D8"))) PPC_WEAK_FUNC(sub_82B520D8);
PPC_FUNC_IMPL(__imp__sub_82B520D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r10,652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b5220c
	if (ctx.cr6.eq) goto loc_82B5220C;
	// lwz r9,688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b5220c
	if (ctx.cr6.eq) goto loc_82B5220C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,688(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// lwz r7,652(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82b5220c
	if (ctx.cr6.eq) goto loc_82B5220C;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5220c
	if (ctx.cr6.eq) goto loc_82B5220C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5220c
	if (ctx.cr6.eq) goto loc_82B5220C;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5220c
	if (ctx.cr6.eq) goto loc_82B5220C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5220c
	if (ctx.cr6.eq) goto loc_82B5220C;
	// lwz r9,288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r8,856(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 856);
	// lfs f0,-16732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16732);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5219c
	if (ctx.cr6.eq) goto loc_82B5219C;
	// lfs f13,388(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,392(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 392);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,564(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,384(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,556(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82b52194
	if (!ctx.cr6.gt) goto loc_82B52194;
loc_82B5218C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B52194:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b5220c
	if (!ctx.cr6.eq) goto loc_82B5220C;
loc_82B5219C:
	// lfs f13,388(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,392(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 392);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,384(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82b5220c
	if (ctx.cr6.gt) goto loc_82B5220C;
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
	// bgt cr6,0x82b521f4
	if (ctx.cr6.gt) goto loc_82B521F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b521fc
	goto loc_82B521FC;
loc_82B521F4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B521FC:
	// lfs f0,996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82b5218c
	if (!ctx.cr6.gt) goto loc_82B5218C;
loc_82B5220C:
	// b 0x8264f2c0
	sub_8264F2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B52210"))) PPC_WEAK_FUNC(sub_82B52210);
PPC_FUNC_IMPL(__imp__sub_82B52210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82B52218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r5,44
	ctx.r10.s64 = ctx.r5.s64 * 44;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82b52350
	if (!ctx.cr6.gt) goto loc_82B52350;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// addi r9,r11,208
	ctx.r9.s64 = ctx.r11.s64 + 208;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,296(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lwzx r5,r6,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwzx r3,r3,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B52290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// lwzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B522B0;
	sub_82CB1160(ctx, base);
	// addi r4,r30,416
	ctx.r4.s64 = ctx.r30.s64 + 416;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B522C0;
	sub_82CB1160(ctx, base);
	// addi r4,r30,480
	ctx.r4.s64 = ctx.r30.s64 + 480;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B522D0;
	sub_82CB1160(ctx, base);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// clrlwi r11,r7,1
	ctx.r11.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r5,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r5.u32);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lfs f0,-15120(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r4.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lfs f13,400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82b52318
	if (ctx.cr6.lt) goto loc_82B52318;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B52318:
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// lis r12,-11889
	ctx.r12.s64 = -779157504;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// rlwinm r10,r27,20,9,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 20) & 0x700000;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// li r3,1
	ctx.r3.s64 = 1;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lwz r8,592(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm r7,r8,30,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x20000000;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82B52350:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5235C"))) PPC_WEAK_FUNC(sub_82B5235C);
PPC_FUNC_IMPL(__imp__sub_82B5235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B52360"))) PPC_WEAK_FUNC(sub_82B52360);
PPC_FUNC_IMPL(__imp__sub_82B52360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82B52368;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6ae8
	ctx.lr = 0x82B52370;
	__savefpr_28(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b52664
	if (!ctx.cr6.eq) goto loc_82B52664;
	// lwz r10,280(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// rlwinm r20,r11,11,29,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// lwz r9,292(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r19,64(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r9.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 4194304;
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r4,r5,0,11,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r4,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b5249c
	if (!ctx.cr6.gt) goto loc_82B5249C;
	// lwz r10,280(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,128(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b52664
	if (!ctx.cr6.gt) goto loc_82B52664;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f30,-18196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18196);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82B52408:
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// stfs f31,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b52210
	ctx.lr = 0x82B52454;
	sub_82B52210(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b5247c
	if (ctx.cr6.eq) goto loc_82B5247C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5247C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5247C:
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b52408
	if (ctx.cr6.lt) goto loc_82B52408;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b34
	ctx.lr = 0x82B52498;
	__restfpr_28(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82B5249C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// ble cr6,0x82b52664
	if (!ctx.cr6.gt) goto loc_82B52664;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// lis r23,-31885
	ctx.r23.s64 = -2089615360;
	// lfs f28,-18196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18196);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
loc_82B524C0:
	// addi r24,r25,1
	ctx.r24.s64 = ctx.r25.s64 + 1;
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// extsw r9,r24
	ctx.r9.s64 = ctx.r24.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f10,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f8,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// lwzx r22,r6,r21
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fdivs f30,f5,f1
	ctx.f30.f64 = double(float(ctx.f5.f64 / ctx.f1.f64));
	// fdivs f31,f4,f1
	ctx.f31.f64 = double(float(ctx.f4.f64 / ctx.f1.f64));
	// bne cr6,0x82b52538
	if (!ctx.cr6.eq) goto loc_82B52538;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
loc_82B52538:
	// lwz r11,128(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 128);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b52654
	if (!ctx.cr6.gt) goto loc_82B52654;
loc_82B52548:
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stfs f29,640(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// stfs f29,644(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r30,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r30,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r9,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b52210
	ctx.lr = 0x82B52594;
	sub_82B52210(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b52644
	if (ctx.cr6.eq) goto loc_82B52644;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b525b8
	if (!ctx.cr6.eq) goto loc_82B525B8;
	// bl 0x822900a0
	ctx.lr = 0x82B525B4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82B525B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,304
	ctx.r4.s64 = 304;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B525D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82b52610
	if (!ctx.cr6.gt) goto loc_82B52610;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
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
	ctx.lr = 0x82B52610;
	sub_82294520(ctx, base);
loc_82B52610:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b52644
	if (ctx.cr6.eq) goto loc_82B52644;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// fmuls f2,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f1,f30,f30
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// bl 0x8283dee0
	ctx.lr = 0x82B52644;
	sub_8283DEE0(ctx, base);
loc_82B52644:
	// lwz r11,128(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 128);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b52548
	if (ctx.cr6.lt) goto loc_82B52548;
loc_82B52654:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r24,r19
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82b524c0
	if (ctx.cr6.lt) goto loc_82B524C0;
loc_82B52664:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b34
	ctx.lr = 0x82B52670;
	__restfpr_28(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B52674"))) PPC_WEAK_FUNC(sub_82B52674);
PPC_FUNC_IMPL(__imp__sub_82B52674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B52678"))) PPC_WEAK_FUNC(sub_82B52678);
PPC_FUNC_IMPL(__imp__sub_82B52678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82b526b0
	if (ctx.cr6.eq) goto loc_82B526B0;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b526b0
	if (ctx.cr6.eq) goto loc_82B526B0;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b526b0
	if (ctx.cr6.eq) goto loc_82B526B0;
loc_82B526A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82B526B0:
	// rlwinm r11,r10,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82b526d8
	if (ctx.cr6.eq) goto loc_82B526D8;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// rlwinm r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b526d8
	if (ctx.cr6.eq) goto loc_82B526D8;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b526a8
	if (!ctx.cr6.eq) goto loc_82B526A8;
loc_82B526D8:
	// rlwinm r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82b526f8
	if (ctx.cr6.eq) goto loc_82B526F8;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82B526F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B52700"))) PPC_WEAK_FUNC(sub_82B52700);
PPC_FUNC_IMPL(__imp__sub_82B52700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,232(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b52728
	if (ctx.cr6.eq) goto loc_82B52728;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82b52728
	if (ctx.cr6.eq) goto loc_82B52728;
loc_82B52720:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82B52728:
	// lwz r11,228(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b52748
	if (ctx.cr6.eq) goto loc_82B52748;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82b52720
	if (!ctx.cr6.eq) goto loc_82B52720;
loc_82B52748:
	// lwz r11,236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5276c
	if (ctx.cr6.eq) goto loc_82B5276C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82B5276C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B52774"))) PPC_WEAK_FUNC(sub_82B52774);
PPC_FUNC_IMPL(__imp__sub_82B52774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B52778"))) PPC_WEAK_FUNC(sub_82B52778);
PPC_FUNC_IMPL(__imp__sub_82B52778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82B52780;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// bne cr6,0x82b527b8
	if (!ctx.cr6.eq) goto loc_82B527B8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b52a6c
	if (!ctx.cr6.eq) goto loc_82B52A6C;
	// b 0x82b527c0
	goto loc_82B527C0;
loc_82B527B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b52a6c
	if (ctx.cr6.eq) goto loc_82B52A6C;
loc_82B527C0:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b52838
	if (!ctx.cr6.gt) goto loc_82B52838;
loc_82B527E8:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b5281c
	if (!ctx.cr6.eq) goto loc_82B5281C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,576(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82b5281c
	if (!ctx.cr6.gt) goto loc_82B5281C;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82657f28
	ctx.lr = 0x82B5281C;
	sub_82657F28(ctx, base);
loc_82B5281C:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,464
	ctx.r31.s64 = ctx.r31.s64 + 464;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b527e8
	if (ctx.cr6.lt) goto loc_82B527E8;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B52838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b58830
	ctx.lr = 0x82B52844;
	sub_82B58830(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82b52a38
	if (!ctx.cr6.gt) goto loc_82B52A38;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r21,r27,20,9,11
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 20) & 0x700000;
	// addi r25,r30,336
	ctx.r25.s64 = ctx.r30.s64 + 336;
	// addi r24,r30,416
	ctx.r24.s64 = ctx.r30.s64 + 416;
	// lfs f0,-28844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r30,588
	ctx.r23.s64 = ctx.r30.s64 + 588;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r22,r30,584
	ctx.r22.s64 = ctx.r30.s64 + 584;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82B52890:
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stfs f31,400(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r8,r31,540
	ctx.r8.s64 = ctx.r31.s64 + 540;
	// stfs f31,404(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r9,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r9.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,296(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 296);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B528EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// lwz r4,596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82B52908;
	sub_82CB1160(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82B52918;
	sub_82CB1160(ctx, base);
	// stw r28,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r28.u32);
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lfs f0,400(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r28,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
	// blt cr6,0x82b52948
	if (ctx.cr6.lt) goto loc_82B52948;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82B52948:
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// rlwinm r11,r11,0,12,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF8FFFFF;
	// lfs f0,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// lfs f13,204(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// or r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 | ctx.r21.u64;
	// stfs f13,404(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stw r10,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r10.u32);
	// lwz r9,452(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	// rlwinm r8,r9,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b5298c
	if (ctx.cr6.eq) goto loc_82B5298C;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// b 0x82b529e4
	goto loc_82B529E4;
loc_82B5298C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a1f98
	ctx.lr = 0x82B52994;
	sub_823A1F98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82405038
	ctx.lr = 0x82B529A4;
	sub_82405038(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b529e0
	if (ctx.cr6.eq) goto loc_82B529E0;
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
	// bne 0x82b529e0
	if (!ctx.cr0.eq) goto loc_82B529E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B529E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B529E0:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_82B529E4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 4194304;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// bl 0x8240a888
	ctx.lr = 0x82B52A00;
	sub_8240A888(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8240a888
	ctx.lr = 0x82B52A0C;
	sub_8240A888(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828200a8
	ctx.lr = 0x82B52A2C;
	sub_828200A8(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82b52890
	if (!ctx.cr0.eq) goto loc_82B52890;
loc_82B52A38:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82b52a6c
	if (ctx.cr6.eq) goto loc_82B52A6C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b52a58
	if (!ctx.cr6.eq) goto loc_82B52A58;
	// bl 0x822900a0
	ctx.lr = 0x82B52A54;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B52A58:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B52A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B52A6C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B52A78"))) PPC_WEAK_FUNC(sub_82B52A78);
PPC_FUNC_IMPL(__imp__sub_82B52A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82B52A80;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6ac0
	ctx.lr = 0x82B52A88;
	__savefpr_18(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// ld r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r28,r29,0,13,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x70000;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x82b52ac8
	if (ctx.cr6.eq) goto loc_82B52AC8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82b52678
	ctx.lr = 0x82B52ABC;
	sub_82B52678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x82b52acc
	if (!ctx.cr6.eq) goto loc_82B52ACC;
loc_82B52AC8:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82B52ACC:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b52700
	ctx.lr = 0x82B52ADC;
	sub_82B52700(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b52af0
	if (ctx.cr6.eq) goto loc_82B52AF0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r21,1
	ctx.r21.s64 = 1;
	// beq cr6,0x82b52af4
	if (ctx.cr6.eq) goto loc_82B52AF4;
loc_82B52AF0:
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_82B52AF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b52b08
	if (ctx.cr6.eq) goto loc_82B52B08;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r16,1
	ctx.r16.s64 = 1;
	// bne cr6,0x82b52b0c
	if (!ctx.cr6.eq) goto loc_82B52B0C;
loc_82B52B08:
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
loc_82B52B0C:
	// rlwinm r11,r29,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3000;
	// cmpldi cr6,r11,12288
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 12288, ctx.xer);
	// bne cr6,0x82b52b38
	if (!ctx.cr6.eq) goto loc_82B52B38;
	// lis r12,2048
	ctx.r12.s64 = 134217728;
	// ori r12,r12,32768
	ctx.r12.u64 = ctx.r12.u64 | 32768;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,6280
	ctx.r12.u64 = ctx.r12.u64 | 411566080;
	// ori r12,r12,19584
	ctx.r12.u64 = ctx.r12.u64 | 19584;
	// and r11,r29,r12
	ctx.r11.u64 = ctx.r29.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82b52b40
	if (ctx.cr6.eq) goto loc_82B52B40;
loc_82B52B38:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x82b52b5c
	if (ctx.cr6.eq) goto loc_82B52B5C;
loc_82B52B40:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82b52b5c
	if (!ctx.cr6.eq) goto loc_82B52B5C;
	// lbz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 248);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b52b60
	if (ctx.cr6.eq) goto loc_82B52B60;
loc_82B52B5C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B52B60:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823bbff0
	ctx.lr = 0x82B52B6C;
	sub_823BBFF0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// clrlwi r22,r24,24
	ctx.r22.u64 = ctx.r24.u32 & 0xFF;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lis r20,-31884
	ctx.r20.s64 = -2089549824;
	// cmplw cr6,r15,r22
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r22.u32, ctx.xer);
	// oris r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 4194304;
	// lfs f30,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// addi r18,r10,-18208
	ctx.r18.s64 = ctx.r10.s64 + -18208;
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// bne cr6,0x82b52fc8
	if (!ctx.cr6.eq) goto loc_82B52FC8;
	// lwz r25,0(r17)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// ld r31,20(r25)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r25.u32 + 20);
	// rlwinm r11,r31,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82b52fc8
	if (ctx.cr6.eq) goto loc_82B52FC8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b52fc8
	if (ctx.cr6.eq) goto loc_82B52FC8;
	// rlwinm r11,r31,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82b52bd0
	if (!ctx.cr6.eq) goto loc_82B52BD0;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82B52BD0:
	// rlwinm r11,r31,0,4,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF80000;
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r11,r11,0,12,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF80FFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82b52bec
	if (!ctx.cr6.eq) goto loc_82B52BEC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82B52BEC:
	// lfs f0,388(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,384(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 384);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,392(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 392);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,564(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x82b54598
	ctx.lr = 0x82B52C28;
	sub_82B54598(ctx, base);
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r31,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// beq cr6,0x82b52ed4
	if (ctx.cr6.eq) goto loc_82B52ED4;
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82b52ed4
	if (!ctx.cr6.eq) goto loc_82B52ED4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b52c6c
	if (ctx.cr6.eq) goto loc_82B52C6C;
	// addi r4,r30,584
	ctx.r4.s64 = ctx.r30.s64 + 584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240a888
	ctx.lr = 0x82B52C68;
	sub_8240A888(ctx, base);
	// b 0x82b52c70
	goto loc_82B52C70;
loc_82B52C6C:
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
loc_82B52C70:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// beq cr6,0x82b52cd4
	if (ctx.cr6.eq) goto loc_82B52CD4;
	// addi r4,r30,588
	ctx.r4.s64 = ctx.r30.s64 + 588;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240a888
	ctx.lr = 0x82B52CA8;
	sub_8240A888(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// b 0x82b52d10
	goto loc_82B52D10;
loc_82B52CD4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82b52d10
	if (ctx.cr6.eq) goto loc_82B52D10;
	// lwz r11,25344(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,820
	ctx.r4.s64 = ctx.r11.s64 + 820;
	// bl 0x8240a888
	ctx.lr = 0x82B52CEC;
	sub_8240A888(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_82B52D10:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82b52d40
	if (ctx.cr6.eq) goto loc_82B52D40;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b52d44
	if (ctx.cr6.eq) goto loc_82B52D44;
loc_82B52D40:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B52D44:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8281ff20
	ctx.lr = 0x82B52D50;
	sub_8281FF20(ctx, base);
	// lwz r11,25344(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B52D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// stw r18,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r18.u32);
	// addi r9,r1,328
	ctx.r9.s64 = ctx.r1.s64 + 328;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r27,208
	ctx.r7.s64 = ctx.r27.s64 + 208;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,648(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f30,640(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// clrlwi r10,r8,9
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFFF;
	// stfs f30,644(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// oris r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 536870912;
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// stw r23,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r23.u32);
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r23.u32);
	// stw r23,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r23.u32);
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// stw r8,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r8.u32);
	// stw r7,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82B52DE8;
	sub_82CB1160(ctx, base);
	// addi r4,r30,416
	ctx.r4.s64 = ctx.r30.s64 + 416;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B52DF8;
	sub_82CB1160(ctx, base);
	// addi r4,r30,480
	ctx.r4.s64 = ctx.r30.s64 + 480;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B52E08;
	sub_82CB1160(ctx, base);
	// stw r23,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r23.u32);
	// stw r23,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r23.u32);
	// lfs f0,400(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// stw r7,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82b52e30
	if (ctx.cr6.lt) goto loc_82B52E30;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82B52E30:
	// rlwimi r22,r11,10,21,21
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0x400) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFBFF);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// lis r12,-26737
	ctx.r12.s64 = -1752236032;
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// rlwinm r9,r22,20,1,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 20) & 0x7FF00000;
	// rlwinm r8,r11,30,2,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3E000000;
	// rlwinm r9,r9,0,9,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFC07FFFFF;
	// rlwinm r8,r8,0,5,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// oris r7,r9,1536
	ctx.r7.u64 = ctx.r9.u64 | 100663296;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// and r6,r10,r12
	ctx.r6.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
	// lwz r4,104(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b52e94
	if (ctx.cr6.eq) goto loc_82B52E94;
	// addi r11,r27,88
	ctx.r11.s64 = ctx.r27.s64 + 88;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// lwz r10,116(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r8.u32);
	// b 0x82b52eb8
	goto loc_82B52EB8;
loc_82B52E94:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r27,48
	ctx.r9.s64 = ctx.r27.s64 + 48;
	// rlwimi r11,r10,28,3,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x1E000000) | (ctx.r11.u64 & 0xFFFFFFFFE1FFFFFF);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
	// lwz r7,80(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// divw r6,r7,r8
	ctx.r6.s32 = ctx.r7.s32 / ctx.r8.s32;
	// stw r6,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r6.u32);
loc_82B52EB8:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B52ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b52fc8
	goto loc_82B52FC8;
loc_82B52ED4:
	// ld r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 20);
	// lwz r29,25344(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// rlwinm r10,r11,0,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82b52ef4
	if (ctx.cr6.eq) goto loc_82B52EF4;
	// addi r4,r29,820
	ctx.r4.s64 = ctx.r29.s64 + 820;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x82b52efc
	goto loc_82B52EFC;
loc_82B52EF4:
	// addi r4,r30,584
	ctx.r4.s64 = ctx.r30.s64 + 584;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_82B52EFC:
	// bl 0x8240a888
	ctx.lr = 0x82B52F00;
	sub_8240A888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,128(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// ble cr6,0x82b52fcc
	if (!ctx.cr6.gt) goto loc_82B52FCC;
loc_82B52F34:
	// lwz r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	// stfs f30,912(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 912, temp.u32);
	// stfs f30,916(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 916, temp.u32);
	// stw r23,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r23.u32);
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r23,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r23.u32);
	// stw r23,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r23.u32);
	// addi r7,r1,656
	ctx.r7.s64 = ctx.r1.s64 + 656;
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r23,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r23.u32);
	// stw r23,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r23.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r23,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r23.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r23,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r23.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r9,920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 920, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b52210
	ctx.lr = 0x82B52F80;
	sub_82B52210(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b52fb8
	if (ctx.cr6.eq) goto loc_82B52FB8;
	// addi r4,r30,588
	ctx.r4.s64 = ctx.r30.s64 + 588;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8240a888
	ctx.lr = 0x82B52F94;
	sub_8240A888(ctx, base);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,596
	ctx.r5.s64 = ctx.r30.s64 + 596;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// bl 0x828200a8
	ctx.lr = 0x82B52FB8;
	sub_828200A8(ctx, base);
loc_82B52FB8:
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b52f34
	if (ctx.cr6.lt) goto loc_82B52F34;
loc_82B52FC8:
	// lwz r29,25344(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
loc_82B52FCC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// addi r26,r11,32548
	ctx.r26.s64 = ctx.r11.s64 + 32548;
	// lfs f31,544(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 544);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82b5300c
	if (!ctx.cr6.eq) goto loc_82B5300C;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82b5300c
	if (ctx.cr6.eq) goto loc_82B5300C;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b53014
	if (!ctx.cr6.eq) goto loc_82B53014;
loc_82B5300C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82b531ec
	if (ctx.cr6.eq) goto loc_82B531EC;
loc_82B53014:
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b531ec
	if (ctx.cr6.eq) goto loc_82B531EC;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,12352
	ctx.r12.u64 = ctx.r12.u64 | 12352;
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82b5304c
	if (ctx.cr6.eq) goto loc_82B5304C;
	// lwz r31,408(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// b 0x82b53050
	goto loc_82B53050;
loc_82B5304C:
	// lwz r31,424(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 424);
loc_82B53050:
	// addi r4,r29,820
	ctx.r4.s64 = ctx.r29.s64 + 820;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240a888
	ctx.lr = 0x82B5305C;
	sub_8240A888(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// lwz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5307C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// stw r18,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r18.u32);
	// addi r8,r1,360
	ctx.r8.s64 = ctx.r1.s64 + 360;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82B530B8;
	sub_82CB1160(ctx, base);
	// lfs f0,548(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r30,544
	ctx.r29.s64 = ctx.r30.s64 + 544;
	// lfs f13,552(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f11,544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fdivs f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// lfs f8,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lfs f6,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f0,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f8,f6,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f11,228(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmuls f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f6,f4,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f7,240(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmuls f5,f3,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f6,244(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmuls f4,f2,f9
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f3,216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f2,248(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// beq cr6,0x82b53160
	if (ctx.cr6.eq) goto loc_82B53160;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82b53164
	if (ctx.cr6.eq) goto loc_82B53164;
loc_82B53160:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82B53164:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r10,592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r31,r10,2,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// ld r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82b5318c
	if (ctx.cr6.eq) goto loc_82B5318C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82B5318C:
	// lwz r11,25344(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 25344);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,820
	ctx.r4.s64 = ctx.r11.s64 + 820;
	// bl 0x8240a888
	ctx.lr = 0x82B5319C;
	sub_8240A888(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8281ff20
	ctx.lr = 0x82B531AC;
	sub_8281FF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8240b2d0
	ctx.lr = 0x82B531B8;
	sub_8240B2D0(ctx, base);
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r9,276(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x828d0690
	ctx.lr = 0x82B531EC;
	sub_828D0690(ctx, base);
loc_82B531EC:
	// cmplwi cr6,r15,2
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 2, ctx.xer);
	// bne cr6,0x82b537e0
	if (!ctx.cr6.eq) goto loc_82B537E0;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// li r27,255
	ctx.r27.s64 = 255;
	// ld r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82b5367c
	if (ctx.cr6.eq) goto loc_82B5367C;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82b5367c
	if (ctx.cr6.eq) goto loc_82B5367C;
	// lwz r11,24988(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b5324c
	if (!ctx.cr6.eq) goto loc_82B5324C;
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5324c
	if (ctx.cr6.eq) goto loc_82B5324C;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b5367c
	if (ctx.cr6.eq) goto loc_82B5367C;
loc_82B5324C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,392(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,384(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,388(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x82b54598
	ctx.lr = 0x82B5328C;
	sub_82B54598(ctx, base);
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,40(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82b5367c
	if (!ctx.cr6.gt) goto loc_82B5367C;
	// stb r23,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r23.u8);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stb r27,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r27.u8);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r23,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r23.u8);
	// lfs f27,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// addi r31,r30,336
	ctx.r31.s64 = ctx.r30.s64 + 336;
	// stb r27,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r27.u8);
	// stb r23,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r23.u8);
	// lfs f28,-18072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18072);
	ctx.f28.f64 = double(temp.f32);
	// stb r23,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r23.u8);
	// lfs f29,-17776(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17776);
	ctx.f29.f64 = double(temp.f32);
	// stb r27,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r27.u8);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// stb r23,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r23.u8);
	// stb r23,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r23.u8);
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_82B53300:
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lfs f12,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lfs f25,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f23,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f23.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,27(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// lbz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r6,21(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r8,23(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r7,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r7.u64);
	// lfd f3,272(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r6,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r6.u64);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// std r8,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r8.u64);
	// lfd f4,288(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// lbz r8,26(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lfd f5,312(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// lbz r3,25(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// std r8,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r6,17(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lfd f6,160(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// std r3,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r3.u64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// std r6,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r6.u64);
	// lfd f1,280(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfd f26,304(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// lfd f7,168(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f2,296(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmadds f11,f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fmsubs f12,f5,f29,f31
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 - ctx.f31.f64));
	// frsp f26,f26
	ctx.f26.f64 = double(float(ctx.f26.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fmsubs f5,f4,f29,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmsubs f4,f3,f29,f31
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmsubs f3,f8,f29,f31
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmsubs f8,f6,f29,f31
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmsubs f1,f1,f29,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmuls f25,f25,f12
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f12.f64));
	// fmsubs f6,f26,f29,f31
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 - ctx.f31.f64));
	// lfs f26,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fmuls f24,f24,f12
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f7,f7,f29,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmsubs f2,f2,f29,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmuls f21,f12,f4
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f22,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f11,f12,f10,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmuls f23,f23,f4
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f22,f4
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f4.f64));
	// lfs f22,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f20,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f0,f22,f0
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// lfs f22,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// lfs f19,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f25,f22,f1,f25
	ctx.f25.f64 = double(float(ctx.f22.f64 * ctx.f1.f64 + ctx.f25.f64));
	// fmadds f26,f20,f1,f26
	ctx.f26.f64 = double(float(ctx.f20.f64 * ctx.f1.f64 + ctx.f26.f64));
	// fmadds f1,f19,f1,f24
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f1.f64 + ctx.f24.f64));
	// fmr f24,f19
	ctx.f24.f64 = ctx.f19.f64;
	// fmadds f22,f22,f3,f21
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f3.f64 + ctx.f21.f64));
	// lfs f21,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f23,f20,f3,f23
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f3.f64 + ctx.f23.f64));
	// fmadds f10,f21,f13,f10
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f21,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f4,f24,f3,f4
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f3.f64 + ctx.f4.f64));
	// lfs f3,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fadds f24,f11,f9
	ctx.f24.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f24,176(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f7,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f1.f64));
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fmadds f11,f11,f30,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f26.f64));
	// fmr f26,f9
	ctx.f26.f64 = ctx.f9.f64;
	// fmadds f9,f9,f7,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f25.f64));
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// fmadds f1,f21,f30,f1
	ctx.f1.f64 = double(float(ctx.f21.f64 * ctx.f30.f64 + ctx.f1.f64));
	// fmadds f0,f13,f30,f23
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f23.f64));
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
	// fmadds f26,f26,f5,f22
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f5.f64 + ctx.f22.f64));
	// lfs f22,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// fmr f23,f25
	ctx.f23.f64 = ctx.f25.f64;
	// fmadds f4,f25,f5,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f5.f64 + ctx.f4.f64));
	// lfs f25,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f11,f7,f25,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f11.f64));
	// fmr f7,f22
	ctx.f7.f64 = ctx.f22.f64;
	// fmadds f9,f22,f30,f9
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmadds f13,f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmr f10,f25
	ctx.f10.f64 = ctx.f25.f64;
	// fmadds f3,f23,f12,f3
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmr f12,f22
	ctx.f12.f64 = ctx.f22.f64;
	// fmr f23,f21
	ctx.f23.f64 = ctx.f21.f64;
	// fmr f25,f21
	ctx.f25.f64 = ctx.f21.f64;
	// fmadds f0,f5,f10,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmr f10,f20
	ctx.f10.f64 = ctx.f20.f64;
	// fmadds f5,f12,f30,f26
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f26.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f23,f30,f4
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fadds f26,f13,f7
	ctx.f26.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f26,180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f25,f3,f25
	ctx.f25.f64 = double(float(ctx.f3.f64 + ctx.f25.f64));
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f13,f9,f28
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f11,f28
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// fmuls f11,f1,f28
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f23,f0,f28
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f5,f28
	ctx.f22.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f21,f4,f28
	ctx.f21.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// fmuls f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f5,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f5,f3,f24
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f24.f64));
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmadds f10,f2,f10,f7
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// fmadds f5,f2,f0,f4
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// fmadds f0,f6,f12,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f1.f64));
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f19
	ctx.f3.f64 = ctx.f19.f64;
	// lfs f4,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f25.f64));
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmadds f12,f6,f9,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f10.f64));
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// fmadds f11,f8,f6,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f10,f2,f3,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f9,f7,f30,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f8,f4,f30,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f7,f13,f30,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmuls f20,f9,f28
	ctx.f20.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f19,f8,f28
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f18,f7,f28
	ctx.f18.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// bl 0x8281f8e0
	ctx.lr = 0x82B53604;
	sub_8281F8E0(ctx, base);
	// fadds f6,f23,f24
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f22,f26
	ctx.f5.f64 = double(float(ctx.f22.f64 + ctx.f26.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f21,f25
	ctx.f4.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8281f8e0
	ctx.lr = 0x82B53638;
	sub_8281F8E0(ctx, base);
	// fadds f3,f20,f24
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f20.f64 + ctx.f24.f64));
	// fadds f2,f19,f26
	ctx.f2.f64 = double(float(ctx.f19.f64 + ctx.f26.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f1,f18,f25
	ctx.f1.f64 = double(float(ctx.f18.f64 + ctx.f25.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8281f8e0
	ctx.lr = 0x82B5366C;
	sub_8281F8E0(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b53300
	if (ctx.cr6.lt) goto loc_82B53300;
loc_82B5367C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82b537e0
	if (ctx.cr6.eq) goto loc_82B537E0;
	// lwz r11,24988(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b536c0
	if (!ctx.cr6.eq) goto loc_82B536C0;
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b536c0
	if (ctx.cr6.eq) goto loc_82B536C0;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b537e0
	if (ctx.cr6.eq) goto loc_82B537E0;
loc_82B536C0:
	// addi r31,r30,556
	ctx.r31.s64 = ctx.r30.s64 + 556;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// li r11,72
	ctx.r11.s64 = 72;
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r29,2
	ctx.r29.s64 = 2;
	// bl 0x82381228
	ctx.lr = 0x82B536E8;
	sub_82381228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8281e3e8
	ctx.lr = 0x82B536FC;
	sub_8281E3E8(ctx, base);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// lfs f1,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f1.f64 = double(temp.f32);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// stb r23,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r23.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8281e578
	ctx.lr = 0x82B53748;
	sub_8281E578(ctx, base);
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// lfs f1,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f1.f64 = double(temp.f32);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// stb r23,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r23.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8281e578
	ctx.lr = 0x82B53794;
	sub_8281E578(ctx, base);
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// lfs f1,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f1.f64 = double(temp.f32);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// stb r23,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r23.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8281e578
	ctx.lr = 0x82B537E0;
	sub_8281E578(ctx, base);
loc_82B537E0:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6b0c
	ctx.lr = 0x82B537EC;
	__restfpr_18(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B537F0"))) PPC_WEAK_FUNC(sub_82B537F0);
PPC_FUNC_IMPL(__imp__sub_82B537F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,632
	ctx.r3.s64 = ctx.r3.s64 + 632;
	// b 0x829454b0
	sub_829454B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B537F8"))) PPC_WEAK_FUNC(sub_82B537F8);
PPC_FUNC_IMPL(__imp__sub_82B537F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82B53800;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6ae8
	ctx.lr = 0x82B53808;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r17,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r17.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r18,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r18.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x823bbff0
	ctx.lr = 0x82B53830;
	sub_823BBFF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82b53de4
	if (!ctx.cr6.eq) goto loc_82B53DE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,13,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82b53de4
	if (!ctx.cr6.eq) goto loc_82B53DE4;
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lfs f13,560(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,564(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 564);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,556(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 556);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x82b54598
	ctx.lr = 0x82B5388C;
	sub_82B54598(ctx, base);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,280(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 280);
	// addi r29,r22,632
	ctx.r29.s64 = ctx.r22.s64 + 632;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r19,r9,r10
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x82945570
	ctx.lr = 0x82B538B8;
	sub_82945570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b538e0
	if (ctx.cr6.eq) goto loc_82B538E0;
	// lwz r11,308(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 308);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82b53da4
	if (ctx.cr6.eq) goto loc_82B53DA4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829454b0
	ctx.lr = 0x82B538DC;
	sub_829454B0(ctx, base);
	// stw r30,308(r22)
	PPC_STORE_U32(ctx.r22.u32 + 308, ctx.r30.u32);
loc_82B538E0:
	// lwz r11,192(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 192);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,196(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 196);
	// lfs f10,448(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 448);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,200(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 200);
	// lfs f9,452(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 452);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,204(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 204);
	// lfs f8,456(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 456);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,460(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 460);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,80(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 80);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lfs f6,464(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 464);
	ctx.f6.f64 = double(temp.f32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f5,468(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 468);
	ctx.f5.f64 = double(temp.f32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lfs f1,476(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 476);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,16383
	ctx.r4.s64 = 1073676288;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f4,472(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 472);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f9,432(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 432);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f7,436(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 436);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lfs f3,440(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 440);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,444(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 65535;
	// divwu r25,r6,r5
	ctx.r25.u32 = ctx.r6.u32 / ctx.r5.u32;
	// lfs f31,416(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,420(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 420);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r18,192
	ctx.r11.s64 = ctx.r18.s64 + 192;
	// lfs f29,424(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 424);
	ctx.f29.f64 = double(temp.f32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// lfs f28,428(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 428);
	ctx.f28.f64 = double(temp.f32);
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f5,f5,f13,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f4,f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f2,f1,f13,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f1,f9,f12,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f13,f7,f12,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f10,f3,f12,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f9,f0,f12,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f8,f31,f11,f1
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f7,f30,f11,f13
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f6,f29,f11,f10
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f5,f28,f11,f9
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ble cr6,0x82b539cc
	if (!ctx.cr6.gt) goto loc_82B539CC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82B539CC:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x82B539D4;
	sub_822959A8(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,111
	ctx.r11.s64 = ctx.r1.s64 + 111;
	// lwz r9,44(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r24,76(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 76);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// clrlwi r23,r9,16
	ctx.r23.u64 = ctx.r9.u32 & 0xFFFF;
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// vperm128 v63,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82b53b1c
	if (!ctx.cr6.gt) goto loc_82B53B1C;
	// addi r10,r19,36
	ctx.r10.s64 = ctx.r19.s64 + 36;
	// vspltw128 v62,v63,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// addi r9,r19,32
	ctx.r9.s64 = ctx.r19.s64 + 32;
	// addi r11,r24,2
	ctx.r11.s64 = ctx.r24.s64 + 2;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r3,11
	ctx.r3.s64 = 11;
loc_82B53A34:
	// lhz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lhz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r4,r8,r5
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mullw r30,r30,r29
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rotlwi r19,r29,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// rotlwi r15,r29,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mullw r29,r28,r19
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r19.s32);
	// lvx128 v61,r5,r3
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r4,r3
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r5
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r4,r29,r8
	ctx.r4.u64 = ctx.r29.u64 + ctx.r8.u64;
	// mullw r28,r18,r19
	ctx.r28.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r19.s32);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v57,v58,v61,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v55,v57,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32)));
	// add r5,r28,r8
	ctx.r5.u64 = ctx.r28.u64 + ctx.r8.u64;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// mullw r31,r17,r15
	ctx.r31.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r15.s32);
	// lvsl v7,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v56,v59,v60,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubfp128 v54,v57,v56
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v53,v63,v55
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v55.f32)));
	// mullw r4,r16,r19
	ctx.r4.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r19.s32);
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// vpermwi128 v51,v54,135
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0x78));
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// vpermwi128 v6,v54,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0x9C));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lvx128 v52,r5,r3
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v5,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v49,v50,v52,v5
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubfp128 v48,v49,v56
	_mm_store_ps(ctx.v48.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v56.f32)));
	// vpermwi128 v47,v48,99
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0x9C));
	// vpermwi128 v4,v48,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0x78));
	// vmulfp128 v3,v47,v51
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v51.f32)));
	// vnmsubfp v2,v4,v6,v3
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v46,v2,v53
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// vspltw128 v45,v46,0
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xFF));
	// stvewx128 v45,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82b53a34
	if (!ctx.cr0.eq) goto loc_82B53A34;
	// lwz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r17,316(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r18,332(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_82B53B1C:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// add. r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b53b44
	if (ctx.cr0.eq) goto loc_82B53B44;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82B53B40;
	sub_82294520(ctx, base);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B53B44:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b53c0c
	if (ctx.cr6.eq) goto loc_82B53C0C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r31,r24,2
	ctx.r31.s64 = ctx.r24.s64 + 2;
loc_82B53B58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82b53bfc
	if (!ctx.cr6.lt) goto loc_82B53BFC;
	// lhz r10,-2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// lhz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r26,r8,r11
	ctx.r26.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B53B98;
	sub_82294AC0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// li r4,3
	ctx.r4.s64 = 3;
	// sth r27,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sthx r28,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u16);
	// lhz r28,2(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r24,-2(r31)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// bl 0x82294ac0
	ctx.lr = 0x82B53BDC;
	sub_82294AC0(ctx, base);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r24,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r24.u16);
	// sth r27,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// sthx r28,r7,r26
	PPC_STORE_U16(ctx.r7.u32 + ctx.r26.u32, ctx.r28.u16);
loc_82B53BFC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x82b53b58
	if (!ctx.cr0.eq) goto loc_82B53B58;
loc_82B53C0C:
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b53d34
	if (!ctx.cr6.gt) goto loc_82B53D34;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_82B53C20:
	// lwz r11,136(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 136);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82b53c50
	if (!ctx.cr6.eq) goto loc_82B53C50;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82b53c84
	if (ctx.cr6.lt) goto loc_82B53C84;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82b53d20
	if (ctx.cr6.eq) goto loc_82B53D20;
loc_82B53C50:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r21
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// subfc r6,r30,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r30.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r30.s64;
	// lwzx r11,r8,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// subfe r9,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r5,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b53d20
	if (ctx.cr6.eq) goto loc_82B53D20;
loc_82B53C84:
	// subfc r9,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r7,2
	ctx.r7.s64 = 2;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r6,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r30.s64;
	// rlwinm r4,r8,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
	// bl 0x82294ac0
	ctx.lr = 0x82B53CC8;
	sub_82294AC0(ctx, base);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,2
	ctx.r7.s64 = ctx.r3.s64 + 2;
	// addi r6,r3,3
	ctx.r6.s64 = ctx.r3.s64 + 3;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r8,r3,5
	ctx.r8.s64 = ctx.r3.s64 + 5;
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r9,r26
	PPC_STORE_U16(ctx.r9.u32 + ctx.r26.u32, ctx.r4.u16);
	// sthx r4,r7,r26
	PPC_STORE_U16(ctx.r7.u32 + ctx.r26.u32, ctx.r4.u16);
	// sthx r29,r5,r26
	PPC_STORE_U16(ctx.r5.u32 + ctx.r26.u32, ctx.r29.u16);
	// sthx r31,r3,r26
	PPC_STORE_U16(ctx.r3.u32 + ctx.r26.u32, ctx.r31.u16);
loc_82B53D20:
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b53c20
	if (ctx.cr6.lt) goto loc_82B53C20;
loc_82B53D34:
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b53d4c
	if (!ctx.cr6.eq) goto loc_82B53D4C;
	// bl 0x822900a0
	ctx.lr = 0x82B53D48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82B53D4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B53D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r22,612
	ctx.r3.s64 = ctx.r22.s64 + 612;
	// bl 0x82943e60
	ctx.lr = 0x82B53D70;
	sub_82943E60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b53da4
	if (ctx.cr6.eq) goto loc_82B53DA4;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b53d90
	if (!ctx.cr6.eq) goto loc_82B53D90;
	// bl 0x822900a0
	ctx.lr = 0x82B53D8C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82B53D90:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B53DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B53DA4:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b53de4
	if (ctx.cr6.eq) goto loc_82B53DE4;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,44(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r19,708
	ctx.r5.s64 = ctx.r19.s64 + 708;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r22,336
	ctx.r6.s64 = ctx.r22.s64 + 336;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B53DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B53DE4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6b34
	ctx.lr = 0x82B53DF0;
	__restfpr_28(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B53DF4"))) PPC_WEAK_FUNC(sub_82B53DF4);
PPC_FUNC_IMPL(__imp__sub_82B53DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B53DF8"))) PPC_WEAK_FUNC(sub_82B53DF8);
PPC_FUNC_IMPL(__imp__sub_82B53DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B53E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// ld r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rlwinm r7,r8,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// beq cr6,0x82b53ec8
	if (ctx.cr6.eq) goto loc_82B53EC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b520d8
	ctx.lr = 0x82B53E3C;
	sub_82B520D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b53e9c
	if (ctx.cr6.eq) goto loc_82B53E9C;
	// lbz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 248);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// bne cr6,0x82b53e60
	if (!ctx.cr6.eq) goto loc_82B53E60;
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
loc_82B53E60:
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r10,r9,0,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823bbff0
	ctx.lr = 0x82B53E84;
	sub_823BBFF0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x82b53e9c
	if (ctx.cr6.gt) goto loc_82B53E9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417c30
	ctx.lr = 0x82B53E9C;
	sub_82417C30(ctx, base);
loc_82B53E9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264f3a8
	ctx.lr = 0x82B53EA8;
	sub_8264F3A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b53ecc
	if (ctx.cr6.eq) goto loc_82B53ECC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B53EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B53ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B53ED4"))) PPC_WEAK_FUNC(sub_82B53ED4);
PPC_FUNC_IMPL(__imp__sub_82B53ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B53ED8"))) PPC_WEAK_FUNC(sub_82B53ED8);
PPC_FUNC_IMPL(__imp__sub_82B53ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82B53EE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b53f84
	if (!ctx.cr6.gt) goto loc_82B53F84;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82B53F1C:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b53f68
	if (ctx.cr6.eq) goto loc_82B53F68;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B53F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b53f54
	if (ctx.cr6.eq) goto loc_82B53F54;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_82B53F54:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b53f68
	if (ctx.cr6.eq) goto loc_82B53F68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b53f68
	if (ctx.cr6.eq) goto loc_82B53F68;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82B53F68:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b53f1c
	if (ctx.cr6.lt) goto loc_82B53F1C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82B53F84:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B53F94"))) PPC_WEAK_FUNC(sub_82B53F94);
PPC_FUNC_IMPL(__imp__sub_82B53F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B53F98"))) PPC_WEAK_FUNC(sub_82B53F98);
PPC_FUNC_IMPL(__imp__sub_82B53F98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1017
	ctx.r3.s64 = 1017;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B53FA0"))) PPC_WEAK_FUNC(sub_82B53FA0);
PPC_FUNC_IMPL(__imp__sub_82B53FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r9,304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// lwz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mulli r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 * 11;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,168
	ctx.r8.s64 = ctx.r11.s64 + 168;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B53FC8"))) PPC_WEAK_FUNC(sub_82B53FC8);
PPC_FUNC_IMPL(__imp__sub_82B53FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r9,304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// lwz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mulli r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 * 11;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B53FEC"))) PPC_WEAK_FUNC(sub_82B53FEC);
PPC_FUNC_IMPL(__imp__sub_82B53FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B53FF0"))) PPC_WEAK_FUNC(sub_82B53FF0);
PPC_FUNC_IMPL(__imp__sub_82B53FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82B53FF8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r10,r11,29408
	ctx.r10.s64 = ctx.r11.s64 + 29408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// stw r23,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r23.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r23,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r23.u32);
	// addi r31,r21,4
	ctx.r31.s64 = ctx.r21.s64 + 4;
	// stw r23,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r23.u32);
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r23.u32);
	// addi r22,r21,16
	ctx.r22.s64 = ctx.r21.s64 + 16;
	// stw r23,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r23.u32);
	// stw r23,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r23.u32);
	// stw r23,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r23.u32);
	// stw r9,32(r21)
	PPC_STORE_U32(ctx.r21.u32 + 32, ctx.r9.u32);
	// stw r23,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r23.u32);
	// lwz r8,712(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// lwz r7,12(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r6,60(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwzx r5,r6,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lwz r11,128(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// stw r23,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r23.u32);
	// beq cr6,0x82b54080
	if (ctx.cr6.eq) goto loc_82B54080;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82B54080;
	sub_82294520(ctx, base);
loc_82B54080:
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82b5413c
	if (!ctx.cr6.gt) goto loc_82B5413C;
	// lis r24,-31884
	ctx.r24.s64 = -2089549824;
loc_82B540A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B540BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b540d0
	if (!ctx.cr6.eq) goto loc_82B540D0;
	// lwz r11,25344(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25344);
	// lwz r28,232(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
loc_82B540D0:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82b5410c
	if (!ctx.cr6.gt) goto loc_82B5410C;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
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
	ctx.lr = 0x82B5410C;
	sub_82294520(ctx, base);
loc_82B5410C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b54120
	if (ctx.cr0.eq) goto loc_82B54120;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82B54120:
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82b540a0
	if (ctx.cr6.lt) goto loc_82B540A0;
loc_82B5413C:
	// lwz r11,804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b54194
	if (!ctx.cr6.gt) goto loc_82B54194;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// std r11,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r11.u64);
	// std r10,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r10.u64);
loc_82B5416C:
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x828c4648
	ctx.lr = 0x82B54180;
	sub_828C4648(ctx, base);
	// lwz r11,804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b5416c
	if (ctx.cr6.lt) goto loc_82B5416C;
loc_82B54194:
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82b54378
	if (!ctx.cr6.lt) goto loc_82B54378;
	// lwz r11,812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	// mulli r10,r25,28
	ctx.r10.s64 = ctx.r25.s64 * 28;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r11.u32);
	// beq cr6,0x82b54220
	if (ctx.cr6.eq) goto loc_82B54220;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b54220
	if (!ctx.cr6.gt) goto loc_82B54220;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// std r11,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r11.u64);
	// std r9,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r9.u64);
loc_82B541F0:
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828c4648
	ctx.lr = 0x82B54208;
	sub_828C4648(ctx, base);
	// lwz r10,36(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82b541f0
	if (ctx.cr6.lt) goto loc_82B541F0;
loc_82B54220:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b5428c
	if (!ctx.cr6.gt) goto loc_82B5428C;
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r28,2
	ctx.r28.s64 = 2;
loc_82B54240:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54278
	if (ctx.cr6.eq) goto loc_82B54278;
	// addi r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 + 60;
	// std r29,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r29.u64);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r30,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r30.u64);
	// bl 0x828c4648
	ctx.lr = 0x82B54278;
	sub_828C4648(ctx, base);
loc_82B54278:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b54240
	if (ctx.cr6.lt) goto loc_82B54240;
loc_82B5428C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b54378
	if (!ctx.cr6.gt) goto loc_82B54378;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// addi r28,r11,14488
	ctx.r28.s64 = ctx.r11.s64 + 14488;
loc_82B542B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54364
	if (ctx.cr6.eq) goto loc_82B54364;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54364
	if (ctx.cr6.eq) goto loc_82B54364;
	// lwz r9,-27532(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27532);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b542f0
	if (!ctx.cr6.eq) goto loc_82B542F0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826fb000
	ctx.lr = 0x82B542E4;
	sub_826FB000(ctx, base);
	// stw r3,-27532(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27532, ctx.r3.u32);
	// bl 0x826fb0c0
	ctx.lr = 0x82B542EC;
	sub_826FB0C0(ctx, base);
	// lwz r9,-27532(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27532);
loc_82B542F0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54318
	if (ctx.cr6.eq) goto loc_82B54318;
loc_82B54304:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b54328
	if (ctx.cr6.eq) goto loc_82B54328;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54304
	if (!ctx.cr6.eq) goto loc_82B54304;
loc_82B54318:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b54330
	if (ctx.cr6.eq) goto loc_82B54330;
loc_82B54328:
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// b 0x82b54334
	goto loc_82B54334;
loc_82B54330:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82B54334:
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 64);
	// addi r4,r10,80
	ctx.r4.s64 = ctx.r10.s64 + 80;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 72);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// std r8,108(r1)
	PPC_STORE_U64(ctx.r1.u32 + 108, ctx.r8.u64);
	// std r7,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r7.u64);
	// bl 0x828c4648
	ctx.lr = 0x82B54364;
	sub_828C4648(ctx, base);
loc_82B54364:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b542b0
	if (ctx.cr6.lt) goto loc_82B542B0;
loc_82B54378:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B54384"))) PPC_WEAK_FUNC(sub_82B54384);
PPC_FUNC_IMPL(__imp__sub_82B54384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54388"))) PPC_WEAK_FUNC(sub_82B54388);
PPC_FUNC_IMPL(__imp__sub_82B54388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B54390;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c4768
	ctx.lr = 0x82B543AC;
	sub_828C4768(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b543c8
	if (!ctx.cr6.eq) goto loc_82B543C8;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c4768
	ctx.lr = 0x82B543C0;
	sub_828C4768(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b543d0
	if (ctx.cr6.eq) goto loc_82B543D0;
loc_82B543C8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82b543f8
	goto loc_82B543F8;
loc_82B543D0:
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
loc_82B543F8:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B54404:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82b54404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B54404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B54424"))) PPC_WEAK_FUNC(sub_82B54424);
PPC_FUNC_IMPL(__imp__sub_82B54424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54428"))) PPC_WEAK_FUNC(sub_82B54428);
PPC_FUNC_IMPL(__imp__sub_82B54428) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54468
	if (ctx.cr6.eq) goto loc_82B54468;
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
	ctx.lr = 0x82B54460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82b544b4
	goto loc_82B544B4;
loc_82B54468:
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
loc_82B544B4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B544C0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82b544c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B544C0;
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

__attribute__((alias("__imp__sub_82B544EC"))) PPC_WEAK_FUNC(sub_82B544EC);
PPC_FUNC_IMPL(__imp__sub_82B544EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B544F0"))) PPC_WEAK_FUNC(sub_82B544F0);
PPC_FUNC_IMPL(__imp__sub_82B544F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lfs f12,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B54538"))) PPC_WEAK_FUNC(sub_82B54538);
PPC_FUNC_IMPL(__imp__sub_82B54538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r9,280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f12,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-18196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18196);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B54594"))) PPC_WEAK_FUNC(sub_82B54594);
PPC_FUNC_IMPL(__imp__sub_82B54594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54598"))) PPC_WEAK_FUNC(sub_82B54598);
PPC_FUNC_IMPL(__imp__sub_82B54598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b545ac
	if (!ctx.cr6.gt) goto loc_82B545AC;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
loc_82B545AC:
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lfs f0,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82b545fc
	if (!ctx.cr6.lt) goto loc_82B545FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B545FC:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5460C"))) PPC_WEAK_FUNC(sub_82B5460C);
PPC_FUNC_IMPL(__imp__sub_82B5460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54610"))) PPC_WEAK_FUNC(sub_82B54610);
PPC_FUNC_IMPL(__imp__sub_82B54610) {
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
	// bl 0x82b51aa8
	ctx.lr = 0x82B54630;
	sub_82B51AA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54648
	if (ctx.cr6.eq) goto loc_82B54648;
	// bl 0x82294a58
	ctx.lr = 0x82B54644;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B54648:
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

__attribute__((alias("__imp__sub_82B54660"))) PPC_WEAK_FUNC(sub_82B54660);
PPC_FUNC_IMPL(__imp__sub_82B54660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82B54668;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r6,r7,-18304
	ctx.r6.s64 = ctx.r7.s64 + -18304;
	// lfs f0,432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,1268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1268);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,1260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1260);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f6,f7,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// lfs f10,464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f5,f7,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f6,468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f4,f7,f8
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f4,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,26252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f1,f1,f3,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f12,f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fadds f11,f2,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f10,f1,f6
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f8,1320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1320);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// rlwinm r3,r5,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f6,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f1,f6,f7,f0
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// bl 0x82cb4db8
	ctx.lr = 0x82B54740;
	sub_82CB4DB8(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,-18376(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18376);
	// fmul f1,f5,f0
	ctx.f1.f64 = ctx.f5.f64 * ctx.f0.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82B54754;
	sub_82CB4C00(ctx, base);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lhz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r4,1288(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1288);
	// rldicr r29,r5,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-17496(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17496);
	ctx.f0.f64 = double(temp.f32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lfs f13,31900(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31900);
	ctx.f13.f64 = double(temp.f32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f31,f4,f0
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// beq cr6,0x82b547f4
	if (ctx.cr6.eq) goto loc_82B547F4;
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r9,r10,120
	ctx.r9.s64 = ctx.r10.s64 + 120;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r7,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r7.s64;
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfs f0,1924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f0,1928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f0,1932(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r4,r29,r5
	temp.u64 = ctx.r5.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r29.s64 < 0) & (((ctx.r29.s64 >> temp.u64) << temp.u64) != ctx.r29.s64);
	ctx.r4.s64 = ctx.r29.s64 >> temp.u64;
	// srd r3,r4,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_82B547F4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lhz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82b5485c
	if (ctx.cr6.eq) goto loc_82B5485C;
	// lhz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r9,r10,120
	ctx.r9.s64 = ctx.r10.s64 + 120;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r7,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r7.s64;
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfs f0,1924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f0,1928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f0,1932(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r4,r29,r5
	temp.u64 = ctx.r5.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r29.s64 < 0) & (((ctx.r29.s64 >> temp.u64) << temp.u64) != ctx.r29.s64);
	ctx.r4.s64 = ctx.r29.s64 >> temp.u64;
	// srd r3,r4,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_82B5485C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82934a88
	ctx.lr = 0x82B548A4;
	sub_82934A88(ctx, base);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,712(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 712);
	// addi r6,r11,176
	ctx.r6.s64 = ctx.r11.s64 + 176;
	// bl 0x82934a88
	ctx.lr = 0x82B548C4;
	sub_82934A88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82934a88
	ctx.lr = 0x82B548DC;
	sub_82934A88(ctx, base);
	// lhz r8,34(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b5493c
	if (ctx.cr6.eq) goto loc_82B5493C;
	// lhz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r9,r10,120
	ctx.r9.s64 = ctx.r10.s64 + 120;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r7,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r7.s64;
	// stfsx f31,r8,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfs f31,1924(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f31,1928(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f31,1932(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r4,r29,r5
	temp.u64 = ctx.r5.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r29.s64 < 0) & (((ctx.r29.s64 >> temp.u64) << temp.u64) != ctx.r29.s64);
	ctx.r4.s64 = ctx.r29.s64 >> temp.u64;
	// srd r3,r4,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_82B5493C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lhz r10,46(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,1316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82b54994
	if (ctx.cr6.eq) goto loc_82B54994;
	// lhz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// addi r9,r10,120
	ctx.r9.s64 = ctx.r10.s64 + 120;
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r7,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r7.s64;
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfs f0,1924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f0,1928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f0,1932(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r4,r29,r5
	temp.u64 = ctx.r5.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r29.s64 < 0) & (((ctx.r29.s64 >> temp.u64) << temp.u64) != ctx.r29.s64);
	ctx.r4.s64 = ctx.r29.s64 >> temp.u64;
	// srd r3,r4,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_82B54994:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B549A0"))) PPC_WEAK_FUNC(sub_82B549A0);
PPC_FUNC_IMPL(__imp__sub_82B549A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B549A4"))) PPC_WEAK_FUNC(sub_82B549A4);
PPC_FUNC_IMPL(__imp__sub_82B549A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B549A8"))) PPC_WEAK_FUNC(sub_82B549A8);
PPC_FUNC_IMPL(__imp__sub_82B549A8) {
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
	ctx.lr = 0x82B549C0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b54a44
	if (ctx.cr6.eq) goto loc_82B54A44;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,28956
	ctx.r11.s64 = ctx.r8.s64 + 28956;
	// lis r5,-32074
	ctx.r5.s64 = -2102001664;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-29400
	ctx.r6.s64 = ctx.r5.s64 + -29400;
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
	ctx.lr = 0x82B54A34;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B54A44:
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

__attribute__((alias("__imp__sub_82B54A58"))) PPC_WEAK_FUNC(sub_82B54A58);
PPC_FUNC_IMPL(__imp__sub_82B54A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B54A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b54a8c
	if (!ctx.cr6.eq) goto loc_82B54A8C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264ca30
	ctx.lr = 0x82B54A80;
	sub_8264CA30(ctx, base);
	// stw r3,-28224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28224, ctx.r3.u32);
	// bl 0x8264caf0
	ctx.lr = 0x82B54A88;
	sub_8264CAF0(ctx, base);
	// lwz r10,-28224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28224);
loc_82B54A8C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-23432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23432);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b54aac
	if (ctx.cr6.eq) goto loc_82B54AAC;
	// bl 0x82310f18
	ctx.lr = 0x82B54AA0;
	sub_82310F18(ctx, base);
	// lwz r11,-23432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23432);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82b54ab4
	goto loc_82B54AB4;
loc_82B54AAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82B54AB4:
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
	// bne cr6,0x82b54ae4
	if (!ctx.cr6.eq) goto loc_82B54AE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82B54AD4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82B54ADC;
	sub_822AADA8(ctx, base);
	// lwz r11,-23432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23432);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82B54AE4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b54b10
	if (!ctx.cr6.eq) goto loc_82B54B10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82B54B00;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82B54B08;
	sub_82398640(ctx, base);
	// lwz r11,-23432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23432);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82B54B10:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b54b48
	if (ctx.cr6.eq) goto loc_82B54B48;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82B54B2C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82b54b48
	if (!ctx.cr6.eq) goto loc_82B54B48;
	// lwz r3,-23432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23432);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B54B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B54B48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B54B50"))) PPC_WEAK_FUNC(sub_82B54B50);
PPC_FUNC_IMPL(__imp__sub_82B54B50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B54B58"))) PPC_WEAK_FUNC(sub_82B54B58);
PPC_FUNC_IMPL(__imp__sub_82B54B58) {
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
	// lwz r11,-28224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28224);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54b9c
	if (!ctx.cr6.eq) goto loc_82B54B9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264ca30
	ctx.lr = 0x82B54B90;
	sub_8264CA30(ctx, base);
	// stw r3,-28224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28224, ctx.r3.u32);
	// bl 0x8264caf0
	ctx.lr = 0x82B54B98;
	sub_8264CAF0(ctx, base);
	// lwz r11,-28224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28224);
loc_82B54B9C:
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

__attribute__((alias("__imp__sub_82B54BC4"))) PPC_WEAK_FUNC(sub_82B54BC4);
PPC_FUNC_IMPL(__imp__sub_82B54BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54BC8"))) PPC_WEAK_FUNC(sub_82B54BC8);
PPC_FUNC_IMPL(__imp__sub_82B54BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,1872
	ctx.r3.s64 = ctx.r11.s64 + 1872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B54BD4"))) PPC_WEAK_FUNC(sub_82B54BD4);
PPC_FUNC_IMPL(__imp__sub_82B54BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54BD8"))) PPC_WEAK_FUNC(sub_82B54BD8);
PPC_FUNC_IMPL(__imp__sub_82B54BD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268cfd8
	sub_8268CFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B54BDC"))) PPC_WEAK_FUNC(sub_82B54BDC);
PPC_FUNC_IMPL(__imp__sub_82B54BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54BE0"))) PPC_WEAK_FUNC(sub_82B54BE0);
PPC_FUNC_IMPL(__imp__sub_82B54BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54c68
	if (ctx.cr6.eq) goto loc_82B54C68;
	// bl 0x826b7958
	ctx.lr = 0x82B54C04;
	sub_826B7958(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54c28
	if (ctx.cr6.eq) goto loc_82B54C28;
loc_82B54C14:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b54c38
	if (ctx.cr6.eq) goto loc_82B54C38;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54c14
	if (!ctx.cr6.eq) goto loc_82B54C14;
loc_82B54C28:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54c68
	if (ctx.cr6.eq) goto loc_82B54C68;
loc_82B54C38:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,672
	ctx.r3.s64 = 672;
	// bl 0x822959a8
	ctx.lr = 0x82B54C44;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b54c68
	if (ctx.cr6.eq) goto loc_82B54C68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b51b50
	ctx.lr = 0x82B54C54;
	sub_82B51B50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B54C68:
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

__attribute__((alias("__imp__sub_82B54C80"))) PPC_WEAK_FUNC(sub_82B54C80);
PPC_FUNC_IMPL(__imp__sub_82B54C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B54C90"))) PPC_WEAK_FUNC(sub_82B54C90);
PPC_FUNC_IMPL(__imp__sub_82B54C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x826511d8
	sub_826511D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B54C94"))) PPC_WEAK_FUNC(sub_82B54C94);
PPC_FUNC_IMPL(__imp__sub_82B54C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54C98"))) PPC_WEAK_FUNC(sub_82B54C98);
PPC_FUNC_IMPL(__imp__sub_82B54C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268d890
	sub_8268D890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B54C9C"))) PPC_WEAK_FUNC(sub_82B54C9C);
PPC_FUNC_IMPL(__imp__sub_82B54C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B54CA0"))) PPC_WEAK_FUNC(sub_82B54CA0);
PPC_FUNC_IMPL(__imp__sub_82B54CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82B54CA8;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b5548c
	if (ctx.cr6.eq) goto loc_82B5548C;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5548c
	if (ctx.cr6.eq) goto loc_82B5548C;
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b5548c
	if (!ctx.cr6.eq) goto loc_82B5548C;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54d14
	if (ctx.cr6.eq) goto loc_82B54D14;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b54d14
	if (ctx.cr6.eq) goto loc_82B54D14;
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b5548c
	if (ctx.cr6.eq) goto loc_82B5548C;
loc_82B54D14:
	// lwz r11,236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54d3c
	if (ctx.cr6.eq) goto loc_82B54D3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82481290
	ctx.lr = 0x82B54D28;
	sub_82481290(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82B54D3C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b5548c
	if (ctx.cr6.eq) goto loc_82B5548C;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264f700
	ctx.lr = 0x82B54D54;
	sub_8264F700(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54d80
	if (ctx.cr6.eq) goto loc_82B54D80;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b54d84
	if (!ctx.cr6.eq) goto loc_82B54D84;
loc_82B54D80:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B54D84:
	// lwz r29,-31264(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822cecb0
	ctx.lr = 0x82B54D94;
	sub_822CECB0(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82b54da4
	if (!ctx.cr6.eq) goto loc_82B54DA4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r29,25104(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_82B54DA4:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a93e8
	ctx.lr = 0x82B54DCC;
	sub_822A93E8(ctx, base);
	// stw r3,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r30,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r30.u32);
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r9,352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// lwz r7,520(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lwz r6,60(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r6,92(r7)
	PPC_STORE_U32(ctx.r7.u32 + 92, ctx.r6.u32);
	// lwz r10,712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// lwz r5,220(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82b54ea4
	if (!ctx.cr6.gt) goto loc_82B54EA4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lfs f11,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f9,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lfs f0,32428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32428);
	ctx.f0.f64 = double(temp.f32);
loc_82B54E24:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b54fe8
	if (!ctx.cr6.eq) goto loc_82B54FE8;
	// lwz r11,216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fsubs f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fabs f5,f8
	ctx.f5.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x82b54e80
	if (!ctx.cr6.lt) goto loc_82B54E80;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82b54e80
	if (!ctx.cr6.lt) goto loc_82B54E80;
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82b54e80
	if (!ctx.cr6.lt) goto loc_82B54E80;
	// lwz r11,204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwzx r28,r11,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b5548c
	if (ctx.cr6.eq) goto loc_82B5548C;
loc_82B54E80:
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r6,220(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82b54e24
	if (ctx.cr6.lt) goto loc_82B54E24;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b54fe8
	if (!ctx.cr6.eq) goto loc_82B54FE8;
loc_82B54EA4:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54f24
	if (ctx.cr6.eq) goto loc_82B54F24;
	// lwz r10,856(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b54f04
	if (ctx.cr6.eq) goto loc_82B54F04;
	// lwz r28,40(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82313218
	ctx.lr = 0x82B54ED0;
	sub_82313218(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b54ef0
	if (ctx.cr6.eq) goto loc_82B54EF0;
loc_82B54EDC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b54f00
	if (ctx.cr6.eq) goto loc_82B54F00;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54edc
	if (!ctx.cr6.eq) goto loc_82B54EDC;
loc_82B54EF0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b54f04
	if (ctx.cr6.eq) goto loc_82B54F04;
loc_82B54F00:
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
loc_82B54F04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b54f20
	if (ctx.cr6.eq) goto loc_82B54F20;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,712(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236aea8
	ctx.lr = 0x82B54F1C;
	sub_8236AEA8(ctx, base);
	// b 0x82b54f24
	goto loc_82B54F24;
loc_82B54F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B54F24:
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// bne cr6,0x82b54f60
	if (!ctx.cr6.eq) goto loc_82B54F60;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b54f60
	if (!ctx.cr6.eq) goto loc_82B54F60;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,712(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82824cf8
	ctx.lr = 0x82B54F5C;
	sub_82824CF8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
loc_82B54F60:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r9,r10,30404
	ctx.r9.s64 = ctx.r10.s64 + 30404;
	// lwz r3,-26012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26012);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B54F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b54fb0
	if (ctx.cr6.eq) goto loc_82B54FB0;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// lwz r11,-26004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26004);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-26004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26004, ctx.r11.u32);
loc_82B54FB0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// bl 0x82484b98
	ctx.lr = 0x82B54FC4;
	sub_82484B98(ctx, base);
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// bl 0x823d6ef0
	ctx.lr = 0x82B54FD4;
	sub_823D6EF0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r10,r11,30248
	ctx.r10.s64 = ctx.r11.s64 + 30248;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// bl 0x822b1a50
	ctx.lr = 0x82B54FE8;
	sub_822B1A50(ctx, base);
loc_82B54FE8:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,25344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25344);
	// lwz r29,536(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	// bne cr6,0x82b5501c
	if (!ctx.cr6.eq) goto loc_82B5501C;
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55020
	if (ctx.cr6.eq) goto loc_82B55020;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55020
	if (ctx.cr6.eq) goto loc_82B55020;
loc_82B5501C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82B55020:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r28,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r28.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r5,-31264(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// li r7,6
	ctx.r7.s64 = 6;
	// lfs f30,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r8,30360
	ctx.r6.s64 = ctx.r8.s64 + 30360;
	// lfs f29,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f29.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f30,308(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// stfs f29,312(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stw r4,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// stfs f30,280(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// stfs f31,284(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// stfs f30,248(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// sth r31,300(r1)
	PPC_STORE_U16(ctx.r1.u32 + 300, ctx.r31.u16);
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// sth r31,302(r1)
	PPC_STORE_U16(ctx.r1.u32 + 302, ctx.r31.u16);
	// stfs f30,264(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// addi r28,r11,9680
	ctx.r28.s64 = ctx.r11.s64 + 9680;
	// stfs f31,276(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,288(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f29,316(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// lwz r11,352(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 352);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x828128a0
	ctx.lr = 0x82B550E4;
	sub_828128A0(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b55110
	if (ctx.cr6.eq) goto loc_82B55110;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b55110
	if (ctx.cr6.eq) goto loc_82B55110;
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
loc_82B55110:
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// bl 0x8236d940
	ctx.lr = 0x82B55124;
	sub_8236D940(ctx, base);
	// sth r3,302(r1)
	PPC_STORE_U16(ctx.r1.u32 + 302, ctx.r3.u16);
	// addi r5,r30,488
	ctx.r5.s64 = ctx.r30.s64 + 488;
	// lbz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 484);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82811fe8
	ctx.lr = 0x82B55138;
	sub_82811FE8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r1,328
	ctx.r8.s64 = ctx.r1.s64 + 328;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// bl 0x828115a8
	ctx.lr = 0x82B5516C;
	sub_828115A8(ctx, base);
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B551B8:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82b551b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B551B8;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// sth r31,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r31.u16);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// sth r31,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r31.u16);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bgt cr6,0x82b552b8
	if (ctx.cr6.gt) goto loc_82B552B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55244
	if (ctx.cr6.eq) goto loc_82B55244;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x82b552b8
	if (!ctx.cr6.lt) goto loc_82B552B8;
loc_82B55244:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cb0fe0
	ctx.lr = 0x82B5524C;
	sub_82CB0FE0(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b55280
	if (ctx.cr6.eq) goto loc_82B55280;
loc_82B55264:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82b55264
	if (!ctx.cr6.eq) goto loc_82B55264;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82B55280:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55294
	if (ctx.cr6.eq) goto loc_82B55294;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb3d50
	ctx.lr = 0x82B55290;
	sub_82CB3D50(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82B55294:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
loc_82B552B8:
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B552DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82b552dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B552DC;
	// lfs f12,556(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	ctx.f12.f64 = double(temp.f32);
	// lwz r29,-31264(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// lfs f0,548(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,552(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x828128a0
	ctx.lr = 0x82B5532C;
	sub_828128A0(ctx, base);
	// lbz r9,492(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 492);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b55354
	if (ctx.cr6.eq) goto loc_82B55354;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82b55354
	if (!ctx.cr6.eq) goto loc_82B55354;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55354
	if (ctx.cr6.eq) goto loc_82B55354;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
loc_82B55354:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f30,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f31,376(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// li r8,2304
	ctx.r8.s64 = 2304;
	// stfs f31,380(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f30,384(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stw r9,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r9.u32);
	// lfs f0,-18136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r8.u32);
	// lfs f13,32024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32024);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stfs f31,388(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f31,392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f31,396(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f30,400(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f31,412(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f31,408(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f31,404(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f31,424(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f31,420(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f31,416(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f31,440(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f31,436(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f31,432(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f31,452(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f31,448(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f31,444(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f0,456(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f31,428(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f31,460(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f13,464(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f29,468(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f29,480(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f29,484(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f31,472(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f29,492(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// stfs f31,496(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// bne cr6,0x82b55408
	if (!ctx.cr6.eq) goto loc_82B55408;
	// li r11,2432
	ctx.r11.s64 = 2432;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// stw r11,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_82B55408:
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b5541c
	if (!ctx.cr6.eq) goto loc_82B5541C;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
loc_82B5541C:
	// lwz r3,352(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// bl 0x82810b10
	ctx.lr = 0x82B55424;
	sub_82810B10(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,-31764(r29)
	PPC_STORE_U32(ctx.r29.u32 + -31764, ctx.r11.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B55444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,-31764(r29)
	PPC_STORE_U32(ctx.r29.u32 + -31764, ctx.r31.u32);
	// beq cr6,0x82b55484
	if (ctx.cr6.eq) goto loc_82B55484;
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,492(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b55484
	if (ctx.cr6.eq) goto loc_82B55484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55484:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8236a568
	ctx.lr = 0x82B5548C;
	sub_8236A568(ctx, base);
loc_82B5548C:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B554A0"))) PPC_WEAK_FUNC(sub_82B554A0);
PPC_FUNC_IMPL(__imp__sub_82B554A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8268bc00
	ctx.lr = 0x82B554B8;
	sub_8268BC00(ctx, base);
	// lwz r9,448(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r8,r9,0,20,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stb r10,525(r31)
	PPC_STORE_U8(ctx.r31.u32 + 525, ctx.r10.u8);
	// stw r8,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r8.u32);
loc_82B554D0:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82b55500
	if (!ctx.cr6.eq) goto loc_82B55500;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b554d0
	if (!ctx.cr6.eq) goto loc_82B554D0;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55500
	if (ctx.cr6.eq) goto loc_82B55500;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r10.u32);
loc_82B55500:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B55504:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82b55534
	if (!ctx.cr6.eq) goto loc_82B55534;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b55504
	if (!ctx.cr6.eq) goto loc_82B55504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55534:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B55548"))) PPC_WEAK_FUNC(sub_82B55548);
PPC_FUNC_IMPL(__imp__sub_82B55548) {
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
	// bl 0x8268be38
	ctx.lr = 0x82B55560;
	sub_8268BE38(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5558c
	if (ctx.cr6.eq) goto loc_82B5558C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82b5558c
	if (!ctx.cr6.gt) goto loc_82B5558C;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b55590
	goto loc_82B55590;
loc_82B5558C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B55590:
	// lwz r4,988(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b555d8
	if (ctx.cr6.eq) goto loc_82B555D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b555d8
	if (ctx.cr6.eq) goto loc_82B555D8;
	// lwz r10,780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 780);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b555d8
	if (ctx.cr6.eq) goto loc_82B555D8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B555C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r8.u32);
	// lfs f0,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
loc_82B555D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B555EC"))) PPC_WEAK_FUNC(sub_82B555EC);
PPC_FUNC_IMPL(__imp__sub_82B555EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B555F0"))) PPC_WEAK_FUNC(sub_82B555F0);
PPC_FUNC_IMPL(__imp__sub_82B555F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82B555F8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ae8
	ctx.lr = 0x82B55600;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8268c750
	ctx.lr = 0x82B55610;
	sub_8268C750(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55628
	if (ctx.cr6.eq) goto loc_82B55628;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,452
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 452, ctx.xer);
	// blt cr6,0x82b55658
	if (ctx.cr6.lt) goto loc_82B55658;
loc_82B55628:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x82b57870
	ctx.lr = 0x82B55634;
	sub_82B57870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x82b579d8
	ctx.lr = 0x82B55640;
	sub_82B579D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x82707a00
	ctx.lr = 0x82B5564C;
	sub_82707A00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,956
	ctx.r3.s64 = ctx.r31.s64 + 956;
	// bl 0x82b57b68
	ctx.lr = 0x82B55658;
	sub_82B57B68(ctx, base);
loc_82B55658:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55cf0
	if (ctx.cr6.eq) goto loc_82B55CF0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r10,449
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 449, ctx.xer);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x82b55774
	if (!ctx.cr6.lt) goto loc_82B55774;
	// li r11,-16384
	ctx.r11.s64 = -16384;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d7698
	ctx.lr = 0x82B55698;
	sub_823D7698(ctx, base);
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82b55768
	if (!ctx.cr6.gt) goto loc_82B55768;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
loc_82B556E8:
	// lwz r11,860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lfs f2,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f30,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f0,f2
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f28,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmadds f1,f7,f30,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f1.f64));
	// fmadds f29,f8,f30,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f2,f6,f30,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fmadds f1,f10,f28,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f30,f11,f28,f29
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f29.f64));
	// fmadds f2,f9,f28,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f2.f64));
	// fadds f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f30,f3
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r5,864(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82b556e8
	if (ctx.cr6.lt) goto loc_82B556E8;
loc_82B55768:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa9e8
	ctx.lr = 0x82B55774;
	sub_822AA9E8(ctx, base);
loc_82B55774:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,451
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 451, ctx.xer);
	// bge cr6,0x82b55878
	if (!ctx.cr6.lt) goto loc_82B55878;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d7698
	ctx.lr = 0x82B5579C;
	sub_823D7698(ctx, base);
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82b5586c
	if (!ctx.cr6.gt) goto loc_82B5586C;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
loc_82B557EC:
	// lwz r11,860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lfs f2,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f31,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f12,f2
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f29,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f1,f7,f31,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f30,f6,f31,f30
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmadds f2,f8,f31,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f1,f10,f29,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmadds f31,f9,f29,f30
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f30.f64));
	// fmadds f2,f11,f29,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f2.f64));
	// fadds f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f1,f31,f5
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// fadds f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r5,864(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82b557ec
	if (ctx.cr6.lt) goto loc_82B557EC;
loc_82B5586C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa9e8
	ctx.lr = 0x82B55878;
	sub_822AA9E8(ctx, base);
loc_82B55878:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,282
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 282, ctx.xer);
	// blt cr6,0x82b558ac
	if (ctx.cr6.lt) goto loc_82B558AC;
	// cmpwi cr6,r11,452
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 452, ctx.xer);
	// bge cr6,0x82b558ac
	if (!ctx.cr6.lt) goto loc_82B558AC;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// bl 0x823adcc8
	ctx.lr = 0x82B558A4;
	sub_823ADCC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b41e8
	ctx.lr = 0x82B558AC;
	sub_822B41E8(ctx, base);
loc_82B558AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,452
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 452, ctx.xer);
	// bge cr6,0x82b55cf0
	if (!ctx.cr6.lt) goto loc_82B55CF0;
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// addi r30,r31,920
	ctx.r30.s64 = ctx.r31.s64 + 920;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// stw r24,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b55914
	if (ctx.cr6.eq) goto loc_82B55914;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b55914
	if (ctx.cr6.eq) goto loc_82B55914;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b558f4
	if (!ctx.cr6.eq) goto loc_82B558F4;
	// bl 0x822900a0
	ctx.lr = 0x82B558F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82B558F4:
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
	ctx.lr = 0x82B55910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82B55914:
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// addi r25,r31,944
	ctx.r25.s64 = ctx.r31.s64 + 944;
	// stw r24,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b5596c
	if (ctx.cr6.eq) goto loc_82B5596C;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r24,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r24.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b5596c
	if (ctx.cr6.eq) goto loc_82B5596C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5594c
	if (!ctx.cr6.eq) goto loc_82B5594C;
	// bl 0x822900a0
	ctx.lr = 0x82B55948;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82B5594C:
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
	ctx.lr = 0x82B55968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
loc_82B5596C:
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// addi r28,r31,932
	ctx.r28.s64 = ctx.r31.s64 + 932;
	// stw r24,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b559c4
	if (ctx.cr6.eq) goto loc_82B559C4;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r24,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r24.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b559c4
	if (ctx.cr6.eq) goto loc_82B559C4;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b559a4
	if (!ctx.cr6.eq) goto loc_82B559A4;
	// bl 0x822900a0
	ctx.lr = 0x82B559A0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82B559A4:
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
	ctx.lr = 0x82B559C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82B559C4:
	// lwz r11,964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// addi r26,r31,956
	ctx.r26.s64 = ctx.r31.s64 + 956;
	// stw r24,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b55a1c
	if (ctx.cr6.eq) goto loc_82B55A1C;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r24,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r24.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b55a1c
	if (ctx.cr6.eq) goto loc_82B55A1C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b559fc
	if (!ctx.cr6.eq) goto loc_82B559FC;
	// bl 0x822900a0
	ctx.lr = 0x82B559F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82B559FC:
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
	ctx.lr = 0x82B55A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_82B55A1C:
	// lwz r29,864(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B55A38;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// mulli r5,r29,44
	ctx.r5.s64 = ctx.r29.s64 * 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82B55A50;
	sub_82E640B8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,888(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B55A6C;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82B55A94;
	sub_82E640B8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r29,900(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B55AB0;
	sub_82294AC0(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82B55AD8;
	sub_82E640B8(ctx, base);
	// lwz r6,864(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b55bd0
	if (!ctx.cr6.gt) goto loc_82B55BD0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82B55AF0:
	// lwz r8,860(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,860(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// lwz r5,28(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// stw r5,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r5.u32);
	// lwz r4,32(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// stw r4,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r4.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,860(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,860(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r4,60(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,860(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r7,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r7.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,860(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r4,68(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// stw r4,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r4.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,860(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// stw r7,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r7.u32);
	// lwz r6,864(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82b55af0
	if (ctx.cr6.lt) goto loc_82B55AF0;
loc_82B55BD0:
	// lwz r11,888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b55c7c
	if (!ctx.cr6.gt) goto loc_82B55C7C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82B55BE8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,884(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,884(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// add r6,r29,r10
	ctx.r6.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,884(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r10,884(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r5,24(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r5,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// lwz r11,884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82b577d0
	ctx.lr = 0x82B55C64;
	sub_82B577D0(ctx, base);
	// lwz r4,888(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82b55be8
	if (ctx.cr6.lt) goto loc_82B55BE8;
loc_82B55C7C:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b55cf0
	if (!ctx.cr6.gt) goto loc_82B55CF0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82B55C94:
	// lwz r8,896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// stwx r5,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r8,896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,896(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// lwz r5,44(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// lwz r4,900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82b55c94
	if (ctx.cr6.lt) goto loc_82B55C94;
loc_82B55CF0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b34
	ctx.lr = 0x82B55CFC;
	__restfpr_28(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B55D00"))) PPC_WEAK_FUNC(sub_82B55D00);
PPC_FUNC_IMPL(__imp__sub_82B55D00) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B55D08"))) PPC_WEAK_FUNC(sub_82B55D08);
PPC_FUNC_IMPL(__imp__sub_82B55D08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B55D10"))) PPC_WEAK_FUNC(sub_82B55D10);
PPC_FUNC_IMPL(__imp__sub_82B55D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82B55D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x829d99e0
	ctx.lr = 0x82B55D28;
	sub_829D99E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82b55d40
	if (!ctx.cr6.eq) goto loc_82B55D40;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x829d99e0
	ctx.lr = 0x82B55D3C;
	sub_829D99E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82B55D40:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55d7c
	if (ctx.cr6.eq) goto loc_82B55D7C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82b55d6c
	if (ctx.cr6.gt) goto loc_82B55D6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82b55d80
	goto loc_82B55D80;
loc_82B55D6C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82b55d80
	goto loc_82B55D80;
loc_82B55D7C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B55D80:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b55f54
	if (ctx.cr6.eq) goto loc_82B55F54;
	// lwz r11,712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55f54
	if (ctx.cr6.eq) goto loc_82B55F54;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55f54
	if (ctx.cr6.eq) goto loc_82B55F54;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b55f54
	if (ctx.cr6.eq) goto loc_82B55F54;
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82b55f54
	if (!ctx.cr6.eq) goto loc_82B55F54;
	// lwz r5,768(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 768);
	// addi r7,r29,768
	ctx.r7.s64 = ctx.r29.s64 + 768;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b55ddc
	if (ctx.cr6.eq) goto loc_82B55DDC;
	// lwz r11,988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b55eb8
	if (!ctx.cr6.eq) goto loc_82B55EB8;
loc_82B55DDC:
	// lwz r10,960(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82b55e10
	if (!ctx.cr6.gt) goto loc_82B55E10;
	// lwz r11,956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 956);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82B55DF4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne 0x82b55df4
	if (!ctx.cr0.eq) goto loc_82B55DF4;
loc_82B55E10:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r31,128
	ctx.r31.s64 = 128;
	// addi r6,r11,16920
	ctx.r6.s64 = ctx.r11.s64 + 16920;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82B55E24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b55e4c
	if (!ctx.cr6.gt) goto loc_82B55E4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82b55e4c
	if (ctx.cr6.lt) goto loc_82B55E4C;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x82b55e24
	if (ctx.cr6.lt) goto loc_82B55E24;
	// b 0x82b55e58
	goto loc_82B55E58;
loc_82B55E4C:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82B55E58:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82b55e84
	if (!ctx.cr6.eq) goto loc_82B55E84;
	// lwz r3,780(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 780);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B55E84:
	// lwz r11,988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// addi r7,r29,988
	ctx.r7.s64 = ctx.r29.s64 + 988;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b55eb8
	if (!ctx.cr6.eq) goto loc_82B55EB8;
	// lwz r3,780(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 780);
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
loc_82B55EB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b55ee8
	if (ctx.cr6.eq) goto loc_82B55EE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55EE8:
	// lwz r11,652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 652);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b55f14
	if (ctx.cr6.eq) goto loc_82B55F14;
	// lwz r10,768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b55f0c
	if (ctx.cr6.eq) goto loc_82B55F0C;
	// lwz r11,988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b55f54
	if (!ctx.cr6.eq) goto loc_82B55F54;
loc_82B55F0C:
	// lwz r3,652(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 652);
	// b 0x82b55f44
	goto loc_82B55F44;
loc_82B55F14:
	// lwz r11,688(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b55f54
	if (ctx.cr6.eq) goto loc_82B55F54;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b55f54
	if (ctx.cr6.eq) goto loc_82B55F54;
	// lwz r10,768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b55f40
	if (ctx.cr6.eq) goto loc_82B55F40;
	// lwz r11,988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b55f54
	if (!ctx.cr6.eq) goto loc_82B55F54;
loc_82B55F40:
	// lwz r3,688(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 688);
loc_82B55F44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B55F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B55F54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B55F5C"))) PPC_WEAK_FUNC(sub_82B55F5C);
PPC_FUNC_IMPL(__imp__sub_82B55F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B55F60"))) PPC_WEAK_FUNC(sub_82B55F60);
PPC_FUNC_IMPL(__imp__sub_82B55F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82B55F68;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56138
	if (ctx.cr6.eq) goto loc_82B56138;
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82b56138
	if (!ctx.cr6.eq) goto loc_82B56138;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r10,24988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24988);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b55fb4
	if (ctx.cr6.eq) goto loc_82B55FB4;
	// lwz r10,768(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 768);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b56138
	if (ctx.cr6.eq) goto loc_82B56138;
	// lwz r10,988(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b56138
	if (ctx.cr6.eq) goto loc_82B56138;
loc_82B55FB4:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r25,128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82b55fd8
	if (!ctx.cr6.lt) goto loc_82B55FD8;
	// subf r4,r11,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r11.s64;
	// addi r3,r29,656
	ctx.r3.s64 = ctx.r29.s64 + 656;
	// bl 0x82658108
	ctx.lr = 0x82B55FD8;
	sub_82658108(ctx, base);
loc_82B55FD8:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82b56134
	if (!ctx.cr6.gt) goto loc_82B56134;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r10,-19580
	ctx.r23.s64 = ctx.r10.s64 + -19580;
	// addi r22,r9,-27584
	ctx.r22.s64 = ctx.r9.s64 + -27584;
	// addi r24,r11,28200
	ctx.r24.s64 = ctx.r11.s64 + 28200;
loc_82B56004:
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b56034
	if (!ctx.cr6.eq) goto loc_82B56034;
	// lwz r10,712(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,124(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// lwzx r31,r7,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stwx r31,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r31.u32);
	// beq cr6,0x82b56120
	if (ctx.cr6.eq) goto loc_82B56120;
loc_82B56034:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56060
	if (!ctx.cr6.eq) goto loc_82B56060;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822960c0
	ctx.lr = 0x82B5605C;
	sub_822960C0(ctx, base);
	// b 0x82b56088
	goto loc_82B56088;
loc_82B56060:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b5607c
	if (!ctx.cr6.eq) goto loc_82B5607C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822960c0
	ctx.lr = 0x82B56078;
	sub_822960C0(ctx, base);
	// b 0x82b56088
	goto loc_82B56088;
loc_82B5607C:
	// addi r4,r3,44
	ctx.r4.s64 = ctx.r3.s64 + 44;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e1a0
	ctx.lr = 0x82B56088;
	sub_8233E1A0(ctx, base);
loc_82B56088:
	// lwz r11,856(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 856);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b560ac
	if (!ctx.cr6.eq) goto loc_82B560AC;
	// lwz r10,984(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 984);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b560c4
	if (!ctx.cr6.lt) goto loc_82B560C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b560cc
	if (ctx.cr6.eq) goto loc_82B560CC;
loc_82B560AC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// beq cr6,0x82b560c4
	if (ctx.cr6.eq) goto loc_82B560C4;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82b560cc
	if (!ctx.cr6.eq) goto loc_82B560CC;
loc_82B560C4:
	// lwz r30,988(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// b 0x82b560d0
	goto loc_82B560D0;
loc_82B560CC:
	// lwz r30,768(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 768);
loc_82B560D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82454470
	ctx.lr = 0x82B560D8;
	sub_82454470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b56118
	if (ctx.cr6.eq) goto loc_82B56118;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82B56100;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fd80
	ctx.lr = 0x82B56118;
	sub_8244FD80(ctx, base);
loc_82B56118:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82B56120;
	sub_82299080(ctx, base);
loc_82B56120:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,44
	ctx.r27.s64 = ctx.r27.s64 + 44;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82b56004
	if (ctx.cr6.lt) goto loc_82B56004;
loc_82B56134:
	// bl 0x8244f340
	ctx.lr = 0x82B56138;
	sub_8244F340(ctx, base);
loc_82B56138:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B56140"))) PPC_WEAK_FUNC(sub_82B56140);
PPC_FUNC_IMPL(__imp__sub_82B56140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82B56148;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ad8
	ctx.lr = 0x82B56150;
	__savefpr_24(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56a08
	if (ctx.cr6.eq) goto loc_82B56A08;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82b56a08
	if (!ctx.cr6.eq) goto loc_82B56A08;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,744(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f12,748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,-32444
	ctx.r9.s64 = ctx.r11.s64 + -32444;
	// lfs f11,968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 972);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f30,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f9,f30,f11
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// lfs f0,3584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3584);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f30,f10
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fdivs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f7,240(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fdivs f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f6,244(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f30,252(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f9,224(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f8,228(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,236(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x8265a1a0
	ctx.lr = 0x82B561D8;
	sub_8265A1A0(ctx, base);
	// lwz r8,712(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r31,128(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bge cr6,0x82b56204
	if (!ctx.cr6.lt) goto loc_82B56204;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r30,656
	ctx.r3.s64 = ctx.r30.s64 + 656;
	// bl 0x82658108
	ctx.lr = 0x82B56204;
	sub_82658108(ctx, base);
loc_82B56204:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82b569fc
	if (!ctx.cr6.gt) goto loc_82B569FC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lfs f27,-17248(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17248);
	ctx.f27.f64 = double(temp.f32);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// lfs f28,-15816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15816);
	ctx.f28.f64 = double(temp.f32);
	// addi r11,r11,-19580
	ctx.r11.s64 = ctx.r11.s64 + -19580;
	// lfs f29,21152(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21152);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-27584
	ctx.r10.s64 = ctx.r10.s64 + -27584;
	// addi r6,r6,28200
	ctx.r6.s64 = ctx.r6.s64 + 28200;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r5,r5,-14356
	ctx.r5.s64 = ctx.r5.s64 + -14356;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lis r31,-32229
	ctx.r31.s64 = -2112159744;
	// lis r29,-32229
	ctx.r29.s64 = -2112159744;
	// lis r28,-32229
	ctx.r28.s64 = -2112159744;
	// lis r17,-32229
	ctx.r17.s64 = -2112159744;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r27,-32229
	ctx.r27.s64 = -2112159744;
	// lis r26,-32232
	ctx.r26.s64 = -2112356352;
	// lis r25,-32232
	ctx.r25.s64 = -2112356352;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// lis r21,-32232
	ctx.r21.s64 = -2112356352;
	// lis r20,-32229
	ctx.r20.s64 = -2112159744;
	// lis r19,-32224
	ctx.r19.s64 = -2111832064;
	// lis r18,-32224
	ctx.r18.s64 = -2111832064;
	// addi r4,r4,15348
	ctx.r4.s64 = ctx.r4.s64 + 15348;
	// addi r3,r3,15312
	ctx.r3.s64 = ctx.r3.s64 + 15312;
	// addi r11,r31,15276
	ctx.r11.s64 = ctx.r31.s64 + 15276;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r10,r29,15240
	ctx.r10.s64 = ctx.r29.s64 + 15240;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r6,r28,15204
	ctx.r6.s64 = ctx.r28.s64 + 15204;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r5,r17,15132
	ctx.r5.s64 = ctx.r17.s64 + 15132;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r16,r9,27176
	ctx.r16.s64 = ctx.r9.s64 + 27176;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r15,r8,28272
	ctx.r15.s64 = ctx.r8.s64 + 28272;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r14,r7,28232
	ctx.r14.s64 = ctx.r7.s64 + 28232;
	// addi r27,r27,15168
	ctx.r27.s64 = ctx.r27.s64 + 15168;
	// addi r26,r26,-14476
	ctx.r26.s64 = ctx.r26.s64 + -14476;
	// addi r25,r25,-14512
	ctx.r25.s64 = ctx.r25.s64 + -14512;
	// addi r24,r24,-14536
	ctx.r24.s64 = ctx.r24.s64 + -14536;
	// addi r23,r23,-14556
	ctx.r23.s64 = ctx.r23.s64 + -14556;
	// addi r22,r22,-14596
	ctx.r22.s64 = ctx.r22.s64 + -14596;
	// addi r21,r21,-14636
	ctx.r21.s64 = ctx.r21.s64 + -14636;
	// addi r20,r20,15384
	ctx.r20.s64 = ctx.r20.s64 + 15384;
	// addi r19,r19,29028
	ctx.r19.s64 = ctx.r19.s64 + 29028;
	// addi r18,r18,29000
	ctx.r18.s64 = ctx.r18.s64 + 29000;
loc_82B56314:
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r17,r11,r29
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82b5634c
	if (!ctx.cr6.eq) goto loc_82B5634C;
	// lwz r10,712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,124(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 124);
	// lwzx r17,r6,r9
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stwx r17,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r17.u32);
	// beq cr6,0x82b569d0
	if (ctx.cr6.eq) goto loc_82B569D0;
loc_82B5634C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56378
	if (!ctx.cr6.eq) goto loc_82B56378;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x822960c0
	ctx.lr = 0x82B56374;
	sub_822960C0(ctx, base);
	// b 0x82b563a0
	goto loc_82B563A0;
loc_82B56378:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b56394
	if (!ctx.cr6.eq) goto loc_82B56394;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822960c0
	ctx.lr = 0x82B56390;
	sub_822960C0(ctx, base);
	// b 0x82b563a0
	goto loc_82B563A0;
loc_82B56394:
	// addi r4,r3,44
	ctx.r4.s64 = ctx.r3.s64 + 44;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8233e1a0
	ctx.lr = 0x82B563A0;
	sub_8233E1A0(ctx, base);
loc_82B563A0:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// srawi r10,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b563c8
	if (ctx.cr6.lt) goto loc_82B563C8;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r3,r30,844
	ctx.r3.s64 = ctx.r30.s64 + 844;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823ade20
	ctx.lr = 0x82B563C8;
	sub_823ADE20(ctx, base);
loc_82B563C8:
	// lwz r11,856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b563ec
	if (!ctx.cr6.eq) goto loc_82B563EC;
	// lwz r10,984(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b56404
	if (!ctx.cr6.lt) goto loc_82B56404;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56430
	if (ctx.cr6.eq) goto loc_82B56430;
loc_82B563EC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// beq cr6,0x82b56404
	if (ctx.cr6.eq) goto loc_82B56404;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82b56430
	if (!ctx.cr6.eq) goto loc_82B56430;
loc_82B56404:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// b 0x82b56488
	goto loc_82B56488;
loc_82B56430:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// srawi r7,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 5;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r6,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// subf r4,r4,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r4.s64;
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// slw r5,r5,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
loc_82B56488:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82454470
	ctx.lr = 0x82B56490;
	sub_82454470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b569c4
	if (ctx.cr6.eq) goto loc_82B569C4;
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r28,r1,432
	ctx.r28.s64 = ctx.r1.s64 + 432;
	// stwx r31,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r31.u32);
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f0,f29
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f25,f13,f29
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f24,f12,f29
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bl 0x8233e028
	ctx.lr = 0x82B564DC;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82B564F4;
	sub_8244FC30(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r29,r1,320
	ctx.r29.s64 = ctx.r1.s64 + 320;
	// bl 0x8233e028
	ctx.lr = 0x82B56510;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f1,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f28.f64));
	// bl 0x8244fc30
	ctx.lr = 0x82B56528;
	sub_8244FC30(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r29,r1,336
	ctx.r29.s64 = ctx.r1.s64 + 336;
	// bl 0x8233e028
	ctx.lr = 0x82B56544;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fdivs f1,f27,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f27.f64 / ctx.f24.f64));
	// bl 0x8244fc30
	ctx.lr = 0x82B5655C;
	sub_8244FC30(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// bl 0x8233e028
	ctx.lr = 0x82B56578;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82B56590;
	sub_8244FC30(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
	// bl 0x8233e028
	ctx.lr = 0x82B565AC;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82B565C4;
	sub_8244FC30(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r29,r1,384
	ctx.r29.s64 = ctx.r1.s64 + 384;
	// bl 0x8233e028
	ctx.lr = 0x82B565E0;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fc30
	ctx.lr = 0x82B565F8;
	sub_8244FC30(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f26,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f25,276(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f24,280(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stfs f30,284(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r29,r1,272
	ctx.r29.s64 = ctx.r1.s64 + 272;
	// addi r28,r1,400
	ctx.r28.s64 = ctx.r1.s64 + 400;
	// bl 0x8233e028
	ctx.lr = 0x82B56628;
	sub_8233E028(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8244fa60
	ctx.lr = 0x82B56644;
	sub_8244FA60(ctx, base);
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// lfs f11,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f10,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f9,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f30,268(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lfs f8,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f7,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f5,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fsubs f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// stfs f6,256(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f4,260(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// addi r29,r1,256
	ctx.r29.s64 = ctx.r1.s64 + 256;
	// stfs f3,264(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r28,r1,416
	ctx.r28.s64 = ctx.r1.s64 + 416;
	// bl 0x8233e028
	ctx.lr = 0x82B5669C;
	sub_8233E028(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8244fa60
	ctx.lr = 0x82B566B8;
	sub_8244FA60(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// bl 0x8233e028
	ctx.lr = 0x82B566E4;
	sub_8233E028(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x8244fa60
	ctx.lr = 0x82B56700;
	sub_8244FA60(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r29,r1,448
	ctx.r29.s64 = ctx.r1.s64 + 448;
	// bl 0x8233e028
	ctx.lr = 0x82B5671C;
	sub_8233E028(ctx, base);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fc30
	ctx.lr = 0x82B56734;
	sub_8244FC30(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r29,r1,424
	ctx.r29.s64 = ctx.r1.s64 + 424;
	// bl 0x8233e028
	ctx.lr = 0x82B56750;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82B56768;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r29,r1,312
	ctx.r29.s64 = ctx.r1.s64 + 312;
	// stfs f30,220(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x8233e028
	ctx.lr = 0x82B56794;
	sub_8233E028(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// bl 0x8244fa60
	ctx.lr = 0x82B567B0;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// addi r29,r1,392
	ctx.r29.s64 = ctx.r1.s64 + 392;
	// bl 0x8233e028
	ctx.lr = 0x82B567CC;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82B567E4;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r29,r1,328
	ctx.r29.s64 = ctx.r1.s64 + 328;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x8233e028
	ctx.lr = 0x82B56810;
	sub_8233E028(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x8244fa60
	ctx.lr = 0x82B5682C;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// addi r29,r1,456
	ctx.r29.s64 = ctx.r1.s64 + 456;
	// bl 0x8233e028
	ctx.lr = 0x82B56848;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82B56860;
	sub_8244FC30(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r29,r1,344
	ctx.r29.s64 = ctx.r1.s64 + 344;
	// bl 0x8233e028
	ctx.lr = 0x82B5688C;
	sub_8233E028(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// bl 0x8244fa60
	ctx.lr = 0x82B568A8;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r29,r1,408
	ctx.r29.s64 = ctx.r1.s64 + 408;
	// bl 0x8233e028
	ctx.lr = 0x82B568C4;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82B568DC;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r29,r1,360
	ctx.r29.s64 = ctx.r1.s64 + 360;
	// bl 0x8233e028
	ctx.lr = 0x82B568F8;
	sub_8233E028(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fd80
	ctx.lr = 0x82B56910;
	sub_8244FD80(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// addi r17,r1,440
	ctx.r17.s64 = ctx.r1.s64 + 440;
	// bl 0x8233e028
	ctx.lr = 0x82B5692C;
	sub_8233E028(ctx, base);
	// ld r29,464(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// ld r28,472(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r17)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r17.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fa60
	ctx.lr = 0x82B56950;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// addi r17,r1,376
	ctx.r17.s64 = ctx.r1.s64 + 376;
	// bl 0x8233e028
	ctx.lr = 0x82B5696C;
	sub_8233E028(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r17)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r17.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fa60
	ctx.lr = 0x82B56988;
	sub_8244FA60(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r29,r1,296
	ctx.r29.s64 = ctx.r1.s64 + 296;
	// bl 0x8233e028
	ctx.lr = 0x82B569A4;
	sub_8233E028(ctx, base);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fc30
	ctx.lr = 0x82B569BC;
	sub_8244FC30(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B569C4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82299080
	ctx.lr = 0x82B569CC;
	sub_82299080(ctx, base);
	// b 0x82b569d4
	goto loc_82B569D4;
loc_82B569D0:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B569D4:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// addi r7,r10,44
	ctx.r7.s64 = ctx.r10.s64 + 44;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// blt cr6,0x82b56314
	if (ctx.cr6.lt) goto loc_82B56314;
loc_82B569FC:
	// bl 0x8244f340
	ctx.lr = 0x82B56A00;
	sub_8244F340(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8265a230
	ctx.lr = 0x82B56A08;
	sub_8265A230(ctx, base);
loc_82B56A08:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b24
	ctx.lr = 0x82B56A14;
	__restfpr_24(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B56A18"))) PPC_WEAK_FUNC(sub_82B56A18);
PPC_FUNC_IMPL(__imp__sub_82B56A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82B56A20;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// bl 0x829d99e0
	ctx.lr = 0x82B56A4C;
	sub_829D99E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b56a60
	if (ctx.cr6.eq) goto loc_82B56A60;
	// lbz r11,649(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b570bc
	if (!ctx.cr6.eq) goto loc_82B570BC;
loc_82B56A60:
	// lwz r11,988(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56a78
	if (ctx.cr6.eq) goto loc_82B56A78;
	// lwz r11,768(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b56a8c
	if (!ctx.cr6.eq) goto loc_82B56A8C;
loc_82B56A78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56A8C:
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// bl 0x829211b0
	ctx.lr = 0x82B56AB8;
	sub_829211B0(ctx, base);
	// lwz r11,712(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 712);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x8268eb80
	ctx.lr = 0x82B56AD0;
	sub_8268EB80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8268ee88
	ctx.lr = 0x82B56ADC;
	sub_8268EE88(ctx, base);
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f31,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82B56AF8;
	sub_82CB1160(ctx, base);
	// addi r4,r28,304
	ctx.r4.s64 = ctx.r28.s64 + 304;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B56B08;
	sub_82CB1160(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,988(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 988);
	// lfs f13,968(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 968);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r11,-28860
	ctx.r30.s64 = ctx.r11.s64 + -28860;
	// lfs f12,972(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 972);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lfs f0,-3584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -3584);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r9,220(r1)
	PPC_STORE_U64(ctx.r1.u32 + 220, ctx.r9.u64);
	// lwz r21,168(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,60(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,128(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b56bcc
	if (!ctx.cr6.gt) goto loc_82B56BCC;
loc_82B56B5C:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lwz r10,848(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 848);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b56bb0
	if (!ctx.cr6.lt) goto loc_82B56BB0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,844(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 844);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 5;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// subf r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	// sraw r11,r4,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b56bb0
	if (!ctx.cr6.eq) goto loc_82B56BB0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x822ab8c0
	ctx.lr = 0x82B56BAC;
	sub_822AB8C0(ctx, base);
	// lwz r21,168(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_82B56BB0:
	// lwz r11,60(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82b56b5c
	if (ctx.cr6.lt) goto loc_82B56B5C;
loc_82B56BCC:
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// addi r20,r11,-21884
	ctx.r20.s64 = ctx.r11.s64 + -21884;
	// lwz r11,25224(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56c60
	if (ctx.cr6.eq) goto loc_82B56C60;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295070
	ctx.lr = 0x82B56BF8;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56c1c
	if (ctx.cr6.eq) goto loc_82B56C1C;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r9,r10,29416
	ctx.r9.s64 = ctx.r10.s64 + 29416;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82b573b0
	ctx.lr = 0x82B56C1C;
	sub_82B573B0(ctx, base);
loc_82B56C1C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56d1c
	if (ctx.cr6.eq) goto loc_82B56D1C;
	// lwsync 
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r25,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r25.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82B56C5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82b56d1c
	goto loc_82B56D1C;
loc_82B56C60:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,29416
	ctx.r10.s64 = ctx.r11.s64 + 29416;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// bl 0x82b573b0
	ctx.lr = 0x82B56C78;
	sub_82B573B0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82b57110
	ctx.lr = 0x82B56C80;
	sub_82B57110(ctx, base);
	// lwz r31,420(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b56cb4
	if (ctx.cr6.eq) goto loc_82B56CB4;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56ca0
	if (!ctx.cr6.eq) goto loc_82B56CA0;
	// bl 0x822900a0
	ctx.lr = 0x82B56C9C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B56CA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56CB4:
	// lwz r31,408(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b56ce8
	if (ctx.cr6.eq) goto loc_82B56CE8;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56cd4
	if (!ctx.cr6.eq) goto loc_82B56CD4;
	// bl 0x822900a0
	ctx.lr = 0x82B56CD0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B56CD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56CE8:
	// lwz r31,396(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b56d1c
	if (ctx.cr6.eq) goto loc_82B56D1C;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56d08
	if (!ctx.cr6.eq) goto loc_82B56D08;
	// bl 0x822900a0
	ctx.lr = 0x82B56D04;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B56D08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56D1C:
	// lwz r11,768(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 768);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,744(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r27,180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f12,748(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 748);
	ctx.f12.f64 = double(temp.f32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r23,172(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// std r10,220(r1)
	PPC_STORE_U64(ctx.r1.u32 + 220, ctx.r10.u64);
	// beq cr6,0x82b56da8
	if (ctx.cr6.eq) goto loc_82B56DA8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// beq cr6,0x82b56da8
	if (ctx.cr6.eq) goto loc_82B56DA8;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56d84
	if (!ctx.cr6.eq) goto loc_82B56D84;
	// bl 0x822900a0
	ctx.lr = 0x82B56D80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B56D84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
loc_82B56DA8:
	// lwz r11,60(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82b56eac
	if (!ctx.cr6.gt) goto loc_82B56EAC;
loc_82B56DC0:
	// srawi r11,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 5;
	// lwz r10,848(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 848);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b56e04
	if (!ctx.cr6.lt) goto loc_82B56E04;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,844(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 844);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 5;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// subf r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	// sraw r11,r4,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b56e88
	if (ctx.cr6.eq) goto loc_82B56E88;
loc_82B56E04:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82b56e74
	if (!ctx.cr6.gt) goto loc_82B56E74;
	// addi r10,r26,32
	ctx.r10.s64 = ctx.r26.s64 + 32;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r27,r8,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x82b56e38
	if (!ctx.cr6.eq) goto loc_82B56E38;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b56e78
	if (ctx.cr6.eq) goto loc_82B56E78;
loc_82B56E38:
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56e50
	if (!ctx.cr6.eq) goto loc_82B56E50;
	// bl 0x822900a0
	ctx.lr = 0x82B56E4C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B56E50:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82b56e78
	goto loc_82B56E78;
loc_82B56E74:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82B56E78:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b56e88
	if (ctx.cr0.eq) goto loc_82B56E88;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82B56E88:
	// lwz r11,60(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82b56dc0
	if (ctx.cr6.lt) goto loc_82B56DC0;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
loc_82B56EAC:
	// lwz r11,25224(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56f30
	if (ctx.cr6.eq) goto loc_82B56F30;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295070
	ctx.lr = 0x82B56EC8;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b56eec
	if (ctx.cr6.eq) goto loc_82B56EEC;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r9,r10,29428
	ctx.r9.s64 = ctx.r10.s64 + 29428;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82b573b0
	ctx.lr = 0x82B56EEC;
	sub_82B573B0(ctx, base);
loc_82B56EEC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b57024
	if (ctx.cr6.eq) goto loc_82B57024;
	// lwsync 
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r25,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r25.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82B56F2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82b57024
	goto loc_82B57024;
loc_82B56F30:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,29428
	ctx.r10.s64 = ctx.r11.s64 + 29428;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// bl 0x82b573b0
	ctx.lr = 0x82B56F48;
	sub_82B573B0(ctx, base);
	// addi r11,r1,444
	ctx.r11.s64 = ctx.r1.s64 + 444;
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// lfs f2,440(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f2.f64 = double(temp.f32);
	// addi r31,r1,464
	ctx.r31.s64 = ctx.r1.s64 + 464;
	// lwz r9,432(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// addi r8,r1,420
	ctx.r8.s64 = ctx.r1.s64 + 420;
	// lfs f1,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,408
	ctx.r7.s64 = ctx.r1.s64 + 408;
	// lwz r5,392(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82686bd8
	ctx.lr = 0x82B56F88;
	sub_82686BD8(ctx, base);
	// lwz r31,420(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b56fbc
	if (ctx.cr6.eq) goto loc_82B56FBC;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56fa8
	if (!ctx.cr6.eq) goto loc_82B56FA8;
	// bl 0x822900a0
	ctx.lr = 0x82B56FA4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B56FA8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56FBC:
	// lwz r31,408(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b56ff0
	if (ctx.cr6.eq) goto loc_82B56FF0;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b56fdc
	if (!ctx.cr6.eq) goto loc_82B56FDC;
	// bl 0x822900a0
	ctx.lr = 0x82B56FD8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B56FDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B56FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B56FF0:
	// lwz r31,396(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b57024
	if (ctx.cr6.eq) goto loc_82B57024;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b57010
	if (!ctx.cr6.eq) goto loc_82B57010;
	// bl 0x822900a0
	ctx.lr = 0x82B5700C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B57010:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57024:
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b57058
	if (ctx.cr6.eq) goto loc_82B57058;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b57044
	if (!ctx.cr6.eq) goto loc_82B57044;
	// bl 0x822900a0
	ctx.lr = 0x82B57040;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B57044:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57058:
	// lwz r31,184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b5708c
	if (ctx.cr6.eq) goto loc_82B5708C;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b57078
	if (!ctx.cr6.eq) goto loc_82B57078;
	// bl 0x822900a0
	ctx.lr = 0x82B57074;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B57078:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5708C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5708C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82b570bc
	if (ctx.cr6.eq) goto loc_82B570BC;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b570a8
	if (!ctx.cr6.eq) goto loc_82B570A8;
	// bl 0x822900a0
	ctx.lr = 0x82B570A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82B570A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B570BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B570BC:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B570CC"))) PPC_WEAK_FUNC(sub_82B570CC);
PPC_FUNC_IMPL(__imp__sub_82B570CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B570D0"))) PPC_WEAK_FUNC(sub_82B570D0);
PPC_FUNC_IMPL(__imp__sub_82B570D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,29416
	ctx.r10.s64 = ctx.r11.s64 + 29416;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82b573b0
	ctx.lr = 0x82B570F8;
	sub_82B573B0(ctx, base);
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

__attribute__((alias("__imp__sub_82B57110"))) PPC_WEAK_FUNC(sub_82B57110);
PPC_FUNC_IMPL(__imp__sub_82B57110) {
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
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// lfs f2,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r8,r3,52
	ctx.r8.s64 = ctx.r3.s64 + 52;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r3,40
	ctx.r7.s64 = ctx.r3.s64 + 40;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r3,28
	ctx.r6.s64 = ctx.r3.s64 + 28;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82686bd8
	ctx.lr = 0x82B57160;
	sub_82686BD8(ctx, base);
	// li r3,224
	ctx.r3.s64 = 224;
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

__attribute__((alias("__imp__sub_82B57178"))) PPC_WEAK_FUNC(sub_82B57178);
PPC_FUNC_IMPL(__imp__sub_82B57178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,29080
	ctx.r3.s64 = ctx.r11.s64 + 29080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57184"))) PPC_WEAK_FUNC(sub_82B57184);
PPC_FUNC_IMPL(__imp__sub_82B57184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57188"))) PPC_WEAK_FUNC(sub_82B57188);
PPC_FUNC_IMPL(__imp__sub_82B57188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,29428
	ctx.r10.s64 = ctx.r11.s64 + 29428;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82b573b0
	ctx.lr = 0x82B571B0;
	sub_82B573B0(ctx, base);
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

__attribute__((alias("__imp__sub_82B571C8"))) PPC_WEAK_FUNC(sub_82B571C8);
PPC_FUNC_IMPL(__imp__sub_82B571C8) {
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
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// lfs f2,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r8,r3,52
	ctx.r8.s64 = ctx.r3.s64 + 52;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r3,40
	ctx.r7.s64 = ctx.r3.s64 + 40;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r3,28
	ctx.r6.s64 = ctx.r3.s64 + 28;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82686bd8
	ctx.lr = 0x82B57218;
	sub_82686BD8(ctx, base);
	// li r3,224
	ctx.r3.s64 = 224;
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

__attribute__((alias("__imp__sub_82B57230"))) PPC_WEAK_FUNC(sub_82B57230);
PPC_FUNC_IMPL(__imp__sub_82B57230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,29132
	ctx.r3.s64 = ctx.r11.s64 + 29132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5723C"))) PPC_WEAK_FUNC(sub_82B5723C);
PPC_FUNC_IMPL(__imp__sub_82B5723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57240"))) PPC_WEAK_FUNC(sub_82B57240);
PPC_FUNC_IMPL(__imp__sub_82B57240) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
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
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5726C"))) PPC_WEAK_FUNC(sub_82B5726C);
PPC_FUNC_IMPL(__imp__sub_82B5726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57270"))) PPC_WEAK_FUNC(sub_82B57270);
PPC_FUNC_IMPL(__imp__sub_82B57270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8268edf8
	ctx.lr = 0x82B5728C;
	sub_8268EDF8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8268eb10
	ctx.lr = 0x82B57294;
	sub_8268EB10(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822b41e8
	ctx.lr = 0x82B5729C;
	sub_822B41E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B572B0"))) PPC_WEAK_FUNC(sub_82B572B0);
PPC_FUNC_IMPL(__imp__sub_82B572B0) {
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
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8268edf8
	ctx.lr = 0x82B572D4;
	sub_8268EDF8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8268eb10
	ctx.lr = 0x82B572DC;
	sub_8268EB10(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822b41e8
	ctx.lr = 0x82B572E4;
	sub_822B41E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82B57308"))) PPC_WEAK_FUNC(sub_82B57308);
PPC_FUNC_IMPL(__imp__sub_82B57308) {
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
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8268edf8
	ctx.lr = 0x82B5732C;
	sub_8268EDF8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8268eb10
	ctx.lr = 0x82B57334;
	sub_8268EB10(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822b41e8
	ctx.lr = 0x82B5733C;
	sub_822B41E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82B57360"))) PPC_WEAK_FUNC(sub_82B57360);
PPC_FUNC_IMPL(__imp__sub_82B57360) {
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
	// bl 0x82b572b0
	ctx.lr = 0x82B57380;
	sub_82B572B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b57398
	if (ctx.cr6.eq) goto loc_82B57398;
	// bl 0x82294a58
	ctx.lr = 0x82B57394;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B57398:
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

__attribute__((alias("__imp__sub_82B573B0"))) PPC_WEAK_FUNC(sub_82B573B0);
PPC_FUNC_IMPL(__imp__sub_82B573B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x8230d940
	ctx.lr = 0x82B573F0;
	sub_8230D940(ctx, base);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8268ea40
	ctx.lr = 0x82B573FC;
	sub_8268EA40(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8268ed10
	ctx.lr = 0x82B57408;
	sub_8268ED10(ctx, base);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82B57440;
	sub_82CB1160(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82B57450;
	sub_82CB1160(ctx, base);
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

__attribute__((alias("__imp__sub_82B5746C"))) PPC_WEAK_FUNC(sub_82B5746C);
PPC_FUNC_IMPL(__imp__sub_82B5746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57470"))) PPC_WEAK_FUNC(sub_82B57470);
PPC_FUNC_IMPL(__imp__sub_82B57470) {
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
	// bl 0x82b57308
	ctx.lr = 0x82B57490;
	sub_82B57308(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b574a8
	if (ctx.cr6.eq) goto loc_82B574A8;
	// bl 0x82294a58
	ctx.lr = 0x82B574A4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B574A8:
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

__attribute__((alias("__imp__sub_82B574C0"))) PPC_WEAK_FUNC(sub_82B574C0);
PPC_FUNC_IMPL(__imp__sub_82B574C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B574C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b575f0
	if (ctx.cr6.eq) goto loc_82B575F0;
	// lwz r11,988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b575f0
	if (ctx.cr6.eq) goto loc_82B575F0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B574EC:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82b575f0
	if (!ctx.cr6.eq) goto loc_82B575F0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b574ec
	if (!ctx.cr6.eq) goto loc_82B574EC;
	// bl 0x829211b0
	ctx.lr = 0x82B5750C;
	sub_829211B0(ctx, base);
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r11,-21884
	ctx.r29.s64 = ctx.r11.s64 + -21884;
	// lwz r11,25224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25224);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b5756c
	if (ctx.cr6.eq) goto loc_82B5756C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82295070
	ctx.lr = 0x82B57540;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b57560
	if (ctx.cr6.eq) goto loc_82B57560;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,29440
	ctx.r8.s64 = ctx.r9.s64 + 29440;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
loc_82B57560:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82294fd8
	ctx.lr = 0x82B57568;
	sub_82294FD8(ctx, base);
	// b 0x82b57584
	goto loc_82B57584;
loc_82B5756C:
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r9,r10,29440
	ctx.r9.s64 = ctx.r10.s64 + 29440;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// std r11,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r11.u64);
	// bl 0x82b57620
	ctx.lr = 0x82B57584;
	sub_82B57620(ctx, base);
loc_82B57584:
	// lwz r10,768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,25224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82b575d8
	if (ctx.cr6.eq) goto loc_82B575D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82295070
	ctx.lr = 0x82B575A8;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b575c8
	if (ctx.cr6.eq) goto loc_82B575C8;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r8,r9,29452
	ctx.r8.s64 = ctx.r9.s64 + 29452;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
loc_82B575C8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82294fd8
	ctx.lr = 0x82B575D0;
	sub_82294FD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B575D8:
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r9,r10,29452
	ctx.r9.s64 = ctx.r10.s64 + 29452;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// std r11,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r11.u64);
	// bl 0x82b576b0
	ctx.lr = 0x82B575F0;
	sub_82B576B0(ctx, base);
loc_82B575F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B575F8"))) PPC_WEAK_FUNC(sub_82B575F8);
PPC_FUNC_IMPL(__imp__sub_82B575F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r7,r9,29440
	ctx.r7.s64 = ctx.r9.s64 + 29440;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5761C"))) PPC_WEAK_FUNC(sub_82B5761C);
PPC_FUNC_IMPL(__imp__sub_82B5761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57620"))) PPC_WEAK_FUNC(sub_82B57620);
PPC_FUNC_IMPL(__imp__sub_82B57620) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8268e9c0
	ctx.lr = 0x82B57648;
	sub_8268E9C0(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r3,12
	ctx.r3.s64 = 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82B57678"))) PPC_WEAK_FUNC(sub_82B57678);
PPC_FUNC_IMPL(__imp__sub_82B57678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,29188
	ctx.r3.s64 = ctx.r11.s64 + 29188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57684"))) PPC_WEAK_FUNC(sub_82B57684);
PPC_FUNC_IMPL(__imp__sub_82B57684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57688"))) PPC_WEAK_FUNC(sub_82B57688);
PPC_FUNC_IMPL(__imp__sub_82B57688) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r7,r9,29452
	ctx.r7.s64 = ctx.r9.s64 + 29452;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B576AC"))) PPC_WEAK_FUNC(sub_82B576AC);
PPC_FUNC_IMPL(__imp__sub_82B576AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B576B0"))) PPC_WEAK_FUNC(sub_82B576B0);
PPC_FUNC_IMPL(__imp__sub_82B576B0) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8268e9c0
	ctx.lr = 0x82B576D8;
	sub_8268E9C0(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r3,12
	ctx.r3.s64 = 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82B57708"))) PPC_WEAK_FUNC(sub_82B57708);
PPC_FUNC_IMPL(__imp__sub_82B57708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,29240
	ctx.r3.s64 = ctx.r11.s64 + 29240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57714"))) PPC_WEAK_FUNC(sub_82B57714);
PPC_FUNC_IMPL(__imp__sub_82B57714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57718"))) PPC_WEAK_FUNC(sub_82B57718);
PPC_FUNC_IMPL(__imp__sub_82B57718) {
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

__attribute__((alias("__imp__sub_82B57728"))) PPC_WEAK_FUNC(sub_82B57728);
PPC_FUNC_IMPL(__imp__sub_82B57728) {
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

__attribute__((alias("__imp__sub_82B57738"))) PPC_WEAK_FUNC(sub_82B57738);
PPC_FUNC_IMPL(__imp__sub_82B57738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82b5776c
	if (ctx.cr6.eq) goto loc_82B5776C;
	// bl 0x82294a58
	ctx.lr = 0x82B57768;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5776C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57780"))) PPC_WEAK_FUNC(sub_82B57780);
PPC_FUNC_IMPL(__imp__sub_82B57780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82b577b4
	if (ctx.cr6.eq) goto loc_82B577B4;
	// bl 0x82294a58
	ctx.lr = 0x82B577B0;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B577B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B577C8"))) PPC_WEAK_FUNC(sub_82B577C8);
PPC_FUNC_IMPL(__imp__sub_82B577C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B577D0"))) PPC_WEAK_FUNC(sub_82B577D0);
PPC_FUNC_IMPL(__imp__sub_82B577D0) {
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
	// beq cr6,0x82b57854
	if (ctx.cr6.eq) goto loc_82B57854;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b57854
	if (!ctx.cr6.gt) goto loc_82B57854;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82b57824
	if (!ctx.cr6.gt) goto loc_82B57824;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x82B57824;
	sub_82294520(ctx, base);
loc_82B57824:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82bea998
	ctx.lr = 0x82B57844;
	sub_82BEA998(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82B57854:
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

__attribute__((alias("__imp__sub_82B57870"))) PPC_WEAK_FUNC(sub_82B57870);
PPC_FUNC_IMPL(__imp__sub_82B57870) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r5,r10,44
	ctx.r5.s64 = ctx.r10.s64 * 44;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r4,r9,44
	ctx.r4.s64 = ctx.r9.s64 * 44;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B578B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b57964
	if (!ctx.cr6.eq) goto loc_82B57964;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,455
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 455, ctx.xer);
	// blt cr6,0x82b57964
	if (ctx.cr6.lt) goto loc_82B57964;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// blt cr6,0x82b57964
	if (ctx.cr6.lt) goto loc_82B57964;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b57970
	if (ctx.cr6.eq) goto loc_82B57970;
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
	ctx.lr = 0x82B578FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82b5792c
	if (ctx.cr6.eq) goto loc_82B5792C;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82B57928;
	sub_82294520(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B5792C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B57940;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r5,r10,44
	ctx.r5.s64 = ctx.r10.s64 * 44;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B57960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b57970
	goto loc_82B57970;
loc_82B57964:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b58100
	ctx.lr = 0x82B57970;
	sub_82B58100(ctx, base);
loc_82B57970:
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

__attribute__((alias("__imp__sub_82B57988"))) PPC_WEAK_FUNC(sub_82B57988);
PPC_FUNC_IMPL(__imp__sub_82B57988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B57990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B579AC;
	sub_82294AC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 * 44;
	// mulli r10,r29,44
	ctx.r10.s64 = ctx.r29.s64 * 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82B579C8;
	sub_82E640B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B579D4"))) PPC_WEAK_FUNC(sub_82B579D4);
PPC_FUNC_IMPL(__imp__sub_82B579D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B579D8"))) PPC_WEAK_FUNC(sub_82B579D8);
PPC_FUNC_IMPL(__imp__sub_82B579D8) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B57A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b57ae4
	if (!ctx.cr6.eq) goto loc_82B57AE4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,455
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 455, ctx.xer);
	// blt cr6,0x82b57ae4
	if (ctx.cr6.lt) goto loc_82B57AE4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// blt cr6,0x82b57ae4
	if (ctx.cr6.lt) goto loc_82B57AE4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b57af0
	if (ctx.cr6.eq) goto loc_82B57AF0;
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
	ctx.lr = 0x82B57A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82b57aa4
	if (ctx.cr6.eq) goto loc_82B57AA4;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82B57AA0;
	sub_82294520(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B57AA4:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B57AB8;
	sub_82294AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B57AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b57af0
	goto loc_82B57AF0;
loc_82B57AE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b58270
	ctx.lr = 0x82B57AF0;
	sub_82B58270(ctx, base);
loc_82B57AF0:
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

__attribute__((alias("__imp__sub_82B57B08"))) PPC_WEAK_FUNC(sub_82B57B08);
PPC_FUNC_IMPL(__imp__sub_82B57B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B57B10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B57B2C;
	sub_82294AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82B57B58;
	sub_82E640B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B57B64"))) PPC_WEAK_FUNC(sub_82B57B64);
PPC_FUNC_IMPL(__imp__sub_82B57B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57B68"))) PPC_WEAK_FUNC(sub_82B57B68);
PPC_FUNC_IMPL(__imp__sub_82B57B68) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B57BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b57c74
	if (!ctx.cr6.eq) goto loc_82B57C74;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,455
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 455, ctx.xer);
	// blt cr6,0x82b57c74
	if (ctx.cr6.lt) goto loc_82B57C74;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// blt cr6,0x82b57c74
	if (ctx.cr6.lt) goto loc_82B57C74;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b57c80
	if (ctx.cr6.eq) goto loc_82B57C80;
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
	ctx.lr = 0x82B57C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82b57c34
	if (ctx.cr6.eq) goto loc_82B57C34;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82B57C30;
	sub_82294520(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B57C34:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B57C48;
	sub_82294AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B57C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b57c80
	goto loc_82B57C80;
loc_82B57C74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b58408
	ctx.lr = 0x82B57C80;
	sub_82B58408(ctx, base);
loc_82B57C80:
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

__attribute__((alias("__imp__sub_82B57C98"))) PPC_WEAK_FUNC(sub_82B57C98);
PPC_FUNC_IMPL(__imp__sub_82B57C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B57CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B57CBC;
	sub_82294AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82B57CE8;
	sub_82E640B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B57CF4"))) PPC_WEAK_FUNC(sub_82B57CF4);
PPC_FUNC_IMPL(__imp__sub_82B57CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57CF8"))) PPC_WEAK_FUNC(sub_82B57CF8);
PPC_FUNC_IMPL(__imp__sub_82B57CF8) {
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

__attribute__((alias("__imp__sub_82B57D0C"))) PPC_WEAK_FUNC(sub_82B57D0C);
PPC_FUNC_IMPL(__imp__sub_82B57D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57D10"))) PPC_WEAK_FUNC(sub_82B57D10);
PPC_FUNC_IMPL(__imp__sub_82B57D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B57D18;
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
	// beq cr6,0x82b57d58
	if (ctx.cr6.eq) goto loc_82B57D58;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b57d44
	if (!ctx.cr6.eq) goto loc_82B57D44;
	// bl 0x822900a0
	ctx.lr = 0x82B57D40;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B57D44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57D58:
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

__attribute__((alias("__imp__sub_82B57D70"))) PPC_WEAK_FUNC(sub_82B57D70);
PPC_FUNC_IMPL(__imp__sub_82B57D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57D80"))) PPC_WEAK_FUNC(sub_82B57D80);
PPC_FUNC_IMPL(__imp__sub_82B57D80) {
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

__attribute__((alias("__imp__sub_82B57DA4"))) PPC_WEAK_FUNC(sub_82B57DA4);
PPC_FUNC_IMPL(__imp__sub_82B57DA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57DA8"))) PPC_WEAK_FUNC(sub_82B57DA8);
PPC_FUNC_IMPL(__imp__sub_82B57DA8) {
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
	ctx.lr = 0x82B57DD8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b57df0
	if (ctx.cr0.eq) goto loc_82B57DF0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82B57DF0:
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

__attribute__((alias("__imp__sub_82B57E10"))) PPC_WEAK_FUNC(sub_82B57E10);
PPC_FUNC_IMPL(__imp__sub_82B57E10) {
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

__attribute__((alias("__imp__sub_82B57E24"))) PPC_WEAK_FUNC(sub_82B57E24);
PPC_FUNC_IMPL(__imp__sub_82B57E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57E28"))) PPC_WEAK_FUNC(sub_82B57E28);
PPC_FUNC_IMPL(__imp__sub_82B57E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b585b0
	ctx.lr = 0x82B57E48;
	sub_82B585B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b57e58
	if (ctx.cr6.eq) goto loc_82B57E58;
	// bl 0x82294a58
	ctx.lr = 0x82B57E58;
	sub_82294A58(ctx, base);
loc_82B57E58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57E7C"))) PPC_WEAK_FUNC(sub_82B57E7C);
PPC_FUNC_IMPL(__imp__sub_82B57E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57E80"))) PPC_WEAK_FUNC(sub_82B57E80);
PPC_FUNC_IMPL(__imp__sub_82B57E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57E90"))) PPC_WEAK_FUNC(sub_82B57E90);
PPC_FUNC_IMPL(__imp__sub_82B57E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57EA0"))) PPC_WEAK_FUNC(sub_82B57EA0);
PPC_FUNC_IMPL(__imp__sub_82B57EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 * 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57EAC"))) PPC_WEAK_FUNC(sub_82B57EAC);
PPC_FUNC_IMPL(__imp__sub_82B57EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57EB0"))) PPC_WEAK_FUNC(sub_82B57EB0);
PPC_FUNC_IMPL(__imp__sub_82B57EB0) {
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

__attribute__((alias("__imp__sub_82B57EC4"))) PPC_WEAK_FUNC(sub_82B57EC4);
PPC_FUNC_IMPL(__imp__sub_82B57EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57EC8"))) PPC_WEAK_FUNC(sub_82B57EC8);
PPC_FUNC_IMPL(__imp__sub_82B57EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82B57ED0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b57f94
	if (!ctx.cr6.gt) goto loc_82B57F94;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82B57EF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r30,436(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b57f34
	if (ctx.cr6.eq) goto loc_82B57F34;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b57f20
	if (!ctx.cr6.eq) goto loc_82B57F20;
	// bl 0x822900a0
	ctx.lr = 0x82B57F1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B57F20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57F34:
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// stw r29,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b57f74
	if (ctx.cr6.eq) goto loc_82B57F74;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b57f60
	if (!ctx.cr6.eq) goto loc_82B57F60;
	// bl 0x822900a0
	ctx.lr = 0x82B57F5C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B57F60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57F74:
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// addi r28,r28,464
	ctx.r28.s64 = ctx.r28.s64 + 464;
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b57ef4
	if (ctx.cr6.lt) goto loc_82B57EF4;
loc_82B57F94:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b57fc8
	if (ctx.cr6.eq) goto loc_82B57FC8;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b57fb4
	if (!ctx.cr6.eq) goto loc_82B57FB4;
	// bl 0x822900a0
	ctx.lr = 0x82B57FB0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B57FB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B57FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B57FC8:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B57FDC"))) PPC_WEAK_FUNC(sub_82B57FDC);
PPC_FUNC_IMPL(__imp__sub_82B57FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57FE0"))) PPC_WEAK_FUNC(sub_82B57FE0);
PPC_FUNC_IMPL(__imp__sub_82B57FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r3,r11,464
	ctx.r3.s64 = ctx.r11.s64 * 464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57FEC"))) PPC_WEAK_FUNC(sub_82B57FEC);
PPC_FUNC_IMPL(__imp__sub_82B57FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B57FF0"))) PPC_WEAK_FUNC(sub_82B57FF0);
PPC_FUNC_IMPL(__imp__sub_82B57FF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,464
	ctx.r10.s64 = ctx.r4.s64 * 464;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58000"))) PPC_WEAK_FUNC(sub_82B58000);
PPC_FUNC_IMPL(__imp__sub_82B58000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82B58008;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b580d0
	if (!ctx.cr6.gt) goto loc_82B580D0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
loc_82B58030:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r30,436(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b58070
	if (ctx.cr6.eq) goto loc_82B58070;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5805c
	if (!ctx.cr6.eq) goto loc_82B5805C;
	// bl 0x822900a0
	ctx.lr = 0x82B58058;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B5805C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B58070:
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// stw r29,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b580b0
	if (ctx.cr6.eq) goto loc_82B580B0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5809c
	if (!ctx.cr6.eq) goto loc_82B5809C;
	// bl 0x822900a0
	ctx.lr = 0x82B58098;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B5809C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B580B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B580B0:
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// addi r27,r27,464
	ctx.r27.s64 = ctx.r27.s64 + 464;
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b58030
	if (ctx.cr6.lt) goto loc_82B58030;
loc_82B580D0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82b580f4
	if (ctx.cr6.eq) goto loc_82B580F4;
	// stw r24,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,464
	ctx.r4.s64 = 464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x82B580F4;
	sub_82294520(ctx, base);
loc_82B580F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B580FC"))) PPC_WEAK_FUNC(sub_82B580FC);
PPC_FUNC_IMPL(__imp__sub_82B580FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58100"))) PPC_WEAK_FUNC(sub_82B58100);
PPC_FUNC_IMPL(__imp__sub_82B58100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82B58108;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r5,r10,44
	ctx.r5.s64 = ctx.r10.s64 * 44;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r4,r9,44
	ctx.r4.s64 = ctx.r9.s64 * 44;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B58138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b581e8
	if (ctx.cr6.eq) goto loc_82B581E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b58190
	if (ctx.cr6.eq) goto loc_82B58190;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82B5818C;
	sub_82294520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B58190:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b5822c
	if (!ctx.cr6.gt) goto loc_82B5822C;
loc_82B5819C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B581B4;
	sub_82294AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82b58c18
	ctx.lr = 0x82B581CC;
	sub_82B58C18(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b5819c
	if (ctx.cr6.lt) goto loc_82B5819C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82B581E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B581F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82b5822c
	if (!ctx.cr6.gt) goto loc_82B5822C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B58208:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82b58c18
	ctx.lr = 0x82B58218;
	sub_82B58C18(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b58208
	if (ctx.cr6.lt) goto loc_82B58208;
loc_82B5822C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B58238"))) PPC_WEAK_FUNC(sub_82B58238);
PPC_FUNC_IMPL(__imp__sub_82B58238) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mulli r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 * 44;
	// mulli r4,r8,44
	ctx.r4.s64 = ctx.r8.s64 * 44;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B58260"))) PPC_WEAK_FUNC(sub_82B58260);
PPC_FUNC_IMPL(__imp__sub_82B58260) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B58270"))) PPC_WEAK_FUNC(sub_82B58270);
PPC_FUNC_IMPL(__imp__sub_82B58270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82B58278;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B582B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82b58370
	if (ctx.cr6.eq) goto loc_82B58370;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B582E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b58310
	if (ctx.cr6.eq) goto loc_82B58310;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82B5830C;
	sub_82294520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B58310:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b583b4
	if (!ctx.cr6.gt) goto loc_82B583B4;
loc_82B5831C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B58334;
	sub_82294AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82b58b58
	ctx.lr = 0x82B58354;
	sub_82B58B58(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b5831c
	if (ctx.cr6.lt) goto loc_82B5831C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82B58370:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5837C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82b583b4
	if (!ctx.cr6.gt) goto loc_82B583B4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B58390:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82b58b58
	ctx.lr = 0x82B583A0;
	sub_82B58B58(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b58390
	if (ctx.cr6.lt) goto loc_82B58390;
loc_82B583B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B583C0"))) PPC_WEAK_FUNC(sub_82B583C0);
PPC_FUNC_IMPL(__imp__sub_82B583C0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B583F8"))) PPC_WEAK_FUNC(sub_82B583F8);
PPC_FUNC_IMPL(__imp__sub_82B583F8) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B58408"))) PPC_WEAK_FUNC(sub_82B58408);
PPC_FUNC_IMPL(__imp__sub_82B58408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82B58410;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B58450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82b58508
	if (ctx.cr6.eq) goto loc_82B58508;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b584a8
	if (ctx.cr6.eq) goto loc_82B584A8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82B584A4;
	sub_82294520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B584A8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b5854c
	if (!ctx.cr6.gt) goto loc_82B5854C;
loc_82B584B4:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B584CC;
	sub_82294AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82b58ad0
	ctx.lr = 0x82B584EC;
	sub_82B58AD0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b584b4
	if (ctx.cr6.lt) goto loc_82B584B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82B58508:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82b5854c
	if (!ctx.cr6.gt) goto loc_82B5854C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B58528:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82b58ad0
	ctx.lr = 0x82B58538;
	sub_82B58AD0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b58528
	if (ctx.cr6.lt) goto loc_82B58528;
loc_82B5854C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B58558"))) PPC_WEAK_FUNC(sub_82B58558);
PPC_FUNC_IMPL(__imp__sub_82B58558) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B58590"))) PPC_WEAK_FUNC(sub_82B58590);
PPC_FUNC_IMPL(__imp__sub_82B58590) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B585A0"))) PPC_WEAK_FUNC(sub_82B585A0);
PPC_FUNC_IMPL(__imp__sub_82B585A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B585B0"))) PPC_WEAK_FUNC(sub_82B585B0);
PPC_FUNC_IMPL(__imp__sub_82B585B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82B585B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82b586b8
	if (!ctx.cr6.gt) goto loc_82B586B8;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
loc_82B585DC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b586ac
	if (ctx.cr6.eq) goto loc_82B586AC;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b58608
	if (!ctx.cr6.eq) goto loc_82B58608;
	// bl 0x822900a0
	ctx.lr = 0x82B58604;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82B58608:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5861C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b58658
	if (ctx.cr6.eq) goto loc_82B58658;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b58644
	if (!ctx.cr6.eq) goto loc_82B58644;
	// bl 0x822900a0
	ctx.lr = 0x82B58640;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82B58644:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B58658:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b58698
	if (ctx.cr6.eq) goto loc_82B58698;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b58684
	if (!ctx.cr6.eq) goto loc_82B58684;
	// bl 0x822900a0
	ctx.lr = 0x82B58680;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82B58684:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B58698:
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// bl 0x82294a58
	ctx.lr = 0x82B586AC;
	sub_82294A58(ctx, base);
loc_82B586AC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82b585dc
	if (!ctx.cr0.eq) goto loc_82B585DC;
loc_82B586B8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d180
	ctx.lr = 0x82B586D0;
	sub_8232D180(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B586D8"))) PPC_WEAK_FUNC(sub_82B586D8);
PPC_FUNC_IMPL(__imp__sub_82B586D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B586DC"))) PPC_WEAK_FUNC(sub_82B586DC);
PPC_FUNC_IMPL(__imp__sub_82B586DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B586E0"))) PPC_WEAK_FUNC(sub_82B586E0);
PPC_FUNC_IMPL(__imp__sub_82B586E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82b58718
	ctx.lr = 0x82B586F8;
	sub_82B58718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B58700;
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

__attribute__((alias("__imp__sub_82B58718"))) PPC_WEAK_FUNC(sub_82B58718);
PPC_FUNC_IMPL(__imp__sub_82B58718) {
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
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82294a58
	ctx.lr = 0x82B5873C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x828c6540
	ctx.lr = 0x82B58750;
	sub_828C6540(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82b57d10
	ctx.lr = 0x82B58758;
	sub_82B57D10(ctx, base);
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

__attribute__((alias("__imp__sub_82B58770"))) PPC_WEAK_FUNC(sub_82B58770);
PPC_FUNC_IMPL(__imp__sub_82B58770) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822959a8
	ctx.lr = 0x82B58794;
	sub_822959A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82B587B0;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82B587DC"))) PPC_WEAK_FUNC(sub_82B587DC);
PPC_FUNC_IMPL(__imp__sub_82B587DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B587E0"))) PPC_WEAK_FUNC(sub_82B587E0);
PPC_FUNC_IMPL(__imp__sub_82B587E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r5,464
	ctx.r5.s64 = 464;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82B5880C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,464
	ctx.r10.s64 = ctx.r3.s64 * 464;
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

__attribute__((alias("__imp__sub_82B5882C"))) PPC_WEAK_FUNC(sub_82B5882C);
PPC_FUNC_IMPL(__imp__sub_82B5882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58830"))) PPC_WEAK_FUNC(sub_82B58830);
PPC_FUNC_IMPL(__imp__sub_82B58830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82b58a18
	if (ctx.cr6.lt) goto loc_82B58A18;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,248
	ctx.r5.s64 = 248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82B58868;
	sub_82CB16F0(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82B5886C:
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x82b589a8
	if (!ctx.cr6.gt) goto loc_82B589A8;
loc_82B58890:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r5,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82B588B4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82b588d8
	if (ctx.cr6.gt) goto loc_82B588D8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,208(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 208);
	// lwz r3,208(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82b588b4
	if (!ctx.cr6.gt) goto loc_82B588B4;
loc_82B588D8:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b588fc
	if (!ctx.cr6.gt) goto loc_82B588FC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,208(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 208);
	// lwz r3,208(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82b588d8
	if (ctx.cr6.gt) goto loc_82B588D8;
loc_82B588FC:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82b58918
	if (ctx.cr6.gt) goto loc_82B58918;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// b 0x82b588b4
	goto loc_82B588B4;
loc_82B58918:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r9,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// rlwinm r3,r3,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82b58970
	if (ctx.cr6.lt) goto loc_82B58970;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b58960
	if (!ctx.cr6.lt) goto loc_82B58960;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
loc_82B58960:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82b58a08
	if (!ctx.cr6.gt) goto loc_82B58A08;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82b58994
	goto loc_82B58994;
loc_82B58970:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82b58984
	if (!ctx.cr6.gt) goto loc_82B58984;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
loc_82B58984:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b58a08
	if (!ctx.cr6.lt) goto loc_82B58A08;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
loc_82B58994:
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bgt cr6,0x82b58890
	if (ctx.cr6.gt) goto loc_82B58890;
loc_82B589A8:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b58a08
	if (!ctx.cr6.gt) goto loc_82B58A08;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82B589B4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82b589ec
	if (ctx.cr6.gt) goto loc_82B589EC;
loc_82B589C4:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,208(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// lwz r5,208(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82b589e0
	if (!ctx.cr6.gt) goto loc_82B589E0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82B589E0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82b589c4
	if (!ctx.cr6.gt) goto loc_82B589C4;
loc_82B589EC:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b589b4
	if (ctx.cr6.gt) goto loc_82B589B4;
loc_82B58A08:
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b5886c
	if (!ctx.cr6.lt) goto loc_82B5886C;
loc_82B58A18:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58A28"))) PPC_WEAK_FUNC(sub_82B58A28);
PPC_FUNC_IMPL(__imp__sub_82B58A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82B58A54;
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

__attribute__((alias("__imp__sub_82B58A74"))) PPC_WEAK_FUNC(sub_82B58A74);
PPC_FUNC_IMPL(__imp__sub_82B58A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58A78"))) PPC_WEAK_FUNC(sub_82B58A78);
PPC_FUNC_IMPL(__imp__sub_82B58A78) {
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
	ctx.lr = 0x82B58AA8;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82B58ACC"))) PPC_WEAK_FUNC(sub_82B58ACC);
PPC_FUNC_IMPL(__imp__sub_82B58ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58AD0"))) PPC_WEAK_FUNC(sub_82B58AD0);
PPC_FUNC_IMPL(__imp__sub_82B58AD0) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B58B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B58B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82B58B54"))) PPC_WEAK_FUNC(sub_82B58B54);
PPC_FUNC_IMPL(__imp__sub_82B58B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58B58"))) PPC_WEAK_FUNC(sub_82B58B58);
PPC_FUNC_IMPL(__imp__sub_82B58B58) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B58BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B58BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B58BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82B58C14"))) PPC_WEAK_FUNC(sub_82B58C14);
PPC_FUNC_IMPL(__imp__sub_82B58C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58C18"))) PPC_WEAK_FUNC(sub_82B58C18);
PPC_FUNC_IMPL(__imp__sub_82B58C18) {
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
	// bl 0x82345368
	ctx.lr = 0x82B58C38;
	sub_82345368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x82345368
	ctx.lr = 0x82B58C44;
	sub_82345368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B58C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B58C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B58CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82B58CEC"))) PPC_WEAK_FUNC(sub_82B58CEC);
PPC_FUNC_IMPL(__imp__sub_82B58CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58CF0"))) PPC_WEAK_FUNC(sub_82B58CF0);
PPC_FUNC_IMPL(__imp__sub_82B58CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,56
	ctx.r10.s64 = ctx.r4.s64 * 56;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D00"))) PPC_WEAK_FUNC(sub_82B58D00);
PPC_FUNC_IMPL(__imp__sub_82B58D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D10"))) PPC_WEAK_FUNC(sub_82B58D10);
PPC_FUNC_IMPL(__imp__sub_82B58D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,124
	ctx.r10.s64 = ctx.r4.s64 * 124;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D20"))) PPC_WEAK_FUNC(sub_82B58D20);
PPC_FUNC_IMPL(__imp__sub_82B58D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D24"))) PPC_WEAK_FUNC(sub_82B58D24);
PPC_FUNC_IMPL(__imp__sub_82B58D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58D28"))) PPC_WEAK_FUNC(sub_82B58D28);
PPC_FUNC_IMPL(__imp__sub_82B58D28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82b58d40
	sub_82B58D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B58D34"))) PPC_WEAK_FUNC(sub_82B58D34);
PPC_FUNC_IMPL(__imp__sub_82B58D34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D38"))) PPC_WEAK_FUNC(sub_82B58D38);
PPC_FUNC_IMPL(__imp__sub_82B58D38) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D40"))) PPC_WEAK_FUNC(sub_82B58D40);
PPC_FUNC_IMPL(__imp__sub_82B58D40) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x82651ba8
	ctx.lr = 0x82B58D54;
	sub_82651BA8(ctx, base);
	// lis r3,-32224
	ctx.r3.s64 = -2111832064;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,29464
	ctx.r10.s64 = ctx.r3.s64 + 29464;
	// stw r11,800(r4)
	PPC_STORE_U32(ctx.r4.u32 + 800, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,804(r4)
	PPC_STORE_U32(ctx.r4.u32 + 804, ctx.r11.u32);
	// stw r11,808(r4)
	PPC_STORE_U32(ctx.r4.u32 + 808, ctx.r11.u32);
	// stw r11,812(r4)
	PPC_STORE_U32(ctx.r4.u32 + 812, ctx.r11.u32);
	// stw r11,816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 816, ctx.r11.u32);
	// stw r11,820(r4)
	PPC_STORE_U32(ctx.r4.u32 + 820, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58D90"))) PPC_WEAK_FUNC(sub_82B58D90);
PPC_FUNC_IMPL(__imp__sub_82B58D90) {
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
	// bl 0x82b58e00
	ctx.lr = 0x82B58DB0;
	sub_82B58E00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b58de4
	if (ctx.cr6.eq) goto loc_82B58DE4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b58ddc
	if (ctx.cr6.lt) goto loc_82B58DDC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b58de4
	if (!ctx.cr6.gt) goto loc_82B58DE4;
loc_82B58DDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82B58DE4;
	sub_82294A58(ctx, base);
loc_82B58DE4:
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

__attribute__((alias("__imp__sub_82B58E00"))) PPC_WEAK_FUNC(sub_82B58E00);
PPC_FUNC_IMPL(__imp__sub_82B58E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,29464
	ctx.r10.s64 = ctx.r11.s64 + 29464;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82B58E24;
	sub_8229C068(ctx, base);
	// addi r3,r31,956
	ctx.r3.s64 = ctx.r31.s64 + 956;
	// bl 0x82b59508
	ctx.lr = 0x82B58E2C;
	sub_82B59508(ctx, base);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x822b41e8
	ctx.lr = 0x82B58E34;
	sub_822B41E8(ctx, base);
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x82b59490
	ctx.lr = 0x82B58E3C;
	sub_82B59490(ctx, base);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x82b59418
	ctx.lr = 0x82B58E44;
	sub_82B59418(ctx, base);
	// addi r3,r31,908
	ctx.r3.s64 = ctx.r31.s64 + 908;
	// bl 0x82b59380
	ctx.lr = 0x82B58E4C;
	sub_82B59380(ctx, base);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x82b591e0
	ctx.lr = 0x82B58E54;
	sub_82B591E0(ctx, base);
	// addi r3,r31,884
	ctx.r3.s64 = ctx.r31.s64 + 884;
	// bl 0x82b590c0
	ctx.lr = 0x82B58E5C;
	sub_82B590C0(ctx, base);
	// addi r3,r31,872
	ctx.r3.s64 = ctx.r31.s64 + 872;
	// bl 0x822b41e8
	ctx.lr = 0x82B58E64;
	sub_822B41E8(ctx, base);
	// addi r3,r31,860
	ctx.r3.s64 = ctx.r31.s64 + 860;
	// bl 0x82b58ea8
	ctx.lr = 0x82B58E6C;
	sub_82B58EA8(ctx, base);
	// addi r3,r31,844
	ctx.r3.s64 = ctx.r31.s64 + 844;
	// bl 0x822b41e8
	ctx.lr = 0x82B58E74;
	sub_822B41E8(ctx, base);
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// bl 0x82295e20
	ctx.lr = 0x82B58E7C;
	sub_82295E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82697730
	ctx.lr = 0x82B58E84;
	sub_82697730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58E98"))) PPC_WEAK_FUNC(sub_82B58E98);
PPC_FUNC_IMPL(__imp__sub_82B58E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58E9C"))) PPC_WEAK_FUNC(sub_82B58E9C);
PPC_FUNC_IMPL(__imp__sub_82B58E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58EA0"))) PPC_WEAK_FUNC(sub_82B58EA0);
PPC_FUNC_IMPL(__imp__sub_82B58EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B58EA4"))) PPC_WEAK_FUNC(sub_82B58EA4);
PPC_FUNC_IMPL(__imp__sub_82B58EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58EA8"))) PPC_WEAK_FUNC(sub_82B58EA8);
PPC_FUNC_IMPL(__imp__sub_82B58EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82B58EB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b58f70
	if (!ctx.cr6.gt) goto loc_82B58F70;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82B58ED4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b58f10
	if (ctx.cr6.eq) goto loc_82B58F10;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b58efc
	if (!ctx.cr6.eq) goto loc_82B58EFC;
	// bl 0x822900a0
	ctx.lr = 0x82B58EF8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B58EFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B58F10:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b58f50
	if (ctx.cr6.eq) goto loc_82B58F50;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b58f3c
	if (!ctx.cr6.eq) goto loc_82B58F3C;
	// bl 0x822900a0
	ctx.lr = 0x82B58F38;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B58F3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B58F50:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r28,r28,124
	ctx.r28.s64 = ctx.r28.s64 + 124;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b58ed4
	if (ctx.cr6.lt) goto loc_82B58ED4;
loc_82B58F70:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b58fa4
	if (ctx.cr6.eq) goto loc_82B58FA4;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b58f90
	if (!ctx.cr6.eq) goto loc_82B58F90;
	// bl 0x822900a0
	ctx.lr = 0x82B58F8C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B58F90:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B58FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B58FA4:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B58FB8"))) PPC_WEAK_FUNC(sub_82B58FB8);
PPC_FUNC_IMPL(__imp__sub_82B58FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822b41e8
	ctx.lr = 0x82B58FD4;
	sub_822B41E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b59038
	ctx.lr = 0x82B58FDC;
	sub_82B59038(ctx, base);
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

__attribute__((alias("__imp__sub_82B58FF4"))) PPC_WEAK_FUNC(sub_82B58FF4);
PPC_FUNC_IMPL(__imp__sub_82B58FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B58FF8"))) PPC_WEAK_FUNC(sub_82B58FF8);
PPC_FUNC_IMPL(__imp__sub_82B58FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822b41e8
	ctx.lr = 0x82B59014;
	sub_822B41E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b59038
	ctx.lr = 0x82B5901C;
	sub_82B59038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B59030"))) PPC_WEAK_FUNC(sub_82B59030);
PPC_FUNC_IMPL(__imp__sub_82B59030) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b59038
	sub_82B59038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B59034"))) PPC_WEAK_FUNC(sub_82B59034);
PPC_FUNC_IMPL(__imp__sub_82B59034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59038"))) PPC_WEAK_FUNC(sub_82B59038);
PPC_FUNC_IMPL(__imp__sub_82B59038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B59040;
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
	// beq cr6,0x82b59080
	if (ctx.cr6.eq) goto loc_82B59080;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5906c
	if (!ctx.cr6.eq) goto loc_82B5906C;
	// bl 0x822900a0
	ctx.lr = 0x82B59068;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B5906C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B59080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B59080:
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

__attribute__((alias("__imp__sub_82B59098"))) PPC_WEAK_FUNC(sub_82B59098);
PPC_FUNC_IMPL(__imp__sub_82B59098) {
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

__attribute__((alias("__imp__sub_82B590A8"))) PPC_WEAK_FUNC(sub_82B590A8);
PPC_FUNC_IMPL(__imp__sub_82B590A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b58ea8
	sub_82B58EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B590AC"))) PPC_WEAK_FUNC(sub_82B590AC);
PPC_FUNC_IMPL(__imp__sub_82B590AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B590B0"))) PPC_WEAK_FUNC(sub_82B590B0);
PPC_FUNC_IMPL(__imp__sub_82B590B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B590B4"))) PPC_WEAK_FUNC(sub_82B590B4);
PPC_FUNC_IMPL(__imp__sub_82B590B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B590B8"))) PPC_WEAK_FUNC(sub_82B590B8);
PPC_FUNC_IMPL(__imp__sub_82B590B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B590BC"))) PPC_WEAK_FUNC(sub_82B590BC);
PPC_FUNC_IMPL(__imp__sub_82B590BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B590C0"))) PPC_WEAK_FUNC(sub_82B590C0);
PPC_FUNC_IMPL(__imp__sub_82B590C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82B590C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b59148
	if (!ctx.cr6.gt) goto loc_82B59148;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82B590EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b59128
	if (ctx.cr6.eq) goto loc_82B59128;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b59114
	if (!ctx.cr6.eq) goto loc_82B59114;
	// bl 0x822900a0
	ctx.lr = 0x82B59110;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B59114:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B59128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B59128:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b590ec
	if (ctx.cr6.lt) goto loc_82B590EC;
loc_82B59148:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b5917c
	if (ctx.cr6.eq) goto loc_82B5917C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b59168
	if (!ctx.cr6.eq) goto loc_82B59168;
	// bl 0x822900a0
	ctx.lr = 0x82B59164;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B59168:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5917C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B5917C:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B59190"))) PPC_WEAK_FUNC(sub_82B59190);
PPC_FUNC_IMPL(__imp__sub_82B59190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x822b41e8
	ctx.lr = 0x82B591A8;
	sub_822B41E8(ctx, base);
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

__attribute__((alias("__imp__sub_82B591C0"))) PPC_WEAK_FUNC(sub_82B591C0);
PPC_FUNC_IMPL(__imp__sub_82B591C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b41e8
	sub_822B41E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B591C4"))) PPC_WEAK_FUNC(sub_82B591C4);
PPC_FUNC_IMPL(__imp__sub_82B591C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B591C8"))) PPC_WEAK_FUNC(sub_82B591C8);
PPC_FUNC_IMPL(__imp__sub_82B591C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b590c0
	sub_82B590C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B591CC"))) PPC_WEAK_FUNC(sub_82B591CC);
PPC_FUNC_IMPL(__imp__sub_82B591CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B591D0"))) PPC_WEAK_FUNC(sub_82B591D0);
PPC_FUNC_IMPL(__imp__sub_82B591D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B591D4"))) PPC_WEAK_FUNC(sub_82B591D4);
PPC_FUNC_IMPL(__imp__sub_82B591D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B591D8"))) PPC_WEAK_FUNC(sub_82B591D8);
PPC_FUNC_IMPL(__imp__sub_82B591D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B591DC"))) PPC_WEAK_FUNC(sub_82B591DC);
PPC_FUNC_IMPL(__imp__sub_82B591DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B591E0"))) PPC_WEAK_FUNC(sub_82B591E0);
PPC_FUNC_IMPL(__imp__sub_82B591E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82B591E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b592a8
	if (!ctx.cr6.gt) goto loc_82B592A8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82B5920C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b59248
	if (ctx.cr6.eq) goto loc_82B59248;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b59234
	if (!ctx.cr6.eq) goto loc_82B59234;
	// bl 0x822900a0
	ctx.lr = 0x82B59230;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B59234:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B59248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B59248:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b59288
	if (ctx.cr6.eq) goto loc_82B59288;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b59274
	if (!ctx.cr6.eq) goto loc_82B59274;
	// bl 0x822900a0
	ctx.lr = 0x82B59270;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B59274:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B59288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B59288:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b5920c
	if (ctx.cr6.lt) goto loc_82B5920C;
loc_82B592A8:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b592dc
	if (ctx.cr6.eq) goto loc_82B592DC;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b592c8
	if (!ctx.cr6.eq) goto loc_82B592C8;
	// bl 0x822900a0
	ctx.lr = 0x82B592C4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82B592C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B592DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B592DC:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B592F0"))) PPC_WEAK_FUNC(sub_82B592F0);
PPC_FUNC_IMPL(__imp__sub_82B592F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822b41e8
	ctx.lr = 0x82B5930C;
	sub_822B41E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b41e8
	ctx.lr = 0x82B59314;
	sub_822B41E8(ctx, base);
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

__attribute__((alias("__imp__sub_82B5932C"))) PPC_WEAK_FUNC(sub_82B5932C);
PPC_FUNC_IMPL(__imp__sub_82B5932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59330"))) PPC_WEAK_FUNC(sub_82B59330);
PPC_FUNC_IMPL(__imp__sub_82B59330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822b41e8
	ctx.lr = 0x82B5934C;
	sub_822B41E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b41e8
	ctx.lr = 0x82B59354;
	sub_822B41E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B59368"))) PPC_WEAK_FUNC(sub_82B59368);
PPC_FUNC_IMPL(__imp__sub_82B59368) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b591e0
	sub_82B591E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5936C"))) PPC_WEAK_FUNC(sub_82B5936C);
PPC_FUNC_IMPL(__imp__sub_82B5936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59370"))) PPC_WEAK_FUNC(sub_82B59370);
PPC_FUNC_IMPL(__imp__sub_82B59370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B59374"))) PPC_WEAK_FUNC(sub_82B59374);
PPC_FUNC_IMPL(__imp__sub_82B59374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59378"))) PPC_WEAK_FUNC(sub_82B59378);
PPC_FUNC_IMPL(__imp__sub_82B59378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5937C"))) PPC_WEAK_FUNC(sub_82B5937C);
PPC_FUNC_IMPL(__imp__sub_82B5937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59380"))) PPC_WEAK_FUNC(sub_82B59380);
PPC_FUNC_IMPL(__imp__sub_82B59380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B59388;
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
	// beq cr6,0x82b593c8
	if (ctx.cr6.eq) goto loc_82B593C8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b593b4
	if (!ctx.cr6.eq) goto loc_82B593B4;
	// bl 0x822900a0
	ctx.lr = 0x82B593B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B593B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B593C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B593C8:
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

__attribute__((alias("__imp__sub_82B593E0"))) PPC_WEAK_FUNC(sub_82B593E0);
PPC_FUNC_IMPL(__imp__sub_82B593E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B593E4"))) PPC_WEAK_FUNC(sub_82B593E4);
PPC_FUNC_IMPL(__imp__sub_82B593E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B593E8"))) PPC_WEAK_FUNC(sub_82B593E8);
PPC_FUNC_IMPL(__imp__sub_82B593E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B59400"))) PPC_WEAK_FUNC(sub_82B59400);
PPC_FUNC_IMPL(__imp__sub_82B59400) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b59380
	sub_82B59380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B59404"))) PPC_WEAK_FUNC(sub_82B59404);
PPC_FUNC_IMPL(__imp__sub_82B59404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59408"))) PPC_WEAK_FUNC(sub_82B59408);
PPC_FUNC_IMPL(__imp__sub_82B59408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5940C"))) PPC_WEAK_FUNC(sub_82B5940C);
PPC_FUNC_IMPL(__imp__sub_82B5940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59410"))) PPC_WEAK_FUNC(sub_82B59410);
PPC_FUNC_IMPL(__imp__sub_82B59410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B59414"))) PPC_WEAK_FUNC(sub_82B59414);
PPC_FUNC_IMPL(__imp__sub_82B59414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59418"))) PPC_WEAK_FUNC(sub_82B59418);
PPC_FUNC_IMPL(__imp__sub_82B59418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B59420;
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
	// beq cr6,0x82b59460
	if (ctx.cr6.eq) goto loc_82B59460;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5944c
	if (!ctx.cr6.eq) goto loc_82B5944C;
	// bl 0x822900a0
	ctx.lr = 0x82B59448;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B5944C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B59460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B59460:
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

__attribute__((alias("__imp__sub_82B59478"))) PPC_WEAK_FUNC(sub_82B59478);
PPC_FUNC_IMPL(__imp__sub_82B59478) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b59418
	sub_82B59418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5947C"))) PPC_WEAK_FUNC(sub_82B5947C);
PPC_FUNC_IMPL(__imp__sub_82B5947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59480"))) PPC_WEAK_FUNC(sub_82B59480);
PPC_FUNC_IMPL(__imp__sub_82B59480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B59484"))) PPC_WEAK_FUNC(sub_82B59484);
PPC_FUNC_IMPL(__imp__sub_82B59484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59488"))) PPC_WEAK_FUNC(sub_82B59488);
PPC_FUNC_IMPL(__imp__sub_82B59488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5948C"))) PPC_WEAK_FUNC(sub_82B5948C);
PPC_FUNC_IMPL(__imp__sub_82B5948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59490"))) PPC_WEAK_FUNC(sub_82B59490);
PPC_FUNC_IMPL(__imp__sub_82B59490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B59498;
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
	// beq cr6,0x82b594d8
	if (ctx.cr6.eq) goto loc_82B594D8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b594c4
	if (!ctx.cr6.eq) goto loc_82B594C4;
	// bl 0x822900a0
	ctx.lr = 0x82B594C0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B594C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B594D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B594D8:
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

__attribute__((alias("__imp__sub_82B594F0"))) PPC_WEAK_FUNC(sub_82B594F0);
PPC_FUNC_IMPL(__imp__sub_82B594F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b59490
	sub_82B59490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B594F4"))) PPC_WEAK_FUNC(sub_82B594F4);
PPC_FUNC_IMPL(__imp__sub_82B594F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B594F8"))) PPC_WEAK_FUNC(sub_82B594F8);
PPC_FUNC_IMPL(__imp__sub_82B594F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B594FC"))) PPC_WEAK_FUNC(sub_82B594FC);
PPC_FUNC_IMPL(__imp__sub_82B594FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59500"))) PPC_WEAK_FUNC(sub_82B59500);
PPC_FUNC_IMPL(__imp__sub_82B59500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B59504"))) PPC_WEAK_FUNC(sub_82B59504);
PPC_FUNC_IMPL(__imp__sub_82B59504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59508"))) PPC_WEAK_FUNC(sub_82B59508);
PPC_FUNC_IMPL(__imp__sub_82B59508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B59510;
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
	// beq cr6,0x82b59550
	if (ctx.cr6.eq) goto loc_82B59550;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b5953c
	if (!ctx.cr6.eq) goto loc_82B5953C;
	// bl 0x822900a0
	ctx.lr = 0x82B59538;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82B5953C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B59550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B59550:
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

__attribute__((alias("__imp__sub_82B59568"))) PPC_WEAK_FUNC(sub_82B59568);
PPC_FUNC_IMPL(__imp__sub_82B59568) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b59508
	sub_82B59508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5956C"))) PPC_WEAK_FUNC(sub_82B5956C);
PPC_FUNC_IMPL(__imp__sub_82B5956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B59570"))) PPC_WEAK_FUNC(sub_82B59570);
PPC_FUNC_IMPL(__imp__sub_82B59570) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

