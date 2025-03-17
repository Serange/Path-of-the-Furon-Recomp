#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AEA3D0"))) PPC_WEAK_FUNC(sub_82AEA3D0);
PPC_FUNC_IMPL(__imp__sub_82AEA3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-18816
	ctx.r8.s64 = ctx.r9.s64 + -18816;
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

__attribute__((alias("__imp__sub_82AEA3F0"))) PPC_WEAK_FUNC(sub_82AEA3F0);
PPC_FUNC_IMPL(__imp__sub_82AEA3F0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-18816
	ctx.r10.s64 = ctx.r11.s64 + -18816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEA41C;
	sub_8229C068(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21120
	ctx.r8.s64 = ctx.r9.s64 + -21120;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEA430;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82AEA438;
	sub_825B4310(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82aea46c
	if (ctx.cr6.eq) goto loc_82AEA46C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aea464
	if (ctx.cr6.lt) goto loc_82AEA464;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aea46c
	if (!ctx.cr6.gt) goto loc_82AEA46C;
loc_82AEA464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEA46C;
	sub_82294A58(ctx, base);
loc_82AEA46C:
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

__attribute__((alias("__imp__sub_82AEA488"))) PPC_WEAK_FUNC(sub_82AEA488);
PPC_FUNC_IMPL(__imp__sub_82AEA488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-18816
	ctx.r10.s64 = ctx.r11.s64 + -18816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEA4AC;
	sub_8229C068(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21120
	ctx.r8.s64 = ctx.r9.s64 + -21120;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEA4C0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82AEA4C8;
	sub_825B4310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEA4DC"))) PPC_WEAK_FUNC(sub_82AEA4DC);
PPC_FUNC_IMPL(__imp__sub_82AEA4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEA4E0"))) PPC_WEAK_FUNC(sub_82AEA4E0);
PPC_FUNC_IMPL(__imp__sub_82AEA4E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-21120
	ctx.r8.s64 = ctx.r9.s64 + -21120;
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

__attribute__((alias("__imp__sub_82AEA508"))) PPC_WEAK_FUNC(sub_82AEA508);
PPC_FUNC_IMPL(__imp__sub_82AEA508) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEA510"))) PPC_WEAK_FUNC(sub_82AEA510);
PPC_FUNC_IMPL(__imp__sub_82AEA510) {
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
	ctx.lr = 0x82AEA528;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aea5ac
	if (ctx.cr6.eq) goto loc_82AEA5AC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-18436
	ctx.r11.s64 = ctx.r8.s64 + -18436;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-22736
	ctx.r6.s64 = ctx.r5.s64 + -22736;
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
	// li r5,1232
	ctx.r5.s64 = 1232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEA59C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEA5AC:
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

__attribute__((alias("__imp__sub_82AEA5C0"))) PPC_WEAK_FUNC(sub_82AEA5C0);
PPC_FUNC_IMPL(__imp__sub_82AEA5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEA5C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aea5f4
	if (!ctx.cr6.eq) goto loc_82AEA5F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ddb88
	ctx.lr = 0x82AEA5E8;
	sub_825DDB88(ctx, base);
	// stw r3,-28912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28912, ctx.r3.u32);
	// bl 0x825ddc48
	ctx.lr = 0x82AEA5F0;
	sub_825DDC48(ctx, base);
	// lwz r10,-28912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
loc_82AEA5F4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aea614
	if (ctx.cr6.eq) goto loc_82AEA614;
	// bl 0x823113c8
	ctx.lr = 0x82AEA608;
	sub_823113C8(ctx, base);
	// lwz r11,-24132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24132);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aea61c
	goto loc_82AEA61C;
loc_82AEA614:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEA61C:
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
	// bne cr6,0x82aea64c
	if (!ctx.cr6.eq) goto loc_82AEA64C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEA63C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEA644;
	sub_822AADA8(ctx, base);
	// lwz r11,-24132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24132);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEA64C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aea678
	if (!ctx.cr6.eq) goto loc_82AEA678;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEA668;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEA670;
	sub_82398640(ctx, base);
	// lwz r11,-24132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24132);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEA678:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aea6b0
	if (ctx.cr6.eq) goto loc_82AEA6B0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEA694;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aea6b0
	if (!ctx.cr6.eq) goto loc_82AEA6B0;
	// lwz r3,-24132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEA6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEA6B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEA6B8"))) PPC_WEAK_FUNC(sub_82AEA6B8);
PPC_FUNC_IMPL(__imp__sub_82AEA6B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEA6C0"))) PPC_WEAK_FUNC(sub_82AEA6C0);
PPC_FUNC_IMPL(__imp__sub_82AEA6C0) {
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
	// lwz r11,-28912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aea704
	if (!ctx.cr6.eq) goto loc_82AEA704;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ddb88
	ctx.lr = 0x82AEA6F8;
	sub_825DDB88(ctx, base);
	// stw r3,-28912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28912, ctx.r3.u32);
	// bl 0x825ddc48
	ctx.lr = 0x82AEA700;
	sub_825DDC48(ctx, base);
	// lwz r11,-28912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
loc_82AEA704:
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

__attribute__((alias("__imp__sub_82AEA72C"))) PPC_WEAK_FUNC(sub_82AEA72C);
PPC_FUNC_IMPL(__imp__sub_82AEA72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEA730"))) PPC_WEAK_FUNC(sub_82AEA730);
PPC_FUNC_IMPL(__imp__sub_82AEA730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82aea75c
	if (ctx.cr6.eq) goto loc_82AEA75C;
	// bl 0x825ecaf8
	ctx.lr = 0x82AEA750;
	sub_825ECAF8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-18384
	ctx.r10.s64 = ctx.r11.s64 + -18384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82AEA75C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEA770"))) PPC_WEAK_FUNC(sub_82AEA770);
PPC_FUNC_IMPL(__imp__sub_82AEA770) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEA778"))) PPC_WEAK_FUNC(sub_82AEA778);
PPC_FUNC_IMPL(__imp__sub_82AEA778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825ecaf8
	ctx.lr = 0x82AEA790;
	sub_825ECAF8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-18384
	ctx.r10.s64 = ctx.r11.s64 + -18384;
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

__attribute__((alias("__imp__sub_82AEA7B4"))) PPC_WEAK_FUNC(sub_82AEA7B4);
PPC_FUNC_IMPL(__imp__sub_82AEA7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEA7B8"))) PPC_WEAK_FUNC(sub_82AEA7B8);
PPC_FUNC_IMPL(__imp__sub_82AEA7B8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-18384
	ctx.r10.s64 = ctx.r11.s64 + -18384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEA7E4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ecd30
	ctx.lr = 0x82AEA7EC;
	sub_825ECD30(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aea820
	if (ctx.cr6.eq) goto loc_82AEA820;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aea818
	if (ctx.cr6.lt) goto loc_82AEA818;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aea820
	if (!ctx.cr6.gt) goto loc_82AEA820;
loc_82AEA818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEA820;
	sub_82294A58(ctx, base);
loc_82AEA820:
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

__attribute__((alias("__imp__sub_82AEA83C"))) PPC_WEAK_FUNC(sub_82AEA83C);
PPC_FUNC_IMPL(__imp__sub_82AEA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEA840"))) PPC_WEAK_FUNC(sub_82AEA840);
PPC_FUNC_IMPL(__imp__sub_82AEA840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-18384
	ctx.r10.s64 = ctx.r11.s64 + -18384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEA864;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ecd30
	ctx.lr = 0x82AEA86C;
	sub_825ECD30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEA880"))) PPC_WEAK_FUNC(sub_82AEA880);
PPC_FUNC_IMPL(__imp__sub_82AEA880) {
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
	ctx.lr = 0x82AEA898;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aea91c
	if (ctx.cr6.eq) goto loc_82AEA91C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-17836
	ctx.r11.s64 = ctx.r8.s64 + -17836;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-18288
	ctx.r6.s64 = ctx.r5.s64 + -18288;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1852
	ctx.r5.s64 = 1852;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEA90C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEA91C:
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

__attribute__((alias("__imp__sub_82AEA930"))) PPC_WEAK_FUNC(sub_82AEA930);
PPC_FUNC_IMPL(__imp__sub_82AEA930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEA938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-25272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aea964
	if (!ctx.cr6.eq) goto loc_82AEA964;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a3f550
	ctx.lr = 0x82AEA958;
	sub_82A3F550(ctx, base);
	// stw r3,-25272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25272, ctx.r3.u32);
	// bl 0x82a3f600
	ctx.lr = 0x82AEA960;
	sub_82A3F600(ctx, base);
	// lwz r10,-25272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
loc_82AEA964:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aea984
	if (ctx.cr6.eq) goto loc_82AEA984;
	// bl 0x82994aa0
	ctx.lr = 0x82AEA978;
	sub_82994AA0(ctx, base);
	// lwz r11,-24128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24128);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aea98c
	goto loc_82AEA98C;
loc_82AEA984:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEA98C:
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
	// bne cr6,0x82aea9bc
	if (!ctx.cr6.eq) goto loc_82AEA9BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEA9AC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEA9B4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24128);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEA9BC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aea9e8
	if (!ctx.cr6.eq) goto loc_82AEA9E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEA9D8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEA9E0;
	sub_82398640(ctx, base);
	// lwz r11,-24128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24128);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEA9E8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aeaa20
	if (ctx.cr6.eq) goto loc_82AEAA20;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEAA04;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aeaa20
	if (!ctx.cr6.eq) goto loc_82AEAA20;
	// lwz r3,-24128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEAA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEAA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEAA28"))) PPC_WEAK_FUNC(sub_82AEAA28);
PPC_FUNC_IMPL(__imp__sub_82AEAA28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEAA30"))) PPC_WEAK_FUNC(sub_82AEAA30);
PPC_FUNC_IMPL(__imp__sub_82AEAA30) {
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
	// lwz r11,-25272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aeaa74
	if (!ctx.cr6.eq) goto loc_82AEAA74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a3f550
	ctx.lr = 0x82AEAA68;
	sub_82A3F550(ctx, base);
	// stw r3,-25272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25272, ctx.r3.u32);
	// bl 0x82a3f600
	ctx.lr = 0x82AEAA70;
	sub_82A3F600(ctx, base);
	// lwz r11,-25272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
loc_82AEAA74:
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

__attribute__((alias("__imp__sub_82AEAA9C"))) PPC_WEAK_FUNC(sub_82AEAA9C);
PPC_FUNC_IMPL(__imp__sub_82AEAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEAAA0"))) PPC_WEAK_FUNC(sub_82AEAAA0);
PPC_FUNC_IMPL(__imp__sub_82AEAAA0) {
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
	ctx.lr = 0x82AEAAB8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aeab3c
	if (ctx.cr6.eq) goto loc_82AEAB3C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-17796
	ctx.r11.s64 = ctx.r8.s64 + -17796;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-18584
	ctx.r6.s64 = ctx.r5.s64 + -18584;
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
	// li r5,764
	ctx.r5.s64 = 764;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEAB2C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEAB3C:
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

__attribute__((alias("__imp__sub_82AEAB50"))) PPC_WEAK_FUNC(sub_82AEAB50);
PPC_FUNC_IMPL(__imp__sub_82AEAB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEAB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-25260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25260);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aeab84
	if (!ctx.cr6.eq) goto loc_82AEAB84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a3fbb0
	ctx.lr = 0x82AEAB78;
	sub_82A3FBB0(ctx, base);
	// stw r3,-25260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25260, ctx.r3.u32);
	// bl 0x82a3fc60
	ctx.lr = 0x82AEAB80;
	sub_82A3FC60(ctx, base);
	// lwz r10,-25260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25260);
loc_82AEAB84:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aeaba4
	if (ctx.cr6.eq) goto loc_82AEABA4;
	// bl 0x8298d4d0
	ctx.lr = 0x82AEAB98;
	sub_8298D4D0(ctx, base);
	// lwz r11,-24124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24124);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aeabac
	goto loc_82AEABAC;
loc_82AEABA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEABAC:
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
	// bne cr6,0x82aeabdc
	if (!ctx.cr6.eq) goto loc_82AEABDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEABCC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEABD4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24124);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEABDC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aeac08
	if (!ctx.cr6.eq) goto loc_82AEAC08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEABF8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEAC00;
	sub_82398640(ctx, base);
	// lwz r11,-24124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24124);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEAC08:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aeac40
	if (ctx.cr6.eq) goto loc_82AEAC40;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEAC24;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aeac40
	if (!ctx.cr6.eq) goto loc_82AEAC40;
	// lwz r3,-24124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24124);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEAC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEAC40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEAC48"))) PPC_WEAK_FUNC(sub_82AEAC48);
PPC_FUNC_IMPL(__imp__sub_82AEAC48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEAC50"))) PPC_WEAK_FUNC(sub_82AEAC50);
PPC_FUNC_IMPL(__imp__sub_82AEAC50) {
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
	// lwz r11,-25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25260);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aeac94
	if (!ctx.cr6.eq) goto loc_82AEAC94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a3fbb0
	ctx.lr = 0x82AEAC88;
	sub_82A3FBB0(ctx, base);
	// stw r3,-25260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25260, ctx.r3.u32);
	// bl 0x82a3fc60
	ctx.lr = 0x82AEAC90;
	sub_82A3FC60(ctx, base);
	// lwz r11,-25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25260);
loc_82AEAC94:
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

__attribute__((alias("__imp__sub_82AEACBC"))) PPC_WEAK_FUNC(sub_82AEACBC);
PPC_FUNC_IMPL(__imp__sub_82AEACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEACC0"))) PPC_WEAK_FUNC(sub_82AEACC0);
PPC_FUNC_IMPL(__imp__sub_82AEACC0) {
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
	ctx.lr = 0x82AEACD8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aead5c
	if (ctx.cr6.eq) goto loc_82AEAD5C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-17744
	ctx.r11.s64 = ctx.r8.s64 + -17744;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-18896
	ctx.r6.s64 = ctx.r5.s64 + -18896;
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
	// li r5,784
	ctx.r5.s64 = 784;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEAD4C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEAD5C:
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

__attribute__((alias("__imp__sub_82AEAD70"))) PPC_WEAK_FUNC(sub_82AEAD70);
PPC_FUNC_IMPL(__imp__sub_82AEAD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEAD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aeada4
	if (!ctx.cr6.eq) goto loc_82AEADA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82AEAD98;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82AEADA0;
	sub_82B2A868(ctx, base);
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82AEADA4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aeadc4
	if (ctx.cr6.eq) goto loc_82AEADC4;
	// bl 0x829979a0
	ctx.lr = 0x82AEADB8;
	sub_829979A0(ctx, base);
	// lwz r11,-24120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24120);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aeadcc
	goto loc_82AEADCC;
loc_82AEADC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEADCC:
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
	// bne cr6,0x82aeadfc
	if (!ctx.cr6.eq) goto loc_82AEADFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEADEC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEADF4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24120);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEADFC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aeae28
	if (!ctx.cr6.eq) goto loc_82AEAE28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEAE18;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEAE20;
	sub_82398640(ctx, base);
	// lwz r11,-24120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24120);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEAE28:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aeae60
	if (ctx.cr6.eq) goto loc_82AEAE60;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEAE44;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aeae60
	if (!ctx.cr6.eq) goto loc_82AEAE60;
	// lwz r3,-24120(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEAE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEAE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEAE68"))) PPC_WEAK_FUNC(sub_82AEAE68);
PPC_FUNC_IMPL(__imp__sub_82AEAE68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEAE70"))) PPC_WEAK_FUNC(sub_82AEAE70);
PPC_FUNC_IMPL(__imp__sub_82AEAE70) {
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
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aeaeb4
	if (!ctx.cr6.eq) goto loc_82AEAEB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82AEAEA8;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82AEAEB0;
	sub_82B2A868(ctx, base);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82AEAEB4:
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

__attribute__((alias("__imp__sub_82AEAEDC"))) PPC_WEAK_FUNC(sub_82AEAEDC);
PPC_FUNC_IMPL(__imp__sub_82AEAEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEAEE0"))) PPC_WEAK_FUNC(sub_82AEAEE0);
PPC_FUNC_IMPL(__imp__sub_82AEAEE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEAEE8"))) PPC_WEAK_FUNC(sub_82AEAEE8);
PPC_FUNC_IMPL(__imp__sub_82AEAEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AEAEF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r27,-24128(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24128);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82aeaf20
	if (!ctx.cr6.eq) goto loc_82AEAF20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aea880
	ctx.lr = 0x82AEAF14;
	sub_82AEA880(ctx, base);
	// stw r3,-24128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24128, ctx.r3.u32);
	// bl 0x82aea930
	ctx.lr = 0x82AEAF1C;
	sub_82AEA930(ctx, base);
	// lwz r27,-24128(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24128);
loc_82AEAF20:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r4,r11,-17712
	ctx.r4.s64 = ctx.r11.s64 + -17712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x822960c0
	ctx.lr = 0x82AEAF38;
	sub_822960C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7100
	ctx.lr = 0x82AEAF50;
	sub_822A7100(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82aeaf6c
	if (!ctx.cr6.eq) goto loc_82AEAF6C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82AEAF6C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82AEAF80;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aeb128
	if (ctx.cr6.eq) goto loc_82AEB128;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeafe4
	if (ctx.cr6.eq) goto loc_82AEAFE4;
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeafb8
	if (ctx.cr6.eq) goto loc_82AEAFB8;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aeafc0
	goto loc_82AEAFC0;
loc_82AEAFB8:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AEAFC0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AEAFD8;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aeb138
	if (!ctx.cr6.eq) goto loc_82AEB138;
loc_82AEAFE4:
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
	// bne cr6,0x82aeb000
	if (!ctx.cr6.eq) goto loc_82AEB000;
	// bl 0x823648a0
	ctx.lr = 0x82AEB000;
	sub_823648A0(ctx, base);
loc_82AEB000:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82AEB004:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb018
	if (ctx.cr6.eq) goto loc_82AEB018;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x82aeb004
	if (!ctx.cr6.eq) goto loc_82AEB004;
loc_82AEB018:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6698
	ctx.lr = 0x82AEB030;
	sub_822A6698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82aeb0e4
	if (ctx.cr6.eq) goto loc_82AEB0E4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82aeb0bc
	if (ctx.cr6.eq) goto loc_82AEB0BC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82aeb0bc
	if (!ctx.cr6.eq) goto loc_82AEB0BC;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x82AEB06C;
	sub_8229BCD0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82aeb080
	if (!ctx.cr6.eq) goto loc_82AEB080;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82AEB080:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x82AEB09C;
	sub_822A7880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82AEB0A8;
	sub_82299080(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82aeb0e4
	if (!ctx.cr6.eq) goto loc_82AEB0E4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82aeb0e4
	if (ctx.cr6.eq) goto loc_82AEB0E4;
loc_82AEB0BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823aba10
	ctx.lr = 0x82AEB0D8;
	sub_823ABA10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aeb11c
	if (!ctx.cr6.eq) goto loc_82AEB11C;
loc_82AEB0E4:
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb0f8
	if (ctx.cr6.eq) goto loc_82AEB0F8;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aeb100
	goto loc_82AEB100;
loc_82AEB0F8:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AEB100:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AEB118;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AEB11C:
	// bl 0x822a8060
	ctx.lr = 0x82AEB120;
	sub_822A8060(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aeb138
	if (!ctx.cr6.eq) goto loc_82AEB138;
loc_82AEB128:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AEB130;
	sub_82299080(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82aeb144
	goto loc_82AEB144;
loc_82AEB138:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AEB140;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AEB144:
	// bl 0x82aeb578
	ctx.lr = 0x82AEB148;
	sub_82AEB578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aeb158
	if (!ctx.cr6.eq) goto loc_82AEB158;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AEB158:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// blt cr6,0x82aeb190
	if (ctx.cr6.lt) goto loc_82AEB190;
	// beq cr6,0x82aeb180
	if (ctx.cr6.eq) goto loc_82AEB180;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// bge cr6,0x82aeb194
	if (!ctx.cr6.lt) goto loc_82AEB194;
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AEB180:
	// lwz r11,1820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1820);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AEB190:
	// lwz r11,1844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1844);
loc_82AEB194:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEB1A0"))) PPC_WEAK_FUNC(sub_82AEB1A0);
PPC_FUNC_IMPL(__imp__sub_82AEB1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82AEB1A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r27,-24128(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24128);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82aeb1dc
	if (!ctx.cr6.eq) goto loc_82AEB1DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aea880
	ctx.lr = 0x82AEB1D0;
	sub_82AEA880(ctx, base);
	// stw r3,-24128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24128, ctx.r3.u32);
	// bl 0x82aea930
	ctx.lr = 0x82AEB1D8;
	sub_82AEA930(ctx, base);
	// lwz r27,-24128(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24128);
loc_82AEB1DC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r4,r11,-17712
	ctx.r4.s64 = ctx.r11.s64 + -17712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x822960c0
	ctx.lr = 0x82AEB1F4;
	sub_822960C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7100
	ctx.lr = 0x82AEB20C;
	sub_822A7100(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82aeb228
	if (!ctx.cr6.eq) goto loc_82AEB228;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82AEB228:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82AEB23C;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aeb3e4
	if (ctx.cr6.eq) goto loc_82AEB3E4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb2a0
	if (ctx.cr6.eq) goto loc_82AEB2A0;
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb274
	if (ctx.cr6.eq) goto loc_82AEB274;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aeb27c
	goto loc_82AEB27C;
loc_82AEB274:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AEB27C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AEB294;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aeb3f4
	if (!ctx.cr6.eq) goto loc_82AEB3F4;
loc_82AEB2A0:
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
	// bne cr6,0x82aeb2bc
	if (!ctx.cr6.eq) goto loc_82AEB2BC;
	// bl 0x823648a0
	ctx.lr = 0x82AEB2BC;
	sub_823648A0(ctx, base);
loc_82AEB2BC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82AEB2C0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb2d4
	if (ctx.cr6.eq) goto loc_82AEB2D4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x82aeb2c0
	if (!ctx.cr6.eq) goto loc_82AEB2C0;
loc_82AEB2D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6698
	ctx.lr = 0x82AEB2EC;
	sub_822A6698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82aeb3a0
	if (ctx.cr6.eq) goto loc_82AEB3A0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82aeb378
	if (ctx.cr6.eq) goto loc_82AEB378;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82aeb378
	if (!ctx.cr6.eq) goto loc_82AEB378;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x82AEB328;
	sub_8229BCD0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82aeb33c
	if (!ctx.cr6.eq) goto loc_82AEB33C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82AEB33C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x82AEB358;
	sub_822A7880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82AEB364;
	sub_82299080(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82aeb3a0
	if (!ctx.cr6.eq) goto loc_82AEB3A0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82aeb3a0
	if (ctx.cr6.eq) goto loc_82AEB3A0;
loc_82AEB378:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823aba10
	ctx.lr = 0x82AEB394;
	sub_823ABA10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aeb3d8
	if (!ctx.cr6.eq) goto loc_82AEB3D8;
loc_82AEB3A0:
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb3b4
	if (ctx.cr6.eq) goto loc_82AEB3B4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aeb3bc
	goto loc_82AEB3BC;
loc_82AEB3B4:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AEB3BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AEB3D4;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AEB3D8:
	// bl 0x822a8060
	ctx.lr = 0x82AEB3DC;
	sub_822A8060(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aeb3f4
	if (!ctx.cr6.eq) goto loc_82AEB3F4;
loc_82AEB3E4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AEB3EC;
	sub_82299080(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82aeb400
	goto loc_82AEB400;
loc_82AEB3F4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AEB3FC;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AEB400:
	// bl 0x82aeb578
	ctx.lr = 0x82AEB404;
	sub_82AEB578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aeb414
	if (!ctx.cr6.eq) goto loc_82AEB414;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82AEB414:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// blt cr6,0x82aeb464
	if (ctx.cr6.lt) goto loc_82AEB464;
	// beq cr6,0x82aeb44c
	if (ctx.cr6.eq) goto loc_82AEB44C;
	// cmplwi cr6,r22,3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 3, ctx.xer);
	// bge cr6,0x82aeb470
	if (!ctx.cr6.lt) goto loc_82AEB470;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,1828(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1828);
	// add r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82AEB44C:
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// rlwinm r10,r23,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82AEB464:
	// lwz r11,1840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82AEB470:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEB47C"))) PPC_WEAK_FUNC(sub_82AEB47C);
PPC_FUNC_IMPL(__imp__sub_82AEB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEB480"))) PPC_WEAK_FUNC(sub_82AEB480);
PPC_FUNC_IMPL(__imp__sub_82AEB480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb4cc
	if (ctx.cr6.eq) goto loc_82AEB4CC;
	// bl 0x82a407d0
	ctx.lr = 0x82AEB4A4;
	sub_82A407D0(ctx, base);
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aeb4cc
	if (!ctx.cr6.eq) goto loc_82AEB4CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,740(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// lwz r10,1008(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEB4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r3.u32);
loc_82AEB4CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB4E0"))) PPC_WEAK_FUNC(sub_82AEB4E0);
PPC_FUNC_IMPL(__imp__sub_82AEB4E0) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aeb518
	if (ctx.cr6.eq) goto loc_82AEB518;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,724(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 724);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8244fc30
	ctx.lr = 0x82AEB518;
	sub_8244FC30(ctx, base);
loc_82AEB518:
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aeb538
	if (ctx.cr6.eq) goto loc_82AEB538;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,724(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 724);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82AEB538;
	sub_8244FC30(ctx, base);
loc_82AEB538:
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

__attribute__((alias("__imp__sub_82AEB550"))) PPC_WEAK_FUNC(sub_82AEB550);
PPC_FUNC_IMPL(__imp__sub_82AEB550) {
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
	// bl 0x82cb59b0
	ctx.lr = 0x82AEB560;
	sub_82CB59B0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB574"))) PPC_WEAK_FUNC(sub_82AEB574);
PPC_FUNC_IMPL(__imp__sub_82AEB574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEB578"))) PPC_WEAK_FUNC(sub_82AEB578);
PPC_FUNC_IMPL(__imp__sub_82AEB578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82aeb5e0
	if (ctx.cr6.eq) goto loc_82AEB5E0;
	// bl 0x829958f8
	ctx.lr = 0x82AEB598;
	sub_829958F8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb5b8
	if (ctx.cr6.eq) goto loc_82AEB5B8;
loc_82AEB5A4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82aeb5c8
	if (ctx.cr6.eq) goto loc_82AEB5C8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aeb5a4
	if (!ctx.cr6.eq) goto loc_82AEB5A4;
loc_82AEB5B8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aeb5e0
	if (ctx.cr6.eq) goto loc_82AEB5E0;
loc_82AEB5C8:
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
loc_82AEB5E0:
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

__attribute__((alias("__imp__sub_82AEB5F8"))) PPC_WEAK_FUNC(sub_82AEB5F8);
PPC_FUNC_IMPL(__imp__sub_82AEB5F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB608"))) PPC_WEAK_FUNC(sub_82AEB608);
PPC_FUNC_IMPL(__imp__sub_82AEB608) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB620"))) PPC_WEAK_FUNC(sub_82AEB620);
PPC_FUNC_IMPL(__imp__sub_82AEB620) {
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

__attribute__((alias("__imp__sub_82AEB630"))) PPC_WEAK_FUNC(sub_82AEB630);
PPC_FUNC_IMPL(__imp__sub_82AEB630) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-15536
	ctx.r7.s64 = ctx.r9.s64 + -15536;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB660"))) PPC_WEAK_FUNC(sub_82AEB660);
PPC_FUNC_IMPL(__imp__sub_82AEB660) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB668"))) PPC_WEAK_FUNC(sub_82AEB668);
PPC_FUNC_IMPL(__imp__sub_82AEB668) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-15536
	ctx.r7.s64 = ctx.r9.s64 + -15536;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB690"))) PPC_WEAK_FUNC(sub_82AEB690);
PPC_FUNC_IMPL(__imp__sub_82AEB690) {
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
	// bl 0x82aeb700
	ctx.lr = 0x82AEB6B0;
	sub_82AEB700(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb6e4
	if (ctx.cr6.eq) goto loc_82AEB6E4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aeb6dc
	if (ctx.cr6.lt) goto loc_82AEB6DC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aeb6e4
	if (!ctx.cr6.gt) goto loc_82AEB6E4;
loc_82AEB6DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEB6E4;
	sub_82294A58(ctx, base);
loc_82AEB6E4:
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

__attribute__((alias("__imp__sub_82AEB700"))) PPC_WEAK_FUNC(sub_82AEB700);
PPC_FUNC_IMPL(__imp__sub_82AEB700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-15536
	ctx.r10.s64 = ctx.r11.s64 + -15536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEB724;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,1696
	ctx.r8.s64 = ctx.r9.s64 + 1696;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEB738;
	sub_8229C068(ctx, base);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-19216
	ctx.r6.s64 = ctx.r7.s64 + -19216;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEB74C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x82AEB754;
	sub_82383C00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB768"))) PPC_WEAK_FUNC(sub_82AEB768);
PPC_FUNC_IMPL(__imp__sub_82AEB768) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-17648
	ctx.r7.s64 = ctx.r9.s64 + -17648;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB798"))) PPC_WEAK_FUNC(sub_82AEB798);
PPC_FUNC_IMPL(__imp__sub_82AEB798) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB7A0"))) PPC_WEAK_FUNC(sub_82AEB7A0);
PPC_FUNC_IMPL(__imp__sub_82AEB7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-17648
	ctx.r7.s64 = ctx.r9.s64 + -17648;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB7C8"))) PPC_WEAK_FUNC(sub_82AEB7C8);
PPC_FUNC_IMPL(__imp__sub_82AEB7C8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-17648
	ctx.r10.s64 = ctx.r11.s64 + -17648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEB7F4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2d7e8
	ctx.lr = 0x82AEB7FC;
	sub_82A2D7E8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aeb830
	if (ctx.cr6.eq) goto loc_82AEB830;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aeb828
	if (ctx.cr6.lt) goto loc_82AEB828;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aeb830
	if (!ctx.cr6.gt) goto loc_82AEB830;
loc_82AEB828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEB830;
	sub_82294A58(ctx, base);
loc_82AEB830:
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

__attribute__((alias("__imp__sub_82AEB84C"))) PPC_WEAK_FUNC(sub_82AEB84C);
PPC_FUNC_IMPL(__imp__sub_82AEB84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEB850"))) PPC_WEAK_FUNC(sub_82AEB850);
PPC_FUNC_IMPL(__imp__sub_82AEB850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-17648
	ctx.r10.s64 = ctx.r11.s64 + -17648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEB874;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2d7e8
	ctx.lr = 0x82AEB87C;
	sub_82A2D7E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB890"))) PPC_WEAK_FUNC(sub_82AEB890);
PPC_FUNC_IMPL(__imp__sub_82AEB890) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-16632
	ctx.r7.s64 = ctx.r9.s64 + -16632;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB8C0"))) PPC_WEAK_FUNC(sub_82AEB8C0);
PPC_FUNC_IMPL(__imp__sub_82AEB8C0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB8C8"))) PPC_WEAK_FUNC(sub_82AEB8C8);
PPC_FUNC_IMPL(__imp__sub_82AEB8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-16632
	ctx.r7.s64 = ctx.r9.s64 + -16632;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEB8F0"))) PPC_WEAK_FUNC(sub_82AEB8F0);
PPC_FUNC_IMPL(__imp__sub_82AEB8F0) {
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
	// bl 0x82aeb960
	ctx.lr = 0x82AEB910;
	sub_82AEB960(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeb944
	if (ctx.cr6.eq) goto loc_82AEB944;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aeb93c
	if (ctx.cr6.lt) goto loc_82AEB93C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aeb944
	if (!ctx.cr6.gt) goto loc_82AEB944;
loc_82AEB93C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEB944;
	sub_82294A58(ctx, base);
loc_82AEB944:
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

__attribute__((alias("__imp__sub_82AEB960"))) PPC_WEAK_FUNC(sub_82AEB960);
PPC_FUNC_IMPL(__imp__sub_82AEB960) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-16632
	ctx.r10.s64 = ctx.r11.s64 + -16632;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEB988;
	sub_8229C068(ctx, base);
	// addi r3,r31,1840
	ctx.r3.s64 = ctx.r31.s64 + 1840;
	// bl 0x82aebc58
	ctx.lr = 0x82AEB990;
	sub_82AEBC58(ctx, base);
	// addi r3,r31,1828
	ctx.r3.s64 = ctx.r31.s64 + 1828;
	// bl 0x82aebbe0
	ctx.lr = 0x82AEB998;
	sub_82AEBBE0(ctx, base);
	// addi r3,r31,1816
	ctx.r3.s64 = ctx.r31.s64 + 1816;
	// bl 0x82aebb68
	ctx.lr = 0x82AEB9A0;
	sub_82AEBB68(ctx, base);
	// addi r3,r31,1788
	ctx.r3.s64 = ctx.r31.s64 + 1788;
	// bl 0x82476618
	ctx.lr = 0x82AEB9A8;
	sub_82476618(ctx, base);
	// addi r3,r31,1764
	ctx.r3.s64 = ctx.r31.s64 + 1764;
	// bl 0x829dd590
	ctx.lr = 0x82AEB9B0;
	sub_829DD590(ctx, base);
	// addi r3,r31,1736
	ctx.r3.s64 = ctx.r31.s64 + 1736;
	// bl 0x822c58f0
	ctx.lr = 0x82AEB9B8;
	sub_822C58F0(ctx, base);
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// bl 0x822c58f0
	ctx.lr = 0x82AEB9C0;
	sub_822C58F0(ctx, base);
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x822c58f0
	ctx.lr = 0x82AEB9C8;
	sub_822C58F0(ctx, base);
	// lwz r9,1664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,1656
	ctx.r30.s64 = ctx.r31.s64 + 1656;
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82aeb9f4
	if (ctx.cr6.eq) goto loc_82AEB9F4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82AEB9F4;
	sub_82294520(ctx, base);
loc_82AEB9F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82AEB9FC;
	sub_82294CC8(ctx, base);
	// addi r3,r31,1608
	ctx.r3.s64 = ctx.r31.s64 + 1608;
	// bl 0x82aebad8
	ctx.lr = 0x82AEBA04;
	sub_82AEBAD8(ctx, base);
	// addi r3,r31,1584
	ctx.r3.s64 = ctx.r31.s64 + 1584;
	// bl 0x82aeba50
	ctx.lr = 0x82AEBA0C;
	sub_82AEBA50(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,9792
	ctx.r10.s64 = ctx.r11.s64 + 9792;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEBA20;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82976488
	ctx.lr = 0x82AEBA28;
	sub_82976488(ctx, base);
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

__attribute__((alias("__imp__sub_82AEBA40"))) PPC_WEAK_FUNC(sub_82AEBA40);
PPC_FUNC_IMPL(__imp__sub_82AEBA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBA44"))) PPC_WEAK_FUNC(sub_82AEBA44);
PPC_FUNC_IMPL(__imp__sub_82AEBA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBA48"))) PPC_WEAK_FUNC(sub_82AEBA48);
PPC_FUNC_IMPL(__imp__sub_82AEBA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBA4C"))) PPC_WEAK_FUNC(sub_82AEBA4C);
PPC_FUNC_IMPL(__imp__sub_82AEBA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBA50"))) PPC_WEAK_FUNC(sub_82AEBA50);
PPC_FUNC_IMPL(__imp__sub_82AEBA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBA58;
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
	// beq cr6,0x82aeba98
	if (ctx.cr6.eq) goto loc_82AEBA98;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aeba84
	if (!ctx.cr6.eq) goto loc_82AEBA84;
	// bl 0x822900a0
	ctx.lr = 0x82AEBA80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEBA84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEBA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEBA98:
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

__attribute__((alias("__imp__sub_82AEBAB0"))) PPC_WEAK_FUNC(sub_82AEBAB0);
PPC_FUNC_IMPL(__imp__sub_82AEBAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBAC0"))) PPC_WEAK_FUNC(sub_82AEBAC0);
PPC_FUNC_IMPL(__imp__sub_82AEBAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aeba50
	sub_82AEBA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBAC4"))) PPC_WEAK_FUNC(sub_82AEBAC4);
PPC_FUNC_IMPL(__imp__sub_82AEBAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBAC8"))) PPC_WEAK_FUNC(sub_82AEBAC8);
PPC_FUNC_IMPL(__imp__sub_82AEBAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBACC"))) PPC_WEAK_FUNC(sub_82AEBACC);
PPC_FUNC_IMPL(__imp__sub_82AEBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBAD0"))) PPC_WEAK_FUNC(sub_82AEBAD0);
PPC_FUNC_IMPL(__imp__sub_82AEBAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBAD4"))) PPC_WEAK_FUNC(sub_82AEBAD4);
PPC_FUNC_IMPL(__imp__sub_82AEBAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBAD8"))) PPC_WEAK_FUNC(sub_82AEBAD8);
PPC_FUNC_IMPL(__imp__sub_82AEBAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBAE0;
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
	// beq cr6,0x82aebb20
	if (ctx.cr6.eq) goto loc_82AEBB20;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aebb0c
	if (!ctx.cr6.eq) goto loc_82AEBB0C;
	// bl 0x822900a0
	ctx.lr = 0x82AEBB08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEBB0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEBB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEBB20:
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

__attribute__((alias("__imp__sub_82AEBB38"))) PPC_WEAK_FUNC(sub_82AEBB38);
PPC_FUNC_IMPL(__imp__sub_82AEBB38) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBB50"))) PPC_WEAK_FUNC(sub_82AEBB50);
PPC_FUNC_IMPL(__imp__sub_82AEBB50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aebad8
	sub_82AEBAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBB54"))) PPC_WEAK_FUNC(sub_82AEBB54);
PPC_FUNC_IMPL(__imp__sub_82AEBB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBB58"))) PPC_WEAK_FUNC(sub_82AEBB58);
PPC_FUNC_IMPL(__imp__sub_82AEBB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBB5C"))) PPC_WEAK_FUNC(sub_82AEBB5C);
PPC_FUNC_IMPL(__imp__sub_82AEBB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBB60"))) PPC_WEAK_FUNC(sub_82AEBB60);
PPC_FUNC_IMPL(__imp__sub_82AEBB60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBB64"))) PPC_WEAK_FUNC(sub_82AEBB64);
PPC_FUNC_IMPL(__imp__sub_82AEBB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBB68"))) PPC_WEAK_FUNC(sub_82AEBB68);
PPC_FUNC_IMPL(__imp__sub_82AEBB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBB70;
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
	// beq cr6,0x82aebbb0
	if (ctx.cr6.eq) goto loc_82AEBBB0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aebb9c
	if (!ctx.cr6.eq) goto loc_82AEBB9C;
	// bl 0x822900a0
	ctx.lr = 0x82AEBB98;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEBB9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEBBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEBBB0:
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

__attribute__((alias("__imp__sub_82AEBBC8"))) PPC_WEAK_FUNC(sub_82AEBBC8);
PPC_FUNC_IMPL(__imp__sub_82AEBBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aebb68
	sub_82AEBB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBBCC"))) PPC_WEAK_FUNC(sub_82AEBBCC);
PPC_FUNC_IMPL(__imp__sub_82AEBBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBBD0"))) PPC_WEAK_FUNC(sub_82AEBBD0);
PPC_FUNC_IMPL(__imp__sub_82AEBBD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBBD4"))) PPC_WEAK_FUNC(sub_82AEBBD4);
PPC_FUNC_IMPL(__imp__sub_82AEBBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBBD8"))) PPC_WEAK_FUNC(sub_82AEBBD8);
PPC_FUNC_IMPL(__imp__sub_82AEBBD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBBDC"))) PPC_WEAK_FUNC(sub_82AEBBDC);
PPC_FUNC_IMPL(__imp__sub_82AEBBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBBE0"))) PPC_WEAK_FUNC(sub_82AEBBE0);
PPC_FUNC_IMPL(__imp__sub_82AEBBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBBE8;
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
	// beq cr6,0x82aebc28
	if (ctx.cr6.eq) goto loc_82AEBC28;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aebc14
	if (!ctx.cr6.eq) goto loc_82AEBC14;
	// bl 0x822900a0
	ctx.lr = 0x82AEBC10;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEBC14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEBC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEBC28:
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

__attribute__((alias("__imp__sub_82AEBC40"))) PPC_WEAK_FUNC(sub_82AEBC40);
PPC_FUNC_IMPL(__imp__sub_82AEBC40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aebbe0
	sub_82AEBBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBC44"))) PPC_WEAK_FUNC(sub_82AEBC44);
PPC_FUNC_IMPL(__imp__sub_82AEBC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBC48"))) PPC_WEAK_FUNC(sub_82AEBC48);
PPC_FUNC_IMPL(__imp__sub_82AEBC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBC4C"))) PPC_WEAK_FUNC(sub_82AEBC4C);
PPC_FUNC_IMPL(__imp__sub_82AEBC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBC50"))) PPC_WEAK_FUNC(sub_82AEBC50);
PPC_FUNC_IMPL(__imp__sub_82AEBC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBC54"))) PPC_WEAK_FUNC(sub_82AEBC54);
PPC_FUNC_IMPL(__imp__sub_82AEBC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBC58"))) PPC_WEAK_FUNC(sub_82AEBC58);
PPC_FUNC_IMPL(__imp__sub_82AEBC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBC60;
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
	// beq cr6,0x82aebca0
	if (ctx.cr6.eq) goto loc_82AEBCA0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aebc8c
	if (!ctx.cr6.eq) goto loc_82AEBC8C;
	// bl 0x822900a0
	ctx.lr = 0x82AEBC88;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEBC8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEBCA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEBCA0:
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

__attribute__((alias("__imp__sub_82AEBCB8"))) PPC_WEAK_FUNC(sub_82AEBCB8);
PPC_FUNC_IMPL(__imp__sub_82AEBCB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aebc58
	sub_82AEBC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBCBC"))) PPC_WEAK_FUNC(sub_82AEBCBC);
PPC_FUNC_IMPL(__imp__sub_82AEBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBCC0"))) PPC_WEAK_FUNC(sub_82AEBCC0);
PPC_FUNC_IMPL(__imp__sub_82AEBCC0) {
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
	ctx.lr = 0x82AEBCD8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aebd5c
	if (ctx.cr6.eq) goto loc_82AEBD5C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-14532
	ctx.r11.s64 = ctx.r8.s64 + -14532;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-16216
	ctx.r6.s64 = ctx.r5.s64 + -16216;
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEBD4C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEBD5C:
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

__attribute__((alias("__imp__sub_82AEBD70"))) PPC_WEAK_FUNC(sub_82AEBD70);
PPC_FUNC_IMPL(__imp__sub_82AEBD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-30828(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30828);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aebda4
	if (!ctx.cr6.eq) goto loc_82AEBDA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82499ef0
	ctx.lr = 0x82AEBD98;
	sub_82499EF0(ctx, base);
	// stw r3,-30828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30828, ctx.r3.u32);
	// bl 0x82499fb0
	ctx.lr = 0x82AEBDA0;
	sub_82499FB0(ctx, base);
	// lwz r10,-30828(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30828);
loc_82AEBDA4:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aebdc4
	if (ctx.cr6.eq) goto loc_82AEBDC4;
	// bl 0x822d2990
	ctx.lr = 0x82AEBDB8;
	sub_822D2990(ctx, base);
	// lwz r11,-24116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24116);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aebdcc
	goto loc_82AEBDCC;
loc_82AEBDC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEBDCC:
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
	// bne cr6,0x82aebdfc
	if (!ctx.cr6.eq) goto loc_82AEBDFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEBDEC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEBDF4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24116);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEBDFC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aebe28
	if (!ctx.cr6.eq) goto loc_82AEBE28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEBE18;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEBE20;
	sub_82398640(ctx, base);
	// lwz r11,-24116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24116);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEBE28:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aebe60
	if (ctx.cr6.eq) goto loc_82AEBE60;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEBE44;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aebe60
	if (!ctx.cr6.eq) goto loc_82AEBE60;
	// lwz r3,-24116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEBE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEBE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBE68"))) PPC_WEAK_FUNC(sub_82AEBE68);
PPC_FUNC_IMPL(__imp__sub_82AEBE68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEBE70"))) PPC_WEAK_FUNC(sub_82AEBE70);
PPC_FUNC_IMPL(__imp__sub_82AEBE70) {
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
	// lwz r11,-30828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30828);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aebeb4
	if (!ctx.cr6.eq) goto loc_82AEBEB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82499ef0
	ctx.lr = 0x82AEBEA8;
	sub_82499EF0(ctx, base);
	// stw r3,-30828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30828, ctx.r3.u32);
	// bl 0x82499fb0
	ctx.lr = 0x82AEBEB0;
	sub_82499FB0(ctx, base);
	// lwz r11,-30828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30828);
loc_82AEBEB4:
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

__attribute__((alias("__imp__sub_82AEBEDC"))) PPC_WEAK_FUNC(sub_82AEBEDC);
PPC_FUNC_IMPL(__imp__sub_82AEBEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBEE0"))) PPC_WEAK_FUNC(sub_82AEBEE0);
PPC_FUNC_IMPL(__imp__sub_82AEBEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBEE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822ab8c0
	ctx.lr = 0x82AEBF18;
	sub_822AB8C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEBF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b41e8
	ctx.lr = 0x82AEBF48;
	sub_822B41E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBF50"))) PPC_WEAK_FUNC(sub_82AEBF50);
PPC_FUNC_IMPL(__imp__sub_82AEBF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEBF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822ab8c0
	ctx.lr = 0x82AEBF8C;
	sub_822AB8C0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,364(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AEBFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b41e8
	ctx.lr = 0x82AEBFBC;
	sub_822B41E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEBFC4"))) PPC_WEAK_FUNC(sub_82AEBFC4);
PPC_FUNC_IMPL(__imp__sub_82AEBFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEBFC8"))) PPC_WEAK_FUNC(sub_82AEBFC8);
PPC_FUNC_IMPL(__imp__sub_82AEBFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AEBFD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x824b40d8
	ctx.lr = 0x82AEBFF0;
	sub_824B40D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82aec09c
	if (ctx.cr6.eq) goto loc_82AEC09C;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aec09c
	if (ctx.cr6.eq) goto loc_82AEC09C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82aec09c
	if (!ctx.cr6.eq) goto loc_82AEC09C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f1ed0
	ctx.lr = 0x82AEC01C;
	sub_823F1ED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aec09c
	if (ctx.cr6.eq) goto loc_82AEC09C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,8104
	ctx.r5.s64 = ctx.r10.s64 + 8104;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ad6c8
	ctx.lr = 0x82AEC04C;
	sub_824AD6C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aec070
	if (!ctx.cr6.gt) goto loc_82AEC070;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AEC05C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// bne 0x82aec05c
	if (!ctx.cr0.eq) goto loc_82AEC05C;
loc_82AEC070:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEC094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c2e20
	ctx.lr = 0x82AEC09C;
	sub_824C2E20(ctx, base);
loc_82AEC09C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEC0A8"))) PPC_WEAK_FUNC(sub_82AEC0A8);
PPC_FUNC_IMPL(__imp__sub_82AEC0A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-14480
	ctx.r8.s64 = ctx.r9.s64 + -14480;
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

__attribute__((alias("__imp__sub_82AEC0D0"))) PPC_WEAK_FUNC(sub_82AEC0D0);
PPC_FUNC_IMPL(__imp__sub_82AEC0D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEC0D8"))) PPC_WEAK_FUNC(sub_82AEC0D8);
PPC_FUNC_IMPL(__imp__sub_82AEC0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r9,-14480
	ctx.r8.s64 = ctx.r9.s64 + -14480;
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

__attribute__((alias("__imp__sub_82AEC0F8"))) PPC_WEAK_FUNC(sub_82AEC0F8);
PPC_FUNC_IMPL(__imp__sub_82AEC0F8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14480
	ctx.r10.s64 = ctx.r11.s64 + -14480;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEC124;
	sub_8229C068(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,8264
	ctx.r8.s64 = ctx.r9.s64 + 8264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEC138;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248f290
	ctx.lr = 0x82AEC140;
	sub_8248F290(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82aec174
	if (ctx.cr6.eq) goto loc_82AEC174;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aec16c
	if (ctx.cr6.lt) goto loc_82AEC16C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aec174
	if (!ctx.cr6.gt) goto loc_82AEC174;
loc_82AEC16C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEC174;
	sub_82294A58(ctx, base);
loc_82AEC174:
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

__attribute__((alias("__imp__sub_82AEC190"))) PPC_WEAK_FUNC(sub_82AEC190);
PPC_FUNC_IMPL(__imp__sub_82AEC190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-14480
	ctx.r10.s64 = ctx.r11.s64 + -14480;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEC1B4;
	sub_8229C068(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,8264
	ctx.r8.s64 = ctx.r9.s64 + 8264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEC1C8;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248f290
	ctx.lr = 0x82AEC1D0;
	sub_8248F290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEC1E4"))) PPC_WEAK_FUNC(sub_82AEC1E4);
PPC_FUNC_IMPL(__imp__sub_82AEC1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEC1E8"))) PPC_WEAK_FUNC(sub_82AEC1E8);
PPC_FUNC_IMPL(__imp__sub_82AEC1E8) {
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
	ctx.lr = 0x82AEC200;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aec284
	if (ctx.cr6.eq) goto loc_82AEC284;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-14100
	ctx.r11.s64 = ctx.r8.s64 + -14100;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9224
	ctx.r6.s64 = ctx.r5.s64 + -9224;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1768
	ctx.r5.s64 = 1768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEC274;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEC284:
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

__attribute__((alias("__imp__sub_82AEC298"))) PPC_WEAK_FUNC(sub_82AEC298);
PPC_FUNC_IMPL(__imp__sub_82AEC298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEC2A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-25272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec2cc
	if (!ctx.cr6.eq) goto loc_82AEC2CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a3f550
	ctx.lr = 0x82AEC2C0;
	sub_82A3F550(ctx, base);
	// stw r3,-25272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25272, ctx.r3.u32);
	// bl 0x82a3f600
	ctx.lr = 0x82AEC2C8;
	sub_82A3F600(ctx, base);
	// lwz r10,-25272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
loc_82AEC2CC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aec2ec
	if (ctx.cr6.eq) goto loc_82AEC2EC;
	// bl 0x82994aa0
	ctx.lr = 0x82AEC2E0;
	sub_82994AA0(ctx, base);
	// lwz r11,-24112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24112);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aec2f4
	goto loc_82AEC2F4;
loc_82AEC2EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEC2F4:
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
	// bne cr6,0x82aec324
	if (!ctx.cr6.eq) goto loc_82AEC324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEC314;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEC31C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24112);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEC324:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec350
	if (!ctx.cr6.eq) goto loc_82AEC350;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEC340;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEC348;
	sub_82398640(ctx, base);
	// lwz r11,-24112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24112);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEC350:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aec388
	if (ctx.cr6.eq) goto loc_82AEC388;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEC36C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aec388
	if (!ctx.cr6.eq) goto loc_82AEC388;
	// lwz r3,-24112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEC388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEC388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEC390"))) PPC_WEAK_FUNC(sub_82AEC390);
PPC_FUNC_IMPL(__imp__sub_82AEC390) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEC398"))) PPC_WEAK_FUNC(sub_82AEC398);
PPC_FUNC_IMPL(__imp__sub_82AEC398) {
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
	// lwz r11,-25272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aec3dc
	if (!ctx.cr6.eq) goto loc_82AEC3DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a3f550
	ctx.lr = 0x82AEC3D0;
	sub_82A3F550(ctx, base);
	// stw r3,-25272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25272, ctx.r3.u32);
	// bl 0x82a3f600
	ctx.lr = 0x82AEC3D8;
	sub_82A3F600(ctx, base);
	// lwz r11,-25272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25272);
loc_82AEC3DC:
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

__attribute__((alias("__imp__sub_82AEC404"))) PPC_WEAK_FUNC(sub_82AEC404);
PPC_FUNC_IMPL(__imp__sub_82AEC404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEC408"))) PPC_WEAK_FUNC(sub_82AEC408);
PPC_FUNC_IMPL(__imp__sub_82AEC408) {
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
	ctx.lr = 0x82AEC420;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aec4a4
	if (ctx.cr6.eq) goto loc_82AEC4A4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-14064
	ctx.r11.s64 = ctx.r8.s64 + -14064;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9552
	ctx.r6.s64 = ctx.r5.s64 + -9552;
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
	// li r5,836
	ctx.r5.s64 = 836;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEC494;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEC4A4:
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

__attribute__((alias("__imp__sub_82AEC4B8"))) PPC_WEAK_FUNC(sub_82AEC4B8);
PPC_FUNC_IMPL(__imp__sub_82AEC4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEC4C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec4ec
	if (!ctx.cr6.eq) goto loc_82AEC4EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82AEC4E0;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82AEC4E8;
	sub_82B2A868(ctx, base);
	// lwz r10,-23708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82AEC4EC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aec50c
	if (ctx.cr6.eq) goto loc_82AEC50C;
	// bl 0x829979a0
	ctx.lr = 0x82AEC500;
	sub_829979A0(ctx, base);
	// lwz r11,-24108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24108);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aec514
	goto loc_82AEC514;
loc_82AEC50C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEC514:
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
	// bne cr6,0x82aec544
	if (!ctx.cr6.eq) goto loc_82AEC544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEC534;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEC53C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24108);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEC544:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec570
	if (!ctx.cr6.eq) goto loc_82AEC570;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEC560;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEC568;
	sub_82398640(ctx, base);
	// lwz r11,-24108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24108);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEC570:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aec5a8
	if (ctx.cr6.eq) goto loc_82AEC5A8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEC58C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aec5a8
	if (!ctx.cr6.eq) goto loc_82AEC5A8;
	// lwz r3,-24108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEC5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEC5A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEC5B0"))) PPC_WEAK_FUNC(sub_82AEC5B0);
PPC_FUNC_IMPL(__imp__sub_82AEC5B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEC5B8"))) PPC_WEAK_FUNC(sub_82AEC5B8);
PPC_FUNC_IMPL(__imp__sub_82AEC5B8) {
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
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aec5fc
	if (!ctx.cr6.eq) goto loc_82AEC5FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82b2a7b8
	ctx.lr = 0x82AEC5F0;
	sub_82B2A7B8(ctx, base);
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x82b2a868
	ctx.lr = 0x82AEC5F8;
	sub_82B2A868(ctx, base);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_82AEC5FC:
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

__attribute__((alias("__imp__sub_82AEC624"))) PPC_WEAK_FUNC(sub_82AEC624);
PPC_FUNC_IMPL(__imp__sub_82AEC624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEC628"))) PPC_WEAK_FUNC(sub_82AEC628);
PPC_FUNC_IMPL(__imp__sub_82AEC628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AEC630;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31881
	ctx.r30.s64 = -2089353216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// addi r24,r10,-17656
	ctx.r24.s64 = ctx.r10.s64 + -17656;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r10,-17648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17648);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// addi r25,r11,32016
	ctx.r25.s64 = ctx.r11.s64 + 32016;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aec710
	if (!ctx.cr6.eq) goto loc_82AEC710;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,17912(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17912);
	// addi r29,r11,24844
	ctx.r29.s64 = ctx.r11.s64 + 24844;
	// ori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 | 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,-17648(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17648, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec690
	if (!ctx.cr6.eq) goto loc_82AEC690;
	// bl 0x8233e3e0
	ctx.lr = 0x82AEC690;
	sub_8233E3E0(ctx, base);
loc_82AEC690:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82AEC6A4;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aec6b8
	if (ctx.cr6.eq) goto loc_82AEC6B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82AEC6B8:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aec700
	if (ctx.cr6.eq) goto loc_82AEC700;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// bl 0x822946f0
	ctx.lr = 0x82AEC6D0;
	sub_822946F0(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82aec700
	if (ctx.cr6.eq) goto loc_82AEC700;
loc_82AEC6E0:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82AEC6EC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82aec970
	if (ctx.cr6.eq) goto loc_82AEC970;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aec6e0
	if (!ctx.cr6.eq) goto loc_82AEC6E0;
loc_82AEC700:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
loc_82AEC70C:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_82AEC710:
	// lwz r10,-17648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17648);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r26,r11,-17664
	ctx.r26.s64 = ctx.r11.s64 + -17664;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aec7d0
	if (!ctx.cr6.eq) goto loc_82AEC7D0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,17912(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17912);
	// addi r29,r11,24796
	ctx.r29.s64 = ctx.r11.s64 + 24796;
	// ori r11,r9,2
	ctx.r11.u64 = ctx.r9.u64 | 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,-17648(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17648, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec750
	if (!ctx.cr6.eq) goto loc_82AEC750;
	// bl 0x8233e3e0
	ctx.lr = 0x82AEC750;
	sub_8233E3E0(ctx, base);
loc_82AEC750:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82AEC764;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aec778
	if (ctx.cr6.eq) goto loc_82AEC778;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82AEC778:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aec7c0
	if (ctx.cr6.eq) goto loc_82AEC7C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// bl 0x822946f0
	ctx.lr = 0x82AEC790;
	sub_822946F0(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82aec7c0
	if (ctx.cr6.eq) goto loc_82AEC7C0;
loc_82AEC7A0:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82AEC7AC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82aec978
	if (ctx.cr6.eq) goto loc_82AEC978;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aec7a0
	if (!ctx.cr6.eq) goto loc_82AEC7A0;
loc_82AEC7C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_82AEC7CC:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82AEC7D0:
	// lwz r10,-17648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17648);
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// addi r28,r11,-17672
	ctx.r28.s64 = ctx.r11.s64 + -17672;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aec890
	if (!ctx.cr6.eq) goto loc_82AEC890;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,17912(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17912);
	// addi r29,r11,24824
	ctx.r29.s64 = ctx.r11.s64 + 24824;
	// ori r11,r9,4
	ctx.r11.u64 = ctx.r9.u64 | 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,-17648(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17648, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec810
	if (!ctx.cr6.eq) goto loc_82AEC810;
	// bl 0x8233e3e0
	ctx.lr = 0x82AEC810;
	sub_8233E3E0(ctx, base);
loc_82AEC810:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82AEC824;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aec838
	if (ctx.cr6.eq) goto loc_82AEC838;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82AEC838:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aec880
	if (ctx.cr6.eq) goto loc_82AEC880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// bl 0x822946f0
	ctx.lr = 0x82AEC850;
	sub_822946F0(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82aec880
	if (ctx.cr6.eq) goto loc_82AEC880;
loc_82AEC860:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82AEC86C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82aec980
	if (ctx.cr6.eq) goto loc_82AEC980;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aec860
	if (!ctx.cr6.eq) goto loc_82AEC860;
loc_82AEC880:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82AEC88C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82AEC890:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a27af8
	ctx.lr = 0x82AEC89C;
	sub_82A27AF8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82aec8b4
	if (!ctx.cr6.eq) goto loc_82AEC8B4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82aec9b0
	if (ctx.cr6.eq) goto loc_82AEC9B0;
loc_82AEC8B4:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82aec8cc
	if (!ctx.cr6.eq) goto loc_82AEC8CC;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82aec940
	if (ctx.cr6.eq) goto loc_82AEC940;
loc_82AEC8CC:
	// lwz r11,1480(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aec900
	if (ctx.cr6.eq) goto loc_82AEC900;
	// lwz r11,1868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1868);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aec900
	if (!ctx.cr6.eq) goto loc_82AEC900;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82aec918
	if (!ctx.cr6.eq) goto loc_82AEC918;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82aec918
	if (!ctx.cr6.eq) goto loc_82AEC918;
loc_82AEC900:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEC918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEC918:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,1736(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1736, ctx.r10.u32);
	// lwz r9,1000(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AEC934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,1740(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r23.u32 + 1740, temp.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82AEC940:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82aec988
	if (!ctx.cr6.eq) goto loc_82AEC988;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82aec988
	if (!ctx.cr6.eq) goto loc_82AEC988;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aec9c8
	ctx.lr = 0x82AEC964;
	sub_82AEC9C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AEC970:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aec70c
	goto loc_82AEC70C;
loc_82AEC978:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aec7cc
	goto loc_82AEC7CC;
loc_82AEC980:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aec88c
	goto loc_82AEC88C;
loc_82AEC988:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82aec9b0
	if (!ctx.cr6.eq) goto loc_82AEC9B0;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82aec9b0
	if (!ctx.cr6.eq) goto loc_82AEC9B0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aeca18
	ctx.lr = 0x82AEC9A4;
	sub_82AECA18(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AEC9B0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a3fdd0
	ctx.lr = 0x82AEC9BC;
	sub_82A3FDD0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEC9C8"))) PPC_WEAK_FUNC(sub_82AEC9C8);
PPC_FUNC_IMPL(__imp__sub_82AEC9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aec9f4
	if (ctx.cr6.eq) goto loc_82AEC9F4;
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aec9f4
	if (ctx.cr6.eq) goto loc_82AEC9F4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,1736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1736, ctx.r10.u32);
	// lfs f0,732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1740(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1740, temp.u32);
loc_82AEC9F4:
	// lfs f0,1604(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,1604(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1604, temp.u32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82aeca14
	if (!ctx.cr6.lt) goto loc_82AECA14;
	// stfs f0,1604(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1604, temp.u32);
loc_82AECA14:
	// b 0x82a3fdd0
	sub_82A3FDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AECA18"))) PPC_WEAK_FUNC(sub_82AECA18);
PPC_FUNC_IMPL(__imp__sub_82AECA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AECA20;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r30,r11,-18304
	ctx.r30.s64 = ctx.r11.s64 + -18304;
	// lfs f0,1608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1652(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r7,r9,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f10,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f9,1608(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// bl 0x82aecf18
	ctx.lr = 0x82AECA78;
	sub_82AECF18(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1100(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1100);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82AECA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82aecaa4
	if (ctx.cr6.gt) goto loc_82AECAA4;
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aecda4
	if (ctx.cr6.eq) goto loc_82AECDA4;
loc_82AECAA4:
	// lfs f13,1652(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,1608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lwz r29,1612(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lfs f13,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r7,r9,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f11,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f0,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// beq cr6,0x82aecaf8
	if (ctx.cr6.eq) goto loc_82AECAF8;
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aecb04
	if (!ctx.cr6.eq) goto loc_82AECB04;
loc_82AECAF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f13,1740(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1740, temp.u32);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
loc_82AECB04:
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// stw r9,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r9.u32);
	// ble cr6,0x82aecb3c
	if (!ctx.cr6.gt) goto loc_82AECB3C;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
loc_82AECB3C:
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aecbd0
	if (ctx.cr6.eq) goto loc_82AECBD0;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82aecbd0
	if (!ctx.cr6.gt) goto loc_82AECBD0;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,1596(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// ble cr6,0x82aecbd0
	if (!ctx.cr6.gt) goto loc_82AECBD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AECB88:
	// lwz r9,1588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r8,1588(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// lwz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,12(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r7,1588(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82aecb88
	if (ctx.cr6.lt) goto loc_82AECB88;
loc_82AECBD0:
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82aecda4
	if (!ctx.cr6.gt) goto loc_82AECDA4;
	// lwz r10,736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// subf r30,r29,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aecc2c
	if (!ctx.cr6.eq) goto loc_82AECC2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AECC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82aecc2c
	if (!ctx.cr6.gt) goto loc_82AECC2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AECC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r9,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r9.u32);
loc_82AECC2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82aecda4
	if (!ctx.cr6.gt) goto loc_82AECDA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AECC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeccf0
	if (ctx.cr6.eq) goto loc_82AECCF0;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aeccf0
	if (!ctx.cr6.gt) goto loc_82AECCF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AECC70:
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,1592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,1592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// lwz r5,1612(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r10,60(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r3,1592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82aecc70
	if (ctx.cr6.lt) goto loc_82AECC70;
loc_82AECCF0:
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aecd28
	if (!ctx.cr6.eq) goto loc_82AECD28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AECD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r9.u32);
loc_82AECD28:
	// lwz r3,1624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aecd88
	if (ctx.cr6.eq) goto loc_82AECD88;
	// lwz r10,1660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aecd88
	if (ctx.cr6.eq) goto loc_82AECD88;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r9,780(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82aecd88
	if (!ctx.cr6.gt) goto loc_82AECD88;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 776);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r8.u32);
	// stw r7,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r7.u32);
	// stw r6,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r6.u32);
	// bl 0x8265a3b0
	ctx.lr = 0x82AECD88;
	sub_8265A3B0(ctx, base);
loc_82AECD88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aeda50
	ctx.lr = 0x82AECD90;
	sub_82AEDA50(ctx, base);
	// lwz r3,1600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aecda4
	if (ctx.cr6.eq) goto loc_82AECDA4;
	// lwz r4,1612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// bl 0x82aed9f8
	ctx.lr = 0x82AECDA4;
	sub_82AED9F8(ctx, base);
loc_82AECDA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aecfd0
	ctx.lr = 0x82AECDAC;
	sub_82AECFD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a3fdd0
	ctx.lr = 0x82AECDB8;
	sub_82A3FDD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AECDC8"))) PPC_WEAK_FUNC(sub_82AECDC8);
PPC_FUNC_IMPL(__imp__sub_82AECDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,724(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,728(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AECDD8"))) PPC_WEAK_FUNC(sub_82AECDD8);
PPC_FUNC_IMPL(__imp__sub_82AECDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// lfs f0,728(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AECDFC"))) PPC_WEAK_FUNC(sub_82AECDFC);
PPC_FUNC_IMPL(__imp__sub_82AECDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AECE00"))) PPC_WEAK_FUNC(sub_82AECE00);
PPC_FUNC_IMPL(__imp__sub_82AECE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,1100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AECE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1656(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// lwz r8,1612(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82aece3c
	if (!ctx.cr6.gt) goto loc_82AECE3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82AECE3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AECE50"))) PPC_WEAK_FUNC(sub_82AECE50);
PPC_FUNC_IMPL(__imp__sub_82AECE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r10,1096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AECE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_82AECE9C"))) PPC_WEAK_FUNC(sub_82AECE9C);
PPC_FUNC_IMPL(__imp__sub_82AECE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AECEA0"))) PPC_WEAK_FUNC(sub_82AECEA0);
PPC_FUNC_IMPL(__imp__sub_82AECEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1656(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AECEA8"))) PPC_WEAK_FUNC(sub_82AECEA8);
PPC_FUNC_IMPL(__imp__sub_82AECEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r9,1656(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,728(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f11.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fmuls f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82aecf00
	if (!ctx.cr6.gt) goto loc_82AECF00;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AECF00:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,724(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 724, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AECF14"))) PPC_WEAK_FUNC(sub_82AECF14);
PPC_FUNC_IMPL(__imp__sub_82AECF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AECF18"))) PPC_WEAK_FUNC(sub_82AECF18);
PPC_FUNC_IMPL(__imp__sub_82AECF18) {
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
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aecfbc
	if (ctx.cr6.eq) goto loc_82AECFBC;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82aecfbc
	if (!ctx.cr6.gt) goto loc_82AECFBC;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aecfbc
	if (ctx.cr6.eq) goto loc_82AECFBC;
	// lwz r3,900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aecfbc
	if (ctx.cr6.eq) goto loc_82AECFBC;
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x825e5f98
	ctx.lr = 0x82AECF70;
	sub_825E5F98(ctx, base);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,1600(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8276feb0
	ctx.lr = 0x82AECFA8;
	sub_8276FEB0(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// bl 0x825cd468
	ctx.lr = 0x82AECFBC;
	sub_825CD468(ctx, base);
loc_82AECFBC:
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

__attribute__((alias("__imp__sub_82AECFD0"))) PPC_WEAK_FUNC(sub_82AECFD0);
PPC_FUNC_IMPL(__imp__sub_82AECFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,1608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,1652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1652);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f11,1552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r8,-18304
	ctx.r7.s64 = ctx.r8.s64 + -18304;
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f13,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f7,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f6,f7,f12,f0
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fmadds f1,f6,f9,f11
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f11.f64));
	// b 0x829e3d78
	sub_829E3D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AED038"))) PPC_WEAK_FUNC(sub_82AED038);
PPC_FUNC_IMPL(__imp__sub_82AED038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED03C"))) PPC_WEAK_FUNC(sub_82AED03C);
PPC_FUNC_IMPL(__imp__sub_82AED03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AED040"))) PPC_WEAK_FUNC(sub_82AED040);
PPC_FUNC_IMPL(__imp__sub_82AED040) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r4,1624(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1624);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aed094
	if (ctx.cr6.eq) goto loc_82AED094;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// bl 0x8276feb0
	ctx.lr = 0x82AED094;
	sub_8276FEB0(ctx, base);
loc_82AED094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED0A4"))) PPC_WEAK_FUNC(sub_82AED0A4);
PPC_FUNC_IMPL(__imp__sub_82AED0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AED0A8"))) PPC_WEAK_FUNC(sub_82AED0A8);
PPC_FUNC_IMPL(__imp__sub_82AED0A8) {
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
	// lwz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aed0e0
	if (!ctx.cr6.eq) goto loc_82AED0E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AED0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82aed0e4
	if (!ctx.cr6.gt) goto loc_82AED0E4;
loc_82AED0E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AED0E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED0F4"))) PPC_WEAK_FUNC(sub_82AED0F4);
PPC_FUNC_IMPL(__imp__sub_82AED0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AED0F8"))) PPC_WEAK_FUNC(sub_82AED0F8);
PPC_FUNC_IMPL(__imp__sub_82AED0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1736);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f1,1740(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED108"))) PPC_WEAK_FUNC(sub_82AED108);
PPC_FUNC_IMPL(__imp__sub_82AED108) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED110"))) PPC_WEAK_FUNC(sub_82AED110);
PPC_FUNC_IMPL(__imp__sub_82AED110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AED118;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r27,-24112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24112);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82aed148
	if (!ctx.cr6.eq) goto loc_82AED148;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aec1e8
	ctx.lr = 0x82AED13C;
	sub_82AEC1E8(ctx, base);
	// stw r3,-24112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24112, ctx.r3.u32);
	// bl 0x82aec298
	ctx.lr = 0x82AED144;
	sub_82AEC298(ctx, base);
	// lwz r27,-24112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24112);
loc_82AED148:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r4,r11,-14032
	ctx.r4.s64 = ctx.r11.s64 + -14032;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x822960c0
	ctx.lr = 0x82AED160;
	sub_822960C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7100
	ctx.lr = 0x82AED178;
	sub_822A7100(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82aed194
	if (!ctx.cr6.eq) goto loc_82AED194;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82AED194:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82AED1A8;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aed350
	if (ctx.cr6.eq) goto loc_82AED350;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed20c
	if (ctx.cr6.eq) goto loc_82AED20C;
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed1e0
	if (ctx.cr6.eq) goto loc_82AED1E0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aed1e8
	goto loc_82AED1E8;
loc_82AED1E0:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AED1E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AED200;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aed360
	if (!ctx.cr6.eq) goto loc_82AED360;
loc_82AED20C:
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
	// bne cr6,0x82aed228
	if (!ctx.cr6.eq) goto loc_82AED228;
	// bl 0x823648a0
	ctx.lr = 0x82AED228;
	sub_823648A0(ctx, base);
loc_82AED228:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82AED22C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed240
	if (ctx.cr6.eq) goto loc_82AED240;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x82aed22c
	if (!ctx.cr6.eq) goto loc_82AED22C;
loc_82AED240:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6698
	ctx.lr = 0x82AED258;
	sub_822A6698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82aed30c
	if (ctx.cr6.eq) goto loc_82AED30C;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82aed2e4
	if (ctx.cr6.eq) goto loc_82AED2E4;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82aed2e4
	if (!ctx.cr6.eq) goto loc_82AED2E4;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x82AED294;
	sub_8229BCD0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82aed2a8
	if (!ctx.cr6.eq) goto loc_82AED2A8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82AED2A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x82AED2C4;
	sub_822A7880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82AED2D0;
	sub_82299080(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82aed30c
	if (!ctx.cr6.eq) goto loc_82AED30C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82aed30c
	if (ctx.cr6.eq) goto loc_82AED30C;
loc_82AED2E4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823aba10
	ctx.lr = 0x82AED300;
	sub_823ABA10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aed344
	if (!ctx.cr6.eq) goto loc_82AED344;
loc_82AED30C:
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed320
	if (ctx.cr6.eq) goto loc_82AED320;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aed328
	goto loc_82AED328;
loc_82AED320:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AED328:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AED340;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AED344:
	// bl 0x822a8060
	ctx.lr = 0x82AED348;
	sub_822A8060(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aed360
	if (!ctx.cr6.eq) goto loc_82AED360;
loc_82AED350:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AED358;
	sub_82299080(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82aed36c
	goto loc_82AED36C;
loc_82AED360:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AED368;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AED36C:
	// bl 0x82a5fe08
	ctx.lr = 0x82AED370;
	sub_82A5FE08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aed380
	if (!ctx.cr6.eq) goto loc_82AED380;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AED380:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// blt cr6,0x82aed3a0
	if (ctx.cr6.lt) goto loc_82AED3A0;
	// bne cr6,0x82aed3a4
	if (!ctx.cr6.eq) goto loc_82AED3A4;
	// lwz r11,1748(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1748);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82AED3A0:
	// lwz r11,1760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1760);
loc_82AED3A4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AED3B0"))) PPC_WEAK_FUNC(sub_82AED3B0);
PPC_FUNC_IMPL(__imp__sub_82AED3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82AED3B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r27,-24112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24112);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82aed3ec
	if (!ctx.cr6.eq) goto loc_82AED3EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aec1e8
	ctx.lr = 0x82AED3E0;
	sub_82AEC1E8(ctx, base);
	// stw r3,-24112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24112, ctx.r3.u32);
	// bl 0x82aec298
	ctx.lr = 0x82AED3E8;
	sub_82AEC298(ctx, base);
	// lwz r27,-24112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24112);
loc_82AED3EC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r4,r11,-14032
	ctx.r4.s64 = ctx.r11.s64 + -14032;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x822960c0
	ctx.lr = 0x82AED404;
	sub_822960C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7100
	ctx.lr = 0x82AED41C;
	sub_822A7100(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82aed438
	if (!ctx.cr6.eq) goto loc_82AED438;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82AED438:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82AED44C;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aed5f4
	if (ctx.cr6.eq) goto loc_82AED5F4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed4b0
	if (ctx.cr6.eq) goto loc_82AED4B0;
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed484
	if (ctx.cr6.eq) goto loc_82AED484;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aed48c
	goto loc_82AED48C;
loc_82AED484:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AED48C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AED4A4;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aed604
	if (!ctx.cr6.eq) goto loc_82AED604;
loc_82AED4B0:
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
	// bne cr6,0x82aed4cc
	if (!ctx.cr6.eq) goto loc_82AED4CC;
	// bl 0x823648a0
	ctx.lr = 0x82AED4CC;
	sub_823648A0(ctx, base);
loc_82AED4CC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82AED4D0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed4e4
	if (ctx.cr6.eq) goto loc_82AED4E4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x82aed4d0
	if (!ctx.cr6.eq) goto loc_82AED4D0;
loc_82AED4E4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6698
	ctx.lr = 0x82AED4FC;
	sub_822A6698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82aed5b0
	if (ctx.cr6.eq) goto loc_82AED5B0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82aed588
	if (ctx.cr6.eq) goto loc_82AED588;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82aed588
	if (!ctx.cr6.eq) goto loc_82AED588;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x82AED538;
	sub_8229BCD0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82aed54c
	if (!ctx.cr6.eq) goto loc_82AED54C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82AED54C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x82AED568;
	sub_822A7880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82AED574;
	sub_82299080(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82aed5b0
	if (!ctx.cr6.eq) goto loc_82AED5B0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82aed5b0
	if (ctx.cr6.eq) goto loc_82AED5B0;
loc_82AED588:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823aba10
	ctx.lr = 0x82AED5A4;
	sub_823ABA10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aed5e8
	if (!ctx.cr6.eq) goto loc_82AED5E8;
loc_82AED5B0:
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed5c4
	if (ctx.cr6.eq) goto loc_82AED5C4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82aed5cc
	goto loc_82AED5CC;
loc_82AED5C4:
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,42,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 42) & 0xFFFFFFFFFFFFFFFF;
loc_82AED5CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0408
	ctx.lr = 0x82AED5E4;
	sub_822A0408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AED5E8:
	// bl 0x822a8060
	ctx.lr = 0x82AED5EC;
	sub_822A8060(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aed604
	if (!ctx.cr6.eq) goto loc_82AED604;
loc_82AED5F4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AED5FC;
	sub_82299080(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82aed610
	goto loc_82AED610;
loc_82AED604:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AED60C;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AED610:
	// bl 0x82a5fe08
	ctx.lr = 0x82AED614;
	sub_82A5FE08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aed624
	if (!ctx.cr6.eq) goto loc_82AED624;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82AED624:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// blt cr6,0x82aed64c
	if (ctx.cr6.lt) goto loc_82AED64C;
	// bne cr6,0x82aed658
	if (!ctx.cr6.eq) goto loc_82AED658;
	// lwz r11,1744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// rlwinm r10,r22,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82AED64C:
	// lwz r11,1756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1756);
	// rlwinm r10,r22,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82AED658:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AED664"))) PPC_WEAK_FUNC(sub_82AED664);
PPC_FUNC_IMPL(__imp__sub_82AED664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AED668"))) PPC_WEAK_FUNC(sub_82AED668);
PPC_FUNC_IMPL(__imp__sub_82AED668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AED670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed728
	if (ctx.cr6.eq) goto loc_82AED728;
	// lwz r3,492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aed728
	if (ctx.cr6.eq) goto loc_82AED728;
	// ld r4,788(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 788);
	// bl 0x82518650
	ctx.lr = 0x82AED698;
	sub_82518650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aed728
	if (ctx.cr6.eq) goto loc_82AED728;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aed728
	if (ctx.cr6.eq) goto loc_82AED728;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82aed6c4
	if (ctx.cr6.eq) goto loc_82AED6C4;
	// bl 0x82513320
	ctx.lr = 0x82AED6C4;
	sub_82513320(ctx, base);
loc_82AED6C4:
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aed728
	if (ctx.cr6.eq) goto loc_82AED728;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aed728
	if (!ctx.cr6.gt) goto loc_82AED728;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AED6E4:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8250d120
	ctx.lr = 0x82AED6F0;
	sub_8250D120(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aed714
	if (!ctx.cr6.eq) goto loc_82AED714;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82aed6e4
	if (ctx.cr6.lt) goto loc_82AED6E4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82AED714:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AED724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,708(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 708, temp.u32);
loc_82AED728:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AED730"))) PPC_WEAK_FUNC(sub_82AED730);
PPC_FUNC_IMPL(__imp__sub_82AED730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82AED738;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,560(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed8f4
	if (ctx.cr6.eq) goto loc_82AED8F4;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aed8f4
	if (ctx.cr6.eq) goto loc_82AED8F4;
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aed8f4
	if (!ctx.cr6.gt) goto loc_82AED8F4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r23,-31884
	ctx.r23.s64 = -2089549824;
	// lfs f31,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f31.f64 = double(temp.f32);
loc_82AED77C:
	// lwz r11,560(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 560);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r9,660(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// lwzx r28,r9,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82aed8d8
	if (ctx.cr6.eq) goto loc_82AED8D8;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aed8d8
	if (ctx.cr6.eq) goto loc_82AED8D8;
	// lwz r11,788(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 788);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82aed8d8
	if (!ctx.cr6.eq) goto loc_82AED8D8;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,792(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 792);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82aed8d8
	if (!ctx.cr6.eq) goto loc_82AED8D8;
	// lwz r11,24988(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24988);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82aed7d4
	if (ctx.cr6.eq) goto loc_82AED7D4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82513320
	ctx.lr = 0x82AED7D4;
	sub_82513320(ctx, base);
loc_82AED7D4:
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82aed8d8
	if (ctx.cr6.eq) goto loc_82AED8D8;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aed8d8
	if (!ctx.cr6.gt) goto loc_82AED8D8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AED7F4:
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8250cb28
	ctx.lr = 0x82AED800;
	sub_8250CB28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aed840
	if (ctx.cr6.eq) goto loc_82AED840;
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aed840
	if (!ctx.cr6.gt) goto loc_82AED840;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82aed840
	if (ctx.cr6.gt) goto loc_82AED840;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AED838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aed858
	if (!ctx.cr6.eq) goto loc_82AED858;
loc_82AED840:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82aed7f4
	if (ctx.cr6.lt) goto loc_82AED7F4;
	// b 0x82aed8d8
	goto loc_82AED8D8;
loc_82AED858:
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82438200
	ctx.lr = 0x82AED870;
	sub_82438200(ctx, base);
	// lwz r11,716(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82aed8cc
	if (ctx.cr6.lt) goto loc_82AED8CC;
	// lwz r10,780(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 780);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82aed8cc
	if (!ctx.cr6.lt) goto loc_82AED8CC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,776(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82AED8CC:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,712(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 712, temp.u32);
loc_82AED8D8:
	// lwz r11,560(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 560);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r9,664(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82aed77c
	if (ctx.cr6.lt) goto loc_82AED77C;
loc_82AED8F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AED900"))) PPC_WEAK_FUNC(sub_82AED900);
PPC_FUNC_IMPL(__imp__sub_82AED900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aed9c4
	if (ctx.cr6.eq) goto loc_82AED9C4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aed974
	if (ctx.cr6.eq) goto loc_82AED974;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AED940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,488(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 488);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AED958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// bl 0x82516af8
	ctx.lr = 0x82AED960;
	sub_82516AF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AED974:
	// bl 0x82516e80
	ctx.lr = 0x82AED978;
	sub_82516E80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// bl 0x82516518
	ctx.lr = 0x82AED984;
	sub_82516518(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// bl 0x825166b8
	ctx.lr = 0x82AED98C;
	sub_825166B8(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// bl 0x825185c0
	ctx.lr = 0x82AED994;
	sub_825185C0(ctx, base);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AED9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,488(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 488);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AED9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AED9C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED9D8"))) PPC_WEAK_FUNC(sub_82AED9D8);
PPC_FUNC_IMPL(__imp__sub_82AED9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED9E8"))) PPC_WEAK_FUNC(sub_82AED9E8);
PPC_FUNC_IMPL(__imp__sub_82AED9E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AED9F8"))) PPC_WEAK_FUNC(sub_82AED9F8);
PPC_FUNC_IMPL(__imp__sub_82AED9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEDA00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,232(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 232);
	// bl 0x8229e490
	ctx.lr = 0x82AEDA24;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEDA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEDA48"))) PPC_WEAK_FUNC(sub_82AEDA48);
PPC_FUNC_IMPL(__imp__sub_82AEDA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDA4C"))) PPC_WEAK_FUNC(sub_82AEDA4C);
PPC_FUNC_IMPL(__imp__sub_82AEDA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDA50"))) PPC_WEAK_FUNC(sub_82AEDA50);
PPC_FUNC_IMPL(__imp__sub_82AEDA50) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-1872(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1872);
	// bl 0x8229e490
	ctx.lr = 0x82AEDA7C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEDA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82AEDAB0"))) PPC_WEAK_FUNC(sub_82AEDAB0);
PPC_FUNC_IMPL(__imp__sub_82AEDAB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-12840
	ctx.r7.s64 = ctx.r9.s64 + -12840;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDAE0"))) PPC_WEAK_FUNC(sub_82AEDAE0);
PPC_FUNC_IMPL(__imp__sub_82AEDAE0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDAE8"))) PPC_WEAK_FUNC(sub_82AEDAE8);
PPC_FUNC_IMPL(__imp__sub_82AEDAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-12840
	ctx.r7.s64 = ctx.r9.s64 + -12840;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDB10"))) PPC_WEAK_FUNC(sub_82AEDB10);
PPC_FUNC_IMPL(__imp__sub_82AEDB10) {
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
	// bl 0x82aedb80
	ctx.lr = 0x82AEDB30;
	sub_82AEDB80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aedb64
	if (ctx.cr6.eq) goto loc_82AEDB64;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aedb5c
	if (ctx.cr6.lt) goto loc_82AEDB5C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aedb64
	if (!ctx.cr6.gt) goto loc_82AEDB64;
loc_82AEDB5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEDB64;
	sub_82294A58(ctx, base);
loc_82AEDB64:
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

__attribute__((alias("__imp__sub_82AEDB80"))) PPC_WEAK_FUNC(sub_82AEDB80);
PPC_FUNC_IMPL(__imp__sub_82AEDB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-12840
	ctx.r10.s64 = ctx.r11.s64 + -12840;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEDBA4;
	sub_8229C068(ctx, base);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// bl 0x823721d0
	ctx.lr = 0x82AEDBAC;
	sub_823721D0(ctx, base);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// bl 0x823721d0
	ctx.lr = 0x82AEDBB4;
	sub_823721D0(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,1696
	ctx.r8.s64 = ctx.r9.s64 + 1696;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEDBC8;
	sub_8229C068(ctx, base);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-19216
	ctx.r6.s64 = ctx.r7.s64 + -19216;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEDBDC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x82AEDBE4;
	sub_82383C00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDBF8"))) PPC_WEAK_FUNC(sub_82AEDBF8);
PPC_FUNC_IMPL(__imp__sub_82AEDBF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-13944
	ctx.r7.s64 = ctx.r9.s64 + -13944;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDC28"))) PPC_WEAK_FUNC(sub_82AEDC28);
PPC_FUNC_IMPL(__imp__sub_82AEDC28) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDC30"))) PPC_WEAK_FUNC(sub_82AEDC30);
PPC_FUNC_IMPL(__imp__sub_82AEDC30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-13944
	ctx.r7.s64 = ctx.r9.s64 + -13944;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDC58"))) PPC_WEAK_FUNC(sub_82AEDC58);
PPC_FUNC_IMPL(__imp__sub_82AEDC58) {
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
	// bl 0x82aedcc8
	ctx.lr = 0x82AEDC78;
	sub_82AEDCC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aedcac
	if (ctx.cr6.eq) goto loc_82AEDCAC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aedca4
	if (ctx.cr6.lt) goto loc_82AEDCA4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aedcac
	if (!ctx.cr6.gt) goto loc_82AEDCAC;
loc_82AEDCA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AEDCAC;
	sub_82294A58(ctx, base);
loc_82AEDCAC:
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

__attribute__((alias("__imp__sub_82AEDCC8"))) PPC_WEAK_FUNC(sub_82AEDCC8);
PPC_FUNC_IMPL(__imp__sub_82AEDCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-13944
	ctx.r10.s64 = ctx.r11.s64 + -13944;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEDCEC;
	sub_8229C068(ctx, base);
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// bl 0x82aede50
	ctx.lr = 0x82AEDCF4;
	sub_82AEDE50(ctx, base);
	// addi r3,r31,1744
	ctx.r3.s64 = ctx.r31.s64 + 1744;
	// bl 0x82aeddd8
	ctx.lr = 0x82AEDCFC;
	sub_82AEDDD8(ctx, base);
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// bl 0x82aedd48
	ctx.lr = 0x82AEDD04;
	sub_82AEDD48(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,9792
	ctx.r8.s64 = ctx.r9.s64 + 9792;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AEDD18;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82976488
	ctx.lr = 0x82AEDD20;
	sub_82976488(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDD34"))) PPC_WEAK_FUNC(sub_82AEDD34);
PPC_FUNC_IMPL(__imp__sub_82AEDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDD38"))) PPC_WEAK_FUNC(sub_82AEDD38);
PPC_FUNC_IMPL(__imp__sub_82AEDD38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDD3C"))) PPC_WEAK_FUNC(sub_82AEDD3C);
PPC_FUNC_IMPL(__imp__sub_82AEDD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDD40"))) PPC_WEAK_FUNC(sub_82AEDD40);
PPC_FUNC_IMPL(__imp__sub_82AEDD40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDD44"))) PPC_WEAK_FUNC(sub_82AEDD44);
PPC_FUNC_IMPL(__imp__sub_82AEDD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDD48"))) PPC_WEAK_FUNC(sub_82AEDD48);
PPC_FUNC_IMPL(__imp__sub_82AEDD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEDD50;
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
	// beq cr6,0x82aedd90
	if (ctx.cr6.eq) goto loc_82AEDD90;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aedd7c
	if (!ctx.cr6.eq) goto loc_82AEDD7C;
	// bl 0x822900a0
	ctx.lr = 0x82AEDD78;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEDD7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEDD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEDD90:
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

__attribute__((alias("__imp__sub_82AEDDA8"))) PPC_WEAK_FUNC(sub_82AEDDA8);
PPC_FUNC_IMPL(__imp__sub_82AEDDA8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDDC0"))) PPC_WEAK_FUNC(sub_82AEDDC0);
PPC_FUNC_IMPL(__imp__sub_82AEDDC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aedd48
	sub_82AEDD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEDDC4"))) PPC_WEAK_FUNC(sub_82AEDDC4);
PPC_FUNC_IMPL(__imp__sub_82AEDDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDDC8"))) PPC_WEAK_FUNC(sub_82AEDDC8);
PPC_FUNC_IMPL(__imp__sub_82AEDDC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDDCC"))) PPC_WEAK_FUNC(sub_82AEDDCC);
PPC_FUNC_IMPL(__imp__sub_82AEDDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDDD0"))) PPC_WEAK_FUNC(sub_82AEDDD0);
PPC_FUNC_IMPL(__imp__sub_82AEDDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDDD4"))) PPC_WEAK_FUNC(sub_82AEDDD4);
PPC_FUNC_IMPL(__imp__sub_82AEDDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDDD8"))) PPC_WEAK_FUNC(sub_82AEDDD8);
PPC_FUNC_IMPL(__imp__sub_82AEDDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEDDE0;
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
	// beq cr6,0x82aede20
	if (ctx.cr6.eq) goto loc_82AEDE20;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aede0c
	if (!ctx.cr6.eq) goto loc_82AEDE0C;
	// bl 0x822900a0
	ctx.lr = 0x82AEDE08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEDE0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEDE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEDE20:
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

__attribute__((alias("__imp__sub_82AEDE38"))) PPC_WEAK_FUNC(sub_82AEDE38);
PPC_FUNC_IMPL(__imp__sub_82AEDE38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aeddd8
	sub_82AEDDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEDE3C"))) PPC_WEAK_FUNC(sub_82AEDE3C);
PPC_FUNC_IMPL(__imp__sub_82AEDE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDE40"))) PPC_WEAK_FUNC(sub_82AEDE40);
PPC_FUNC_IMPL(__imp__sub_82AEDE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDE44"))) PPC_WEAK_FUNC(sub_82AEDE44);
PPC_FUNC_IMPL(__imp__sub_82AEDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDE48"))) PPC_WEAK_FUNC(sub_82AEDE48);
PPC_FUNC_IMPL(__imp__sub_82AEDE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEDE4C"))) PPC_WEAK_FUNC(sub_82AEDE4C);
PPC_FUNC_IMPL(__imp__sub_82AEDE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDE50"))) PPC_WEAK_FUNC(sub_82AEDE50);
PPC_FUNC_IMPL(__imp__sub_82AEDE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEDE58;
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
	// beq cr6,0x82aede98
	if (ctx.cr6.eq) goto loc_82AEDE98;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aede84
	if (!ctx.cr6.eq) goto loc_82AEDE84;
	// bl 0x822900a0
	ctx.lr = 0x82AEDE80;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82AEDE84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEDE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEDE98:
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

__attribute__((alias("__imp__sub_82AEDEB0"))) PPC_WEAK_FUNC(sub_82AEDEB0);
PPC_FUNC_IMPL(__imp__sub_82AEDEB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aede50
	sub_82AEDE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEDEB4"))) PPC_WEAK_FUNC(sub_82AEDEB4);
PPC_FUNC_IMPL(__imp__sub_82AEDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEDEB8"))) PPC_WEAK_FUNC(sub_82AEDEB8);
PPC_FUNC_IMPL(__imp__sub_82AEDEB8) {
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
	ctx.lr = 0x82AEDED0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aedf54
	if (ctx.cr6.eq) goto loc_82AEDF54;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-11836
	ctx.r11.s64 = ctx.r8.s64 + -11836;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-31952
	ctx.r6.s64 = ctx.r5.s64 + -31952;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2052
	ctx.r6.s64 = 2052;
	// li r5,1872
	ctx.r5.s64 = 1872;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEDF44;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEDF54:
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

__attribute__((alias("__imp__sub_82AEDF68"))) PPC_WEAK_FUNC(sub_82AEDF68);
PPC_FUNC_IMPL(__imp__sub_82AEDF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEDF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-25544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25544);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aedf9c
	if (!ctx.cr6.eq) goto loc_82AEDF9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x829fdb98
	ctx.lr = 0x82AEDF90;
	sub_829FDB98(ctx, base);
	// stw r3,-25544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25544, ctx.r3.u32);
	// bl 0x829fdc48
	ctx.lr = 0x82AEDF98;
	sub_829FDC48(ctx, base);
	// lwz r10,-25544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25544);
loc_82AEDF9C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aedfbc
	if (ctx.cr6.eq) goto loc_82AEDFBC;
	// bl 0x829b8dc8
	ctx.lr = 0x82AEDFB0;
	sub_829B8DC8(ctx, base);
	// lwz r11,-24104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24104);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aedfc4
	goto loc_82AEDFC4;
loc_82AEDFBC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEDFC4:
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
	// bne cr6,0x82aedff4
	if (!ctx.cr6.eq) goto loc_82AEDFF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEDFE4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEDFEC;
	sub_822AADA8(ctx, base);
	// lwz r11,-24104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24104);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEDFF4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aee020
	if (!ctx.cr6.eq) goto loc_82AEE020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEE010;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEE018;
	sub_82398640(ctx, base);
	// lwz r11,-24104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24104);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEE020:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aee058
	if (ctx.cr6.eq) goto loc_82AEE058;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEE03C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aee058
	if (!ctx.cr6.eq) goto loc_82AEE058;
	// lwz r3,-24104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEE058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEE058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEE060"))) PPC_WEAK_FUNC(sub_82AEE060);
PPC_FUNC_IMPL(__imp__sub_82AEE060) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEE068"))) PPC_WEAK_FUNC(sub_82AEE068);
PPC_FUNC_IMPL(__imp__sub_82AEE068) {
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
	// lwz r11,-25544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25544);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aee0ac
	if (!ctx.cr6.eq) goto loc_82AEE0AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x829fdb98
	ctx.lr = 0x82AEE0A0;
	sub_829FDB98(ctx, base);
	// stw r3,-25544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25544, ctx.r3.u32);
	// bl 0x829fdc48
	ctx.lr = 0x82AEE0A8;
	sub_829FDC48(ctx, base);
	// lwz r11,-25544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25544);
loc_82AEE0AC:
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

__attribute__((alias("__imp__sub_82AEE0D4"))) PPC_WEAK_FUNC(sub_82AEE0D4);
PPC_FUNC_IMPL(__imp__sub_82AEE0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEE0D8"))) PPC_WEAK_FUNC(sub_82AEE0D8);
PPC_FUNC_IMPL(__imp__sub_82AEE0D8) {
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
	ctx.lr = 0x82AEE0F0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aee174
	if (ctx.cr6.eq) goto loc_82AEE174;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-11788
	ctx.r11.s64 = ctx.r8.s64 + -11788;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-32416
	ctx.r6.s64 = ctx.r5.s64 + -32416;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1904
	ctx.r5.s64 = 1904;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEE164;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEE174:
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

__attribute__((alias("__imp__sub_82AEE188"))) PPC_WEAK_FUNC(sub_82AEE188);
PPC_FUNC_IMPL(__imp__sub_82AEE188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEE190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aee1bc
	if (!ctx.cr6.eq) goto loc_82AEE1BC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aedeb8
	ctx.lr = 0x82AEE1B0;
	sub_82AEDEB8(ctx, base);
	// stw r3,-24104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24104, ctx.r3.u32);
	// bl 0x82aedf68
	ctx.lr = 0x82AEE1B8;
	sub_82AEDF68(ctx, base);
	// lwz r10,-24104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
loc_82AEE1BC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aee1dc
	if (ctx.cr6.eq) goto loc_82AEE1DC;
	// bl 0x829ba1c8
	ctx.lr = 0x82AEE1D0;
	sub_829BA1C8(ctx, base);
	// lwz r11,-24100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24100);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aee1e4
	goto loc_82AEE1E4;
loc_82AEE1DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEE1E4:
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
	// bne cr6,0x82aee214
	if (!ctx.cr6.eq) goto loc_82AEE214;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEE204;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEE20C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24100);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEE214:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aee240
	if (!ctx.cr6.eq) goto loc_82AEE240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEE230;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEE238;
	sub_82398640(ctx, base);
	// lwz r11,-24100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24100);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEE240:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aee278
	if (ctx.cr6.eq) goto loc_82AEE278;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEE25C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aee278
	if (!ctx.cr6.eq) goto loc_82AEE278;
	// lwz r3,-24100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24100);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEE278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEE278:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEE280"))) PPC_WEAK_FUNC(sub_82AEE280);
PPC_FUNC_IMPL(__imp__sub_82AEE280) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEE288"))) PPC_WEAK_FUNC(sub_82AEE288);
PPC_FUNC_IMPL(__imp__sub_82AEE288) {
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
	// lwz r11,-24104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aee2cc
	if (!ctx.cr6.eq) goto loc_82AEE2CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aedeb8
	ctx.lr = 0x82AEE2C0;
	sub_82AEDEB8(ctx, base);
	// stw r3,-24104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24104, ctx.r3.u32);
	// bl 0x82aedf68
	ctx.lr = 0x82AEE2C8;
	sub_82AEDF68(ctx, base);
	// lwz r11,-24104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
loc_82AEE2CC:
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

__attribute__((alias("__imp__sub_82AEE2F4"))) PPC_WEAK_FUNC(sub_82AEE2F4);
PPC_FUNC_IMPL(__imp__sub_82AEE2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEE2F8"))) PPC_WEAK_FUNC(sub_82AEE2F8);
PPC_FUNC_IMPL(__imp__sub_82AEE2F8) {
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
	ctx.lr = 0x82AEE310;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aee394
	if (ctx.cr6.eq) goto loc_82AEE394;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-11736
	ctx.r11.s64 = ctx.r8.s64 + -11736;
	// lis r5,-32081
	ctx.r5.s64 = -2102460416;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,32584
	ctx.r6.s64 = ctx.r5.s64 + 32584;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1872
	ctx.r5.s64 = 1872;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AEE384;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AEE394:
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

__attribute__((alias("__imp__sub_82AEE3A8"))) PPC_WEAK_FUNC(sub_82AEE3A8);
PPC_FUNC_IMPL(__imp__sub_82AEE3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEE3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aee3dc
	if (!ctx.cr6.eq) goto loc_82AEE3DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aedeb8
	ctx.lr = 0x82AEE3D0;
	sub_82AEDEB8(ctx, base);
	// stw r3,-24104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24104, ctx.r3.u32);
	// bl 0x82aedf68
	ctx.lr = 0x82AEE3D8;
	sub_82AEDF68(ctx, base);
	// lwz r10,-24104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
loc_82AEE3DC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24096(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aee3fc
	if (ctx.cr6.eq) goto loc_82AEE3FC;
	// bl 0x829ba1c8
	ctx.lr = 0x82AEE3F0;
	sub_829BA1C8(ctx, base);
	// lwz r11,-24096(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24096);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82aee404
	goto loc_82AEE404;
loc_82AEE3FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AEE404:
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
	// bne cr6,0x82aee434
	if (!ctx.cr6.eq) goto loc_82AEE434;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AEE424;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AEE42C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24096(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24096);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AEE434:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aee460
	if (!ctx.cr6.eq) goto loc_82AEE460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AEE450;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AEE458;
	sub_82398640(ctx, base);
	// lwz r11,-24096(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24096);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AEE460:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aee498
	if (ctx.cr6.eq) goto loc_82AEE498;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AEE47C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82aee498
	if (!ctx.cr6.eq) goto loc_82AEE498;
	// lwz r3,-24096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24096);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEE498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEE498:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEE4A0"))) PPC_WEAK_FUNC(sub_82AEE4A0);
PPC_FUNC_IMPL(__imp__sub_82AEE4A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEE4A8"))) PPC_WEAK_FUNC(sub_82AEE4A8);
PPC_FUNC_IMPL(__imp__sub_82AEE4A8) {
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
	// lwz r11,-24104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aee4ec
	if (!ctx.cr6.eq) goto loc_82AEE4EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82aedeb8
	ctx.lr = 0x82AEE4E0;
	sub_82AEDEB8(ctx, base);
	// stw r3,-24104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24104, ctx.r3.u32);
	// bl 0x82aedf68
	ctx.lr = 0x82AEE4E8;
	sub_82AEDF68(ctx, base);
	// lwz r11,-24104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24104);
loc_82AEE4EC:
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

__attribute__((alias("__imp__sub_82AEE514"))) PPC_WEAK_FUNC(sub_82AEE514);
PPC_FUNC_IMPL(__imp__sub_82AEE514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEE518"))) PPC_WEAK_FUNC(sub_82AEE518);
PPC_FUNC_IMPL(__imp__sub_82AEE518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEE51C"))) PPC_WEAK_FUNC(sub_82AEE51C);
PPC_FUNC_IMPL(__imp__sub_82AEE51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEE520"))) PPC_WEAK_FUNC(sub_82AEE520);
PPC_FUNC_IMPL(__imp__sub_82AEE520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEE524"))) PPC_WEAK_FUNC(sub_82AEE524);
PPC_FUNC_IMPL(__imp__sub_82AEE524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEE528"))) PPC_WEAK_FUNC(sub_82AEE528);
PPC_FUNC_IMPL(__imp__sub_82AEE528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEE52C"))) PPC_WEAK_FUNC(sub_82AEE52C);
PPC_FUNC_IMPL(__imp__sub_82AEE52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEE530"))) PPC_WEAK_FUNC(sub_82AEE530);
PPC_FUNC_IMPL(__imp__sub_82AEE530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEE538;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x82AEE540;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r6.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,296(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// addi r4,r29,256
	ctx.r4.s64 = ctx.r29.s64 + 256;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x823d7698
	ctx.lr = 0x82AEE578;
	sub_823D7698(ctx, base);
	// lfs f13,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f11,244(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f8,248(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f28,f13,f11
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f27,f9,f8
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f1,-18108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lfs f31,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lfs f30,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f29,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r29,244
	ctx.r30.s64 = ctx.r29.s64 + 244;
	// bl 0x82382590
	ctx.lr = 0x82AEE5E4;
	sub_82382590(ctx, base);
	// lfs f7,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lis r3,-31904
	ctx.r3.s64 = -2090860544;
	// lfs f13,-14012(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -14012);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f3,f5,f29,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f6.f64));
	// fmadds f0,f4,f31,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82aee640
	if (!ctx.cr6.lt) goto loc_82AEE640;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,31796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31796);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82aee640
	if (!ctx.cr6.gt) goto loc_82AEE640;
	// fmuls f0,f28,f28
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f13,1768(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1768);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1324(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1324);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f10,f27,f27,f0
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bgt cr6,0x82aee644
	if (ctx.cr6.gt) goto loc_82AEE644;
loc_82AEE640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AEE644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aee6b4
	if (ctx.cr6.eq) goto loc_82AEE6B4;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,1768(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1768);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1324(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1324);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,21152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f5,f31,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmuls f4,f30,f7
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// fmuls f6,f29,f7
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82AEE6B4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x82AEE6C0;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEE6C4"))) PPC_WEAK_FUNC(sub_82AEE6C4);
PPC_FUNC_IMPL(__imp__sub_82AEE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEE6C8"))) PPC_WEAK_FUNC(sub_82AEE6C8);
PPC_FUNC_IMPL(__imp__sub_82AEE6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82AEE6D0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6abc
	ctx.lr = 0x82AEE6D8;
	__savefpr_17(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r23,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r23.u32);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aef9d0
	if (ctx.cr6.eq) goto loc_82AEF9D0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r16,r31,256
	ctx.r16.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r27,r31,1736
	ctx.r27.s64 = ctx.r31.s64 + 1736;
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r10,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r10.u32);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r9,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r9.u32);
	// bl 0x823d7698
	ctx.lr = 0x82AEE724;
	sub_823D7698(ctx, base);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// lfs f13,1336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-28844(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,1324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,18676(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18676);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fadds f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f10,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bge cr6,0x82aee78c
	if (!ctx.cr6.lt) goto loc_82AEE78C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82AEE78C:
	// addi r18,r31,1772
	ctx.r18.s64 = ctx.r31.s64 + 1772;
	// lwz r5,1776(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8232d180
	ctx.lr = 0x82AEE7A8;
	sub_8232D180(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEE7B8;
	sub_827D06F0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f17,-18108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f17.f64 = double(temp.f32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// lfs f19,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f19.f64 = double(temp.f32);
	// addi r15,r11,31804
	ctx.r15.s64 = ctx.r11.s64 + 31804;
	// beq cr6,0x82aef4a8
	if (ctx.cr6.eq) goto loc_82AEF4A8;
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r11,608(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aef118
	if (ctx.cr6.eq) goto loc_82AEF118;
	// lwz r11,612(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeee90
	if (ctx.cr6.eq) goto loc_82AEEE90;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEE814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,612(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 612);
	// lwz r4,68(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AEE834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEE884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f19,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// lfs f29,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f29.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f29,f5
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f28,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f28,f4
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// fmadds f2,f13,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// fsqrts f20,f2
	ctx.f20.f64 = double(float(sqrt(ctx.f2.f64)));
	// bl 0x82382590
	ctx.lr = 0x82AEE8F0;
	sub_82382590(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f19,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x82382590
	ctx.lr = 0x82AEE918;
	sub_82382590(ctx, base);
	// lfs f21,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f1,f21,f19
	ctx.f1.f64 = double(float(ctx.f21.f64 * ctx.f19.f64));
	// lfs f26,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f26,f19
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f19.f64));
	// lfs f0,4656(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 4656);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f26,f1
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f1.f64));
	// fsubs f11,f1,f25
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f25.f64));
	// lfs f24,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f9,f12,f24
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// lfs f22,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f10,f25,f19,f13
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f19.f64 - ctx.f13.f64));
	// lfs f13,1288(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 1288);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f8,f23,f11,f9
	ctx.f8.f64 = double(float(ctx.f23.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f19
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// fmadds f7,f10,f22,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f22.f64 + ctx.f8.f64));
	// stfs f7,1728(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// bge cr6,0x82aee970
	if (!ctx.cr6.lt) goto loc_82AEE970;
	// fmr f0,f19
	ctx.f0.f64 = ctx.f19.f64;
	// b 0x82aee97c
	goto loc_82AEE97C;
loc_82AEE970:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82aee97c
	if (ctx.cr6.lt) goto loc_82AEE97C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82AEE97C:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r11,1764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// lfs f31,-28844(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + -28844);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f27,f0,f0
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// bne cr6,0x82aee9a0
	if (!ctx.cr6.eq) goto loc_82AEE9A0;
	// fmr f27,f19
	ctx.f27.f64 = ctx.f19.f64;
	// b 0x82aee9bc
	goto loc_82AEE9BC;
loc_82AEE9A0:
	// fcmpu cr6,f27,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f19.f64);
	// bge cr6,0x82aee9b0
	if (!ctx.cr6.lt) goto loc_82AEE9B0;
	// fmr f27,f19
	ctx.f27.f64 = ctx.f19.f64;
	// b 0x82aee9bc
	goto loc_82AEE9BC;
loc_82AEE9B0:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// blt cr6,0x82aee9bc
	if (ctx.cr6.lt) goto loc_82AEE9BC;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
loc_82AEE9BC:
	// fmuls f13,f24,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f25.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f27,1768(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// lfd f0,-17240(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17240);
	// fmadds f12,f23,f26,f13
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f11,f21,f22,f12
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f22.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82aeeae0
	if (!ctx.cr6.gt) goto loc_82AEEAE0;
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,608(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AEE9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f0,1288(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f2,f7,f7,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fsqrts f4,f10
	ctx.f4.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f8,f2,f5
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmadds f7,f9,f1,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f6,f8,f6,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fadds f0,f6,f30
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x82aeeac4
	if (!ctx.cr6.lt) goto loc_82AEEAC4;
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// fadds f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// bl 0x827d06f0
	ctx.lr = 0x82AEEAC0;
	sub_827D06F0(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
loc_82AEEAC4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEEAD4;
	sub_827D06F0(ctx, base);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// b 0x82aef4a0
	goto loc_82AEF4A0;
loc_82AEEAE0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// fsubs f20,f30,f20
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = double(float(ctx.f30.f64 - ctx.f20.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d3da0
	ctx.lr = 0x82AEEAF0;
	sub_823D3DA0(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmadds f10,f12,f21,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f21.f64 + ctx.f13.f64));
	// fmadds f9,f25,f11,f10
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f19
	ctx.cr6.compare(ctx.f9.f64, ctx.f19.f64);
	// blt cr6,0x82aeeb18
	if (ctx.cr6.lt) goto loc_82AEEB18;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82AEEB18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeecac
	if (ctx.cr6.eq) goto loc_82AEECAC;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82aeebd4
	if (!ctx.cr6.gt) goto loc_82AEEBD4;
	// lwz r29,596(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82aeebd4
	if (!ctx.cr6.eq) goto loc_82AEEBD4;
	// bl 0x829b3060
	ctx.lr = 0x82AEEB4C;
	sub_829B3060(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeeb70
	if (ctx.cr6.eq) goto loc_82AEEB70;
loc_82AEEB5C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82aeeb80
	if (ctx.cr6.eq) goto loc_82AEEB80;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aeeb5c
	if (!ctx.cr6.eq) goto loc_82AEEB5C;
loc_82AEEB70:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aeebd4
	if (ctx.cr6.eq) goto loc_82AEEBD4;
loc_82AEEB80:
	// bl 0x829b53f8
	ctx.lr = 0x82AEEB84;
	sub_829B53F8(ctx, base);
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aeeba8
	if (ctx.cr6.eq) goto loc_82AEEBA8;
loc_82AEEB94:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82aeebb8
	if (ctx.cr6.eq) goto loc_82AEEBB8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aeeb94
	if (!ctx.cr6.eq) goto loc_82AEEB94;
loc_82AEEBA8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aeebd4
	if (ctx.cr6.eq) goto loc_82AEEBD4;
loc_82AEEBB8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// lwz r9,1292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AEEBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEEBD4:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// lwz r9,552(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82aeebf4
	if (!ctx.cr6.eq) goto loc_82AEEBF4;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r9,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r9.u32);
loc_82AEEBF4:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r9,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r9.u32);
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r19,524(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 524);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AEEC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// lwz r9,612(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 612);
	// stw r9,608(r5)
	PPC_STORE_U32(ctx.r5.u32 + 608, ctx.r9.u32);
	// lwz r8,504(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r17,612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 612, ctx.r17.u32);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,1072(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1072);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r6,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AEECA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// b 0x82aef49c
	goto loc_82AEF49C;
loc_82AEECAC:
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f20,f19
	ctx.cr6.compare(ctx.f20.f64, ctx.f19.f64);
	// fmuls f10,f21,f30
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f30.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ble cr6,0x82aeedc4
	if (!ctx.cr6.gt) goto loc_82AEEDC4;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fmuls f12,f25,f30
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fmuls f9,f20,f27
	ctx.f9.f64 = double(float(ctx.f20.f64 * ctx.f27.f64));
	// fmuls f11,f26,f30
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// fsubs f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// fmuls f7,f13,f24
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// fmuls f6,f13,f23
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// fmuls f3,f13,f22
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fsubs f5,f29,f12
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// fmuls f10,f9,f23
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f23.f64));
	// fsubs f4,f28,f11
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmuls f1,f9,f24
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// fmuls f9,f9,f22
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fadds f13,f7,f29
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f12,f6,f28
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f8,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f3,4(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f4,f1,f6
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fadds f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f3,8(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// fadds f2,f10,f29
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// fadds f1,f8,f28
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// bl 0x827d06f0
	ctx.lr = 0x82AEEDA8;
	sub_827D06F0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEEDB8;
	sub_827D06F0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// b 0x82aef4a0
	goto loc_82AEF4A0;
loc_82AEEDC4:
	// fmuls f12,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f11,f25,f30
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// fmuls f9,f26,f30
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// fmuls f8,f12,f24
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// fmuls f7,f12,f22
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// fmuls f6,f12,f23
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fsubs f13,f29,f11
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f12,f28,f9
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f10,f8,f29
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f9,f6,f28
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fadds f12,f2,f29
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x827d06f0
	ctx.lr = 0x82AEEE64;
	sub_827D06F0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEEE74;
	sub_827D06F0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEEE84;
	sub_827D06F0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// b 0x82aef4a0
	goto loc_82AEF4A0;
loc_82AEEE90:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEEEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,196(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lwz r29,608(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x82aef100
	if (ctx.cr6.eq) goto loc_82AEF100;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aef100
	if (ctx.cr6.eq) goto loc_82AEF100;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEEF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AEEF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,17956
	ctx.r11.s64 = ctx.r11.s64 + 17956;
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,17920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17920);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82aeef94
	if (!ctx.cr6.eq) goto loc_82AEEF94;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f19,0(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f19,4(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f19,8(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,17920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17920, ctx.r10.u32);
loc_82AEEF94:
	// fmuls f10,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,-18352(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fsqrt f7,f8
	ctx.f7.f64 = sqrt(ctx.f8.f64);
	// fdiv f6,f0,f7
	ctx.f6.f64 = ctx.f0.f64 / ctx.f7.f64;
	// fcmpu cr6,f8,f17
	ctx.cr6.compare(ctx.f8.f64, ctx.f17.f64);
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// ble cr6,0x82aeefd8
	if (!ctx.cr6.gt) goto loc_82AEEFD8;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82AEEFD8:
	// lwz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AEF00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f11,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f10,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f7,f7,f13,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fadds f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f0,f5,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f3,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r5.u32);
	// fsubs f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stw r4,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r4.u32);
	// fsubs f8,f6,f13
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// fsubs f7,f29,f12
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
	// bge cr6,0x82aef0e8
	if (!ctx.cr6.lt) goto loc_82AEF0E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEF0E4;
	sub_827D06F0(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
loc_82AEF0E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEF0F8;
	sub_827D06F0(ctx, base);
	// stfs f19,1728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// b 0x82aef4a8
	goto loc_82AEF4A8;
loc_82AEF100:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEF110;
	sub_827D06F0(ctx, base);
	// stfs f19,1728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// b 0x82aef4a8
	goto loc_82AEF4A8;
loc_82AEF118:
	// stfs f19,1728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82427ae8
	ctx.lr = 0x82AEF124;
	sub_82427AE8(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// beq cr6,0x82aef470
	if (ctx.cr6.eq) goto loc_82AEF470;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEF14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,556(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 556);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f22,-18264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18264);
	ctx.f22.f64 = double(temp.f32);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f21,f22
	ctx.f21.f64 = ctx.f22.f64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f18,f6,f6,f4
	ctx.f18.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// ble cr6,0x82aef3fc
	if (!ctx.cr6.gt) goto loc_82AEF3FC;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
	// addi r28,r11,17956
	ctx.r28.s64 = ctx.r11.s64 + 17956;
	// lfd f20,-18352(r10)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
loc_82AEF1BC:
	// lwz r11,552(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 552);
	// lwzx r29,r11,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82aef3e8
	if (ctx.cr6.eq) goto loc_82AEF3E8;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aef3e8
	if (ctx.cr6.eq) goto loc_82AEF3E8;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEF1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AEF210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lwz r29,17920(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17920);
	// lfs f26,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// lfs f24,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f25.f64));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fsubs f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f24.f64));
	// bne cr6,0x82aef258
	if (!ctx.cr6.eq) goto loc_82AEF258;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// stfs f19,0(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f19,4(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f19,8(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stw r29,17920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 17920, ctx.r29.u32);
loc_82AEF258:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fdiv f7,f20,f8
	ctx.f7.f64 = ctx.f20.f64 / ctx.f8.f64;
	// fcmpu cr6,f9,f17
	ctx.cr6.compare(ctx.f9.f64, ctx.f17.f64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x82aef298
	if (!ctx.cr6.gt) goto loc_82AEF298;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// b 0x82aef29c
	goto loc_82AEF29C;
loc_82AEF298:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82AEF29C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fsubs f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f10,f25
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f25.f64));
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// fmuls f3,f0,f30
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmadds f1,f11,f13,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmuls f5,f12,f30
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmadds f31,f12,f9,f1
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f11,f0,f24
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// fadds f10,f13,f26
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fadds f9,f12,f25
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f25.f64));
	// fadds f29,f3,f11
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f28,f2,f10
	ctx.f28.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f28,128(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f27,f5,f9
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f27,132(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f8,f29,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// fsubs f7,f28,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// fsubs f6,f27,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 - ctx.f6.f64));
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f23,f6,f6,f4
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// bl 0x823d3da0
	ctx.lr = 0x82AEF350;
	sub_823D3DA0(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82aef370
	if (!ctx.cr6.eq) goto loc_82AEF370;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// stfs f19,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f19,4(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f19,8(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stw r29,17920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 17920, ctx.r29.u32);
loc_82AEF370:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aef390
	if (!ctx.cr6.eq) goto loc_82AEF390;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// stfs f19,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f19,4(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f19,8(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stw r29,17920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 17920, ctx.r29.u32);
loc_82AEF390:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aef3b0
	if (!ctx.cr6.eq) goto loc_82AEF3B0;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// stfs f19,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f19,4(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f19,8(r28)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stw r11,17920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 17920, ctx.r11.u32);
loc_82AEF3B0:
	// fcmpu cr6,f31,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f19.f64);
	// ble cr6,0x82aef3e8
	if (!ctx.cr6.gt) goto loc_82AEF3E8;
	// fcmpu cr6,f23,f22
	ctx.cr6.compare(ctx.f23.f64, ctx.f22.f64);
	// bge cr6,0x82aef3e8
	if (!ctx.cr6.lt) goto loc_82AEF3E8;
	// fsubs f0,f29,f24
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f24.f64));
	// lwz r20,128(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fsubs f13,f28,f26
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f26.f64));
	// lwz r21,132(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fsubs f12,f27,f25
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f25.f64));
	// lwz r22,136(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f22,f23
	ctx.f22.f64 = ctx.f23.f64;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f21,f12,f12,f10
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
loc_82AEF3E8:
	// lwz r11,556(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 556);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82aef1bc
	if (ctx.cr6.lt) goto loc_82AEF1BC;
loc_82AEF3FC:
	// fcmpu cr6,f22,f18
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f22.f64, ctx.f18.f64);
	// bge cr6,0x82aef440
	if (!ctx.cr6.lt) goto loc_82AEF440;
	// fcmpu cr6,f21,f18
	ctx.cr6.compare(ctx.f21.f64, ctx.f18.f64);
	// bge cr6,0x82aef440
	if (!ctx.cr6.lt) goto loc_82AEF440;
	// stw r20,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r20.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r21.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r22,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r22.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEF428;
	sub_827D06F0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEF438;
	sub_827D06F0(ctx, base);
	// lwz r23,684(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// b 0x82aef4a8
	goto loc_82AEF4A8;
loc_82AEF440:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// bl 0x827d06f0
	ctx.lr = 0x82AEF468;
	sub_827D06F0(ctx, base);
	// lwz r23,684(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// b 0x82aef4a8
	goto loc_82AEF4A8;
loc_82AEF470:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEF47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r6.u32);
loc_82AEF49C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82AEF4A0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827d06f0
	ctx.lr = 0x82AEF4A8;
	sub_827D06F0(ctx, base);
loc_82AEF4A8:
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aef650
	if (!ctx.cr6.gt) goto loc_82AEF650;
	// lfs f0,1288(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// lis r24,-32229
	ctx.r24.s64 = -2112159744;
	// lis r28,-32229
	ctx.r28.s64 = -2112159744;
	// lis r25,-31882
	ctx.r25.s64 = -2089418752;
loc_82AEF4CC:
	// lbz r11,19272(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 19272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aef650
	if (ctx.cr6.eq) goto loc_82AEF650;
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// lfs f31,-28844(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + -28844);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aef4f0
	if (!ctx.cr6.eq) goto loc_82AEF4F0;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// b 0x82aef4f4
	goto loc_82AEF4F4;
loc_82AEF4F0:
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f31.f64;
loc_82AEF4F4:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsqrts f29,f6
	ctx.f29.f64 = double(float(sqrt(ctx.f6.f64)));
	// bl 0x823d7698
	ctx.lr = 0x82AEF55C;
	sub_823D7698(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f5,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x82382590
	ctx.lr = 0x82AEF584;
	sub_82382590(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x82382590
	ctx.lr = 0x82AEF590;
	sub_82382590(ctx, base);
	// lfs f2,1184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f13,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f0,26244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 26244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fmadds f3,f11,f6,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmadds f28,f10,f4,f3
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmuls f31,f5,f30
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// bl 0x82ab96a8
	ctx.lr = 0x82AEF5D8;
	sub_82AB96A8(ctx, base);
	// lfs f0,1288(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aef5ec
	if (ctx.cr6.eq) goto loc_82AEF5EC;
	// lfs f13,26252(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 26252);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82aef5f0
	goto loc_82AEF5F0;
loc_82AEF5EC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82AEF5F0:
	// lfs f12,96(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f28,f12
	ctx.cr6.compare(ctx.f28.f64, ctx.f12.f64);
	// ble cr6,0x82aef60c
	if (!ctx.cr6.gt) goto loc_82AEF60C;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fcmpu cr6,f29,f12
	ctx.cr6.compare(ctx.f29.f64, ctx.f12.f64);
	// bgt cr6,0x82aef624
	if (ctx.cr6.gt) goto loc_82AEF624;
loc_82AEF60C:
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82aef4cc
	if (ctx.cr6.lt) goto loc_82AEF4CC;
	// b 0x82aef650
	goto loc_82AEF650;
loc_82AEF624:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r6.u32);
loc_82AEF650:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// bl 0x82ab96a8
	ctx.lr = 0x82AEF65C;
	sub_82AB96A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aef6cc
	if (ctx.cr6.eq) goto loc_82AEF6CC;
	// lwz r3,700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aef67c
	if (!ctx.cr6.eq) goto loc_82AEF67C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82aef68c
	goto loc_82AEF68C;
loc_82AEF67C:
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// ld r4,244(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 244);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829f3e20
	ctx.lr = 0x82AEF68C;
	sub_829F3E20(ctx, base);
loc_82AEF68C:
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bge cr6,0x82aef6cc
	if (!ctx.cr6.lt) goto loc_82AEF6CC;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r5,504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEF6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
loc_82AEF6CC:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f19
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// beq cr6,0x82aef700
	if (ctx.cr6.eq) goto loc_82AEF700;
	// lfs f0,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-27196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27196);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x82aef70c
	if (!ctx.cr6.gt) goto loc_82AEF70C;
loc_82AEF700:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1068, temp.u32);
loc_82AEF70C:
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lfs f0,1288(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f19,120(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f19,312(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stw r17,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r17.u32);
	// stfs f19,316(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stw r17,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r17.u32);
	// lfs f0,852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// stfs f0,1084(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1084, temp.u32);
	// lwz r8,1024(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1024);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r17,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r17.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r17,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r17.u32);
	// lfs f9,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stfs f19,320(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stw r17,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r17.u32);
	// stfs f19,324(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stfs f19,328(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stw r17,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r17.u32);
	// stfs f19,332(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r17,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r17.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r17,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r17.u32);
	// stw r17,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r17.u32);
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// stw r17,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r17.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f6,f0,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsubs f31,f7,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsqrts f30,f6
	ctx.f30.f64 = double(float(sqrt(ctx.f6.f64)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AEF7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aef884
	if (ctx.cr6.eq) goto loc_82AEF884;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82aef884
	if (!ctx.cr6.eq) goto loc_82AEF884;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82427ae8
	ctx.lr = 0x82AEF7E0;
	sub_82427AE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aef804
	if (ctx.cr6.eq) goto loc_82AEF804;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEF800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82aef840
	goto loc_82AEF840;
loc_82AEF804:
	// lbz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aef840
	if (ctx.cr6.eq) goto loc_82AEF840;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823f1ed0
	ctx.lr = 0x82AEF81C;
	sub_823F1ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aef840
	if (ctx.cr6.eq) goto loc_82AEF840;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r10,720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82aef840
	if (!ctx.cr6.eq) goto loc_82AEF840;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
loc_82AEF840:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,504(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x82aef870
	if (ctx.cr6.eq) goto loc_82AEF870;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af5b00
	ctx.lr = 0x82AEF870;
	sub_82AF5B00(ctx, base);
loc_82AEF870:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b08
	ctx.lr = 0x82AEF880;
	__restfpr_17(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82AEF884:
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lfs f0,660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82aef8f4
	if (!ctx.cr6.lt) goto loc_82AEF8F4;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82aef870
	if (ctx.cr6.eq) goto loc_82AEF870;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f13,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// ble cr6,0x82aef8f4
	if (!ctx.cr6.gt) goto loc_82AEF8F4;
	// stfs f19,272(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stfs f19,276(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f19,280(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// li r8,8326
	ctx.r8.s64 = 8326;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x827723e0
	ctx.lr = 0x82AEF8EC;
	sub_827723E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aef870
	if (ctx.cr6.eq) goto loc_82AEF870;
loc_82AEF8F4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,504(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x82aef924
	if (ctx.cr6.eq) goto loc_82AEF924;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af5b00
	ctx.lr = 0x82AEF924;
	sub_82AF5B00(ctx, base);
loc_82AEF924:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aef9a4
	if (ctx.cr6.eq) goto loc_82AEF9A4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEF948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aef9a4
	if (ctx.cr6.eq) goto loc_82AEF9A4;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r3,524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,920(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 920);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AEF968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// lfs f13,600(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,904(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lfs f0,0(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,660(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,660(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 660);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f30,f9
	ctx.cr6.compare(ctx.f30.f64, ctx.f9.f64);
	// bge cr6,0x82aef9d0
	if (!ctx.cr6.lt) goto loc_82AEF9D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b08
	ctx.lr = 0x82AEF9A0;
	__restfpr_17(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82AEF9A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEF9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aef9d0
	if (ctx.cr6.eq) goto loc_82AEF9D0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,520(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 520, temp.u32);
loc_82AEF9D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b08
	ctx.lr = 0x82AEF9E0;
	__restfpr_17(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEF9E4"))) PPC_WEAK_FUNC(sub_82AEF9E4);
PPC_FUNC_IMPL(__imp__sub_82AEF9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEF9E8"))) PPC_WEAK_FUNC(sub_82AEF9E8);
PPC_FUNC_IMPL(__imp__sub_82AEF9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AEF9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829fea08
	ctx.lr = 0x82AEF9FC;
	sub_829FEA08(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// rlwinm r8,r10,0,17,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82aefa28
	if (ctx.cr6.gt) goto loc_82AEFA28;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82aefa30
	goto loc_82AEFA30;
loc_82AEFA28:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AEFA30:
	// lwz r10,980(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r11,2212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2212);
	// lwz r10,2224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aefc30
	if (ctx.cr6.eq) goto loc_82AEFC30;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aefc30
	if (ctx.cr6.eq) goto loc_82AEFC30;
	// lfs f11,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-31904
	ctx.r7.s64 = -2090860544;
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lfs f13,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r31,244
	ctx.r9.s64 = ctx.r31.s64 + 244;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f5,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f5.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// lfs f4,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f10,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-23964(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23964);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmadds f4,f6,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f3,f2,f2,f5
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f2,f13,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f13,f7,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82aefae4
	if (!ctx.cr6.gt) goto loc_82AEFAE4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82aefae4
	if (!ctx.cr6.gt) goto loc_82AEFAE4;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// ori r9,r8,32768
	ctx.r9.u64 = ctx.r8.u64 | 32768;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r11,-24092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24092);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-24092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24092, ctx.r11.u32);
	// b 0x82aefaf4
	goto loc_82AEFAF4;
loc_82AEFAE4:
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-24088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-24088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24088, ctx.r11.u32);
loc_82AEFAF4:
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r30,r11,-18016
	ctx.r30.s64 = ctx.r11.s64 + -18016;
	// lwz r11,-18008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18008);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aefb34
	if (!ctx.cr6.eq) goto loc_82AEFB34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,-18008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18008, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-11696
	ctx.r4.s64 = ctx.r9.s64 + -11696;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8233e028
	ctx.lr = 0x82AEFB34;
	sub_8233E028(ctx, base);
loc_82AEFB34:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r3,1404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aefb8c
	if (!ctx.cr6.eq) goto loc_82AEFB8C;
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aefb64
	if (ctx.cr6.eq) goto loc_82AEFB64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,19276(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 19276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82AEFB64;
	sub_8244FC30(ctx, base);
loc_82AEFB64:
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aefc40
	if (ctx.cr6.eq) goto loc_82AEFC40;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,19276(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 19276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82AEFB84;
	sub_8244FC30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AEFB8C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82aefbe8
	if (!ctx.cr6.lt) goto loc_82AEFBE8;
	// lis r29,-32246
	ctx.r29.s64 = -2113273856;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aefbc0
	if (ctx.cr6.eq) goto loc_82AEFBC0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,17480(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82AEFBC0;
	sub_8244FC30(ctx, base);
loc_82AEFBC0:
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aefc40
	if (ctx.cr6.eq) goto loc_82AEFC40;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,17480(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82AEFBE0;
	sub_8244FC30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AEFBE8:
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aefc08
	if (ctx.cr6.eq) goto loc_82AEFC08;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,19276(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 19276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82AEFC08;
	sub_8244FC30(ctx, base);
loc_82AEFC08:
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aefc40
	if (ctx.cr6.eq) goto loc_82AEFC40;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,19276(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 19276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82AEFC28;
	sub_8244FC30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AEFC30:
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-24088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-24088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24088, ctx.r11.u32);
loc_82AEFC40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AEFC48"))) PPC_WEAK_FUNC(sub_82AEFC48);
PPC_FUNC_IMPL(__imp__sub_82AEFC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82cb2308
	ctx.lr = 0x82AEFC68;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-18116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f1,f9,f0,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEFCA8"))) PPC_WEAK_FUNC(sub_82AEFCA8);
PPC_FUNC_IMPL(__imp__sub_82AEFCA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,1104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,1100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82AEFCC4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aefce4
	if (ctx.cr6.eq) goto loc_82AEFCE4;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// rlwinm r8,r10,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82aefce4
	if (ctx.cr6.eq) goto loc_82AEFCE4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82AEFCE4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82aefcc4
	if (!ctx.cr0.eq) goto loc_82AEFCC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AEFCF4"))) PPC_WEAK_FUNC(sub_82AEFCF4);
PPC_FUNC_IMPL(__imp__sub_82AEFCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AEFCF8"))) PPC_WEAK_FUNC(sub_82AEFCF8);
PPC_FUNC_IMPL(__imp__sub_82AEFCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r10,1480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AEFD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82aefd6c
	if (!ctx.cr6.gt) goto loc_82AEFD6C;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82aefd6c
	if (ctx.cr6.gt) goto loc_82AEFD6C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82aefd6c
	if (ctx.cr6.lt) goto loc_82AEFD6C;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aefd6c
	if (!ctx.cr6.eq) goto loc_82AEFD6C;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aefd6c
	if (ctx.cr6.eq) goto loc_82AEFD6C;
	// rlwinm r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aefddc
	if (ctx.cr6.eq) goto loc_82AEFDDC;
loc_82AEFD6C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f13,-17992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17992);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82aefddc
	if (ctx.cr6.lt) goto loc_82AEFDDC;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f13,-14100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82aefddc
	if (ctx.cr6.gt) goto loc_82AEFDDC;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f13,-17996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17996);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82aefddc
	if (ctx.cr6.lt) goto loc_82AEFDDC;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f13,-14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14096);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82aefe08
	if (!ctx.cr6.gt) goto loc_82AEFE08;
loc_82AEFDDC:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r3,1
	ctx.r3.s64 = 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-14112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14112);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82aefe0c
	if (ctx.cr6.lt) goto loc_82AEFE0C;
loc_82AEFE08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AEFE0C:
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

__attribute__((alias("__imp__sub_82AEFE20"))) PPC_WEAK_FUNC(sub_82AEFE20);
PPC_FUNC_IMPL(__imp__sub_82AEFE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AEFE28;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82396ef8
	ctx.lr = 0x82AEFE40;
	sub_82396EF8(ctx, base);
	// bl 0x82a1d068
	ctx.lr = 0x82AEFE44;
	sub_82A1D068(ctx, base);
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r27,r11,-19048
	ctx.r27.s64 = ctx.r11.s64 + -19048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-19036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19036);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lfs f31,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82aefe80
	if (!ctx.cr6.eq) goto loc_82AEFE80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,0(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f31,4(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f31,8(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stw r11,-19036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19036, ctx.r11.u32);
loc_82AEFE80:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-11632
	ctx.r28.s64 = ctx.r11.s64 + -11632;
	// addi r29,r10,-11668
	ctx.r29.s64 = ctx.r10.s64 + -11668;
	// beq cr6,0x82aeffb0
	if (ctx.cr6.eq) goto loc_82AEFFB0;
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
	ctx.lr = 0x82AEFEB0;
	sub_8233E028(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82AEFECC;
	sub_8233E028(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x825cea10
	ctx.lr = 0x82AEFEDC;
	sub_825CEA10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aeffb0
	if (!ctx.cr6.eq) goto loc_82AEFFB0;
	// lfs f0,1140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,1140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,26252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82aeffb0
	if (ctx.cr6.lt) goto loc_82AEFFB0;
	// stfs f31,1048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// lwz r11,1136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aeff28
	if (ctx.cr6.eq) goto loc_82AEFF28;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82aeff2c
	if (!ctx.cr6.eq) goto loc_82AEFF2C;
loc_82AEFF28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AEFF2C:
	// lwz r10,1136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stw r10,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aeff64
	if (ctx.cr6.eq) goto loc_82AEFF64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// ld r4,1112(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1112);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,1240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1240);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AEFF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AEFF64:
	// lfs f0,1140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,1140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,1144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f13,1144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f12,1148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1148);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,1148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lfs f11,1152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1152(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// bl 0x8233e028
	ctx.lr = 0x82AEFFA0;
	sub_8233E028(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x825ce990
	ctx.lr = 0x82AEFFB0;
	sub_825CE990(ctx, base);
loc_82AEFFB0:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af0020
	if (ctx.cr6.eq) goto loc_82AF0020;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82AEFFDC;
	sub_8233E028(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x825ce990
	ctx.lr = 0x82AEFFEC;
	sub_825CE990(ctx, base);
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
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82AF0008;
	sub_8233E028(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x825ce990
	ctx.lr = 0x82AF0018;
	sub_825CE990(ctx, base);
	// stfs f31,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// b 0x82af0044
	goto loc_82AF0044;
loc_82AF0020:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af0038
	if (ctx.cr6.eq) goto loc_82AF0038;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af0048
	if (!ctx.cr6.eq) goto loc_82AF0048;
loc_82AF0038:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
loc_82AF0044:
	// stfs f31,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
loc_82AF0048:
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af00f0
	if (ctx.cr6.eq) goto loc_82AF00F0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f13,-17992(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17992);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82af00c8
	if (ctx.cr6.lt) goto loc_82AF00C8;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lfs f13,-14100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82af00c8
	if (ctx.cr6.gt) goto loc_82AF00C8;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f13,-17996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17996);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82af00c8
	if (ctx.cr6.lt) goto loc_82AF00C8;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lfs f13,-14096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14096);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82af00f0
	if (!ctx.cr6.gt) goto loc_82AF00F0;
loc_82AF00C8:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rldicr r5,r8,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,1240(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1240);
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AF00F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF00F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF00FC"))) PPC_WEAK_FUNC(sub_82AF00FC);
PPC_FUNC_IMPL(__imp__sub_82AF00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF0100"))) PPC_WEAK_FUNC(sub_82AF0100);
PPC_FUNC_IMPL(__imp__sub_82AF0100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF0108;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ac8
	ctx.lr = 0x82AF0110;
	__savefpr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// std r4,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r4.u64);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// std r5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r5.u64);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r30,r11,17956
	ctx.r30.s64 = ctx.r11.s64 + 17956;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,17920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17920);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82af015c
	if (!ctx.cr6.eq) goto loc_82AF015C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r11,17920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17920, ctx.r11.u32);
loc_82AF015C:
	// lfs f26,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmuls f0,f26,f26
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f26.f64));
	// lfs f27,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f27.f64 = double(temp.f32);
	// addi r28,r11,31544
	ctx.r28.s64 = ctx.r11.s64 + 31544;
	// lfs f22,1548(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1548);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f13,f27,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fsqrts f23,f13
	ctx.f23.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f23,f31
	ctx.cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// beq cr6,0x82af01c4
	if (ctx.cr6.eq) goto loc_82AF01C4;
	// fdivs f0,f22,f23
	ctx.f0.f64 = double(float(ctx.f22.f64 / ctx.f23.f64));
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// lfs f26,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f26.f64 = double(temp.f32);
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// lfs f27,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f25.f64 = double(temp.f32);
loc_82AF01C4:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x823d7698
	ctx.lr = 0x82AF01F0;
	sub_823D7698(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f21,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f21.f64 = double(temp.f32);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lfs f20,1316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	ctx.f20.f64 = double(temp.f32);
	// lfs f28,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f0,f28,f25
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f25.f64));
	// lfs f30,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f13,f30,f27,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fmadds f24,f29,f26,f13
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f13.f64));
	// bl 0x82ab9728
	ctx.lr = 0x82AF021C;
	sub_82AB9728(ctx, base);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stfs f22,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f22,564(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// lfs f0,-17288(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -17288);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(ctx.f24.f64, ctx.f0.f64);
	// ble cr6,0x82af0260
	if (!ctx.cr6.gt) goto loc_82AF0260;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lfs f0,1084(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82af0250
	if (!ctx.cr6.lt) goto loc_82AF0250;
	// stfs f31,1048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f31,564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
loc_82AF0250:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stfs f31,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// b 0x82af0500
	goto loc_82AF0500;
loc_82AF0260:
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af032c
	if (!ctx.cr6.eq) goto loc_82AF032C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17292);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(ctx.f24.f64, ctx.f0.f64);
	// bge cr6,0x82af032c
	if (!ctx.cr6.lt) goto loc_82AF032C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// ble cr6,0x82af032c
	if (!ctx.cr6.gt) goto loc_82AF032C;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af02dc
	if (ctx.cr6.eq) goto loc_82AF02DC;
	// fmuls f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// stfs f0,1048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// fmsubs f11,f29,f31,f13
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 - ctx.f13.f64));
	// fsubs f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fsubs f9,f30,f12
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fmuls f8,f11,f25
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// fmadds f7,f10,f27,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f8.f64));
	// fmadds f6,f9,f26,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f26.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// bge cr6,0x82af0324
	if (!ctx.cr6.lt) goto loc_82AF0324;
loc_82AF02D4:
	// stfs f22,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// b 0x82af0500
	goto loc_82AF0500;
loc_82AF02DC:
	// lfs f0,1004(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82af02f8
	if (!ctx.cr6.gt) goto loc_82AF02F8;
	// stfs f0,1316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// b 0x82af02fc
	goto loc_82AF02FC;
loc_82AF02F8:
	// stfs f31,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
loc_82AF02FC:
	// fmuls f13,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fsubs f11,f30,f13
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fsubs f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fmsubs f9,f29,f31,f12
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 - ctx.f12.f64));
	// fmuls f8,f11,f26
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmadds f7,f10,f27,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f8.f64));
	// fmadds f6,f9,f25,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f25.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// bge cr6,0x82af02d4
	if (!ctx.cr6.lt) goto loc_82AF02D4;
loc_82AF0324:
	// stfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// b 0x82af0500
	goto loc_82AF0500;
loc_82AF032C:
	// fmuls f13,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// lwz r11,17920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17920);
	// fmuls f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fmsubs f12,f29,f31,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 - ctx.f12.f64));
	// bne cr6,0x82af0364
	if (!ctx.cr6.eq) goto loc_82AF0364;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r11,17920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17920, ctx.r11.u32);
loc_82AF0364:
	// fmuls f9,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f10,-18352(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lfs f11,-18108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsqrt f6,f7
	ctx.f6.f64 = sqrt(ctx.f7.f64);
	// fdiv f5,f10,f6
	ctx.f5.f64 = ctx.f10.f64 / ctx.f6.f64;
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// ble cr6,0x82af03b0
	if (!ctx.cr6.gt) goto loc_82AF03B0;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82AF03B0:
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f25
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f12,f27,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 + ctx.f10.f64));
	// lfs f30,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f8,f13,f26,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f9.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82af0404
	if (!ctx.cr6.lt) goto loc_82AF0404;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82af0410
	goto loc_82AF0410;
loc_82AF0404:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// blt cr6,0x82af0410
	if (ctx.cr6.lt) goto loc_82AF0410;
	// fmr f0,f22
	ctx.f0.f64 = ctx.f22.f64;
loc_82AF0410:
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// stfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af0490
	if (!ctx.cr6.eq) goto loc_82AF0490;
	// lfs f12,1004(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1004);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f23,f12
	ctx.cr6.compare(ctx.f23.f64, ctx.f12.f64);
	// ble cr6,0x82af0490
	if (!ctx.cr6.gt) goto loc_82AF0490;
	// lfs f13,1076(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82af0444
	if (!ctx.cr6.eq) goto loc_82AF0444;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82af0448
	goto loc_82AF0448;
loc_82AF0444:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82AF0448:
	// fcmpu cr6,f24,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// bge cr6,0x82af0490
	if (!ctx.cr6.lt) goto loc_82AF0490;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af0474
	if (ctx.cr6.eq) goto loc_82AF0474;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stfs f30,1048(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// lfs f13,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,564(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// b 0x82af0490
	goto loc_82AF0490;
loc_82AF0474:
	// lfs f13,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82af048c
	if (!ctx.cr6.gt) goto loc_82AF048C;
	// stfs f30,1316(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stfs f31,564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// b 0x82af0490
	goto loc_82AF0490;
loc_82AF048C:
	// stfs f31,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
loc_82AF0490:
	// lfs f13,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x82af04b4
	if (!ctx.cr6.lt) goto loc_82AF04B4;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af04b4
	if (ctx.cr6.eq) goto loc_82AF04B4;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
loc_82AF04B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF04C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af0500
	if (ctx.cr6.eq) goto loc_82AF0500;
	// lbz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af04e8
	if (ctx.cr6.eq) goto loc_82AF04E8;
	// stfs f22,1052(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// b 0x82af0500
	goto loc_82AF0500;
loc_82AF04E8:
	// lfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f12,1044(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// stfs f11,1048(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
loc_82AF0500:
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x82ab9728
	ctx.lr = 0x82AF0508;
	sub_82AB9728(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af0544
	if (ctx.cr6.eq) goto loc_82AF0544;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af0544
	if (ctx.cr6.eq) goto loc_82AF0544;
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af0544
	if (!ctx.cr6.eq) goto loc_82AF0544;
	// stfs f21,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f20,1316(r31)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b14
	ctx.lr = 0x82AF0540;
	__restfpr_20(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82AF0544:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1076(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b14
	ctx.lr = 0x82AF0558;
	__restfpr_20(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF055C"))) PPC_WEAK_FUNC(sub_82AF055C);
PPC_FUNC_IMPL(__imp__sub_82AF055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF0560"))) PPC_WEAK_FUNC(sub_82AF0560);
PPC_FUNC_IMPL(__imp__sub_82AF0560) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82af063c
	if (ctx.cr6.eq) goto loc_82AF063C;
	// bl 0x829ba1c8
	ctx.lr = 0x82AF0594;
	sub_829BA1C8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af05b4
	if (ctx.cr6.eq) goto loc_82AF05B4;
loc_82AF05A0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af05c4
	if (ctx.cr6.eq) goto loc_82AF05C4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af05a0
	if (!ctx.cr6.eq) goto loc_82AF05A0;
loc_82AF05B4:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af05d4
	if (ctx.cr6.eq) goto loc_82AF05D4;
loc_82AF05C4:
	// lfs f0,1324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// b 0x82af0640
	goto loc_82AF0640;
loc_82AF05D4:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af0630
	if (ctx.cr6.eq) goto loc_82AF0630;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f13,1324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1324);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,1812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r10,-18304
	ctx.r8.s64 = ctx.r10.s64 + -18304;
	// lfs f11,408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f0,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// mfcr r7
	ctx.r7.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r7.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r7.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r7.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r7.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r7.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r7.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r7.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r7.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r7.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r7.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r7.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r7.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r7.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r7.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r7.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r7.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r7.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r7.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r7.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r7.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r7.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r7.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r7.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r7.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r7.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r7.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r7.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r7.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r7.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r7.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r7.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f8,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f10,f11
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// fmadds f6,f13,f0,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f1,f12,f6,f6
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f6.f64));
	// b 0x82af0640
	goto loc_82AF0640;
loc_82AF0630:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f1,-28968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28968);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82af0640
	goto loc_82AF0640;
loc_82AF063C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82AF0640:
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

__attribute__((alias("__imp__sub_82AF065C"))) PPC_WEAK_FUNC(sub_82AF065C);
PPC_FUNC_IMPL(__imp__sub_82AF065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF0660"))) PPC_WEAK_FUNC(sub_82AF0660);
PPC_FUNC_IMPL(__imp__sub_82AF0660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// ble cr6,0x82af06b0
	if (!ctx.cr6.gt) goto loc_82AF06B0;
	// fdivs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82af0688
	if (!ctx.cr6.gt) goto loc_82AF0688;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82AF0688:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r6,r8,-18304
	ctx.r6.s64 = ctx.r8.s64 + -18304;
	// lfsx f13,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// blr 
	return;
loc_82AF06B0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82af0688
	goto loc_82AF0688;
}

__attribute__((alias("__imp__sub_82AF06B8"))) PPC_WEAK_FUNC(sub_82AF06B8);
PPC_FUNC_IMPL(__imp__sub_82AF06B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f1,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f1.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-14480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f8,f11,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f0,f7
	ctx.f0.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x82af0730
	if (!ctx.cr6.gt) goto loc_82AF0730;
	// lfs f12,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82af0738
	if (!ctx.cr6.gt) goto loc_82AF0738;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// blr 
	return;
loc_82AF0730:
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82AF0738:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF0740"))) PPC_WEAK_FUNC(sub_82AF0740);
PPC_FUNC_IMPL(__imp__sub_82AF0740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF0748;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6adc
	ctx.lr = 0x82AF0750;
	__savefpr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x82ab9728
	ctx.lr = 0x82AF0760;
	sub_82AB9728(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82af0a90
	if (ctx.cr6.eq) goto loc_82AF0A90;
	// lwz r11,600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	// lfs f29,968(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 968);
	ctx.f29.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af07b4
	if (!ctx.cr6.gt) goto loc_82AF07B4;
	// lwz r11,596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af07b4
	if (ctx.cr6.eq) goto loc_82AF07B4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF07A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82af07e4
	goto loc_82AF07E4;
loc_82AF07B4:
	// lwz r4,524(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af07f0
	if (ctx.cr6.eq) goto loc_82AF07F0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF07D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_82AF07E4:
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82AF07F0:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f9,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// lfs f25,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f6,f12,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f9,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f3,f7,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f0,f4
	ctx.f0.f64 = double(float(sqrt(ctx.f4.f64)));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// bge cr6,0x82af0848
	if (!ctx.cr6.lt) goto loc_82AF0848;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
loc_82AF0848:
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// fdivs f26,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823d7698
	ctx.lr = 0x82AF0858;
	sub_823D7698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f30,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lfs f31,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82382590
	ctx.lr = 0x82AF08AC;
	sub_82382590(ctx, base);
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f28,f11
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fsubs f8,f27,f10
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f10.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82382590
	ctx.lr = 0x82AF08FC;
	sub_82382590(ctx, base);
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fmuls f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r10,-32444
	ctx.r4.s64 = ctx.r10.s64 + -32444;
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r11,-18304
	ctx.r5.s64 = ctx.r11.s64 + -18304;
	// lfs f0,-1296(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -1296);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmadds f9,f3,f11,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f6,f10,f2,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fcmpu cr6,f6,f30
	ctx.cr6.compare(ctx.f6.f64, ctx.f30.f64);
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
	// fmuls f8,f6,f6
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f7,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f5,f7,f8,f0
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fmuls f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bge cr6,0x82af0968
	if (!ctx.cr6.lt) goto loc_82AF0968;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
loc_82AF0968:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x82af0660
	ctx.lr = 0x82AF0974;
	sub_82AF0660(ctx, base);
	// stfs f1,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x82af06b8
	ctx.lr = 0x82AF0984;
	sub_82AF06B8(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f1,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// lwz r11,19280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19280);
	// lfs f4,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82af09b0
	if (!ctx.cr6.eq) goto loc_82AF09B0;
	// lwz r11,924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 924);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af0a1c
	if (ctx.cr6.eq) goto loc_82AF0A1C;
loc_82AF09B0:
	// lwz r11,1068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1068);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82af0a1c
	if (!ctx.cr6.lt) goto loc_82AF0A1C;
	// fcmpu cr6,f26,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f25.f64);
	// bge cr6,0x82af09d0
	if (!ctx.cr6.lt) goto loc_82AF09D0;
	// stfs f30,1048(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f4,1316(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// b 0x82af0a1c
	goto loc_82AF0A1C;
loc_82AF09D0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bge cr6,0x82af0a1c
	if (!ctx.cr6.lt) goto loc_82AF0A1C;
	// fcmpu cr6,f6,f25
	ctx.cr6.compare(ctx.f6.f64, ctx.f25.f64);
	// bge cr6,0x82af0a1c
	if (!ctx.cr6.lt) goto loc_82AF0A1C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,26252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fcmpu cr6,f5,f11
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// ble cr6,0x82af0a1c
	if (!ctx.cr6.gt) goto loc_82AF0A1C;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82af0660
	ctx.lr = 0x82AF0A08;
	sub_82AF0660(ctx, base);
	// stfs f1,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82af06b8
	ctx.lr = 0x82AF0A18;
	sub_82AF06B8(ctx, base);
	// stfs f1,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
loc_82AF0A1C:
	// lfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,1048(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,1316(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f10,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f10,f11,f30
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f30.f64;
	// stfs f0,1048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82af0a68
	if (!ctx.cr6.gt) goto loc_82AF0A68;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82AF0A68:
	// stfs f0,1048(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// fcmpu cr6,f13,f4
	ctx.cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// bge cr6,0x82af0a78
	if (!ctx.cr6.lt) goto loc_82AF0A78;
	// fmr f13,f4
	ctx.f13.f64 = ctx.f4.f64;
loc_82AF0A78:
	// stfs f13,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82af0a88
	if (!ctx.cr6.gt) goto loc_82AF0A88;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
loc_82AF0A88:
	// stfs f13,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
loc_82AF0A90:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b28
	ctx.lr = 0x82AF0A9C;
	__restfpr_25(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF0AA0"))) PPC_WEAK_FUNC(sub_82AF0AA0);
PPC_FUNC_IMPL(__imp__sub_82AF0AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82AF0AA8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x82ab9728
	ctx.lr = 0x82AF0AC0;
	sub_82AB9728(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82af0d7c
	if (ctx.cr6.eq) goto loc_82AF0D7C;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1136(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1136);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,1132
	ctx.r3.s64 = ctx.r29.s64 + 1132;
	// bl 0x8232d180
	ctx.lr = 0x82AF0AE4;
	sub_8232D180(ctx, base);
	// addi r26,r31,1860
	ctx.r26.s64 = ctx.r31.s64 + 1860;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1864(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AF0B00;
	sub_8232D180(ctx, base);
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af0b20
	if (ctx.cr6.eq) goto loc_82AF0B20;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,1324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF0B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF0B20:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f0,-18280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lfs f13,-14344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14344);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r7,-18304
	ctx.r6.s64 = ctx.r7.s64 + -18304;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,18676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r11,29152
	ctx.r27.s64 = ctx.r11.s64 + 29152;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// lwz r24,29152(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29152);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r25,12(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
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
	// rlwinm r11,r5,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r10,r5,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f9,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f31,f9,f11,f0
	ctx.f31.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// bl 0x823d7698
	ctx.lr = 0x82AF0B8C;
	sub_823D7698(ctx, base);
	// lfs f5,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,-31264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31264);
	// lfs f6,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f8,f3
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,280(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82af0c04
	if (ctx.cr6.eq) goto loc_82AF0C04;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF0C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82af0c08
	goto loc_82AF0C08;
loc_82AF0C04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AF0C08:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af0d60
	if (ctx.cr6.eq) goto loc_82AF0D60;
loc_82AF0C14:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af0cf4
	if (!ctx.cr6.eq) goto loc_82AF0CF4;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af0cf4
	if (!ctx.cr6.eq) goto loc_82AF0CF4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82af0cf4
	if (ctx.cr6.eq) goto loc_82AF0CF4;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af0cf4
	if (ctx.cr6.eq) goto loc_82AF0CF4;
	// bl 0x82312318
	ctx.lr = 0x82AF0C4C;
	sub_82312318(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af0c6c
	if (ctx.cr6.eq) goto loc_82AF0C6C;
loc_82AF0C58:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af0c7c
	if (ctx.cr6.eq) goto loc_82AF0C7C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af0c58
	if (!ctx.cr6.eq) goto loc_82AF0C58;
loc_82AF0C6C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af0cf4
	if (ctx.cr6.eq) goto loc_82AF0CF4;
loc_82AF0C7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,1324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF0C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82af0d54
	if (ctx.cr6.eq) goto loc_82AF0D54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF0CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af0d54
	if (ctx.cr6.eq) goto loc_82AF0D54;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,1328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF0CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1460);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF0CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82af0d54
	goto loc_82AF0D54;
loc_82AF0CF4:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af0d20
	if (!ctx.cr6.eq) goto loc_82AF0D20;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af0d20
	if (!ctx.cr6.eq) goto loc_82AF0D20;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af0d54
	if (ctx.cr6.eq) goto loc_82AF0D54;
loc_82AF0D20:
	// lwz r22,1864(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82294498
	ctx.lr = 0x82AF0D40;
	sub_82294498(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82af0d54
	if (ctx.cr0.eq) goto loc_82AF0D54;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82AF0D54:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82af0c14
	if (!ctx.cr6.eq) goto loc_82AF0C14;
loc_82AF0D60:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af0d78
	if (ctx.cr6.eq) goto loc_82AF0D78;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82367960
	ctx.lr = 0x82AF0D78;
	sub_82367960(ctx, base);
loc_82AF0D78:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
loc_82AF0D7C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF0D88"))) PPC_WEAK_FUNC(sub_82AF0D88);
PPC_FUNC_IMPL(__imp__sub_82AF0D88) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6ac4
	ctx.lr = 0x82AF0DA0;
	__savefpr_19(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r4.u64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r5,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,392(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,-18108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82382590
	ctx.lr = 0x82AF0DD8;
	sub_82382590(ctx, base);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r30,256
	ctx.r31.s64 = ctx.r30.s64 + 256;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f30,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fsubs f28,f0,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmsubs f29,f13,f30,f12
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f12.f64));
	// fsubs f27,f10,f13
	ctx.f27.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// bl 0x823d7698
	ctx.lr = 0x82AF0E10;
	sub_823D7698(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f9,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f26,f5,f30,f7
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 - ctx.f7.f64));
	// fsubs f25,f9,f6
	ctx.f25.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f24,f6,f5
	ctx.f24.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// bl 0x823d7698
	ctx.lr = 0x82AF0E40;
	sub_823D7698(ctx, base);
	// lfs f23,1328(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1328);
	ctx.f23.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmuls f4,f25,f23
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f23.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fmuls f3,f24,f23
	ctx.f3.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// lfs f22,1324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1324);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f2,f26,f23
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f23.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f1,f22
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f22.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f22
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmuls f10,f12,f22
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// fmuls f9,f4,f31
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f8,f3,f31
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f7,f2,f31
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fneg f3,f9
	ctx.f3.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fneg f2,f8
	ctx.f2.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fadds f21,f3,f6
	ctx.f21.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f20,f2,f5
	ctx.f20.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f19,f1,f4
	ctx.f19.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// bl 0x823d7698
	ctx.lr = 0x82AF0EB4;
	sub_823D7698(ctx, base);
	// lfs f11,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f24,f23
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// fmuls f13,f26,f23
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f23.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f23,f25
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f11,f22
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// fmuls f7,f9,f22
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fmuls f6,f8,f22
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f22.f64));
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f2,f10,f31
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f1,f7,f31
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fadds f0,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fmuls f13,f6,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// fmuls f12,f20,f27
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f27.f64));
	// fadds f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fmuls f10,f0,f27
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fadds f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmadds f8,f19,f29,f12
	ctx.f8.f64 = double(float(ctx.f19.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f7,f11,f29,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f6,f21,f28,f8
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f28.f64 + ctx.f8.f64));
	// fmadds f5,f9,f28,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f7.f64));
	// fabs f4,f6
	ctx.f4.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fabs f3,f5
	ctx.f3.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f30
	ctx.cr6.compare(ctx.f2.f64, ctx.f30.f64);
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
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f1,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsel f1,f1,f4,f3
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f4.f64 : ctx.f3.f64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b10
	ctx.lr = 0x82AF0F50;
	__restfpr_19(ctx, base);
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

__attribute__((alias("__imp__sub_82AF0F64"))) PPC_WEAK_FUNC(sub_82AF0F64);
PPC_FUNC_IMPL(__imp__sub_82AF0F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF0F68"))) PPC_WEAK_FUNC(sub_82AF0F68);
PPC_FUNC_IMPL(__imp__sub_82AF0F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AF0F70;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af112c
	if (ctx.cr6.eq) goto loc_82AF112C;
	// lfs f13,252(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r31,r11,32548
	ctx.r31.s64 = ctx.r11.s64 + 32548;
	// lfs f13,3980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3980);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82af112c
	if (ctx.cr6.gt) goto loc_82AF112C;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lfs f13,-14220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82af112c
	if (ctx.cr6.lt) goto loc_82AF112C;
	// bl 0x829ba1c8
	ctx.lr = 0x82AF0FB8;
	sub_829BA1C8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af0fd8
	if (ctx.cr6.eq) goto loc_82AF0FD8;
loc_82AF0FC4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af0fe8
	if (ctx.cr6.eq) goto loc_82AF0FE8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af0fc4
	if (!ctx.cr6.eq) goto loc_82AF0FC4;
loc_82AF0FD8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af107c
	if (ctx.cr6.eq) goto loc_82AF107C;
loc_82AF0FE8:
	// addi r31,r29,1772
	ctx.r31.s64 = ctx.r29.s64 + 1772;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82af6f00
	ctx.lr = 0x82AF1014;
	sub_82AF6F00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af1038
	if (ctx.cr6.eq) goto loc_82AF1038;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823721d0
	ctx.lr = 0x82AF1024;
	sub_823721D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823721d0
	ctx.lr = 0x82AF102C;
	sub_823721D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AF1038:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af6828
	ctx.lr = 0x82AF104C;
	sub_82AF6828(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af6f88
	ctx.lr = 0x82AF105C;
	sub_82AF6F88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823721d0
	ctx.lr = 0x82AF1068;
	sub_823721D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823721d0
	ctx.lr = 0x82AF1070;
	sub_823721D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AF107C:
	// bl 0x82312318
	ctx.lr = 0x82AF1080;
	sub_82312318(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af10a0
	if (ctx.cr6.eq) goto loc_82AF10A0;
loc_82AF108C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82af10b0
	if (ctx.cr6.eq) goto loc_82AF10B0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af108c
	if (!ctx.cr6.eq) goto loc_82AF108C;
loc_82AF10A0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af10dc
	if (ctx.cr6.eq) goto loc_82AF10DC;
loc_82AF10B0:
	// lwz r11,904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,1328(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1328);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// addi r3,r29,1772
	ctx.r3.s64 = ctx.r29.s64 + 1772;
	// lfs f0,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x82af7928
	ctx.lr = 0x82AF10D4;
	sub_82AF7928(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AF10DC:
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af112c
	if (ctx.cr6.eq) goto loc_82AF112C;
	// lwz r3,368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// bl 0x82612960
	ctx.lr = 0x82AF10F0;
	sub_82612960(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af1114
	if (ctx.cr6.eq) goto loc_82AF1114;
	// lwz r11,368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// addi r3,r29,1772
	ctx.r3.s64 = ctx.r29.s64 + 1772;
	// lfs f1,660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82af7928
	ctx.lr = 0x82AF110C;
	sub_82AF7928(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AF1114:
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r29,1772
	ctx.r3.s64 = ctx.r29.s64 + 1772;
	// bl 0x82af7928
	ctx.lr = 0x82AF1124;
	sub_82AF7928(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AF112C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF1138"))) PPC_WEAK_FUNC(sub_82AF1138);
PPC_FUNC_IMPL(__imp__sub_82AF1138) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF1170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF1180"))) PPC_WEAK_FUNC(sub_82AF1180);
PPC_FUNC_IMPL(__imp__sub_82AF1180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,904(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af11a8
	if (ctx.cr6.eq) goto loc_82AF11A8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82AF11A8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF11C0"))) PPC_WEAK_FUNC(sub_82AF11C0);
PPC_FUNC_IMPL(__imp__sub_82AF11C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF11C8;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// std r4,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r4.u64);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// std r5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f30,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// bl 0x8275f558
	ctx.lr = 0x82AF1254;
	sub_8275F558(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lfs f9,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lfs f8,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r30,244
	ctx.r7.s64 = ctx.r30.s64 + 244;
	// lfs f0,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,17956
	ctx.r11.s64 = ctx.r11.s64 + 17956;
	// lfs f13,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lwz r10,17920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17920);
	// lfs f12,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82af12b0
	if (!ctx.cr6.eq) goto loc_82AF12B0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,17920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17920, ctx.r10.u32);
loc_82AF12B0:
	// fmuls f6,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f10,-18352(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// lfs f11,-18108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18108);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f12,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsqrt f3,f4
	ctx.f3.f64 = sqrt(ctx.f4.f64);
	// fdiv f2,f10,f3
	ctx.f2.f64 = ctx.f10.f64 / ctx.f3.f64;
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// frsp f11,f2
	ctx.f11.f64 = double(float(ctx.f2.f64));
	// ble cr6,0x82af12fc
	if (!ctx.cr6.gt) goto loc_82AF12FC;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82AF12FC:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,8838
	ctx.r8.s64 = 8838;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fadds f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,-31264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// fadds f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x827723e0
	ctx.lr = 0x82AF136C;
	sub_827723E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af1434
	if (ctx.cr6.eq) goto loc_82AF1434;
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,396
	ctx.r4.s64 = ctx.r11.s64 + 396;
	// bl 0x82381228
	ctx.lr = 0x82AF1384;
	sub_82381228(ctx, base);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// beq cr6,0x82af13d8
	if (ctx.cr6.eq) goto loc_82AF13D8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF13D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82AF13D8:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,8838
	ctx.r8.s64 = 8838;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-31264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x827723e0
	ctx.lr = 0x82AF1418;
	sub_827723E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82af1434
	if (!ctx.cr6.eq) goto loc_82AF1434;
	// lfs f0,500(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82af1438
	if (!ctx.cr6.lt) goto loc_82AF1438;
loc_82AF1434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AF1438:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF1448"))) PPC_WEAK_FUNC(sub_82AF1448);
PPC_FUNC_IMPL(__imp__sub_82AF1448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AF1450;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af14ac
	if (ctx.cr6.eq) goto loc_82AF14AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF1484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
	// lwz r5,900(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// stw r5,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r5.u32);
loc_82AF14AC:
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af14d4
	if (ctx.cr6.eq) goto loc_82AF14D4;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r7,r8,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
loc_82AF14D4:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,17480
	ctx.r29.s64 = ctx.r11.s64 + 17480;
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82af160c
	if (ctx.cr6.eq) goto loc_82AF160C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF150C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,408(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 408);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF1534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lwz r5,456(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 456);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82AF1558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af160c
	if (ctx.cr6.eq) goto loc_82AF160C;
	// lfs f0,14612(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 14612);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f8,184(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF15A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823d7698
	ctx.lr = 0x82AF15AC;
	sub_823D7698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d4218
	ctx.lr = 0x82AF15B8;
	sub_823D4218(ctx, base);
	// lfs f7,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f5,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// stfs f7,208(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f4,220(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AF15F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82af160c
	if (ctx.cr6.eq) goto loc_82AF160C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF160C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF160C:
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af1730
	if (ctx.cr6.eq) goto loc_82AF1730;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,252(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// stfs f0,1840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,-26236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r28,1836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1836, ctx.r28.u8);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// beq cr6,0x82af1730
	if (ctx.cr6.eq) goto loc_82AF1730;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF169C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f6,200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x823d27f0
	ctx.lr = 0x82AF16D8;
	sub_823D27F0(ctx, base);
	// lfs f5,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,1832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f0,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,1520(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1520);
	// fmadds f12,f3,f0,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF1730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF1730:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF173C"))) PPC_WEAK_FUNC(sub_82AF173C);
PPC_FUNC_IMPL(__imp__sub_82AF173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF1740"))) PPC_WEAK_FUNC(sub_82AF1740);
PPC_FUNC_IMPL(__imp__sub_82AF1740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF1748;
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
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af17e0
	if (!ctx.cr6.gt) goto loc_82AF17E0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f30.f64 = double(temp.f32);
loc_82AF177C:
	// lwz r11,1100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// lwz r10,900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,716(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// ld r31,96(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 96);
	// bl 0x825eac10
	ctx.lr = 0x82AF1794;
	sub_825EAC10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af17a8
	if (ctx.cr6.eq) goto loc_82AF17A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8252b9a8
	ctx.lr = 0x82AF17A4;
	sub_8252B9A8(ctx, base);
	// b 0x82af17ac
	goto loc_82AF17AC;
loc_82AF17A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AF17AC:
	// bl 0x826d8598
	ctx.lr = 0x82AF17B0;
	sub_826D8598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af17cc
	if (ctx.cr6.eq) goto loc_82AF17CC;
	// lfs f0,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,200(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f31,208(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f31,216(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
loc_82AF17CC:
	// lwz r11,1104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82af177c
	if (ctx.cr6.lt) goto loc_82AF177C;
loc_82AF17E0:
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

__attribute__((alias("__imp__sub_82AF17F0"))) PPC_WEAK_FUNC(sub_82AF17F0);
PPC_FUNC_IMPL(__imp__sub_82AF17F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,455
	ctx.r11.s64 = ctx.r11.s64 + 455;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF180C"))) PPC_WEAK_FUNC(sub_82AF180C);
PPC_FUNC_IMPL(__imp__sub_82AF180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF1810"))) PPC_WEAK_FUNC(sub_82AF1810);
PPC_FUNC_IMPL(__imp__sub_82AF1810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF1818;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lbz r8,1836(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1836);
	// lwz r9,744(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82af187c
	if (!ctx.cr6.gt) goto loc_82AF187C;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
loc_82AF1850:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82af186c
	if (ctx.cr6.eq) goto loc_82AF186C;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r28,64(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82af187c
	if (!ctx.cr6.eq) goto loc_82AF187C;
loc_82AF186C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82af1850
	if (ctx.cr6.lt) goto loc_82AF1850;
loc_82AF187C:
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82af1890
	if (ctx.cr6.lt) goto loc_82AF1890;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82AF1890:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r10,1836(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1836, ctx.r10.u8);
	// beq cr6,0x82af1b2c
	if (ctx.cr6.eq) goto loc_82AF1B2C;
	// lwz r11,760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af1b2c
	if (ctx.cr6.eq) goto loc_82AF1B2C;
	// lfs f0,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f13,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r10,455
	ctx.r8.s64 = ctx.r10.s64 + 455;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-14296(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14296);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// addi r31,r30,244
	ctx.r31.s64 = ctx.r30.s64 + 244;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfsx f5,r7,r30
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f29,f4,f4
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f30,f6,f6,f2
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// beq cr6,0x82af191c
	if (ctx.cr6.eq) goto loc_82AF191C;
	// addi r11,r10,454
	ctx.r11.s64 = ctx.r10.s64 + 454;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82af1924
	goto loc_82AF1924;
loc_82AF191C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
loc_82AF1924:
	// lwz r11,1320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	// fmuls f31,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// rlwinm r9,r11,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82af195c
	if (!ctx.cr6.eq) goto loc_82AF195C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af195c
	if (ctx.cr6.eq) goto loc_82AF195C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF195C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF195C:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x82af19ac
	if (!ctx.cr6.gt) goto loc_82AF19AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af1b48
	ctx.lr = 0x82AF196C;
	sub_82AF1B48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af19ac
	if (ctx.cr6.eq) goto loc_82AF19AC;
	// lbz r11,1836(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82af1990
	if (ctx.cr6.lt) goto loc_82AF1990;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82AF1990:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1836(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1836, ctx.r11.u8);
	// addic. r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82af1a28
	if (!ctx.cr0.eq) goto loc_82AF1A28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af1740
	ctx.lr = 0x82AF19A8;
	sub_82AF1740(ctx, base);
	// b 0x82af1a28
	goto loc_82AF1A28;
loc_82AF19AC:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x82af1a28
	if (!ctx.cr6.lt) goto loc_82AF1A28;
	// bl 0x829d7ee0
	ctx.lr = 0x82AF19B8;
	sub_829D7EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af19d0
	if (ctx.cr6.eq) goto loc_82AF19D0;
	// lbz r11,1836(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1836);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82af1a28
	if (!ctx.cr0.gt) goto loc_82AF1A28;
loc_82AF19D0:
	// lbz r11,1836(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1836);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,1836(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1836, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af1a28
	if (!ctx.cr6.eq) goto loc_82AF1A28;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82af1a28
	if (ctx.cr6.eq) goto loc_82AF1A28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF1A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lfs f0,17480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26236(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1840(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1840, temp.u32);
	// stfs f13,1844(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1844, temp.u32);
loc_82AF1A28:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82af1a48
	if (ctx.cr6.gt) goto loc_82AF1A48;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af1a50
	goto loc_82AF1A50;
loc_82AF1A48:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF1A50:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af1b2c
	if (ctx.cr6.eq) goto loc_82AF1B2C;
	// lwz r11,776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af1b2c
	if (ctx.cr6.eq) goto loc_82AF1B2C;
	// lbz r11,1836(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af1b2c
	if (ctx.cr6.eq) goto loc_82AF1B2C;
	// lwz r11,856(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 856);
	// lwz r9,528(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82af1b2c
	if (ctx.cr6.eq) goto loc_82AF1B2C;
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f0,-14344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14344);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r31,332(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AF1B08;
	sub_8240A888(ctx, base);
	// lwz r8,656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF1B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF1B2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82AF1B40"))) PPC_WEAK_FUNC(sub_82AF1B40);
PPC_FUNC_IMPL(__imp__sub_82AF1B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF1B44"))) PPC_WEAK_FUNC(sub_82AF1B44);
PPC_FUNC_IMPL(__imp__sub_82AF1B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF1B48"))) PPC_WEAK_FUNC(sub_82AF1B48);
PPC_FUNC_IMPL(__imp__sub_82AF1B48) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF1B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af1b8c
	if (ctx.cr6.eq) goto loc_82AF1B8C;
loc_82AF1B74:
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
loc_82AF1B8C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,1848(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82af1bfc
	if (ctx.cr6.gt) goto loc_82AF1BFC;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af1bfc
	if (!ctx.cr6.eq) goto loc_82AF1BFC;
	// lwz r11,1320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af1bfc
	if (ctx.cr6.eq) goto loc_82AF1BFC;
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af1b74
	if (!ctx.cr6.eq) goto loc_82AF1B74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF1BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AF1BFC:
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

__attribute__((alias("__imp__sub_82AF1C14"))) PPC_WEAK_FUNC(sub_82AF1C14);
PPC_FUNC_IMPL(__imp__sub_82AF1C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF1C18"))) PPC_WEAK_FUNC(sub_82AF1C18);
PPC_FUNC_IMPL(__imp__sub_82AF1C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AF1C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af1d6c
	if (!ctx.cr6.eq) goto loc_82AF1D6C;
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
	// bgt cr6,0x82af1c58
	if (ctx.cr6.gt) goto loc_82AF1C58;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af1c60
	goto loc_82AF1C60;
loc_82AF1C58:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF1C60:
	// lwz r28,980(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,2372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82af1d6c
	if (!ctx.cr6.gt) goto loc_82AF1D6C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AF1C78:
	// lwz r11,2368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2368);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82af1cb0
	if (ctx.cr6.eq) goto loc_82AF1CB0;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,244(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 244);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82798070
	ctx.lr = 0x82AF1C9C;
	sub_82798070(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82af1cb0
	if (ctx.cr6.eq) goto loc_82AF1CB0;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82af1ccc
	if (!ctx.cr6.eq) goto loc_82AF1CCC;
loc_82AF1CB0:
	// lwz r11,2372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2372);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82af1c78
	if (ctx.cr6.lt) goto loc_82AF1C78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82AF1CCC:
	// lwz r3,240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af1cec
	if (ctx.cr6.eq) goto loc_82AF1CEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82774d70
	ctx.lr = 0x82AF1CE0;
	sub_82774D70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82774e70
	ctx.lr = 0x82AF1CEC;
	sub_82774E70(ctx, base);
loc_82AF1CEC:
	// lwz r3,504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af1d00
	if (ctx.cr6.eq) goto loc_82AF1D00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82774cf0
	ctx.lr = 0x82AF1D00;
	sub_82774CF0(ctx, base);
loc_82AF1D00:
	// stw r31,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82774c70
	ctx.lr = 0x82AF1D10;
	sub_82774C70(ctx, base);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,244
	ctx.r11.s64 = ctx.r30.s64 + 244;
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f7,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// ld r6,244(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 244);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// lwz r5,368(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826130f0
	ctx.lr = 0x82AF1D6C;
	sub_826130F0(ctx, base);
loc_82AF1D6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF1D74"))) PPC_WEAK_FUNC(sub_82AF1D74);
PPC_FUNC_IMPL(__imp__sub_82AF1D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF1D78"))) PPC_WEAK_FUNC(sub_82AF1D78);
PPC_FUNC_IMPL(__imp__sub_82AF1D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AF1D80;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ab0
	ctx.lr = 0x82AF1D88;
	__savefpr_14(ctx, base);
	// addi r12,r1,-192
	ctx.r12.s64 = ctx.r1.s64 + -192;
	// bl 0x82ff17b4
	ctx.lr = 0x82AF1D90;
	__savevmx_124(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af24c4
	if (ctx.cr6.eq) goto loc_82AF24C4;
	// bl 0x82370f88
	ctx.lr = 0x82AF1DA8;
	sub_82370F88(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f31,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82af1f54
	if (ctx.cr6.eq) goto loc_82AF1F54;
	// lwz r11,924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82af1f54
	if (!ctx.cr6.eq) goto loc_82AF1F54;
	// lwz r11,944(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 944);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af1e08
	if (!ctx.cr6.eq) goto loc_82AF1E08;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// b 0x82af24c4
	goto loc_82AF24C4;
loc_82AF1E08:
	// lwz r11,736(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af24c4
	if (ctx.cr6.eq) goto loc_82AF24C4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82af24c4
	if (ctx.cr6.eq) goto loc_82AF24C4;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af24c4
	if (ctx.cr6.eq) goto loc_82AF24C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8248ad88
	ctx.lr = 0x82AF1E44;
	sub_8248AD88(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,-17552
	ctx.r6.s64 = ctx.r9.s64 + -17552;
	// lfs f13,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r7,-17568
	ctx.r4.s64 = ctx.r7.s64 + -17568;
	// lfs f12,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r11,704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r8,-17520
	ctx.r5.s64 = ctx.r8.s64 + -17520;
	// lvx128 v60,r0,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v58,v63,v63
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmrghw128 v59,v63,v60
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vmrglw128 v57,v63,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f11,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// vor128 v55,v60,v60
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// lfs f9,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// vor128 v56,v61,v61
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f9,244(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v54,v61,v62
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrglw128 v53,v61,v62
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v52,v59,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrglw128 v51,v59,v54
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v50,v57,v53
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v49,v57,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmsum4fp128 v48,v58,v52
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v47,v58,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v36,v63,v52
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v45,v58,v50
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v44,v58,v49
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v35,v63,v50
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v34,v63,v51
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v33,v63,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v46,v56,v52
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v43,v56,v50
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v42,v56,v51
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v41,v56,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v55,v52
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v39,v55,v50
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v38,v55,v51
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v37,v55,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v32,v48,v45
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v63,v47,v44
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v58,v36,v35
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v57,v34,v33
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v124,v32,v63
	_mm_store_si128((__m128i*)ctx.v124.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v62,v46,v43
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v61,v42,v41
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrghw128 v127,v58,v57
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v60,v40,v39
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v59,v38,v37
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v125,v62,v61
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v126,v60,v59
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// b 0x82af1fc0
	goto loc_82AF1FC0;
loc_82AF1F54:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r4,520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af24c4
	if (ctx.cr6.eq) goto loc_82AF24C4;
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af24c4
	if (ctx.cr6.eq) goto loc_82AF24C4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8248ad88
	ctx.lr = 0x82AF1F7C;
	sub_8248AD88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF1F8C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82af1f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF1F8C;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r9
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r8
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF1FC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82af24c4
	if (ctx.cr6.eq) goto loc_82AF24C4;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// bl 0x8248ae00
	ctx.lr = 0x82AF1FEC;
	sub_8248AE00(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-31883
	ctx.r7.s64 = -2089484288;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r6,r7,-22168
	ctx.r6.s64 = ctx.r7.s64 + -22168;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r5.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r5.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lfs f7,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// lfs f9,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f5,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lfs f11,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// fmuls f1,f11,f7
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r5,r11,16384
	ctx.r5.s64 = ctx.r11.s64 + 16384;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// rlwinm r8,r8,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// lfs f13,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lfs f12,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// lfs f10,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,16384
	ctx.r9.s64 = ctx.r9.s64 + 16384;
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// lfsx f9,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// lfsx f8,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r8,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// rlwinm r10,r5,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfsx f5,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfsx f29,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f28,f8,f11
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f3,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfsx f7,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f26,f8,f7
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f30,f6,f5
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f27,f29,f9
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f23,f29,f7
	ctx.f23.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmuls f25,f29,f5
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// fmuls f24,f5,f9
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f22,f11,f7
	ctx.f22.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f20,f2,f28
	ctx.f20.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f21,f2,f27
	ctx.f21.f64 = double(float(ctx.f2.f64 * ctx.f27.f64));
	// fmuls f19,f23,f2
	ctx.f19.f64 = double(float(ctx.f23.f64 * ctx.f2.f64));
	// fnmsubs f3,f0,f25,f3
	ctx.f3.f64 = double(float(-(ctx.f0.f64 * ctx.f25.f64 - ctx.f3.f64)));
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// fmuls f17,f0,f11
	ctx.f17.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f31,f9,f8
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f16,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f15,f22,f13
	ctx.f15.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// lfs f18,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f16,100(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f14,f27,f11,f26
	ctx.f14.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f26.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f16,f13,f26
	ctx.f16.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f25,f25,f6
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f6.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f0,f12,f8,f19
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f19.f64));
	// stfs f26,80(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f26,f26,f11,f27
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f27.f64));
	// fmadds f12,f21,f11,f3
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f25,112(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f3,f2,f24,f17
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f24.f64 + ctx.f17.f64));
	// fnmsubs f28,f28,f9,f23
	ctx.f28.f64 = double(float(-(ctx.f28.f64 * ctx.f9.f64 - ctx.f23.f64)));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f5,f5,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmsubs f23,f22,f29,f31
	ctx.f23.f64 = double(float(ctx.f22.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmuls f8,f30,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f22,f14,f1
	ctx.f22.f64 = double(float(ctx.f14.f64 * ctx.f1.f64));
	// fmadds f6,f13,f27,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fmuls f8,f26,f4
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f4.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fnmsubs f0,f15,f29,f12
	ctx.f0.f64 = double(float(-(ctx.f15.f64 * ctx.f29.f64 - ctx.f12.f64)));
	// fnmsubs f12,f10,f7,f3
	ctx.f12.f64 = double(float(-(ctx.f10.f64 * ctx.f7.f64 - ctx.f3.f64)));
	// fneg f10,f5
	ctx.f10.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f8,f23,f4
	ctx.f8.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f28,f1
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f4,f24,f1
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f1.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fnmsubs f3,f20,f9,f6
	ctx.f3.f64 = double(float(-(ctx.f20.f64 * ctx.f9.f64 - ctx.f6.f64)));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fneg f7,f22
	ctx.f7.u64 = ctx.f22.u64 ^ 0x8000000000000000;
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f1,f31,f13,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsubs f0,f18,f12
	ctx.f0.f64 = double(float(ctx.f18.f64 - ctx.f12.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f13,f16,f11,f3
	ctx.f13.f64 = double(float(ctx.f16.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f11,f2,f12,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x823829d8
	ctx.lr = 0x82AF21F4;
	sub_823829D8(ctx, base);
	// li r30,16
	ctx.r30.s64 = 16;
	// li r28,32
	ctx.r28.s64 = 32;
	// lvx128 v56,r0,r3
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,48
	ctx.r29.s64 = 48;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// lvx128 v55,r3,r30
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r3,r28
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r3,r29
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v52,v56,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v51,v56,v54
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v49,v55,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v50,r0,r11
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v47,v55,v53
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v48,r11,r30
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v46,v52,v49
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v45,v51,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrglw128 v44,v52,v49
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrglw128 v43,v51,v47
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmsum4fp128 v42,v50,v46
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v41,v50,v45
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v40,v50,v44
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v39,v50,v43
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// lvx128 v36,r11,r28
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v38,v48,v46
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// lvx128 v34,r11,r29
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v37,v48,v45
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v35,v48,v44
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmrghw128 v63,v42,v41
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmsum4fp128 v33,v48,v43
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmrghw128 v61,v40,v39
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmsum4fp128 v32,v36,v46
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// vmsum4fp128 v62,v36,v45
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// vmsum4fp128 v57,v34,v46
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vmsum4fp128 v56,v34,v45
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmrghw128 v55,v63,v61
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmsum4fp128 v60,v36,v44
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// vmsum4fp128 v58,v36,v43
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// vmsum4fp128 v54,v34,v44
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// vmsum4fp128 v53,v34,v43
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// stvx128 v55,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v38,v37
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v52,v35,v33
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v51,v32,v62
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v48,v57,v56
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v49,v59,v52
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v50,v60,v58
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v47,v54,v53
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v46,v51,v50
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// stvx128 v49,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823829d8
	ctx.lr = 0x82AF22E4;
	sub_823829D8(ctx, base);
	// vmrghw128 v44,v124,v126
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// vmrghw128 v43,v125,v127
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// lvx128 v38,r3,r29
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v42,v124,v126
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v124.u32)));
	// lvx128 v36,r0,r3
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v41,v125,v127
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v125.u32)));
	// lvx128 v34,r3,r30
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r3,r28
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vmrghw128 v40,v44,v43
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmrglw128 v39,v44,v43
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vmrghw128 v37,v42,v41
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vmrglw128 v35,v42,v41
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// lfs f8,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// vmsum4fp128 v33,v38,v40
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// lfs f7,248(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// vmsum4fp128 v63,v38,v39
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// lfs f6,252(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// vmsum4fp128 v62,v38,v37
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v61,v38,v35
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v60,v36,v40
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v59,v36,v37
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v58,v36,v39
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v57,v36,v35
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v56,v34,v40
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v55,v34,v37
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v54,v34,v39
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v53,v34,v35
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v52,v32,v40
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v51,v32,v37
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v50,v32,v39
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v49,v32,v35
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmrghw128 v48,v33,v62
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v47,v63,v61
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v46,v60,v59
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v44,v58,v57
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v43,v56,v55
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v42,v54,v53
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v41,v52,v51
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// stvx128 v45,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v40,v50,v49
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vmrghw128 v39,v46,v44
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v38,v43,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v37,v41,v40
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// stvx128 v39,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f29,f12,f6
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f13,f7
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f31,f0,f8
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8260eb48
	ctx.lr = 0x82AF23DC;
	sub_8260EB48(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r7,r8,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82af24c4
	if (!ctx.cr6.eq) goto loc_82AF24C4;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82af24c4
	if (!ctx.cr6.eq) goto loc_82AF24C4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d40c0
	ctx.lr = 0x82AF2404;
	sub_823D40C0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// lwz r7,956(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 956);
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r29,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// stw r28,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r28.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AF2450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r6,r11,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82af24b4
	if (!ctx.cr6.eq) goto loc_82AF24B4;
	// fmuls f13,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lfs f0,32428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32428);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f31,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f11,f30,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x82af24b4
	if (ctx.cr6.gt) goto loc_82AF24B4;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82af24b4
	if (!ctx.cr6.eq) goto loc_82AF24B4;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82af24b4
	if (!ctx.cr6.eq) goto loc_82AF24B4;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82af24b4
	if (!ctx.cr6.eq) goto loc_82AF24B4;
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af24bc
	if (ctx.cr6.eq) goto loc_82AF24BC;
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// b 0x82af24b8
	goto loc_82AF24B8;
loc_82AF24B4:
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
loc_82AF24B8:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82AF24BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af1c18
	ctx.lr = 0x82AF24C4;
	sub_82AF1C18(ctx, base);
loc_82AF24C4:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-192
	ctx.r12.s64 = ctx.r1.s64 + -192;
	// bl 0x82ff1a4c
	ctx.lr = 0x82AF24D0;
	__restvmx_124(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6afc
	ctx.lr = 0x82AF24D8;
	__restfpr_14(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF24DC"))) PPC_WEAK_FUNC(sub_82AF24DC);
PPC_FUNC_IMPL(__imp__sub_82AF24DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF24E0"))) PPC_WEAK_FUNC(sub_82AF24E0);
PPC_FUNC_IMPL(__imp__sub_82AF24E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1836(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
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
	// bgt cr6,0x82af250c
	if (ctx.cr6.gt) goto loc_82AF250C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af2514
	goto loc_82AF2514;
loc_82AF250C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF2514:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r10,776(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af254c
	if (ctx.cr6.eq) goto loc_82AF254C;
	// lhz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af254c
	if (!ctx.cr6.eq) goto loc_82AF254C;
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af254c
	if (!ctx.cr6.eq) goto loc_82AF254C;
	// b 0x82af1d78
	sub_82AF1D78(ctx, base);
	return;
loc_82AF254C:
	// b 0x82378650
	sub_82378650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF2550"))) PPC_WEAK_FUNC(sub_82AF2550);
PPC_FUNC_IMPL(__imp__sub_82AF2550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF2554"))) PPC_WEAK_FUNC(sub_82AF2554);
PPC_FUNC_IMPL(__imp__sub_82AF2554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF2558"))) PPC_WEAK_FUNC(sub_82AF2558);
PPC_FUNC_IMPL(__imp__sub_82AF2558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lfs f0,-1448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82af256c
	if (!ctx.cr6.gt) goto loc_82AF256C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82AF256C:
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82af2588
	if (!ctx.cr6.eq) goto loc_82AF2588;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82AF2588:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1852(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1852, temp.u32);
	// b 0x8282e3e0
	sub_8282E3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF2598"))) PPC_WEAK_FUNC(sub_82AF2598);
PPC_FUNC_IMPL(__imp__sub_82AF2598) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-1448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82af25c8
	if (!ctx.cr6.gt) goto loc_82AF25C8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82AF25C8:
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
	// bgt cr6,0x82af25e8
	if (ctx.cr6.gt) goto loc_82AF25E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82af25f0
	goto loc_82AF25F0;
loc_82AF25E8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AF25F0:
	// lwz r10,1764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82af268c
	if (!ctx.cr6.eq) goto loc_82AF268C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af261c
	if (ctx.cr6.eq) goto loc_82AF261C;
	// lwz r11,776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af268c
	if (ctx.cr6.eq) goto loc_82AF268C;
loc_82AF261C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af1810
	ctx.lr = 0x82AF2624;
	sub_82AF1810(ctx, base);
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82af2654
	if (ctx.cr6.lt) goto loc_82AF2654;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF2648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,900(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// b 0x82af2660
	goto loc_82AF2660;
loc_82AF2654:
	// bl 0x826d6a90
	ctx.lr = 0x82AF2658;
	sub_826D6A90(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82AF2660:
	// beq cr6,0x82af266c
	if (ctx.cr6.eq) goto loc_82AF266C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af26f8
	ctx.lr = 0x82AF266C;
	sub_82AF26F8(ctx, base);
loc_82AF266C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1848(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82af26d4
	if (!ctx.cr6.gt) goto loc_82AF26D4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,1848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1848, temp.u32);
	// b 0x82af26d4
	goto loc_82AF26D4;
loc_82AF268C:
	// lbz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af26b4
	if (ctx.cr6.eq) goto loc_82AF26B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AF26B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AF26B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826d6a90
	ctx.lr = 0x82AF26C0;
	sub_826D6A90(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af26d4
	if (ctx.cr6.eq) goto loc_82AF26D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af26f8
	ctx.lr = 0x82AF26D4;
	sub_82AF26F8(ctx, base);
loc_82AF26D4:
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

__attribute__((alias("__imp__sub_82AF26EC"))) PPC_WEAK_FUNC(sub_82AF26EC);
PPC_FUNC_IMPL(__imp__sub_82AF26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

