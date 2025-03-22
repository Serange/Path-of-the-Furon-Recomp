#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82306A9C"))) PPC_WEAK_FUNC(sub_82306A9C);
PPC_FUNC_IMPL(__imp__sub_82306A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306AA0"))) PPC_WEAK_FUNC(sub_82306AA0);
PPC_FUNC_IMPL(__imp__sub_82306AA0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82306ABC;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306b44
	if (ctx.cr6.eq) goto loc_82306B44;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32207
	ctx.r31.s64 = -2110717952;
	// addi r11,r7,-20996
	ctx.r11.s64 = ctx.r7.s64 + -20996;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,880
	ctx.r5.s64 = ctx.r31.s64 + 880;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82306B30;
	sub_82398460(ctx, base);
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
loc_82306B44:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82306B5C"))) PPC_WEAK_FUNC(sub_82306B5C);
PPC_FUNC_IMPL(__imp__sub_82306B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306B60"))) PPC_WEAK_FUNC(sub_82306B60);
PPC_FUNC_IMPL(__imp__sub_82306B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82306B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82306b98
	if (!ctx.cr6.eq) goto loc_82306B98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82306B8C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82306B94;
	sub_822AADA8(ctx, base);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82306B98:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lwz r11,25364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82306bbc
	if (ctx.cr6.eq) goto loc_82306BBC;
	// bl 0x822955c8
	ctx.lr = 0x82306BAC;
	sub_822955C8(ctx, base);
	// lwz r11,25364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82306bc4
	goto loc_82306BC4;
loc_82306BBC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
loc_82306BC4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82306be4
	if (!ctx.cr6.eq) goto loc_82306BE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82306BD4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82306BDC;
	sub_822AADA8(ctx, base);
	// lwz r11,25364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82306BE4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82306c10
	if (!ctx.cr6.eq) goto loc_82306C10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x82306C00;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82306C08;
	sub_82398640(ctx, base);
	// lwz r11,25364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82306C10:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306c48
	if (ctx.cr6.eq) goto loc_82306C48;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82306C2C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82306c48
	if (!ctx.cr6.eq) goto loc_82306C48;
	// lwz r3,25364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82306C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82306C48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306C50"))) PPC_WEAK_FUNC(sub_82306C50);
PPC_FUNC_IMPL(__imp__sub_82306C50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306C58"))) PPC_WEAK_FUNC(sub_82306C58);
PPC_FUNC_IMPL(__imp__sub_82306C58) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82306c9c
	if (!ctx.cr6.eq) goto loc_82306C9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x82306C90;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82306C98;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82306C9C:
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

__attribute__((alias("__imp__sub_82306CC4"))) PPC_WEAK_FUNC(sub_82306CC4);
PPC_FUNC_IMPL(__imp__sub_82306CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306CC8"))) PPC_WEAK_FUNC(sub_82306CC8);
PPC_FUNC_IMPL(__imp__sub_82306CC8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82306CE4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306d6c
	if (ctx.cr6.eq) goto loc_82306D6C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32207
	ctx.r31.s64 = -2110717952;
	// addi r11,r7,-20968
	ctx.r11.s64 = ctx.r7.s64 + -20968;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,560
	ctx.r5.s64 = ctx.r31.s64 + 560;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82306D58;
	sub_82398460(ctx, base);
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
loc_82306D6C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82306D84"))) PPC_WEAK_FUNC(sub_82306D84);
PPC_FUNC_IMPL(__imp__sub_82306D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306D88"))) PPC_WEAK_FUNC(sub_82306D88);
PPC_FUNC_IMPL(__imp__sub_82306D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82306D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82306dc0
	if (!ctx.cr6.eq) goto loc_82306DC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82306DB4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82306DBC;
	sub_822AADA8(ctx, base);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82306DC0:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lwz r11,25368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25368);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82306de4
	if (ctx.cr6.eq) goto loc_82306DE4;
	// bl 0x822955c8
	ctx.lr = 0x82306DD4;
	sub_822955C8(ctx, base);
	// lwz r11,25368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25368);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82306dec
	goto loc_82306DEC;
loc_82306DE4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
loc_82306DEC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82306e0c
	if (!ctx.cr6.eq) goto loc_82306E0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82306DFC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82306E04;
	sub_822AADA8(ctx, base);
	// lwz r11,25368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25368);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82306E0C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82306e38
	if (!ctx.cr6.eq) goto loc_82306E38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x82306E28;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82306E30;
	sub_82398640(ctx, base);
	// lwz r11,25368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25368);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82306E38:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82306e70
	if (ctx.cr6.eq) goto loc_82306E70;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82306E54;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82306e70
	if (!ctx.cr6.eq) goto loc_82306E70;
	// lwz r3,25368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25368);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82306E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82306E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82306E78"))) PPC_WEAK_FUNC(sub_82306E78);
PPC_FUNC_IMPL(__imp__sub_82306E78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82306E80"))) PPC_WEAK_FUNC(sub_82306E80);
PPC_FUNC_IMPL(__imp__sub_82306E80) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82306ec4
	if (!ctx.cr6.eq) goto loc_82306EC4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x82306EB8;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82306EC0;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82306EC4:
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

__attribute__((alias("__imp__sub_82306EEC"))) PPC_WEAK_FUNC(sub_82306EEC);
PPC_FUNC_IMPL(__imp__sub_82306EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306EF0"))) PPC_WEAK_FUNC(sub_82306EF0);
PPC_FUNC_IMPL(__imp__sub_82306EF0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82306F0C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306f94
	if (ctx.cr6.eq) goto loc_82306F94;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32207
	ctx.r31.s64 = -2110717952;
	// addi r11,r7,-20932
	ctx.r11.s64 = ctx.r7.s64 + -20932;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,-20920
	ctx.r7.s64 = ctx.r4.s64 + -20920;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,264
	ctx.r5.s64 = ctx.r31.s64 + 264;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82306F80;
	sub_82398460(ctx, base);
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
loc_82306F94:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82306FAC"))) PPC_WEAK_FUNC(sub_82306FAC);
PPC_FUNC_IMPL(__imp__sub_82306FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82306FB0"))) PPC_WEAK_FUNC(sub_82306FB0);
PPC_FUNC_IMPL(__imp__sub_82306FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82306FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82306fe8
	if (!ctx.cr6.eq) goto loc_82306FE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82306FDC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82306FE4;
	sub_822AADA8(ctx, base);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82306FE8:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lwz r11,25372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25372);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230700c
	if (ctx.cr6.eq) goto loc_8230700C;
	// bl 0x822955c8
	ctx.lr = 0x82306FFC;
	sub_822955C8(ctx, base);
	// lwz r11,25372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25372);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82307014
	goto loc_82307014;
loc_8230700C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
loc_82307014:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82307034
	if (!ctx.cr6.eq) goto loc_82307034;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82307024;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8230702C;
	sub_822AADA8(ctx, base);
	// lwz r11,25372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25372);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82307034:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82307060
	if (!ctx.cr6.eq) goto loc_82307060;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x82307050;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82307058;
	sub_82398640(ctx, base);
	// lwz r11,25372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25372);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82307060:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82307098
	if (ctx.cr6.eq) goto loc_82307098;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8230707C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82307098
	if (!ctx.cr6.eq) goto loc_82307098;
	// lwz r3,25372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25372);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82307098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82307098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823070A0"))) PPC_WEAK_FUNC(sub_823070A0);
PPC_FUNC_IMPL(__imp__sub_823070A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823070A8"))) PPC_WEAK_FUNC(sub_823070A8);
PPC_FUNC_IMPL(__imp__sub_823070A8) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823070ec
	if (!ctx.cr6.eq) goto loc_823070EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822aace8
	ctx.lr = 0x823070E0;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x823070E8;
	sub_822AADA8(ctx, base);
	// lwz r11,25216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_823070EC:
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

__attribute__((alias("__imp__sub_82307114"))) PPC_WEAK_FUNC(sub_82307114);
PPC_FUNC_IMPL(__imp__sub_82307114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82307118"))) PPC_WEAK_FUNC(sub_82307118);
PPC_FUNC_IMPL(__imp__sub_82307118) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r8,14864
	ctx.r5.s64 = ctx.r8.s64 + 14864;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,-14936
	ctx.r4.s64 = ctx.r7.s64 + -14936;
	// addi r8,r6,-14584
	ctx.r8.s64 = ctx.r6.s64 + -14584;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r11,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
	// stw r11,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r11.u32);
	// stw r11,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r11.u32);
	// stw r11,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r11.u32);
	// stw r11,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r11.u32);
	// stw r11,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230716C"))) PPC_WEAK_FUNC(sub_8230716C);
PPC_FUNC_IMPL(__imp__sub_8230716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82307170"))) PPC_WEAK_FUNC(sub_82307170);
PPC_FUNC_IMPL(__imp__sub_82307170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82307174"))) PPC_WEAK_FUNC(sub_82307174);
PPC_FUNC_IMPL(__imp__sub_82307174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82307178"))) PPC_WEAK_FUNC(sub_82307178);
PPC_FUNC_IMPL(__imp__sub_82307178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82307180;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-20896
	ctx.r4.s64 = ctx.r11.s64 + -20896;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x823071A4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-17204
	ctx.r3.s64 = ctx.r9.s64 + -17204;
	// addi r4,r8,-20880
	ctx.r4.s64 = ctx.r8.s64 + -20880;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17204(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17204, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x823071D8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-17196
	ctx.r3.s64 = ctx.r9.s64 + -17196;
	// addi r4,r8,-20864
	ctx.r4.s64 = ctx.r8.s64 + -20864;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17196(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17196, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8230720C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-17188
	ctx.r3.s64 = ctx.r9.s64 + -17188;
	// addi r4,r8,-20836
	ctx.r4.s64 = ctx.r8.s64 + -20836;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17188(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17188, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82307240;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-17180
	ctx.r3.s64 = ctx.r9.s64 + -17180;
	// addi r4,r8,-20804
	ctx.r4.s64 = ctx.r8.s64 + -20804;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17180, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82307274;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-17172
	ctx.r3.s64 = ctx.r9.s64 + -17172;
	// addi r4,r8,-20772
	ctx.r4.s64 = ctx.r8.s64 + -20772;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17172(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17172, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x823072A8;
	sub_8233E028(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-20736
	ctx.r4.s64 = ctx.r10.s64 + -20736;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r9,-17164
	ctx.r8.s64 = ctx.r9.s64 + -17164;
	// stw r11,-17164(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17164, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x823072DC;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-17156
	ctx.r3.s64 = ctx.r5.s64 + -17156;
	// addi r4,r4,-20700
	ctx.r4.s64 = ctx.r4.s64 + -20700;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17156(r5)
	PPC_STORE_U32(ctx.r5.u32 + -17156, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307310;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17148
	ctx.r3.s64 = ctx.r9.s64 + -17148;
	// addi r4,r8,-20664
	ctx.r4.s64 = ctx.r8.s64 + -20664;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17148(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17148, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307344;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17140
	ctx.r3.s64 = ctx.r9.s64 + -17140;
	// addi r4,r8,-20644
	ctx.r4.s64 = ctx.r8.s64 + -20644;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17140(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17140, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307378;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17132
	ctx.r3.s64 = ctx.r9.s64 + -17132;
	// addi r4,r8,-20636
	ctx.r4.s64 = ctx.r8.s64 + -20636;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17132(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17132, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823073AC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17124
	ctx.r3.s64 = ctx.r9.s64 + -17124;
	// addi r4,r8,-20624
	ctx.r4.s64 = ctx.r8.s64 + -20624;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17124(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17124, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823073E0;
	sub_8233E028(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r30,r9,-17116
	ctx.r30.s64 = ctx.r9.s64 + -17116;
	// addi r4,r8,-20612
	ctx.r4.s64 = ctx.r8.s64 + -20612;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17116(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307414;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-17108
	ctx.r3.s64 = ctx.r5.s64 + -17108;
	// addi r4,r4,-20592
	ctx.r4.s64 = ctx.r4.s64 + -20592;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17108(r5)
	PPC_STORE_U32(ctx.r5.u32 + -17108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307448;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17100
	ctx.r3.s64 = ctx.r9.s64 + -17100;
	// addi r4,r8,-20576
	ctx.r4.s64 = ctx.r8.s64 + -20576;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17100(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230747C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17092
	ctx.r3.s64 = ctx.r9.s64 + -17092;
	// addi r4,r8,-20556
	ctx.r4.s64 = ctx.r8.s64 + -20556;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17092(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17092, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823074B0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17084
	ctx.r3.s64 = ctx.r9.s64 + -17084;
	// addi r4,r8,-20540
	ctx.r4.s64 = ctx.r8.s64 + -20540;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17084(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17084, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823074E4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17076
	ctx.r3.s64 = ctx.r9.s64 + -17076;
	// addi r4,r8,-20520
	ctx.r4.s64 = ctx.r8.s64 + -20520;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17076(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17076, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307518;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17068
	ctx.r3.s64 = ctx.r9.s64 + -17068;
	// addi r4,r8,-20512
	ctx.r4.s64 = ctx.r8.s64 + -20512;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17068(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17068, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230754C;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r11,-20500
	ctx.r4.s64 = ctx.r11.s64 + -20500;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,-17060
	ctx.r8.s64 = ctx.r9.s64 + -17060;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-17060(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17060, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307580;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-17052
	ctx.r3.s64 = ctx.r5.s64 + -17052;
	// addi r4,r4,-20488
	ctx.r4.s64 = ctx.r4.s64 + -20488;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17052(r5)
	PPC_STORE_U32(ctx.r5.u32 + -17052, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823075B4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17044
	ctx.r3.s64 = ctx.r9.s64 + -17044;
	// addi r4,r8,-20480
	ctx.r4.s64 = ctx.r8.s64 + -20480;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17044(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17044, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823075E8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17036
	ctx.r3.s64 = ctx.r9.s64 + -17036;
	// addi r4,r8,-20468
	ctx.r4.s64 = ctx.r8.s64 + -20468;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17036(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17036, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230761C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17028
	ctx.r3.s64 = ctx.r9.s64 + -17028;
	// addi r4,r8,-20456
	ctx.r4.s64 = ctx.r8.s64 + -20456;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17028(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17028, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307650;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-17020
	ctx.r3.s64 = ctx.r9.s64 + -17020;
	// addi r4,r8,-20440
	ctx.r4.s64 = ctx.r8.s64 + -20440;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17020(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17020, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307684;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-20424
	ctx.r4.s64 = ctx.r11.s64 + -20424;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,-17012
	ctx.r8.s64 = ctx.r9.s64 + -17012;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-17012(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17012, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x823076B8;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-17004
	ctx.r3.s64 = ctx.r5.s64 + -17004;
	// addi r4,r4,-20412
	ctx.r4.s64 = ctx.r4.s64 + -20412;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-17004(r5)
	PPC_STORE_U32(ctx.r5.u32 + -17004, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823076EC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16996
	ctx.r3.s64 = ctx.r9.s64 + -16996;
	// addi r4,r8,-20404
	ctx.r4.s64 = ctx.r8.s64 + -20404;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16996(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16996, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307720;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16988
	ctx.r3.s64 = ctx.r9.s64 + -16988;
	// addi r4,r8,-20396
	ctx.r4.s64 = ctx.r8.s64 + -20396;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16988(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16988, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307754;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16980
	ctx.r3.s64 = ctx.r9.s64 + -16980;
	// addi r4,r8,-20384
	ctx.r4.s64 = ctx.r8.s64 + -20384;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16980(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16980, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307788;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16972
	ctx.r3.s64 = ctx.r9.s64 + -16972;
	// addi r4,r8,-20372
	ctx.r4.s64 = ctx.r8.s64 + -20372;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16972(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16972, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823077BC;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r11,-20360
	ctx.r4.s64 = ctx.r11.s64 + -20360;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,-16964
	ctx.r8.s64 = ctx.r9.s64 + -16964;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,-16964(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16964, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x823077F0;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r5,-16956
	ctx.r3.s64 = ctx.r5.s64 + -16956;
	// addi r4,r4,-20352
	ctx.r4.s64 = ctx.r4.s64 + -20352;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16956(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16956, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307824;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16948
	ctx.r3.s64 = ctx.r9.s64 + -16948;
	// addi r4,r8,-20340
	ctx.r4.s64 = ctx.r8.s64 + -20340;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16948, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307858;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16940
	ctx.r3.s64 = ctx.r9.s64 + -16940;
	// addi r4,r8,-20328
	ctx.r4.s64 = ctx.r8.s64 + -20328;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16940(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16940, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230788C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16932
	ctx.r3.s64 = ctx.r9.s64 + -16932;
	// addi r4,r8,-20316
	ctx.r4.s64 = ctx.r8.s64 + -20316;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16932(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16932, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823078C0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16924
	ctx.r3.s64 = ctx.r9.s64 + -16924;
	// addi r4,r8,-20312
	ctx.r4.s64 = ctx.r8.s64 + -20312;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16924(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16924, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823078F4;
	sub_8233E028(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r8,-20308
	ctx.r4.s64 = ctx.r8.s64 + -20308;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-16916(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16916, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r9,-16916
	ctx.r11.s64 = ctx.r9.s64 + -16916;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307928;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16908
	ctx.r3.s64 = ctx.r9.s64 + -16908;
	// addi r4,r8,-20304
	ctx.r4.s64 = ctx.r8.s64 + -20304;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16908(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16908, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230795C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16900
	ctx.r3.s64 = ctx.r9.s64 + -16900;
	// addi r4,r8,-20300
	ctx.r4.s64 = ctx.r8.s64 + -20300;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16900(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16900, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307990;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16892
	ctx.r3.s64 = ctx.r9.s64 + -16892;
	// addi r4,r8,-14960
	ctx.r4.s64 = ctx.r8.s64 + -14960;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16892(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16892, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823079C4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16884
	ctx.r3.s64 = ctx.r9.s64 + -16884;
	// addi r4,r8,-20296
	ctx.r4.s64 = ctx.r8.s64 + -20296;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16884(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16884, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823079F8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16876
	ctx.r3.s64 = ctx.r9.s64 + -16876;
	// addi r4,r8,-20292
	ctx.r4.s64 = ctx.r8.s64 + -20292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16876(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16876, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307A2C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16868
	ctx.r3.s64 = ctx.r9.s64 + -16868;
	// addi r4,r8,-20288
	ctx.r4.s64 = ctx.r8.s64 + -20288;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16868(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16868, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307A60;
	sub_8233E028(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r9,-20284
	ctx.r4.s64 = ctx.r9.s64 + -20284;
	// addi r9,r8,-16860
	ctx.r9.s64 = ctx.r8.s64 + -16860;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16860, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307A94;
	sub_8233E028(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r8,-16852
	ctx.r3.s64 = ctx.r8.s64 + -16852;
	// addi r4,r7,-20280
	ctx.r4.s64 = ctx.r7.s64 + -20280;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16852(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16852, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307AC8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16844
	ctx.r3.s64 = ctx.r9.s64 + -16844;
	// addi r4,r8,-20276
	ctx.r4.s64 = ctx.r8.s64 + -20276;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16844(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16844, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307AFC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16836
	ctx.r3.s64 = ctx.r9.s64 + -16836;
	// addi r4,r8,-20272
	ctx.r4.s64 = ctx.r8.s64 + -20272;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16836(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16836, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307B30;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16828
	ctx.r3.s64 = ctx.r9.s64 + -16828;
	// addi r4,r8,-20268
	ctx.r4.s64 = ctx.r8.s64 + -20268;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16828(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16828, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307B64;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16820
	ctx.r3.s64 = ctx.r9.s64 + -16820;
	// addi r4,r8,-20264
	ctx.r4.s64 = ctx.r8.s64 + -20264;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16820(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16820, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307B98;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-20260
	ctx.r4.s64 = ctx.r11.s64 + -20260;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r8,r9,-16812
	ctx.r8.s64 = ctx.r9.s64 + -16812;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-16812(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16812, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307BCC;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-16804
	ctx.r3.s64 = ctx.r5.s64 + -16804;
	// addi r4,r4,-20256
	ctx.r4.s64 = ctx.r4.s64 + -20256;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16804(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16804, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307C00;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16796
	ctx.r3.s64 = ctx.r9.s64 + -16796;
	// addi r4,r8,-20252
	ctx.r4.s64 = ctx.r8.s64 + -20252;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16796(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16796, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307C34;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16788
	ctx.r3.s64 = ctx.r9.s64 + -16788;
	// addi r4,r8,-20248
	ctx.r4.s64 = ctx.r8.s64 + -20248;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16788(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16788, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307C68;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16780
	ctx.r3.s64 = ctx.r9.s64 + -16780;
	// addi r4,r8,-20244
	ctx.r4.s64 = ctx.r8.s64 + -20244;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16780(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16780, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307C9C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16772
	ctx.r3.s64 = ctx.r9.s64 + -16772;
	// addi r4,r8,-20240
	ctx.r4.s64 = ctx.r8.s64 + -20240;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16772(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16772, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307CD0;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-20236
	ctx.r4.s64 = ctx.r11.s64 + -20236;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r9,-16764
	ctx.r8.s64 = ctx.r9.s64 + -16764;
	// stw r11,-16764(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16764, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307D04;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r5,-16756
	ctx.r3.s64 = ctx.r5.s64 + -16756;
	// addi r4,r4,-20232
	ctx.r4.s64 = ctx.r4.s64 + -20232;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16756(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16756, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307D38;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16748
	ctx.r3.s64 = ctx.r9.s64 + -16748;
	// addi r4,r8,-20228
	ctx.r4.s64 = ctx.r8.s64 + -20228;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16748(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16748, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307D6C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16740
	ctx.r3.s64 = ctx.r9.s64 + -16740;
	// addi r4,r8,14844
	ctx.r4.s64 = ctx.r8.s64 + 14844;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16740(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16740, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307DA0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16732
	ctx.r3.s64 = ctx.r9.s64 + -16732;
	// addi r4,r8,-20224
	ctx.r4.s64 = ctx.r8.s64 + -20224;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16732(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16732, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307DD4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16724
	ctx.r3.s64 = ctx.r9.s64 + -16724;
	// addi r4,r8,-20220
	ctx.r4.s64 = ctx.r8.s64 + -20220;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16724(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16724, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307E08;
	sub_8233E028(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r9,-20196
	ctx.r4.s64 = ctx.r9.s64 + -20196;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-16716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16716, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r10,-16716
	ctx.r8.s64 = ctx.r10.s64 + -16716;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307E3C;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r5,-16708
	ctx.r3.s64 = ctx.r5.s64 + -16708;
	// addi r4,r4,-20176
	ctx.r4.s64 = ctx.r4.s64 + -20176;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16708(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16708, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307E70;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16700
	ctx.r3.s64 = ctx.r9.s64 + -16700;
	// addi r4,r8,-20156
	ctx.r4.s64 = ctx.r8.s64 + -20156;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16700(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16700, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307EA4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16692
	ctx.r3.s64 = ctx.r9.s64 + -16692;
	// addi r4,r8,-20132
	ctx.r4.s64 = ctx.r8.s64 + -20132;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16692(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16692, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307ED8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16684
	ctx.r3.s64 = ctx.r9.s64 + -16684;
	// addi r4,r8,-20108
	ctx.r4.s64 = ctx.r8.s64 + -20108;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16684(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16684, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307F0C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16676
	ctx.r3.s64 = ctx.r9.s64 + -16676;
	// addi r4,r8,-20084
	ctx.r4.s64 = ctx.r8.s64 + -20084;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16676(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16676, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307F40;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r3,r9,-16668
	ctx.r3.s64 = ctx.r9.s64 + -16668;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r8,-20064
	ctx.r4.s64 = ctx.r8.s64 + -20064;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-16668(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16668, ctx.r11.u32);
	// bl 0x8233e028
	ctx.lr = 0x82307F74;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16660
	ctx.r3.s64 = ctx.r9.s64 + -16660;
	// addi r4,r8,-20040
	ctx.r4.s64 = ctx.r8.s64 + -20040;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16660, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307FA8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16652
	ctx.r3.s64 = ctx.r9.s64 + -16652;
	// addi r4,r8,-20016
	ctx.r4.s64 = ctx.r8.s64 + -20016;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16652(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16652, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82307FDC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16644
	ctx.r3.s64 = ctx.r9.s64 + -16644;
	// addi r4,r8,-19992
	ctx.r4.s64 = ctx.r8.s64 + -19992;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16644(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16644, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308010;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16636
	ctx.r3.s64 = ctx.r9.s64 + -16636;
	// addi r4,r8,-19972
	ctx.r4.s64 = ctx.r8.s64 + -19972;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16636(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16636, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308044;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16628
	ctx.r3.s64 = ctx.r9.s64 + -16628;
	// addi r4,r8,-19964
	ctx.r4.s64 = ctx.r8.s64 + -19964;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16628(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16628, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308078;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16620
	ctx.r3.s64 = ctx.r9.s64 + -16620;
	// addi r4,r8,-19944
	ctx.r4.s64 = ctx.r8.s64 + -19944;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16620(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16620, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823080AC;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r11,-19928
	ctx.r4.s64 = ctx.r11.s64 + -19928;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,-16612
	ctx.r8.s64 = ctx.r9.s64 + -16612;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-16612(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16612, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x823080E0;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-16604
	ctx.r3.s64 = ctx.r5.s64 + -16604;
	// addi r4,r4,-19912
	ctx.r4.s64 = ctx.r4.s64 + -19912;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16604(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16604, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308114;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16596
	ctx.r3.s64 = ctx.r9.s64 + -16596;
	// addi r4,r8,-19904
	ctx.r4.s64 = ctx.r8.s64 + -19904;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16596(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16596, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308148;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16588
	ctx.r3.s64 = ctx.r9.s64 + -16588;
	// addi r4,r8,-19896
	ctx.r4.s64 = ctx.r8.s64 + -19896;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16588(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16588, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230817C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16580
	ctx.r3.s64 = ctx.r9.s64 + -16580;
	// addi r4,r8,-19888
	ctx.r4.s64 = ctx.r8.s64 + -19888;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16580(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16580, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823081B0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16572
	ctx.r3.s64 = ctx.r9.s64 + -16572;
	// addi r4,r8,-19880
	ctx.r4.s64 = ctx.r8.s64 + -19880;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16572(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16572, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823081E4;
	sub_8233E028(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r9,-16564
	ctx.r8.s64 = ctx.r9.s64 + -16564;
	// stw r11,-16564(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16564, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r6,-19872
	ctx.r4.s64 = ctx.r6.s64 + -19872;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308218;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-16556
	ctx.r3.s64 = ctx.r5.s64 + -16556;
	// addi r4,r4,-19864
	ctx.r4.s64 = ctx.r4.s64 + -19864;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16556(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16556, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230824C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16548
	ctx.r3.s64 = ctx.r9.s64 + -16548;
	// addi r4,r8,-19856
	ctx.r4.s64 = ctx.r8.s64 + -19856;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16548(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16548, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308280;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16540
	ctx.r3.s64 = ctx.r9.s64 + -16540;
	// addi r4,r8,-19848
	ctx.r4.s64 = ctx.r8.s64 + -19848;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16540(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16540, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823082B4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16532
	ctx.r3.s64 = ctx.r9.s64 + -16532;
	// addi r4,r8,-19840
	ctx.r4.s64 = ctx.r8.s64 + -19840;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16532(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16532, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823082E8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16524
	ctx.r3.s64 = ctx.r9.s64 + -16524;
	// addi r4,r8,-19832
	ctx.r4.s64 = ctx.r8.s64 + -19832;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16524(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16524, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230831C;
	sub_8233E028(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-19824
	ctx.r4.s64 = ctx.r10.s64 + -19824;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r9,-16516
	ctx.r8.s64 = ctx.r9.s64 + -16516;
	// stw r11,-16516(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16516, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82308350;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r5,-16508
	ctx.r3.s64 = ctx.r5.s64 + -16508;
	// addi r4,r4,-19816
	ctx.r4.s64 = ctx.r4.s64 + -19816;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16508(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16508, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308384;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16500
	ctx.r3.s64 = ctx.r9.s64 + -16500;
	// addi r4,r8,-19800
	ctx.r4.s64 = ctx.r8.s64 + -19800;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16500(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16500, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823083B8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16492
	ctx.r3.s64 = ctx.r9.s64 + -16492;
	// addi r4,r8,-19776
	ctx.r4.s64 = ctx.r8.s64 + -19776;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16492, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823083EC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16484
	ctx.r3.s64 = ctx.r9.s64 + -16484;
	// addi r4,r8,-19756
	ctx.r4.s64 = ctx.r8.s64 + -19756;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16484, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308420;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16476
	ctx.r3.s64 = ctx.r9.s64 + -16476;
	// addi r4,r8,-19732
	ctx.r4.s64 = ctx.r8.s64 + -19732;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16476(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16476, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308454;
	sub_8233E028(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r30,r9,-16468
	ctx.r30.s64 = ctx.r9.s64 + -16468;
	// addi r4,r8,-19708
	ctx.r4.s64 = ctx.r8.s64 + -19708;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16468, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82308488;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-16460
	ctx.r3.s64 = ctx.r5.s64 + -16460;
	// addi r4,r4,-19680
	ctx.r4.s64 = ctx.r4.s64 + -19680;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16460(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16460, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823084BC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16452
	ctx.r3.s64 = ctx.r9.s64 + -16452;
	// addi r4,r8,-19664
	ctx.r4.s64 = ctx.r8.s64 + -19664;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16452(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16452, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823084F0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16444
	ctx.r3.s64 = ctx.r9.s64 + -16444;
	// addi r4,r8,-19644
	ctx.r4.s64 = ctx.r8.s64 + -19644;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16444(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16444, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308524;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16436
	ctx.r3.s64 = ctx.r9.s64 + -16436;
	// addi r4,r8,-19624
	ctx.r4.s64 = ctx.r8.s64 + -19624;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16436(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16436, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308558;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16428
	ctx.r3.s64 = ctx.r9.s64 + -16428;
	// addi r4,r8,-19608
	ctx.r4.s64 = ctx.r8.s64 + -19608;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16428(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16428, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230858C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16420
	ctx.r3.s64 = ctx.r9.s64 + -16420;
	// addi r4,r8,-19596
	ctx.r4.s64 = ctx.r8.s64 + -19596;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16420(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16420, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823085C0;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r11,-19572
	ctx.r4.s64 = ctx.r11.s64 + -19572;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,-16412
	ctx.r8.s64 = ctx.r9.s64 + -16412;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-16412(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16412, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x823085F4;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-16404
	ctx.r3.s64 = ctx.r5.s64 + -16404;
	// addi r4,r4,-19556
	ctx.r4.s64 = ctx.r4.s64 + -19556;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16404(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16404, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308628;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16396
	ctx.r3.s64 = ctx.r9.s64 + -16396;
	// addi r4,r8,-19544
	ctx.r4.s64 = ctx.r8.s64 + -19544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16396(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16396, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x8230865C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16388
	ctx.r3.s64 = ctx.r9.s64 + -16388;
	// addi r4,r8,-19532
	ctx.r4.s64 = ctx.r8.s64 + -19532;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16388(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16388, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308690;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16380
	ctx.r3.s64 = ctx.r9.s64 + -16380;
	// addi r4,r8,-19508
	ctx.r4.s64 = ctx.r8.s64 + -19508;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16380(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16380, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823086C4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16372
	ctx.r3.s64 = ctx.r9.s64 + -16372;
	// addi r4,r8,-19488
	ctx.r4.s64 = ctx.r8.s64 + -19488;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16372(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16372, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823086F8;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-19460
	ctx.r4.s64 = ctx.r11.s64 + -19460;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,-16364
	ctx.r8.s64 = ctx.r9.s64 + -16364;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-16364(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16364, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8230872C;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-16356
	ctx.r3.s64 = ctx.r5.s64 + -16356;
	// addi r4,r4,-19448
	ctx.r4.s64 = ctx.r4.s64 + -19448;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16356(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16356, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308760;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16348
	ctx.r3.s64 = ctx.r9.s64 + -16348;
	// addi r4,r8,-19416
	ctx.r4.s64 = ctx.r8.s64 + -19416;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16348(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16348, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308794;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16340
	ctx.r3.s64 = ctx.r9.s64 + -16340;
	// addi r4,r8,-19384
	ctx.r4.s64 = ctx.r8.s64 + -19384;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16340(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16340, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823087C8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16332
	ctx.r3.s64 = ctx.r9.s64 + -16332;
	// addi r4,r8,-19348
	ctx.r4.s64 = ctx.r8.s64 + -19348;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16332(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16332, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823087FC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16324
	ctx.r3.s64 = ctx.r9.s64 + -16324;
	// addi r4,r8,-19312
	ctx.r4.s64 = ctx.r8.s64 + -19312;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16324(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16324, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308830;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r11,-19260
	ctx.r4.s64 = ctx.r11.s64 + -19260;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,-16316
	ctx.r8.s64 = ctx.r9.s64 + -16316;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,-16316(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16316, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82308864;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r5,-16308
	ctx.r3.s64 = ctx.r5.s64 + -16308;
	// addi r4,r4,-19208
	ctx.r4.s64 = ctx.r4.s64 + -19208;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16308(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16308, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308898;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16300
	ctx.r3.s64 = ctx.r9.s64 + -16300;
	// addi r4,r8,-19176
	ctx.r4.s64 = ctx.r8.s64 + -19176;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16300(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16300, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823088CC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16292
	ctx.r3.s64 = ctx.r9.s64 + -16292;
	// addi r4,r8,-19144
	ctx.r4.s64 = ctx.r8.s64 + -19144;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16292(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16292, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308900;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16284
	ctx.r3.s64 = ctx.r9.s64 + -16284;
	// addi r4,r8,-19120
	ctx.r4.s64 = ctx.r8.s64 + -19120;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16284(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16284, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308934;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16276
	ctx.r3.s64 = ctx.r9.s64 + -16276;
	// addi r4,r8,-19096
	ctx.r4.s64 = ctx.r8.s64 + -19096;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16276(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16276, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308968;
	sub_8233E028(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r8,-19072
	ctx.r4.s64 = ctx.r8.s64 + -19072;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-16268(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16268, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r9,-16268
	ctx.r11.s64 = ctx.r9.s64 + -16268;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8230899C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16260
	ctx.r3.s64 = ctx.r9.s64 + -16260;
	// addi r4,r8,-19048
	ctx.r4.s64 = ctx.r8.s64 + -19048;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16260(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16260, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x823089D0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16252
	ctx.r3.s64 = ctx.r9.s64 + -16252;
	// addi r4,r8,-19000
	ctx.r4.s64 = ctx.r8.s64 + -19000;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16252(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16252, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308A04;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16244
	ctx.r3.s64 = ctx.r9.s64 + -16244;
	// addi r4,r8,-18952
	ctx.r4.s64 = ctx.r8.s64 + -18952;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16244(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16244, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308A38;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16236
	ctx.r3.s64 = ctx.r9.s64 + -16236;
	// addi r4,r8,-18908
	ctx.r4.s64 = ctx.r8.s64 + -18908;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16236(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16236, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308A6C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16228
	ctx.r3.s64 = ctx.r9.s64 + -16228;
	// addi r4,r8,-18860
	ctx.r4.s64 = ctx.r8.s64 + -18860;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16228(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16228, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308AA0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16220
	ctx.r3.s64 = ctx.r9.s64 + -16220;
	// addi r4,r8,-18824
	ctx.r4.s64 = ctx.r8.s64 + -18824;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16220(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16220, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308AD4;
	sub_8233E028(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r9,-18784
	ctx.r4.s64 = ctx.r9.s64 + -18784;
	// addi r9,r8,-16212
	ctx.r9.s64 = ctx.r8.s64 + -16212;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16212, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82308B08;
	sub_8233E028(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r8,-16204
	ctx.r3.s64 = ctx.r8.s64 + -16204;
	// addi r4,r7,-18740
	ctx.r4.s64 = ctx.r7.s64 + -18740;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16204(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16204, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308B3C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16196
	ctx.r3.s64 = ctx.r9.s64 + -16196;
	// addi r4,r8,-18700
	ctx.r4.s64 = ctx.r8.s64 + -18700;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16196(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16196, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308B70;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16188
	ctx.r3.s64 = ctx.r9.s64 + -16188;
	// addi r4,r8,-18656
	ctx.r4.s64 = ctx.r8.s64 + -18656;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16188(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16188, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308BA4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16180
	ctx.r3.s64 = ctx.r9.s64 + -16180;
	// addi r4,r8,-18608
	ctx.r4.s64 = ctx.r8.s64 + -18608;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16180(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16180, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308BD8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16172
	ctx.r3.s64 = ctx.r9.s64 + -16172;
	// addi r4,r8,-18560
	ctx.r4.s64 = ctx.r8.s64 + -18560;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16172(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16172, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308C0C;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-18512
	ctx.r4.s64 = ctx.r11.s64 + -18512;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r8,r9,-16164
	ctx.r8.s64 = ctx.r9.s64 + -16164;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-16164(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16164, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x82308C40;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r5,-16156
	ctx.r3.s64 = ctx.r5.s64 + -16156;
	// addi r4,r4,-18468
	ctx.r4.s64 = ctx.r4.s64 + -18468;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16156(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16156, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308C74;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16148
	ctx.r3.s64 = ctx.r9.s64 + -16148;
	// addi r4,r8,-18420
	ctx.r4.s64 = ctx.r8.s64 + -18420;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16148(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16148, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308CA8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16140
	ctx.r3.s64 = ctx.r9.s64 + -16140;
	// addi r4,r8,-18368
	ctx.r4.s64 = ctx.r8.s64 + -18368;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16140(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16140, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308CDC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r9,-16132
	ctx.r3.s64 = ctx.r9.s64 + -16132;
	// addi r4,r8,-18320
	ctx.r4.s64 = ctx.r8.s64 + -18320;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16132(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16132, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82308D10;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r9,-16124
	ctx.r8.s64 = ctx.r9.s64 + -16124;
	// stw r11,-16124(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16124, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x823bd950
	ctx.lr = 0x82308D2C;
	sub_823BD950(ctx, base);
	// lis r7,-31886
	ctx.r7.s64 = -2089680896;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r6,r7,-22348
	ctx.r6.s64 = ctx.r7.s64 + -22348;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lis r5,-31884
	ctx.r5.s64 = -2089549824;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r8,-22348(r7)
	PPC_STORE_U32(ctx.r7.u32 + -22348, ctx.r8.u32);
	// lwz r11,-3756(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82308dac
	if (!ctx.cr6.eq) goto loc_82308DAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r4,r11,-18300
	ctx.r4.s64 = ctx.r11.s64 + -18300;
	// addi r3,r10,25392
	ctx.r3.s64 = ctx.r10.s64 + 25392;
	// bl 0x823329d8
	ctx.lr = 0x82308D7C;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82308dac
	if (!ctx.cr6.eq) goto loc_82308DAC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bea278
	ctx.lr = 0x82308D8C;
	sub_82BEA278(ctx, base);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82cb22d8
	ctx.lr = 0x82308D94;
	sub_82CB22D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bea278
	ctx.lr = 0x82308D9C;
	sub_82BEA278(ctx, base);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// stw r9,-3740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3740, ctx.r9.u32);
	// b 0x82308dc0
	goto loc_82308DC0;
loc_82308DAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb22d8
	ctx.lr = 0x82308DB4;
	sub_82CB22D8(ctx, base);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-3740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3740, ctx.r11.u32);
loc_82308DC0:
	// bl 0x82b6d790
	ctx.lr = 0x82308DC4;
	sub_82B6D790(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// bl 0x823160a8
	ctx.lr = 0x82308DD4;
	sub_823160A8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-19580
	ctx.r26.s64 = ctx.r11.s64 + -19580;
	// bne cr6,0x82308df8
	if (!ctx.cr6.eq) goto loc_82308DF8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x82308DF4;
	sub_822960C0(ctx, base);
	// b 0x82308e20
	goto loc_82308E20;
loc_82308DF8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82308e14
	if (!ctx.cr6.eq) goto loc_82308E14;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822960c0
	ctx.lr = 0x82308E10;
	sub_822960C0(ctx, base);
	// b 0x82308e20
	goto loc_82308E20;
loc_82308E14:
	// addi r4,r3,44
	ctx.r4.s64 = ctx.r3.s64 + 44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e1a0
	ctx.lr = 0x82308E20;
	sub_8233E1A0(ctx, base);
loc_82308E20:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,11272
	ctx.r27.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82308e3c
	if (!ctx.cr6.eq) goto loc_82308E3C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82308E3C:
	// bl 0x823160a8
	ctx.lr = 0x82308E40;
	sub_823160A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8194
	ctx.r6.s64 = 8194;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822b0540
	ctx.lr = 0x82308E58;
	sub_822B0540(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82308E60;
	sub_82299080(ctx, base);
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
	ctx.lr = 0x82308E78;
	sub_8229E890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309138
	ctx.lr = 0x82308E80;
	sub_82309138(ctx, base);
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
	// bne cr6,0x82308e9c
	if (!ctx.cr6.eq) goto loc_82308E9C;
	// bl 0x823648a0
	ctx.lr = 0x82308E9C;
	sub_823648A0(ctx, base);
loc_82308E9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82293938
	ctx.lr = 0x82308EA4;
	sub_82293938(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r29,r11,-21944
	ctx.r29.s64 = ctx.r11.s64 + -21944;
loc_82308EAC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82308f58
	if (!ctx.cr6.lt) goto loc_82308F58;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82308f4c
	if (!ctx.cr6.eq) goto loc_82308F4C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82308ef0
	if (!ctx.cr6.eq) goto loc_82308EF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x82308EEC;
	sub_822960C0(ctx, base);
	// b 0x82308ef8
	goto loc_82308EF8;
loc_82308EF0:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82308EF8;
	sub_8233E1A0(ctx, base);
loc_82308EF8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82308f0c
	if (!ctx.cr6.eq) goto loc_82308F0C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82308F0C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r6,8194
	ctx.r6.s64 = 8194;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b0540
	ctx.lr = 0x82308F20;
	sub_822B0540(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82308f44
	if (ctx.cr6.eq) goto loc_82308F44;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82308F44;
	sub_82294520(ctx, base);
loc_82308F44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82308F4C;
	sub_82294CC8(ctx, base);
loc_82308F4C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822939e8
	ctx.lr = 0x82308F54;
	sub_822939E8(ctx, base);
	// b 0x82308eac
	goto loc_82308EAC;
loc_82308F58:
	// bl 0x822a8060
	ctx.lr = 0x82308F5C;
	sub_822A8060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82293938
	ctx.lr = 0x82308F64;
	sub_82293938(ctx, base);
loc_82308F64:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82308f90
	if (!ctx.cr6.lt) goto loc_82308F90;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823970b8
	ctx.lr = 0x82308F84;
	sub_823970B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822939e8
	ctx.lr = 0x82308F8C;
	sub_822939E8(ctx, base);
	// b 0x82308f64
	goto loc_82308F64;
loc_82308F90:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwz r3,25364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82308fc0
	if (!ctx.cr6.eq) goto loc_82308FC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82306aa0
	ctx.lr = 0x82308FB4;
	sub_82306AA0(ctx, base);
	// stw r3,25364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25364, ctx.r3.u32);
	// bl 0x82306b60
	ctx.lr = 0x82308FBC;
	sub_82306B60(ctx, base);
	// lwz r3,25364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
loc_82308FC0:
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
	ctx.lr = 0x82308FE8;
	sub_822A93E8(ctx, base);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// stw r3,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r3.u32);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82309004
	if (!ctx.cr6.eq) goto loc_82309004;
	// bl 0x822900a0
	ctx.lr = 0x82309000;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82309004:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230901C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823090bc
	if (ctx.cr6.eq) goto loc_823090BC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f0,-17720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17720);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-31886
	ctx.r5.s64 = -2089680896;
	// lfs f13,-14200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14200);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// li r11,100
	ctx.r11.s64 = 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// lfs f12,32548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32548);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// lfs f11,-14344(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14344);
	ctx.f11.f64 = double(temp.f32);
	// stw r28,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r28.u32);
	// lfs f10,-16672(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16672);
	ctx.f10.f64 = double(temp.f32);
	// stw r28,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// stw r28,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r28.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r3,-21492(r5)
	PPC_STORE_U32(ctx.r5.u32 + -21492, ctx.r3.u32);
	// stfs f10,64(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r28,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r28.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_823090BC:
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-21492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21492, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823090D0"))) PPC_WEAK_FUNC(sub_823090D0);
PPC_FUNC_IMPL(__imp__sub_823090D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309124
	if (!ctx.cr6.eq) goto loc_82309124;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309104
	if (ctx.cr6.eq) goto loc_82309104;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8230910c
	goto loc_8230910C;
loc_82309104:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8230910C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e838
	ctx.lr = 0x82309120;
	sub_8230E838(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82309124:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309138"))) PPC_WEAK_FUNC(sub_82309138);
PPC_FUNC_IMPL(__imp__sub_82309138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82309140;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823090d0
	ctx.lr = 0x82309158;
	sub_823090D0(ctx, base);
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x823090d0
	ctx.lr = 0x82309164;
	sub_823090D0(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823090d0
	ctx.lr = 0x82309170;
	sub_823090D0(ctx, base);
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x823090d0
	ctx.lr = 0x8230917C;
	sub_823090D0(ctx, base);
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x823090d0
	ctx.lr = 0x82309188;
	sub_823090D0(ctx, base);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x823090d0
	ctx.lr = 0x82309194;
	sub_823090D0(ctx, base);
	// addi r4,r31,392
	ctx.r4.s64 = ctx.r31.s64 + 392;
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// bl 0x823090d0
	ctx.lr = 0x823091A0;
	sub_823090D0(ctx, base);
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x823090d0
	ctx.lr = 0x823091AC;
	sub_823090D0(ctx, base);
	// addi r4,r31,424
	ctx.r4.s64 = ctx.r31.s64 + 424;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// bl 0x823090d0
	ctx.lr = 0x823091B8;
	sub_823090D0(ctx, base);
	// addi r4,r31,440
	ctx.r4.s64 = ctx.r31.s64 + 440;
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x823090d0
	ctx.lr = 0x823091C4;
	sub_823090D0(ctx, base);
	// addi r4,r31,456
	ctx.r4.s64 = ctx.r31.s64 + 456;
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// bl 0x823090d0
	ctx.lr = 0x823091D0;
	sub_823090D0(ctx, base);
	// addi r4,r31,684
	ctx.r4.s64 = ctx.r31.s64 + 684;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x823090d0
	ctx.lr = 0x823091DC;
	sub_823090D0(ctx, base);
	// addi r4,r31,700
	ctx.r4.s64 = ctx.r31.s64 + 700;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x823090d0
	ctx.lr = 0x823091E8;
	sub_823090D0(ctx, base);
	// addi r4,r31,904
	ctx.r4.s64 = ctx.r31.s64 + 904;
	// addi r3,r31,908
	ctx.r3.s64 = ctx.r31.s64 + 908;
	// bl 0x823090d0
	ctx.lr = 0x823091F4;
	sub_823090D0(ctx, base);
	// addi r4,r31,552
	ctx.r4.s64 = ctx.r31.s64 + 552;
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x823090d0
	ctx.lr = 0x82309200;
	sub_823090D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309244
	if (!ctx.cr6.eq) goto loc_82309244;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309228
	if (ctx.cr6.eq) goto loc_82309228;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// b 0x8230922c
	goto loc_8230922C;
loc_82309228:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8230922C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e838
	ctx.lr = 0x82309240;
	sub_8230E838(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
loc_82309244:
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309280
	if (!ctx.cr6.eq) goto loc_82309280;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309264
	if (ctx.cr6.eq) goto loc_82309264;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// b 0x82309268
	goto loc_82309268;
loc_82309264:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309268:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e838
	ctx.lr = 0x8230927C;
	sub_8230E838(ctx, base);
	// stw r3,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r3.u32);
loc_82309280:
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823092bc
	if (!ctx.cr6.eq) goto loc_823092BC;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823092a0
	if (ctx.cr6.eq) goto loc_823092A0;
	// lwz r4,720(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// b 0x823092a4
	goto loc_823092A4;
loc_823092A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823092A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e8b0
	ctx.lr = 0x823092B8;
	sub_8230E8B0(ctx, base);
	// stw r3,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r3.u32);
loc_823092BC:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823092f8
	if (!ctx.cr6.eq) goto loc_823092F8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823092dc
	if (ctx.cr6.eq) goto loc_823092DC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x823092e0
	goto loc_823092E0;
loc_823092DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823092E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e838
	ctx.lr = 0x823092F4;
	sub_8230E838(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
loc_823092F8:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309334
	if (!ctx.cr6.eq) goto loc_82309334;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309318
	if (ctx.cr6.eq) goto loc_82309318;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8230931c
	goto loc_8230931C;
loc_82309318:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8230931C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e838
	ctx.lr = 0x82309330;
	sub_8230E838(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
loc_82309334:
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309370
	if (!ctx.cr6.eq) goto loc_82309370;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309354
	if (ctx.cr6.eq) goto loc_82309354;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82309358
	goto loc_82309358;
loc_82309354:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309358:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e838
	ctx.lr = 0x8230936C;
	sub_8230E838(ctx, base);
	// stw r3,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
loc_82309370:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823093ac
	if (!ctx.cr6.eq) goto loc_823093AC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309390
	if (ctx.cr6.eq) goto loc_82309390;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82309394
	goto loc_82309394;
loc_82309390:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309394:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e838
	ctx.lr = 0x823093A8;
	sub_8230E838(ctx, base);
	// stw r3,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r3.u32);
loc_823093AC:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823093e8
	if (!ctx.cr6.eq) goto loc_823093E8;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823093cc
	if (ctx.cr6.eq) goto loc_823093CC;
	// lwz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// b 0x823093d0
	goto loc_823093D0;
loc_823093CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823093D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e928
	ctx.lr = 0x823093E4;
	sub_8230E928(ctx, base);
	// stw r3,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r3.u32);
loc_823093E8:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309424
	if (!ctx.cr6.eq) goto loc_82309424;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309408
	if (ctx.cr6.eq) goto loc_82309408;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// b 0x8230940c
	goto loc_8230940C;
loc_82309408:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8230940C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230e9a0
	ctx.lr = 0x82309420;
	sub_8230E9A0(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
loc_82309424:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309460
	if (!ctx.cr6.eq) goto loc_82309460;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309444
	if (ctx.cr6.eq) goto loc_82309444;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// b 0x82309448
	goto loc_82309448;
loc_82309444:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309448:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ea10
	ctx.lr = 0x8230945C;
	sub_8230EA10(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
loc_82309460:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230949c
	if (!ctx.cr6.eq) goto loc_8230949C;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309480
	if (ctx.cr6.eq) goto loc_82309480;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// b 0x82309484
	goto loc_82309484;
loc_82309480:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309484:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ea80
	ctx.lr = 0x82309498;
	sub_8230EA80(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
loc_8230949C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823094d8
	if (!ctx.cr6.eq) goto loc_823094D8;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823094bc
	if (ctx.cr6.eq) goto loc_823094BC;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// b 0x823094c0
	goto loc_823094C0;
loc_823094BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823094C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230eaf0
	ctx.lr = 0x823094D4;
	sub_8230EAF0(ctx, base);
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
loc_823094D8:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309530
	if (!ctx.cr6.eq) goto loc_82309530;
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// addi r11,r31,576
	ctx.r11.s64 = ctx.r31.s64 + 576;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309530
	if (ctx.cr6.eq) goto loc_82309530;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309530
	if (ctx.cr6.eq) goto loc_82309530;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309514
	if (ctx.cr6.eq) goto loc_82309514;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309518
	goto loc_82309518;
loc_82309514:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309518:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230eb60
	ctx.lr = 0x8230952C;
	sub_8230EB60(ctx, base);
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
loc_82309530:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309588
	if (!ctx.cr6.eq) goto loc_82309588;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309588
	if (ctx.cr6.eq) goto loc_82309588;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309588
	if (ctx.cr6.eq) goto loc_82309588;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230956c
	if (ctx.cr6.eq) goto loc_8230956C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309570
	goto loc_82309570;
loc_8230956C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309570:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ebd0
	ctx.lr = 0x82309584;
	sub_8230EBD0(ctx, base);
	// stw r3,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r3.u32);
loc_82309588:
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823095e0
	if (!ctx.cr6.eq) goto loc_823095E0;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823095e0
	if (ctx.cr6.eq) goto loc_823095E0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823095e0
	if (ctx.cr6.eq) goto loc_823095E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823095c4
	if (ctx.cr6.eq) goto loc_823095C4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823095c8
	goto loc_823095C8;
loc_823095C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823095C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ebd0
	ctx.lr = 0x823095DC;
	sub_8230EBD0(ctx, base);
	// stw r3,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r3.u32);
loc_823095E0:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309638
	if (!ctx.cr6.eq) goto loc_82309638;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309638
	if (ctx.cr6.eq) goto loc_82309638;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309638
	if (ctx.cr6.eq) goto loc_82309638;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230961c
	if (ctx.cr6.eq) goto loc_8230961C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309620
	goto loc_82309620;
loc_8230961C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309620:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ebd0
	ctx.lr = 0x82309634;
	sub_8230EBD0(ctx, base);
	// stw r3,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r3.u32);
loc_82309638:
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309690
	if (!ctx.cr6.eq) goto loc_82309690;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309690
	if (ctx.cr6.eq) goto loc_82309690;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309690
	if (ctx.cr6.eq) goto loc_82309690;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309674
	if (ctx.cr6.eq) goto loc_82309674;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309678
	goto loc_82309678;
loc_82309674:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82309678:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ebd0
	ctx.lr = 0x8230968C;
	sub_8230EBD0(ctx, base);
	// stw r3,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r3.u32);
loc_82309690:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823096e8
	if (!ctx.cr6.eq) goto loc_823096E8;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r11,r31,656
	ctx.r11.s64 = ctx.r31.s64 + 656;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823096e8
	if (ctx.cr6.eq) goto loc_823096E8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823096e8
	if (ctx.cr6.eq) goto loc_823096E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823096cc
	if (ctx.cr6.eq) goto loc_823096CC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823096d0
	goto loc_823096D0;
loc_823096CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823096D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ebd0
	ctx.lr = 0x823096E4;
	sub_8230EBD0(ctx, base);
	// stw r3,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r3.u32);
loc_823096E8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r3,-25656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82309714
	if (!ctx.cr6.eq) goto loc_82309714;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,23528
	ctx.r4.s64 = ctx.r11.s64 + 23528;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8230ec48
	ctx.lr = 0x82309710;
	sub_8230EC48(ctx, base);
	// stw r3,-25656(r30)
	PPC_STORE_U32(ctx.r30.u32 + -25656, ctx.r3.u32);
loc_82309714:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// beq cr6,0x82309754
	if (ctx.cr6.eq) goto loc_82309754;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82309754;
	sub_82294520(ctx, base);
loc_82309754:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230980c
	if (!ctx.cr6.gt) goto loc_8230980C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82309768:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823097a8
	if (ctx.cr6.eq) goto loc_823097A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823097a8
	if (ctx.cr6.eq) goto loc_823097A8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230ec48
	ctx.lr = 0x823097A4;
	sub_8230EC48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_823097A8:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x823097e4
	if (!ctx.cr6.gt) goto loc_823097E4;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x823097E4;
	sub_82294520(ctx, base);
loc_823097E4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823097f8
	if (ctx.cr0.eq) goto loc_823097F8;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_823097F8:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82309768
	if (ctx.cr6.lt) goto loc_82309768;
loc_8230980C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82309814"))) PPC_WEAK_FUNC(sub_82309814);
PPC_FUNC_IMPL(__imp__sub_82309814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82309818"))) PPC_WEAK_FUNC(sub_82309818);
PPC_FUNC_IMPL(__imp__sub_82309818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82309820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-23384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309844
	if (ctx.cr6.eq) goto loc_82309844;
	// bl 0x82c078b8
	ctx.lr = 0x8230983C;
	sub_82C078B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-23384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23384, ctx.r11.u32);
loc_82309844:
	// bl 0x82c079f8
	ctx.lr = 0x82309848;
	sub_82C079F8(ctx, base);
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// li r12,-16385
	ctx.r12.s64 = -16385;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// std r10,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r10.u64);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x823098b8
	if (!ctx.cr6.eq) goto loc_823098B8;
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,29088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29088);
	// bl 0x82294a58
	ctx.lr = 0x82309870;
	sub_82294A58(ctx, base);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,29088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29088, ctx.r11.u32);
	// stw r8,736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 736, ctx.r8.u32);
	// stw r10,25344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25344, ctx.r10.u32);
	// bl 0x823bdd88
	ctx.lr = 0x82309890;
	sub_823BDD88(ctx, base);
	// lis r30,-31886
	ctx.r30.s64 = -2089680896;
	// lwz r31,-21492(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21492);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823098b0
	if (ctx.cr6.eq) goto loc_823098B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629230
	ctx.lr = 0x823098A8;
	sub_82629230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x823098B0;
	sub_82294A58(ctx, base);
loc_823098B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21492(r30)
	PPC_STORE_U32(ctx.r30.u32 + -21492, ctx.r11.u32);
loc_823098B8:
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// std r10,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r10.u64);
	// bl 0x822a1020
	ctx.lr = 0x823098D0;
	sub_822A1020(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823098D8"))) PPC_WEAK_FUNC(sub_823098D8);
PPC_FUNC_IMPL(__imp__sub_823098D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82629230
	ctx.lr = 0x823098F0;
	sub_82629230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x823098F8;
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

__attribute__((alias("__imp__sub_82309910"))) PPC_WEAK_FUNC(sub_82309910);
PPC_FUNC_IMPL(__imp__sub_82309910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309914"))) PPC_WEAK_FUNC(sub_82309914);
PPC_FUNC_IMPL(__imp__sub_82309914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82309918"))) PPC_WEAK_FUNC(sub_82309918);
PPC_FUNC_IMPL(__imp__sub_82309918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82309920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8230995c
	if (ctx.cr6.eq) goto loc_8230995C;
loc_82309934:
	// addic. r31,r31,1
	ctx.xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8230995c
	if (ctx.cr0.lt) goto loc_8230995C;
	// lwz r11,744(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230995c
	if (!ctx.cr6.lt) goto loc_8230995C;
	// lwz r11,740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 740);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82309934
	if (ctx.cr6.eq) goto loc_82309934;
loc_8230995C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82309960:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823099f4
	if (ctx.cr6.eq) goto loc_823099F4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823099f4
	if (ctx.cr6.lt) goto loc_823099F4;
	// lwz r11,744(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823099f4
	if (!ctx.cr6.lt) goto loc_823099F4;
	// lwz r11,740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 740);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r29,740
	ctx.r30.s64 = ctx.r29.s64 + 740;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823099c8
	if (ctx.cr6.eq) goto loc_823099C8;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823099c8
	if (!ctx.cr6.eq) goto loc_823099C8;
	// stw r28,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x8232d180
	ctx.lr = 0x823099C8;
	sub_8232D180(ctx, base);
loc_823099C8:
	// addic. r31,r31,1
	ctx.xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82309960
	if (ctx.cr0.lt) goto loc_82309960;
	// lwz r11,744(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82309960
	if (!ctx.cr6.lt) goto loc_82309960;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823099c8
	if (ctx.cr6.eq) goto loc_823099C8;
	// b 0x82309960
	goto loc_82309960;
loc_823099F4:
	// lwz r3,752(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309a20
	if (ctx.cr6.eq) goto loc_82309A20;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309a20
	if (!ctx.cr6.eq) goto loc_82309A20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82309A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 752, ctx.r28.u32);
loc_82309A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82309A28"))) PPC_WEAK_FUNC(sub_82309A28);
PPC_FUNC_IMPL(__imp__sub_82309A28) {
	PPC_FUNC_PROLOGUE();
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
	// bgt cr6,0x82309a48
	if (ctx.cr6.gt) goto loc_82309A48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82309A48:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309A54"))) PPC_WEAK_FUNC(sub_82309A54);
PPC_FUNC_IMPL(__imp__sub_82309A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82309A58"))) PPC_WEAK_FUNC(sub_82309A58);
PPC_FUNC_IMPL(__imp__sub_82309A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309A68"))) PPC_WEAK_FUNC(sub_82309A68);
PPC_FUNC_IMPL(__imp__sub_82309A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309A78"))) PPC_WEAK_FUNC(sub_82309A78);
PPC_FUNC_IMPL(__imp__sub_82309A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309A88"))) PPC_WEAK_FUNC(sub_82309A88);
PPC_FUNC_IMPL(__imp__sub_82309A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309A98"))) PPC_WEAK_FUNC(sub_82309A98);
PPC_FUNC_IMPL(__imp__sub_82309A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82309AB0"))) PPC_WEAK_FUNC(sub_82309AB0);
PPC_FUNC_IMPL(__imp__sub_82309AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82309AB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// lwz r11,28904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28904);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309b04
	if (ctx.cr6.eq) goto loc_82309B04;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82309AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
loc_82309B04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3058
	ctx.lr = 0x82309B10;
	sub_822A3058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lwz r11,676(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309b48
	if (ctx.cr6.eq) goto loc_82309B48;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82309B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
loc_82309B48:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,29088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29088);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309b78
	if (ctx.cr6.eq) goto loc_82309B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82309B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
loc_82309B78:
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// lwz r3,-21492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309b9c
	if (ctx.cr6.eq) goto loc_82309B9C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826297b8
	ctx.lr = 0x82309B94;
	sub_826297B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
loc_82309B9C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r3,28888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309bcc
	if (ctx.cr6.eq) goto loc_82309BCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82309BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
loc_82309BCC:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-23728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23728);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82309BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,-15008
	ctx.r3.s64 = ctx.r11.s64 + -15008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82363088
	ctx.lr = 0x82309C08;
	sub_82363088(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309c44
	if (ctx.cr6.eq) goto loc_82309C44;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82309C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
loc_82309C44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1358
	ctx.lr = 0x82309C50;
	sub_823F1358(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// bl 0x82333168
	ctx.lr = 0x82309C68;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309cbc
	if (ctx.cr6.eq) goto loc_82309CBC;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28884);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a180
	if (ctx.cr6.eq) goto loc_8230A180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82309C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28884);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82309CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82309CBC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-18264
	ctx.r4.s64 = ctx.r11.s64 + -18264;
	// bl 0x82333168
	ctx.lr = 0x82309CCC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-18248
	ctx.r4.s64 = ctx.r11.s64 + -18248;
	// bl 0x82333168
	ctx.lr = 0x82309CE4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-18128
	ctx.r4.s64 = ctx.r11.s64 + -18128;
	// bl 0x82333168
	ctx.lr = 0x82309CFC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309e5c
	if (ctx.cr6.eq) goto loc_82309E5C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823be038
	ctx.lr = 0x82309D18;
	sub_823BE038(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309e48
	if (ctx.cr6.eq) goto loc_82309E48;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82309d40
	if (!ctx.cr6.eq) goto loc_82309D40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82309D40:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18108
	ctx.r4.s64 = ctx.r11.s64 + -18108;
	// bl 0x8232d178
	ctx.lr = 0x82309D50;
	sub_8232D178(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82309d64
	if (!ctx.cr6.eq) goto loc_82309D64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82309D64:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18072
	ctx.r4.s64 = ctx.r11.s64 + -18072;
	// bl 0x8232d178
	ctx.lr = 0x82309D74;
	sub_8232D178(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82309d88
	if (!ctx.cr6.eq) goto loc_82309D88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82309D88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18000
	ctx.r4.s64 = ctx.r11.s64 + -18000;
	// bl 0x8232d178
	ctx.lr = 0x82309D98;
	sub_8232D178(ctx, base);
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82309de4
	if (!ctx.cr6.gt) goto loc_82309DE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r4,r11,-17928
	ctx.r4.s64 = ctx.r11.s64 + -17928;
loc_82309DB4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82309dc8
	if (ctx.cr6.eq) goto loc_82309DC8;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82309dcc
	goto loc_82309DCC;
loc_82309DC8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82309DCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d178
	ctx.lr = 0x82309DD4;
	sub_8232D178(ctx, base);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82309db4
	if (ctx.cr6.lt) goto loc_82309DB4;
loc_82309DE4:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82309df8
	if (!ctx.cr6.eq) goto loc_82309DF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82309DF8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-17888
	ctx.r4.s64 = ctx.r11.s64 + -17888;
	// bl 0x8232d178
	ctx.lr = 0x82309E08;
	sub_8232D178(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823beb78
	ctx.lr = 0x82309E18;
	sub_823BEB78(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82309e2c
	if (ctx.cr6.eq) goto loc_82309E2C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82309e30
	goto loc_82309E30;
loc_82309E2C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82309E30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-17852
	ctx.r4.s64 = ctx.r11.s64 + -17852;
	// bl 0x8232d178
	ctx.lr = 0x82309E40;
	sub_8232D178(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x82309E48;
	sub_82299080(ctx, base);
loc_82309E48:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82295d40
	ctx.lr = 0x82309E50;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82309E5C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-17796
	ctx.r4.s64 = ctx.r11.s64 + -17796;
	// bl 0x82333168
	ctx.lr = 0x82309E6C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309e9c
	if (ctx.cr6.eq) goto loc_82309E9C;
	// addi r4,r29,696
	ctx.r4.s64 = ctx.r29.s64 + 696;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82294eb0
	ctx.lr = 0x82309E80;
	sub_82294EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a180
	if (ctx.cr6.eq) goto loc_8230A180;
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x822960c0
	ctx.lr = 0x82309E90;
	sub_822960C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82309E9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-17784
	ctx.r4.s64 = ctx.r11.s64 + -17784;
	// bl 0x82333168
	ctx.lr = 0x82309EAC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82309efc
	if (ctx.cr6.eq) goto loc_82309EFC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309ee0
	if (ctx.cr6.eq) goto loc_82309EE0;
	// bl 0x822b4788
	ctx.lr = 0x82309EC8;
	sub_822B4788(ctx, base);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,25228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25228, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82309EE0:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,25228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25228, ctx.r11.u32);
	// bl 0x822b4628
	ctx.lr = 0x82309EF0;
	sub_822B4628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82309EFC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r30,r11,-17740
	ctx.r30.s64 = ctx.r11.s64 + -17740;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82333168
	ctx.lr = 0x82309F10;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a478
	if (ctx.cr6.eq) goto loc_8230A478;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823335a8
	ctx.lr = 0x82309F28;
	sub_823335A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a178
	if (ctx.cr6.eq) goto loc_8230A178;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a178
	if (!ctx.cr6.gt) goto loc_8230A178;
	// bl 0x82387450
	ctx.lr = 0x82309F44;
	sub_82387450(ctx, base);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17704
	ctx.r4.s64 = ctx.r11.s64 + -17704;
	// bl 0x82cb0328
	ctx.lr = 0x82309F58;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a000
	if (!ctx.cr6.eq) goto loc_8230A000;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r11,-17688
	ctx.r4.s64 = ctx.r11.s64 + -17688;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// bl 0x8230ae40
	ctx.lr = 0x82309F88;
	sub_8230AE40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82384790
	ctx.lr = 0x82309F90;
	sub_82384790(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82785070
	ctx.lr = 0x82309F98;
	sub_82785070(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230afd8
	ctx.lr = 0x82309FA0;
	sub_8230AFD8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82309fb8
	if (ctx.cr6.gt) goto loc_82309FB8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82309fdc
	if (!ctx.cr6.gt) goto loc_82309FDC;
loc_82309FB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17632
	ctx.r4.s64 = ctx.r11.s64 + -17632;
	// bl 0x8230ae40
	ctx.lr = 0x82309FC8;
	sub_8230AE40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82712798
	ctx.lr = 0x82309FD4;
	sub_82712798(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230afd8
	ctx.lr = 0x82309FDC;
	sub_8230AFD8(ctx, base);
loc_82309FDC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8230df40
	ctx.lr = 0x82309FE4;
	sub_8230DF40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8230dec0
	ctx.lr = 0x82309FEC;
	sub_8230DEC0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82309FF4;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A000:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17580
	ctx.r4.s64 = ctx.r11.s64 + -17580;
	// bl 0x82cb0328
	ctx.lr = 0x8230A010;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a044
	if (!ctx.cr6.eq) goto loc_8230A044;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17564
	ctx.r4.s64 = ctx.r11.s64 + -17564;
loc_8230A024:
	// bl 0x8230ae40
	ctx.lr = 0x8230A028;
	sub_8230AE40(ctx, base);
loc_8230A028:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230afd8
	ctx.lr = 0x8230A030;
	sub_8230AFD8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x8230A038;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A044:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17516
	ctx.r4.s64 = ctx.r11.s64 + -17516;
	// bl 0x82cb0328
	ctx.lr = 0x8230A054;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a06c
	if (!ctx.cr6.eq) goto loc_8230A06C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17504
	ctx.r4.s64 = ctx.r11.s64 + -17504;
	// b 0x8230a024
	goto loc_8230A024;
loc_8230A06C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17460
	ctx.r4.s64 = ctx.r11.s64 + -17460;
	// bl 0x82cb0328
	ctx.lr = 0x8230A07C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a094
	if (!ctx.cr6.eq) goto loc_8230A094;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17436
	ctx.r4.s64 = ctx.r11.s64 + -17436;
	// b 0x8230a024
	goto loc_8230A024;
loc_8230A094:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17380
	ctx.r4.s64 = ctx.r11.s64 + -17380;
	// bl 0x82cb0328
	ctx.lr = 0x8230A0A4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a0bc
	if (!ctx.cr6.eq) goto loc_8230A0BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17364
	ctx.r4.s64 = ctx.r11.s64 + -17364;
	// b 0x8230a024
	goto loc_8230A024;
loc_8230A0BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17316
	ctx.r4.s64 = ctx.r11.s64 + -17316;
	// bl 0x82cb0328
	ctx.lr = 0x8230A0CC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a18c
	if (!ctx.cr6.eq) goto loc_8230A18C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230A0E4;
	sub_823335A8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827850f0
	ctx.lr = 0x8230A0EC;
	sub_827850F0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a118
	if (!ctx.cr6.eq) goto loc_8230A118;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,18540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a170
	if (ctx.cr6.eq) goto loc_8230A170;
loc_8230A108:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230a108
	if (!ctx.cr6.eq) goto loc_8230A108;
	// b 0x8230a170
	goto loc_8230A170;
loc_8230A118:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17308
	ctx.r4.s64 = ctx.r11.s64 + -17308;
	// bl 0x8230ae40
	ctx.lr = 0x8230A128;
	sub_8230AE40(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// bl 0x8230e6a8
	ctx.lr = 0x8230A14C;
	sub_8230E6A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82712798
	ctx.lr = 0x8230A158;
	sub_82712798(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8230df40
	ctx.lr = 0x8230A160;
	sub_8230DF40(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_8230A164:
	// bl 0x8230dec0
	ctx.lr = 0x8230A168;
	sub_8230DEC0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230afd8
	ctx.lr = 0x8230A170;
	sub_8230AFD8(ctx, base);
loc_8230A170:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_8230A174:
	// bl 0x82299080
	ctx.lr = 0x8230A178;
	sub_82299080(ctx, base);
loc_8230A178:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x8230A180;
	sub_82299080(ctx, base);
loc_8230A180:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A18C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17244
	ctx.r4.s64 = ctx.r11.s64 + -17244;
	// bl 0x82cb0328
	ctx.lr = 0x8230A19C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a2fc
	if (!ctx.cr6.eq) goto loc_8230A2FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823335a8
	ctx.lr = 0x8230A1B4;
	sub_823335A8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a1c8
	if (ctx.cr6.eq) goto loc_8230A1C8;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x8230a1d0
	goto loc_8230A1D0;
loc_8230A1C8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_8230A1D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-17224
	ctx.r4.s64 = ctx.r11.s64 + -17224;
	// bl 0x8232e868
	ctx.lr = 0x8230A1E0;
	sub_8232E868(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230aeb0
	ctx.lr = 0x8230A1EC;
	sub_8230AEB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8230dfe0
	ctx.lr = 0x8230A1F4;
	sub_8230DFE0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r28,r11,-19580
	ctx.r28.s64 = ctx.r11.s64 + -19580;
	// addi r29,r10,-21944
	ctx.r29.s64 = ctx.r10.s64 + -21944;
loc_8230A204:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230a2e0
	if (!ctx.cr6.lt) goto loc_8230A2E0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230a268
	if (ctx.cr6.eq) goto loc_8230A268;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8230a248
	if (!ctx.cr6.eq) goto loc_8230A248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822960c0
	ctx.lr = 0x8230A244;
	sub_822960C0(ctx, base);
	// b 0x8230a250
	goto loc_8230A250;
loc_8230A248:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8230A250;
	sub_8233E1A0(ctx, base);
loc_8230A250:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822b21c0
	ctx.lr = 0x8230A25C;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8230a26c
	if (!ctx.cr6.eq) goto loc_8230A26C;
loc_8230A268:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8230A26C:
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230a288
	if (ctx.cr6.eq) goto loc_8230A288;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r27,r27,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82299080
	ctx.lr = 0x8230A288;
	sub_82299080(ctx, base);
loc_8230A288:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230a2a0
	if (!ctx.cr6.eq) goto loc_8230A2A0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8230e090
	ctx.lr = 0x8230A29C;
	sub_8230E090(ctx, base);
	// b 0x8230a204
	goto loc_8230A204;
loc_8230A2A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230A2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8230A2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230afd8
	ctx.lr = 0x8230A2D8;
	sub_8230AFD8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8230a174
	goto loc_8230A174;
loc_8230A2E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230af40
	ctx.lr = 0x8230A2EC;
	sub_8230AF40(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230afd8
	ctx.lr = 0x8230A2F4;
	sub_8230AFD8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8230a174
	goto loc_8230A174;
loc_8230A2FC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17180
	ctx.r4.s64 = ctx.r11.s64 + -17180;
	// bl 0x82cb0328
	ctx.lr = 0x8230A30C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a3e4
	if (!ctx.cr6.eq) goto loc_8230A3E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230A324;
	sub_823335A8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827d0d50
	ctx.lr = 0x8230A32C;
	sub_827D0D50(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a394
	if (!ctx.cr6.eq) goto loc_8230A394;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827d39e8
	ctx.lr = 0x8230A340;
	sub_827D39E8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a394
	if (!ctx.cr6.eq) goto loc_8230A394;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r31,17968(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17968);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230a170
	if (ctx.cr6.eq) goto loc_8230A170;
loc_8230A35C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230A370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8230A384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8230a35c
	if (!ctx.cr6.eq) goto loc_8230A35C;
	// b 0x8230a170
	goto loc_8230A170;
loc_8230A394:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17140
	ctx.r4.s64 = ctx.r11.s64 + -17140;
	// bl 0x8230ae40
	ctx.lr = 0x8230A3A4;
	sub_8230AE40(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8230e630
	ctx.lr = 0x8230A3BC;
	sub_8230E630(ctx, base);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82712798
	ctx.lr = 0x8230A3D4;
	sub_82712798(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8230df40
	ctx.lr = 0x8230A3DC;
	sub_8230DF40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8230a164
	goto loc_8230A164;
loc_8230A3E4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17084
	ctx.r4.s64 = ctx.r11.s64 + -17084;
	// bl 0x82cb0328
	ctx.lr = 0x8230A3F4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a178
	if (!ctx.cr6.eq) goto loc_8230A178;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8230ae40
	ctx.lr = 0x8230A408;
	sub_8230AE40(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8230dfe0
	ctx.lr = 0x8230A410;
	sub_8230DFE0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
loc_8230A418:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230a028
	if (!ctx.cr6.lt) goto loc_8230A028;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230a46c
	if (ctx.cr6.eq) goto loc_8230A46C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230A454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8230A46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230A46C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8230e090
	ctx.lr = 0x8230A474;
	sub_8230E090(ctx, base);
	// b 0x8230a418
	goto loc_8230A418;
loc_8230A478:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-17076
	ctx.r4.s64 = ctx.r11.s64 + -17076;
	// bl 0x82333168
	ctx.lr = 0x8230A488;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-17028
	ctx.r4.s64 = ctx.r11.s64 + -17028;
	// bl 0x82333168
	ctx.lr = 0x8230A4A0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a180
	if (!ctx.cr6.eq) goto loc_8230A180;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16996
	ctx.r4.s64 = ctx.r11.s64 + -16996;
	// bl 0x82333168
	ctx.lr = 0x8230A4B8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a53c
	if (ctx.cr6.eq) goto loc_8230A53C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8230e150
	ctx.lr = 0x8230A4C8;
	sub_8230E150(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8230A4D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230a504
	if (!ctx.cr6.lt) goto loc_8230A504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// bl 0x8230e200
	ctx.lr = 0x8230A500;
	sub_8230E200(ctx, base);
	// b 0x8230a4d0
	goto loc_8230A4D0;
loc_8230A504:
	// bl 0x8230e288
	ctx.lr = 0x8230A508;
	sub_8230E288(ctx, base);
loc_8230A508:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230a180
	if (!ctx.cr6.lt) goto loc_8230A180;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// bl 0x8230e338
	ctx.lr = 0x8230A538;
	sub_8230E338(ctx, base);
	// b 0x8230a508
	goto loc_8230A508;
loc_8230A53C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16968
	ctx.r4.s64 = ctx.r11.s64 + -16968;
	// bl 0x82333168
	ctx.lr = 0x8230A54C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a644
	if (ctx.cr6.eq) goto loc_8230A644;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230A564;
	sub_823335A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a620
	if (ctx.cr6.eq) goto loc_8230A620;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a620
	if (!ctx.cr6.gt) goto loc_8230A620;
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14956
	ctx.r4.s64 = ctx.r11.s64 + -14956;
	// bl 0x82cb0328
	ctx.lr = 0x8230A590;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230a600
	if (ctx.cr6.eq) goto loc_8230A600;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16948
	ctx.r4.s64 = ctx.r11.s64 + -16948;
	// bl 0x82cb0328
	ctx.lr = 0x8230A5A8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230a600
	if (ctx.cr6.eq) goto loc_8230A600;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16936
	ctx.r4.s64 = ctx.r11.s64 + -16936;
	// bl 0x82cb0328
	ctx.lr = 0x8230A5C0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230a5e0
	if (ctx.cr6.eq) goto loc_8230A5E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16932
	ctx.r4.s64 = ctx.r11.s64 + -16932;
	// bl 0x82cb0328
	ctx.lr = 0x8230A5D8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a630
	if (!ctx.cr6.eq) goto loc_8230A630;
loc_8230A5E0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// bl 0x82299080
	ctx.lr = 0x8230A5F4;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A600:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// bl 0x82299080
	ctx.lr = 0x8230A614;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A620:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,15,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFDFFFF) | (ctx.r10.u64 & 0x20000);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_8230A630:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230A638;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A644:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16920
	ctx.r4.s64 = ctx.r11.s64 + -16920;
	// bl 0x82333168
	ctx.lr = 0x8230A654;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a74c
	if (ctx.cr6.eq) goto loc_8230A74C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230A66C;
	sub_823335A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a728
	if (ctx.cr6.eq) goto loc_8230A728;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a728
	if (!ctx.cr6.gt) goto loc_8230A728;
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14956
	ctx.r4.s64 = ctx.r11.s64 + -14956;
	// bl 0x82cb0328
	ctx.lr = 0x8230A698;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230a708
	if (ctx.cr6.eq) goto loc_8230A708;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16948
	ctx.r4.s64 = ctx.r11.s64 + -16948;
	// bl 0x82cb0328
	ctx.lr = 0x8230A6B0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230a708
	if (ctx.cr6.eq) goto loc_8230A708;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16936
	ctx.r4.s64 = ctx.r11.s64 + -16936;
	// bl 0x82cb0328
	ctx.lr = 0x8230A6C8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230a6e8
	if (ctx.cr6.eq) goto loc_8230A6E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16932
	ctx.r4.s64 = ctx.r11.s64 + -16932;
	// bl 0x82cb0328
	ctx.lr = 0x8230A6E0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a738
	if (!ctx.cr6.eq) goto loc_8230A738;
loc_8230A6E8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// bl 0x82299080
	ctx.lr = 0x8230A6FC;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A708:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// bl 0x82299080
	ctx.lr = 0x8230A71C;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A728:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,16,14
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r10.u64 & 0x10000);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_8230A738:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230A740;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A74C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16896
	ctx.r4.s64 = ctx.r11.s64 + -16896;
	// bl 0x82333168
	ctx.lr = 0x8230A75C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a828
	if (ctx.cr6.eq) goto loc_8230A828;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230A774;
	sub_823335A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a814
	if (ctx.cr6.eq) goto loc_8230A814;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a814
	if (!ctx.cr6.gt) goto loc_8230A814;
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16936
	ctx.r4.s64 = ctx.r11.s64 + -16936;
	// bl 0x82cb0328
	ctx.lr = 0x8230A7A0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a7c0
	if (!ctx.cr6.eq) goto loc_8230A7C0;
	// stw r26,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r26.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230A7B4;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A7C0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14956
	ctx.r4.s64 = ctx.r11.s64 + -14956;
	// bl 0x82cb0328
	ctx.lr = 0x8230A7D0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a7f4
	if (!ctx.cr6.eq) goto loc_8230A7F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x8230A7E8;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A7F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16868
	ctx.r4.s64 = ctx.r11.s64 + -16868;
	// bl 0x82cb0328
	ctx.lr = 0x8230A804;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a814
	if (!ctx.cr6.eq) goto loc_8230A814;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r11.u32);
loc_8230A814:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230A81C;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A828:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16800
	ctx.r4.s64 = ctx.r11.s64 + -16800;
	// bl 0x82333168
	ctx.lr = 0x8230A838;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a86c
	if (ctx.cr6.eq) goto loc_8230A86C;
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82cb2640
	ctx.lr = 0x8230A848;
	sub_82CB2640(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8230a180
	if (!ctx.cr6.gt) goto loc_8230A180;
	// stfs f0,820(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 820, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A86C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16772
	ctx.r4.s64 = ctx.r11.s64 + -16772;
	// bl 0x82333168
	ctx.lr = 0x8230A87C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a8b0
	if (ctx.cr6.eq) goto loc_8230A8B0;
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82cb2640
	ctx.lr = 0x8230A88C;
	sub_82CB2640(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8230a180
	if (ctx.cr6.lt) goto loc_8230A180;
	// stfs f0,824(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 824, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A8B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16740
	ctx.r4.s64 = ctx.r11.s64 + -16740;
	// bl 0x82333168
	ctx.lr = 0x8230A8C0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a8e8
	if (ctx.cr6.eq) goto loc_8230A8E8;
	// lwz r11,-60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -60);
	// addi r3,r29,-60
	ctx.r3.s64 = ctx.r29.s64 + -60;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230A8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A8E8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16712
	ctx.r4.s64 = ctx.r11.s64 + -16712;
	// bl 0x82333168
	ctx.lr = 0x8230A8F8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a920
	if (ctx.cr6.eq) goto loc_8230A920;
	// lwz r11,-60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -60);
	// addi r3,r29,-60
	ctx.r3.s64 = ctx.r29.s64 + -60;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230A914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230A920:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16684
	ctx.r4.s64 = ctx.r11.s64 + -16684;
	// bl 0x82333168
	ctx.lr = 0x8230A930;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230aa2c
	if (ctx.cr6.eq) goto loc_8230AA2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823335a8
	ctx.lr = 0x8230A948;
	sub_823335A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823335a8
	ctx.lr = 0x8230A958;
	sub_823335A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230A968;
	sub_823335A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a998
	if (ctx.cr6.eq) goto loc_8230A998;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a998
	if (!ctx.cr6.gt) goto loc_8230A998;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82cb2640
	ctx.lr = 0x8230A98C;
	sub_82CB2640(ctx, base);
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x8230a9a0
	goto loc_8230A9A0;
loc_8230A998:
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lfs f0,508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	ctx.f0.f64 = double(temp.f32);
loc_8230A9A0:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f0,508(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230a9d0
	if (ctx.cr6.eq) goto loc_8230A9D0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230a9d0
	if (!ctx.cr6.gt) goto loc_8230A9D0;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82cb2640
	ctx.lr = 0x8230A9C4;
	sub_82CB2640(ctx, base);
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x8230a9d4
	goto loc_8230A9D4;
loc_8230A9D0:
	// lfs f0,512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
loc_8230A9D4:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f0,512(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 512, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230aa14
	if (ctx.cr6.eq) goto loc_8230AA14;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230aa14
	if (!ctx.cr6.gt) goto loc_8230AA14;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82cb2640
	ctx.lr = 0x8230A9F8;
	sub_82CB2640(ctx, base);
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,516(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 516, temp.u32);
	// bl 0x82299080
	ctx.lr = 0x8230AA0C;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8230a174
	goto loc_8230A174;
loc_8230AA14:
	// lfs f0,516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,516(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 516, temp.u32);
	// bl 0x82299080
	ctx.lr = 0x8230AA24;
	sub_82299080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8230a174
	goto loc_8230A174;
loc_8230AA2C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16652
	ctx.r4.s64 = ctx.r11.s64 + -16652;
	// bl 0x82333168
	ctx.lr = 0x8230AA3C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ab84
	if (ctx.cr6.eq) goto loc_8230AB84;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230AA54;
	sub_823335A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230aaa0
	if (ctx.cr6.eq) goto loc_8230AAA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230aaa0
	if (!ctx.cr6.gt) goto loc_8230AAA0;
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16616
	ctx.r4.s64 = ctx.r11.s64 + -16616;
	// bl 0x82cb0328
	ctx.lr = 0x8230AA80;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230aab4
	if (!ctx.cr6.eq) goto loc_8230AAB4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,3,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFDFFFFFFF) | (ctx.r9.u64 & 0x20000000);
loc_8230AA9C:
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
loc_8230AAA0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230AAA8;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AAB4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16584
	ctx.r4.s64 = ctx.r11.s64 + -16584;
	// bl 0x82cb0328
	ctx.lr = 0x8230AAC4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230aae4
	if (!ctx.cr6.eq) goto loc_8230AAE4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,2,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFBFFFFFFF) | (ctx.r9.u64 & 0x40000000);
	// b 0x8230aa9c
	goto loc_8230AA9C;
loc_8230AAE4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16560
	ctx.r4.s64 = ctx.r11.s64 + -16560;
	// bl 0x82cb0328
	ctx.lr = 0x8230AAF4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230a630
	if (!ctx.cr6.eq) goto loc_8230A630;
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82cb2640
	ctx.lr = 0x8230AB04;
	sub_82CB2640(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8230aaa0
	if (!ctx.cr6.gt) goto loc_8230AAA0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230ab6c
	if (ctx.cr6.eq) goto loc_8230AB6C;
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230ab54
	if (ctx.cr6.eq) goto loc_8230AB54;
	// stfs f0,496(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230AB48;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AB54:
	// stfs f0,500(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230AB60;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AB6C:
	// stfs f0,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230AB78;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AB84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16252
	ctx.r4.s64 = ctx.r11.s64 + -16252;
	// bl 0x82333168
	ctx.lr = 0x8230AB94;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230abc0
	if (ctx.cr6.eq) goto loc_8230ABC0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,17,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r9.u64 & 0x8000);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230ABC0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16204
	ctx.r4.s64 = ctx.r11.s64 + -16204;
	// bl 0x82333168
	ctx.lr = 0x8230ABD0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ac80
	if (ctx.cr6.eq) goto loc_8230AC80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// bl 0x8230e3c0
	ctx.lr = 0x8230ABEC;
	sub_8230E3C0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
loc_8230ABF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230ac58
	if (!ctx.cr6.lt) goto loc_8230AC58;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8230AC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ac4c
	if (!ctx.cr6.eq) goto loc_8230AC4C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82294eb0
	ctx.lr = 0x8230AC38;
	sub_82294EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ac4c
	if (ctx.cr6.eq) goto loc_8230AC4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8229bd90
	ctx.lr = 0x8230AC4C;
	sub_8229BD90(ctx, base);
loc_8230AC4C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8230e470
	ctx.lr = 0x8230AC54;
	sub_8230E470(ctx, base);
	// b 0x8230abf4
	goto loc_8230ABF4;
loc_8230AC58:
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8230ac6c
	if (ctx.cr6.eq) goto loc_8230AC6C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8230ecc8
	ctx.lr = 0x8230AC6C;
	sub_8230ECC8(ctx, base);
loc_8230AC6C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295e20
	ctx.lr = 0x8230AC74;
	sub_82295E20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AC80:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16144
	ctx.r4.s64 = ctx.r11.s64 + -16144;
	// bl 0x82333168
	ctx.lr = 0x8230AC90;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ad34
	if (ctx.cr6.eq) goto loc_8230AD34;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823335a8
	ctx.lr = 0x8230ACA8;
	sub_823335A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ad14
	if (ctx.cr6.eq) goto loc_8230AD14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230ad14
	if (!ctx.cr6.gt) goto loc_8230AD14;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82cb2688
	ctx.lr = 0x8230ACC8;
	sub_82CB2688(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x8230ad14
	if (ctx.cr6.lt) goto loc_8230AD14;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x8230acf4
	if (!ctx.cr6.lt) goto loc_8230ACF4;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// stw r3,21944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21944, ctx.r3.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8230ACE8;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230ACF4:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,21944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21944, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x8230AD08;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AD14:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,21944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21944, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x8230AD28;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AD34:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16112
	ctx.r4.s64 = ctx.r11.s64 + -16112;
	// bl 0x82333168
	ctx.lr = 0x8230AD44;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ae18
	if (ctx.cr6.eq) goto loc_8230AE18;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r11,28848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a180
	if (ctx.cr6.eq) goto loc_8230A180;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823335a8
	ctx.lr = 0x8230AD6C;
	sub_823335A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ad84
	if (ctx.cr6.eq) goto loc_8230AD84;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230ad98
	if (!ctx.cr6.eq) goto loc_8230AD98;
loc_8230AD84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16092
	ctx.r4.s64 = ctx.r11.s64 + -16092;
	// bl 0x822b2a20
	ctx.lr = 0x8230AD94;
	sub_822B2A20(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_8230AD98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ada8
	if (ctx.cr6.eq) goto loc_8230ADA8;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x8230adb0
	goto loc_8230ADB0;
loc_8230ADA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_8230ADB0:
	// lwz r3,28848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28848);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230ADCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28848);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8230ADE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28848);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,-15120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230AE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x8230AE0C;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8230AE18:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-16068
	ctx.r4.s64 = ctx.r11.s64 + -16068;
	// bl 0x82333168
	ctx.lr = 0x8230AE28;
	sub_82333168(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230AE3C"))) PPC_WEAK_FUNC(sub_8230AE3C);
PPC_FUNC_IMPL(__imp__sub_8230AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230AE40"))) PPC_WEAK_FUNC(sub_8230AE40);
PPC_FUNC_IMPL(__imp__sub_8230AE40) {
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
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822960c0
	ctx.lr = 0x8230AE5C;
	sub_822960C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82bea278
	ctx.lr = 0x8230AE6C;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-3832(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3832);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8230AEAC"))) PPC_WEAK_FUNC(sub_8230AEAC);
PPC_FUNC_IMPL(__imp__sub_8230AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230AEB0"))) PPC_WEAK_FUNC(sub_8230AEB0);
PPC_FUNC_IMPL(__imp__sub_8230AEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230AEB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82294bb8
	ctx.lr = 0x8230AECC;
	sub_82294BB8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// bl 0x82bea278
	ctx.lr = 0x8230AEDC;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// beq cr6,0x8230af28
	if (ctx.cr6.eq) goto loc_8230AF28;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8230AF28;
	sub_82294520(ctx, base);
loc_8230AF28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230AF30;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230AF3C"))) PPC_WEAK_FUNC(sub_8230AF3C);
PPC_FUNC_IMPL(__imp__sub_8230AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230AF40"))) PPC_WEAK_FUNC(sub_8230AF40);
PPC_FUNC_IMPL(__imp__sub_8230AF40) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230afc4
	if (!ctx.cr6.eq) goto loc_8230AFC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82bea278
	ctx.lr = 0x8230AF70;
	sub_82BEA278(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,-3832(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3832);
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// fsub f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 - ctx.f11.f64;
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
loc_8230AFC4:
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

__attribute__((alias("__imp__sub_8230AFD8"))) PPC_WEAK_FUNC(sub_8230AFD8);
PPC_FUNC_IMPL(__imp__sub_8230AFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8230af40
	ctx.lr = 0x8230AFF4;
	sub_8230AF40(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230b020
	if (ctx.cr6.eq) goto loc_8230B020;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8230B020;
	sub_82294520(ctx, base);
loc_8230B020:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8230B028;
	sub_82294CC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230B03C"))) PPC_WEAK_FUNC(sub_8230B03C);
PPC_FUNC_IMPL(__imp__sub_8230B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230B040"))) PPC_WEAK_FUNC(sub_8230B040);
PPC_FUNC_IMPL(__imp__sub_8230B040) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230B048"))) PPC_WEAK_FUNC(sub_8230B048);
PPC_FUNC_IMPL(__imp__sub_8230B048) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230B050"))) PPC_WEAK_FUNC(sub_8230B050);
PPC_FUNC_IMPL(__imp__sub_8230B050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,32088
	ctx.r11.s64 = ctx.r11.s64 + 32088;
	// lfs f0,1004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,31564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31564);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b0bc
	if (!ctx.cr6.lt) goto loc_8230B0BC;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r9,r10,-22504
	ctx.r9.s64 = ctx.r10.s64 + -22504;
	// lwz r11,-22504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22504);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,-22504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22504, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// blr 
	return;
loc_8230B0BC:
	// lfs f13,-14608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14608);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b0ec
	if (!ctx.cr6.lt) goto loc_8230B0EC;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfd f0,16(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_8230B0EC:
	// lfs f13,-280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -280);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b13c
	if (!ctx.cr6.lt) goto loc_8230B13C;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// blr 
	return;
loc_8230B13C:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lfs f13,-26236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b170
	if (!ctx.cr6.lt) goto loc_8230B170;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lfd f0,40(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// blr 
	return;
loc_8230B170:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,-18072(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18072);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b1c4
	if (!ctx.cr6.lt) goto loc_8230B1C4;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r7,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r7.u32);
	// stw r6,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r6.u32);
	// blr 
	return;
loc_8230B1C4:
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lfs f13,-14276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b1f8
	if (!ctx.cr6.lt) goto loc_8230B1F8;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lfd f0,64(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 64);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,64(r10)
	PPC_STORE_U64(ctx.r10.u32 + 64, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// blr 
	return;
loc_8230B1F8:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,-18076(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18076);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b24c
	if (!ctx.cr6.lt) goto loc_8230B24C;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r7.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r6,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r6.u32);
	// blr 
	return;
loc_8230B24C:
	// lfs f13,4472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b27c
	if (!ctx.cr6.lt) goto loc_8230B27C;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lfd f0,88(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 88);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,88(r10)
	PPC_STORE_U64(ctx.r10.u32 + 88, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// blr 
	return;
loc_8230B27C:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,-18112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b2d0
	if (!ctx.cr6.lt) goto loc_8230B2D0;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r7,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r7.u32);
	// stw r6,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r6.u32);
	// blr 
	return;
loc_8230B2D0:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b300
	if (!ctx.cr6.lt) goto loc_8230B300;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lfd f0,112(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 112);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,112(r10)
	PPC_STORE_U64(ctx.r10.u32 + 112, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
loc_8230B300:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18080);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230b354
	if (!ctx.cr6.lt) goto loc_8230B354;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r8,128(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r7,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r7.u32);
	// stw r6,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r6.u32);
	// blr 
	return;
loc_8230B354:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18312);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r10,r11,-22504
	ctx.r10.s64 = ctx.r11.s64 + -22504;
	// bge cr6,0x8230b388
	if (!ctx.cr6.lt) goto loc_8230B388;
	// lwz r11,132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lfd f0,136(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 136);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,136(r10)
	PPC_STORE_U64(ctx.r10.u32 + 136, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r11.u32);
	// blr 
	return;
loc_8230B388:
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r8,152(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// lwz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// stw r7,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r7.u32);
	// stw r6,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230B3C4"))) PPC_WEAK_FUNC(sub_8230B3C4);
PPC_FUNC_IMPL(__imp__sub_8230B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230B3C8"))) PPC_WEAK_FUNC(sub_8230B3C8);
PPC_FUNC_IMPL(__imp__sub_8230B3C8) {
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
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r11,r11,-22504
	ctx.r11.s64 = ctx.r11.s64 + -22504;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f0,-18344(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18344);
loc_8230B3F0:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x8230b3f0
	if (!ctx.cr0.eq) goto loc_8230B3F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x8230B41C;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,-22328(r10)
	PPC_STORE_U64(ctx.r10.u32 + -22328, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230B448"))) PPC_WEAK_FUNC(sub_8230B448);
PPC_FUNC_IMPL(__imp__sub_8230B448) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r4,-31264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230b47c
	if (ctx.cr6.eq) goto loc_8230B47C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82421d28
	ctx.lr = 0x8230B478;
	sub_82421D28(ctx, base);
	// b 0x8230b490
	goto loc_8230B490;
loc_8230B47C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x822960c0
	ctx.lr = 0x8230B490;
	sub_822960C0(ctx, base);
loc_8230B490:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294bb8
	ctx.lr = 0x8230B49C;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b4b4
	if (ctx.cr6.eq) goto loc_8230B4B4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x8230B4B4;
	sub_82299080(ctx, base);
loc_8230B4B4:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b4c8
	if (ctx.cr6.eq) goto loc_8230B4C8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8230B4C8;
	sub_82299080(ctx, base);
loc_8230B4C8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b518
	if (ctx.cr6.eq) goto loc_8230B518;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230b548
	if (ctx.cr6.eq) goto loc_8230B548;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230b4f8
	if (!ctx.cr6.eq) goto loc_8230B4F8;
	// bl 0x822900a0
	ctx.lr = 0x8230B4F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230B4F8:
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
	ctx.lr = 0x8230B514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230B518:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230b548
	if (ctx.cr6.eq) goto loc_8230B548;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230b534
	if (!ctx.cr6.eq) goto loc_8230B534;
	// bl 0x822900a0
	ctx.lr = 0x8230B530;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230B534:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230B548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230B548:
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

__attribute__((alias("__imp__sub_8230B560"))) PPC_WEAK_FUNC(sub_8230B560);
PPC_FUNC_IMPL(__imp__sub_8230B560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230B568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r31,r11,-16032
	ctx.r31.s64 = ctx.r11.s64 + -16032;
	// lis r29,0
	ctx.r29.s64 = 0;
	// addi r3,r10,25392
	ctx.r3.s64 = ctx.r10.s64 + 25392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r29,r29,52924
	ctx.r29.u64 = ctx.r29.u64 | 52924;
	// bl 0x8232f858
	ctx.lr = 0x8230B58C;
	sub_8232F858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230b5b4
	if (ctx.cr6.eq) goto loc_8230B5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8230B5A0;
	sub_82CB0EC8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb2688
	ctx.lr = 0x8230B5AC;
	sub_82CB2688(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230b5b8
	if (!ctx.cr6.eq) goto loc_8230B5B8;
loc_8230B5B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8230B5B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230B5C0"))) PPC_WEAK_FUNC(sub_8230B5C0);
PPC_FUNC_IMPL(__imp__sub_8230B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8230B5C8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ae4
	ctx.lr = 0x8230B5D0;
	__savefpr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,-31264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230b604
	if (ctx.cr6.eq) goto loc_8230B604;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82421d28
	ctx.lr = 0x8230B600;
	sub_82421D28(ctx, base);
	// b 0x8230b618
	goto loc_8230B618;
loc_8230B604:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x822960c0
	ctx.lr = 0x8230B618;
	sub_822960C0(ctx, base);
loc_8230B618:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82294bb8
	ctx.lr = 0x8230B624;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b63c
	if (ctx.cr6.eq) goto loc_8230B63C;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x8230B63C;
	sub_82299080(ctx, base);
loc_8230B63C:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b650
	if (ctx.cr6.eq) goto loc_8230B650;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82299080
	ctx.lr = 0x8230B650;
	sub_82299080(ctx, base);
loc_8230B650:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r11,-23856
	ctx.r5.s64 = ctx.r11.s64 + -23856;
	// addi r4,r10,-12472
	ctx.r4.s64 = ctx.r10.s64 + -12472;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8232e868
	ctx.lr = 0x8230B668;
	sub_8232E868(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-15964
	ctx.r5.s64 = ctx.r9.s64 + -15964;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r31,r8,-19588
	ctx.r31.s64 = ctx.r8.s64 + -19588;
	// bl 0x82295ff0
	ctx.lr = 0x8230B684;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x8230B694;
	sub_82295FF0(ctx, base);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8230b6b8
	if (ctx.cr6.eq) goto loc_8230B6B8;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82294520
	ctx.lr = 0x8230B6B8;
	sub_82294520(ctx, base);
loc_8230B6B8:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82294cc8
	ctx.lr = 0x8230B6C0;
	sub_82294CC8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b6e4
	if (ctx.cr6.eq) goto loc_8230B6E4;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294520
	ctx.lr = 0x8230B6E4;
	sub_82294520(ctx, base);
loc_8230B6E4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294cc8
	ctx.lr = 0x8230B6EC;
	sub_82294CC8(ctx, base);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r24,200(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bne cr6,0x8230b70c
	if (!ctx.cr6.eq) goto loc_8230B70C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8230B70C:
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230B728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r29,r9,-15952
	ctx.r29.s64 = ctx.r9.s64 + -15952;
	// bl 0x822952c8
	ctx.lr = 0x8230B740;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82295ff0
	ctx.lr = 0x8230B750;
	sub_82295FF0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8230b764
	if (ctx.cr6.eq) goto loc_8230B764;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8230b768
	goto loc_8230B768;
loc_8230B764:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8230B768:
	// lwz r3,28892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28892);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r6,r11,-20648
	ctx.r6.s64 = ctx.r11.s64 + -20648;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8230B788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8230b7b0
	if (ctx.cr6.eq) goto loc_8230B7B0;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294520
	ctx.lr = 0x8230B7B0;
	sub_82294520(ctx, base);
loc_8230B7B0:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294cc8
	ctx.lr = 0x8230B7B8;
	sub_82294CC8(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b7dc
	if (ctx.cr6.eq) goto loc_8230B7DC;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294520
	ctx.lr = 0x8230B7DC;
	sub_82294520(ctx, base);
loc_8230B7DC:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294cc8
	ctx.lr = 0x8230B7E4;
	sub_82294CC8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230b980
	if (ctx.cr6.eq) goto loc_8230B980;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822bca50
	ctx.lr = 0x8230B7F4;
	sub_822BCA50(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b804
	if (ctx.cr6.eq) goto loc_8230B804;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8230B804:
	// bl 0x8230b560
	ctx.lr = 0x8230B808;
	sub_8230B560(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,-15936
	ctx.r4.s64 = ctx.r11.s64 + -15936;
	// li r6,3004
	ctx.r6.s64 = 3004;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bfbc8
	ctx.lr = 0x8230B824;
	sub_823BFBC8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82299080
	ctx.lr = 0x8230B82C;
	sub_82299080(ctx, base);
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f28,32548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32548);
	ctx.f28.f64 = double(temp.f32);
	// addi r31,r11,-22504
	ctx.r31.s64 = ctx.r11.s64 + -22504;
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r28,13
	ctx.r28.s64 = 13;
	// lfd f29,-16600(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16600);
	// addi r26,r11,-15808
	ctx.r26.s64 = ctx.r11.s64 + -15808;
loc_8230B868:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r29,2700
	ctx.r10.s64 = ctx.r29.s64 + 2700;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r30,5
	ctx.r6.s64 = ctx.r30.s64 + 5;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,2712
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2712, ctx.xer);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmul f10,f0,f29
	ctx.f10.f64 = ctx.f0.f64 * ctx.f29.f64;
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fdiv f8,f10,f31
	ctx.f8.f64 = ctx.f10.f64 / ctx.f31.f64;
	// fdivs f2,f9,f30
	ctx.f2.f64 = double(float(ctx.f9.f64 / ctx.f30.f64));
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// bne cr6,0x8230b8bc
	if (!ctx.cr6.eq) goto loc_8230B8BC;
	// li r6,99
	ctx.r6.s64 = 99;
loc_8230B8BC:
	// stfd f2,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bfbc8
	ctx.lr = 0x8230B8DC;
	sub_823BFBC8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// bne 0x8230b868
	if (!ctx.cr0.eq) goto loc_8230B868;
	// fsubs f13,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fdivs f3,f30,f31
	ctx.f3.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r8,-15712
	ctx.r4.s64 = ctx.r8.s64 + -15712;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r11,r7,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// rlwinm r10,r7,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// or r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f11,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f2,f11,f0,f13
	ctx.f2.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x823bfbc8
	ctx.lr = 0x8230B958;
	sub_823BFBC8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r6,-15528
	ctx.r4.s64 = ctx.r6.s64 + -15528;
	// bl 0x823bfbc8
	ctx.lr = 0x8230B968;
	sub_823BFBC8(ctx, base);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230B980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230B980:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b9cc
	if (ctx.cr6.eq) goto loc_8230B9CC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8230b9fc
	if (ctx.cr6.eq) goto loc_8230B9FC;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230b9ac
	if (!ctx.cr6.eq) goto loc_8230B9AC;
	// bl 0x822900a0
	ctx.lr = 0x8230B9A8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230B9AC:
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
	ctx.lr = 0x8230B9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8230B9CC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8230b9fc
	if (ctx.cr6.eq) goto loc_8230B9FC;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230b9e8
	if (!ctx.cr6.eq) goto loc_8230B9E8;
	// bl 0x822900a0
	ctx.lr = 0x8230B9E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230B9E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230B9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230B9FC:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r30,216(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ba48
	if (ctx.cr6.eq) goto loc_8230BA48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230ba78
	if (ctx.cr6.eq) goto loc_8230BA78;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ba28
	if (!ctx.cr6.eq) goto loc_8230BA28;
	// bl 0x822900a0
	ctx.lr = 0x8230BA24;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230BA28:
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
	ctx.lr = 0x8230BA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230BA48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230ba78
	if (ctx.cr6.eq) goto loc_8230BA78;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ba64
	if (!ctx.cr6.eq) goto loc_8230BA64;
	// bl 0x822900a0
	ctx.lr = 0x8230BA60;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230BA64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230BA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230BA78:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b30
	ctx.lr = 0x8230BA84;
	__restfpr_27(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230BA88"))) PPC_WEAK_FUNC(sub_8230BA88);
PPC_FUNC_IMPL(__imp__sub_8230BA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x8230BA90;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6ae0
	ctx.lr = 0x8230BA98;
	__savefpr_26(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r4,-31264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230bacc
	if (ctx.cr6.eq) goto loc_8230BACC;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82421d28
	ctx.lr = 0x8230BAC8;
	sub_82421D28(ctx, base);
	// b 0x8230bae0
	goto loc_8230BAE0;
loc_8230BACC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x822960c0
	ctx.lr = 0x8230BAE0;
	sub_822960C0(ctx, base);
loc_8230BAE0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82294bb8
	ctx.lr = 0x8230BAEC;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bb04
	if (ctx.cr6.eq) goto loc_8230BB04;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x8230BB04;
	sub_82299080(ctx, base);
loc_8230BB04:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bb1c
	if (ctx.cr6.eq) goto loc_8230BB1C;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82299080
	ctx.lr = 0x8230BB1C;
	sub_82299080(ctx, base);
loc_8230BB1C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r21,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// ori r10,r31,4
	ctx.r10.u64 = ctx.r31.u64 | 4;
	// stw r21,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r21.u32);
	// addi r30,r11,-12420
	ctx.r30.s64 = ctx.r11.s64 + -12420;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// stw r21,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r21.u32);
	// mr r16,r21
	ctx.r16.u64 = ctx.r21.u64;
	// stw r21,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r21.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// stw r15,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r15.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r16,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r16.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// ori r29,r10,8
	ctx.r29.u64 = ctx.r10.u64 | 8;
	// bl 0x822960c0
	ctx.lr = 0x8230BB68;
	sub_822960C0(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r5,r9,-15512
	ctx.r5.s64 = ctx.r9.s64 + -15512;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82295ff0
	ctx.lr = 0x8230BB7C;
	sub_82295FF0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r19,r11,11272
	ctx.r19.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x8230bb98
	if (ctx.cr6.eq) goto loc_8230BB98;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8230bb9c
	goto loc_8230BB9C;
loc_8230BB98:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8230BB9C:
	// lis r17,-31885
	ctx.r17.s64 = -2089615360;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r18,r11,-20648
	ctx.r18.s64 = ctx.r11.s64 + -20648;
	// lwz r3,28892(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28892);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230BBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230bbe8
	if (ctx.cr6.eq) goto loc_8230BBE8;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823348f0
	ctx.lr = 0x8230BBD8;
	sub_823348F0(ctx, base);
	// lwz r15,400(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x8230bbec
	if (!ctx.cr6.eq) goto loc_8230BBEC;
loc_8230BBE8:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_8230BBEC:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bc04
	if (ctx.cr6.eq) goto loc_8230BC04;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r29,r29,0,29,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82299080
	ctx.lr = 0x8230BC04;
	sub_82299080(ctx, base);
loc_8230BC04:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bc1c
	if (ctx.cr6.eq) goto loc_8230BC1C;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r29,r29,0,30,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82299080
	ctx.lr = 0x8230BC1C;
	sub_82299080(ctx, base);
loc_8230BC1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230bca4
	if (ctx.cr6.eq) goto loc_8230BCA4;
	// ori r11,r29,16
	ctx.r11.u64 = ctx.r29.u64 | 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r29,r11,32
	ctx.r29.u64 = ctx.r11.u64 | 32;
	// bl 0x822960c0
	ctx.lr = 0x8230BC38;
	sub_822960C0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r5,r10,-15452
	ctx.r5.s64 = ctx.r10.s64 + -15452;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82295ff0
	ctx.lr = 0x8230BC4C;
	sub_82295FF0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230bc60
	if (ctx.cr6.eq) goto loc_8230BC60;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8230bc64
	goto loc_8230BC64;
loc_8230BC60:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8230BC64:
	// lwz r3,28892(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28892);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230BC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230bca4
	if (ctx.cr6.eq) goto loc_8230BCA4;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823348f0
	ctx.lr = 0x8230BC94;
	sub_823348F0(ctx, base);
	// lwz r16,384(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x8230bca8
	if (!ctx.cr6.eq) goto loc_8230BCA8;
loc_8230BCA4:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_8230BCA8:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bcc0
	if (ctx.cr6.eq) goto loc_8230BCC0;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// rlwinm r29,r29,0,27,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82299080
	ctx.lr = 0x8230BCC0;
	sub_82299080(ctx, base);
loc_8230BCC0:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bcd8
	if (ctx.cr6.eq) goto loc_8230BCD8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r29,r29,0,28,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82299080
	ctx.lr = 0x8230BCD8;
	sub_82299080(ctx, base);
loc_8230BCD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230bd60
	if (ctx.cr6.eq) goto loc_8230BD60;
	// ori r11,r29,64
	ctx.r11.u64 = ctx.r29.u64 | 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r29,r11,128
	ctx.r29.u64 = ctx.r11.u64 | 128;
	// bl 0x822960c0
	ctx.lr = 0x8230BCF4;
	sub_822960C0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r5,r10,-15392
	ctx.r5.s64 = ctx.r10.s64 + -15392;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82295ff0
	ctx.lr = 0x8230BD08;
	sub_82295FF0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230bd1c
	if (ctx.cr6.eq) goto loc_8230BD1C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8230bd20
	goto loc_8230BD20;
loc_8230BD1C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8230BD20:
	// lwz r3,28892(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28892);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230BD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230bd60
	if (ctx.cr6.eq) goto loc_8230BD60;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823348f0
	ctx.lr = 0x8230BD50;
	sub_823348F0(ctx, base);
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x8230bd64
	if (!ctx.cr6.eq) goto loc_8230BD64;
loc_8230BD60:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_8230BD64:
	// rlwinm r11,r29,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bd7c
	if (ctx.cr6.eq) goto loc_8230BD7C;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// rlwinm r29,r29,0,25,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82299080
	ctx.lr = 0x8230BD7C;
	sub_82299080(ctx, base);
loc_8230BD7C:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bd90
	if (ctx.cr6.eq) goto loc_8230BD90;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82299080
	ctx.lr = 0x8230BD90;
	sub_82299080(ctx, base);
loc_8230BD90:
	// lis r22,-31885
	ctx.r22.s64 = -2089615360;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230cff8
	if (ctx.cr6.eq) goto loc_8230CFF8;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-31886
	ctx.r9.s64 = -2089680896;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r11,r9,-22504
	ctx.r11.s64 = ctx.r9.s64 + -22504;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f27,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f27.f64 = double(temp.f32);
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lfd f28,-16600(r9)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16600);
	// li r25,13
	ctx.r25.s64 = 13;
	// addi r24,r11,-15320
	ctx.r24.s64 = ctx.r11.s64 + -15320;
	// addi r23,r10,-15344
	ctx.r23.s64 = ctx.r10.s64 + -15344;
loc_8230BDD8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r26,2700
	ctx.r10.s64 = ctx.r26.s64 + 2700;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r6,r28,5
	ctx.r6.s64 = ctx.r28.s64 + 5;
	// cmpwi cr6,r10,2712
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2712, ctx.xer);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fmul f13,f0,f28
	ctx.f13.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fdiv f12,f13,f30
	ctx.f12.f64 = ctx.f13.f64 / ctx.f30.f64;
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// bne cr6,0x8230be0c
	if (!ctx.cr6.eq) goto loc_8230BE0C;
	// li r6,99
	ctx.r6.s64 = 99;
loc_8230BE0C:
	// cmpwi cr6,r28,30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 30, ctx.xer);
	// blt cr6,0x8230be18
	if (ctx.cr6.lt) goto loc_8230BE18;
	// fadds f29,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
loc_8230BE18:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x8230BE28;
	sub_8232E868(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8232e868
	ctx.lr = 0x8230BE40;
	sub_8232E868(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8230be58
	if (!ctx.cr6.eq) goto loc_8230BE58;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8230BE58:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x8230be70
	if (!ctx.cr6.eq) goto loc_8230BE70;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_8230BE70:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8232e428
	ctx.lr = 0x8230BE80;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x8230BE8C;
	sub_82295908(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230bee8
	if (ctx.cr6.eq) goto loc_8230BEE8;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r21,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230bf24
	if (ctx.cr6.eq) goto loc_8230BF24;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230bec4
	if (!ctx.cr6.eq) goto loc_8230BEC4;
	// bl 0x822900a0
	ctx.lr = 0x8230BEC0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230BEC4:
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
	ctx.lr = 0x8230BEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// b 0x8230beec
	goto loc_8230BEEC;
loc_8230BEE8:
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_8230BEEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230bf24
	if (ctx.cr6.eq) goto loc_8230BF24;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230bf0c
	if (!ctx.cr6.eq) goto loc_8230BF0C;
	// bl 0x822900a0
	ctx.lr = 0x8230BF08;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230BF0C:
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
	ctx.lr = 0x8230BF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230BF24:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r21,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r21.u32);
	// stw r21,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// beq cr6,0x8230bf78
	if (ctx.cr6.eq) goto loc_8230BF78;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230bfa8
	if (ctx.cr6.eq) goto loc_8230BFA8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230bf58
	if (!ctx.cr6.eq) goto loc_8230BF58;
	// bl 0x822900a0
	ctx.lr = 0x8230BF54;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230BF58:
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
	ctx.lr = 0x8230BF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230BF78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230bfa8
	if (ctx.cr6.eq) goto loc_8230BFA8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230bf94
	if (!ctx.cr6.eq) goto loc_8230BF94;
	// bl 0x822900a0
	ctx.lr = 0x8230BF90;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230BF94:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230BFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230BFA8:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// stw r21,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// beq cr6,0x8230bffc
	if (ctx.cr6.eq) goto loc_8230BFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8230c02c
	if (ctx.cr6.eq) goto loc_8230C02C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230bfdc
	if (!ctx.cr6.eq) goto loc_8230BFDC;
	// bl 0x822900a0
	ctx.lr = 0x8230BFD8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230BFDC:
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
	ctx.lr = 0x8230BFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8230BFFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8230c02c
	if (ctx.cr6.eq) goto loc_8230C02C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c018
	if (!ctx.cr6.eq) goto loc_8230C018;
	// bl 0x822900a0
	ctx.lr = 0x8230C014;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C018:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C02C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// addi r28,r28,5
	ctx.r28.s64 = ctx.r28.s64 + 5;
	// bne 0x8230bdd8
	if (!ctx.cr0.eq) goto loc_8230BDD8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r31,r11,-16032
	ctx.r31.s64 = ctx.r11.s64 + -16032;
	// lis r29,0
	ctx.r29.s64 = 0;
	// addi r3,r10,25392
	ctx.r3.s64 = ctx.r10.s64 + 25392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r29,r29,52924
	ctx.r29.u64 = ctx.r29.u64 | 52924;
	// bl 0x8232f858
	ctx.lr = 0x8230C06C;
	sub_8232F858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c098
	if (ctx.cr6.eq) goto loc_8230C098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8230C080;
	sub_82CB0EC8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb2688
	ctx.lr = 0x8230C08C;
	sub_82CB2688(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230c098
	if (ctx.cr6.eq) goto loc_8230C098;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8230C098:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r28,r11,-15308
	ctx.r28.s64 = ctx.r11.s64 + -15308;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8232e868
	ctx.lr = 0x8230C0B0;
	sub_8232E868(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8230c0c8
	if (!ctx.cr6.eq) goto loc_8230C0C8;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8230C0C8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-15300
	ctx.r5.s64 = ctx.r11.s64 + -15300;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8232e428
	ctx.lr = 0x8230C0E0;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x8230C0EC;
	sub_82295908(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230c148
	if (ctx.cr6.eq) goto loc_8230C148;
	// stw r21,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c180
	if (ctx.cr6.eq) goto loc_8230C180;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c124
	if (!ctx.cr6.eq) goto loc_8230C124;
	// bl 0x822900a0
	ctx.lr = 0x8230C120;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C124:
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
	ctx.lr = 0x8230C144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
loc_8230C148:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c180
	if (ctx.cr6.eq) goto loc_8230C180;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c168
	if (!ctx.cr6.eq) goto loc_8230C168;
	// bl 0x822900a0
	ctx.lr = 0x8230C164;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C168:
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
	ctx.lr = 0x8230C180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C180:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// stw r21,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// beq cr6,0x8230c1d4
	if (ctx.cr6.eq) goto loc_8230C1D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c204
	if (ctx.cr6.eq) goto loc_8230C204;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c1b4
	if (!ctx.cr6.eq) goto loc_8230C1B4;
	// bl 0x822900a0
	ctx.lr = 0x8230C1B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C1B4:
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
	ctx.lr = 0x8230C1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230C1D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c204
	if (ctx.cr6.eq) goto loc_8230C204;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c1f0
	if (!ctx.cr6.eq) goto loc_8230C1F0;
	// bl 0x822900a0
	ctx.lr = 0x8230C1EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C1F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C204:
	// extsw r10,r20
	ctx.r10.s64 = ctx.r20.s32;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r29,r11,-15264
	ctx.r29.s64 = ctx.r11.s64 + -15264;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fdivs f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8232e868
	ctx.lr = 0x8230C238;
	sub_8232E868(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8230c250
	if (!ctx.cr6.eq) goto loc_8230C250;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8230C250:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-15252
	ctx.r5.s64 = ctx.r11.s64 + -15252;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8232e428
	ctx.lr = 0x8230C268;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x8230C274;
	sub_82295908(ctx, base);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230c2d0
	if (ctx.cr6.eq) goto loc_8230C2D0;
	// stw r21,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c308
	if (ctx.cr6.eq) goto loc_8230C308;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c2ac
	if (!ctx.cr6.eq) goto loc_8230C2AC;
	// bl 0x822900a0
	ctx.lr = 0x8230C2A8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C2AC:
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
	ctx.lr = 0x8230C2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
loc_8230C2D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c308
	if (ctx.cr6.eq) goto loc_8230C308;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c2f0
	if (!ctx.cr6.eq) goto loc_8230C2F0;
	// bl 0x822900a0
	ctx.lr = 0x8230C2EC;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C2F0:
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
	ctx.lr = 0x8230C308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C308:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r21.u32);
	// stw r21,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// beq cr6,0x8230c35c
	if (ctx.cr6.eq) goto loc_8230C35C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c38c
	if (ctx.cr6.eq) goto loc_8230C38C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c33c
	if (!ctx.cr6.eq) goto loc_8230C33C;
	// bl 0x822900a0
	ctx.lr = 0x8230C338;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C33C:
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
	ctx.lr = 0x8230C358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230C35C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c38c
	if (ctx.cr6.eq) goto loc_8230C38C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c378
	if (!ctx.cr6.eq) goto loc_8230C378;
	// bl 0x822900a0
	ctx.lr = 0x8230C374;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C378:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C38C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8232e868
	ctx.lr = 0x8230C3A4;
	sub_8232E868(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8230c3bc
	if (!ctx.cr6.eq) goto loc_8230C3BC;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8230C3BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-15224
	ctx.r5.s64 = ctx.r11.s64 + -15224;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8232e428
	ctx.lr = 0x8230C3D4;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x8230C3E0;
	sub_82295908(ctx, base);
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// stw r21,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230c43c
	if (ctx.cr6.eq) goto loc_8230C43C;
	// stw r21,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c474
	if (ctx.cr6.eq) goto loc_8230C474;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c418
	if (!ctx.cr6.eq) goto loc_8230C418;
	// bl 0x822900a0
	ctx.lr = 0x8230C414;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C418:
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
	ctx.lr = 0x8230C438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
loc_8230C43C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c474
	if (ctx.cr6.eq) goto loc_8230C474;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c45c
	if (!ctx.cr6.eq) goto loc_8230C45C;
	// bl 0x822900a0
	ctx.lr = 0x8230C458;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C45C:
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
	ctx.lr = 0x8230C474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C474:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r21.u32);
	// stw r21,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r21.u32);
	// beq cr6,0x8230c4c8
	if (ctx.cr6.eq) goto loc_8230C4C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c4f8
	if (ctx.cr6.eq) goto loc_8230C4F8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c4a8
	if (!ctx.cr6.eq) goto loc_8230C4A8;
	// bl 0x822900a0
	ctx.lr = 0x8230C4A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C4A8:
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
	ctx.lr = 0x8230C4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230C4C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c4f8
	if (ctx.cr6.eq) goto loc_8230C4F8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c4e4
	if (!ctx.cr6.eq) goto loc_8230C4E4;
	// bl 0x822900a0
	ctx.lr = 0x8230C4E0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C4E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C4F8:
	// fsubs f0,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
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
	// lfsx f12,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f1,f12,f27,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f27.f64 : ctx.f0.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8232e868
	ctx.lr = 0x8230C538;
	sub_8232E868(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8230c550
	if (!ctx.cr6.eq) goto loc_8230C550;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8230C550:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-15184
	ctx.r5.s64 = ctx.r11.s64 + -15184;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8232e428
	ctx.lr = 0x8230C568;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x8230C574;
	sub_82295908(ctx, base);
	// lwz r10,344(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r21,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230c5d0
	if (ctx.cr6.eq) goto loc_8230C5D0;
	// stw r21,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c608
	if (ctx.cr6.eq) goto loc_8230C608;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c5ac
	if (!ctx.cr6.eq) goto loc_8230C5AC;
	// bl 0x822900a0
	ctx.lr = 0x8230C5A8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C5AC:
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
	ctx.lr = 0x8230C5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
loc_8230C5D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c608
	if (ctx.cr6.eq) goto loc_8230C608;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c5f0
	if (!ctx.cr6.eq) goto loc_8230C5F0;
	// bl 0x822900a0
	ctx.lr = 0x8230C5EC;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C5F0:
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
	ctx.lr = 0x8230C608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C608:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r21.u32);
	// stw r21,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r21.u32);
	// beq cr6,0x8230c65c
	if (ctx.cr6.eq) goto loc_8230C65C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c68c
	if (ctx.cr6.eq) goto loc_8230C68C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c63c
	if (!ctx.cr6.eq) goto loc_8230C63C;
	// bl 0x822900a0
	ctx.lr = 0x8230C638;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C63C:
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
	ctx.lr = 0x8230C658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230C65C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c68c
	if (ctx.cr6.eq) goto loc_8230C68C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c678
	if (!ctx.cr6.eq) goto loc_8230C678;
	// bl 0x822900a0
	ctx.lr = 0x8230C674;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C678:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C68C:
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x8230C6A4;
	sub_8232E868(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8230c6bc
	if (!ctx.cr6.eq) goto loc_8230C6BC;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8230C6BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-15136
	ctx.r5.s64 = ctx.r11.s64 + -15136;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8232e428
	ctx.lr = 0x8230C6D4;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x8230C6E0;
	sub_82295908(ctx, base);
	// lwz r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// stw r21,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230c73c
	if (ctx.cr6.eq) goto loc_8230C73C;
	// stw r21,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c774
	if (ctx.cr6.eq) goto loc_8230C774;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c718
	if (!ctx.cr6.eq) goto loc_8230C718;
	// bl 0x822900a0
	ctx.lr = 0x8230C714;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C718:
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
	ctx.lr = 0x8230C738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r3.u32);
loc_8230C73C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c774
	if (ctx.cr6.eq) goto loc_8230C774;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c75c
	if (!ctx.cr6.eq) goto loc_8230C75C;
	// bl 0x822900a0
	ctx.lr = 0x8230C758;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C75C:
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
	ctx.lr = 0x8230C774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C774:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r21.u32);
	// stw r21,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r21.u32);
	// beq cr6,0x8230c7c8
	if (ctx.cr6.eq) goto loc_8230C7C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c7f8
	if (ctx.cr6.eq) goto loc_8230C7F8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c7a8
	if (!ctx.cr6.eq) goto loc_8230C7A8;
	// bl 0x822900a0
	ctx.lr = 0x8230C7A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C7A8:
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
	ctx.lr = 0x8230C7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230C7C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c7f8
	if (ctx.cr6.eq) goto loc_8230C7F8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c7e4
	if (!ctx.cr6.eq) goto loc_8230C7E4;
	// bl 0x822900a0
	ctx.lr = 0x8230C7E0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C7E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C7F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232e868
	ctx.lr = 0x8230C808;
	sub_8232E868(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x8230c820
	if (!ctx.cr6.eq) goto loc_8230C820;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8230C820:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-15112
	ctx.r5.s64 = ctx.r11.s64 + -15112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8232e428
	ctx.lr = 0x8230C838;
	sub_8232E428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82295908
	ctx.lr = 0x8230C844;
	sub_82295908(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230c8a0
	if (ctx.cr6.eq) goto loc_8230C8A0;
	// stw r21,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c8d8
	if (ctx.cr6.eq) goto loc_8230C8D8;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c87c
	if (!ctx.cr6.eq) goto loc_8230C87C;
	// bl 0x822900a0
	ctx.lr = 0x8230C878;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C87C:
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
	ctx.lr = 0x8230C89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
loc_8230C8A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c8d8
	if (ctx.cr6.eq) goto loc_8230C8D8;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c8c0
	if (!ctx.cr6.eq) goto loc_8230C8C0;
	// bl 0x822900a0
	ctx.lr = 0x8230C8BC;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C8C0:
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
	ctx.lr = 0x8230C8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C8D8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r21.u32);
	// stw r21,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// beq cr6,0x8230c92c
	if (ctx.cr6.eq) goto loc_8230C92C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c95c
	if (ctx.cr6.eq) goto loc_8230C95C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c90c
	if (!ctx.cr6.eq) goto loc_8230C90C;
	// bl 0x822900a0
	ctx.lr = 0x8230C908;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C90C:
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
	ctx.lr = 0x8230C928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230C92C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c95c
	if (ctx.cr6.eq) goto loc_8230C95C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c948
	if (!ctx.cr6.eq) goto loc_8230C948;
	// bl 0x822900a0
	ctx.lr = 0x8230C944;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C948:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230C95C:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r11,-23856
	ctx.r5.s64 = ctx.r11.s64 + -23856;
	// addi r4,r10,-12472
	ctx.r4.s64 = ctx.r10.s64 + -12472;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8232e868
	ctx.lr = 0x8230C974;
	sub_8232E868(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,-15964
	ctx.r5.s64 = ctx.r9.s64 + -15964;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r31,r8,-19588
	ctx.r31.s64 = ctx.r8.s64 + -19588;
	// bl 0x82295ff0
	ctx.lr = 0x8230C990;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x8230C9A0;
	sub_82295FF0(ctx, base);
	// lwz r7,328(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8230c9fc
	if (ctx.cr6.eq) goto loc_8230C9FC;
	// stw r21,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ca34
	if (ctx.cr6.eq) goto loc_8230CA34;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c9d8
	if (!ctx.cr6.eq) goto loc_8230C9D8;
	// bl 0x822900a0
	ctx.lr = 0x8230C9D4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230C9D8:
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
	ctx.lr = 0x8230C9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
loc_8230C9FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ca34
	if (ctx.cr6.eq) goto loc_8230CA34;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230ca1c
	if (!ctx.cr6.eq) goto loc_8230CA1C;
	// bl 0x822900a0
	ctx.lr = 0x8230CA18;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CA1C:
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
	ctx.lr = 0x8230CA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230CA34:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r21,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r21.u32);
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// beq cr6,0x8230ca8c
	if (ctx.cr6.eq) goto loc_8230CA8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230cabc
	if (ctx.cr6.eq) goto loc_8230CABC;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ca6c
	if (!ctx.cr6.eq) goto loc_8230CA6C;
	// bl 0x822900a0
	ctx.lr = 0x8230CA68;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CA6C:
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
	ctx.lr = 0x8230CA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8230CA8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230cabc
	if (ctx.cr6.eq) goto loc_8230CABC;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230caa8
	if (!ctx.cr6.eq) goto loc_8230CAA8;
	// bl 0x822900a0
	ctx.lr = 0x8230CAA4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CAA8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230CABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230CABC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x8230cad4
	if (!ctx.cr6.eq) goto loc_8230CAD4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8230CAD4:
	// lwz r3,28892(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28892);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230CAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r31,r9,-15076
	ctx.r31.s64 = ctx.r9.s64 + -15076;
	// bl 0x822952c8
	ctx.lr = 0x8230CB04;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x8230CB14;
	sub_82295FF0(ctx, base);
	// lwz r8,296(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8230cb70
	if (ctx.cr6.eq) goto loc_8230CB70;
	// stw r21,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230cba8
	if (ctx.cr6.eq) goto loc_8230CBA8;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230cb4c
	if (!ctx.cr6.eq) goto loc_8230CB4C;
	// bl 0x822900a0
	ctx.lr = 0x8230CB48;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CB4C:
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
	ctx.lr = 0x8230CB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
loc_8230CB70:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230cba8
	if (ctx.cr6.eq) goto loc_8230CBA8;
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230cb90
	if (!ctx.cr6.eq) goto loc_8230CB90;
	// bl 0x822900a0
	ctx.lr = 0x8230CB8C;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CB90:
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
	ctx.lr = 0x8230CBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230CBA8:
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r21,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r21.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r21,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r21.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// bne cr6,0x8230cbd8
	if (!ctx.cr6.eq) goto loc_8230CBD8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8230CBD8:
	// lwz r3,28892(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28892);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230CBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230cde4
	if (ctx.cr6.eq) goto loc_8230CDE4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823348f0
	ctx.lr = 0x8230CC08;
	sub_823348F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230cde4
	if (ctx.cr6.eq) goto loc_8230CDE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-15064
	ctx.r4.s64 = ctx.r11.s64 + -15064;
	// bl 0x822960c0
	ctx.lr = 0x8230CC20;
	sub_822960C0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// stw r21,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r21.u32);
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// bne cr6,0x8230cc4c
	if (!ctx.cr6.eq) goto loc_8230CC4C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8230CC4C:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822960c0
	ctx.lr = 0x8230CC54;
	sub_822960C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8230f538
	ctx.lr = 0x8230CC6C;
	sub_8230F538(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r21,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cc90
	if (ctx.cr6.eq) goto loc_8230CC90;
	// stw r21,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82294520
	ctx.lr = 0x8230CC90;
	sub_82294520(ctx, base);
loc_8230CC90:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82294cc8
	ctx.lr = 0x8230CC98;
	sub_82294CC8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r28,r1,352
	ctx.r28.s64 = ctx.r1.s64 + 352;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// bl 0x822952c8
	ctx.lr = 0x8230CCB0;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822952c8
	ctx.lr = 0x8230CCC0;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822952c8
	ctx.lr = 0x8230CCD0;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82295908
	ctx.lr = 0x8230CCDC;
	sub_82295908(ctx, base);
	// lwz r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// stw r21,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cd00
	if (ctx.cr6.eq) goto loc_8230CD00;
	// stw r21,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82294520
	ctx.lr = 0x8230CD00;
	sub_82294520(ctx, base);
loc_8230CD00:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82294cc8
	ctx.lr = 0x8230CD08;
	sub_82294CC8(ctx, base);
	// lwz r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stw r21,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cd2c
	if (ctx.cr6.eq) goto loc_8230CD2C;
	// stw r21,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82294520
	ctx.lr = 0x8230CD2C;
	sub_82294520(ctx, base);
loc_8230CD2C:
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82294cc8
	ctx.lr = 0x8230CD34;
	sub_82294CC8(ctx, base);
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stw r21,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cd58
	if (ctx.cr6.eq) goto loc_8230CD58;
	// stw r21,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82294520
	ctx.lr = 0x8230CD58;
	sub_82294520(ctx, base);
loc_8230CD58:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82294cc8
	ctx.lr = 0x8230CD60;
	sub_82294CC8(ctx, base);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cd84
	if (ctx.cr6.eq) goto loc_8230CD84;
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82294520
	ctx.lr = 0x8230CD84;
	sub_82294520(ctx, base);
loc_8230CD84:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82294cc8
	ctx.lr = 0x8230CD8C;
	sub_82294CC8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cdb0
	if (ctx.cr6.eq) goto loc_8230CDB0;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x8230CDB0;
	sub_82294520(ctx, base);
loc_8230CDB0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x8230CDB8;
	sub_82294CC8(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cddc
	if (ctx.cr6.eq) goto loc_8230CDDC;
	// stw r21,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294520
	ctx.lr = 0x8230CDDC;
	sub_82294520(ctx, base);
loc_8230CDDC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8230ce68
	goto loc_8230CE68;
loc_8230CDE4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r28,r1,384
	ctx.r28.s64 = ctx.r1.s64 + 384;
	// bl 0x822952c8
	ctx.lr = 0x8230CDF8;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822952c8
	ctx.lr = 0x8230CE08;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82295908
	ctx.lr = 0x8230CE14;
	sub_82295908(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// stw r21,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ce38
	if (ctx.cr6.eq) goto loc_8230CE38;
	// stw r21,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82294520
	ctx.lr = 0x8230CE38;
	sub_82294520(ctx, base);
loc_8230CE38:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82294cc8
	ctx.lr = 0x8230CE40;
	sub_82294CC8(ctx, base);
	// lwz r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// stw r21,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ce64
	if (ctx.cr6.eq) goto loc_8230CE64;
	// stw r21,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82294520
	ctx.lr = 0x8230CE64;
	sub_82294520(ctx, base);
loc_8230CE64:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
loc_8230CE68:
	// bl 0x82294cc8
	ctx.lr = 0x8230CE6C;
	sub_82294CC8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8230ce7c
	if (!ctx.cr6.eq) goto loc_8230CE7C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_8230CE7C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,28892(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28892);
	// bl 0x82334a18
	ctx.lr = 0x8230CE88;
	sub_82334A18(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ced4
	if (ctx.cr6.eq) goto loc_8230CED4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230cf04
	if (ctx.cr6.eq) goto loc_8230CF04;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ceb4
	if (!ctx.cr6.eq) goto loc_8230CEB4;
	// bl 0x822900a0
	ctx.lr = 0x8230CEB0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CEB4:
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
	ctx.lr = 0x8230CED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8230CED4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230cf04
	if (ctx.cr6.eq) goto loc_8230CF04;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230cef0
	if (!ctx.cr6.eq) goto loc_8230CEF0;
	// bl 0x822900a0
	ctx.lr = 0x8230CEEC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CEF0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230CF04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230CF04:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cf4c
	if (ctx.cr6.eq) goto loc_8230CF4C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230cf7c
	if (ctx.cr6.eq) goto loc_8230CF7C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230cf2c
	if (!ctx.cr6.eq) goto loc_8230CF2C;
	// bl 0x822900a0
	ctx.lr = 0x8230CF28;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CF2C:
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
	ctx.lr = 0x8230CF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8230CF4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230cf7c
	if (ctx.cr6.eq) goto loc_8230CF7C;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230cf68
	if (!ctx.cr6.eq) goto loc_8230CF68;
	// bl 0x822900a0
	ctx.lr = 0x8230CF64;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CF68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230CF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230CF7C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230cfc4
	if (ctx.cr6.eq) goto loc_8230CFC4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8230cff4
	if (ctx.cr6.eq) goto loc_8230CFF4;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230cfa4
	if (!ctx.cr6.eq) goto loc_8230CFA4;
	// bl 0x822900a0
	ctx.lr = 0x8230CFA0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CFA4:
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
	ctx.lr = 0x8230CFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8230CFC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8230cff4
	if (ctx.cr6.eq) goto loc_8230CFF4;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230cfe0
	if (!ctx.cr6.eq) goto loc_8230CFE0;
	// bl 0x822900a0
	ctx.lr = 0x8230CFDC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230CFE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230CFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230CFF4:
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8230CFF8:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d040
	if (ctx.cr6.eq) goto loc_8230D040;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8230d070
	if (ctx.cr6.eq) goto loc_8230D070;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d020
	if (!ctx.cr6.eq) goto loc_8230D020;
	// bl 0x822900a0
	ctx.lr = 0x8230D01C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D020:
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
	ctx.lr = 0x8230D03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8230D040:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8230d070
	if (ctx.cr6.eq) goto loc_8230D070;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d05c
	if (!ctx.cr6.eq) goto loc_8230D05C;
	// bl 0x822900a0
	ctx.lr = 0x8230D058;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D05C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230D070:
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d0b8
	if (ctx.cr6.eq) goto loc_8230D0B8;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8230d0e8
	if (ctx.cr6.eq) goto loc_8230D0E8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d098
	if (!ctx.cr6.eq) goto loc_8230D098;
	// bl 0x822900a0
	ctx.lr = 0x8230D094;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D098:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D0B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
loc_8230D0B8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8230d0e8
	if (ctx.cr6.eq) goto loc_8230D0E8;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d0d4
	if (!ctx.cr6.eq) goto loc_8230D0D4;
	// bl 0x822900a0
	ctx.lr = 0x8230D0D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D0D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230D0E8:
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d130
	if (ctx.cr6.eq) goto loc_8230D130;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8230d160
	if (ctx.cr6.eq) goto loc_8230D160;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d110
	if (!ctx.cr6.eq) goto loc_8230D110;
	// bl 0x822900a0
	ctx.lr = 0x8230D10C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D110:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
loc_8230D130:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8230d160
	if (ctx.cr6.eq) goto loc_8230D160;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d14c
	if (!ctx.cr6.eq) goto loc_8230D14C;
	// bl 0x822900a0
	ctx.lr = 0x8230D148;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D14C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230D160:
	// lwz r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r31,496(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d1ac
	if (ctx.cr6.eq) goto loc_8230D1AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230d1dc
	if (ctx.cr6.eq) goto loc_8230D1DC;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d18c
	if (!ctx.cr6.eq) goto loc_8230D18C;
	// bl 0x822900a0
	ctx.lr = 0x8230D188;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D18C:
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
	ctx.lr = 0x8230D1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8230D1AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230d1dc
	if (ctx.cr6.eq) goto loc_8230D1DC;
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230d1c8
	if (!ctx.cr6.eq) goto loc_8230D1C8;
	// bl 0x822900a0
	ctx.lr = 0x8230D1C4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28888);
loc_8230D1C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230D1DC:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6b2c
	ctx.lr = 0x8230D1E8;
	__restfpr_26(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D1EC"))) PPC_WEAK_FUNC(sub_8230D1EC);
PPC_FUNC_IMPL(__imp__sub_8230D1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D1F0"))) PPC_WEAK_FUNC(sub_8230D1F0);
PPC_FUNC_IMPL(__imp__sub_8230D1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D1F4"))) PPC_WEAK_FUNC(sub_8230D1F4);
PPC_FUNC_IMPL(__imp__sub_8230D1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D1F8"))) PPC_WEAK_FUNC(sub_8230D1F8);
PPC_FUNC_IMPL(__imp__sub_8230D1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8230D200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r29,-31905
	ctx.r29.s64 = -2090926080;
	// stw r10,-3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3796, ctx.r10.u32);
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// stw r11,-3768(r28)
	PPC_STORE_U32(ctx.r28.u32 + -3768, ctx.r11.u32);
	// b 0x8230d22c
	goto loc_8230D22C;
loc_8230D228:
	// lwz r11,-3768(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3768);
loc_8230D22C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d260
	if (!ctx.cr6.eq) goto loc_8230D260;
	// bl 0x822913f8
	ctx.lr = 0x8230D238;
	sub_822913F8(ctx, base);
	// lwz r3,25344(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// lfd f0,-23864(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -23864);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-3796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d228
	if (!ctx.cr6.eq) goto loc_8230D228;
loc_8230D260:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3796, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D274"))) PPC_WEAK_FUNC(sub_8230D274);
PPC_FUNC_IMPL(__imp__sub_8230D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D278"))) PPC_WEAK_FUNC(sub_8230D278);
PPC_FUNC_IMPL(__imp__sub_8230D278) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x8230D298;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230d314
	if (ctx.cr6.eq) goto loc_8230D314;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r4,-32207
	ctx.r4.s64 = -2110717952;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32214
	ctx.r31.s64 = -2111176704;
	// lis r30,-32207
	ctx.r30.s64 = -2110717952;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// addi r8,r4,-2808
	ctx.r8.s64 = ctx.r4.s64 + -2808;
	// addi r11,r7,-15040
	ctx.r11.s64 = ctx.r7.s64 + -15040;
	// addi r5,r10,14488
	ctx.r5.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r7,r31,-20920
	ctx.r7.s64 = ctx.r31.s64 + -20920;
	// addi r4,r30,-3136
	ctx.r4.s64 = ctx.r30.s64 + -3136;
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
	// li r5,484
	ctx.r5.s64 = 484;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8230D310;
	sub_82398460(ctx, base);
	// b 0x8230d318
	goto loc_8230D318;
loc_8230D314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230D318:
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

__attribute__((alias("__imp__sub_8230D330"))) PPC_WEAK_FUNC(sub_8230D330);
PPC_FUNC_IMPL(__imp__sub_8230D330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230D338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d368
	if (!ctx.cr6.eq) goto loc_8230D368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bfe10
	ctx.lr = 0x8230D35C;
	sub_822BFE10(ctx, base);
	// stw r3,25320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25320, ctx.r3.u32);
	// bl 0x822bfec0
	ctx.lr = 0x8230D364;
	sub_822BFEC0(ctx, base);
	// lwz r10,25320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
loc_8230D368:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lwz r11,25376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25376);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230d388
	if (ctx.cr6.eq) goto loc_8230D388;
	// bl 0x822c6a10
	ctx.lr = 0x8230D37C;
	sub_822C6A10(ctx, base);
	// lwz r11,25376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25376);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8230d390
	goto loc_8230D390;
loc_8230D388:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8230D390:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d3b8
	if (!ctx.cr6.eq) goto loc_8230D3B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x8230D3A8;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8230D3B0;
	sub_822AADA8(ctx, base);
	// lwz r11,25376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25376);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_8230D3B8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d3e4
	if (!ctx.cr6.eq) goto loc_8230D3E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x8230D3D4;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8230D3DC;
	sub_82398640(ctx, base);
	// lwz r11,25376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25376);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8230D3E4:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230d41c
	if (ctx.cr6.eq) goto loc_8230D41C;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8230D400;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8230d41c
	if (!ctx.cr6.eq) goto loc_8230D41C;
	// lwz r3,25376(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25376);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230D41C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D424"))) PPC_WEAK_FUNC(sub_8230D424);
PPC_FUNC_IMPL(__imp__sub_8230D424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D428"))) PPC_WEAK_FUNC(sub_8230D428);
PPC_FUNC_IMPL(__imp__sub_8230D428) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D430"))) PPC_WEAK_FUNC(sub_8230D430);
PPC_FUNC_IMPL(__imp__sub_8230D430) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d474
	if (!ctx.cr6.eq) goto loc_8230D474;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822bfe10
	ctx.lr = 0x8230D468;
	sub_822BFE10(ctx, base);
	// stw r3,25320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25320, ctx.r3.u32);
	// bl 0x822bfec0
	ctx.lr = 0x8230D470;
	sub_822BFEC0(ctx, base);
	// lwz r11,25320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
loc_8230D474:
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

__attribute__((alias("__imp__sub_8230D49C"))) PPC_WEAK_FUNC(sub_8230D49C);
PPC_FUNC_IMPL(__imp__sub_8230D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D4A0"))) PPC_WEAK_FUNC(sub_8230D4A0);
PPC_FUNC_IMPL(__imp__sub_8230D4A0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d4c8
	if (ctx.cr6.eq) goto loc_8230D4C8;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8230d4d0
	goto loc_8230D4D0;
loc_8230D4C8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
loc_8230D4D0:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,25392
	ctx.r31.s64 = ctx.r11.s64 + 25392;
	// addi r4,r10,12936
	ctx.r4.s64 = ctx.r10.s64 + 12936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823329d8
	ctx.lr = 0x8230D4E8;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8230d4fc
	if (!ctx.cr6.eq) goto loc_8230D4FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230d770
	ctx.lr = 0x8230D4F8;
	sub_8230D770(ctx, base);
	// b 0x8230d524
	goto loc_8230D524;
loc_8230D4FC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11388
	ctx.r4.s64 = ctx.r11.s64 + 11388;
	// bl 0x823329d8
	ctx.lr = 0x8230D50C;
	sub_823329D8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8230d520
	if (!ctx.cr6.eq) goto loc_8230D520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230d7e8
	ctx.lr = 0x8230D51C;
	sub_8230D7E8(ctx, base);
	// b 0x8230d524
	goto loc_8230D524;
loc_8230D520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230D524:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-3768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3768, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8230D548"))) PPC_WEAK_FUNC(sub_8230D548);
PPC_FUNC_IMPL(__imp__sub_8230D548) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x8230D568;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230d5e4
	if (ctx.cr6.eq) goto loc_8230D5E4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r4,-32207
	ctx.r4.s64 = -2110717952;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32214
	ctx.r31.s64 = -2111176704;
	// lis r30,-32207
	ctx.r30.s64 = -2110717952;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// addi r8,r4,-3184
	ctx.r8.s64 = ctx.r4.s64 + -3184;
	// addi r11,r7,-15004
	ctx.r11.s64 = ctx.r7.s64 + -15004;
	// addi r5,r10,14488
	ctx.r5.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r7,r31,-20920
	ctx.r7.s64 = ctx.r31.s64 + -20920;
	// addi r4,r30,-3512
	ctx.r4.s64 = ctx.r30.s64 + -3512;
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
	// li r5,484
	ctx.r5.s64 = 484;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8230D5E0;
	sub_82398460(ctx, base);
	// b 0x8230d5e8
	goto loc_8230D5E8;
loc_8230D5E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230D5E8:
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

__attribute__((alias("__imp__sub_8230D600"))) PPC_WEAK_FUNC(sub_8230D600);
PPC_FUNC_IMPL(__imp__sub_8230D600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230D608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d638
	if (!ctx.cr6.eq) goto loc_8230D638;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bfe10
	ctx.lr = 0x8230D62C;
	sub_822BFE10(ctx, base);
	// stw r3,25320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25320, ctx.r3.u32);
	// bl 0x822bfec0
	ctx.lr = 0x8230D634;
	sub_822BFEC0(ctx, base);
	// lwz r10,25320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
loc_8230D638:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lwz r11,25380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25380);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230d658
	if (ctx.cr6.eq) goto loc_8230D658;
	// bl 0x822c6a10
	ctx.lr = 0x8230D64C;
	sub_822C6A10(ctx, base);
	// lwz r11,25380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25380);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8230d660
	goto loc_8230D660;
loc_8230D658:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8230D660:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d688
	if (!ctx.cr6.eq) goto loc_8230D688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x8230D678;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8230D680;
	sub_822AADA8(ctx, base);
	// lwz r11,25380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25380);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_8230D688:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d6b4
	if (!ctx.cr6.eq) goto loc_8230D6B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x8230D6A4;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8230D6AC;
	sub_82398640(ctx, base);
	// lwz r11,25380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25380);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8230D6B4:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230d6ec
	if (ctx.cr6.eq) goto loc_8230D6EC;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8230D6D0;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8230d6ec
	if (!ctx.cr6.eq) goto loc_8230D6EC;
	// lwz r3,25380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25380);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230D6EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D6F4"))) PPC_WEAK_FUNC(sub_8230D6F4);
PPC_FUNC_IMPL(__imp__sub_8230D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D6F8"))) PPC_WEAK_FUNC(sub_8230D6F8);
PPC_FUNC_IMPL(__imp__sub_8230D6F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D700"))) PPC_WEAK_FUNC(sub_8230D700);
PPC_FUNC_IMPL(__imp__sub_8230D700) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d744
	if (!ctx.cr6.eq) goto loc_8230D744;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822bfe10
	ctx.lr = 0x8230D738;
	sub_822BFE10(ctx, base);
	// stw r3,25320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25320, ctx.r3.u32);
	// bl 0x822bfec0
	ctx.lr = 0x8230D740;
	sub_822BFEC0(ctx, base);
	// lwz r11,25320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25320);
loc_8230D744:
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

__attribute__((alias("__imp__sub_8230D76C"))) PPC_WEAK_FUNC(sub_8230D76C);
PPC_FUNC_IMPL(__imp__sub_8230D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D770"))) PPC_WEAK_FUNC(sub_8230D770);
PPC_FUNC_IMPL(__imp__sub_8230D770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8230D778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r28,-31905
	ctx.r28.s64 = -2090926080;
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// stw r11,-3796(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3796, ctx.r11.u32);
	// lwz r11,-3768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3768);
loc_8230D798:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d7d4
	if (!ctx.cr6.eq) goto loc_8230D7D4;
	// bl 0x822913f8
	ctx.lr = 0x8230D7A4;
	sub_822913F8(ctx, base);
	// lwz r3,25344(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// lfd f0,-23864(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + -23864);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230D7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,-3796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3796);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,-3768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3768, ctx.r11.u32);
	// bne cr6,0x8230d798
	if (!ctx.cr6.eq) goto loc_8230D798;
loc_8230D7D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-3796(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3796, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D7E8"))) PPC_WEAK_FUNC(sub_8230D7E8);
PPC_FUNC_IMPL(__imp__sub_8230D7E8) {
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
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,-3768(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3768, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82290640
	ctx.lr = 0x8230D820;
	sub_82290640(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822909b0
	ctx.lr = 0x8230D828;
	sub_822909B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295e20
	ctx.lr = 0x8230D830;
	sub_82295E20(ctx, base);
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
}

__attribute__((alias("__imp__sub_8230D844"))) PPC_WEAK_FUNC(sub_8230D844);
PPC_FUNC_IMPL(__imp__sub_8230D844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D848"))) PPC_WEAK_FUNC(sub_8230D848);
PPC_FUNC_IMPL(__imp__sub_8230D848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
loc_8230D864:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,132(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8230d864
	if (!ctx.cr0.eq) goto loc_8230D864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D880"))) PPC_WEAK_FUNC(sub_8230D880);
PPC_FUNC_IMPL(__imp__sub_8230D880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
loc_8230D89C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,132(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8230d89c
	if (!ctx.cr0.eq) goto loc_8230D89C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D8B8"))) PPC_WEAK_FUNC(sub_8230D8B8);
PPC_FUNC_IMPL(__imp__sub_8230D8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
loc_8230D8D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// lwz r7,216(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8230d8d4
	if (!ctx.cr0.eq) goto loc_8230D8D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D8F8"))) PPC_WEAK_FUNC(sub_8230D8F8);
PPC_FUNC_IMPL(__imp__sub_8230D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
loc_8230D914:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// lwz r7,212(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8230d914
	if (!ctx.cr0.eq) goto loc_8230D914;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D938"))) PPC_WEAK_FUNC(sub_8230D938);
PPC_FUNC_IMPL(__imp__sub_8230D938) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D940"))) PPC_WEAK_FUNC(sub_8230D940);
PPC_FUNC_IMPL(__imp__sub_8230D940) {
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
	// beq cr6,0x8230d9b0
	if (ctx.cr6.eq) goto loc_8230D9B0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230d9b4
	if (!ctx.cr6.gt) goto loc_8230D9B4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8230D994;
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
	ctx.lr = 0x8230D9A8;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8230D9B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230D9B4:
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

__attribute__((alias("__imp__sub_8230D9CC"))) PPC_WEAK_FUNC(sub_8230D9CC);
PPC_FUNC_IMPL(__imp__sub_8230D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D9D0"))) PPC_WEAK_FUNC(sub_8230D9D0);
PPC_FUNC_IMPL(__imp__sub_8230D9D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D9D4"))) PPC_WEAK_FUNC(sub_8230D9D4);
PPC_FUNC_IMPL(__imp__sub_8230D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D9D8"))) PPC_WEAK_FUNC(sub_8230D9D8);
PPC_FUNC_IMPL(__imp__sub_8230D9D8) {
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

__attribute__((alias("__imp__sub_8230D9FC"))) PPC_WEAK_FUNC(sub_8230D9FC);
PPC_FUNC_IMPL(__imp__sub_8230D9FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DA00"))) PPC_WEAK_FUNC(sub_8230DA00);
PPC_FUNC_IMPL(__imp__sub_8230DA00) {
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
	ctx.lr = 0x8230DA30;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230da48
	if (ctx.cr0.eq) goto loc_8230DA48;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8230DA48:
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

__attribute__((alias("__imp__sub_8230DA68"))) PPC_WEAK_FUNC(sub_8230DA68);
PPC_FUNC_IMPL(__imp__sub_8230DA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DA6C"))) PPC_WEAK_FUNC(sub_8230DA6C);
PPC_FUNC_IMPL(__imp__sub_8230DA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DA70"))) PPC_WEAK_FUNC(sub_8230DA70);
PPC_FUNC_IMPL(__imp__sub_8230DA70) {
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

__attribute__((alias("__imp__sub_8230DA84"))) PPC_WEAK_FUNC(sub_8230DA84);
PPC_FUNC_IMPL(__imp__sub_8230DA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DA88"))) PPC_WEAK_FUNC(sub_8230DA88);
PPC_FUNC_IMPL(__imp__sub_8230DA88) {
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

__attribute__((alias("__imp__sub_8230DA9C"))) PPC_WEAK_FUNC(sub_8230DA9C);
PPC_FUNC_IMPL(__imp__sub_8230DA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DAA0"))) PPC_WEAK_FUNC(sub_8230DAA0);
PPC_FUNC_IMPL(__imp__sub_8230DAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DAA8;
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
	// beq cr6,0x8230dae8
	if (ctx.cr6.eq) goto loc_8230DAE8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230dad4
	if (!ctx.cr6.eq) goto loc_8230DAD4;
	// bl 0x822900a0
	ctx.lr = 0x8230DAD0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DAD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DAE8:
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

__attribute__((alias("__imp__sub_8230DB00"))) PPC_WEAK_FUNC(sub_8230DB00);
PPC_FUNC_IMPL(__imp__sub_8230DB00) {
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

__attribute__((alias("__imp__sub_8230DB14"))) PPC_WEAK_FUNC(sub_8230DB14);
PPC_FUNC_IMPL(__imp__sub_8230DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DB18"))) PPC_WEAK_FUNC(sub_8230DB18);
PPC_FUNC_IMPL(__imp__sub_8230DB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DB20;
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
	// beq cr6,0x8230db60
	if (ctx.cr6.eq) goto loc_8230DB60;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230db4c
	if (!ctx.cr6.eq) goto loc_8230DB4C;
	// bl 0x822900a0
	ctx.lr = 0x8230DB48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DB4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DB60:
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

__attribute__((alias("__imp__sub_8230DB78"))) PPC_WEAK_FUNC(sub_8230DB78);
PPC_FUNC_IMPL(__imp__sub_8230DB78) {
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

__attribute__((alias("__imp__sub_8230DB88"))) PPC_WEAK_FUNC(sub_8230DB88);
PPC_FUNC_IMPL(__imp__sub_8230DB88) {
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

__attribute__((alias("__imp__sub_8230DB9C"))) PPC_WEAK_FUNC(sub_8230DB9C);
PPC_FUNC_IMPL(__imp__sub_8230DB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DBA0"))) PPC_WEAK_FUNC(sub_8230DBA0);
PPC_FUNC_IMPL(__imp__sub_8230DBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DBA8;
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
	// beq cr6,0x8230dbe8
	if (ctx.cr6.eq) goto loc_8230DBE8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230dbd4
	if (!ctx.cr6.eq) goto loc_8230DBD4;
	// bl 0x822900a0
	ctx.lr = 0x8230DBD0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DBD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DBE8:
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

__attribute__((alias("__imp__sub_8230DC00"))) PPC_WEAK_FUNC(sub_8230DC00);
PPC_FUNC_IMPL(__imp__sub_8230DC00) {
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

__attribute__((alias("__imp__sub_8230DC14"))) PPC_WEAK_FUNC(sub_8230DC14);
PPC_FUNC_IMPL(__imp__sub_8230DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DC18"))) PPC_WEAK_FUNC(sub_8230DC18);
PPC_FUNC_IMPL(__imp__sub_8230DC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DC20;
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
	// beq cr6,0x8230dc60
	if (ctx.cr6.eq) goto loc_8230DC60;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230dc4c
	if (!ctx.cr6.eq) goto loc_8230DC4C;
	// bl 0x822900a0
	ctx.lr = 0x8230DC48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DC4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DC60:
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

__attribute__((alias("__imp__sub_8230DC78"))) PPC_WEAK_FUNC(sub_8230DC78);
PPC_FUNC_IMPL(__imp__sub_8230DC78) {
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
	// beq cr6,0x8230dd10
	if (ctx.cr6.eq) goto loc_8230DD10;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230dcec
	if (!ctx.cr6.gt) goto loc_8230DCEC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x8230dccc
	if (ctx.cr6.eq) goto loc_8230DCCC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8230DCCC;
	sub_82294520(ctx, base);
loc_8230DCCC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x8230DCE0;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8230dd10
	goto loc_8230DD10;
loc_8230DCEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8230dd14
	if (ctx.cr6.eq) goto loc_8230DD14;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8230DD10;
	sub_82294520(ctx, base);
loc_8230DD10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230DD14:
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

__attribute__((alias("__imp__sub_8230DD2C"))) PPC_WEAK_FUNC(sub_8230DD2C);
PPC_FUNC_IMPL(__imp__sub_8230DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DD30"))) PPC_WEAK_FUNC(sub_8230DD30);
PPC_FUNC_IMPL(__imp__sub_8230DD30) {
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

__attribute__((alias("__imp__sub_8230DD44"))) PPC_WEAK_FUNC(sub_8230DD44);
PPC_FUNC_IMPL(__imp__sub_8230DD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DD48"))) PPC_WEAK_FUNC(sub_8230DD48);
PPC_FUNC_IMPL(__imp__sub_8230DD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DD50;
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
	// beq cr6,0x8230dd90
	if (ctx.cr6.eq) goto loc_8230DD90;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230dd7c
	if (!ctx.cr6.eq) goto loc_8230DD7C;
	// bl 0x822900a0
	ctx.lr = 0x8230DD78;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DD7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DD90:
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

__attribute__((alias("__imp__sub_8230DDA8"))) PPC_WEAK_FUNC(sub_8230DDA8);
PPC_FUNC_IMPL(__imp__sub_8230DDA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DDB8"))) PPC_WEAK_FUNC(sub_8230DDB8);
PPC_FUNC_IMPL(__imp__sub_8230DDB8) {
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

__attribute__((alias("__imp__sub_8230DDCC"))) PPC_WEAK_FUNC(sub_8230DDCC);
PPC_FUNC_IMPL(__imp__sub_8230DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DDD0"))) PPC_WEAK_FUNC(sub_8230DDD0);
PPC_FUNC_IMPL(__imp__sub_8230DDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DDD8;
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
	// beq cr6,0x8230de18
	if (ctx.cr6.eq) goto loc_8230DE18;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230de04
	if (!ctx.cr6.eq) goto loc_8230DE04;
	// bl 0x822900a0
	ctx.lr = 0x8230DE00;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DE04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DE18:
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

__attribute__((alias("__imp__sub_8230DE30"))) PPC_WEAK_FUNC(sub_8230DE30);
PPC_FUNC_IMPL(__imp__sub_8230DE30) {
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

__attribute__((alias("__imp__sub_8230DE44"))) PPC_WEAK_FUNC(sub_8230DE44);
PPC_FUNC_IMPL(__imp__sub_8230DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DE48"))) PPC_WEAK_FUNC(sub_8230DE48);
PPC_FUNC_IMPL(__imp__sub_8230DE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DE50;
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
	// beq cr6,0x8230de90
	if (ctx.cr6.eq) goto loc_8230DE90;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230de7c
	if (!ctx.cr6.eq) goto loc_8230DE7C;
	// bl 0x822900a0
	ctx.lr = 0x8230DE78;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DE7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DE90:
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

__attribute__((alias("__imp__sub_8230DEA8"))) PPC_WEAK_FUNC(sub_8230DEA8);
PPC_FUNC_IMPL(__imp__sub_8230DEA8) {
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

__attribute__((alias("__imp__sub_8230DEBC"))) PPC_WEAK_FUNC(sub_8230DEBC);
PPC_FUNC_IMPL(__imp__sub_8230DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DEC0"))) PPC_WEAK_FUNC(sub_8230DEC0);
PPC_FUNC_IMPL(__imp__sub_8230DEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DEC8;
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
	// beq cr6,0x8230df08
	if (ctx.cr6.eq) goto loc_8230DF08;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230def4
	if (!ctx.cr6.eq) goto loc_8230DEF4;
	// bl 0x822900a0
	ctx.lr = 0x8230DEF0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DEF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DF08:
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

__attribute__((alias("__imp__sub_8230DF20"))) PPC_WEAK_FUNC(sub_8230DF20);
PPC_FUNC_IMPL(__imp__sub_8230DF20) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230e630
	sub_8230E630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DF24"))) PPC_WEAK_FUNC(sub_8230DF24);
PPC_FUNC_IMPL(__imp__sub_8230DF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DF28"))) PPC_WEAK_FUNC(sub_8230DF28);
PPC_FUNC_IMPL(__imp__sub_8230DF28) {
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

__attribute__((alias("__imp__sub_8230DF3C"))) PPC_WEAK_FUNC(sub_8230DF3C);
PPC_FUNC_IMPL(__imp__sub_8230DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DF40"))) PPC_WEAK_FUNC(sub_8230DF40);
PPC_FUNC_IMPL(__imp__sub_8230DF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230DF48;
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
	// beq cr6,0x8230df88
	if (ctx.cr6.eq) goto loc_8230DF88;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230df74
	if (!ctx.cr6.eq) goto loc_8230DF74;
	// bl 0x822900a0
	ctx.lr = 0x8230DF70;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230DF74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230DF88:
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

__attribute__((alias("__imp__sub_8230DFA0"))) PPC_WEAK_FUNC(sub_8230DFA0);
PPC_FUNC_IMPL(__imp__sub_8230DFA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230e6a8
	sub_8230E6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DFA4"))) PPC_WEAK_FUNC(sub_8230DFA4);
PPC_FUNC_IMPL(__imp__sub_8230DFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DFA8"))) PPC_WEAK_FUNC(sub_8230DFA8);
PPC_FUNC_IMPL(__imp__sub_8230DFA8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DFB0"))) PPC_WEAK_FUNC(sub_8230DFB0);
PPC_FUNC_IMPL(__imp__sub_8230DFB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DFC0"))) PPC_WEAK_FUNC(sub_8230DFC0);
PPC_FUNC_IMPL(__imp__sub_8230DFC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DFD4"))) PPC_WEAK_FUNC(sub_8230DFD4);
PPC_FUNC_IMPL(__imp__sub_8230DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DFD8"))) PPC_WEAK_FUNC(sub_8230DFD8);
PPC_FUNC_IMPL(__imp__sub_8230DFD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DFE0"))) PPC_WEAK_FUNC(sub_8230DFE0);
PPC_FUNC_IMPL(__imp__sub_8230DFE0) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-27480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230e020
	if (!ctx.cr6.eq) goto loc_8230E020;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8270f910
	ctx.lr = 0x8230E014;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8230E01C;
	sub_8270F9D0(ctx, base);
	// lwz r11,-27480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27480);
loc_8230E020:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x8230E034;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230e074
	if (!ctx.cr6.lt) goto loc_8230E074;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x8230e074
	if (ctx.cr6.eq) goto loc_8230E074;
	// bl 0x8230e090
	ctx.lr = 0x8230E070;
	sub_8230E090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230E074:
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

__attribute__((alias("__imp__sub_8230E08C"))) PPC_WEAK_FUNC(sub_8230E08C);
PPC_FUNC_IMPL(__imp__sub_8230E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E090"))) PPC_WEAK_FUNC(sub_8230E090);
PPC_FUNC_IMPL(__imp__sub_8230E090) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8230E0B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x8230E0B8;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230e0e4
	if (!ctx.cr6.lt) goto loc_8230E0E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8230e0b0
	if (!ctx.cr6.eq) goto loc_8230E0B0;
loc_8230E0E4:
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

__attribute__((alias("__imp__sub_8230E0FC"))) PPC_WEAK_FUNC(sub_8230E0FC);
PPC_FUNC_IMPL(__imp__sub_8230E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E100"))) PPC_WEAK_FUNC(sub_8230E100);
PPC_FUNC_IMPL(__imp__sub_8230E100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E118"))) PPC_WEAK_FUNC(sub_8230E118);
PPC_FUNC_IMPL(__imp__sub_8230E118) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E120"))) PPC_WEAK_FUNC(sub_8230E120);
PPC_FUNC_IMPL(__imp__sub_8230E120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E130"))) PPC_WEAK_FUNC(sub_8230E130);
PPC_FUNC_IMPL(__imp__sub_8230E130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E144"))) PPC_WEAK_FUNC(sub_8230E144);
PPC_FUNC_IMPL(__imp__sub_8230E144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E148"))) PPC_WEAK_FUNC(sub_8230E148);
PPC_FUNC_IMPL(__imp__sub_8230E148) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E150"))) PPC_WEAK_FUNC(sub_8230E150);
PPC_FUNC_IMPL(__imp__sub_8230E150) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230e190
	if (!ctx.cr6.eq) goto loc_8230E190;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82437530
	ctx.lr = 0x8230E184;
	sub_82437530(ctx, base);
	// stw r3,-31208(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31208, ctx.r3.u32);
	// bl 0x824375e0
	ctx.lr = 0x8230E18C;
	sub_824375E0(ctx, base);
	// lwz r11,-31208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31208);
loc_8230E190:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x8230E1A4;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230e1e4
	if (!ctx.cr6.lt) goto loc_8230E1E4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x8230e1e4
	if (ctx.cr6.eq) goto loc_8230E1E4;
	// bl 0x8230e200
	ctx.lr = 0x8230E1E0;
	sub_8230E200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230E1E4:
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

__attribute__((alias("__imp__sub_8230E1FC"))) PPC_WEAK_FUNC(sub_8230E1FC);
PPC_FUNC_IMPL(__imp__sub_8230E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E200"))) PPC_WEAK_FUNC(sub_8230E200);
PPC_FUNC_IMPL(__imp__sub_8230E200) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8230E220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x8230E228;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230e254
	if (!ctx.cr6.lt) goto loc_8230E254;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8230e220
	if (!ctx.cr6.eq) goto loc_8230E220;
loc_8230E254:
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

__attribute__((alias("__imp__sub_8230E26C"))) PPC_WEAK_FUNC(sub_8230E26C);
PPC_FUNC_IMPL(__imp__sub_8230E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E270"))) PPC_WEAK_FUNC(sub_8230E270);
PPC_FUNC_IMPL(__imp__sub_8230E270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E288"))) PPC_WEAK_FUNC(sub_8230E288);
PPC_FUNC_IMPL(__imp__sub_8230E288) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230e2c8
	if (!ctx.cr6.eq) goto loc_8230E2C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82437750
	ctx.lr = 0x8230E2BC;
	sub_82437750(ctx, base);
	// stw r3,-31204(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31204, ctx.r3.u32);
	// bl 0x82437800
	ctx.lr = 0x8230E2C4;
	sub_82437800(ctx, base);
	// lwz r11,-31204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31204);
loc_8230E2C8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x8230E2DC;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230e31c
	if (!ctx.cr6.lt) goto loc_8230E31C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x8230e31c
	if (ctx.cr6.eq) goto loc_8230E31C;
	// bl 0x8230e338
	ctx.lr = 0x8230E318;
	sub_8230E338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230E31C:
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

__attribute__((alias("__imp__sub_8230E334"))) PPC_WEAK_FUNC(sub_8230E334);
PPC_FUNC_IMPL(__imp__sub_8230E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E338"))) PPC_WEAK_FUNC(sub_8230E338);
PPC_FUNC_IMPL(__imp__sub_8230E338) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8230E358:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x8230E360;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230e38c
	if (!ctx.cr6.lt) goto loc_8230E38C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8230e358
	if (!ctx.cr6.eq) goto loc_8230E358;
loc_8230E38C:
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

__attribute__((alias("__imp__sub_8230E3A4"))) PPC_WEAK_FUNC(sub_8230E3A4);
PPC_FUNC_IMPL(__imp__sub_8230E3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E3A8"))) PPC_WEAK_FUNC(sub_8230E3A8);
PPC_FUNC_IMPL(__imp__sub_8230E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E3C0"))) PPC_WEAK_FUNC(sub_8230E3C0);
PPC_FUNC_IMPL(__imp__sub_8230E3C0) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-27224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230e400
	if (!ctx.cr6.eq) goto loc_8230E400;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8279d5b8
	ctx.lr = 0x8230E3F4;
	sub_8279D5B8(ctx, base);
	// stw r3,-27224(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27224, ctx.r3.u32);
	// bl 0x8279d678
	ctx.lr = 0x8230E3FC;
	sub_8279D678(ctx, base);
	// lwz r11,-27224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27224);
loc_8230E400:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x8230E414;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230e454
	if (!ctx.cr6.lt) goto loc_8230E454;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x8230e454
	if (ctx.cr6.eq) goto loc_8230E454;
	// bl 0x8230e470
	ctx.lr = 0x8230E450;
	sub_8230E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8230E454:
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

__attribute__((alias("__imp__sub_8230E46C"))) PPC_WEAK_FUNC(sub_8230E46C);
PPC_FUNC_IMPL(__imp__sub_8230E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E470"))) PPC_WEAK_FUNC(sub_8230E470);
PPC_FUNC_IMPL(__imp__sub_8230E470) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8230E490:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x8230E498;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230e4c4
	if (!ctx.cr6.lt) goto loc_8230E4C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8230e490
	if (!ctx.cr6.eq) goto loc_8230E490;
loc_8230E4C4:
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

__attribute__((alias("__imp__sub_8230E4DC"))) PPC_WEAK_FUNC(sub_8230E4DC);
PPC_FUNC_IMPL(__imp__sub_8230E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E4E0"))) PPC_WEAK_FUNC(sub_8230E4E0);
PPC_FUNC_IMPL(__imp__sub_8230E4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E4F8"))) PPC_WEAK_FUNC(sub_8230E4F8);
PPC_FUNC_IMPL(__imp__sub_8230E4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E4FC"))) PPC_WEAK_FUNC(sub_8230E4FC);
PPC_FUNC_IMPL(__imp__sub_8230E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E500"))) PPC_WEAK_FUNC(sub_8230E500);
PPC_FUNC_IMPL(__imp__sub_8230E500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E504"))) PPC_WEAK_FUNC(sub_8230E504);
PPC_FUNC_IMPL(__imp__sub_8230E504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E508"))) PPC_WEAK_FUNC(sub_8230E508);
PPC_FUNC_IMPL(__imp__sub_8230E508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,84
	ctx.r10.s64 = ctx.r4.s64 * 84;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E518"))) PPC_WEAK_FUNC(sub_8230E518);
PPC_FUNC_IMPL(__imp__sub_8230E518) {
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

__attribute__((alias("__imp__sub_8230E528"))) PPC_WEAK_FUNC(sub_8230E528);
PPC_FUNC_IMPL(__imp__sub_8230E528) {
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
	// beq cr6,0x8230e5c0
	if (ctx.cr6.eq) goto loc_8230E5C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230e59c
	if (!ctx.cr6.gt) goto loc_8230E59C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x8230e57c
	if (ctx.cr6.eq) goto loc_8230E57C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8230E57C;
	sub_82294520(ctx, base);
loc_8230E57C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x8230E590;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8230e5c0
	goto loc_8230E5C0;
loc_8230E59C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8230e5c0
	if (ctx.cr6.eq) goto loc_8230E5C0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8230E5C0;
	sub_82294520(ctx, base);
loc_8230E5C0:
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

__attribute__((alias("__imp__sub_8230E5D8"))) PPC_WEAK_FUNC(sub_8230E5D8);
PPC_FUNC_IMPL(__imp__sub_8230E5D8) {
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

__attribute__((alias("__imp__sub_8230E5E8"))) PPC_WEAK_FUNC(sub_8230E5E8);
PPC_FUNC_IMPL(__imp__sub_8230E5E8) {
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

__attribute__((alias("__imp__sub_8230E5F8"))) PPC_WEAK_FUNC(sub_8230E5F8);
PPC_FUNC_IMPL(__imp__sub_8230E5F8) {
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

__attribute__((alias("__imp__sub_8230E608"))) PPC_WEAK_FUNC(sub_8230E608);
PPC_FUNC_IMPL(__imp__sub_8230E608) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_8230E620"))) PPC_WEAK_FUNC(sub_8230E620);
PPC_FUNC_IMPL(__imp__sub_8230E620) {
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

__attribute__((alias("__imp__sub_8230E630"))) PPC_WEAK_FUNC(sub_8230E630);
PPC_FUNC_IMPL(__imp__sub_8230E630) {
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
	ctx.lr = 0x8230E660;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e678
	if (ctx.cr0.eq) goto loc_8230E678;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8230E678:
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

__attribute__((alias("__imp__sub_8230E698"))) PPC_WEAK_FUNC(sub_8230E698);
PPC_FUNC_IMPL(__imp__sub_8230E698) {
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

__attribute__((alias("__imp__sub_8230E6A8"))) PPC_WEAK_FUNC(sub_8230E6A8);
PPC_FUNC_IMPL(__imp__sub_8230E6A8) {
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
	ctx.lr = 0x8230E6D8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e6f0
	if (ctx.cr0.eq) goto loc_8230E6F0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8230E6F0:
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

__attribute__((alias("__imp__sub_8230E710"))) PPC_WEAK_FUNC(sub_8230E710);
PPC_FUNC_IMPL(__imp__sub_8230E710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E728"))) PPC_WEAK_FUNC(sub_8230E728);
PPC_FUNC_IMPL(__imp__sub_8230E728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E740"))) PPC_WEAK_FUNC(sub_8230E740);
PPC_FUNC_IMPL(__imp__sub_8230E740) {
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

__attribute__((alias("__imp__sub_8230E750"))) PPC_WEAK_FUNC(sub_8230E750);
PPC_FUNC_IMPL(__imp__sub_8230E750) {
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

__attribute__((alias("__imp__sub_8230E774"))) PPC_WEAK_FUNC(sub_8230E774);
PPC_FUNC_IMPL(__imp__sub_8230E774) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E778"))) PPC_WEAK_FUNC(sub_8230E778);
PPC_FUNC_IMPL(__imp__sub_8230E778) {
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
	// bl 0x8232e868
	ctx.lr = 0x8230E790;
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

__attribute__((alias("__imp__sub_8230E7A8"))) PPC_WEAK_FUNC(sub_8230E7A8);
PPC_FUNC_IMPL(__imp__sub_8230E7A8) {
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
	// bl 0x8232e868
	ctx.lr = 0x8230E7C0;
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

__attribute__((alias("__imp__sub_8230E7D8"))) PPC_WEAK_FUNC(sub_8230E7D8);
PPC_FUNC_IMPL(__imp__sub_8230E7D8) {
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
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232e868
	ctx.lr = 0x8230E7F8;
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

__attribute__((alias("__imp__sub_8230E810"))) PPC_WEAK_FUNC(sub_8230E810);
PPC_FUNC_IMPL(__imp__sub_8230E810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r4,-31884
	ctx.r4.s64 = -2089549824;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,25104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25104);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230E834"))) PPC_WEAK_FUNC(sub_8230E834);
PPC_FUNC_IMPL(__imp__sub_8230E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E838"))) PPC_WEAK_FUNC(sub_8230E838);
PPC_FUNC_IMPL(__imp__sub_8230E838) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230e878
	if (!ctx.cr6.eq) goto loc_8230E878;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8270f910
	ctx.lr = 0x8230E86C;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8230E874;
	sub_8270F9D0(ctx, base);
	// lwz r3,-27480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8230E878:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x8230E894;
	sub_822A7880(ctx, base);
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

__attribute__((alias("__imp__sub_8230E8AC"))) PPC_WEAK_FUNC(sub_8230E8AC);
PPC_FUNC_IMPL(__imp__sub_8230E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E8B0"))) PPC_WEAK_FUNC(sub_8230E8B0);
PPC_FUNC_IMPL(__imp__sub_8230E8B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230e8f0
	if (!ctx.cr6.eq) goto loc_8230E8F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826dd5e8
	ctx.lr = 0x8230E8E4;
	sub_826DD5E8(ctx, base);
	// stw r3,-27712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27712, ctx.r3.u32);
	// bl 0x826dd6a8
	ctx.lr = 0x8230E8EC;
	sub_826DD6A8(ctx, base);
	// lwz r3,-27712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27712);
loc_8230E8F0:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x8230E90C;
	sub_822A7880(ctx, base);
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

__attribute__((alias("__imp__sub_8230E924"))) PPC_WEAK_FUNC(sub_8230E924);
PPC_FUNC_IMPL(__imp__sub_8230E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E928"))) PPC_WEAK_FUNC(sub_8230E928);
PPC_FUNC_IMPL(__imp__sub_8230E928) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-30848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30848);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230e968
	if (!ctx.cr6.eq) goto loc_8230E968;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82486c78
	ctx.lr = 0x8230E95C;
	sub_82486C78(ctx, base);
	// stw r3,-30848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30848, ctx.r3.u32);
	// bl 0x82486d38
	ctx.lr = 0x8230E964;
	sub_82486D38(ctx, base);
	// lwz r3,-30848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30848);
loc_8230E968:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x8230E984;
	sub_822A7880(ctx, base);
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

__attribute__((alias("__imp__sub_8230E99C"))) PPC_WEAK_FUNC(sub_8230E99C);
PPC_FUNC_IMPL(__imp__sub_8230E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E9A0"))) PPC_WEAK_FUNC(sub_8230E9A0);
PPC_FUNC_IMPL(__imp__sub_8230E9A0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230e9e0
	if (!ctx.cr6.eq) goto loc_8230E9E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826cbfa8
	ctx.lr = 0x8230E9D4;
	sub_826CBFA8(ctx, base);
	// stw r3,-27776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27776, ctx.r3.u32);
	// bl 0x826cc058
	ctx.lr = 0x8230E9DC;
	sub_826CC058(ctx, base);
	// lwz r3,-27776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27776);
loc_8230E9E0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7ae0
	ctx.lr = 0x8230E9F8;
	sub_822A7AE0(ctx, base);
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

__attribute__((alias("__imp__sub_8230EA10"))) PPC_WEAK_FUNC(sub_8230EA10);
PPC_FUNC_IMPL(__imp__sub_8230EA10) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ea50
	if (!ctx.cr6.eq) goto loc_8230EA50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8261c060
	ctx.lr = 0x8230EA44;
	sub_8261C060(ctx, base);
	// stw r3,-28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28440, ctx.r3.u32);
	// bl 0x8261c120
	ctx.lr = 0x8230EA4C;
	sub_8261C120(ctx, base);
	// lwz r3,-28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28440);
loc_8230EA50:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7ae0
	ctx.lr = 0x8230EA68;
	sub_822A7AE0(ctx, base);
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

__attribute__((alias("__imp__sub_8230EA80"))) PPC_WEAK_FUNC(sub_8230EA80);
PPC_FUNC_IMPL(__imp__sub_8230EA80) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-28464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230eac0
	if (!ctx.cr6.eq) goto loc_8230EAC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8261bc00
	ctx.lr = 0x8230EAB4;
	sub_8261BC00(ctx, base);
	// stw r3,-28464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28464, ctx.r3.u32);
	// bl 0x8261bcc0
	ctx.lr = 0x8230EABC;
	sub_8261BCC0(ctx, base);
	// lwz r3,-28464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28464);
loc_8230EAC0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7ae0
	ctx.lr = 0x8230EAD8;
	sub_822A7AE0(ctx, base);
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

__attribute__((alias("__imp__sub_8230EAF0"))) PPC_WEAK_FUNC(sub_8230EAF0);
PPC_FUNC_IMPL(__imp__sub_8230EAF0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-29696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230eb30
	if (!ctx.cr6.eq) goto loc_8230EB30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8253e5b8
	ctx.lr = 0x8230EB24;
	sub_8253E5B8(ctx, base);
	// stw r3,-29696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29696, ctx.r3.u32);
	// bl 0x8253e678
	ctx.lr = 0x8230EB2C;
	sub_8253E678(ctx, base);
	// lwz r3,-29696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29696);
loc_8230EB30:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7ae0
	ctx.lr = 0x8230EB48;
	sub_822A7AE0(ctx, base);
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

__attribute__((alias("__imp__sub_8230EB60"))) PPC_WEAK_FUNC(sub_8230EB60);
PPC_FUNC_IMPL(__imp__sub_8230EB60) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230eba0
	if (!ctx.cr6.eq) goto loc_8230EBA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e58c8
	ctx.lr = 0x8230EB94;
	sub_826E58C8(ctx, base);
	// stw r3,-27628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27628, ctx.r3.u32);
	// bl 0x826e5988
	ctx.lr = 0x8230EB9C;
	sub_826E5988(ctx, base);
	// lwz r3,-27628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
loc_8230EBA0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7ae0
	ctx.lr = 0x8230EBB8;
	sub_822A7AE0(ctx, base);
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

__attribute__((alias("__imp__sub_8230EBD0"))) PPC_WEAK_FUNC(sub_8230EBD0);
PPC_FUNC_IMPL(__imp__sub_8230EBD0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ec10
	if (!ctx.cr6.eq) goto loc_8230EC10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e09d0
	ctx.lr = 0x8230EC04;
	sub_826E09D0(ctx, base);
	// stw r3,-27668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27668, ctx.r3.u32);
	// bl 0x826e0a90
	ctx.lr = 0x8230EC0C;
	sub_826E0A90(ctx, base);
	// lwz r3,-27668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27668);
loc_8230EC10:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x8230EC2C;
	sub_822A7880(ctx, base);
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

__attribute__((alias("__imp__sub_8230EC44"))) PPC_WEAK_FUNC(sub_8230EC44);
PPC_FUNC_IMPL(__imp__sub_8230EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230EC48"))) PPC_WEAK_FUNC(sub_8230EC48);
PPC_FUNC_IMPL(__imp__sub_8230EC48) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ec88
	if (!ctx.cr6.eq) goto loc_8230EC88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8278dd48
	ctx.lr = 0x8230EC7C;
	sub_8278DD48(ctx, base);
	// stw r3,-27240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27240, ctx.r3.u32);
	// bl 0x8278de08
	ctx.lr = 0x8230EC84;
	sub_8278DE08(ctx, base);
	// lwz r3,-27240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27240);
loc_8230EC88:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7880
	ctx.lr = 0x8230ECA4;
	sub_822A7880(ctx, base);
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

__attribute__((alias("__imp__sub_8230ECBC"))) PPC_WEAK_FUNC(sub_8230ECBC);
PPC_FUNC_IMPL(__imp__sub_8230ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230ECC0"))) PPC_WEAK_FUNC(sub_8230ECC0);
PPC_FUNC_IMPL(__imp__sub_8230ECC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230ECC4"))) PPC_WEAK_FUNC(sub_8230ECC4);
PPC_FUNC_IMPL(__imp__sub_8230ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230ECC8"))) PPC_WEAK_FUNC(sub_8230ECC8);
PPC_FUNC_IMPL(__imp__sub_8230ECC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8230ECD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8230ef28
	if (ctx.cr6.lt) goto loc_8230EF28;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,248
	ctx.r5.s64 = 248;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8230ED0C;
	sub_82CB16F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// li r24,12
	ctx.r24.s64 = 12;
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
loc_8230ED1C:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r28,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw r11,r10,r24
	ctx.r11.s32 = ctx.r10.s32 / ctx.r24.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8230ee98
	if (!ctx.cr6.gt) goto loc_8230EE98;
loc_8230ED40:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8230f118
	ctx.lr = 0x8230ED60;
	sub_8230F118(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
loc_8230ED68:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x8230edb0
	if (ctx.cr6.gt) goto loc_8230EDB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ed88
	if (ctx.cr6.eq) goto loc_8230ED88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8230ed8c
	goto loc_8230ED8C;
loc_8230ED88:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8230ED8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230eda0
	if (ctx.cr6.eq) goto loc_8230EDA0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8230eda4
	goto loc_8230EDA4;
loc_8230EDA0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8230EDA4:
	// bl 0x82cb0328
	ctx.lr = 0x8230EDA8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8230ed68
	if (!ctx.cr6.gt) goto loc_8230ED68;
loc_8230EDB0:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8230edf8
	if (!ctx.cr6.gt) goto loc_8230EDF8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230edd0
	if (ctx.cr6.eq) goto loc_8230EDD0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8230edd4
	goto loc_8230EDD4;
loc_8230EDD0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8230EDD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ede8
	if (ctx.cr6.eq) goto loc_8230EDE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8230edec
	goto loc_8230EDEC;
loc_8230EDE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8230EDEC:
	// bl 0x82cb0328
	ctx.lr = 0x8230EDF0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230edb0
	if (!ctx.cr6.lt) goto loc_8230EDB0;
loc_8230EDF8:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bgt cr6,0x8230ee10
	if (ctx.cr6.gt) goto loc_8230EE10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230f118
	ctx.lr = 0x8230EE0C;
	sub_8230F118(ctx, base);
	// b 0x8230ed68
	goto loc_8230ED68;
loc_8230EE10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230f118
	ctx.lr = 0x8230EE18;
	sub_8230F118(ctx, base);
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r10,r30,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// divw r8,r10,r24
	ctx.r8.s32 = ctx.r10.s32 / ctx.r24.s32;
	// divw r7,r9,r24
	ctx.r7.s32 = ctx.r9.s32 / ctx.r24.s32;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8230ee60
	if (ctx.cr6.lt) goto loc_8230EE60;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8230ee50
	if (!ctx.cr6.lt) goto loc_8230EE50;
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
loc_8230EE50:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8230ef18
	if (!ctx.cr6.gt) goto loc_8230EF18;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x8230ee84
	goto loc_8230EE84;
loc_8230EE60:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8230ee74
	if (!ctx.cr6.gt) goto loc_8230EE74;
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r27,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r27.u32);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
loc_8230EE74:
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8230ef18
	if (!ctx.cr6.lt) goto loc_8230EF18;
	// addi r27,r31,-12
	ctx.r27.s64 = ctx.r31.s64 + -12;
loc_8230EE84:
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw r11,r11,r24
	ctx.r11.s32 = ctx.r11.s32 / ctx.r24.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8230ed40
	if (ctx.cr6.gt) goto loc_8230ED40;
loc_8230EE98:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8230ef18
	if (!ctx.cr6.gt) goto loc_8230EF18;
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
loc_8230EEA4:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x8230ef00
	if (ctx.cr6.gt) goto loc_8230EF00;
loc_8230EEB4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230eec8
	if (ctx.cr6.eq) goto loc_8230EEC8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8230eecc
	goto loc_8230EECC;
loc_8230EEC8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8230EECC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230eee0
	if (ctx.cr6.eq) goto loc_8230EEE0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8230eee4
	goto loc_8230EEE4;
loc_8230EEE0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8230EEE4:
	// bl 0x82cb0328
	ctx.lr = 0x8230EEE8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8230eef4
	if (!ctx.cr6.gt) goto loc_8230EEF4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8230EEF4:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8230eeb4
	if (!ctx.cr6.gt) goto loc_8230EEB4;
loc_8230EF00:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230f118
	ctx.lr = 0x8230EF0C;
	sub_8230F118(ctx, base);
	// addi r27,r27,-12
	ctx.r27.s64 = ctx.r27.s64 + -12;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8230eea4
	if (ctx.cr6.gt) goto loc_8230EEA4;
loc_8230EF18:
	// addi r25,r25,-8
	ctx.r25.s64 = ctx.r25.s64 + -8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8230ed1c
	if (!ctx.cr6.lt) goto loc_8230ED1C;
loc_8230EF28:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230EF30"))) PPC_WEAK_FUNC(sub_8230EF30);
PPC_FUNC_IMPL(__imp__sub_8230EF30) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,3004
	ctx.r6.s64 = 3004;
	// addi r4,r11,-15936
	ctx.r4.s64 = ctx.r11.s64 + -15936;
	// bl 0x823bfbc8
	ctx.lr = 0x8230EF4C;
	sub_823BFBC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230EF5C"))) PPC_WEAK_FUNC(sub_8230EF5C);
PPC_FUNC_IMPL(__imp__sub_8230EF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230EF60"))) PPC_WEAK_FUNC(sub_8230EF60);
PPC_FUNC_IMPL(__imp__sub_8230EF60) {
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
	// stfd f2,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-15808
	ctx.r4.s64 = ctx.r11.s64 + -15808;
	// bl 0x823bfbc8
	ctx.lr = 0x8230EF88;
	sub_823BFBC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230EF98"))) PPC_WEAK_FUNC(sub_8230EF98);
PPC_FUNC_IMPL(__imp__sub_8230EF98) {
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
	// stfd f3,56(r1)
	ctx.fpscr.disableFlushMode();
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-15712
	ctx.r4.s64 = ctx.r11.s64 + -15712;
	// bl 0x823bfbc8
	ctx.lr = 0x8230EFC8;
	sub_823BFBC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230EFD8"))) PPC_WEAK_FUNC(sub_8230EFD8);
PPC_FUNC_IMPL(__imp__sub_8230EFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8230F004;
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

__attribute__((alias("__imp__sub_8230F024"))) PPC_WEAK_FUNC(sub_8230F024);
PPC_FUNC_IMPL(__imp__sub_8230F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F028"))) PPC_WEAK_FUNC(sub_8230F028);
PPC_FUNC_IMPL(__imp__sub_8230F028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8230F054;
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

__attribute__((alias("__imp__sub_8230F074"))) PPC_WEAK_FUNC(sub_8230F074);
PPC_FUNC_IMPL(__imp__sub_8230F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F078"))) PPC_WEAK_FUNC(sub_8230F078);
PPC_FUNC_IMPL(__imp__sub_8230F078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8230F0A4;
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

__attribute__((alias("__imp__sub_8230F0C4"))) PPC_WEAK_FUNC(sub_8230F0C4);
PPC_FUNC_IMPL(__imp__sub_8230F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F0C8"))) PPC_WEAK_FUNC(sub_8230F0C8);
PPC_FUNC_IMPL(__imp__sub_8230F0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8230F0F4;
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

__attribute__((alias("__imp__sub_8230F114"))) PPC_WEAK_FUNC(sub_8230F114);
PPC_FUNC_IMPL(__imp__sub_8230F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F118"))) PPC_WEAK_FUNC(sub_8230F118);
PPC_FUNC_IMPL(__imp__sub_8230F118) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294bb8
	ctx.lr = 0x8230F140;
	sub_82294BB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x8230F14C;
	sub_82295908(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295908
	ctx.lr = 0x8230F158;
	sub_82295908(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8230f180
	if (ctx.cr6.eq) goto loc_8230F180;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8230F180;
	sub_82294520(ctx, base);
loc_8230F180:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8230F188;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_8230F1A0"))) PPC_WEAK_FUNC(sub_8230F1A0);
PPC_FUNC_IMPL(__imp__sub_8230F1A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F1A4"))) PPC_WEAK_FUNC(sub_8230F1A4);
PPC_FUNC_IMPL(__imp__sub_8230F1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F1A8"))) PPC_WEAK_FUNC(sub_8230F1A8);
PPC_FUNC_IMPL(__imp__sub_8230F1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F1AC"))) PPC_WEAK_FUNC(sub_8230F1AC);
PPC_FUNC_IMPL(__imp__sub_8230F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F1B0"))) PPC_WEAK_FUNC(sub_8230F1B0);
PPC_FUNC_IMPL(__imp__sub_8230F1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F1B4"))) PPC_WEAK_FUNC(sub_8230F1B4);
PPC_FUNC_IMPL(__imp__sub_8230F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F1B8"))) PPC_WEAK_FUNC(sub_8230F1B8);
PPC_FUNC_IMPL(__imp__sub_8230F1B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F1C8"))) PPC_WEAK_FUNC(sub_8230F1C8);
PPC_FUNC_IMPL(__imp__sub_8230F1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8230F1D0;
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
	// beq cr6,0x8230f210
	if (ctx.cr6.eq) goto loc_8230F210;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230f1fc
	if (!ctx.cr6.eq) goto loc_8230F1FC;
	// bl 0x822900a0
	ctx.lr = 0x8230F1F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8230F1FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230F210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230F210:
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

__attribute__((alias("__imp__sub_8230F228"))) PPC_WEAK_FUNC(sub_8230F228);
PPC_FUNC_IMPL(__imp__sub_8230F228) {
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

__attribute__((alias("__imp__sub_8230F238"))) PPC_WEAK_FUNC(sub_8230F238);
PPC_FUNC_IMPL(__imp__sub_8230F238) {
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

__attribute__((alias("__imp__sub_8230F248"))) PPC_WEAK_FUNC(sub_8230F248);
PPC_FUNC_IMPL(__imp__sub_8230F248) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rlwinm r7,r11,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// addi r6,r8,-13512
	ctx.r6.s64 = ctx.r8.s64 + -13512;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F288"))) PPC_WEAK_FUNC(sub_8230F288);
PPC_FUNC_IMPL(__imp__sub_8230F288) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F290"))) PPC_WEAK_FUNC(sub_8230F290);
PPC_FUNC_IMPL(__imp__sub_8230F290) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rlwinm r7,r11,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// addi r6,r8,-13512
	ctx.r6.s64 = ctx.r8.s64 + -13512;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F2C8"))) PPC_WEAK_FUNC(sub_8230F2C8);
PPC_FUNC_IMPL(__imp__sub_8230F2C8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-13512
	ctx.r10.s64 = ctx.r11.s64 + -13512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8230F2F4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5448
	ctx.lr = 0x8230F2FC;
	sub_822C5448(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230f330
	if (ctx.cr6.eq) goto loc_8230F330;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230f328
	if (ctx.cr6.lt) goto loc_8230F328;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8230f330
	if (!ctx.cr6.gt) goto loc_8230F330;
loc_8230F328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8230F330;
	sub_82294A58(ctx, base);
loc_8230F330:
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

__attribute__((alias("__imp__sub_8230F34C"))) PPC_WEAK_FUNC(sub_8230F34C);
PPC_FUNC_IMPL(__imp__sub_8230F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F350"))) PPC_WEAK_FUNC(sub_8230F350);
PPC_FUNC_IMPL(__imp__sub_8230F350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-13512
	ctx.r10.s64 = ctx.r11.s64 + -13512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8230F374;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5448
	ctx.lr = 0x8230F37C;
	sub_822C5448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F390"))) PPC_WEAK_FUNC(sub_8230F390);
PPC_FUNC_IMPL(__imp__sub_8230F390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r10,19
	ctx.r10.s64 = 19;
	// rlwimi r11,r10,27,0,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0xF8000000) | (ctx.r11.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F3A4"))) PPC_WEAK_FUNC(sub_8230F3A4);
PPC_FUNC_IMPL(__imp__sub_8230F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F3A8"))) PPC_WEAK_FUNC(sub_8230F3A8);
PPC_FUNC_IMPL(__imp__sub_8230F3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,28,1,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x70000000) | (ctx.r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F3BC"))) PPC_WEAK_FUNC(sub_8230F3BC);
PPC_FUNC_IMPL(__imp__sub_8230F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F3C0"))) PPC_WEAK_FUNC(sub_8230F3C0);
PPC_FUNC_IMPL(__imp__sub_8230F3C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rlwinm r7,r11,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// addi r6,r8,-13784
	ctx.r6.s64 = ctx.r8.s64 + -13784;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F400"))) PPC_WEAK_FUNC(sub_8230F400);
PPC_FUNC_IMPL(__imp__sub_8230F400) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F408"))) PPC_WEAK_FUNC(sub_8230F408);
PPC_FUNC_IMPL(__imp__sub_8230F408) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rlwinm r7,r11,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// addi r6,r8,-13784
	ctx.r6.s64 = ctx.r8.s64 + -13784;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F440"))) PPC_WEAK_FUNC(sub_8230F440);
PPC_FUNC_IMPL(__imp__sub_8230F440) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-13784
	ctx.r10.s64 = ctx.r11.s64 + -13784;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8230F46C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5448
	ctx.lr = 0x8230F474;
	sub_822C5448(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230f4a8
	if (ctx.cr6.eq) goto loc_8230F4A8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230f4a0
	if (ctx.cr6.lt) goto loc_8230F4A0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8230f4a8
	if (!ctx.cr6.gt) goto loc_8230F4A8;
loc_8230F4A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8230F4A8;
	sub_82294A58(ctx, base);
loc_8230F4A8:
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

__attribute__((alias("__imp__sub_8230F4C4"))) PPC_WEAK_FUNC(sub_8230F4C4);
PPC_FUNC_IMPL(__imp__sub_8230F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F4C8"))) PPC_WEAK_FUNC(sub_8230F4C8);
PPC_FUNC_IMPL(__imp__sub_8230F4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-13784
	ctx.r10.s64 = ctx.r11.s64 + -13784;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8230F4EC;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5448
	ctx.lr = 0x8230F4F4;
	sub_822C5448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F508"))) PPC_WEAK_FUNC(sub_8230F508);
PPC_FUNC_IMPL(__imp__sub_8230F508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r10,19
	ctx.r10.s64 = 19;
	// rlwimi r11,r10,27,0,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0xF8000000) | (ctx.r11.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F51C"))) PPC_WEAK_FUNC(sub_8230F51C);
PPC_FUNC_IMPL(__imp__sub_8230F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F520"))) PPC_WEAK_FUNC(sub_8230F520);
PPC_FUNC_IMPL(__imp__sub_8230F520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,28,1,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x70000000) | (ctx.r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F534"))) PPC_WEAK_FUNC(sub_8230F534);
PPC_FUNC_IMPL(__imp__sub_8230F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F538"))) PPC_WEAK_FUNC(sub_8230F538);
PPC_FUNC_IMPL(__imp__sub_8230F538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8230F540;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f56c
	if (ctx.cr6.eq) goto loc_8230F56C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8230f574
	goto loc_8230F574;
loc_8230F56C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8230F574:
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b1d38
	ctx.lr = 0x8230F584;
	sub_822B1D38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8230f59c
	if (!ctx.cr6.lt) goto loc_8230F59C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8230F59C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8230f5c8
	if (ctx.cr6.eq) goto loc_8230F5C8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1b70
	ctx.lr = 0x8230F5B4;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82295908
	ctx.lr = 0x8230F5C0;
	sub_82295908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x8230F5C8;
	sub_82299080(ctx, base);
loc_8230F5C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230f610
	if (ctx.cr6.eq) goto loc_8230F610;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8230f5e4
	if (!ctx.cr6.eq) goto loc_8230F5E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F5E4:
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1c78
	ctx.lr = 0x8230F5FC;
	sub_822B1C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82295908
	ctx.lr = 0x8230F608;
	sub_82295908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x8230F610;
	sub_82299080(ctx, base);
loc_8230F610:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F61C"))) PPC_WEAK_FUNC(sub_8230F61C);
PPC_FUNC_IMPL(__imp__sub_8230F61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F620"))) PPC_WEAK_FUNC(sub_8230F620);
PPC_FUNC_IMPL(__imp__sub_8230F620) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-15528
	ctx.r4.s64 = ctx.r11.s64 + -15528;
	// bl 0x823bfbc8
	ctx.lr = 0x8230F638;
	sub_823BFBC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F648"))) PPC_WEAK_FUNC(sub_8230F648);
PPC_FUNC_IMPL(__imp__sub_8230F648) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb2688
	sub_82CB2688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F64C"))) PPC_WEAK_FUNC(sub_8230F64C);
PPC_FUNC_IMPL(__imp__sub_8230F64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F650"))) PPC_WEAK_FUNC(sub_8230F650);
PPC_FUNC_IMPL(__imp__sub_8230F650) {
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
	// bl 0x82cb2640
	ctx.lr = 0x8230F660;
	sub_82CB2640(ctx, base);
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

__attribute__((alias("__imp__sub_8230F674"))) PPC_WEAK_FUNC(sub_8230F674);
PPC_FUNC_IMPL(__imp__sub_8230F674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F678"))) PPC_WEAK_FUNC(sub_8230F678);
PPC_FUNC_IMPL(__imp__sub_8230F678) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F680"))) PPC_WEAK_FUNC(sub_8230F680);
PPC_FUNC_IMPL(__imp__sub_8230F680) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F688"))) PPC_WEAK_FUNC(sub_8230F688);
PPC_FUNC_IMPL(__imp__sub_8230F688) {
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

__attribute__((alias("__imp__sub_8230F698"))) PPC_WEAK_FUNC(sub_8230F698);
PPC_FUNC_IMPL(__imp__sub_8230F698) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

