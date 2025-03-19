#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8243E848"))) PPC_WEAK_FUNC(sub_8243E848);
PPC_FUNC_IMPL(__imp__sub_8243E848) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243e88c
	if (!ctx.cr6.eq) goto loc_8243E88C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243E880;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243E888;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243E88C:
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

__attribute__((alias("__imp__sub_8243E8B4"))) PPC_WEAK_FUNC(sub_8243E8B4);
PPC_FUNC_IMPL(__imp__sub_8243E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243E8B8"))) PPC_WEAK_FUNC(sub_8243E8B8);
PPC_FUNC_IMPL(__imp__sub_8243E8B8) {
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
	ctx.lr = 0x8243E8D4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243e95c
	if (ctx.cr6.eq) goto loc_8243E95C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,24684
	ctx.r11.s64 = ctx.r7.s64 + 24684;
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
	// addi r5,r31,-30256
	ctx.r5.s64 = ctx.r31.s64 + -30256;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243E948;
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
loc_8243E95C:
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

__attribute__((alias("__imp__sub_8243E974"))) PPC_WEAK_FUNC(sub_8243E974);
PPC_FUNC_IMPL(__imp__sub_8243E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243E978"))) PPC_WEAK_FUNC(sub_8243E978);
PPC_FUNC_IMPL(__imp__sub_8243E978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243E980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243e9b0
	if (!ctx.cr6.eq) goto loc_8243E9B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243E9A4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243E9AC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243E9B0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31172);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243e9d0
	if (ctx.cr6.eq) goto loc_8243E9D0;
	// bl 0x82312b88
	ctx.lr = 0x8243E9C4;
	sub_82312B88(ctx, base);
	// lwz r11,-31172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31172);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243e9d8
	goto loc_8243E9D8;
loc_8243E9D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243E9D8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ea00
	if (!ctx.cr6.eq) goto loc_8243EA00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243E9F0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243E9F8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31172);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243EA00:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ea30
	if (!ctx.cr6.eq) goto loc_8243EA30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243EA20;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243EA28;
	sub_82398640(ctx, base);
	// lwz r11,-31172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31172);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243EA30:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243ea68
	if (ctx.cr6.eq) goto loc_8243EA68;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243EA4C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243ea68
	if (!ctx.cr6.eq) goto loc_8243EA68;
	// lwz r3,-31172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243EA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243EA68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243EA70"))) PPC_WEAK_FUNC(sub_8243EA70);
PPC_FUNC_IMPL(__imp__sub_8243EA70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243EA78"))) PPC_WEAK_FUNC(sub_8243EA78);
PPC_FUNC_IMPL(__imp__sub_8243EA78) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243eabc
	if (!ctx.cr6.eq) goto loc_8243EABC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243EAB0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243EAB8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243EABC:
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

__attribute__((alias("__imp__sub_8243EAE4"))) PPC_WEAK_FUNC(sub_8243EAE4);
PPC_FUNC_IMPL(__imp__sub_8243EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243EAE8"))) PPC_WEAK_FUNC(sub_8243EAE8);
PPC_FUNC_IMPL(__imp__sub_8243EAE8) {
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
	ctx.lr = 0x8243EB04;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243eb8c
	if (ctx.cr6.eq) goto loc_8243EB8C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,24736
	ctx.r11.s64 = ctx.r7.s64 + 24736;
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
	// addi r5,r31,-13728
	ctx.r5.s64 = ctx.r31.s64 + -13728;
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
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243EB78;
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
loc_8243EB8C:
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

__attribute__((alias("__imp__sub_8243EBA4"))) PPC_WEAK_FUNC(sub_8243EBA4);
PPC_FUNC_IMPL(__imp__sub_8243EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243EBA8"))) PPC_WEAK_FUNC(sub_8243EBA8);
PPC_FUNC_IMPL(__imp__sub_8243EBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243EBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ebe0
	if (!ctx.cr6.eq) goto loc_8243EBE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243EBD4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243EBDC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243EBE0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31168);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243ec00
	if (ctx.cr6.eq) goto loc_8243EC00;
	// bl 0x82312b88
	ctx.lr = 0x8243EBF4;
	sub_82312B88(ctx, base);
	// lwz r11,-31168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31168);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243ec08
	goto loc_8243EC08;
loc_8243EC00:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243EC08:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ec30
	if (!ctx.cr6.eq) goto loc_8243EC30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243EC20;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243EC28;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31168);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243EC30:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ec60
	if (!ctx.cr6.eq) goto loc_8243EC60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243EC50;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243EC58;
	sub_82398640(ctx, base);
	// lwz r11,-31168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31168);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243EC60:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243ec98
	if (ctx.cr6.eq) goto loc_8243EC98;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243EC7C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243ec98
	if (!ctx.cr6.eq) goto loc_8243EC98;
	// lwz r3,-31168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31168);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243EC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243EC98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243ECA0"))) PPC_WEAK_FUNC(sub_8243ECA0);
PPC_FUNC_IMPL(__imp__sub_8243ECA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243ECA8"))) PPC_WEAK_FUNC(sub_8243ECA8);
PPC_FUNC_IMPL(__imp__sub_8243ECA8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243ecec
	if (!ctx.cr6.eq) goto loc_8243ECEC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243ECE0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243ECE8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243ECEC:
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

__attribute__((alias("__imp__sub_8243ED14"))) PPC_WEAK_FUNC(sub_8243ED14);
PPC_FUNC_IMPL(__imp__sub_8243ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243ED18"))) PPC_WEAK_FUNC(sub_8243ED18);
PPC_FUNC_IMPL(__imp__sub_8243ED18) {
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
	ctx.lr = 0x8243ED34;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243edbc
	if (ctx.cr6.eq) goto loc_8243EDBC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,24816
	ctx.r11.s64 = ctx.r7.s64 + 24816;
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
	// addi r5,r31,-18024
	ctx.r5.s64 = ctx.r31.s64 + -18024;
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
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243EDA8;
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
loc_8243EDBC:
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

__attribute__((alias("__imp__sub_8243EDD4"))) PPC_WEAK_FUNC(sub_8243EDD4);
PPC_FUNC_IMPL(__imp__sub_8243EDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243EDD8"))) PPC_WEAK_FUNC(sub_8243EDD8);
PPC_FUNC_IMPL(__imp__sub_8243EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243EDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ee10
	if (!ctx.cr6.eq) goto loc_8243EE10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82442828
	ctx.lr = 0x8243EE04;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x8243EE0C;
	sub_824428E8(ctx, base);
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_8243EE10:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243ee30
	if (ctx.cr6.eq) goto loc_8243EE30;
	// bl 0x822c79d0
	ctx.lr = 0x8243EE24;
	sub_822C79D0(ctx, base);
	// lwz r11,-31164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31164);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243ee38
	goto loc_8243EE38;
loc_8243EE30:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243EE38:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ee60
	if (!ctx.cr6.eq) goto loc_8243EE60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243EE50;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243EE58;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31164);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243EE60:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ee90
	if (!ctx.cr6.eq) goto loc_8243EE90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243EE80;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243EE88;
	sub_82398640(ctx, base);
	// lwz r11,-31164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31164);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243EE90:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243eec8
	if (ctx.cr6.eq) goto loc_8243EEC8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243EEAC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243eec8
	if (!ctx.cr6.eq) goto loc_8243EEC8;
	// lwz r3,-31164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31164);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243EEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243EEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243EED0"))) PPC_WEAK_FUNC(sub_8243EED0);
PPC_FUNC_IMPL(__imp__sub_8243EED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243EED8"))) PPC_WEAK_FUNC(sub_8243EED8);
PPC_FUNC_IMPL(__imp__sub_8243EED8) {
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
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243ef1c
	if (!ctx.cr6.eq) goto loc_8243EF1C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82442828
	ctx.lr = 0x8243EF10;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x8243EF18;
	sub_824428E8(ctx, base);
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_8243EF1C:
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

__attribute__((alias("__imp__sub_8243EF44"))) PPC_WEAK_FUNC(sub_8243EF44);
PPC_FUNC_IMPL(__imp__sub_8243EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243EF48"))) PPC_WEAK_FUNC(sub_8243EF48);
PPC_FUNC_IMPL(__imp__sub_8243EF48) {
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
	ctx.lr = 0x8243EF64;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243efec
	if (ctx.cr6.eq) goto loc_8243EFEC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,24912
	ctx.r11.s64 = ctx.r7.s64 + 24912;
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
	// addi r5,r31,-27296
	ctx.r5.s64 = ctx.r31.s64 + -27296;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243EFD8;
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
loc_8243EFEC:
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

__attribute__((alias("__imp__sub_8243F004"))) PPC_WEAK_FUNC(sub_8243F004);
PPC_FUNC_IMPL(__imp__sub_8243F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F008"))) PPC_WEAK_FUNC(sub_8243F008);
PPC_FUNC_IMPL(__imp__sub_8243F008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243F010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f040
	if (!ctx.cr6.eq) goto loc_8243F040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243F034;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F03C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F040:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31160);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243f060
	if (ctx.cr6.eq) goto loc_8243F060;
	// bl 0x82312b88
	ctx.lr = 0x8243F054;
	sub_82312B88(ctx, base);
	// lwz r11,-31160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31160);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243f068
	goto loc_8243F068;
loc_8243F060:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243F068:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f090
	if (!ctx.cr6.eq) goto loc_8243F090;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243F080;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243F088;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31160);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243F090:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f0c0
	if (!ctx.cr6.eq) goto loc_8243F0C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243F0B0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243F0B8;
	sub_82398640(ctx, base);
	// lwz r11,-31160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31160);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243F0C0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243f0f8
	if (ctx.cr6.eq) goto loc_8243F0F8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243F0DC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243f0f8
	if (!ctx.cr6.eq) goto loc_8243F0F8;
	// lwz r3,-31160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243F0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243F0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243F100"))) PPC_WEAK_FUNC(sub_8243F100);
PPC_FUNC_IMPL(__imp__sub_8243F100) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243F108"))) PPC_WEAK_FUNC(sub_8243F108);
PPC_FUNC_IMPL(__imp__sub_8243F108) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243f14c
	if (!ctx.cr6.eq) goto loc_8243F14C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243F140;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F148;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F14C:
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

__attribute__((alias("__imp__sub_8243F174"))) PPC_WEAK_FUNC(sub_8243F174);
PPC_FUNC_IMPL(__imp__sub_8243F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F178"))) PPC_WEAK_FUNC(sub_8243F178);
PPC_FUNC_IMPL(__imp__sub_8243F178) {
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
	ctx.lr = 0x8243F194;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f21c
	if (ctx.cr6.eq) goto loc_8243F21C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,24980
	ctx.r11.s64 = ctx.r7.s64 + 24980;
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
	// addi r5,r31,-22728
	ctx.r5.s64 = ctx.r31.s64 + -22728;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243F208;
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
loc_8243F21C:
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

__attribute__((alias("__imp__sub_8243F234"))) PPC_WEAK_FUNC(sub_8243F234);
PPC_FUNC_IMPL(__imp__sub_8243F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F238"))) PPC_WEAK_FUNC(sub_8243F238);
PPC_FUNC_IMPL(__imp__sub_8243F238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243F240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f270
	if (!ctx.cr6.eq) goto loc_8243F270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243F264;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F26C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F270:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31156);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243f290
	if (ctx.cr6.eq) goto loc_8243F290;
	// bl 0x82312b88
	ctx.lr = 0x8243F284;
	sub_82312B88(ctx, base);
	// lwz r11,-31156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31156);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243f298
	goto loc_8243F298;
loc_8243F290:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243F298:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f2c0
	if (!ctx.cr6.eq) goto loc_8243F2C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243F2B0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243F2B8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31156);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243F2C0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f2f0
	if (!ctx.cr6.eq) goto loc_8243F2F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243F2E0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243F2E8;
	sub_82398640(ctx, base);
	// lwz r11,-31156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31156);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243F2F0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243f328
	if (ctx.cr6.eq) goto loc_8243F328;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243F30C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243f328
	if (!ctx.cr6.eq) goto loc_8243F328;
	// lwz r3,-31156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31156);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243F328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243F328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243F330"))) PPC_WEAK_FUNC(sub_8243F330);
PPC_FUNC_IMPL(__imp__sub_8243F330) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243F338"))) PPC_WEAK_FUNC(sub_8243F338);
PPC_FUNC_IMPL(__imp__sub_8243F338) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243f37c
	if (!ctx.cr6.eq) goto loc_8243F37C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243F370;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F378;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F37C:
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

__attribute__((alias("__imp__sub_8243F3A4"))) PPC_WEAK_FUNC(sub_8243F3A4);
PPC_FUNC_IMPL(__imp__sub_8243F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F3A8"))) PPC_WEAK_FUNC(sub_8243F3A8);
PPC_FUNC_IMPL(__imp__sub_8243F3A8) {
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
	ctx.lr = 0x8243F3C4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f44c
	if (ctx.cr6.eq) goto loc_8243F44C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25040
	ctx.r11.s64 = ctx.r7.s64 + 25040;
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
	// addi r5,r31,-25040
	ctx.r5.s64 = ctx.r31.s64 + -25040;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243F438;
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
loc_8243F44C:
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

__attribute__((alias("__imp__sub_8243F464"))) PPC_WEAK_FUNC(sub_8243F464);
PPC_FUNC_IMPL(__imp__sub_8243F464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F468"))) PPC_WEAK_FUNC(sub_8243F468);
PPC_FUNC_IMPL(__imp__sub_8243F468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243F470;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f4a0
	if (!ctx.cr6.eq) goto loc_8243F4A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243F494;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F49C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F4A0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31152);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243f4c0
	if (ctx.cr6.eq) goto loc_8243F4C0;
	// bl 0x82312b88
	ctx.lr = 0x8243F4B4;
	sub_82312B88(ctx, base);
	// lwz r11,-31152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31152);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243f4c8
	goto loc_8243F4C8;
loc_8243F4C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243F4C8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f4f0
	if (!ctx.cr6.eq) goto loc_8243F4F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243F4E0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243F4E8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31152);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243F4F0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f520
	if (!ctx.cr6.eq) goto loc_8243F520;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243F510;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243F518;
	sub_82398640(ctx, base);
	// lwz r11,-31152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31152);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243F520:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243f558
	if (ctx.cr6.eq) goto loc_8243F558;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243F53C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243f558
	if (!ctx.cr6.eq) goto loc_8243F558;
	// lwz r3,-31152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31152);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243F558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243F558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243F560"))) PPC_WEAK_FUNC(sub_8243F560);
PPC_FUNC_IMPL(__imp__sub_8243F560) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243F568"))) PPC_WEAK_FUNC(sub_8243F568);
PPC_FUNC_IMPL(__imp__sub_8243F568) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243f5ac
	if (!ctx.cr6.eq) goto loc_8243F5AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243F5A0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F5A8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F5AC:
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

__attribute__((alias("__imp__sub_8243F5D4"))) PPC_WEAK_FUNC(sub_8243F5D4);
PPC_FUNC_IMPL(__imp__sub_8243F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F5D8"))) PPC_WEAK_FUNC(sub_8243F5D8);
PPC_FUNC_IMPL(__imp__sub_8243F5D8) {
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
	ctx.lr = 0x8243F5F4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f67c
	if (ctx.cr6.eq) goto loc_8243F67C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25104
	ctx.r11.s64 = ctx.r7.s64 + 25104;
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
	// addi r5,r31,-25600
	ctx.r5.s64 = ctx.r31.s64 + -25600;
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
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243F668;
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
loc_8243F67C:
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

__attribute__((alias("__imp__sub_8243F694"))) PPC_WEAK_FUNC(sub_8243F694);
PPC_FUNC_IMPL(__imp__sub_8243F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F698"))) PPC_WEAK_FUNC(sub_8243F698);
PPC_FUNC_IMPL(__imp__sub_8243F698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243F6A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f6d0
	if (!ctx.cr6.eq) goto loc_8243F6D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243F6C4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F6CC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F6D0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31148);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243f6f0
	if (ctx.cr6.eq) goto loc_8243F6F0;
	// bl 0x82312b88
	ctx.lr = 0x8243F6E4;
	sub_82312B88(ctx, base);
	// lwz r11,-31148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31148);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243f6f8
	goto loc_8243F6F8;
loc_8243F6F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243F6F8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f720
	if (!ctx.cr6.eq) goto loc_8243F720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243F710;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243F718;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31148);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243F720:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f750
	if (!ctx.cr6.eq) goto loc_8243F750;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243F740;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243F748;
	sub_82398640(ctx, base);
	// lwz r11,-31148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31148);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243F750:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243f788
	if (ctx.cr6.eq) goto loc_8243F788;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243F76C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243f788
	if (!ctx.cr6.eq) goto loc_8243F788;
	// lwz r3,-31148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31148);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243F788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243F788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243F790"))) PPC_WEAK_FUNC(sub_8243F790);
PPC_FUNC_IMPL(__imp__sub_8243F790) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243F798"))) PPC_WEAK_FUNC(sub_8243F798);
PPC_FUNC_IMPL(__imp__sub_8243F798) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243f7dc
	if (!ctx.cr6.eq) goto loc_8243F7DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243F7D0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F7D8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F7DC:
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

__attribute__((alias("__imp__sub_8243F804"))) PPC_WEAK_FUNC(sub_8243F804);
PPC_FUNC_IMPL(__imp__sub_8243F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F808"))) PPC_WEAK_FUNC(sub_8243F808);
PPC_FUNC_IMPL(__imp__sub_8243F808) {
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
	ctx.lr = 0x8243F824;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f8ac
	if (ctx.cr6.eq) goto loc_8243F8AC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25172
	ctx.r11.s64 = ctx.r7.s64 + 25172;
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
	// addi r5,r31,-28856
	ctx.r5.s64 = ctx.r31.s64 + -28856;
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
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243F898;
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
loc_8243F8AC:
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

__attribute__((alias("__imp__sub_8243F8C4"))) PPC_WEAK_FUNC(sub_8243F8C4);
PPC_FUNC_IMPL(__imp__sub_8243F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243F8C8"))) PPC_WEAK_FUNC(sub_8243F8C8);
PPC_FUNC_IMPL(__imp__sub_8243F8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243F8D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f900
	if (!ctx.cr6.eq) goto loc_8243F900;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243F8F4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243F8FC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243F900:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31144);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243f920
	if (ctx.cr6.eq) goto loc_8243F920;
	// bl 0x82312b88
	ctx.lr = 0x8243F914;
	sub_82312B88(ctx, base);
	// lwz r11,-31144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31144);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243f928
	goto loc_8243F928;
loc_8243F920:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243F928:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f950
	if (!ctx.cr6.eq) goto loc_8243F950;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243F940;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243F948;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31144);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243F950:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243f980
	if (!ctx.cr6.eq) goto loc_8243F980;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243F970;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243F978;
	sub_82398640(ctx, base);
	// lwz r11,-31144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31144);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243F980:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243f9b8
	if (ctx.cr6.eq) goto loc_8243F9B8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243F99C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243f9b8
	if (!ctx.cr6.eq) goto loc_8243F9B8;
	// lwz r3,-31144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243F9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243F9B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243F9C0"))) PPC_WEAK_FUNC(sub_8243F9C0);
PPC_FUNC_IMPL(__imp__sub_8243F9C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243F9C8"))) PPC_WEAK_FUNC(sub_8243F9C8);
PPC_FUNC_IMPL(__imp__sub_8243F9C8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243fa0c
	if (!ctx.cr6.eq) goto loc_8243FA0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243FA00;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243FA08;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243FA0C:
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

__attribute__((alias("__imp__sub_8243FA34"))) PPC_WEAK_FUNC(sub_8243FA34);
PPC_FUNC_IMPL(__imp__sub_8243FA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243FA38"))) PPC_WEAK_FUNC(sub_8243FA38);
PPC_FUNC_IMPL(__imp__sub_8243FA38) {
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
	ctx.lr = 0x8243FA54;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243fadc
	if (ctx.cr6.eq) goto loc_8243FADC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25224
	ctx.r11.s64 = ctx.r7.s64 + 25224;
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
	// addi r5,r31,-26720
	ctx.r5.s64 = ctx.r31.s64 + -26720;
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
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243FAC8;
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
loc_8243FADC:
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

__attribute__((alias("__imp__sub_8243FAF4"))) PPC_WEAK_FUNC(sub_8243FAF4);
PPC_FUNC_IMPL(__imp__sub_8243FAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243FAF8"))) PPC_WEAK_FUNC(sub_8243FAF8);
PPC_FUNC_IMPL(__imp__sub_8243FAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243FB00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243fb30
	if (!ctx.cr6.eq) goto loc_8243FB30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243FB24;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243FB2C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243FB30:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31140);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243fb50
	if (ctx.cr6.eq) goto loc_8243FB50;
	// bl 0x82312b88
	ctx.lr = 0x8243FB44;
	sub_82312B88(ctx, base);
	// lwz r11,-31140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31140);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243fb58
	goto loc_8243FB58;
loc_8243FB50:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243FB58:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243fb80
	if (!ctx.cr6.eq) goto loc_8243FB80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243FB70;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243FB78;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31140);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243FB80:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243fbb0
	if (!ctx.cr6.eq) goto loc_8243FBB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243FBA0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243FBA8;
	sub_82398640(ctx, base);
	// lwz r11,-31140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31140);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243FBB0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243fbe8
	if (ctx.cr6.eq) goto loc_8243FBE8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243FBCC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243fbe8
	if (!ctx.cr6.eq) goto loc_8243FBE8;
	// lwz r3,-31140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31140);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243FBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243FBE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243FBF0"))) PPC_WEAK_FUNC(sub_8243FBF0);
PPC_FUNC_IMPL(__imp__sub_8243FBF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243FBF8"))) PPC_WEAK_FUNC(sub_8243FBF8);
PPC_FUNC_IMPL(__imp__sub_8243FBF8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243fc3c
	if (!ctx.cr6.eq) goto loc_8243FC3C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243FC30;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243FC38;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243FC3C:
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

__attribute__((alias("__imp__sub_8243FC64"))) PPC_WEAK_FUNC(sub_8243FC64);
PPC_FUNC_IMPL(__imp__sub_8243FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243FC68"))) PPC_WEAK_FUNC(sub_8243FC68);
PPC_FUNC_IMPL(__imp__sub_8243FC68) {
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
	ctx.lr = 0x8243FC84;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243fd0c
	if (ctx.cr6.eq) goto loc_8243FD0C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25280
	ctx.r11.s64 = ctx.r7.s64 + 25280;
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
	// addi r5,r31,-26440
	ctx.r5.s64 = ctx.r31.s64 + -26440;
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
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243FCF8;
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
loc_8243FD0C:
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

__attribute__((alias("__imp__sub_8243FD24"))) PPC_WEAK_FUNC(sub_8243FD24);
PPC_FUNC_IMPL(__imp__sub_8243FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243FD28"))) PPC_WEAK_FUNC(sub_8243FD28);
PPC_FUNC_IMPL(__imp__sub_8243FD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243FD30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243fd60
	if (!ctx.cr6.eq) goto loc_8243FD60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243FD54;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243FD5C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243FD60:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243fd80
	if (ctx.cr6.eq) goto loc_8243FD80;
	// bl 0x82312b88
	ctx.lr = 0x8243FD74;
	sub_82312B88(ctx, base);
	// lwz r11,-31136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31136);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243fd88
	goto loc_8243FD88;
loc_8243FD80:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243FD88:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243fdb0
	if (!ctx.cr6.eq) goto loc_8243FDB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243FDA0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243FDA8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31136);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243FDB0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243fde0
	if (!ctx.cr6.eq) goto loc_8243FDE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x8243FDD0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8243FDD8;
	sub_82398640(ctx, base);
	// lwz r11,-31136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31136);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_8243FDE0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8243fe18
	if (ctx.cr6.eq) goto loc_8243FE18;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8243FDFC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8243fe18
	if (!ctx.cr6.eq) goto loc_8243FE18;
	// lwz r3,-31136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243FE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243FE18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243FE20"))) PPC_WEAK_FUNC(sub_8243FE20);
PPC_FUNC_IMPL(__imp__sub_8243FE20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243FE28"))) PPC_WEAK_FUNC(sub_8243FE28);
PPC_FUNC_IMPL(__imp__sub_8243FE28) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243fe6c
	if (!ctx.cr6.eq) goto loc_8243FE6C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x8243FE60;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243FE68;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243FE6C:
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

__attribute__((alias("__imp__sub_8243FE94"))) PPC_WEAK_FUNC(sub_8243FE94);
PPC_FUNC_IMPL(__imp__sub_8243FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243FE98"))) PPC_WEAK_FUNC(sub_8243FE98);
PPC_FUNC_IMPL(__imp__sub_8243FE98) {
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
	ctx.lr = 0x8243FEB4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243ff3c
	if (ctx.cr6.eq) goto loc_8243FF3C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25352
	ctx.r11.s64 = ctx.r7.s64 + 25352;
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
	// addi r5,r31,-26160
	ctx.r5.s64 = ctx.r31.s64 + -26160;
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
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x8243FF28;
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
loc_8243FF3C:
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

__attribute__((alias("__imp__sub_8243FF54"))) PPC_WEAK_FUNC(sub_8243FF54);
PPC_FUNC_IMPL(__imp__sub_8243FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8243FF58"))) PPC_WEAK_FUNC(sub_8243FF58);
PPC_FUNC_IMPL(__imp__sub_8243FF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8243FF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ff90
	if (!ctx.cr6.eq) goto loc_8243FF90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x8243FF84;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8243FF8C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8243FF90:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243ffb0
	if (ctx.cr6.eq) goto loc_8243FFB0;
	// bl 0x82312b88
	ctx.lr = 0x8243FFA4;
	sub_82312B88(ctx, base);
	// lwz r11,-31132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31132);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8243ffb8
	goto loc_8243FFB8;
loc_8243FFB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8243FFB8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ffe0
	if (!ctx.cr6.eq) goto loc_8243FFE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x8243FFD0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x8243FFD8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31132);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_8243FFE0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440010
	if (!ctx.cr6.eq) goto loc_82440010;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82440000;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82440008;
	sub_82398640(ctx, base);
	// lwz r11,-31132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31132);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82440010:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82440048
	if (ctx.cr6.eq) goto loc_82440048;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244002C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82440048
	if (!ctx.cr6.eq) goto loc_82440048;
	// lwz r3,-31132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82440048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82440048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82440050"))) PPC_WEAK_FUNC(sub_82440050);
PPC_FUNC_IMPL(__imp__sub_82440050) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82440058"))) PPC_WEAK_FUNC(sub_82440058);
PPC_FUNC_IMPL(__imp__sub_82440058) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244009c
	if (!ctx.cr6.eq) goto loc_8244009C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82440090;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440098;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244009C:
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

__attribute__((alias("__imp__sub_824400C4"))) PPC_WEAK_FUNC(sub_824400C4);
PPC_FUNC_IMPL(__imp__sub_824400C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824400C8"))) PPC_WEAK_FUNC(sub_824400C8);
PPC_FUNC_IMPL(__imp__sub_824400C8) {
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
	ctx.lr = 0x824400E4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244016c
	if (ctx.cr6.eq) goto loc_8244016C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25424
	ctx.r11.s64 = ctx.r7.s64 + 25424;
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
	// addi r5,r31,-25880
	ctx.r5.s64 = ctx.r31.s64 + -25880;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82440158;
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
loc_8244016C:
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

__attribute__((alias("__imp__sub_82440184"))) PPC_WEAK_FUNC(sub_82440184);
PPC_FUNC_IMPL(__imp__sub_82440184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440188"))) PPC_WEAK_FUNC(sub_82440188);
PPC_FUNC_IMPL(__imp__sub_82440188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82440190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824401c0
	if (!ctx.cr6.eq) goto loc_824401C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x824401B4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824401BC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824401C0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824401e0
	if (ctx.cr6.eq) goto loc_824401E0;
	// bl 0x82312b88
	ctx.lr = 0x824401D4;
	sub_82312B88(ctx, base);
	// lwz r11,-31128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31128);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x824401e8
	goto loc_824401E8;
loc_824401E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_824401E8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440210
	if (!ctx.cr6.eq) goto loc_82440210;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82440200;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82440208;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31128);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82440210:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440240
	if (!ctx.cr6.eq) goto loc_82440240;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82440230;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82440238;
	sub_82398640(ctx, base);
	// lwz r11,-31128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31128);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82440240:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82440278
	if (ctx.cr6.eq) goto loc_82440278;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244025C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82440278
	if (!ctx.cr6.eq) goto loc_82440278;
	// lwz r3,-31128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82440278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82440278:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82440280"))) PPC_WEAK_FUNC(sub_82440280);
PPC_FUNC_IMPL(__imp__sub_82440280) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82440288"))) PPC_WEAK_FUNC(sub_82440288);
PPC_FUNC_IMPL(__imp__sub_82440288) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824402cc
	if (!ctx.cr6.eq) goto loc_824402CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x824402C0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824402C8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824402CC:
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

__attribute__((alias("__imp__sub_824402F4"))) PPC_WEAK_FUNC(sub_824402F4);
PPC_FUNC_IMPL(__imp__sub_824402F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824402F8"))) PPC_WEAK_FUNC(sub_824402F8);
PPC_FUNC_IMPL(__imp__sub_824402F8) {
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
	ctx.lr = 0x82440314;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244039c
	if (ctx.cr6.eq) goto loc_8244039C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25496
	ctx.r11.s64 = ctx.r7.s64 + 25496;
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
	// addi r5,r31,-10648
	ctx.r5.s64 = ctx.r31.s64 + -10648;
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
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82440388;
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
loc_8244039C:
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

__attribute__((alias("__imp__sub_824403B4"))) PPC_WEAK_FUNC(sub_824403B4);
PPC_FUNC_IMPL(__imp__sub_824403B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824403B8"))) PPC_WEAK_FUNC(sub_824403B8);
PPC_FUNC_IMPL(__imp__sub_824403B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824403C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824403f0
	if (!ctx.cr6.eq) goto loc_824403F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x824403E4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824403EC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824403F0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82440410
	if (ctx.cr6.eq) goto loc_82440410;
	// bl 0x82312b88
	ctx.lr = 0x82440404;
	sub_82312B88(ctx, base);
	// lwz r11,-31124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31124);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82440418
	goto loc_82440418;
loc_82440410:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82440418:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440440
	if (!ctx.cr6.eq) goto loc_82440440;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82440430;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82440438;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31124);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82440440:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440470
	if (!ctx.cr6.eq) goto loc_82440470;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82440460;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82440468;
	sub_82398640(ctx, base);
	// lwz r11,-31124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31124);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82440470:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824404a8
	if (ctx.cr6.eq) goto loc_824404A8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244048C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824404a8
	if (!ctx.cr6.eq) goto loc_824404A8;
	// lwz r3,-31124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31124);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824404A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824404A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824404B0"))) PPC_WEAK_FUNC(sub_824404B0);
PPC_FUNC_IMPL(__imp__sub_824404B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824404B8"))) PPC_WEAK_FUNC(sub_824404B8);
PPC_FUNC_IMPL(__imp__sub_824404B8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824404fc
	if (!ctx.cr6.eq) goto loc_824404FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x824404F0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824404F8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824404FC:
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

__attribute__((alias("__imp__sub_82440524"))) PPC_WEAK_FUNC(sub_82440524);
PPC_FUNC_IMPL(__imp__sub_82440524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440528"))) PPC_WEAK_FUNC(sub_82440528);
PPC_FUNC_IMPL(__imp__sub_82440528) {
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
	ctx.lr = 0x82440544;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824405cc
	if (ctx.cr6.eq) goto loc_824405CC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25544
	ctx.r11.s64 = ctx.r7.s64 + 25544;
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
	// addi r5,r31,-29416
	ctx.r5.s64 = ctx.r31.s64 + -29416;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824405B8;
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
loc_824405CC:
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

__attribute__((alias("__imp__sub_824405E4"))) PPC_WEAK_FUNC(sub_824405E4);
PPC_FUNC_IMPL(__imp__sub_824405E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824405E8"))) PPC_WEAK_FUNC(sub_824405E8);
PPC_FUNC_IMPL(__imp__sub_824405E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824405F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440620
	if (!ctx.cr6.eq) goto loc_82440620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82440614;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244061C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440620:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82440640
	if (ctx.cr6.eq) goto loc_82440640;
	// bl 0x82312b88
	ctx.lr = 0x82440634;
	sub_82312B88(ctx, base);
	// lwz r11,-31120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31120);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82440648
	goto loc_82440648;
loc_82440640:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82440648:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440670
	if (!ctx.cr6.eq) goto loc_82440670;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82440660;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82440668;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31120);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82440670:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824406a0
	if (!ctx.cr6.eq) goto loc_824406A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82440690;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82440698;
	sub_82398640(ctx, base);
	// lwz r11,-31120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31120);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824406A0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824406d8
	if (ctx.cr6.eq) goto loc_824406D8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824406BC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824406d8
	if (!ctx.cr6.eq) goto loc_824406D8;
	// lwz r3,-31120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824406D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824406D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824406E0"))) PPC_WEAK_FUNC(sub_824406E0);
PPC_FUNC_IMPL(__imp__sub_824406E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824406E8"))) PPC_WEAK_FUNC(sub_824406E8);
PPC_FUNC_IMPL(__imp__sub_824406E8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244072c
	if (!ctx.cr6.eq) goto loc_8244072C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82440720;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440728;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244072C:
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

__attribute__((alias("__imp__sub_82440754"))) PPC_WEAK_FUNC(sub_82440754);
PPC_FUNC_IMPL(__imp__sub_82440754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440758"))) PPC_WEAK_FUNC(sub_82440758);
PPC_FUNC_IMPL(__imp__sub_82440758) {
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
	ctx.lr = 0x82440774;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824407fc
	if (ctx.cr6.eq) goto loc_824407FC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25608
	ctx.r11.s64 = ctx.r7.s64 + 25608;
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
	// addi r5,r31,-16528
	ctx.r5.s64 = ctx.r31.s64 + -16528;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824407E8;
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
loc_824407FC:
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

__attribute__((alias("__imp__sub_82440814"))) PPC_WEAK_FUNC(sub_82440814);
PPC_FUNC_IMPL(__imp__sub_82440814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440818"))) PPC_WEAK_FUNC(sub_82440818);
PPC_FUNC_IMPL(__imp__sub_82440818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82440820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440850
	if (!ctx.cr6.eq) goto loc_82440850;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82440844;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244084C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440850:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82440870
	if (ctx.cr6.eq) goto loc_82440870;
	// bl 0x82312b88
	ctx.lr = 0x82440864;
	sub_82312B88(ctx, base);
	// lwz r11,-31116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31116);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82440878
	goto loc_82440878;
loc_82440870:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82440878:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824408a0
	if (!ctx.cr6.eq) goto loc_824408A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82440890;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82440898;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31116);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_824408A0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824408d0
	if (!ctx.cr6.eq) goto loc_824408D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824408C0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824408C8;
	sub_82398640(ctx, base);
	// lwz r11,-31116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31116);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824408D0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82440908
	if (ctx.cr6.eq) goto loc_82440908;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824408EC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82440908
	if (!ctx.cr6.eq) goto loc_82440908;
	// lwz r3,-31116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82440908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82440908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82440910"))) PPC_WEAK_FUNC(sub_82440910);
PPC_FUNC_IMPL(__imp__sub_82440910) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82440918"))) PPC_WEAK_FUNC(sub_82440918);
PPC_FUNC_IMPL(__imp__sub_82440918) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244095c
	if (!ctx.cr6.eq) goto loc_8244095C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82440950;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440958;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244095C:
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

__attribute__((alias("__imp__sub_82440984"))) PPC_WEAK_FUNC(sub_82440984);
PPC_FUNC_IMPL(__imp__sub_82440984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440988"))) PPC_WEAK_FUNC(sub_82440988);
PPC_FUNC_IMPL(__imp__sub_82440988) {
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
	ctx.lr = 0x824409A4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82440a2c
	if (ctx.cr6.eq) goto loc_82440A2C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25680
	ctx.r11.s64 = ctx.r7.s64 + 25680;
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
	// addi r5,r31,-18928
	ctx.r5.s64 = ctx.r31.s64 + -18928;
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
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82440A18;
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
loc_82440A2C:
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

__attribute__((alias("__imp__sub_82440A44"))) PPC_WEAK_FUNC(sub_82440A44);
PPC_FUNC_IMPL(__imp__sub_82440A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440A48"))) PPC_WEAK_FUNC(sub_82440A48);
PPC_FUNC_IMPL(__imp__sub_82440A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82440A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440a80
	if (!ctx.cr6.eq) goto loc_82440A80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82440A74;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440A7C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440A80:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82440aa0
	if (ctx.cr6.eq) goto loc_82440AA0;
	// bl 0x82312b88
	ctx.lr = 0x82440A94;
	sub_82312B88(ctx, base);
	// lwz r11,-31112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31112);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82440aa8
	goto loc_82440AA8;
loc_82440AA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82440AA8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440ad0
	if (!ctx.cr6.eq) goto loc_82440AD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82440AC0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82440AC8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31112);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82440AD0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440b00
	if (!ctx.cr6.eq) goto loc_82440B00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82440AF0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82440AF8;
	sub_82398640(ctx, base);
	// lwz r11,-31112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31112);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82440B00:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82440b38
	if (ctx.cr6.eq) goto loc_82440B38;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82440B1C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82440b38
	if (!ctx.cr6.eq) goto loc_82440B38;
	// lwz r3,-31112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82440B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82440B38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82440B40"))) PPC_WEAK_FUNC(sub_82440B40);
PPC_FUNC_IMPL(__imp__sub_82440B40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82440B48"))) PPC_WEAK_FUNC(sub_82440B48);
PPC_FUNC_IMPL(__imp__sub_82440B48) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82440b8c
	if (!ctx.cr6.eq) goto loc_82440B8C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82440B80;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440B88;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440B8C:
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

__attribute__((alias("__imp__sub_82440BB4"))) PPC_WEAK_FUNC(sub_82440BB4);
PPC_FUNC_IMPL(__imp__sub_82440BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440BB8"))) PPC_WEAK_FUNC(sub_82440BB8);
PPC_FUNC_IMPL(__imp__sub_82440BB8) {
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
	ctx.lr = 0x82440BD4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82440c5c
	if (ctx.cr6.eq) goto loc_82440C5C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25732
	ctx.r11.s64 = ctx.r7.s64 + 25732;
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
	// addi r5,r31,-16248
	ctx.r5.s64 = ctx.r31.s64 + -16248;
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
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82440C48;
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
loc_82440C5C:
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

__attribute__((alias("__imp__sub_82440C74"))) PPC_WEAK_FUNC(sub_82440C74);
PPC_FUNC_IMPL(__imp__sub_82440C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440C78"))) PPC_WEAK_FUNC(sub_82440C78);
PPC_FUNC_IMPL(__imp__sub_82440C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82440C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440cb0
	if (!ctx.cr6.eq) goto loc_82440CB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82440CA4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440CAC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440CB0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82440cd0
	if (ctx.cr6.eq) goto loc_82440CD0;
	// bl 0x82312b88
	ctx.lr = 0x82440CC4;
	sub_82312B88(ctx, base);
	// lwz r11,-31108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82440cd8
	goto loc_82440CD8;
loc_82440CD0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82440CD8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440d00
	if (!ctx.cr6.eq) goto loc_82440D00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82440CF0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82440CF8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82440D00:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440d30
	if (!ctx.cr6.eq) goto loc_82440D30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82440D20;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82440D28;
	sub_82398640(ctx, base);
	// lwz r11,-31108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82440D30:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82440d68
	if (ctx.cr6.eq) goto loc_82440D68;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82440D4C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82440d68
	if (!ctx.cr6.eq) goto loc_82440D68;
	// lwz r3,-31108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82440D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82440D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82440D70"))) PPC_WEAK_FUNC(sub_82440D70);
PPC_FUNC_IMPL(__imp__sub_82440D70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82440D78"))) PPC_WEAK_FUNC(sub_82440D78);
PPC_FUNC_IMPL(__imp__sub_82440D78) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82440dbc
	if (!ctx.cr6.eq) goto loc_82440DBC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82440DB0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440DB8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440DBC:
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

__attribute__((alias("__imp__sub_82440DE4"))) PPC_WEAK_FUNC(sub_82440DE4);
PPC_FUNC_IMPL(__imp__sub_82440DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440DE8"))) PPC_WEAK_FUNC(sub_82440DE8);
PPC_FUNC_IMPL(__imp__sub_82440DE8) {
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
	ctx.lr = 0x82440E04;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82440e8c
	if (ctx.cr6.eq) goto loc_82440E8C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25788
	ctx.r11.s64 = ctx.r7.s64 + 25788;
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
	// addi r5,r31,-14848
	ctx.r5.s64 = ctx.r31.s64 + -14848;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82440E78;
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
loc_82440E8C:
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

__attribute__((alias("__imp__sub_82440EA4"))) PPC_WEAK_FUNC(sub_82440EA4);
PPC_FUNC_IMPL(__imp__sub_82440EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82440EA8"))) PPC_WEAK_FUNC(sub_82440EA8);
PPC_FUNC_IMPL(__imp__sub_82440EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82440EB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440ee0
	if (!ctx.cr6.eq) goto loc_82440EE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82440ED4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440EDC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440EE0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82440f00
	if (ctx.cr6.eq) goto loc_82440F00;
	// bl 0x82312b88
	ctx.lr = 0x82440EF4;
	sub_82312B88(ctx, base);
	// lwz r11,-31104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31104);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82440f08
	goto loc_82440F08;
loc_82440F00:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82440F08:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440f30
	if (!ctx.cr6.eq) goto loc_82440F30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82440F20;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82440F28;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31104);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82440F30:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82440f60
	if (!ctx.cr6.eq) goto loc_82440F60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82440F50;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82440F58;
	sub_82398640(ctx, base);
	// lwz r11,-31104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31104);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82440F60:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82440f98
	if (ctx.cr6.eq) goto loc_82440F98;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82440F7C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82440f98
	if (!ctx.cr6.eq) goto loc_82440F98;
	// lwz r3,-31104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82440F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82440F98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82440FA0"))) PPC_WEAK_FUNC(sub_82440FA0);
PPC_FUNC_IMPL(__imp__sub_82440FA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82440FA8"))) PPC_WEAK_FUNC(sub_82440FA8);
PPC_FUNC_IMPL(__imp__sub_82440FA8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82440fec
	if (!ctx.cr6.eq) goto loc_82440FEC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82440FE0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82440FE8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82440FEC:
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

__attribute__((alias("__imp__sub_82441014"))) PPC_WEAK_FUNC(sub_82441014);
PPC_FUNC_IMPL(__imp__sub_82441014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441018"))) PPC_WEAK_FUNC(sub_82441018);
PPC_FUNC_IMPL(__imp__sub_82441018) {
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
	ctx.lr = 0x82441034;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824410bc
	if (ctx.cr6.eq) goto loc_824410BC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25836
	ctx.r11.s64 = ctx.r7.s64 + 25836;
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
	// addi r5,r31,-25320
	ctx.r5.s64 = ctx.r31.s64 + -25320;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824410A8;
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
loc_824410BC:
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

__attribute__((alias("__imp__sub_824410D4"))) PPC_WEAK_FUNC(sub_824410D4);
PPC_FUNC_IMPL(__imp__sub_824410D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824410D8"))) PPC_WEAK_FUNC(sub_824410D8);
PPC_FUNC_IMPL(__imp__sub_824410D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824410E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441110
	if (!ctx.cr6.eq) goto loc_82441110;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82441104;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244110C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441110:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82441130
	if (ctx.cr6.eq) goto loc_82441130;
	// bl 0x82312b88
	ctx.lr = 0x82441124;
	sub_82312B88(ctx, base);
	// lwz r11,-31100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31100);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82441138
	goto loc_82441138;
loc_82441130:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82441138:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441160
	if (!ctx.cr6.eq) goto loc_82441160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82441150;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82441158;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31100);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82441160:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441190
	if (!ctx.cr6.eq) goto loc_82441190;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82441180;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82441188;
	sub_82398640(ctx, base);
	// lwz r11,-31100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31100);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82441190:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824411c8
	if (ctx.cr6.eq) goto loc_824411C8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824411AC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824411c8
	if (!ctx.cr6.eq) goto loc_824411C8;
	// lwz r3,-31100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31100);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824411C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824411C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824411D0"))) PPC_WEAK_FUNC(sub_824411D0);
PPC_FUNC_IMPL(__imp__sub_824411D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824411D8"))) PPC_WEAK_FUNC(sub_824411D8);
PPC_FUNC_IMPL(__imp__sub_824411D8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244121c
	if (!ctx.cr6.eq) goto loc_8244121C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82441210;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441218;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244121C:
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

__attribute__((alias("__imp__sub_82441244"))) PPC_WEAK_FUNC(sub_82441244);
PPC_FUNC_IMPL(__imp__sub_82441244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441248"))) PPC_WEAK_FUNC(sub_82441248);
PPC_FUNC_IMPL(__imp__sub_82441248) {
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
	ctx.lr = 0x82441264;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824412ec
	if (ctx.cr6.eq) goto loc_824412EC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25888
	ctx.r11.s64 = ctx.r7.s64 + 25888;
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
	// addi r5,r31,-29696
	ctx.r5.s64 = ctx.r31.s64 + -29696;
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
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824412D8;
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
loc_824412EC:
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

__attribute__((alias("__imp__sub_82441304"))) PPC_WEAK_FUNC(sub_82441304);
PPC_FUNC_IMPL(__imp__sub_82441304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441308"))) PPC_WEAK_FUNC(sub_82441308);
PPC_FUNC_IMPL(__imp__sub_82441308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82441310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441340
	if (!ctx.cr6.eq) goto loc_82441340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82441334;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244133C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441340:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82441360
	if (ctx.cr6.eq) goto loc_82441360;
	// bl 0x82312b88
	ctx.lr = 0x82441354;
	sub_82312B88(ctx, base);
	// lwz r11,-31096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31096);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82441368
	goto loc_82441368;
loc_82441360:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82441368:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441390
	if (!ctx.cr6.eq) goto loc_82441390;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82441380;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82441388;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31096);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82441390:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824413c0
	if (!ctx.cr6.eq) goto loc_824413C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824413B0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824413B8;
	sub_82398640(ctx, base);
	// lwz r11,-31096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31096);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824413C0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824413f8
	if (ctx.cr6.eq) goto loc_824413F8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824413DC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824413f8
	if (!ctx.cr6.eq) goto loc_824413F8;
	// lwz r3,-31096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31096);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824413F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824413F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82441400"))) PPC_WEAK_FUNC(sub_82441400);
PPC_FUNC_IMPL(__imp__sub_82441400) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82441408"))) PPC_WEAK_FUNC(sub_82441408);
PPC_FUNC_IMPL(__imp__sub_82441408) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244144c
	if (!ctx.cr6.eq) goto loc_8244144C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82441440;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441448;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244144C:
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

__attribute__((alias("__imp__sub_82441474"))) PPC_WEAK_FUNC(sub_82441474);
PPC_FUNC_IMPL(__imp__sub_82441474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441478"))) PPC_WEAK_FUNC(sub_82441478);
PPC_FUNC_IMPL(__imp__sub_82441478) {
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
	ctx.lr = 0x82441494;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244151c
	if (ctx.cr6.eq) goto loc_8244151C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,25952
	ctx.r11.s64 = ctx.r7.s64 + 25952;
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
	// addi r5,r31,-29976
	ctx.r5.s64 = ctx.r31.s64 + -29976;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82441508;
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
loc_8244151C:
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

__attribute__((alias("__imp__sub_82441534"))) PPC_WEAK_FUNC(sub_82441534);
PPC_FUNC_IMPL(__imp__sub_82441534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441538"))) PPC_WEAK_FUNC(sub_82441538);
PPC_FUNC_IMPL(__imp__sub_82441538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82441540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441570
	if (!ctx.cr6.eq) goto loc_82441570;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82441564;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244156C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441570:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82441590
	if (ctx.cr6.eq) goto loc_82441590;
	// bl 0x82312b88
	ctx.lr = 0x82441584;
	sub_82312B88(ctx, base);
	// lwz r11,-31092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31092);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82441598
	goto loc_82441598;
loc_82441590:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82441598:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824415c0
	if (!ctx.cr6.eq) goto loc_824415C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x824415B0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x824415B8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31092);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_824415C0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824415f0
	if (!ctx.cr6.eq) goto loc_824415F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824415E0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824415E8;
	sub_82398640(ctx, base);
	// lwz r11,-31092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31092);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824415F0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82441628
	if (ctx.cr6.eq) goto loc_82441628;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244160C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82441628
	if (!ctx.cr6.eq) goto loc_82441628;
	// lwz r3,-31092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31092);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82441628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82441630"))) PPC_WEAK_FUNC(sub_82441630);
PPC_FUNC_IMPL(__imp__sub_82441630) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82441638"))) PPC_WEAK_FUNC(sub_82441638);
PPC_FUNC_IMPL(__imp__sub_82441638) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244167c
	if (!ctx.cr6.eq) goto loc_8244167C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82441670;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441678;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244167C:
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

__attribute__((alias("__imp__sub_824416A4"))) PPC_WEAK_FUNC(sub_824416A4);
PPC_FUNC_IMPL(__imp__sub_824416A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824416A8"))) PPC_WEAK_FUNC(sub_824416A8);
PPC_FUNC_IMPL(__imp__sub_824416A8) {
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
	ctx.lr = 0x824416C4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244174c
	if (ctx.cr6.eq) goto loc_8244174C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26016
	ctx.r11.s64 = ctx.r7.s64 + 26016;
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
	// addi r5,r31,-22448
	ctx.r5.s64 = ctx.r31.s64 + -22448;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82441738;
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
loc_8244174C:
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

__attribute__((alias("__imp__sub_82441764"))) PPC_WEAK_FUNC(sub_82441764);
PPC_FUNC_IMPL(__imp__sub_82441764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441768"))) PPC_WEAK_FUNC(sub_82441768);
PPC_FUNC_IMPL(__imp__sub_82441768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82441770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824417a0
	if (!ctx.cr6.eq) goto loc_824417A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82441794;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244179C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824417A0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824417c0
	if (ctx.cr6.eq) goto loc_824417C0;
	// bl 0x82312b88
	ctx.lr = 0x824417B4;
	sub_82312B88(ctx, base);
	// lwz r11,-31088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31088);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x824417c8
	goto loc_824417C8;
loc_824417C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_824417C8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824417f0
	if (!ctx.cr6.eq) goto loc_824417F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x824417E0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x824417E8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31088);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_824417F0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441820
	if (!ctx.cr6.eq) goto loc_82441820;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82441810;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82441818;
	sub_82398640(ctx, base);
	// lwz r11,-31088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31088);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82441820:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82441858
	if (ctx.cr6.eq) goto loc_82441858;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244183C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82441858
	if (!ctx.cr6.eq) goto loc_82441858;
	// lwz r3,-31088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31088);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82441858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82441860"))) PPC_WEAK_FUNC(sub_82441860);
PPC_FUNC_IMPL(__imp__sub_82441860) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82441868"))) PPC_WEAK_FUNC(sub_82441868);
PPC_FUNC_IMPL(__imp__sub_82441868) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824418ac
	if (!ctx.cr6.eq) goto loc_824418AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x824418A0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824418A8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824418AC:
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

__attribute__((alias("__imp__sub_824418D4"))) PPC_WEAK_FUNC(sub_824418D4);
PPC_FUNC_IMPL(__imp__sub_824418D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824418D8"))) PPC_WEAK_FUNC(sub_824418D8);
PPC_FUNC_IMPL(__imp__sub_824418D8) {
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
	ctx.lr = 0x824418F4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244197c
	if (ctx.cr6.eq) goto loc_8244197C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26068
	ctx.r11.s64 = ctx.r7.s64 + 26068;
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
	// addi r5,r31,-29136
	ctx.r5.s64 = ctx.r31.s64 + -29136;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82441968;
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
loc_8244197C:
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

__attribute__((alias("__imp__sub_82441994"))) PPC_WEAK_FUNC(sub_82441994);
PPC_FUNC_IMPL(__imp__sub_82441994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441998"))) PPC_WEAK_FUNC(sub_82441998);
PPC_FUNC_IMPL(__imp__sub_82441998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824419A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824419d0
	if (!ctx.cr6.eq) goto loc_824419D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x824419C4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824419CC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824419D0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824419f0
	if (ctx.cr6.eq) goto loc_824419F0;
	// bl 0x82312b88
	ctx.lr = 0x824419E4;
	sub_82312B88(ctx, base);
	// lwz r11,-31084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31084);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x824419f8
	goto loc_824419F8;
loc_824419F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_824419F8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441a20
	if (!ctx.cr6.eq) goto loc_82441A20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82441A10;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82441A18;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31084);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82441A20:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441a50
	if (!ctx.cr6.eq) goto loc_82441A50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82441A40;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82441A48;
	sub_82398640(ctx, base);
	// lwz r11,-31084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31084);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82441A50:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82441a88
	if (ctx.cr6.eq) goto loc_82441A88;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82441A6C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82441a88
	if (!ctx.cr6.eq) goto loc_82441A88;
	// lwz r3,-31084(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31084);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82441A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441A88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82441A90"))) PPC_WEAK_FUNC(sub_82441A90);
PPC_FUNC_IMPL(__imp__sub_82441A90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82441A98"))) PPC_WEAK_FUNC(sub_82441A98);
PPC_FUNC_IMPL(__imp__sub_82441A98) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82441adc
	if (!ctx.cr6.eq) goto loc_82441ADC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82441AD0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441AD8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441ADC:
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

__attribute__((alias("__imp__sub_82441B04"))) PPC_WEAK_FUNC(sub_82441B04);
PPC_FUNC_IMPL(__imp__sub_82441B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441B08"))) PPC_WEAK_FUNC(sub_82441B08);
PPC_FUNC_IMPL(__imp__sub_82441B08) {
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
	ctx.lr = 0x82441B24;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82441bac
	if (ctx.cr6.eq) goto loc_82441BAC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26116
	ctx.r11.s64 = ctx.r7.s64 + 26116;
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
	// addi r5,r31,-21560
	ctx.r5.s64 = ctx.r31.s64 + -21560;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82441B98;
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
loc_82441BAC:
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

__attribute__((alias("__imp__sub_82441BC4"))) PPC_WEAK_FUNC(sub_82441BC4);
PPC_FUNC_IMPL(__imp__sub_82441BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441BC8"))) PPC_WEAK_FUNC(sub_82441BC8);
PPC_FUNC_IMPL(__imp__sub_82441BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82441BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441c00
	if (!ctx.cr6.eq) goto loc_82441C00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82441BF4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441BFC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441C00:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82441c20
	if (ctx.cr6.eq) goto loc_82441C20;
	// bl 0x82312b88
	ctx.lr = 0x82441C14;
	sub_82312B88(ctx, base);
	// lwz r11,-31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31080);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82441c28
	goto loc_82441C28;
loc_82441C20:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82441C28:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441c50
	if (!ctx.cr6.eq) goto loc_82441C50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82441C40;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82441C48;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31080);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82441C50:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441c80
	if (!ctx.cr6.eq) goto loc_82441C80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82441C70;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82441C78;
	sub_82398640(ctx, base);
	// lwz r11,-31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31080);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82441C80:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82441cb8
	if (ctx.cr6.eq) goto loc_82441CB8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82441C9C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82441cb8
	if (!ctx.cr6.eq) goto loc_82441CB8;
	// lwz r3,-31080(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31080);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82441CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441CB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82441CC0"))) PPC_WEAK_FUNC(sub_82441CC0);
PPC_FUNC_IMPL(__imp__sub_82441CC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82441CC8"))) PPC_WEAK_FUNC(sub_82441CC8);
PPC_FUNC_IMPL(__imp__sub_82441CC8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82441d0c
	if (!ctx.cr6.eq) goto loc_82441D0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82441D00;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441D08;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441D0C:
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

__attribute__((alias("__imp__sub_82441D34"))) PPC_WEAK_FUNC(sub_82441D34);
PPC_FUNC_IMPL(__imp__sub_82441D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441D38"))) PPC_WEAK_FUNC(sub_82441D38);
PPC_FUNC_IMPL(__imp__sub_82441D38) {
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
	ctx.lr = 0x82441D54;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82441ddc
	if (ctx.cr6.eq) goto loc_82441DDC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26164
	ctx.r11.s64 = ctx.r7.s64 + 26164;
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
	// addi r5,r31,-30536
	ctx.r5.s64 = ctx.r31.s64 + -30536;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82441DC8;
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
loc_82441DDC:
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

__attribute__((alias("__imp__sub_82441DF4"))) PPC_WEAK_FUNC(sub_82441DF4);
PPC_FUNC_IMPL(__imp__sub_82441DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441DF8"))) PPC_WEAK_FUNC(sub_82441DF8);
PPC_FUNC_IMPL(__imp__sub_82441DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82441E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441e30
	if (!ctx.cr6.eq) goto loc_82441E30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82441E24;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441E2C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441E30:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31076);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82441e50
	if (ctx.cr6.eq) goto loc_82441E50;
	// bl 0x82312b88
	ctx.lr = 0x82441E44;
	sub_82312B88(ctx, base);
	// lwz r11,-31076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31076);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82441e58
	goto loc_82441E58;
loc_82441E50:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82441E58:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441e80
	if (!ctx.cr6.eq) goto loc_82441E80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82441E70;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82441E78;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31076);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82441E80:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82441eb0
	if (!ctx.cr6.eq) goto loc_82441EB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82441EA0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82441EA8;
	sub_82398640(ctx, base);
	// lwz r11,-31076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31076);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82441EB0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82441ee8
	if (ctx.cr6.eq) goto loc_82441EE8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82441ECC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82441ee8
	if (!ctx.cr6.eq) goto loc_82441EE8;
	// lwz r3,-31076(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82441EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441EE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82441EF0"))) PPC_WEAK_FUNC(sub_82441EF0);
PPC_FUNC_IMPL(__imp__sub_82441EF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82441EF8"))) PPC_WEAK_FUNC(sub_82441EF8);
PPC_FUNC_IMPL(__imp__sub_82441EF8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82441f3c
	if (!ctx.cr6.eq) goto loc_82441F3C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82441F30;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82441F38;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82441F3C:
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

__attribute__((alias("__imp__sub_82441F64"))) PPC_WEAK_FUNC(sub_82441F64);
PPC_FUNC_IMPL(__imp__sub_82441F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82441F68"))) PPC_WEAK_FUNC(sub_82441F68);
PPC_FUNC_IMPL(__imp__sub_82441F68) {
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
	ctx.lr = 0x82441F84;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244200c
	if (ctx.cr6.eq) goto loc_8244200C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26216
	ctx.r11.s64 = ctx.r7.s64 + 26216;
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
	// addi r5,r31,-13136
	ctx.r5.s64 = ctx.r31.s64 + -13136;
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
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82441FF8;
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
loc_8244200C:
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

__attribute__((alias("__imp__sub_82442024"))) PPC_WEAK_FUNC(sub_82442024);
PPC_FUNC_IMPL(__imp__sub_82442024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442028"))) PPC_WEAK_FUNC(sub_82442028);
PPC_FUNC_IMPL(__imp__sub_82442028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82442030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442060
	if (!ctx.cr6.eq) goto loc_82442060;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243db98
	ctx.lr = 0x82442054;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x8244205C;
	sub_8243DC58(ctx, base);
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_82442060:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31072);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82442080
	if (ctx.cr6.eq) goto loc_82442080;
	// bl 0x822c7f70
	ctx.lr = 0x82442074;
	sub_822C7F70(ctx, base);
	// lwz r11,-31072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31072);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82442088
	goto loc_82442088;
loc_82442080:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82442088:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824420b0
	if (!ctx.cr6.eq) goto loc_824420B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x824420A0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x824420A8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31072);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_824420B0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824420e0
	if (!ctx.cr6.eq) goto loc_824420E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824420D0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824420D8;
	sub_82398640(ctx, base);
	// lwz r11,-31072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31072);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824420E0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82442118
	if (ctx.cr6.eq) goto loc_82442118;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824420FC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82442118
	if (!ctx.cr6.eq) goto loc_82442118;
	// lwz r3,-31072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31072);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82442118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82442118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82442120"))) PPC_WEAK_FUNC(sub_82442120);
PPC_FUNC_IMPL(__imp__sub_82442120) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82442128"))) PPC_WEAK_FUNC(sub_82442128);
PPC_FUNC_IMPL(__imp__sub_82442128) {
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
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244216c
	if (!ctx.cr6.eq) goto loc_8244216C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243db98
	ctx.lr = 0x82442160;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x82442168;
	sub_8243DC58(ctx, base);
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_8244216C:
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

__attribute__((alias("__imp__sub_82442194"))) PPC_WEAK_FUNC(sub_82442194);
PPC_FUNC_IMPL(__imp__sub_82442194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442198"))) PPC_WEAK_FUNC(sub_82442198);
PPC_FUNC_IMPL(__imp__sub_82442198) {
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
	ctx.lr = 0x824421B4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244223c
	if (ctx.cr6.eq) goto loc_8244223C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26288
	ctx.r11.s64 = ctx.r7.s64 + 26288;
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
	// addi r5,r31,-24480
	ctx.r5.s64 = ctx.r31.s64 + -24480;
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
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82442228;
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
loc_8244223C:
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

__attribute__((alias("__imp__sub_82442254"))) PPC_WEAK_FUNC(sub_82442254);
PPC_FUNC_IMPL(__imp__sub_82442254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442258"))) PPC_WEAK_FUNC(sub_82442258);
PPC_FUNC_IMPL(__imp__sub_82442258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82442260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442290
	if (!ctx.cr6.eq) goto loc_82442290;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82442284;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244228C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82442290:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31068);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824422b0
	if (ctx.cr6.eq) goto loc_824422B0;
	// bl 0x82312b88
	ctx.lr = 0x824422A4;
	sub_82312B88(ctx, base);
	// lwz r11,-31068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31068);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x824422b8
	goto loc_824422B8;
loc_824422B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_824422B8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824422e0
	if (!ctx.cr6.eq) goto loc_824422E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x824422D0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x824422D8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31068);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_824422E0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442310
	if (!ctx.cr6.eq) goto loc_82442310;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82442300;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82442308;
	sub_82398640(ctx, base);
	// lwz r11,-31068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31068);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82442310:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82442348
	if (ctx.cr6.eq) goto loc_82442348;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244232C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82442348
	if (!ctx.cr6.eq) goto loc_82442348;
	// lwz r3,-31068(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31068);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82442348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82442348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82442350"))) PPC_WEAK_FUNC(sub_82442350);
PPC_FUNC_IMPL(__imp__sub_82442350) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82442358"))) PPC_WEAK_FUNC(sub_82442358);
PPC_FUNC_IMPL(__imp__sub_82442358) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244239c
	if (!ctx.cr6.eq) goto loc_8244239C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82442390;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82442398;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244239C:
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

__attribute__((alias("__imp__sub_824423C4"))) PPC_WEAK_FUNC(sub_824423C4);
PPC_FUNC_IMPL(__imp__sub_824423C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824423C8"))) PPC_WEAK_FUNC(sub_824423C8);
PPC_FUNC_IMPL(__imp__sub_824423C8) {
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
	ctx.lr = 0x824423E4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244246c
	if (ctx.cr6.eq) goto loc_8244246C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26360
	ctx.r11.s64 = ctx.r7.s64 + 26360;
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
	// addi r5,r31,-24192
	ctx.r5.s64 = ctx.r31.s64 + -24192;
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
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82442458;
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
loc_8244246C:
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

__attribute__((alias("__imp__sub_82442484"))) PPC_WEAK_FUNC(sub_82442484);
PPC_FUNC_IMPL(__imp__sub_82442484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442488"))) PPC_WEAK_FUNC(sub_82442488);
PPC_FUNC_IMPL(__imp__sub_82442488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82442490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824424c0
	if (!ctx.cr6.eq) goto loc_824424C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x824424B4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824424BC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824424C0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31064);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824424e0
	if (ctx.cr6.eq) goto loc_824424E0;
	// bl 0x82312b88
	ctx.lr = 0x824424D4;
	sub_82312B88(ctx, base);
	// lwz r11,-31064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31064);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x824424e8
	goto loc_824424E8;
loc_824424E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_824424E8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442510
	if (!ctx.cr6.eq) goto loc_82442510;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82442500;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82442508;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31064);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82442510:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442540
	if (!ctx.cr6.eq) goto loc_82442540;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82442530;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82442538;
	sub_82398640(ctx, base);
	// lwz r11,-31064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31064);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82442540:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82442578
	if (ctx.cr6.eq) goto loc_82442578;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244255C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82442578
	if (!ctx.cr6.eq) goto loc_82442578;
	// lwz r3,-31064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31064);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82442578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82442578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82442580"))) PPC_WEAK_FUNC(sub_82442580);
PPC_FUNC_IMPL(__imp__sub_82442580) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82442588"))) PPC_WEAK_FUNC(sub_82442588);
PPC_FUNC_IMPL(__imp__sub_82442588) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824425cc
	if (!ctx.cr6.eq) goto loc_824425CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x824425C0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824425C8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824425CC:
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

__attribute__((alias("__imp__sub_824425F4"))) PPC_WEAK_FUNC(sub_824425F4);
PPC_FUNC_IMPL(__imp__sub_824425F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824425F8"))) PPC_WEAK_FUNC(sub_824425F8);
PPC_FUNC_IMPL(__imp__sub_824425F8) {
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
	ctx.lr = 0x82442614;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244269c
	if (ctx.cr6.eq) goto loc_8244269C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26432
	ctx.r11.s64 = ctx.r7.s64 + 26432;
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
	// addi r5,r31,-23904
	ctx.r5.s64 = ctx.r31.s64 + -23904;
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
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82442688;
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
loc_8244269C:
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

__attribute__((alias("__imp__sub_824426B4"))) PPC_WEAK_FUNC(sub_824426B4);
PPC_FUNC_IMPL(__imp__sub_824426B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824426B8"))) PPC_WEAK_FUNC(sub_824426B8);
PPC_FUNC_IMPL(__imp__sub_824426B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824426C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824426f0
	if (!ctx.cr6.eq) goto loc_824426F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x824426E4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824426EC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824426F0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31060);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82442710
	if (ctx.cr6.eq) goto loc_82442710;
	// bl 0x82312b88
	ctx.lr = 0x82442704;
	sub_82312B88(ctx, base);
	// lwz r11,-31060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31060);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82442718
	goto loc_82442718;
loc_82442710:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82442718:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442740
	if (!ctx.cr6.eq) goto loc_82442740;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82442730;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82442738;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31060);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82442740:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442770
	if (!ctx.cr6.eq) goto loc_82442770;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82442760;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82442768;
	sub_82398640(ctx, base);
	// lwz r11,-31060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31060);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82442770:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824427a8
	if (ctx.cr6.eq) goto loc_824427A8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244278C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824427a8
	if (!ctx.cr6.eq) goto loc_824427A8;
	// lwz r3,-31060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31060);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824427A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824427A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824427B0"))) PPC_WEAK_FUNC(sub_824427B0);
PPC_FUNC_IMPL(__imp__sub_824427B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824427B8"))) PPC_WEAK_FUNC(sub_824427B8);
PPC_FUNC_IMPL(__imp__sub_824427B8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824427fc
	if (!ctx.cr6.eq) goto loc_824427FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x824427F0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824427F8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824427FC:
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

__attribute__((alias("__imp__sub_82442824"))) PPC_WEAK_FUNC(sub_82442824);
PPC_FUNC_IMPL(__imp__sub_82442824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442828"))) PPC_WEAK_FUNC(sub_82442828);
PPC_FUNC_IMPL(__imp__sub_82442828) {
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
	ctx.lr = 0x82442844;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824428cc
	if (ctx.cr6.eq) goto loc_824428CC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26496
	ctx.r11.s64 = ctx.r7.s64 + 26496;
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
	// addi r5,r31,-18648
	ctx.r5.s64 = ctx.r31.s64 + -18648;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824428B8;
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
loc_824428CC:
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

__attribute__((alias("__imp__sub_824428E4"))) PPC_WEAK_FUNC(sub_824428E4);
PPC_FUNC_IMPL(__imp__sub_824428E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824428E8"))) PPC_WEAK_FUNC(sub_824428E8);
PPC_FUNC_IMPL(__imp__sub_824428E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824428F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442920
	if (!ctx.cr6.eq) goto loc_82442920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82442914;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244291C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82442920:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31056);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82442940
	if (ctx.cr6.eq) goto loc_82442940;
	// bl 0x82312b88
	ctx.lr = 0x82442934;
	sub_82312B88(ctx, base);
	// lwz r11,-31056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31056);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82442948
	goto loc_82442948;
loc_82442940:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82442948:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442970
	if (!ctx.cr6.eq) goto loc_82442970;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82442960;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82442968;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31056);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82442970:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824429a0
	if (!ctx.cr6.eq) goto loc_824429A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82442990;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82442998;
	sub_82398640(ctx, base);
	// lwz r11,-31056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31056);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824429A0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824429d8
	if (ctx.cr6.eq) goto loc_824429D8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824429BC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824429d8
	if (!ctx.cr6.eq) goto loc_824429D8;
	// lwz r3,-31056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824429D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824429D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824429E0"))) PPC_WEAK_FUNC(sub_824429E0);
PPC_FUNC_IMPL(__imp__sub_824429E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824429E8"))) PPC_WEAK_FUNC(sub_824429E8);
PPC_FUNC_IMPL(__imp__sub_824429E8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82442a2c
	if (!ctx.cr6.eq) goto loc_82442A2C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82442A20;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82442A28;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82442A2C:
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

__attribute__((alias("__imp__sub_82442A54"))) PPC_WEAK_FUNC(sub_82442A54);
PPC_FUNC_IMPL(__imp__sub_82442A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442A58"))) PPC_WEAK_FUNC(sub_82442A58);
PPC_FUNC_IMPL(__imp__sub_82442A58) {
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
	ctx.lr = 0x82442A74;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82442afc
	if (ctx.cr6.eq) goto loc_82442AFC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26560
	ctx.r11.s64 = ctx.r7.s64 + 26560;
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
	// addi r5,r31,-17384
	ctx.r5.s64 = ctx.r31.s64 + -17384;
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
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82442AE8;
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
loc_82442AFC:
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

__attribute__((alias("__imp__sub_82442B14"))) PPC_WEAK_FUNC(sub_82442B14);
PPC_FUNC_IMPL(__imp__sub_82442B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442B18"))) PPC_WEAK_FUNC(sub_82442B18);
PPC_FUNC_IMPL(__imp__sub_82442B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82442B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442b50
	if (!ctx.cr6.eq) goto loc_82442B50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82442828
	ctx.lr = 0x82442B44;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x82442B4C;
	sub_824428E8(ctx, base);
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_82442B50:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31052);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82442b70
	if (ctx.cr6.eq) goto loc_82442B70;
	// bl 0x822c79d0
	ctx.lr = 0x82442B64;
	sub_822C79D0(ctx, base);
	// lwz r11,-31052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31052);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82442b78
	goto loc_82442B78;
loc_82442B70:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82442B78:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442ba0
	if (!ctx.cr6.eq) goto loc_82442BA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82442B90;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82442B98;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31052);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82442BA0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442bd0
	if (!ctx.cr6.eq) goto loc_82442BD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82442BC0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82442BC8;
	sub_82398640(ctx, base);
	// lwz r11,-31052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31052);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82442BD0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82442c08
	if (ctx.cr6.eq) goto loc_82442C08;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82442BEC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82442c08
	if (!ctx.cr6.eq) goto loc_82442C08;
	// lwz r3,-31052(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31052);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82442C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82442C08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82442C10"))) PPC_WEAK_FUNC(sub_82442C10);
PPC_FUNC_IMPL(__imp__sub_82442C10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82442C18"))) PPC_WEAK_FUNC(sub_82442C18);
PPC_FUNC_IMPL(__imp__sub_82442C18) {
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
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82442c5c
	if (!ctx.cr6.eq) goto loc_82442C5C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82442828
	ctx.lr = 0x82442C50;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x82442C58;
	sub_824428E8(ctx, base);
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_82442C5C:
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

__attribute__((alias("__imp__sub_82442C84"))) PPC_WEAK_FUNC(sub_82442C84);
PPC_FUNC_IMPL(__imp__sub_82442C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442C88"))) PPC_WEAK_FUNC(sub_82442C88);
PPC_FUNC_IMPL(__imp__sub_82442C88) {
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
	ctx.lr = 0x82442CA4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82442d2c
	if (ctx.cr6.eq) goto loc_82442D2C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26632
	ctx.r11.s64 = ctx.r7.s64 + 26632;
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
	// addi r5,r31,-18344
	ctx.r5.s64 = ctx.r31.s64 + -18344;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82442D18;
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
loc_82442D2C:
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

__attribute__((alias("__imp__sub_82442D44"))) PPC_WEAK_FUNC(sub_82442D44);
PPC_FUNC_IMPL(__imp__sub_82442D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442D48"))) PPC_WEAK_FUNC(sub_82442D48);
PPC_FUNC_IMPL(__imp__sub_82442D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82442D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442d80
	if (!ctx.cr6.eq) goto loc_82442D80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82442828
	ctx.lr = 0x82442D74;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x82442D7C;
	sub_824428E8(ctx, base);
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_82442D80:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31048);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82442da0
	if (ctx.cr6.eq) goto loc_82442DA0;
	// bl 0x822c79d0
	ctx.lr = 0x82442D94;
	sub_822C79D0(ctx, base);
	// lwz r11,-31048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31048);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82442da8
	goto loc_82442DA8;
loc_82442DA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82442DA8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442dd0
	if (!ctx.cr6.eq) goto loc_82442DD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82442DC0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82442DC8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31048);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82442DD0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442e00
	if (!ctx.cr6.eq) goto loc_82442E00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82442DF0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82442DF8;
	sub_82398640(ctx, base);
	// lwz r11,-31048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31048);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82442E00:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82442e38
	if (ctx.cr6.eq) goto loc_82442E38;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82442E1C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82442e38
	if (!ctx.cr6.eq) goto loc_82442E38;
	// lwz r3,-31048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31048);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82442E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82442E38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82442E40"))) PPC_WEAK_FUNC(sub_82442E40);
PPC_FUNC_IMPL(__imp__sub_82442E40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82442E48"))) PPC_WEAK_FUNC(sub_82442E48);
PPC_FUNC_IMPL(__imp__sub_82442E48) {
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
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82442e8c
	if (!ctx.cr6.eq) goto loc_82442E8C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82442828
	ctx.lr = 0x82442E80;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x82442E88;
	sub_824428E8(ctx, base);
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_82442E8C:
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

__attribute__((alias("__imp__sub_82442EB4"))) PPC_WEAK_FUNC(sub_82442EB4);
PPC_FUNC_IMPL(__imp__sub_82442EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442EB8"))) PPC_WEAK_FUNC(sub_82442EB8);
PPC_FUNC_IMPL(__imp__sub_82442EB8) {
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
	ctx.lr = 0x82442ED4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82442f5c
	if (ctx.cr6.eq) goto loc_82442F5C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26704
	ctx.r11.s64 = ctx.r7.s64 + 26704;
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
	// addi r5,r31,-17704
	ctx.r5.s64 = ctx.r31.s64 + -17704;
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
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82442F48;
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
loc_82442F5C:
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

__attribute__((alias("__imp__sub_82442F74"))) PPC_WEAK_FUNC(sub_82442F74);
PPC_FUNC_IMPL(__imp__sub_82442F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82442F78"))) PPC_WEAK_FUNC(sub_82442F78);
PPC_FUNC_IMPL(__imp__sub_82442F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82442F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82442fb0
	if (!ctx.cr6.eq) goto loc_82442FB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82442828
	ctx.lr = 0x82442FA4;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x82442FAC;
	sub_824428E8(ctx, base);
	// lwz r10,-31056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_82442FB0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31044);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82442fd0
	if (ctx.cr6.eq) goto loc_82442FD0;
	// bl 0x822c79d0
	ctx.lr = 0x82442FC4;
	sub_822C79D0(ctx, base);
	// lwz r11,-31044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31044);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82442fd8
	goto loc_82442FD8;
loc_82442FD0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82442FD8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443000
	if (!ctx.cr6.eq) goto loc_82443000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82442FF0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82442FF8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31044);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82443000:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443030
	if (!ctx.cr6.eq) goto loc_82443030;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82443020;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82443028;
	sub_82398640(ctx, base);
	// lwz r11,-31044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31044);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82443030:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443068
	if (ctx.cr6.eq) goto loc_82443068;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244304C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82443068
	if (!ctx.cr6.eq) goto loc_82443068;
	// lwz r3,-31044(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31044);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82443068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82443068:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82443070"))) PPC_WEAK_FUNC(sub_82443070);
PPC_FUNC_IMPL(__imp__sub_82443070) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82443078"))) PPC_WEAK_FUNC(sub_82443078);
PPC_FUNC_IMPL(__imp__sub_82443078) {
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
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824430bc
	if (!ctx.cr6.eq) goto loc_824430BC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82442828
	ctx.lr = 0x824430B0;
	sub_82442828(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// bl 0x824428e8
	ctx.lr = 0x824430B8;
	sub_824428E8(ctx, base);
	// lwz r11,-31056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_824430BC:
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

__attribute__((alias("__imp__sub_824430E4"))) PPC_WEAK_FUNC(sub_824430E4);
PPC_FUNC_IMPL(__imp__sub_824430E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824430E8"))) PPC_WEAK_FUNC(sub_824430E8);
PPC_FUNC_IMPL(__imp__sub_824430E8) {
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
	ctx.lr = 0x82443104;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244318c
	if (ctx.cr6.eq) goto loc_8244318C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26788
	ctx.r11.s64 = ctx.r7.s64 + 26788;
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
	// addi r5,r31,-19544
	ctx.r5.s64 = ctx.r31.s64 + -19544;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82443178;
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
loc_8244318C:
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

__attribute__((alias("__imp__sub_824431A4"))) PPC_WEAK_FUNC(sub_824431A4);
PPC_FUNC_IMPL(__imp__sub_824431A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824431A8"))) PPC_WEAK_FUNC(sub_824431A8);
PPC_FUNC_IMPL(__imp__sub_824431A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824431B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824431e0
	if (!ctx.cr6.eq) goto loc_824431E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x824431D4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824431DC;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824431E0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31040);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82443200
	if (ctx.cr6.eq) goto loc_82443200;
	// bl 0x82312b88
	ctx.lr = 0x824431F4;
	sub_82312B88(ctx, base);
	// lwz r11,-31040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31040);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82443208
	goto loc_82443208;
loc_82443200:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82443208:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443230
	if (!ctx.cr6.eq) goto loc_82443230;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82443220;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82443228;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31040);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82443230:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443260
	if (!ctx.cr6.eq) goto loc_82443260;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82443250;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82443258;
	sub_82398640(ctx, base);
	// lwz r11,-31040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31040);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82443260:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443298
	if (ctx.cr6.eq) goto loc_82443298;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244327C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82443298
	if (!ctx.cr6.eq) goto loc_82443298;
	// lwz r3,-31040(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31040);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82443298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82443298:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824432A0"))) PPC_WEAK_FUNC(sub_824432A0);
PPC_FUNC_IMPL(__imp__sub_824432A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824432A8"))) PPC_WEAK_FUNC(sub_824432A8);
PPC_FUNC_IMPL(__imp__sub_824432A8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824432ec
	if (!ctx.cr6.eq) goto loc_824432EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x824432E0;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x824432E8;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_824432EC:
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

__attribute__((alias("__imp__sub_82443314"))) PPC_WEAK_FUNC(sub_82443314);
PPC_FUNC_IMPL(__imp__sub_82443314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443318"))) PPC_WEAK_FUNC(sub_82443318);
PPC_FUNC_IMPL(__imp__sub_82443318) {
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
	ctx.lr = 0x82443334;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824433bc
	if (ctx.cr6.eq) goto loc_824433BC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26848
	ctx.r11.s64 = ctx.r7.s64 + 26848;
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
	// addi r5,r31,-10088
	ctx.r5.s64 = ctx.r31.s64 + -10088;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824433A8;
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
loc_824433BC:
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

__attribute__((alias("__imp__sub_824433D4"))) PPC_WEAK_FUNC(sub_824433D4);
PPC_FUNC_IMPL(__imp__sub_824433D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824433D8"))) PPC_WEAK_FUNC(sub_824433D8);
PPC_FUNC_IMPL(__imp__sub_824433D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x824433E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443410
	if (!ctx.cr6.eq) goto loc_82443410;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d968
	ctx.lr = 0x82443404;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x8244340C;
	sub_8243DA28(ctx, base);
	// lwz r10,-31200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82443410:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31036);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82443430
	if (ctx.cr6.eq) goto loc_82443430;
	// bl 0x82312b88
	ctx.lr = 0x82443424;
	sub_82312B88(ctx, base);
	// lwz r11,-31036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31036);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82443438
	goto loc_82443438;
loc_82443430:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82443438:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443460
	if (!ctx.cr6.eq) goto loc_82443460;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82443450;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82443458;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31036);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82443460:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443490
	if (!ctx.cr6.eq) goto loc_82443490;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82443480;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82443488;
	sub_82398640(ctx, base);
	// lwz r11,-31036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31036);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82443490:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824434c8
	if (ctx.cr6.eq) goto loc_824434C8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824434AC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824434c8
	if (!ctx.cr6.eq) goto loc_824434C8;
	// lwz r3,-31036(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31036);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824434C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824434C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824434D0"))) PPC_WEAK_FUNC(sub_824434D0);
PPC_FUNC_IMPL(__imp__sub_824434D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824434D8"))) PPC_WEAK_FUNC(sub_824434D8);
PPC_FUNC_IMPL(__imp__sub_824434D8) {
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
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244351c
	if (!ctx.cr6.eq) goto loc_8244351C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82443510;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82443518;
	sub_8243DA28(ctx, base);
	// lwz r11,-31200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_8244351C:
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

__attribute__((alias("__imp__sub_82443544"))) PPC_WEAK_FUNC(sub_82443544);
PPC_FUNC_IMPL(__imp__sub_82443544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443548"))) PPC_WEAK_FUNC(sub_82443548);
PPC_FUNC_IMPL(__imp__sub_82443548) {
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
	ctx.lr = 0x82443564;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824435ec
	if (ctx.cr6.eq) goto loc_824435EC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26912
	ctx.r11.s64 = ctx.r7.s64 + 26912;
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
	// addi r5,r31,-12160
	ctx.r5.s64 = ctx.r31.s64 + -12160;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824435D8;
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
loc_824435EC:
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

__attribute__((alias("__imp__sub_82443604"))) PPC_WEAK_FUNC(sub_82443604);
PPC_FUNC_IMPL(__imp__sub_82443604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443608"))) PPC_WEAK_FUNC(sub_82443608);
PPC_FUNC_IMPL(__imp__sub_82443608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82443610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443640
	if (!ctx.cr6.eq) goto loc_82443640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243db98
	ctx.lr = 0x82443634;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x8244363C;
	sub_8243DC58(ctx, base);
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_82443640:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31032);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82443660
	if (ctx.cr6.eq) goto loc_82443660;
	// bl 0x822c7f70
	ctx.lr = 0x82443654;
	sub_822C7F70(ctx, base);
	// lwz r11,-31032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31032);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82443668
	goto loc_82443668;
loc_82443660:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82443668:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443690
	if (!ctx.cr6.eq) goto loc_82443690;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82443680;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82443688;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31032);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82443690:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824436c0
	if (!ctx.cr6.eq) goto loc_824436C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824436B0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824436B8;
	sub_82398640(ctx, base);
	// lwz r11,-31032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31032);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824436C0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824436f8
	if (ctx.cr6.eq) goto loc_824436F8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824436DC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824436f8
	if (!ctx.cr6.eq) goto loc_824436F8;
	// lwz r3,-31032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31032);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824436F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824436F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82443700"))) PPC_WEAK_FUNC(sub_82443700);
PPC_FUNC_IMPL(__imp__sub_82443700) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82443708"))) PPC_WEAK_FUNC(sub_82443708);
PPC_FUNC_IMPL(__imp__sub_82443708) {
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
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244374c
	if (!ctx.cr6.eq) goto loc_8244374C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243db98
	ctx.lr = 0x82443740;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x82443748;
	sub_8243DC58(ctx, base);
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_8244374C:
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

__attribute__((alias("__imp__sub_82443774"))) PPC_WEAK_FUNC(sub_82443774);
PPC_FUNC_IMPL(__imp__sub_82443774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443778"))) PPC_WEAK_FUNC(sub_82443778);
PPC_FUNC_IMPL(__imp__sub_82443778) {
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
	ctx.lr = 0x82443794;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244381c
	if (ctx.cr6.eq) goto loc_8244381C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,26980
	ctx.r11.s64 = ctx.r7.s64 + 26980;
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
	// addi r5,r31,-12488
	ctx.r5.s64 = ctx.r31.s64 + -12488;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82443808;
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
loc_8244381C:
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

__attribute__((alias("__imp__sub_82443834"))) PPC_WEAK_FUNC(sub_82443834);
PPC_FUNC_IMPL(__imp__sub_82443834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443838"))) PPC_WEAK_FUNC(sub_82443838);
PPC_FUNC_IMPL(__imp__sub_82443838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82443840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443870
	if (!ctx.cr6.eq) goto loc_82443870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243db98
	ctx.lr = 0x82443864;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x8244386C;
	sub_8243DC58(ctx, base);
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_82443870:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31028);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82443890
	if (ctx.cr6.eq) goto loc_82443890;
	// bl 0x822c7f70
	ctx.lr = 0x82443884;
	sub_822C7F70(ctx, base);
	// lwz r11,-31028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31028);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82443898
	goto loc_82443898;
loc_82443890:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82443898:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824438c0
	if (!ctx.cr6.eq) goto loc_824438C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x824438B0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x824438B8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31028);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_824438C0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824438f0
	if (!ctx.cr6.eq) goto loc_824438F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824438E0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824438E8;
	sub_82398640(ctx, base);
	// lwz r11,-31028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31028);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824438F0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443928
	if (ctx.cr6.eq) goto loc_82443928;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8244390C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82443928
	if (!ctx.cr6.eq) goto loc_82443928;
	// lwz r3,-31028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31028);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82443928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82443928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82443930"))) PPC_WEAK_FUNC(sub_82443930);
PPC_FUNC_IMPL(__imp__sub_82443930) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82443938"))) PPC_WEAK_FUNC(sub_82443938);
PPC_FUNC_IMPL(__imp__sub_82443938) {
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
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244397c
	if (!ctx.cr6.eq) goto loc_8244397C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243db98
	ctx.lr = 0x82443970;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x82443978;
	sub_8243DC58(ctx, base);
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_8244397C:
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

__attribute__((alias("__imp__sub_824439A4"))) PPC_WEAK_FUNC(sub_824439A4);
PPC_FUNC_IMPL(__imp__sub_824439A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824439A8"))) PPC_WEAK_FUNC(sub_824439A8);
PPC_FUNC_IMPL(__imp__sub_824439A8) {
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
	ctx.lr = 0x824439C4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82443a4c
	if (ctx.cr6.eq) goto loc_82443A4C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,27040
	ctx.r11.s64 = ctx.r7.s64 + 27040;
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
	// addi r5,r31,-11832
	ctx.r5.s64 = ctx.r31.s64 + -11832;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82443A38;
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
loc_82443A4C:
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

__attribute__((alias("__imp__sub_82443A64"))) PPC_WEAK_FUNC(sub_82443A64);
PPC_FUNC_IMPL(__imp__sub_82443A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443A68"))) PPC_WEAK_FUNC(sub_82443A68);
PPC_FUNC_IMPL(__imp__sub_82443A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82443A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443aa0
	if (!ctx.cr6.eq) goto loc_82443AA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243db98
	ctx.lr = 0x82443A94;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x82443A9C;
	sub_8243DC58(ctx, base);
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_82443AA0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31024);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82443ac0
	if (ctx.cr6.eq) goto loc_82443AC0;
	// bl 0x822c7f70
	ctx.lr = 0x82443AB4;
	sub_822C7F70(ctx, base);
	// lwz r11,-31024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31024);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82443ac8
	goto loc_82443AC8;
loc_82443AC0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82443AC8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443af0
	if (!ctx.cr6.eq) goto loc_82443AF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82443AE0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82443AE8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31024);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82443AF0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443b20
	if (!ctx.cr6.eq) goto loc_82443B20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82443B10;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82443B18;
	sub_82398640(ctx, base);
	// lwz r11,-31024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31024);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82443B20:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443b58
	if (ctx.cr6.eq) goto loc_82443B58;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82443B3C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82443b58
	if (!ctx.cr6.eq) goto loc_82443B58;
	// lwz r3,-31024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82443B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82443B58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82443B60"))) PPC_WEAK_FUNC(sub_82443B60);
PPC_FUNC_IMPL(__imp__sub_82443B60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82443B68"))) PPC_WEAK_FUNC(sub_82443B68);
PPC_FUNC_IMPL(__imp__sub_82443B68) {
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
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82443bac
	if (!ctx.cr6.eq) goto loc_82443BAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243db98
	ctx.lr = 0x82443BA0;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x82443BA8;
	sub_8243DC58(ctx, base);
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_82443BAC:
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

__attribute__((alias("__imp__sub_82443BD4"))) PPC_WEAK_FUNC(sub_82443BD4);
PPC_FUNC_IMPL(__imp__sub_82443BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443BD8"))) PPC_WEAK_FUNC(sub_82443BD8);
PPC_FUNC_IMPL(__imp__sub_82443BD8) {
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
	ctx.lr = 0x82443BF4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82443c7c
	if (ctx.cr6.eq) goto loc_82443C7C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,27128
	ctx.r11.s64 = ctx.r7.s64 + 27128;
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
	// addi r5,r31,-11496
	ctx.r5.s64 = ctx.r31.s64 + -11496;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82443C68;
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
loc_82443C7C:
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

__attribute__((alias("__imp__sub_82443C94"))) PPC_WEAK_FUNC(sub_82443C94);
PPC_FUNC_IMPL(__imp__sub_82443C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443C98"))) PPC_WEAK_FUNC(sub_82443C98);
PPC_FUNC_IMPL(__imp__sub_82443C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82443CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443cd0
	if (!ctx.cr6.eq) goto loc_82443CD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824439a8
	ctx.lr = 0x82443CC4;
	sub_824439A8(ctx, base);
	// stw r3,-31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31024, ctx.r3.u32);
	// bl 0x82443a68
	ctx.lr = 0x82443CCC;
	sub_82443A68(ctx, base);
	// lwz r10,-31024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
loc_82443CD0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31020);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82443cf0
	if (ctx.cr6.eq) goto loc_82443CF0;
	// bl 0x822c8100
	ctx.lr = 0x82443CE4;
	sub_822C8100(ctx, base);
	// lwz r11,-31020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31020);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82443cf8
	goto loc_82443CF8;
loc_82443CF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82443CF8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443d20
	if (!ctx.cr6.eq) goto loc_82443D20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82443D10;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82443D18;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31020);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82443D20:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443d50
	if (!ctx.cr6.eq) goto loc_82443D50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82443D40;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82443D48;
	sub_82398640(ctx, base);
	// lwz r11,-31020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31020);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82443D50:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443d88
	if (ctx.cr6.eq) goto loc_82443D88;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82443D6C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82443d88
	if (!ctx.cr6.eq) goto loc_82443D88;
	// lwz r3,-31020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31020);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82443D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82443D88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82443D90"))) PPC_WEAK_FUNC(sub_82443D90);
PPC_FUNC_IMPL(__imp__sub_82443D90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82443D98"))) PPC_WEAK_FUNC(sub_82443D98);
PPC_FUNC_IMPL(__imp__sub_82443D98) {
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
	// lwz r11,-31024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82443ddc
	if (!ctx.cr6.eq) goto loc_82443DDC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824439a8
	ctx.lr = 0x82443DD0;
	sub_824439A8(ctx, base);
	// stw r3,-31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31024, ctx.r3.u32);
	// bl 0x82443a68
	ctx.lr = 0x82443DD8;
	sub_82443A68(ctx, base);
	// lwz r11,-31024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
loc_82443DDC:
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

__attribute__((alias("__imp__sub_82443E04"))) PPC_WEAK_FUNC(sub_82443E04);
PPC_FUNC_IMPL(__imp__sub_82443E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443E08"))) PPC_WEAK_FUNC(sub_82443E08);
PPC_FUNC_IMPL(__imp__sub_82443E08) {
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
	ctx.lr = 0x82443E24;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82443eac
	if (ctx.cr6.eq) goto loc_82443EAC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,27216
	ctx.r11.s64 = ctx.r7.s64 + 27216;
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
	// addi r5,r31,-11200
	ctx.r5.s64 = ctx.r31.s64 + -11200;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82443E98;
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
loc_82443EAC:
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

__attribute__((alias("__imp__sub_82443EC4"))) PPC_WEAK_FUNC(sub_82443EC4);
PPC_FUNC_IMPL(__imp__sub_82443EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82443EC8"))) PPC_WEAK_FUNC(sub_82443EC8);
PPC_FUNC_IMPL(__imp__sub_82443EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82443ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443f00
	if (!ctx.cr6.eq) goto loc_82443F00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824439a8
	ctx.lr = 0x82443EF4;
	sub_824439A8(ctx, base);
	// stw r3,-31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31024, ctx.r3.u32);
	// bl 0x82443a68
	ctx.lr = 0x82443EFC;
	sub_82443A68(ctx, base);
	// lwz r10,-31024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
loc_82443F00:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31016);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82443f20
	if (ctx.cr6.eq) goto loc_82443F20;
	// bl 0x822c8100
	ctx.lr = 0x82443F14;
	sub_822C8100(ctx, base);
	// lwz r11,-31016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31016);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82443f28
	goto loc_82443F28;
loc_82443F20:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82443F28:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443f50
	if (!ctx.cr6.eq) goto loc_82443F50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82443F40;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82443F48;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31016);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82443F50:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82443f80
	if (!ctx.cr6.eq) goto loc_82443F80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x82443F70;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82443F78;
	sub_82398640(ctx, base);
	// lwz r11,-31016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31016);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82443F80:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443fb8
	if (ctx.cr6.eq) goto loc_82443FB8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82443F9C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82443fb8
	if (!ctx.cr6.eq) goto loc_82443FB8;
	// lwz r3,-31016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31016);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82443FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82443FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82443FC0"))) PPC_WEAK_FUNC(sub_82443FC0);
PPC_FUNC_IMPL(__imp__sub_82443FC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82443FC8"))) PPC_WEAK_FUNC(sub_82443FC8);
PPC_FUNC_IMPL(__imp__sub_82443FC8) {
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
	// lwz r11,-31024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244400c
	if (!ctx.cr6.eq) goto loc_8244400C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824439a8
	ctx.lr = 0x82444000;
	sub_824439A8(ctx, base);
	// stw r3,-31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31024, ctx.r3.u32);
	// bl 0x82443a68
	ctx.lr = 0x82444008;
	sub_82443A68(ctx, base);
	// lwz r11,-31024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
loc_8244400C:
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

__attribute__((alias("__imp__sub_82444034"))) PPC_WEAK_FUNC(sub_82444034);
PPC_FUNC_IMPL(__imp__sub_82444034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82444038"))) PPC_WEAK_FUNC(sub_82444038);
PPC_FUNC_IMPL(__imp__sub_82444038) {
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
	ctx.lr = 0x82444054;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824440dc
	if (ctx.cr6.eq) goto loc_824440DC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,27312
	ctx.r11.s64 = ctx.r7.s64 + 27312;
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
	// addi r5,r31,-10904
	ctx.r5.s64 = ctx.r31.s64 + -10904;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824440C8;
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
loc_824440DC:
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

__attribute__((alias("__imp__sub_824440F4"))) PPC_WEAK_FUNC(sub_824440F4);
PPC_FUNC_IMPL(__imp__sub_824440F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824440F8"))) PPC_WEAK_FUNC(sub_824440F8);
PPC_FUNC_IMPL(__imp__sub_824440F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82444100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82444130
	if (!ctx.cr6.eq) goto loc_82444130;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824439a8
	ctx.lr = 0x82444124;
	sub_824439A8(ctx, base);
	// stw r3,-31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31024, ctx.r3.u32);
	// bl 0x82443a68
	ctx.lr = 0x8244412C;
	sub_82443A68(ctx, base);
	// lwz r10,-31024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
loc_82444130:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31012);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82444150
	if (ctx.cr6.eq) goto loc_82444150;
	// bl 0x822c8100
	ctx.lr = 0x82444144;
	sub_822C8100(ctx, base);
	// lwz r11,-31012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31012);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82444158
	goto loc_82444158;
loc_82444150:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82444158:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82444180
	if (!ctx.cr6.eq) goto loc_82444180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x82444170;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82444178;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31012);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82444180:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824441b0
	if (!ctx.cr6.eq) goto loc_824441B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824441A0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824441A8;
	sub_82398640(ctx, base);
	// lwz r11,-31012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31012);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824441B0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824441e8
	if (ctx.cr6.eq) goto loc_824441E8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824441CC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824441e8
	if (!ctx.cr6.eq) goto loc_824441E8;
	// lwz r3,-31012(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31012);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824441E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824441E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824441F0"))) PPC_WEAK_FUNC(sub_824441F0);
PPC_FUNC_IMPL(__imp__sub_824441F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824441F8"))) PPC_WEAK_FUNC(sub_824441F8);
PPC_FUNC_IMPL(__imp__sub_824441F8) {
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
	// lwz r11,-31024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244423c
	if (!ctx.cr6.eq) goto loc_8244423C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824439a8
	ctx.lr = 0x82444230;
	sub_824439A8(ctx, base);
	// stw r3,-31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31024, ctx.r3.u32);
	// bl 0x82443a68
	ctx.lr = 0x82444238;
	sub_82443A68(ctx, base);
	// lwz r11,-31024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
loc_8244423C:
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

__attribute__((alias("__imp__sub_82444264"))) PPC_WEAK_FUNC(sub_82444264);
PPC_FUNC_IMPL(__imp__sub_82444264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82444268"))) PPC_WEAK_FUNC(sub_82444268);
PPC_FUNC_IMPL(__imp__sub_82444268) {
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
	ctx.lr = 0x82444284;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244430c
	if (ctx.cr6.eq) goto loc_8244430C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,27408
	ctx.r11.s64 = ctx.r7.s64 + 27408;
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
	// addi r5,r31,-12808
	ctx.r5.s64 = ctx.r31.s64 + -12808;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x824442F8;
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
loc_8244430C:
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

__attribute__((alias("__imp__sub_82444324"))) PPC_WEAK_FUNC(sub_82444324);
PPC_FUNC_IMPL(__imp__sub_82444324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82444328"))) PPC_WEAK_FUNC(sub_82444328);
PPC_FUNC_IMPL(__imp__sub_82444328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82444330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82444360
	if (!ctx.cr6.eq) goto loc_82444360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243db98
	ctx.lr = 0x82444354;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x8244435C;
	sub_8243DC58(ctx, base);
	// lwz r10,-31196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_82444360:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31008);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82444380
	if (ctx.cr6.eq) goto loc_82444380;
	// bl 0x822c7f70
	ctx.lr = 0x82444374;
	sub_822C7F70(ctx, base);
	// lwz r11,-31008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31008);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82444388
	goto loc_82444388;
loc_82444380:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82444388:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824443b0
	if (!ctx.cr6.eq) goto loc_824443B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270f910
	ctx.lr = 0x824443A0;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x824443A8;
	sub_8270F9D0(ctx, base);
	// lwz r11,-31008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31008);
	// lwz r10,-27480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_824443B0:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824443e0
	if (!ctx.cr6.eq) goto loc_824443E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82398580
	ctx.lr = 0x824443D0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x824443D8;
	sub_82398640(ctx, base);
	// lwz r11,-31008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31008);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_824443E0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82444418
	if (ctx.cr6.eq) goto loc_82444418;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x824443FC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82444418
	if (!ctx.cr6.eq) goto loc_82444418;
	// lwz r3,-31008(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31008);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82444418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82444418:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82444420"))) PPC_WEAK_FUNC(sub_82444420);
PPC_FUNC_IMPL(__imp__sub_82444420) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82444428"))) PPC_WEAK_FUNC(sub_82444428);
PPC_FUNC_IMPL(__imp__sub_82444428) {
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
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244446c
	if (!ctx.cr6.eq) goto loc_8244446C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243db98
	ctx.lr = 0x82444460;
	sub_8243DB98(ctx, base);
	// stw r3,-31196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31196, ctx.r3.u32);
	// bl 0x8243dc58
	ctx.lr = 0x82444468;
	sub_8243DC58(ctx, base);
	// lwz r11,-31196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31196);
loc_8244446C:
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

__attribute__((alias("__imp__sub_82444494"))) PPC_WEAK_FUNC(sub_82444494);
PPC_FUNC_IMPL(__imp__sub_82444494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82444498"))) PPC_WEAK_FUNC(sub_82444498);
PPC_FUNC_IMPL(__imp__sub_82444498) {
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
	ctx.lr = 0x824444B4;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244453c
	if (ctx.cr6.eq) goto loc_8244453C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// addi r11,r7,27476
	ctx.r11.s64 = ctx.r7.s64 + 27476;
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
	// addi r5,r31,-20664
	ctx.r5.s64 = ctx.r31.s64 + -20664;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82444528;
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
loc_8244453C:
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

__attribute__((alias("__imp__sub_82444554"))) PPC_WEAK_FUNC(sub_82444554);
PPC_FUNC_IMPL(__imp__sub_82444554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

