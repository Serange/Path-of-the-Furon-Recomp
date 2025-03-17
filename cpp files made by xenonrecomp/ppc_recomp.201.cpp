#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82735D08"))) PPC_WEAK_FUNC(sub_82735D08);
PPC_FUNC_IMPL(__imp__sub_82735D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735D0C"))) PPC_WEAK_FUNC(sub_82735D0C);
PPC_FUNC_IMPL(__imp__sub_82735D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82735D10"))) PPC_WEAK_FUNC(sub_82735D10);
PPC_FUNC_IMPL(__imp__sub_82735D10) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735D18"))) PPC_WEAK_FUNC(sub_82735D18);
PPC_FUNC_IMPL(__imp__sub_82735D18) {
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
	// bl 0x82735c80
	ctx.lr = 0x82735D38;
	sub_82735C80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82735d6c
	if (ctx.cr6.eq) goto loc_82735D6C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82735d64
	if (ctx.cr6.lt) goto loc_82735D64;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82735d6c
	if (!ctx.cr6.gt) goto loc_82735D6C;
loc_82735D64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82735D6C;
	sub_82294A58(ctx, base);
loc_82735D6C:
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

__attribute__((alias("__imp__sub_82735D88"))) PPC_WEAK_FUNC(sub_82735D88);
PPC_FUNC_IMPL(__imp__sub_82735D88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r9,-26288
	ctx.r8.s64 = ctx.r9.s64 + -26288;
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

__attribute__((alias("__imp__sub_82735DA8"))) PPC_WEAK_FUNC(sub_82735DA8);
PPC_FUNC_IMPL(__imp__sub_82735DA8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735DB0"))) PPC_WEAK_FUNC(sub_82735DB0);
PPC_FUNC_IMPL(__imp__sub_82735DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82735DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r10,r11,-25592
	ctx.r10.s64 = ctx.r11.s64 + -25592;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82735DD0;
	sub_8229C068(ctx, base);
	// lwz r3,916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// addi r29,r31,904
	ctx.r29.s64 = ctx.r31.s64 + 904;
	// bl 0x82294a58
	ctx.lr = 0x82735DDC;
	sub_82294A58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r30.u32);
	// stw r30,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r30.u32);
	// bl 0x823c3090
	ctx.lr = 0x82735DF0;
	sub_823C3090(ctx, base);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x82295e20
	ctx.lr = 0x82735DF8;
	sub_82295E20(ctx, base);
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x822b4260
	ctx.lr = 0x82735E00;
	sub_822B4260(ctx, base);
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// bl 0x822b4260
	ctx.lr = 0x82735E08;
	sub_822B4260(ctx, base);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x822b1a50
	ctx.lr = 0x82735E10;
	sub_822B1A50(ctx, base);
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// addi r29,r31,824
	ctx.r29.s64 = ctx.r31.s64 + 824;
	// bl 0x82294a58
	ctx.lr = 0x82735E1C;
	sub_82294A58(ctx, base);
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// bl 0x822ada80
	ctx.lr = 0x82735E2C;
	sub_822ADA80(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,19264
	ctx.r8.s64 = ctx.r9.s64 + 19264;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82735E40;
	sub_8229C068(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82586bc8
	ctx.lr = 0x82735E48;
	sub_82586BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557578
	ctx.lr = 0x82735E50;
	sub_82557578(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82735E58"))) PPC_WEAK_FUNC(sub_82735E58);
PPC_FUNC_IMPL(__imp__sub_82735E58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-25592
	ctx.r6.s64 = ctx.r7.s64 + -25592;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stw r11,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, ctx.r11.u32);
	// stw r11,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r11.u32);
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, ctx.r11.u32);
	// stw r9,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r9.u32);
	// stw r11,904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 904, ctx.r11.u32);
	// stw r11,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r11.u32);
	// stw r11,912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 912, ctx.r11.u32);
	// stw r10,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r10.u32);
	// stw r11,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r11.u32);
	// stw r9,920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 920, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735EB0"))) PPC_WEAK_FUNC(sub_82735EB0);
PPC_FUNC_IMPL(__imp__sub_82735EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735EB4"))) PPC_WEAK_FUNC(sub_82735EB4);
PPC_FUNC_IMPL(__imp__sub_82735EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82735EB8"))) PPC_WEAK_FUNC(sub_82735EB8);
PPC_FUNC_IMPL(__imp__sub_82735EB8) {
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
	// bl 0x82735db0
	ctx.lr = 0x82735ED8;
	sub_82735DB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82735f0c
	if (ctx.cr6.eq) goto loc_82735F0C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82735f04
	if (ctx.cr6.lt) goto loc_82735F04;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82735f0c
	if (!ctx.cr6.gt) goto loc_82735F0C;
loc_82735F04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82735F0C;
	sub_82294A58(ctx, base);
loc_82735F0C:
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

__attribute__((alias("__imp__sub_82735F28"))) PPC_WEAK_FUNC(sub_82735F28);
PPC_FUNC_IMPL(__imp__sub_82735F28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-25592
	ctx.r6.s64 = ctx.r7.s64 + -25592;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,-25660(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stw r11,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, ctx.r11.u32);
	// stw r11,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r11.u32);
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, ctx.r11.u32);
	// stw r9,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r9.u32);
	// stw r11,904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 904, ctx.r11.u32);
	// stw r11,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r11.u32);
	// stw r11,912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 912, ctx.r11.u32);
	// stw r11,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r11.u32);
	// stw r9,920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 920, ctx.r9.u32);
	// stw r10,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735F78"))) PPC_WEAK_FUNC(sub_82735F78);
PPC_FUNC_IMPL(__imp__sub_82735F78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735F80"))) PPC_WEAK_FUNC(sub_82735F80);
PPC_FUNC_IMPL(__imp__sub_82735F80) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-24896
	ctx.r9.s64 = ctx.r11.s64 + -24896;
	// addi r8,r10,-24348
	ctx.r8.s64 = ctx.r10.s64 + -24348;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82735FB0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558078
	ctx.lr = 0x82735FB8;
	sub_82558078(ctx, base);
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

__attribute__((alias("__imp__sub_82735FCC"))) PPC_WEAK_FUNC(sub_82735FCC);
PPC_FUNC_IMPL(__imp__sub_82735FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82735FD0"))) PPC_WEAK_FUNC(sub_82735FD0);
PPC_FUNC_IMPL(__imp__sub_82735FD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,15104
	ctx.r7.s64 = ctx.r8.s64 + 15104;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r7,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r7.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// addi r8,r6,-24896
	ctx.r8.s64 = ctx.r6.s64 + -24896;
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// addi r7,r5,-24348
	ctx.r7.s64 = ctx.r5.s64 + -24348;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r4,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r4.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r7.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273602C"))) PPC_WEAK_FUNC(sub_8273602C);
PPC_FUNC_IMPL(__imp__sub_8273602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82736030"))) PPC_WEAK_FUNC(sub_82736030);
PPC_FUNC_IMPL(__imp__sub_82736030) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,-24896
	ctx.r9.s64 = ctx.r11.s64 + -24896;
	// addi r8,r10,-24348
	ctx.r8.s64 = ctx.r10.s64 + -24348;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82736068;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558078
	ctx.lr = 0x82736070;
	sub_82558078(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827360a4
	if (ctx.cr6.eq) goto loc_827360A4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8273609c
	if (ctx.cr6.lt) goto loc_8273609C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827360a4
	if (!ctx.cr6.gt) goto loc_827360A4;
loc_8273609C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x827360A4;
	sub_82294A58(ctx, base);
loc_827360A4:
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

__attribute__((alias("__imp__sub_827360C0"))) PPC_WEAK_FUNC(sub_827360C0);
PPC_FUNC_IMPL(__imp__sub_827360C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,15104
	ctx.r7.s64 = ctx.r8.s64 + 15104;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r7,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r7.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// addi r8,r6,-24896
	ctx.r8.s64 = ctx.r6.s64 + -24896;
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// addi r7,r5,-24348
	ctx.r7.s64 = ctx.r5.s64 + -24348;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r4,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r4.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r7.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736114"))) PPC_WEAK_FUNC(sub_82736114);
PPC_FUNC_IMPL(__imp__sub_82736114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82736118"))) PPC_WEAK_FUNC(sub_82736118);
PPC_FUNC_IMPL(__imp__sub_82736118) {
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
	ctx.lr = 0x82736134;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827361bc
	if (ctx.cr6.eq) goto loc_827361BC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// addi r11,r7,-26432
	ctx.r11.s64 = ctx.r7.s64 + -26432;
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
	// addi r5,r31,23776
	ctx.r5.s64 = ctx.r31.s64 + 23776;
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
	// li r5,832
	ctx.r5.s64 = 832;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x827361A8;
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
loc_827361BC:
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

__attribute__((alias("__imp__sub_827361D4"))) PPC_WEAK_FUNC(sub_827361D4);
PPC_FUNC_IMPL(__imp__sub_827361D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827361D8"))) PPC_WEAK_FUNC(sub_827361D8);
PPC_FUNC_IMPL(__imp__sub_827361D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827361E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273620c
	if (!ctx.cr6.eq) goto loc_8273620C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255b818
	ctx.lr = 0x82736200;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x82736208;
	sub_8255B8D8(ctx, base);
	// lwz r10,-29488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
loc_8273620C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27432);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273622c
	if (ctx.cr6.eq) goto loc_8273622C;
	// bl 0x822e2698
	ctx.lr = 0x82736220;
	sub_822E2698(ctx, base);
	// lwz r11,-27432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27432);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82736234
	goto loc_82736234;
loc_8273622C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82736234:
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
	// bne cr6,0x82736264
	if (!ctx.cr6.eq) goto loc_82736264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82736254;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8273625C;
	sub_822AADA8(ctx, base);
	// lwz r11,-27432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27432);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82736264:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82736290
	if (!ctx.cr6.eq) goto loc_82736290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82736280;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82736288;
	sub_82398640(ctx, base);
	// lwz r11,-27432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27432);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82736290:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827362c8
	if (ctx.cr6.eq) goto loc_827362C8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x827362AC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827362c8
	if (!ctx.cr6.eq) goto loc_827362C8;
	// lwz r3,-27432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27432);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827362C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827362C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827362D0"))) PPC_WEAK_FUNC(sub_827362D0);
PPC_FUNC_IMPL(__imp__sub_827362D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827362D8"))) PPC_WEAK_FUNC(sub_827362D8);
PPC_FUNC_IMPL(__imp__sub_827362D8) {
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
	// lwz r11,-29488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273631c
	if (!ctx.cr6.eq) goto loc_8273631C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255b818
	ctx.lr = 0x82736310;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x82736318;
	sub_8255B8D8(ctx, base);
	// lwz r11,-29488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
loc_8273631C:
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

__attribute__((alias("__imp__sub_82736344"))) PPC_WEAK_FUNC(sub_82736344);
PPC_FUNC_IMPL(__imp__sub_82736344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82736348"))) PPC_WEAK_FUNC(sub_82736348);
PPC_FUNC_IMPL(__imp__sub_82736348) {
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
	ctx.lr = 0x82736364;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827363ec
	if (ctx.cr6.eq) goto loc_827363EC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// addi r11,r7,-26412
	ctx.r11.s64 = ctx.r7.s64 + -26412;
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
	// addi r5,r31,24152
	ctx.r5.s64 = ctx.r31.s64 + 24152;
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
	// li r5,928
	ctx.r5.s64 = 928;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x827363D8;
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
loc_827363EC:
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

__attribute__((alias("__imp__sub_82736404"))) PPC_WEAK_FUNC(sub_82736404);
PPC_FUNC_IMPL(__imp__sub_82736404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82736408"))) PPC_WEAK_FUNC(sub_82736408);
PPC_FUNC_IMPL(__imp__sub_82736408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82736410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273643c
	if (!ctx.cr6.eq) goto loc_8273643C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255b818
	ctx.lr = 0x82736430;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x82736438;
	sub_8255B8D8(ctx, base);
	// lwz r10,-29488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
loc_8273643C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27428);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273645c
	if (ctx.cr6.eq) goto loc_8273645C;
	// bl 0x822e2698
	ctx.lr = 0x82736450;
	sub_822E2698(ctx, base);
	// lwz r11,-27428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27428);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82736464
	goto loc_82736464;
loc_8273645C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82736464:
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
	// bne cr6,0x82736494
	if (!ctx.cr6.eq) goto loc_82736494;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82736484;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x8273648C;
	sub_822AADA8(ctx, base);
	// lwz r11,-27428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27428);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82736494:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827364c0
	if (!ctx.cr6.eq) goto loc_827364C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x827364B0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x827364B8;
	sub_82398640(ctx, base);
	// lwz r11,-27428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27428);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_827364C0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827364f8
	if (ctx.cr6.eq) goto loc_827364F8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x827364DC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827364f8
	if (!ctx.cr6.eq) goto loc_827364F8;
	// lwz r3,-27428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27428);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827364F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827364F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736500"))) PPC_WEAK_FUNC(sub_82736500);
PPC_FUNC_IMPL(__imp__sub_82736500) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736508"))) PPC_WEAK_FUNC(sub_82736508);
PPC_FUNC_IMPL(__imp__sub_82736508) {
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
	// lwz r11,-29488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273654c
	if (!ctx.cr6.eq) goto loc_8273654C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255b818
	ctx.lr = 0x82736540;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x82736548;
	sub_8255B8D8(ctx, base);
	// lwz r11,-29488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
loc_8273654C:
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

__attribute__((alias("__imp__sub_82736574"))) PPC_WEAK_FUNC(sub_82736574);
PPC_FUNC_IMPL(__imp__sub_82736574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82736578"))) PPC_WEAK_FUNC(sub_82736578);
PPC_FUNC_IMPL(__imp__sub_82736578) {
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
	ctx.lr = 0x82736594;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273661c
	if (ctx.cr6.eq) goto loc_8273661C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// addi r11,r7,-26376
	ctx.r11.s64 = ctx.r7.s64 + -26376;
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
	// addi r5,r31,24528
	ctx.r5.s64 = ctx.r31.s64 + 24528;
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
	// li r5,492
	ctx.r5.s64 = 492;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82736608;
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
loc_8273661C:
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

__attribute__((alias("__imp__sub_82736634"))) PPC_WEAK_FUNC(sub_82736634);
PPC_FUNC_IMPL(__imp__sub_82736634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82736638"))) PPC_WEAK_FUNC(sub_82736638);
PPC_FUNC_IMPL(__imp__sub_82736638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82736640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29376);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273666c
	if (!ctx.cr6.eq) goto loc_8273666C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255f558
	ctx.lr = 0x82736660;
	sub_8255F558(ctx, base);
	// stw r3,-29376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29376, ctx.r3.u32);
	// bl 0x8255f618
	ctx.lr = 0x82736668;
	sub_8255F618(ctx, base);
	// lwz r10,-29376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29376);
loc_8273666C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-27424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27424);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273668c
	if (ctx.cr6.eq) goto loc_8273668C;
	// bl 0x822e2e28
	ctx.lr = 0x82736680;
	sub_822E2E28(ctx, base);
	// lwz r11,-27424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27424);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82736694
	goto loc_82736694;
loc_8273668C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82736694:
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
	// bne cr6,0x827366c4
	if (!ctx.cr6.eq) goto loc_827366C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x827366B4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x827366BC;
	sub_822AADA8(ctx, base);
	// lwz r11,-27424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27424);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_827366C4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827366f0
	if (!ctx.cr6.eq) goto loc_827366F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x827366E0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x827366E8;
	sub_82398640(ctx, base);
	// lwz r11,-27424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27424);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_827366F0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82736728
	if (ctx.cr6.eq) goto loc_82736728;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x8273670C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82736728
	if (!ctx.cr6.eq) goto loc_82736728;
	// lwz r3,-27424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27424);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82736728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82736728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736730"))) PPC_WEAK_FUNC(sub_82736730);
PPC_FUNC_IMPL(__imp__sub_82736730) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736738"))) PPC_WEAK_FUNC(sub_82736738);
PPC_FUNC_IMPL(__imp__sub_82736738) {
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
	// lwz r11,-29376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29376);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273677c
	if (!ctx.cr6.eq) goto loc_8273677C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255f558
	ctx.lr = 0x82736770;
	sub_8255F558(ctx, base);
	// stw r3,-29376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29376, ctx.r3.u32);
	// bl 0x8255f618
	ctx.lr = 0x82736778;
	sub_8255F618(ctx, base);
	// lwz r11,-29376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29376);
loc_8273677C:
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

__attribute__((alias("__imp__sub_827367A4"))) PPC_WEAK_FUNC(sub_827367A4);
PPC_FUNC_IMPL(__imp__sub_827367A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827367A8"))) PPC_WEAK_FUNC(sub_827367A8);
PPC_FUNC_IMPL(__imp__sub_827367A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827367B0;
	__savegprlr_28(ctx, base);
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
loc_827367C0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82736828
	if (ctx.cr6.lt) goto loc_82736828;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82736828
	if (!ctx.cr6.lt) goto loc_82736828;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x823f8a48
	ctx.lr = 0x82736800;
	sub_823F8A48(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x823f8a48
	ctx.lr = 0x82736820;
	sub_823F8A48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x827367c0
	goto loc_827367C0;
loc_82736828:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736830"))) PPC_WEAK_FUNC(sub_82736830);
PPC_FUNC_IMPL(__imp__sub_82736830) {
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
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// bne cr6,0x827368dc
	if (!ctx.cr6.eq) goto loc_827368DC;
	// lwz r11,-240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827368dc
	if (!ctx.cr6.gt) goto loc_827368DC;
	// lwz r11,-244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -244);
	// addi r31,r30,-244
	ctx.r31.s64 = ctx.r30.s64 + -244;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8273cc18
	ctx.lr = 0x8273686C;
	sub_8273CC18(ctx, base);
	// lwz r10,368(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827368dc
	if (!ctx.cr6.eq) goto loc_827368DC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827368a0
	if (ctx.cr6.eq) goto loc_827368A0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x827368A0;
	sub_82294520(ctx, base);
loc_827368A0:
	// lwz r11,-340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -340);
	// addi r31,r30,-340
	ctx.r31.s64 = ctx.r30.s64 + -340;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827368C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-340(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,380(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827368DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827368DC:
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

__attribute__((alias("__imp__sub_827368F4"))) PPC_WEAK_FUNC(sub_827368F4);
PPC_FUNC_IMPL(__imp__sub_827368F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827368F8"))) PPC_WEAK_FUNC(sub_827368F8);
PPC_FUNC_IMPL(__imp__sub_827368F8) {
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
	// bl 0x82569368
	ctx.lr = 0x82736910;
	sub_82569368(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r5,r31,340
	ctx.r5.s64 = ctx.r31.s64 + 340;
	// bne cr6,0x82736920
	if (!ctx.cr6.eq) goto loc_82736920;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82736920:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273693C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82736950"))) PPC_WEAK_FUNC(sub_82736950);
PPC_FUNC_IMPL(__imp__sub_82736950) {
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
	// addi r4,r31,340
	ctx.r4.s64 = ctx.r31.s64 + 340;
	// bne cr6,0x82736974
	if (!ctx.cr6.eq) goto loc_82736974;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82736974:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273698C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569250
	ctx.lr = 0x82736994;
	sub_82569250(ctx, base);
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

__attribute__((alias("__imp__sub_827369A8"))) PPC_WEAK_FUNC(sub_827369A8);
PPC_FUNC_IMPL(__imp__sub_827369A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x827369B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827369d8
	if (!ctx.cr6.eq) goto loc_827369D8;
loc_827369CC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_827369D8:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x827369e4
	if (!ctx.cr6.eq) goto loc_827369E4;
	// lwz r28,100(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
loc_827369E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827369F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827369cc
	if (!ctx.cr6.eq) goto loc_827369CC;
	// li r29,-1
	ctx.r29.s64 = -1;
	// bl 0x822ee508
	ctx.lr = 0x82736A08;
	sub_822EE508(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82736a28
	if (ctx.cr6.eq) goto loc_82736A28;
loc_82736A14:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82736a38
	if (ctx.cr6.eq) goto loc_82736A38;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82736a14
	if (!ctx.cr6.eq) goto loc_82736A14;
loc_82736A28:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82736a64
	if (ctx.cr6.eq) goto loc_82736A64;
loc_82736A38:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82736ae0
	if (!ctx.cr6.eq) goto loc_82736AE0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562300
	ctx.lr = 0x82736A58;
	sub_82562300(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82736A64:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82736ae0
	if (!ctx.cr6.eq) goto loc_82736AE0;
	// lwz r26,96(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x822ee508
	ctx.lr = 0x82736A78;
	sub_822EE508(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82736a9c
	if (ctx.cr6.eq) goto loc_82736A9C;
loc_82736A88:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82736aac
	if (ctx.cr6.eq) goto loc_82736AAC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82736a88
	if (!ctx.cr6.eq) goto loc_82736A88;
loc_82736A9C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82736ae0
	if (ctx.cr6.eq) goto loc_82736AE0;
loc_82736AAC:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82736ae0
	if (ctx.cr6.eq) goto loc_82736AE0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82736ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82736AE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82736AEC"))) PPC_WEAK_FUNC(sub_82736AEC);
PPC_FUNC_IMPL(__imp__sub_82736AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82736AF0"))) PPC_WEAK_FUNC(sub_82736AF0);
PPC_FUNC_IMPL(__imp__sub_82736AF0) {
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
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82736b5c
	if (!ctx.cr6.eq) goto loc_82736B5C;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x822ee508
	ctx.lr = 0x82736B1C;
	sub_822EE508(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82736b40
	if (ctx.cr6.eq) goto loc_82736B40;
loc_82736B2C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82736b50
	if (ctx.cr6.eq) goto loc_82736B50;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82736b2c
	if (!ctx.cr6.eq) goto loc_82736B2C;
loc_82736B40:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82736b5c
	if (ctx.cr6.eq) goto loc_82736B5C;
loc_82736B50:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82736b70
	goto loc_82736B70;
loc_82736B5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82736B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82736B70:
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

__attribute__((alias("__imp__sub_82736B88"))) PPC_WEAK_FUNC(sub_82736B88);
PPC_FUNC_IMPL(__imp__sub_82736B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r10,25204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82736BA4"))) PPC_WEAK_FUNC(sub_82736BA4);
PPC_FUNC_IMPL(__imp__sub_82736BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82736BA8"))) PPC_WEAK_FUNC(sub_82736BA8);
PPC_FUNC_IMPL(__imp__sub_82736BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82736BB0;
	__savegprlr_14(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r26,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r26.u32);
	// ld r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82736be0
	if (!ctx.cr6.eq) goto loc_82736BE0;
loc_82736BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82736BE0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82736bd4
	if (ctx.cr6.eq) goto loc_82736BD4;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// ble cr6,0x82736c90
	if (!ctx.cr6.gt) goto loc_82736C90;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82736C00:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82736bd4
	if (ctx.cr6.eq) goto loc_82736BD4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82736C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82736bd4
	if (!ctx.cr6.eq) goto loc_82736BD4;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82736bd4
	if (!ctx.cr6.eq) goto loc_82736BD4;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82736c80
	if (!ctx.cr6.gt) goto loc_82736C80;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82736C54:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82736c70
	if (ctx.cr6.eq) goto loc_82736C70;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82736bd4
	if (ctx.cr6.eq) goto loc_82736BD4;
loc_82736C70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82736c54
	if (ctx.cr6.lt) goto loc_82736C54;
loc_82736C80:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82736c00
	if (ctx.cr6.lt) goto loc_82736C00;
loc_82736C90:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// li r21,8
	ctx.r21.s64 = 8;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// ble cr6,0x82736d14
	if (!ctx.cr6.gt) goto loc_82736D14;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82736CBC:
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r30,52(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x8273be50
	ctx.lr = 0x82736CD8;
	sub_8273BE50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82736cf0
	if (ctx.cr6.eq) goto loc_82736CF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82736d00
	goto loc_82736D00;
loc_82736CF0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8273bd80
	ctx.lr = 0x82736D00;
	sub_8273BD80(ctx, base);
loc_82736D00:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82736cbc
	if (ctx.cr6.lt) goto loc_82736CBC;
loc_82736D14:
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 60, temp.u32);
	// addi r17,r25,60
	ctx.r17.s64 = ctx.r25.s64 + 60;
	// stb r28,76(r25)
	PPC_STORE_U8(ctx.r25.u32 + 76, ctx.r28.u8);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 64, temp.u32);
	// stb r28,77(r25)
	PPC_STORE_U8(ctx.r25.u32 + 77, ctx.r28.u8);
	// lfs f12,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stfs f12,68(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 68, temp.u32);
	// stb r28,78(r25)
	PPC_STORE_U8(ctx.r25.u32 + 78, ctx.r28.u8);
	// lfs f11,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r20,-31885
	ctx.r20.s64 = -2089615360;
	// stfs f11,72(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 72, temp.u32);
	// stb r28,79(r25)
	PPC_STORE_U8(ctx.r25.u32 + 79, ctx.r28.u8);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ble cr6,0x827372e0
	if (!ctx.cr6.gt) goto loc_827372E0;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// addi r8,r10,-27344
	ctx.r8.s64 = ctx.r10.s64 + -27344;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rldicr r19,r9,10,53
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// li r14,-1
	ctx.r14.s64 = -1;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lis r15,-31884
	ctx.r15.s64 = -2089549824;
	// addi r16,r11,3984
	ctx.r16.s64 = ctx.r11.s64 + 3984;
loc_82736DC0:
	// lwz r11,636(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r6,52(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82737f80
	ctx.lr = 0x82736DE8;
	sub_82737F80(ctx, base);
	// lwz r8,52(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r19,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r19.u64);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r21,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r21.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// std r19,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r19.u64);
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// lwz r27,272(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r26,276(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// bne cr6,0x82736e64
	if (!ctx.cr6.eq) goto loc_82736E64;
	// lwz r30,40(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82736e64
	if (ctx.cr6.eq) goto loc_82736E64;
loc_82736E44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258a2d0
	ctx.lr = 0x82736E4C;
	sub_8258A2D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82736e64
	if (!ctx.cr6.eq) goto loc_82736E64;
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82736e44
	if (!ctx.cr6.eq) goto loc_82736E44;
loc_82736E64:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8273c838
	ctx.lr = 0x82736E70;
	sub_8273C838(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// bl 0x822ae870
	ctx.lr = 0x82736E80;
	sub_822AE870(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x822abeb8
	ctx.lr = 0x82736E90;
	sub_822ABEB8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822a98a8
	ctx.lr = 0x82736E98;
	sub_822A98A8(ctx, base);
	// bl 0x8258a478
	ctx.lr = 0x82736E9C;
	sub_8258A478(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,392(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82736EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,416(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 416);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82736EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,24988(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24988);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x8259ecb8
	ctx.lr = 0x82736ED4;
	sub_8259ECB8(ctx, base);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stw r27,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r27.u32);
	// stw r26,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r5,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r5.u32);
	// stw r4,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r4.u32);
	// stw r11,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r11.u32);
	// stw r10,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r10.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82736F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822abeb8
	ctx.lr = 0x82736F38;
	sub_822ABEB8(ctx, base);
	// li r7,455
	ctx.r7.s64 = 455;
	// li r6,2327
	ctx.r6.s64 = 2327;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// li r5,90
	ctx.r5.s64 = 90;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stw r6,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r5,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r5.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stw r28,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r28.u32);
	// stw r30,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r30.u32);
	// stw r16,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r16.u32);
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// stw r28,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r28.u32);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r31.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// stw r28,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r28.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// stw r14,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r14.u32);
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r31.u32);
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r31.u32);
	// stw r4,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r4.u32);
	// stw r31,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r31.u32);
	// stw r31,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r31.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r31.u32);
	// stw r21,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r21.u32);
	// stw r28,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r28.u32);
	// stw r28,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r28.u32);
	// stw r28,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r28.u32);
	// stw r28,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r28.u32);
	// bl 0x823f8770
	ctx.lr = 0x82736FE4;
	sub_823F8770(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x8273707c
	if (!ctx.cr6.gt) goto loc_8273707C;
	// addi r10,r22,32
	ctx.r10.s64 = ctx.r22.s64 + 32;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r18,r8,5,0,26
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x8273703c
	if (!ctx.cr6.eq) goto loc_8273703C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82737080
	if (ctx.cr6.eq) goto loc_82737080;
loc_8273703C:
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// rlwinm r27,r18,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737054
	if (!ctx.cr6.eq) goto loc_82737054;
	// bl 0x822900a0
	ctx.lr = 0x82737050;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82737054:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// b 0x82737080
	goto loc_82737080;
loc_8273707C:
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_82737080:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82737090
	if (ctx.cr0.eq) goto loc_82737090;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82737090:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r25,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r25.u32);
	// addi r9,r30,488
	ctx.r9.s64 = ctx.r30.s64 + 488;
	// stw r23,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r23.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r23,368(r25)
	PPC_STORE_U32(ctx.r25.u32 + 368, ctx.r23.u32);
loc_827370AC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r31,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stb r8,76(r10)
	PPC_STORE_U8(ctx.r10.u32 + 76, ctx.r8.u8);
	// blt cr6,0x827370ac
	if (ctx.cr6.lt) goto loc_827370AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f4,20(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f1,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,340(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x827370F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r31.u32);
	// stw r31,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,368(r25)
	PPC_STORE_U32(ctx.r25.u32 + 368, ctx.r31.u32);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r6,624(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// rlwinm r4,r6,0,23,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r4,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r4.u32);
	// ble cr6,0x82737150
	if (!ctx.cr6.gt) goto loc_82737150;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82737124:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x82570580
	ctx.lr = 0x8273713C;
	sub_82570580(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82737124
	if (ctx.cr6.lt) goto loc_82737124;
loc_82737150:
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// lwz r30,440(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737168
	if (!ctx.cr6.eq) goto loc_82737168;
	// bl 0x822900a0
	ctx.lr = 0x82737164;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82737168:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273717C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r31.u32);
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827371bc
	if (ctx.cr6.eq) goto loc_827371BC;
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827371a8
	if (!ctx.cr6.eq) goto loc_827371A8;
	// bl 0x822900a0
	ctx.lr = 0x827371A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_827371A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827371BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827371BC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r31,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// bne cr6,0x827371e8
	if (!ctx.cr6.eq) goto loc_827371E8;
	// bl 0x822900a0
	ctx.lr = 0x827371E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_827371E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827371FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273723c
	if (ctx.cr6.eq) goto loc_8273723C;
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737228
	if (!ctx.cr6.eq) goto loc_82737228;
	// bl 0x822900a0
	ctx.lr = 0x82737224;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82737228:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273723C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273723C:
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// bne cr6,0x8273725c
	if (!ctx.cr6.eq) goto loc_8273725C;
	// bl 0x822900a0
	ctx.lr = 0x82737258;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_8273725C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,248(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// beq cr6,0x827372ac
	if (ctx.cr6.eq) goto loc_827372AC;
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737298
	if (!ctx.cr6.eq) goto loc_82737298;
	// bl 0x822900a0
	ctx.lr = 0x82737294;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82737298:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827372AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827372AC:
	// lwz r10,636(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// addi r7,r8,40
	ctx.r7.s64 = ctx.r8.s64 + 40;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// blt cr6,0x82736dc0
	if (ctx.cr6.lt) goto loc_82736DC0;
loc_827372E0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8273cc98
	ctx.lr = 0x827372E8;
	sub_8273CC98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 + 60;
	// addi r7,r3,76
	ctx.r7.s64 = ctx.r3.s64 + 76;
loc_827372F4:
	// rlwinm r6,r11,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfsx f0,r6,r17
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r17.u32, temp.u32);
	// beq cr6,0x82737318
	if (ctx.cr6.eq) goto loc_82737318;
	// add r9,r17,r9
	ctx.r9.u64 = ctx.r17.u64 + ctx.r9.u64;
	// stb r10,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r10.u8);
loc_82737318:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x827372f4
	if (ctx.cr6.lt) goto loc_827372F4;
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273735c
	if (ctx.cr6.eq) goto loc_8273735C;
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737348
	if (!ctx.cr6.eq) goto loc_82737348;
	// bl 0x822900a0
	ctx.lr = 0x82737344;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82737348:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273735C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273735C:
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737374
	if (!ctx.cr6.eq) goto loc_82737374;
	// bl 0x822900a0
	ctx.lr = 0x82737370;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82737374:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827373c8
	if (ctx.cr6.eq) goto loc_827373C8;
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827373b4
	if (!ctx.cr6.eq) goto loc_827373B4;
	// bl 0x822900a0
	ctx.lr = 0x827373B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_827373B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827373C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827373C8:
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bne cr6,0x827373e8
	if (!ctx.cr6.eq) goto loc_827373E8;
	// bl 0x822900a0
	ctx.lr = 0x827373E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_827373E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827373FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82737430
	if (ctx.cr6.eq) goto loc_82737430;
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273741c
	if (!ctx.cr6.eq) goto loc_8273741C;
	// bl 0x822900a0
	ctx.lr = 0x82737418;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_8273741C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737430:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273743C"))) PPC_WEAK_FUNC(sub_8273743C);
PPC_FUNC_IMPL(__imp__sub_8273743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82737440"))) PPC_WEAK_FUNC(sub_82737440);
PPC_FUNC_IMPL(__imp__sub_82737440) {
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

__attribute__((alias("__imp__sub_82737460"))) PPC_WEAK_FUNC(sub_82737460);
PPC_FUNC_IMPL(__imp__sub_82737460) {
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
	ctx.lr = 0x8273747C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8273c500
	ctx.lr = 0x82737490;
	sub_8273C500(ctx, base);
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

__attribute__((alias("__imp__sub_827374A4"))) PPC_WEAK_FUNC(sub_827374A4);
PPC_FUNC_IMPL(__imp__sub_827374A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827374A8"))) PPC_WEAK_FUNC(sub_827374A8);
PPC_FUNC_IMPL(__imp__sub_827374A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827374B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// std r26,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r26.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// bl 0x822a98a8
	ctx.lr = 0x82737530;
	sub_822A98A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,816(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82737604
	if (!ctx.cr6.gt) goto loc_82737604;
	// addi r31,r30,124
	ctx.r31.s64 = ctx.r30.s64 + 124;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82737568:
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x822a98a8
	ctx.lr = 0x82737588;
	sub_822A98A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,264(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 264);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8273759C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x827375d8
	if (!ctx.cr6.gt) goto loc_827375D8;
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
	ctx.lr = 0x827375D8;
	sub_82294520(ctx, base);
loc_827375D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827375ec
	if (ctx.cr0.eq) goto loc_827375EC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_827375EC:
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82737568
	if (ctx.cr6.lt) goto loc_82737568;
loc_82737604:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r4,24988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// bl 0x8259ecb8
	ctx.lr = 0x82737614;
	sub_8259ECB8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82737618:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82737658
	if (ctx.cr6.lt) goto loc_82737658;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82737658
	if (!ctx.cr6.lt) goto loc_82737658;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,824
	ctx.r3.s64 = ctx.r30.s64 + 824;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822abeb8
	ctx.lr = 0x82737650;
	sub_822ABEB8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82737618
	goto loc_82737618;
loc_82737658:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737674
	if (!ctx.cr6.eq) goto loc_82737674;
	// bl 0x822900a0
	ctx.lr = 0x82737670;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82737674:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827376c8
	if (ctx.cr6.eq) goto loc_827376C8;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827376b4
	if (!ctx.cr6.eq) goto loc_827376B4;
	// bl 0x822900a0
	ctx.lr = 0x827376B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_827376B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827376C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827376C8:
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bne cr6,0x827376e8
	if (!ctx.cr6.eq) goto loc_827376E8;
	// bl 0x822900a0
	ctx.lr = 0x827376E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_827376E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827376FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82737730
	if (ctx.cr6.eq) goto loc_82737730;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273771c
	if (!ctx.cr6.eq) goto loc_8273771C;
	// bl 0x822900a0
	ctx.lr = 0x82737718;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8273771C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737730:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737738"))) PPC_WEAK_FUNC(sub_82737738);
PPC_FUNC_IMPL(__imp__sub_82737738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82737740;
	__savegprlr_18(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r5.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// beq cr6,0x82737c78
	if (ctx.cr6.eq) goto loc_82737C78;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822ee5c8
	ctx.lr = 0x8273776C;
	sub_822EE5C8(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8273777c
	if (!ctx.cr6.eq) goto loc_8273777C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r30,25104(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_8273777C:
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// rldicr r21,r9,32,63
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a93e8
	ctx.lr = 0x827377A8;
	sub_822A93E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x827377C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8233e1a0
	ctx.lr = 0x827377CC;
	sub_8233E1A0(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x827377e0
	if (ctx.cr6.eq) goto loc_827377E0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x827377e8
	goto loc_827377E8;
loc_827377E0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_827377E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x8273780C;
	sub_82299080(ctx, base);
	// stw r27,816(r28)
	PPC_STORE_U32(ctx.r28.u32 + 816, ctx.r27.u32);
	// lwz r9,816(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 816);
	// addi r25,r28,824
	ctx.r25.s64 = ctx.r28.s64 + 824;
	// stw r9,820(r28)
	PPC_STORE_U32(ctx.r28.u32 + 820, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822abeb8
	ctx.lr = 0x8273782C;
	sub_822ABEB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827374a8
	ctx.lr = 0x82737834;
	sub_827374A8(ctx, base);
	// lwz r8,100(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r23,8
	ctx.r23.s64 = 8;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// ble cr6,0x82737b48
	if (!ctx.cr6.gt) goto loc_82737B48;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r19,r11,-19580
	ctx.r19.s64 = ctx.r11.s64 + -19580;
loc_82737880:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r31,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r31.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// lwzx r30,r26,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// std r21,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r21.u64);
	// bl 0x8273c838
	ctx.lr = 0x827378E8;
	sub_8273C838(ctx, base);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// bl 0x822ae870
	ctx.lr = 0x827378F8;
	sub_822AE870(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x822abeb8
	ctx.lr = 0x82737908;
	sub_822ABEB8(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8273791c
	if (ctx.cr6.eq) goto loc_8273791C;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x82737938
	goto loc_82737938;
loc_8273791C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8233e028
	ctx.lr = 0x82737934;
	sub_8233E028(ctx, base);
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
loc_82737938:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bl 0x822a98a8
	ctx.lr = 0x82737958;
	sub_822A98A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82737c94
	if (ctx.cr6.eq) goto loc_82737C94;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273797C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82737990
	if (ctx.cr6.eq) goto loc_82737990;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x827379ac
	goto loc_827379AC;
loc_82737990:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8233e028
	ctx.lr = 0x827379A8;
	sub_8233E028(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_827379AC:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r9,360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 360, ctx.r9.u32);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r10,356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 356, ctx.r10.u32);
	// bl 0x82586550
	ctx.lr = 0x827379D0;
	sub_82586550(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_827379D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82737a44
	if (ctx.cr6.lt) goto loc_82737A44;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82737a44
	if (!ctx.cr6.lt) goto loc_82737A44;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r18,8(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x822abeb8
	ctx.lr = 0x82737A14;
	sub_822ABEB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822abeb8
	ctx.lr = 0x82737A24;
	sub_822ABEB8(ctx, base);
	// lis r12,-257
	ctx.r12.s64 = -16842752;
	// ld r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r18.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r12,r12,65534
	ctx.r12.u64 = ctx.r12.u64 | 65534;
	// rldicr r12,r12,10,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 10) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// std r9,8(r18)
	PPC_STORE_U64(ctx.r18.u32 + 8, ctx.r9.u64);
	// b 0x827379d4
	goto loc_827379D4;
loc_82737A44:
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737a5c
	if (!ctx.cr6.eq) goto loc_82737A5C;
	// bl 0x822900a0
	ctx.lr = 0x82737A58;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82737A5C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737ab0
	if (ctx.cr6.eq) goto loc_82737AB0;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737a9c
	if (!ctx.cr6.eq) goto loc_82737A9C;
	// bl 0x822900a0
	ctx.lr = 0x82737A98;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82737A9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737AB0:
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bne cr6,0x82737ad0
	if (!ctx.cr6.eq) goto loc_82737AD0;
	// bl 0x822900a0
	ctx.lr = 0x82737ACC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82737AD0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// beq cr6,0x82737b20
	if (ctx.cr6.eq) goto loc_82737B20;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737b0c
	if (!ctx.cr6.eq) goto loc_82737B0C;
	// bl 0x822900a0
	ctx.lr = 0x82737B08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82737B0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737B20:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// blt cr6,0x82737880
	if (ctx.cr6.lt) goto loc_82737880;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82737B48:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82737bec
	if (!ctx.cr6.gt) goto loc_82737BEC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82737B58:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82737B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,624(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ori r5,r7,512
	ctx.r5.u64 = ctx.r7.u64 | 512;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r5.u32);
	// ble cr6,0x82737be0
	if (!ctx.cr6.gt) goto loc_82737BE0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82737BB4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x82570580
	ctx.lr = 0x82737BCC;
	sub_82570580(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82737bb4
	if (ctx.cr6.lt) goto loc_82737BB4;
loc_82737BE0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82737b58
	if (!ctx.cr0.eq) goto loc_82737B58;
loc_82737BEC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82737c1c
	if (ctx.cr6.eq) goto loc_82737C1C;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737c08
	if (!ctx.cr6.eq) goto loc_82737C08;
	// bl 0x822900a0
	ctx.lr = 0x82737C04;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82737C08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737C1C:
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737c30
	if (!ctx.cr6.eq) goto loc_82737C30;
	// bl 0x822900a0
	ctx.lr = 0x82737C2C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82737C30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82737c78
	if (ctx.cr6.eq) goto loc_82737C78;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737c64
	if (!ctx.cr6.eq) goto loc_82737C64;
	// bl 0x822900a0
	ctx.lr = 0x82737C60;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_82737C64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737C78:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,824
	ctx.r3.s64 = ctx.r28.s64 + 824;
	// bl 0x82737e50
	ctx.lr = 0x82737C88;
	sub_82737E50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82737C94:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82737CA0;
	sub_82294A58(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ada80
	ctx.lr = 0x82737CB0;
	sub_822ADA80(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82294a58
	ctx.lr = 0x82737CB8;
	sub_82294A58(ctx, base);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x822ada80
	ctx.lr = 0x82737CC8;
	sub_822ADA80(ctx, base);
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82737bec
	goto loc_82737BEC;
}

__attribute__((alias("__imp__sub_82737CD0"))) PPC_WEAK_FUNC(sub_82737CD0);
PPC_FUNC_IMPL(__imp__sub_82737CD0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82737d38
	if (!ctx.cr6.gt) goto loc_82737D38;
loc_82737D18:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82738560
	ctx.lr = 0x82737D24;
	sub_82738560(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82737d18
	if (ctx.cr6.lt) goto loc_82737D18;
loc_82737D38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737d74
	if (ctx.cr6.eq) goto loc_82737D74;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737d60
	if (!ctx.cr6.eq) goto loc_82737D60;
	// bl 0x822900a0
	ctx.lr = 0x82737D5C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82737D60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737D74:
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

__attribute__((alias("__imp__sub_82737D8C"))) PPC_WEAK_FUNC(sub_82737D8C);
PPC_FUNC_IMPL(__imp__sub_82737D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82737D90"))) PPC_WEAK_FUNC(sub_82737D90);
PPC_FUNC_IMPL(__imp__sub_82737D90) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82737df8
	if (!ctx.cr6.gt) goto loc_82737DF8;
loc_82737DD8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x827394e0
	ctx.lr = 0x82737DE4;
	sub_827394E0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82737dd8
	if (ctx.cr6.lt) goto loc_82737DD8;
loc_82737DF8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737e34
	if (ctx.cr6.eq) goto loc_82737E34;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737e20
	if (!ctx.cr6.eq) goto loc_82737E20;
	// bl 0x822900a0
	ctx.lr = 0x82737E1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82737E20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737E34:
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

__attribute__((alias("__imp__sub_82737E4C"))) PPC_WEAK_FUNC(sub_82737E4C);
PPC_FUNC_IMPL(__imp__sub_82737E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82737E50"))) PPC_WEAK_FUNC(sub_82737E50);
PPC_FUNC_IMPL(__imp__sub_82737E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82737E58;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x8273bb30
	ctx.lr = 0x82737E78;
	sub_8273BB30(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x82737f44
	if (!ctx.cr6.gt) goto loc_82737F44;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r25,r11,-27344
	ctx.r25.s64 = ctx.r11.s64 + -27344;
loc_82737E9C:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82735b38
	ctx.lr = 0x82737EBC;
	sub_82735B38(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,232(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bne cr6,0x82737ed4
	if (!ctx.cr6.eq) goto loc_82737ED4;
	// bl 0x822900a0
	ctx.lr = 0x82737ED0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82737ED4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82737f28
	if (ctx.cr6.eq) goto loc_82737F28;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737f14
	if (!ctx.cr6.eq) goto loc_82737F14;
	// bl 0x822900a0
	ctx.lr = 0x82737F10;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82737F14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737F28:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// bne 0x82737e9c
	if (!ctx.cr0.eq) goto loc_82737E9C;
loc_82737F44:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82737f74
	if (ctx.cr6.eq) goto loc_82737F74;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82737f60
	if (!ctx.cr6.eq) goto loc_82737F60;
	// bl 0x822900a0
	ctx.lr = 0x82737F5C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82737F60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82737F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82737F74:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82737F7C"))) PPC_WEAK_FUNC(sub_82737F7C);
PPC_FUNC_IMPL(__imp__sub_82737F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82737F80"))) PPC_WEAK_FUNC(sub_82737F80);
PPC_FUNC_IMPL(__imp__sub_82737F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82737F88;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r26,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r26.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273be50
	ctx.lr = 0x82737FAC;
	sub_8273BE50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82737fcc
	if (!ctx.cr6.eq) goto loc_82737FCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273bd80
	ctx.lr = 0x82737FC8;
	sub_8273BD80(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82737FCC:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r22,r10,-27584
	ctx.r22.s64 = ctx.r10.s64 + -27584;
	// addi r21,r11,-19580
	ctx.r21.s64 = ctx.r11.s64 + -19580;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82738000
	if (!ctx.cr6.eq) goto loc_82738000;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x822960c0
	ctx.lr = 0x82737FFC;
	sub_822960C0(ctx, base);
	// b 0x82738020
	goto loc_82738020;
loc_82738000:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82738018
	if (!ctx.cr6.eq) goto loc_82738018;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x822960c0
	ctx.lr = 0x82738014;
	sub_822960C0(ctx, base);
	// b 0x82738020
	goto loc_82738020;
loc_82738018:
	// addi r4,r26,44
	ctx.r4.s64 = ctx.r26.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82738020;
	sub_8233E1A0(ctx, base);
loc_82738020:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r24,r11,11272
	ctx.r24.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x8273803c
	if (!ctx.cr6.eq) goto loc_8273803C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_8273803C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r25,r11,-26344
	ctx.r25.s64 = ctx.r11.s64 + -26344;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8232e868
	ctx.lr = 0x82738054;
	sub_8232E868(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82738068
	if (!ctx.cr6.eq) goto loc_82738068;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82738068:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8233e028
	ctx.lr = 0x8273807C;
	sub_8233E028(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// beq cr6,0x827380a4
	if (ctx.cr6.eq) goto loc_827380A4;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x827380A4;
	sub_82294520(ctx, base);
loc_827380A4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x827380AC;
	sub_82294CC8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827380d0
	if (ctx.cr6.eq) goto loc_827380D0;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x827380D0;
	sub_82294520(ctx, base);
loc_827380D0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x827380D8;
	sub_82294CC8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// bl 0x82563070
	ctx.lr = 0x827380E4;
	sub_82563070(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827382b4
	if (ctx.cr6.eq) goto loc_827382B4;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
loc_827380F0:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82738114
	if (!ctx.cr6.eq) goto loc_82738114;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x822960c0
	ctx.lr = 0x82738110;
	sub_822960C0(ctx, base);
	// b 0x82738134
	goto loc_82738134;
loc_82738114:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273812c
	if (!ctx.cr6.eq) goto loc_8273812C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x822960c0
	ctx.lr = 0x82738128;
	sub_822960C0(ctx, base);
	// b 0x82738134
	goto loc_82738134;
loc_8273812C:
	// addi r4,r26,44
	ctx.r4.s64 = ctx.r26.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82738134;
	sub_8233E1A0(ctx, base);
loc_82738134:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x8273814c
	if (!ctx.cr6.eq) goto loc_8273814C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_8273814C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232e868
	ctx.lr = 0x8273815C;
	sub_8232E868(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82738174
	if (!ctx.cr6.eq) goto loc_82738174;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82738174:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e028
	ctx.lr = 0x82738188;
	sub_8233E028(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r9,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r9.u32);
	// beq cr6,0x827381e0
	if (ctx.cr6.eq) goto loc_827381E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82738210
	if (ctx.cr6.eq) goto loc_82738210;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827381c0
	if (!ctx.cr6.eq) goto loc_827381C0;
	// bl 0x822900a0
	ctx.lr = 0x827381BC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_827381C0:
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
	ctx.lr = 0x827381DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827381E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82738210
	if (ctx.cr6.eq) goto loc_82738210;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827381fc
	if (!ctx.cr6.eq) goto loc_827381FC;
	// bl 0x822900a0
	ctx.lr = 0x827381F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_827381FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738210:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// beq cr6,0x82738264
	if (ctx.cr6.eq) goto loc_82738264;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82738294
	if (ctx.cr6.eq) goto loc_82738294;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738244
	if (!ctx.cr6.eq) goto loc_82738244;
	// bl 0x822900a0
	ctx.lr = 0x82738240;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82738244:
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
	ctx.lr = 0x82738260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82738264:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82738294
	if (ctx.cr6.eq) goto loc_82738294;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738280
	if (!ctx.cr6.eq) goto loc_82738280;
	// bl 0x822900a0
	ctx.lr = 0x8273827C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82738280:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738294:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// bl 0x82563070
	ctx.lr = 0x827382AC;
	sub_82563070(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x827380f0
	if (!ctx.cr6.eq) goto loc_827380F0;
loc_827382B4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827382C0"))) PPC_WEAK_FUNC(sub_827382C0);
PPC_FUNC_IMPL(__imp__sub_827382C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256cd98
	sub_8256CD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827382C4"))) PPC_WEAK_FUNC(sub_827382C4);
PPC_FUNC_IMPL(__imp__sub_827382C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827382C8"))) PPC_WEAK_FUNC(sub_827382C8);
PPC_FUNC_IMPL(__imp__sub_827382C8) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,25204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827382f8
	if (ctx.cr6.eq) goto loc_827382F8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827382F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827382F8:
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// beq cr6,0x8273831c
	if (ctx.cr6.eq) goto loc_8273831C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273831c
	if (ctx.cr6.eq) goto loc_8273831C;
	// bl 0x825c08e0
	ctx.lr = 0x8273831C;
	sub_825C08E0(ctx, base);
loc_8273831C:
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

__attribute__((alias("__imp__sub_82738330"))) PPC_WEAK_FUNC(sub_82738330);
PPC_FUNC_IMPL(__imp__sub_82738330) {
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
	// bl 0x8229c718
	ctx.lr = 0x82738348;
	sub_8229C718(ctx, base);
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8273838c
	if (!ctx.cr6.eq) goto loc_8273838C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8273835C:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82738374
	if (ctx.cr6.eq) goto loc_82738374;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273835c
	if (!ctx.cr6.eq) goto loc_8273835C;
loc_82738374:
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273838c
	if (!ctx.cr6.eq) goto loc_8273838C;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
loc_8273838C:
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

__attribute__((alias("__imp__sub_827383A0"))) PPC_WEAK_FUNC(sub_827383A0);
PPC_FUNC_IMPL(__imp__sub_827383A0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82563650
	ctx.lr = 0x827383BC;
	sub_82563650(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26324
	ctx.r4.s64 = ctx.r11.s64 + -26324;
	// bl 0x8232e868
	ctx.lr = 0x827383D0;
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

__attribute__((alias("__imp__sub_827383E8"))) PPC_WEAK_FUNC(sub_827383E8);
PPC_FUNC_IMPL(__imp__sub_827383E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827383F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82738424
	if (ctx.cr6.eq) goto loc_82738424;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x82738424;
	sub_82294520(ctx, base);
loc_82738424:
	// ld r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x827384a4
	if (!ctx.cr6.eq) goto loc_827384A4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8273bef8
	ctx.lr = 0x8273843C;
	sub_8273BEF8(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
loc_82738444:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827384a4
	if (!ctx.cr6.lt) goto loc_827384A4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,816(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82738498
	if (!ctx.cr6.eq) goto loc_82738498;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738498
	if (!ctx.cr6.eq) goto loc_82738498;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b4070
	ctx.lr = 0x82738498;
	sub_822B4070(ctx, base);
loc_82738498:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8273bfa8
	ctx.lr = 0x827384A0;
	sub_8273BFA8(ctx, base);
	// b 0x82738444
	goto loc_82738444;
loc_827384A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827384AC"))) PPC_WEAK_FUNC(sub_827384AC);
PPC_FUNC_IMPL(__imp__sub_827384AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827384B0"))) PPC_WEAK_FUNC(sub_827384B0);
PPC_FUNC_IMPL(__imp__sub_827384B0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827384D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r9.u32);
	// bne cr6,0x827384f4
	if (!ctx.cr6.eq) goto loc_827384F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82737cd0
	ctx.lr = 0x827384F4;
	sub_82737CD0(ctx, base);
loc_827384F4:
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

__attribute__((alias("__imp__sub_82738508"))) PPC_WEAK_FUNC(sub_82738508);
PPC_FUNC_IMPL(__imp__sub_82738508) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,828(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// bne 0x82738548
	if (!ctx.cr0.eq) goto loc_82738548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82737d90
	ctx.lr = 0x82738548;
	sub_82737D90(ctx, base);
loc_82738548:
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

__attribute__((alias("__imp__sub_8273855C"))) PPC_WEAK_FUNC(sub_8273855C);
PPC_FUNC_IMPL(__imp__sub_8273855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738560"))) PPC_WEAK_FUNC(sub_82738560);
PPC_FUNC_IMPL(__imp__sub_82738560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82738568;
	__savegprlr_22(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r22,8
	ctx.r22.s64 = 8;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r25,r28,824
	ctx.r25.s64 = ctx.r28.s64 + 824;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823f35b0
	ctx.lr = 0x8273859C;
	sub_823F35B0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823bfd40
	ctx.lr = 0x827385A4;
	sub_823BFD40(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// addi r9,r10,-25696
	ctx.r9.s64 = ctx.r10.s64 + -25696;
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// stw r31,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r31.u32);
	// stw r31,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r8,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// bl 0x823bff78
	ctx.lr = 0x827385E8;
	sub_823BFF78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,816(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 816);
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// bl 0x822c1658
	ctx.lr = 0x827385F8;
	sub_822C1658(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// bl 0x827367a8
	ctx.lr = 0x82738618;
	sub_827367A8(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8273861C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827386fc
	if (ctx.cr6.lt) goto loc_827386FC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827386fc
	if (!ctx.cr6.lt) goto loc_827386FC;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x827386f4
	if (ctx.cr6.eq) goto loc_827386F4;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827386f4
	if (ctx.cr6.eq) goto loc_827386F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273866C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82735b38
	ctx.lr = 0x8273868C;
	sub_82735B38(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x823f4778
	ctx.lr = 0x82738694;
	sub_823F4778(ctx, base);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827386AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82735b38
	ctx.lr = 0x827386D8;
	sub_82735B38(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x823f4778
	ctx.lr = 0x827386E0;
	sub_823F4778(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827386F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827386F4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x8273861c
	goto loc_8273861C;
loc_827386FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82735b38
	ctx.lr = 0x82738730;
	sub_82735B38(ctx, base);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,792(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// bne cr6,0x8273874c
	if (!ctx.cr6.eq) goto loc_8273874C;
	// bl 0x822900a0
	ctx.lr = 0x82738748;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_8273874C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// stw r31,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r31.u32);
	// stw r31,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827387a0
	if (ctx.cr6.eq) goto loc_827387A0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273878c
	if (!ctx.cr6.eq) goto loc_8273878C;
	// bl 0x822900a0
	ctx.lr = 0x82738788;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_8273878C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827387A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827387A0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,876(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 876);
	// addi r24,r28,868
	ctx.r24.s64 = ctx.r28.s64 + 868;
	// stw r31,872(r28)
	PPC_STORE_U32(ctx.r28.u32 + 872, ctx.r31.u32);
	// addi r23,r11,-27344
	ctx.r23.s64 = ctx.r11.s64 + -27344;
	// stw r31,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r31.u32);
	// stw r31,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r23,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r23.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// beq cr6,0x82738810
	if (ctx.cr6.eq) goto loc_82738810;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738810
	if (ctx.cr6.eq) goto loc_82738810;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827387f0
	if (!ctx.cr6.eq) goto loc_827387F0;
	// bl 0x822900a0
	ctx.lr = 0x827387EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_827387F0:
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
	ctx.lr = 0x8273880C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_82738810:
	// lwz r11,888(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 888);
	// addi r26,r28,880
	ctx.r26.s64 = ctx.r28.s64 + 880;
	// stw r31,884(r28)
	PPC_STORE_U32(ctx.r28.u32 + 884, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82738868
	if (ctx.cr6.eq) goto loc_82738868;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738868
	if (ctx.cr6.eq) goto loc_82738868;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738848
	if (!ctx.cr6.eq) goto loc_82738848;
	// bl 0x822900a0
	ctx.lr = 0x82738844;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738848:
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
	ctx.lr = 0x82738864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_82738868:
	// lwz r11,912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// addi r30,r28,904
	ctx.r30.s64 = ctx.r28.s64 + 904;
	// stw r31,908(r28)
	PPC_STORE_U32(ctx.r28.u32 + 908, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827388c0
	if (ctx.cr6.eq) goto loc_827388C0;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827388c0
	if (ctx.cr6.eq) goto loc_827388C0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827388a0
	if (!ctx.cr6.eq) goto loc_827388A0;
	// bl 0x822900a0
	ctx.lr = 0x8273889C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_827388A0:
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
	ctx.lr = 0x827388BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_827388C0:
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r22,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r22.u32);
	// bne cr6,0x827388dc
	if (!ctx.cr6.eq) goto loc_827388DC;
	// bl 0x822900a0
	ctx.lr = 0x827388D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_827388DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827388F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8273890c
	if (ctx.cr6.eq) goto loc_8273890C;
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// b 0x82738914
	goto loc_82738914;
loc_8273890C:
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
loc_82738914:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,852(r28)
	PPC_STORE_U32(ctx.r28.u32 + 852, ctx.r3.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273893C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8273aed8
	ctx.lr = 0x82738948;
	sub_8273AED8(ctx, base);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,852(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 852);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82738964
	if (ctx.cr6.eq) goto loc_82738964;
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// b 0x82738978
	goto loc_82738978;
loc_82738964:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738984
	if (ctx.cr6.eq) goto loc_82738984;
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
loc_82738978:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738984:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273899C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8273aed8
	ctx.lr = 0x827389A8;
	sub_8273AED8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x823fc428
	ctx.lr = 0x827389B4;
	sub_823FC428(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823fc428
	ctx.lr = 0x827389C0;
	sub_823FC428(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82735b38
	ctx.lr = 0x827389E0;
	sub_82735B38(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,952(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// bne cr6,0x827389f8
	if (!ctx.cr6.eq) goto loc_827389F8;
	// bl 0x822900a0
	ctx.lr = 0x827389F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_827389F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,940(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// stw r31,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, ctx.r31.u32);
	// stw r31,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738a4c
	if (ctx.cr6.eq) goto loc_82738A4C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738a38
	if (!ctx.cr6.eq) goto loc_82738A38;
	// bl 0x822900a0
	ctx.lr = 0x82738A34;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738A38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738A4C:
	// stw r23,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r23.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r31,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r31.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// bl 0x823f9370
	ctx.lr = 0x82738A68;
	sub_823F9370(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f9370
	ctx.lr = 0x82738A74;
	sub_823F9370(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738abc
	if (ctx.cr6.eq) goto loc_82738ABC;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738aa8
	if (!ctx.cr6.eq) goto loc_82738AA8;
	// bl 0x822900a0
	ctx.lr = 0x82738AA4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738AA8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738ABC:
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738af0
	if (ctx.cr6.eq) goto loc_82738AF0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738adc
	if (!ctx.cr6.eq) goto loc_82738ADC;
	// bl 0x822900a0
	ctx.lr = 0x82738AD8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738ADC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738AF0:
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738b04
	if (!ctx.cr6.eq) goto loc_82738B04;
	// bl 0x822900a0
	ctx.lr = 0x82738B00;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738B04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738b4c
	if (ctx.cr6.eq) goto loc_82738B4C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738b38
	if (!ctx.cr6.eq) goto loc_82738B38;
	// bl 0x822900a0
	ctx.lr = 0x82738B34;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738B38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738B4C:
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82295e20
	ctx.lr = 0x82738B54;
	sub_82295E20(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823bfee0
	ctx.lr = 0x82738B5C;
	sub_823BFEE0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bne cr6,0x82738b74
	if (!ctx.cr6.eq) goto loc_82738B74;
	// bl 0x822900a0
	ctx.lr = 0x82738B70;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738B74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738bc8
	if (ctx.cr6.eq) goto loc_82738BC8;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738bb4
	if (!ctx.cr6.eq) goto loc_82738BB4;
	// bl 0x822900a0
	ctx.lr = 0x82738BB0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82738BB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738BC8:
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738BD0"))) PPC_WEAK_FUNC(sub_82738BD0);
PPC_FUNC_IMPL(__imp__sub_82738BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82738BD8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 + 96;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x825864b0
	ctx.lr = 0x82738C04;
	sub_825864B0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82738d70
	if (!ctx.cr6.gt) goto loc_82738D70;
	// addi r25,r26,824
	ctx.r25.s64 = ctx.r26.s64 + 824;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_82738C1C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r31,r23,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822abf88
	ctx.lr = 0x82738C38;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738c50
	if (!ctx.cr6.eq) goto loc_82738C50;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825865b8
	ctx.lr = 0x82738C4C;
	sub_825865B8(ctx, base);
	// b 0x82738d5c
	goto loc_82738D5C;
loc_82738C50:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738d48
	if (ctx.cr6.eq) goto loc_82738D48;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,84(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738d48
	if (ctx.cr6.eq) goto loc_82738D48;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822abf88
	ctx.lr = 0x82738C7C;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738c98
	if (!ctx.cr6.eq) goto loc_82738C98;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c1dc0
	ctx.lr = 0x82738C94;
	sub_824C1DC0(ctx, base);
	// b 0x82738d48
	goto loc_82738D48;
loc_82738C98:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82738db8
	ctx.lr = 0x82738CAC;
	sub_82738DB8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82738d48
	if (!ctx.cr6.gt) goto loc_82738D48;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82738CC0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r30,64(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82738d34
	if (ctx.cr6.eq) goto loc_82738D34;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x824c1d70
	ctx.lr = 0x82738CEC;
	sub_824C1D70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738d34
	if (!ctx.cr6.eq) goto loc_82738D34;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822abf88
	ctx.lr = 0x82738D04;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738d20
	if (!ctx.cr6.eq) goto loc_82738D20;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c1dc0
	ctx.lr = 0x82738D1C;
	sub_824C1DC0(ctx, base);
	// b 0x82738d34
	goto loc_82738D34;
loc_82738D20:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82738db8
	ctx.lr = 0x82738D34;
	sub_82738DB8(ctx, base);
loc_82738D34:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82738cc0
	if (ctx.cr6.lt) goto loc_82738CC0;
loc_82738D48:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82738bd0
	ctx.lr = 0x82738D5C;
	sub_82738BD0(ctx, base);
loc_82738D5C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82738c1c
	if (ctx.cr6.lt) goto loc_82738C1C;
loc_82738D70:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738dac
	if (ctx.cr6.eq) goto loc_82738DAC;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738d98
	if (!ctx.cr6.eq) goto loc_82738D98;
	// bl 0x822900a0
	ctx.lr = 0x82738D94;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82738D98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82738DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82738DAC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738DB4"))) PPC_WEAK_FUNC(sub_82738DB4);
PPC_FUNC_IMPL(__imp__sub_82738DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738DB8"))) PPC_WEAK_FUNC(sub_82738DB8);
PPC_FUNC_IMPL(__imp__sub_82738DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82738DC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82738e9c
	if (!ctx.cr6.gt) goto loc_82738E9C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82738DE8:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,46,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82738e88
	if (!ctx.cr6.eq) goto loc_82738E88;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738e2c
	if (ctx.cr6.eq) goto loc_82738E2C;
loc_82738E18:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82738e3c
	if (ctx.cr6.eq) goto loc_82738E3C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82738e18
	if (!ctx.cr6.eq) goto loc_82738E18;
loc_82738E2C:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82738e88
	if (ctx.cr6.eq) goto loc_82738E88;
loc_82738E3C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,824
	ctx.r3.s64 = ctx.r26.s64 + 824;
	// bl 0x822abf88
	ctx.lr = 0x82738E4C;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82738e64
	if (!ctx.cr6.eq) goto loc_82738E64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824c1dc0
	ctx.lr = 0x82738E60;
	sub_824C1DC0(ctx, base);
	// b 0x82738e88
	goto loc_82738E88;
loc_82738E64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c4a00
	ctx.lr = 0x82738E6C;
	sub_824C4A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82738e88
	if (ctx.cr6.eq) goto loc_82738E88;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82738db8
	ctx.lr = 0x82738E88;
	sub_82738DB8(ctx, base);
loc_82738E88:
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82738de8
	if (ctx.cr6.lt) goto loc_82738DE8;
loc_82738E9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82738EA4"))) PPC_WEAK_FUNC(sub_82738EA4);
PPC_FUNC_IMPL(__imp__sub_82738EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82738EA8"))) PPC_WEAK_FUNC(sub_82738EA8);
PPC_FUNC_IMPL(__imp__sub_82738EA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82738ED8"))) PPC_WEAK_FUNC(sub_82738ED8);
PPC_FUNC_IMPL(__imp__sub_82738ED8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82563650
	ctx.lr = 0x82738EF4;
	sub_82563650(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82738f20
	if (ctx.cr6.eq) goto loc_82738F20;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294520
	ctx.lr = 0x82738F20;
	sub_82294520(ctx, base);
loc_82738F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82738f48
	ctx.lr = 0x82738F2C;
	sub_82738F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82739178
	ctx.lr = 0x82738F34;
	sub_82739178(ctx, base);
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

__attribute__((alias("__imp__sub_82738F48"))) PPC_WEAK_FUNC(sub_82738F48);
PPC_FUNC_IMPL(__imp__sub_82738F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82738F50;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82738f70
	if (!ctx.cr6.eq) goto loc_82738F70;
	// lwz r29,816(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// b 0x82738f7c
	goto loc_82738F7C;
loc_82738F70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273cd68
	ctx.lr = 0x82738F78;
	sub_8273CD68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82738F7C:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x825864b0
	ctx.lr = 0x82738F9C;
	sub_825864B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8273905c
	if (ctx.cr0.lt) goto loc_8273905C;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82738FAC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,21,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82738fcc
	if (ctx.cr6.eq) goto loc_82738FCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8273903c
	goto loc_8273903C;
loc_82738FCC:
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8273cd68
	ctx.lr = 0x82738FD4;
	sub_8273CD68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82739050
	if (ctx.cr6.eq) goto loc_82739050;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 816);
	// beq cr6,0x82739008
	if (ctx.cr6.eq) goto loc_82739008;
loc_82738FF4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82739018
	if (ctx.cr6.eq) goto loc_82739018;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82738ff4
	if (!ctx.cr6.eq) goto loc_82738FF4;
loc_82739008:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82739038
	if (ctx.cr6.eq) goto loc_82739038;
loc_82739018:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r23,16
	ctx.r3.s64 = ctx.r23.s64 + 16;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8273c098
	ctx.lr = 0x82739028;
	sub_8273C098(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82586550
	ctx.lr = 0x82739038;
	sub_82586550(ctx, base);
loc_82739038:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8273903C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232d180
	ctx.lr = 0x82739050;
	sub_8232D180(ctx, base);
loc_82739050:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x82738fac
	if (!ctx.cr0.lt) goto loc_82738FAC;
loc_8273905C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82739138
	if (!ctx.cr6.gt) goto loc_82739138;
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
loc_82739074:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r26,r27,r10
	ctx.r26.u64 = ctx.r27.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x827390fc
	if (!ctx.cr6.gt) goto loc_827390FC;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x827390c0
	if (!ctx.cr6.eq) goto loc_827390C0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827390fc
	if (ctx.cr6.eq) goto loc_827390FC;
loc_827390C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827390dc
	if (!ctx.cr6.eq) goto loc_827390DC;
	// bl 0x822900a0
	ctx.lr = 0x827390D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_827390DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827390F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_827390FC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82739114
	if (ctx.cr0.eq) goto loc_82739114;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82739114:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82738f48
	ctx.lr = 0x82739124;
	sub_82738F48(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82739074
	if (ctx.cr6.lt) goto loc_82739074;
loc_82739138:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739170
	if (ctx.cr6.eq) goto loc_82739170;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273915c
	if (!ctx.cr6.eq) goto loc_8273915C;
	// bl 0x822900a0
	ctx.lr = 0x82739158;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273915C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82739170:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739178"))) PPC_WEAK_FUNC(sub_82739178);
PPC_FUNC_IMPL(__imp__sub_82739178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82739180;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8273918C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82739220
	if (ctx.cr6.lt) goto loc_82739220;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82739220
	if (!ctx.cr6.lt) goto loc_82739220;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// bl 0x8258a478
	ctx.lr = 0x827391C4;
	sub_8258A478(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827391DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82739204
	if (ctx.cr6.eq) goto loc_82739204;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// bl 0x822c26c0
	ctx.lr = 0x82739200;
	sub_822C26C0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82739204:
	// addi r6,r28,4
	ctx.r6.s64 = ctx.r28.s64 + 4;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82739228
	ctx.lr = 0x82739218;
	sub_82739228(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8273918c
	goto loc_8273918C;
loc_82739220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739228"))) PPC_WEAK_FUNC(sub_82739228);
PPC_FUNC_IMPL(__imp__sub_82739228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82739230;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ae8
	ctx.lr = 0x82739238;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82563ce8
	ctx.lr = 0x8273925C;
	sub_82563CE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82563ce8
	ctx.lr = 0x82739274;
	sub_82563CE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82563ce8
	ctx.lr = 0x8273928C;
	sub_82563CE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82563ce8
	ctx.lr = 0x827392A4;
	sub_82563CE8(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827393bc
	if (ctx.cr6.eq) goto loc_827393BC;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827393bc
	if (ctx.cr6.eq) goto loc_827393BC;
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827392e8
	if (!ctx.cr6.gt) goto loc_827392E8;
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
loc_827392CC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82739340
	if (ctx.cr6.eq) goto loc_82739340;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827392cc
	if (ctx.cr6.lt) goto loc_827392CC;
loc_827392E8:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_827392EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82562628
	ctx.lr = 0x827392FC;
	sub_82562628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739414
	if (ctx.cr6.eq) goto loc_82739414;
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82739338
	if (!ctx.cr6.gt) goto loc_82739338;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8273931C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82739348
	if (ctx.cr6.eq) goto loc_82739348;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8273931c
	if (ctx.cr6.lt) goto loc_8273931C;
loc_82739338:
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x82739364
	goto loc_82739364;
loc_82739340:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x827392ec
	goto loc_827392EC;
loc_82739348:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82739364
	if (ctx.cr6.eq) goto loc_82739364;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8232d180
	ctx.lr = 0x82739364;
	sub_8232D180(ctx, base);
loc_82739364:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x827393e4
	if (!ctx.cr6.eq) goto loc_827393E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827393AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b34
	ctx.lr = 0x827393B8;
	__restfpr_28(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_827393BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827393DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82739414
	if (ctx.cr6.eq) goto loc_82739414;
loc_827393E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r7,340(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82739414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82739414:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b34
	ctx.lr = 0x82739420;
	__restfpr_28(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82739424"))) PPC_WEAK_FUNC(sub_82739424);
PPC_FUNC_IMPL(__imp__sub_82739424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739428"))) PPC_WEAK_FUNC(sub_82739428);
PPC_FUNC_IMPL(__imp__sub_82739428) {
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

__attribute__((alias("__imp__sub_82739448"))) PPC_WEAK_FUNC(sub_82739448);
PPC_FUNC_IMPL(__imp__sub_82739448) {
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
	ctx.lr = 0x82739464;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8273c6d8
	ctx.lr = 0x82739478;
	sub_8273C6D8(ctx, base);
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

__attribute__((alias("__imp__sub_8273948C"))) PPC_WEAK_FUNC(sub_8273948C);
PPC_FUNC_IMPL(__imp__sub_8273948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82739490"))) PPC_WEAK_FUNC(sub_82739490);
PPC_FUNC_IMPL(__imp__sub_82739490) {
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
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827394cc
	if (ctx.cr6.eq) goto loc_827394CC;
loc_827394B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827394cc
	if (!ctx.cr6.eq) goto loc_827394CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258a478
	ctx.lr = 0x827394C0;
	sub_8258A478(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827394b0
	if (!ctx.cr6.eq) goto loc_827394B0;
loc_827394CC:
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

__attribute__((alias("__imp__sub_827394E0"))) PPC_WEAK_FUNC(sub_827394E0);
PPC_FUNC_IMPL(__imp__sub_827394E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x827394E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1488(r1)
	ea = -1488 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r11,816(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ace0
	if (ctx.cr6.eq) goto loc_8273ACE0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r21,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r21.u32);
	// addi r20,r15,824
	ctx.r20.s64 = ctx.r15.s64 + 824;
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r21,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r21.u32);
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x827367a8
	ctx.lr = 0x82739528;
	sub_827367A8(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82735a48
	ctx.lr = 0x82739530;
	sub_82735A48(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8273ae30
	ctx.lr = 0x8273953C;
	sub_8273AE30(ctx, base);
	// li r14,1
	ctx.r14.s64 = 1;
	// stw r21,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r21.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r14,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r14.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r14,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r14.u32);
	// bl 0x823bff78
	ctx.lr = 0x82739558;
	sub_823BFF78(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,996(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// lwz r5,816(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// bl 0x822c1658
	ctx.lr = 0x82739568;
	sub_822C1658(ctx, base);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8273956C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82739624
	if (ctx.cr6.lt) goto loc_82739624;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82739624
	if (!ctx.cr6.lt) goto loc_82739624;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// beq cr6,0x8273961c
	if (ctx.cr6.eq) goto loc_8273961C;
	// cmplw cr6,r3,r15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x8273961c
	if (ctx.cr6.eq) goto loc_8273961C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827395BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,560(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827395D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x82735b38
	ctx.lr = 0x82739600;
	sub_82735B38(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x823f4778
	ctx.lr = 0x82739608;
	sub_823F4778(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273961C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273961C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8273956c
	goto loc_8273956C;
loc_82739624:
	// lwz r11,576(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r4,852(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 852);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739640
	if (ctx.cr6.eq) goto loc_82739640;
	// lwz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// b 0x82739654
	goto loc_82739654;
loc_82739640:
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739660
	if (ctx.cr6.eq) goto loc_82739660;
	// lwz r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
loc_82739654:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82739660:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r9,996(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r17,r11,14488
	ctx.r17.s64 = ctx.r11.s64 + 14488;
	// lwz r3,-29488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
	// stw r21,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r21.u32);
	// lwz r8,996(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r21,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r21.u32);
	// bne cr6,0x827396b0
	if (!ctx.cr6.eq) goto loc_827396B0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8255b818
	ctx.lr = 0x827396A4;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x827396AC;
	sub_8255B8D8(ctx, base);
	// lwz r3,-29488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
loc_827396B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,52(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 52);
	// lwz r30,996(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827396C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,816(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,280(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827396E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r7,8(r15)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r15.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r6,r7,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// beq cr6,0x82739704
	if (ctx.cr6.eq) goto loc_82739704;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r4,52(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 52);
	// bl 0x822a1020
	ctx.lr = 0x82739704;
	sub_822A1020(ctx, base);
loc_82739704:
	// ld r11,8(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// oris r7,r11,16
	ctx.r7.u64 = ctx.r11.u64 | 1048576;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// std r7,8(r15)
	PPC_STORE_U64(ctx.r15.u32 + 8, ctx.r7.u64);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822a0da8
	ctx.lr = 0x82739734;
	sub_822A0DA8(ctx, base);
	// lwz r6,0(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r5,44(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8273974C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82739760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r15,868
	ctx.r31.s64 = ctx.r15.s64 + 868;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fc428
	ctx.lr = 0x82739770;
	sub_823FC428(ctx, base);
	// addi r30,r15,880
	ctx.r30.s64 = ctx.r15.s64 + 880;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823fc428
	ctx.lr = 0x82739780;
	sub_823FC428(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82735b38
	ctx.lr = 0x827397A0;
	sub_82735B38(ctx, base);
	// lis r16,-31885
	ctx.r16.s64 = -2089615360;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,1160(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// bne cr6,0x827397bc
	if (!ctx.cr6.eq) goto loc_827397BC;
	// bl 0x822900a0
	ctx.lr = 0x827397B8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_827397BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827397D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// stw r21,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r21.u32);
	// stw r21,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739810
	if (ctx.cr6.eq) goto loc_82739810;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827397fc
	if (!ctx.cr6.eq) goto loc_827397FC;
	// bl 0x822900a0
	ctx.lr = 0x827397F8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_827397FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82739810:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r21,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r21.u32);
	// stw r21,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r21.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-27344
	ctx.r29.s64 = ctx.r11.s64 + -27344;
	// stw r21,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r29.u32);
	// bl 0x823f9370
	ctx.lr = 0x82739834;
	sub_823F9370(ctx, base);
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f9370
	ctx.lr = 0x82739840;
	sub_823F9370(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82739858:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82739934
	if (ctx.cr6.lt) goto loc_82739934;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82739934
	if (!ctx.cr6.lt) goto loc_82739934;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8273992c
	if (ctx.cr6.eq) goto loc_8273992C;
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x8273992c
	if (ctx.cr6.eq) goto loc_8273992C;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82735b38
	ctx.lr = 0x827398B0;
	sub_82735B38(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,536(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// bne cr6,0x827398c8
	if (!ctx.cr6.eq) goto loc_827398C8;
	// bl 0x822900a0
	ctx.lr = 0x827398C4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_827398C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827398DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,524(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// stw r21,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r21.u32);
	// stw r21,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273991c
	if (ctx.cr6.eq) goto loc_8273991C;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82739908
	if (!ctx.cr6.eq) goto loc_82739908;
	// bl 0x822900a0
	ctx.lr = 0x82739904;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_82739908:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273991C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273991C:
	// stw r29,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r29.u32);
	// stw r21,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r21.u32);
	// stw r21,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r21.u32);
	// stw r21,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r21.u32);
loc_8273992C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82739858
	goto loc_82739858;
loc_82739934:
	// lwz r11,996(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r14,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r14.u32);
	// lwz r10,996(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// stw r14,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r14.u32);
	// lwz r9,964(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8273998c
	if (!ctx.cr6.gt) goto loc_8273998C;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82739958:
	// lwz r11,960(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// lwz r4,996(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a0b40
	ctx.lr = 0x8273996C;
	sub_822A0B40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,996(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// bl 0x822a0be0
	ctx.lr = 0x82739978;
	sub_822A0BE0(ctx, base);
	// lwz r10,964(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82739958
	if (ctx.cr6.lt) goto loc_82739958;
loc_8273998C:
	// lwz r31,376(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827399c0
	if (ctx.cr6.eq) goto loc_827399C0;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827399ac
	if (!ctx.cr6.eq) goto loc_827399AC;
	// bl 0x822900a0
	ctx.lr = 0x827399A8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_827399AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827399C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827399C0:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827399f4
	if (ctx.cr6.eq) goto loc_827399F4;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827399e0
	if (!ctx.cr6.eq) goto loc_827399E0;
	// bl 0x822900a0
	ctx.lr = 0x827399DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_827399E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827399F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827399F4:
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82295e20
	ctx.lr = 0x827399FC;
	sub_82295E20(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x823bfee0
	ctx.lr = 0x82739A04;
	sub_823BFEE0(ctx, base);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
loc_82739A28:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82739e28
	if (ctx.cr6.lt) goto loc_82739E28;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82739e28
	if (!ctx.cr6.lt) goto loc_82739E28;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82739e20
	if (ctx.cr6.eq) goto loc_82739E20;
	// cmplw cr6,r31,r15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x82739e20
	if (ctx.cr6.eq) goto loc_82739E20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82739bd0
	if (!ctx.cr6.eq) goto loc_82739BD0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// bl 0x823f7cb8
	ctx.lr = 0x82739A80;
	sub_823F7CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bl 0x8258a478
	ctx.lr = 0x82739A8C;
	sub_8258A478(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82739b30
	if (ctx.cr6.eq) goto loc_82739B30;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82739b14
	if (!ctx.cr6.gt) goto loc_82739B14;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82739adc
	if (!ctx.cr6.eq) goto loc_82739ADC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739b14
	if (ctx.cr6.eq) goto loc_82739B14;
loc_82739ADC:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82739af4
	if (!ctx.cr6.eq) goto loc_82739AF4;
	// bl 0x822900a0
	ctx.lr = 0x82739AF0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_82739AF4:
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
	ctx.lr = 0x82739B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82739B14:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82739e20
	if (ctx.cr0.eq) goto loc_82739E20;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82739a28
	goto loc_82739A28;
loc_82739B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273cdf0
	ctx.lr = 0x82739B38;
	sub_8273CDF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82739e20
	if (ctx.cr6.eq) goto loc_82739E20;
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x82739bb4
	if (!ctx.cr6.gt) goto loc_82739BB4;
	// addi r10,r19,32
	ctx.r10.s64 = ctx.r19.s64 + 32;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r23,r8,5,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x82739b78
	if (!ctx.cr6.eq) goto loc_82739B78;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82739bb8
	if (ctx.cr6.eq) goto loc_82739BB8;
loc_82739B78:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82739b90
	if (!ctx.cr6.eq) goto loc_82739B90;
	// bl 0x822900a0
	ctx.lr = 0x82739B8C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_82739B90:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x82739bb8
	goto loc_82739BB8;
loc_82739BB4:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_82739BB8:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82739e20
	if (ctx.cr0.eq) goto loc_82739E20;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82739a28
	goto loc_82739A28;
loc_82739BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258a478
	ctx.lr = 0x82739BD8;
	sub_8258A478(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82739cac
	if (ctx.cr6.eq) goto loc_82739CAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,816(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825630d0
	ctx.lr = 0x82739BF4;
	sub_825630D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82739e20
	if (!ctx.cr6.eq) goto loc_82739E20;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// bl 0x823f7cb8
	ctx.lr = 0x82739C0C;
	sub_823F7CB8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82739c8c
	if (!ctx.cr6.gt) goto loc_82739C8C;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82739c54
	if (!ctx.cr6.eq) goto loc_82739C54;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739c8c
	if (ctx.cr6.eq) goto loc_82739C8C;
loc_82739C54:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82739c6c
	if (!ctx.cr6.eq) goto loc_82739C6C;
	// bl 0x822900a0
	ctx.lr = 0x82739C68;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_82739C6C:
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
	ctx.lr = 0x82739C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82739C8C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82739e1c
	if (ctx.cr0.eq) goto loc_82739E1C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82739a28
	goto loc_82739A28;
loc_82739CAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273cdf0
	ctx.lr = 0x82739CB4;
	sub_8273CDF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82739e20
	if (ctx.cr6.eq) goto loc_82739E20;
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82739e20
	if (!ctx.cr6.eq) goto loc_82739E20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// bl 0x82739490
	ctx.lr = 0x82739CD8;
	sub_82739490(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739d14
	if (ctx.cr6.eq) goto loc_82739D14;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739d14
	if (ctx.cr6.eq) goto loc_82739D14;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82739d10
	if (ctx.cr6.eq) goto loc_82739D10;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824b3bd0
	ctx.lr = 0x82739D08;
	sub_824B3BD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739d14
	if (ctx.cr6.eq) goto loc_82739D14;
loc_82739D10:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82739D14:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82739e20
	if (ctx.cr6.eq) goto loc_82739E20;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82739D24:
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82739d7c
	if (!ctx.cr6.lt) goto loc_82739D7C;
	// lwz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739d64
	if (ctx.cr6.eq) goto loc_82739D64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82739d60
	if (ctx.cr6.eq) goto loc_82739D60;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824b3bd0
	ctx.lr = 0x82739D58;
	sub_824B3BD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739d64
	if (ctx.cr6.eq) goto loc_82739D64;
loc_82739D60:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82739D64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82739d24
	if (!ctx.cr6.eq) goto loc_82739D24;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82739a28
	goto loc_82739A28;
loc_82739D7C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82739e20
	if (ctx.cr6.eq) goto loc_82739E20;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// bl 0x823f7cb8
	ctx.lr = 0x82739D94;
	sub_823F7CB8(ctx, base);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x82739e08
	if (!ctx.cr6.gt) goto loc_82739E08;
	// addi r10,r19,32
	ctx.r10.s64 = ctx.r19.s64 + 32;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r23,r8,5,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x82739dcc
	if (!ctx.cr6.eq) goto loc_82739DCC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82739e0c
	if (ctx.cr6.eq) goto loc_82739E0C;
loc_82739DCC:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82739de4
	if (!ctx.cr6.eq) goto loc_82739DE4;
	// bl 0x822900a0
	ctx.lr = 0x82739DE0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_82739DE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82739E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x82739e0c
	goto loc_82739E0C;
loc_82739E08:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_82739E0C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82739e1c
	if (ctx.cr0.eq) goto loc_82739E1C;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82739E1C:
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
loc_82739E20:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82739a28
	goto loc_82739A28;
loc_82739E28:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82739e80
	if (ctx.cr6.eq) goto loc_82739E80;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82739e80
	if (!ctx.cr6.gt) goto loc_82739E80;
loc_82739E4C:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82739e4c
	if (ctx.cr6.gt) goto loc_82739E4C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822ae870
	ctx.lr = 0x82739E80;
	sub_822AE870(ctx, base);
loc_82739E80:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8273a0f0
	if (ctx.cr6.eq) goto loc_8273A0F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82739ff0
	if (!ctx.cr6.gt) goto loc_82739FF0;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
loc_82739EA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwzx r29,r11,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
loc_82739EB0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82739f84
	if (ctx.cr6.lt) goto loc_82739F84;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82739f84
	if (!ctx.cr6.lt) goto loc_82739F84;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82739f7c
	if (ctx.cr6.eq) goto loc_82739F7C;
	// lwz r11,-29492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82739f00
	if (!ctx.cr6.eq) goto loc_82739F00;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8255b5e8
	ctx.lr = 0x82739EF8;
	sub_8255B5E8(ctx, base);
	// stw r3,-29492(r27)
	PPC_STORE_U32(ctx.r27.u32 + -29492, ctx.r3.u32);
	// bl 0x8255b6a8
	ctx.lr = 0x82739F00;
	sub_8255B6A8(ctx, base);
loc_82739F00:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739f24
	if (ctx.cr6.eq) goto loc_82739F24;
loc_82739F0C:
	// lwz r10,-29492(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29492);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82739f7c
	if (ctx.cr6.eq) goto loc_82739F7C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82739f0c
	if (!ctx.cr6.eq) goto loc_82739F0C;
loc_82739F24:
	// lwz r11,-29492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29492);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82739f7c
	if (!ctx.cr6.eq) goto loc_82739F7C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82739f58
	if (ctx.cr6.eq) goto loc_82739F58;
loc_82739F44:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82739f68
	if (ctx.cr6.eq) goto loc_82739F68;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82739f44
	if (!ctx.cr6.eq) goto loc_82739F44;
loc_82739F58:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82739f7c
	if (ctx.cr6.eq) goto loc_82739F7C;
loc_82739F68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x823f7cb8
	ctx.lr = 0x82739F78;
	sub_823F7CB8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82739F7C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82739eb0
	goto loc_82739EB0;
loc_82739F84:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82739fdc
	if (ctx.cr6.eq) goto loc_82739FDC;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82739fdc
	if (!ctx.cr6.gt) goto loc_82739FDC;
loc_82739FA8:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82739fa8
	if (ctx.cr6.gt) goto loc_82739FA8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822ae870
	ctx.lr = 0x82739FDC;
	sub_822AE870(ctx, base);
loc_82739FDC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82739ea0
	if (ctx.cr6.lt) goto loc_82739EA0;
loc_82739FF0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8273a0f0
	if (!ctx.cr6.gt) goto loc_8273A0F0;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_8273A000:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_8273A00C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273a08c
	if (ctx.cr6.lt) goto loc_8273A08C;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8273a08c
	if (!ctx.cr6.lt) goto loc_8273A08C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a084
	if (ctx.cr6.eq) goto loc_8273A084;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a060
	if (ctx.cr6.eq) goto loc_8273A060;
loc_8273A04C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8273a070
	if (ctx.cr6.eq) goto loc_8273A070;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273a04c
	if (!ctx.cr6.eq) goto loc_8273A04C;
loc_8273A060:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273a084
	if (ctx.cr6.eq) goto loc_8273A084;
loc_8273A070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x823f7cb8
	ctx.lr = 0x8273A080;
	sub_823F7CB8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8273A084:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8273a00c
	goto loc_8273A00C;
loc_8273A08C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8273a0e4
	if (ctx.cr6.eq) goto loc_8273A0E4;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8273a0e4
	if (!ctx.cr6.gt) goto loc_8273A0E4;
loc_8273A0B0:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8273a0b0
	if (ctx.cr6.gt) goto loc_8273A0B0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822ae870
	ctx.lr = 0x8273A0E4;
	sub_822AE870(ctx, base);
loc_8273A0E4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8273a000
	if (!ctx.cr0.eq) goto loc_8273A000;
loc_8273A0F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273a1a0
	if (!ctx.cr6.gt) goto loc_8273A1A0;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8273A104:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273A120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273a17c
	if (ctx.cr6.eq) goto loc_8273A17C;
loc_8273A128:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8273a164
	if (!ctx.cr6.gt) goto loc_8273A164;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8273A13C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273a15c
	if (ctx.cr6.eq) goto loc_8273A15C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8273a13c
	if (ctx.cr6.lt) goto loc_8273A13C;
	// b 0x8273a164
	goto loc_8273A164;
loc_8273A15C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8273a190
	if (!ctx.cr6.eq) goto loc_8273A190;
loc_8273A164:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a128
	if (!ctx.cr6.eq) goto loc_8273A128;
loc_8273A17C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82562628
	ctx.lr = 0x8273A18C;
	sub_82562628(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8273A190:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8273a104
	if (ctx.cr6.lt) goto loc_8273A104;
loc_8273A1A0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8273a244
	if (!ctx.cr6.gt) goto loc_8273A244;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
loc_8273A1B4:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a1d4
	if (ctx.cr6.eq) goto loc_8273A1D4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// b 0x8273a20c
	goto loc_8273A20C;
loc_8273A1D4:
	// lwz r4,-29016(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29016);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8273a1f4
	if (!ctx.cr6.eq) goto loc_8273A1F4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x825c0330
	ctx.lr = 0x8273A1E8;
	sub_825C0330(ctx, base);
	// stw r3,-29016(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29016, ctx.r3.u32);
	// bl 0x825c03f0
	ctx.lr = 0x8273A1F0;
	sub_825C03F0(ctx, base);
	// lwz r4,-29016(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29016);
loc_8273A1F4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x822a1110
	ctx.lr = 0x8273A1FC;
	sub_822A1110(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273a218
	if (ctx.cr6.eq) goto loc_8273A218;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_8273A20C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A218:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8273ce78
	ctx.lr = 0x8273A220;
	sub_8273CE78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273a238
	if (ctx.cr6.eq) goto loc_8273A238;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8273a238
	if (!ctx.cr6.eq) goto loc_8273A238;
	// stw r21,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r21.u32);
loc_8273A238:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8273a1b4
	if (!ctx.cr0.eq) goto loc_8273A1B4;
loc_8273A244:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8273a274
	if (ctx.cr6.eq) goto loc_8273A274;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a260
	if (!ctx.cr6.eq) goto loc_8273A260;
	// bl 0x822900a0
	ctx.lr = 0x8273A25C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A260:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A274:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273a2a8
	if (ctx.cr6.eq) goto loc_8273A2A8;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a294
	if (!ctx.cr6.eq) goto loc_8273A294;
	// bl 0x822900a0
	ctx.lr = 0x8273A290;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A294:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A2A8:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x8273c358
	ctx.lr = 0x8273A2C0;
	sub_8273C358(ctx, base);
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// stw r21,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r21.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// bl 0x822ae870
	ctx.lr = 0x8273A2D4;
	sub_822AE870(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,816(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// bl 0x822abeb8
	ctx.lr = 0x8273A2E4;
	sub_822ABEB8(ctx, base);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// lwz r4,816(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// bl 0x82738bd0
	ctx.lr = 0x8273A310;
	sub_82738BD0(ctx, base);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x8273a328
	if (ctx.cr6.gt) goto loc_8273A328;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273a904
	if (!ctx.cr6.gt) goto loc_8273A904;
loc_8273A328:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8273a684
	if (!ctx.cr6.gt) goto loc_8273A684;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r24,r11,-19580
	ctx.r24.s64 = ctx.r11.s64 + -19580;
	// rldicr r27,r10,32,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
loc_8273A348:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// lwzx r31,r11,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_8273A35C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273a3a0
	if (ctx.cr6.eq) goto loc_8273A3A0;
	// lwz r11,816(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8273a3a0
	if (ctx.cr6.eq) goto loc_8273A3A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822abf88
	ctx.lr = 0x8273A380;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273a674
	if (ctx.cr6.eq) goto loc_8273A674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273a39c
	if (!ctx.cr6.eq) goto loc_8273A39C;
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x8273a35c
	goto loc_8273A35C;
loc_8273A39C:
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8273A3A0:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// std r21,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r21.u64);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r14,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r14.u32);
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// stw r21,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// stw r21,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r21.u32);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// std r27,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r27.u64);
	// bl 0x8273c838
	ctx.lr = 0x8273A404;
	sub_8273C838(ctx, base);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// bl 0x822ae870
	ctx.lr = 0x8273A414;
	sub_822AE870(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822a98a8
	ctx.lr = 0x8273A41C;
	sub_822A98A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273a588
	if (ctx.cr6.eq) goto loc_8273A588;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8273a450
	if (ctx.cr6.eq) goto loc_8273A450;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x8273a46c
	goto loc_8273A46C;
loc_8273A450:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x8233e028
	ctx.lr = 0x8273A468;
	sub_8233E028(ctx, base);
	// addi r11,r1,376
	ctx.r11.s64 = ctx.r1.s64 + 376;
loc_8273A46C:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r10.u32);
	// stw r9,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r9.u32);
loc_8273A488:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273a4f8
	if (ctx.cr6.lt) goto loc_8273A4F8;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8273a4f8
	if (!ctx.cr6.lt) goto loc_8273A4F8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x822abeb8
	ctx.lr = 0x8273A4C8;
	sub_822ABEB8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822abeb8
	ctx.lr = 0x8273A4D8;
	sub_822ABEB8(ctx, base);
	// lis r12,-257
	ctx.r12.s64 = -16842752;
	// ld r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r12,r12,65534
	ctx.r12.u64 = ctx.r12.u64 | 65534;
	// rldicr r12,r12,10,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 10) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// std r9,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r9.u64);
	// b 0x8273a488
	goto loc_8273A488;
loc_8273A4F8:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x82586668
	ctx.lr = 0x8273A504;
	sub_82586668(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273A53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,624(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// ori r5,r7,512
	ctx.r5.u64 = ctx.r7.u64 | 512;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r5.u32);
	// ble cr6,0x8273a588
	if (!ctx.cr6.gt) goto loc_8273A588;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_8273A55C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x82570580
	ctx.lr = 0x8273A574;
	sub_82570580(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8273a55c
	if (ctx.cr6.lt) goto loc_8273A55C;
loc_8273A588:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// lwz r31,252(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a5a0
	if (!ctx.cr6.eq) goto loc_8273A5A0;
	// bl 0x822900a0
	ctx.lr = 0x8273A59C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A5A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r21,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r21.u32);
	// stw r21,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a5f4
	if (ctx.cr6.eq) goto loc_8273A5F4;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a5e0
	if (!ctx.cr6.eq) goto loc_8273A5E0;
	// bl 0x822900a0
	ctx.lr = 0x8273A5DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A5E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A5F4:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// stw r21,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// bne cr6,0x8273a614
	if (!ctx.cr6.eq) goto loc_8273A614;
	// bl 0x822900a0
	ctx.lr = 0x8273A610;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A614:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r21,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// beq cr6,0x8273a664
	if (ctx.cr6.eq) goto loc_8273A664;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a650
	if (!ctx.cr6.eq) goto loc_8273A650;
	// bl 0x822900a0
	ctx.lr = 0x8273A64C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A650:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A664:
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
loc_8273A674:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8273a348
	if (ctx.cr6.lt) goto loc_8273A348;
loc_8273A684:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273a904
	if (!ctx.cr6.gt) goto loc_8273A904;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// rldicr r28,r11,32,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
loc_8273A6A0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x822abf88
	ctx.lr = 0x8273A6C0;
	sub_822ABF88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273a8f0
	if (ctx.cr6.eq) goto loc_8273A8F0;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8273a8f0
	if (ctx.cr6.eq) goto loc_8273A8F0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// std r21,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r21.u64);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r14,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r14.u32);
	// stw r21,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r21.u32);
	// stw r21,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r21.u32);
	// stw r21,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r21.u32);
	// stw r21,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// std r28,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r28.u64);
	// bl 0x8273c838
	ctx.lr = 0x8273A738;
	sub_8273C838(ctx, base);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// bl 0x822ae870
	ctx.lr = 0x8273A748;
	sub_822AE870(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822a98a8
	ctx.lr = 0x8273A750;
	sub_822A98A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273a808
	if (ctx.cr6.eq) goto loc_8273A808;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_8273A760:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273a7b8
	if (ctx.cr6.lt) goto loc_8273A7B8;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8273a7b8
	if (!ctx.cr6.lt) goto loc_8273A7B8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x822abeb8
	ctx.lr = 0x8273A7A0;
	sub_822ABEB8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822abeb8
	ctx.lr = 0x8273A7B0;
	sub_822ABEB8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8273a760
	goto loc_8273A760;
loc_8273A7B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c4a00
	ctx.lr = 0x8273A7D4;
	sub_824C4A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273a808
	if (ctx.cr6.eq) goto loc_8273A808;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82425c50
	ctx.lr = 0x8273A7EC;
	sub_82425C50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A808:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a820
	if (!ctx.cr6.eq) goto loc_8273A820;
	// bl 0x822900a0
	ctx.lr = 0x8273A81C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A820:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r21,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// stw r21,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a874
	if (ctx.cr6.eq) goto loc_8273A874;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a860
	if (!ctx.cr6.eq) goto loc_8273A860;
	// bl 0x822900a0
	ctx.lr = 0x8273A85C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A860:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A874:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// stw r21,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r21.u32);
	// stw r21,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r21,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r21.u32);
	// bne cr6,0x8273a894
	if (!ctx.cr6.eq) goto loc_8273A894;
	// bl 0x822900a0
	ctx.lr = 0x8273A890;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A894:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r21,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// beq cr6,0x8273a8e4
	if (ctx.cr6.eq) goto loc_8273A8E4;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a8d0
	if (!ctx.cr6.eq) goto loc_8273A8D0;
	// bl 0x822900a0
	ctx.lr = 0x8273A8CC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A8D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A8E4:
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
loc_8273A8F0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273a6a0
	if (ctx.cr6.lt) goto loc_8273A6A0;
loc_8273A904:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273a938
	if (ctx.cr6.eq) goto loc_8273A938;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a924
	if (!ctx.cr6.eq) goto loc_8273A924;
	// bl 0x822900a0
	ctx.lr = 0x8273A920;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A924:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A938:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// beq cr6,0x8273a978
	if (ctx.cr6.eq) goto loc_8273A978;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a964
	if (!ctx.cr6.eq) goto loc_8273A964;
	// bl 0x822900a0
	ctx.lr = 0x8273A960;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A964:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A978:
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// bne cr6,0x8273a998
	if (!ctx.cr6.eq) goto loc_8273A998;
	// bl 0x822900a0
	ctx.lr = 0x8273A994;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A998:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,320(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273a9e0
	if (ctx.cr6.eq) goto loc_8273A9E0;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273a9cc
	if (!ctx.cr6.eq) goto loc_8273A9CC;
	// bl 0x822900a0
	ctx.lr = 0x8273A9C8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273A9CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273A9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A9E0:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// stw r21,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r21.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r21,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r21.u32);
	// stw r21,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r21.u32);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r21,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r21.u32);
	// stw r15,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r15.u32);
	// stw r21,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r21.u32);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// bl 0x82563650
	ctx.lr = 0x8273AA10;
	sub_82563650(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r21,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273aa5c
	if (ctx.cr6.eq) goto loc_8273AA5C;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273aa3c
	if (!ctx.cr6.eq) goto loc_8273AA3C;
	// bl 0x822900a0
	ctx.lr = 0x8273AA38;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273AA3C:
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
	ctx.lr = 0x8273AA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
loc_8273AA5C:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82738f48
	ctx.lr = 0x8273AA68;
	sub_82738F48(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82739178
	ctx.lr = 0x8273AA70;
	sub_82739178(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,300(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bne cr6,0x8273aa88
	if (!ctx.cr6.eq) goto loc_8273AA88;
	// bl 0x822900a0
	ctx.lr = 0x8273AA84;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273AA88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273AA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r21,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r21.u32);
	// stw r21,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273aadc
	if (ctx.cr6.eq) goto loc_8273AADC;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273aac8
	if (!ctx.cr6.eq) goto loc_8273AAC8;
	// bl 0x822900a0
	ctx.lr = 0x8273AAC4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273AAC8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273AADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273AADC:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r21,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r21.u32);
	// stw r21,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// beq cr6,0x8273ab20
	if (ctx.cr6.eq) goto loc_8273AB20;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273ab0c
	if (!ctx.cr6.eq) goto loc_8273AB0C;
	// bl 0x822900a0
	ctx.lr = 0x8273AB08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273AB0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273AB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273AB20:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// stw r21,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r21.u32);
	// stw r21,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r21.u32);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273AB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273ac78
	if (ctx.cr6.eq) goto loc_8273AC78;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ac78
	if (ctx.cr6.eq) goto loc_8273AC78;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273ac78
	if (ctx.cr6.eq) goto loc_8273AC78;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273AB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,172(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 172);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8273abc8
	if (ctx.cr6.eq) goto loc_8273ABC8;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stb r11,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r11.u8);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r31,0(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r30,r1,392
	ctx.r30.s64 = ctx.r1.s64 + 392;
	// ld r4,-18220(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18220);
	// bl 0x8229e490
	ctx.lr = 0x8273ABAC;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273ABC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273ABC8:
	// lwz r31,0(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273ABDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r9,356(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273ABF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,408(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273AC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// ld r4,-18260(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18260);
	// lwz r31,0(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x8273AC24;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273AC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r9,380(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273AC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 376);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273AC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273AC78:
	// lwz r11,816(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 816);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// stw r10,820(r15)
	PPC_STORE_U32(ctx.r15.u32 + 820, ctx.r10.u32);
	// bne cr6,0x8273ac98
	if (!ctx.cr6.eq) goto loc_8273AC98;
	// bl 0x822900a0
	ctx.lr = 0x8273AC94;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273AC98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273ACAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,352(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273ace0
	if (ctx.cr6.eq) goto loc_8273ACE0;
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273accc
	if (!ctx.cr6.eq) goto loc_8273ACCC;
	// bl 0x822900a0
	ctx.lr = 0x8273ACC8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28888);
loc_8273ACCC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273ACE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273ACE0:
	// addi r1,r1,1488
	ctx.r1.s64 = ctx.r1.s64 + 1488;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273ACE8"))) PPC_WEAK_FUNC(sub_8273ACE8);
PPC_FUNC_IMPL(__imp__sub_8273ACE8) {
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
	// bl 0x8273c358
	ctx.lr = 0x8273AD08;
	sub_8273C358(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x822ae870
	ctx.lr = 0x8273AD20;
	sub_822AE870(ctx, base);
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

__attribute__((alias("__imp__sub_8273AD3C"))) PPC_WEAK_FUNC(sub_8273AD3C);
PPC_FUNC_IMPL(__imp__sub_8273AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AD40"))) PPC_WEAK_FUNC(sub_8273AD40);
PPC_FUNC_IMPL(__imp__sub_8273AD40) {
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
	ctx.lr = 0x8273AD64;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8273c6d8
	ctx.lr = 0x8273AD78;
	sub_8273C6D8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8230dc18
	ctx.lr = 0x8273AD80;
	sub_8230DC18(ctx, base);
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

__attribute__((alias("__imp__sub_8273AD98"))) PPC_WEAK_FUNC(sub_8273AD98);
PPC_FUNC_IMPL(__imp__sub_8273AD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8273ADA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r3,824
	ctx.r30.s64 = ctx.r3.s64 + 824;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8273ADB4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273ae14
	if (ctx.cr6.lt) goto loc_8273AE14;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8273ae14
	if (!ctx.cr6.lt) goto loc_8273AE14;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273ae0c
	if (!ctx.cr6.eq) goto loc_8273AE0C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273ae0c
	if (ctx.cr6.eq) goto loc_8273AE0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x823f7cb8
	ctx.lr = 0x8273AE08;
	sub_823F7CB8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8273AE0C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8273adb4
	goto loc_8273ADB4;
loc_8273AE14:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8273ae24
	if (ctx.cr6.eq) goto loc_8273AE24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad950
	ctx.lr = 0x8273AE24;
	sub_822AD950(ctx, base);
loc_8273AE24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AE30"))) PPC_WEAK_FUNC(sub_8273AE30);
PPC_FUNC_IMPL(__imp__sub_8273AE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273AE38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273ae58
	if (!ctx.cr6.eq) goto loc_8273AE58;
	// bl 0x8229bb00
	ctx.lr = 0x8273AE54;
	sub_8229BB00(ctx, base);
	// stw r3,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r3.u32);
loc_8273AE58:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273ae70
	if (!ctx.cr6.eq) goto loc_8273AE70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb80
	ctx.lr = 0x8273AE6C;
	sub_8229BB80(ctx, base);
	// stw r3,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r3.u32);
loc_8273AE70:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// addi r4,r31,856
	ctx.r4.s64 = ctx.r31.s64 + 856;
	// addi r3,r30,352
	ctx.r3.s64 = ctx.r30.s64 + 352;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x823f94d8
	ctx.lr = 0x8273AE8C;
	sub_823F94D8(ctx, base);
	// addi r4,r31,868
	ctx.r4.s64 = ctx.r31.s64 + 868;
	// addi r3,r30,364
	ctx.r3.s64 = ctx.r30.s64 + 364;
	// bl 0x823f9370
	ctx.lr = 0x8273AE98;
	sub_823F9370(ctx, base);
	// addi r4,r31,880
	ctx.r4.s64 = ctx.r31.s64 + 880;
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// bl 0x823f9370
	ctx.lr = 0x8273AEA4;
	sub_823F9370(ctx, base);
	// addi r4,r31,892
	ctx.r4.s64 = ctx.r31.s64 + 892;
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// bl 0x8233a460
	ctx.lr = 0x8273AEB0;
	sub_8233A460(ctx, base);
	// addi r29,r30,412
	ctx.r29.s64 = ctx.r30.s64 + 412;
	// addi r4,r31,904
	ctx.r4.s64 = ctx.r31.s64 + 904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f8968
	ctx.lr = 0x8273AEC0;
	sub_823F8968(ctx, base);
	// lwz r9,920(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r9.u32);
	// bl 0x823c3698
	ctx.lr = 0x8273AED0;
	sub_823C3698(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AED8"))) PPC_WEAK_FUNC(sub_8273AED8);
PPC_FUNC_IMPL(__imp__sub_8273AED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273AEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,455
	ctx.r11.s64 = 455;
	// li r10,90
	ctx.r10.s64 = 90;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// addi r4,r30,352
	ctx.r4.s64 = ctx.r30.s64 + 352;
	// stw r10,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r10.u32);
	// bl 0x823f94d8
	ctx.lr = 0x8273AF08;
	sub_823F94D8(ctx, base);
	// addi r4,r30,364
	ctx.r4.s64 = ctx.r30.s64 + 364;
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// bl 0x823f9370
	ctx.lr = 0x8273AF14;
	sub_823F9370(ctx, base);
	// addi r4,r30,376
	ctx.r4.s64 = ctx.r30.s64 + 376;
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x823f9370
	ctx.lr = 0x8273AF20;
	sub_823F9370(ctx, base);
	// addi r4,r30,448
	ctx.r4.s64 = ctx.r30.s64 + 448;
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x8233a460
	ctx.lr = 0x8273AF2C;
	sub_8233A460(ctx, base);
	// addi r29,r31,904
	ctx.r29.s64 = ctx.r31.s64 + 904;
	// addi r4,r30,412
	ctx.r4.s64 = ctx.r30.s64 + 412;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f8968
	ctx.lr = 0x8273AF3C;
	sub_823F8968(ctx, base);
	// lwz r9,428(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r9.u32);
	// bl 0x823c3698
	ctx.lr = 0x8273AF4C;
	sub_823C3698(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AF54"))) PPC_WEAK_FUNC(sub_8273AF54);
PPC_FUNC_IMPL(__imp__sub_8273AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AF58"))) PPC_WEAK_FUNC(sub_8273AF58);
PPC_FUNC_IMPL(__imp__sub_8273AF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256cd98
	sub_8256CD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273AF5C"))) PPC_WEAK_FUNC(sub_8273AF5C);
PPC_FUNC_IMPL(__imp__sub_8273AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273AF60"))) PPC_WEAK_FUNC(sub_8273AF60);
PPC_FUNC_IMPL(__imp__sub_8273AF60) {
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
	// bl 0x8229c920
	ctx.lr = 0x8273AF80;
	sub_8229C920(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,2576
	ctx.r4.s64 = ctx.r11.s64 + 2576;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8273AF9C;
	sub_8233E028(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273AFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8273b060
	if (!ctx.cr6.eq) goto loc_8273B060;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8273b060
	if (!ctx.cr6.eq) goto loc_8273B060;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8273b028
	if (ctx.cr6.eq) goto loc_8273B028;
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8273b078
	if (ctx.cr6.eq) goto loc_8273B078;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b014
	if (ctx.cr6.eq) goto loc_8273B014;
loc_8273B000:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8273b078
	if (ctx.cr6.eq) goto loc_8273B078;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273b000
	if (!ctx.cr6.eq) goto loc_8273B000;
loc_8273B014:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b060
	if (ctx.cr6.eq) goto loc_8273B060;
	// b 0x8273b078
	goto loc_8273B078;
loc_8273B028:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8273b078
	if (ctx.cr6.eq) goto loc_8273B078;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b050
	if (ctx.cr6.eq) goto loc_8273B050;
loc_8273B03C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8273b078
	if (ctx.cr6.eq) goto loc_8273B078;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273b03c
	if (!ctx.cr6.eq) goto loc_8273B03C;
loc_8273B050:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273b078
	if (!ctx.cr6.eq) goto loc_8273B078;
loc_8273B060:
	// addi r4,r31,824
	ctx.r4.s64 = ctx.r31.s64 + 824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6bc8
	ctx.lr = 0x8273B06C;
	sub_823F6BC8(ctx, base);
	// addi r4,r31,904
	ctx.r4.s64 = ctx.r31.s64 + 904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6d28
	ctx.lr = 0x8273B078;
	sub_823F6D28(ctx, base);
loc_8273B078:
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

__attribute__((alias("__imp__sub_8273B090"))) PPC_WEAK_FUNC(sub_8273B090);
PPC_FUNC_IMPL(__imp__sub_8273B090) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,25204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273b0c4
	if (ctx.cr6.eq) goto loc_8273B0C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273B0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273B0C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273b0ec
	if (ctx.cr6.eq) goto loc_8273B0EC;
loc_8273B0D0:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8273b224
	if (!ctx.cr6.eq) goto loc_8273B224;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273b0d0
	if (!ctx.cr6.eq) goto loc_8273B0D0;
loc_8273B0EC:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273b194
	if (ctx.cr6.eq) goto loc_8273B194;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,824
	ctx.r3.s64 = ctx.r30.s64 + 824;
	// bl 0x823f6b60
	ctx.lr = 0x8273B108;
	sub_823F6B60(ctx, base);
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,856
	ctx.r3.s64 = ctx.r30.s64 + 856;
	// stw r31,860(r30)
	PPC_STORE_U32(ctx.r30.u32 + 860, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b130
	if (ctx.cr6.eq) goto loc_8273B130;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294520
	ctx.lr = 0x8273B130;
	sub_82294520(ctx, base);
loc_8273B130:
	// lwz r11,876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	// addi r3,r30,868
	ctx.r3.s64 = ctx.r30.s64 + 868;
	// stw r31,872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 872, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b154
	if (ctx.cr6.eq) goto loc_8273B154;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8273B154;
	sub_82294520(ctx, base);
loc_8273B154:
	// lwz r11,888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	// addi r3,r30,880
	ctx.r3.s64 = ctx.r30.s64 + 880;
	// stw r31,884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 884, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b178
	if (ctx.cr6.eq) goto loc_8273B178;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8273B178;
	sub_82294520(ctx, base);
loc_8273B178:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,892
	ctx.r3.s64 = ctx.r30.s64 + 892;
	// bl 0x822936d0
	ctx.lr = 0x8273B184;
	sub_822936D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,904
	ctx.r3.s64 = ctx.r30.s64 + 904;
	// bl 0x823f6cc0
	ctx.lr = 0x8273B190;
	sub_823F6CC0(ctx, base);
	// b 0x8273b224
	goto loc_8273B224;
loc_8273B194:
	// addi r8,r30,824
	ctx.r8.s64 = ctx.r30.s64 + 824;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_8273B1AC:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8273b208
	if (ctx.cr6.lt) goto loc_8273B208;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8273b208
	if (!ctx.cr6.lt) goto loc_8273B208;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8273b200
	if (!ctx.cr6.eq) goto loc_8273B200;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273b200
	if (!ctx.cr6.eq) goto loc_8273B200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f7600
	ctx.lr = 0x8273B1F8;
	sub_823F7600(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8273B200:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8273b1ac
	goto loc_8273B1AC;
loc_8273B208:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b21c
	if (ctx.cr6.eq) goto loc_8273B21C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ad950
	ctx.lr = 0x8273B21C;
	sub_822AD950(ctx, base);
loc_8273B21C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82738560
	ctx.lr = 0x8273B224;
	sub_82738560(ctx, base);
loc_8273B224:
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

__attribute__((alias("__imp__sub_8273B23C"))) PPC_WEAK_FUNC(sub_8273B23C);
PPC_FUNC_IMPL(__imp__sub_8273B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B240"))) PPC_WEAK_FUNC(sub_8273B240);
PPC_FUNC_IMPL(__imp__sub_8273B240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273B248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8273b284
	if (!ctx.cr6.eq) goto loc_8273B284;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8273b284
	if (!ctx.cr6.eq) goto loc_8273B284;
	// lwz r31,816(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// bl 0x822e2698
	ctx.lr = 0x8273B270;
	sub_822E2698(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273B280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8273B284:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229cd90
	ctx.lr = 0x8273B294;
	sub_8229CD90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B29C"))) PPC_WEAK_FUNC(sub_8273B29C);
PPC_FUNC_IMPL(__imp__sub_8273B29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B2A0"))) PPC_WEAK_FUNC(sub_8273B2A0);
PPC_FUNC_IMPL(__imp__sub_8273B2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8273B2A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8273B2B8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8273b308
	if (ctx.cr6.lt) goto loc_8273B308;
	// lwz r11,828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 828);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8273b308
	if (!ctx.cr6.lt) goto loc_8273B308;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,824(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 824);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8239dec8
	ctx.lr = 0x8273B2EC;
	sub_8239DEC8(ctx, base);
	// lwz r11,824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 824);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x8239dec8
	ctx.lr = 0x8273B300;
	sub_8239DEC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8273b2b8
	goto loc_8273B2B8;
loc_8273B308:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r26,-31884
	ctx.r26.s64 = -2089549824;
	// lis r27,-31884
	ctx.r27.s64 = -2089549824;
loc_8273B314:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8273b3bc
	if (ctx.cr6.lt) goto loc_8273B3BC;
	// lwz r11,908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 908);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8273b3bc
	if (!ctx.cr6.lt) goto loc_8273B3BC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,904(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 904);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273b3b4
	if (ctx.cr6.eq) goto loc_8273B3B4;
	// lwz r11,25196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8273b360
	if (ctx.cr6.lt) goto loc_8273B360;
	// lwz r11,25200(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8273b3b4
	if (!ctx.cr6.gt) goto loc_8273B3B4;
loc_8273B360:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8273b3b4
	if (ctx.cr6.eq) goto loc_8273B3B4;
	// li r12,-2
	ctx.r12.s64 = -2;
	// li r7,2
	ctx.r7.s64 = 2;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273B3A0;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8273b3b4
	if (ctx.cr0.eq) goto loc_8273B3B4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8273B3B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8273b314
	goto loc_8273B314;
loc_8273B3BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B3C4"))) PPC_WEAK_FUNC(sub_8273B3C4);
PPC_FUNC_IMPL(__imp__sub_8273B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273B3C8"))) PPC_WEAK_FUNC(sub_8273B3C8);
PPC_FUNC_IMPL(__imp__sub_8273B3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8273B3D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273B3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8273ba80
	if (ctx.cr6.eq) goto loc_8273BA80;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r21,96
	ctx.r26.s64 = ctx.r21.s64 + 96;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// bl 0x825864b0
	ctx.lr = 0x8273B414;
	sub_825864B0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8273b4b4
	if (ctx.cr0.lt) goto loc_8273B4B4;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8273B434:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8273b478
	if (!ctx.cr6.gt) goto loc_8273B478;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8273B46C;
	sub_82294520(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8273b47c
	goto loc_8273B47C;
loc_8273B478:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8273B47C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8273b4a8
	if (ctx.cr0.eq) goto loc_8273B4A8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x828fba08
	ctx.lr = 0x8273B4A8;
	sub_828FBA08(ctx, base);
loc_8273B4A8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bge 0x8273b434
	if (!ctx.cr0.lt) goto loc_8273B434;
loc_8273B4B4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8273b4f8
	if (!ctx.cr6.gt) goto loc_8273B4F8;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8273B4EC;
	sub_82294520(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8273b4fc
	goto loc_8273B4FC;
loc_8273B4F8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8273B4FC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8273b520
	if (ctx.cr0.eq) goto loc_8273B520;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// bl 0x828fba08
	ctx.lr = 0x8273B520;
	sub_828FBA08(ctx, base);
loc_8273B520:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x8273b554
	if (!ctx.cr6.gt) goto loc_8273B554;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8273B554;
	sub_82294520(ctx, base);
loc_8273B554:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8273b578
	if (ctx.cr0.eq) goto loc_8273B578;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// bl 0x828fba08
	ctx.lr = 0x8273B578;
	sub_828FBA08(ctx, base);
loc_8273B578:
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// bl 0x825864b0
	ctx.lr = 0x8273B590;
	sub_825864B0(ctx, base);
	// lwz r11,100(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273b5d0
	if (!ctx.cr6.gt) goto loc_8273B5D0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8273B5A4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82563270
	ctx.lr = 0x8273B5BC;
	sub_82563270(ctx, base);
	// lwz r10,100(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8273b5a4
	if (ctx.cr6.lt) goto loc_8273B5A4;
loc_8273B5D0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273b620
	if (!ctx.cr6.gt) goto loc_8273B620;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// li r4,40
	ctx.r4.s64 = 40;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x8273B614;
	sub_82294520(ctx, base);
	// lwz r24,132(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8273b624
	goto loc_8273B624;
loc_8273B620:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8273B624:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82e640b8
	ctx.lr = 0x8273B63C;
	sub_82E640B8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8273b6a8
	if (!ctx.cr6.gt) goto loc_8273B6A8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r28,r23,24
	ctx.r28.s64 = ctx.r23.s64 + 24;
loc_8273B654:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwzx r29,r27,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r29,-20(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20, ctx.r29.u32);
loc_8273B668:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82563ce8
	ctx.lr = 0x8273B67C;
	sub_82563CE8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8273b668
	if (ctx.cr6.lt) goto loc_8273B668;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273b654
	if (ctx.cr6.lt) goto loc_8273B654;
loc_8273B6A8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82562628
	ctx.lr = 0x8273B6B8;
	sub_82562628(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82562888
	ctx.lr = 0x8273B6C8;
	sub_82562888(ctx, base);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273b700
	if (ctx.cr6.eq) goto loc_8273B700;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b6ec
	if (!ctx.cr6.eq) goto loc_8273B6EC;
	// bl 0x822900a0
	ctx.lr = 0x8273B6E8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B6EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273B700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273B700:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273b74c
	if (!ctx.cr6.gt) goto loc_8273B74C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8273B714:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r9,276(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273B738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8273b714
	if (ctx.cr6.lt) goto loc_8273B714;
loc_8273B74C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8273b798
	if (!ctx.cr6.gt) goto loc_8273B798;
	// addi r31,r23,32
	ctx.r31.s64 = ctx.r23.s64 + 32;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8273B75C:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lfs f4,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f1,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,340(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8273B78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x8273b75c
	if (!ctx.cr0.eq) goto loc_8273B75C;
loc_8273B798:
	// lwz r11,832(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 832);
	// addi r31,r21,824
	ctx.r31.s64 = ctx.r21.s64 + 824;
	// stw r25,828(r21)
	PPC_STORE_U32(ctx.r21.u32 + 828, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b7f0
	if (ctx.cr6.eq) goto loc_8273B7F0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273b7f0
	if (ctx.cr6.eq) goto loc_8273B7F0;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b7d0
	if (!ctx.cr6.eq) goto loc_8273B7D0;
	// bl 0x822900a0
	ctx.lr = 0x8273B7CC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B7D0:
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
	ctx.lr = 0x8273B7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8273B7F0:
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// li r28,8
	ctx.r28.s64 = 8;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bne cr6,0x8273b810
	if (!ctx.cr6.eq) goto loc_8273B810;
	// bl 0x822900a0
	ctx.lr = 0x8273B80C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B810:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273B824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// lwz r9,864(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 864);
	// addi r30,r21,856
	ctx.r30.s64 = ctx.r21.s64 + 856;
	// stw r25,860(r21)
	PPC_STORE_U32(ctx.r21.u32 + 860, ctx.r25.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8273b880
	if (ctx.cr6.eq) goto loc_8273B880;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273b880
	if (ctx.cr6.eq) goto loc_8273B880;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b860
	if (!ctx.cr6.eq) goto loc_8273B860;
	// bl 0x822900a0
	ctx.lr = 0x8273B85C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B860:
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
	ctx.lr = 0x8273B87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8273B880:
	// lwz r11,876(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 876);
	// addi r31,r21,868
	ctx.r31.s64 = ctx.r21.s64 + 868;
	// stw r25,872(r21)
	PPC_STORE_U32(ctx.r21.u32 + 872, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b8d8
	if (ctx.cr6.eq) goto loc_8273B8D8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273b8d8
	if (ctx.cr6.eq) goto loc_8273B8D8;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b8b8
	if (!ctx.cr6.eq) goto loc_8273B8B8;
	// bl 0x822900a0
	ctx.lr = 0x8273B8B4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B8B8:
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
	ctx.lr = 0x8273B8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8273B8D8:
	// lwz r11,888(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 888);
	// addi r31,r21,880
	ctx.r31.s64 = ctx.r21.s64 + 880;
	// stw r25,884(r21)
	PPC_STORE_U32(ctx.r21.u32 + 884, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b930
	if (ctx.cr6.eq) goto loc_8273B930;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273b930
	if (ctx.cr6.eq) goto loc_8273B930;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b910
	if (!ctx.cr6.eq) goto loc_8273B910;
	// bl 0x822900a0
	ctx.lr = 0x8273B90C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B910:
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
	ctx.lr = 0x8273B92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8273B930:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r21,892
	ctx.r3.s64 = ctx.r21.s64 + 892;
	// bl 0x822936d0
	ctx.lr = 0x8273B93C;
	sub_822936D0(ctx, base);
	// lwz r11,912(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 912);
	// addi r31,r21,904
	ctx.r31.s64 = ctx.r21.s64 + 904;
	// stw r25,908(r21)
	PPC_STORE_U32(ctx.r21.u32 + 908, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273b994
	if (ctx.cr6.eq) goto loc_8273B994;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273b994
	if (ctx.cr6.eq) goto loc_8273B994;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b974
	if (!ctx.cr6.eq) goto loc_8273B974;
	// bl 0x822900a0
	ctx.lr = 0x8273B970;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B974:
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
	ctx.lr = 0x8273B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8273B994:
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bne cr6,0x8273b9b0
	if (!ctx.cr6.eq) goto loc_8273B9B0;
	// bl 0x822900a0
	ctx.lr = 0x8273B9AC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B9B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273B9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r25,816(r21)
	PPC_STORE_U32(ctx.r21.u32 + 816, ctx.r25.u32);
	// beq cr6,0x8273b9fc
	if (ctx.cr6.eq) goto loc_8273B9FC;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273b9e8
	if (!ctx.cr6.eq) goto loc_8273B9E8;
	// bl 0x822900a0
	ctx.lr = 0x8273B9E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273B9E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273B9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273B9FC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ba34
	if (ctx.cr6.eq) goto loc_8273BA34;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273ba20
	if (!ctx.cr6.eq) goto loc_8273BA20;
	// bl 0x822900a0
	ctx.lr = 0x8273BA1C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273BA20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273BA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273BA34:
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// bl 0x8273c238
	ctx.lr = 0x8273BA48;
	sub_8273C238(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ba80
	if (ctx.cr6.eq) goto loc_8273BA80;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273ba6c
	if (!ctx.cr6.eq) goto loc_8273BA6C;
	// bl 0x822900a0
	ctx.lr = 0x8273BA68;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8273BA6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273BA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273BA80:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273BA88"))) PPC_WEAK_FUNC(sub_8273BA88);
PPC_FUNC_IMPL(__imp__sub_8273BA88) {
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
	// bl 0x8273c838
	ctx.lr = 0x8273BAA8;
	sub_8273C838(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822ae870
	ctx.lr = 0x8273BAB8;
	sub_822AE870(ctx, base);
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

__attribute__((alias("__imp__sub_8273BAD4"))) PPC_WEAK_FUNC(sub_8273BAD4);
PPC_FUNC_IMPL(__imp__sub_8273BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BAD8"))) PPC_WEAK_FUNC(sub_8273BAD8);
PPC_FUNC_IMPL(__imp__sub_8273BAD8) {
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
	// bl 0x8273c358
	ctx.lr = 0x8273BAF8;
	sub_8273C358(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x822ae870
	ctx.lr = 0x8273BB10;
	sub_822AE870(ctx, base);
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

__attribute__((alias("__imp__sub_8273BB2C"))) PPC_WEAK_FUNC(sub_8273BB2C);
PPC_FUNC_IMPL(__imp__sub_8273BB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BB30"))) PPC_WEAK_FUNC(sub_8273BB30);
PPC_FUNC_IMPL(__imp__sub_8273BB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273BB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8273bb70
	if (ctx.cr6.eq) goto loc_8273BB70;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8273BB70;
	sub_82294520(ctx, base);
loc_8273BB70:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8273bbf0
	if (!ctx.cr6.gt) goto loc_8273BBF0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273BB94;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8273BBAC;
	sub_82E640B8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8273bbf0
	if (!ctx.cr6.gt) goto loc_8273BBF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8273BBC4:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r5,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8273bbc4
	if (ctx.cr6.lt) goto loc_8273BBC4;
loc_8273BBF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273BBF8"))) PPC_WEAK_FUNC(sub_8273BBF8);
PPC_FUNC_IMPL(__imp__sub_8273BBF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BC00"))) PPC_WEAK_FUNC(sub_8273BC00);
PPC_FUNC_IMPL(__imp__sub_8273BC00) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BC1C"))) PPC_WEAK_FUNC(sub_8273BC1C);
PPC_FUNC_IMPL(__imp__sub_8273BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BC20"))) PPC_WEAK_FUNC(sub_8273BC20);
PPC_FUNC_IMPL(__imp__sub_8273BC20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BC28"))) PPC_WEAK_FUNC(sub_8273BC28);
PPC_FUNC_IMPL(__imp__sub_8273BC28) {
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

__attribute__((alias("__imp__sub_8273BC3C"))) PPC_WEAK_FUNC(sub_8273BC3C);
PPC_FUNC_IMPL(__imp__sub_8273BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BC40"))) PPC_WEAK_FUNC(sub_8273BC40);
PPC_FUNC_IMPL(__imp__sub_8273BC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273BC48;
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
	// beq cr6,0x8273bc88
	if (ctx.cr6.eq) goto loc_8273BC88;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273bc74
	if (!ctx.cr6.eq) goto loc_8273BC74;
	// bl 0x822900a0
	ctx.lr = 0x8273BC70;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8273BC74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273BC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273BC88:
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

__attribute__((alias("__imp__sub_8273BCA0"))) PPC_WEAK_FUNC(sub_8273BCA0);
PPC_FUNC_IMPL(__imp__sub_8273BCA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_8273BCB8"))) PPC_WEAK_FUNC(sub_8273BCB8);
PPC_FUNC_IMPL(__imp__sub_8273BCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273BCC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273BCDC;
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
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8273BD08;
	sub_82E640B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273BD14"))) PPC_WEAK_FUNC(sub_8273BD14);
PPC_FUNC_IMPL(__imp__sub_8273BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BD18"))) PPC_WEAK_FUNC(sub_8273BD18);
PPC_FUNC_IMPL(__imp__sub_8273BD18) {
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

__attribute__((alias("__imp__sub_8273BD38"))) PPC_WEAK_FUNC(sub_8273BD38);
PPC_FUNC_IMPL(__imp__sub_8273BD38) {
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
	ctx.lr = 0x8273BD54;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8273c500
	ctx.lr = 0x8273BD68;
	sub_8273C500(ctx, base);
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

__attribute__((alias("__imp__sub_8273BD7C"))) PPC_WEAK_FUNC(sub_8273BD7C);
PPC_FUNC_IMPL(__imp__sub_8273BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BD80"))) PPC_WEAK_FUNC(sub_8273BD80);
PPC_FUNC_IMPL(__imp__sub_8273BD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273BD88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273bda8
	if (!ctx.cr6.eq) goto loc_8273BDA8;
	// bl 0x8273c918
	ctx.lr = 0x8273BDA8;
	sub_8273C918(ctx, base);
loc_8273BDA8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273be0c
	if (!ctx.cr6.gt) goto loc_8273BE0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x8273BDC0;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8273be0c
	if (ctx.cr6.eq) goto loc_8273BE0C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8273BDE4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8273be24
	if (ctx.cr6.eq) goto loc_8273BE24;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273bde4
	if (!ctx.cr6.eq) goto loc_8273BDE4;
loc_8273BE0C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273c420
	ctx.lr = 0x8273BE1C;
	sub_8273C420(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8273BE24:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273BE4C"))) PPC_WEAK_FUNC(sub_8273BE4C);
PPC_FUNC_IMPL(__imp__sub_8273BE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BE50"))) PPC_WEAK_FUNC(sub_8273BE50);
PPC_FUNC_IMPL(__imp__sub_8273BE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273BE58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8273bed0
	if (ctx.cr6.eq) goto loc_8273BED0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273bed0
	if (!ctx.cr6.gt) goto loc_8273BED0;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x8273BE88;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8273bed0
	if (ctx.cr6.eq) goto loc_8273BED0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8273BEA8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8273bedc
	if (ctx.cr6.eq) goto loc_8273BEDC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273bea8
	if (!ctx.cr6.eq) goto loc_8273BEA8;
loc_8273BED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8273BEDC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273BEF8"))) PPC_WEAK_FUNC(sub_8273BEF8);
PPC_FUNC_IMPL(__imp__sub_8273BEF8) {
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
	// lwz r11,-27428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273bf38
	if (!ctx.cr6.eq) goto loc_8273BF38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82736348
	ctx.lr = 0x8273BF2C;
	sub_82736348(ctx, base);
	// stw r3,-27428(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27428, ctx.r3.u32);
	// bl 0x82736408
	ctx.lr = 0x8273BF34;
	sub_82736408(ctx, base);
	// lwz r11,-27428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27428);
loc_8273BF38:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x8273BF4C;
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
	// bge cr6,0x8273bf8c
	if (!ctx.cr6.lt) goto loc_8273BF8C;
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
	// beq cr6,0x8273bf8c
	if (ctx.cr6.eq) goto loc_8273BF8C;
	// bl 0x8273bfa8
	ctx.lr = 0x8273BF88;
	sub_8273BFA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8273BF8C:
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

__attribute__((alias("__imp__sub_8273BFA4"))) PPC_WEAK_FUNC(sub_8273BFA4);
PPC_FUNC_IMPL(__imp__sub_8273BFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BFA8"))) PPC_WEAK_FUNC(sub_8273BFA8);
PPC_FUNC_IMPL(__imp__sub_8273BFA8) {
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
loc_8273BFC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x8273BFD0;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8273bffc
	if (!ctx.cr6.lt) goto loc_8273BFFC;
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
	// bne cr6,0x8273bfc8
	if (!ctx.cr6.eq) goto loc_8273BFC8;
loc_8273BFFC:
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

__attribute__((alias("__imp__sub_8273C014"))) PPC_WEAK_FUNC(sub_8273C014);
PPC_FUNC_IMPL(__imp__sub_8273C014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C018"))) PPC_WEAK_FUNC(sub_8273C018);
PPC_FUNC_IMPL(__imp__sub_8273C018) {
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

__attribute__((alias("__imp__sub_8273C030"))) PPC_WEAK_FUNC(sub_8273C030);
PPC_FUNC_IMPL(__imp__sub_8273C030) {
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

__attribute__((alias("__imp__sub_8273C050"))) PPC_WEAK_FUNC(sub_8273C050);
PPC_FUNC_IMPL(__imp__sub_8273C050) {
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
	ctx.lr = 0x8273C06C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8273c6d8
	ctx.lr = 0x8273C080;
	sub_8273C6D8(ctx, base);
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

__attribute__((alias("__imp__sub_8273C094"))) PPC_WEAK_FUNC(sub_8273C094);
PPC_FUNC_IMPL(__imp__sub_8273C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C098"))) PPC_WEAK_FUNC(sub_8273C098);
PPC_FUNC_IMPL(__imp__sub_8273C098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273C0A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273c0c0
	if (!ctx.cr6.eq) goto loc_8273C0C0;
	// bl 0x8273ca88
	ctx.lr = 0x8273C0C0;
	sub_8273CA88(ctx, base);
loc_8273C0C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273c124
	if (!ctx.cr6.gt) goto loc_8273C124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x8273C0D8;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8273c124
	if (ctx.cr6.eq) goto loc_8273C124;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8273C0FC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8273c13c
	if (ctx.cr6.eq) goto loc_8273C13C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273c0fc
	if (!ctx.cr6.eq) goto loc_8273C0FC;
loc_8273C124:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273c5f8
	ctx.lr = 0x8273C134;
	sub_8273C5F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8273C13C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C164"))) PPC_WEAK_FUNC(sub_8273C164);
PPC_FUNC_IMPL(__imp__sub_8273C164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C168"))) PPC_WEAK_FUNC(sub_8273C168);
PPC_FUNC_IMPL(__imp__sub_8273C168) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C180"))) PPC_WEAK_FUNC(sub_8273C180);
PPC_FUNC_IMPL(__imp__sub_8273C180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8273c5a8
	sub_8273C5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C194"))) PPC_WEAK_FUNC(sub_8273C194);
PPC_FUNC_IMPL(__imp__sub_8273C194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C198"))) PPC_WEAK_FUNC(sub_8273C198);
PPC_FUNC_IMPL(__imp__sub_8273C198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C1A8"))) PPC_WEAK_FUNC(sub_8273C1A8);
PPC_FUNC_IMPL(__imp__sub_8273C1A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8273c1c8
	if (ctx.cr6.lt) goto loc_8273C1C8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8273C1C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C1D0"))) PPC_WEAK_FUNC(sub_8273C1D0);
PPC_FUNC_IMPL(__imp__sub_8273C1D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C1F4"))) PPC_WEAK_FUNC(sub_8273C1F4);
PPC_FUNC_IMPL(__imp__sub_8273C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C1F8"))) PPC_WEAK_FUNC(sub_8273C1F8);
PPC_FUNC_IMPL(__imp__sub_8273C1F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C21C"))) PPC_WEAK_FUNC(sub_8273C21C);
PPC_FUNC_IMPL(__imp__sub_8273C21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C220"))) PPC_WEAK_FUNC(sub_8273C220);
PPC_FUNC_IMPL(__imp__sub_8273C220) {
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

__attribute__((alias("__imp__sub_8273C234"))) PPC_WEAK_FUNC(sub_8273C234);
PPC_FUNC_IMPL(__imp__sub_8273C234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C238"))) PPC_WEAK_FUNC(sub_8273C238);
PPC_FUNC_IMPL(__imp__sub_8273C238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8273C240;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273c284
	if (!ctx.cr6.gt) goto loc_8273C284;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8273C260:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x828fbaf0
	ctx.lr = 0x8273C270;
	sub_828FBAF0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273c260
	if (ctx.cr6.lt) goto loc_8273C260;
loc_8273C284:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273c2bc
	if (ctx.cr6.eq) goto loc_8273C2BC;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273c2a8
	if (!ctx.cr6.eq) goto loc_8273C2A8;
	// bl 0x822900a0
	ctx.lr = 0x8273C2A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8273C2A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273C2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273C2BC:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C2D0"))) PPC_WEAK_FUNC(sub_8273C2D0);
PPC_FUNC_IMPL(__imp__sub_8273C2D0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbaf0
	ctx.lr = 0x8273C2EC;
	sub_828FBAF0(ctx, base);
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

__attribute__((alias("__imp__sub_8273C304"))) PPC_WEAK_FUNC(sub_8273C304);
PPC_FUNC_IMPL(__imp__sub_8273C304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C308"))) PPC_WEAK_FUNC(sub_8273C308);
PPC_FUNC_IMPL(__imp__sub_8273C308) {
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
	// bl 0x8273c838
	ctx.lr = 0x8273C328;
	sub_8273C838(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822ae870
	ctx.lr = 0x8273C338;
	sub_822AE870(ctx, base);
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

__attribute__((alias("__imp__sub_8273C354"))) PPC_WEAK_FUNC(sub_8273C354);
PPC_FUNC_IMPL(__imp__sub_8273C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C358"))) PPC_WEAK_FUNC(sub_8273C358);
PPC_FUNC_IMPL(__imp__sub_8273C358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8273C360;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// beq cr6,0x8273c3fc
	if (ctx.cr6.eq) goto loc_8273C3FC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273c3fc
	if (!ctx.cr6.gt) goto loc_8273C3FC;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x8273C3A4;
	sub_82294520(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273c3fc
	if (!ctx.cr6.gt) goto loc_8273C3FC;
loc_8273C3B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822b0a48
	ctx.lr = 0x8273C3C0;
	sub_822B0A48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273c3e8
	if (ctx.cr6.eq) goto loc_8273C3E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_8273C3E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273c3b4
	if (ctx.cr6.lt) goto loc_8273C3B4;
loc_8273C3FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C408"))) PPC_WEAK_FUNC(sub_8273C408);
PPC_FUNC_IMPL(__imp__sub_8273C408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8273c918
	sub_8273C918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C418"))) PPC_WEAK_FUNC(sub_8273C418);
PPC_FUNC_IMPL(__imp__sub_8273C418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C41C"))) PPC_WEAK_FUNC(sub_8273C41C);
PPC_FUNC_IMPL(__imp__sub_8273C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C420"))) PPC_WEAK_FUNC(sub_8273C420);
PPC_FUNC_IMPL(__imp__sub_8273C420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273C428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273C44C;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8273c474
	if (ctx.cr0.eq) goto loc_8273C474;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// b 0x8273c478
	goto loc_8273C478;
loc_8273C474:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8273C478:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822b1498
	ctx.lr = 0x8273C484;
	sub_822B1498(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stwx r4,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8273c4d8
	if (!ctx.cr6.lt) goto loc_8273C4D8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8273c918
	ctx.lr = 0x8273C4D8;
	sub_8273C918(ctx, base);
loc_8273C4D8:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C4E4"))) PPC_WEAK_FUNC(sub_8273C4E4);
PPC_FUNC_IMPL(__imp__sub_8273C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C4E8"))) PPC_WEAK_FUNC(sub_8273C4E8);
PPC_FUNC_IMPL(__imp__sub_8273C4E8) {
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

__attribute__((alias("__imp__sub_8273C4FC"))) PPC_WEAK_FUNC(sub_8273C4FC);
PPC_FUNC_IMPL(__imp__sub_8273C4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C500"))) PPC_WEAK_FUNC(sub_8273C500);
PPC_FUNC_IMPL(__imp__sub_8273C500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273C508;
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
	// beq cr6,0x8273c548
	if (ctx.cr6.eq) goto loc_8273C548;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273c534
	if (!ctx.cr6.eq) goto loc_8273C534;
	// bl 0x822900a0
	ctx.lr = 0x8273C530;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8273C534:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273C548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273C548:
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

__attribute__((alias("__imp__sub_8273C560"))) PPC_WEAK_FUNC(sub_8273C560);
PPC_FUNC_IMPL(__imp__sub_8273C560) {
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

__attribute__((alias("__imp__sub_8273C578"))) PPC_WEAK_FUNC(sub_8273C578);
PPC_FUNC_IMPL(__imp__sub_8273C578) {
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

__attribute__((alias("__imp__sub_8273C590"))) PPC_WEAK_FUNC(sub_8273C590);
PPC_FUNC_IMPL(__imp__sub_8273C590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8273ca88
	sub_8273CA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C5A0"))) PPC_WEAK_FUNC(sub_8273C5A0);
PPC_FUNC_IMPL(__imp__sub_8273C5A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C5A4"))) PPC_WEAK_FUNC(sub_8273C5A4);
PPC_FUNC_IMPL(__imp__sub_8273C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C5A8"))) PPC_WEAK_FUNC(sub_8273C5A8);
PPC_FUNC_IMPL(__imp__sub_8273C5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8273C5C4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8273c5c4
	if (ctx.cr6.gt) goto loc_8273C5C4;
	// b 0x8273ca88
	sub_8273CA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C5F4"))) PPC_WEAK_FUNC(sub_8273C5F4);
PPC_FUNC_IMPL(__imp__sub_8273C5F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C5F8"))) PPC_WEAK_FUNC(sub_8273C5F8);
PPC_FUNC_IMPL(__imp__sub_8273C5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273C600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273C624;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8273c64c
	if (ctx.cr0.eq) goto loc_8273C64C;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// b 0x8273c650
	goto loc_8273C650;
loc_8273C64C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8273C650:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822b1498
	ctx.lr = 0x8273C65C;
	sub_822B1498(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stwx r4,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8273c6b0
	if (!ctx.cr6.lt) goto loc_8273C6B0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8273ca88
	ctx.lr = 0x8273C6B0;
	sub_8273CA88(ctx, base);
loc_8273C6B0:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C6BC"))) PPC_WEAK_FUNC(sub_8273C6BC);
PPC_FUNC_IMPL(__imp__sub_8273C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C6C0"))) PPC_WEAK_FUNC(sub_8273C6C0);
PPC_FUNC_IMPL(__imp__sub_8273C6C0) {
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

__attribute__((alias("__imp__sub_8273C6D4"))) PPC_WEAK_FUNC(sub_8273C6D4);
PPC_FUNC_IMPL(__imp__sub_8273C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C6D8"))) PPC_WEAK_FUNC(sub_8273C6D8);
PPC_FUNC_IMPL(__imp__sub_8273C6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273C6E0;
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
	// beq cr6,0x8273c720
	if (ctx.cr6.eq) goto loc_8273C720;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273c70c
	if (!ctx.cr6.eq) goto loc_8273C70C;
	// bl 0x822900a0
	ctx.lr = 0x8273C708;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8273C70C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273C720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273C720:
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

__attribute__((alias("__imp__sub_8273C738"))) PPC_WEAK_FUNC(sub_8273C738);
PPC_FUNC_IMPL(__imp__sub_8273C738) {
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

__attribute__((alias("__imp__sub_8273C750"))) PPC_WEAK_FUNC(sub_8273C750);
PPC_FUNC_IMPL(__imp__sub_8273C750) {
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

__attribute__((alias("__imp__sub_8273C760"))) PPC_WEAK_FUNC(sub_8273C760);
PPC_FUNC_IMPL(__imp__sub_8273C760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8273C768;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8273c82c
	if (ctx.cr6.eq) goto loc_8273C82C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// ble cr6,0x8273c80c
	if (!ctx.cr6.gt) goto loc_8273C80C;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8273c7ac
	if (ctx.cr6.eq) goto loc_8273C7AC;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x8273C7AC;
	sub_82294520(ctx, base);
loc_8273C7AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273c82c
	if (!ctx.cr6.gt) goto loc_8273C82C;
loc_8273C7BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822b0a48
	ctx.lr = 0x8273C7C8;
	sub_822B0A48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273c7f0
	if (ctx.cr6.eq) goto loc_8273C7F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_8273C7F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273c7bc
	if (ctx.cr6.lt) goto loc_8273C7BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8273C80C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273c82c
	if (ctx.cr6.eq) goto loc_8273C82C;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x8273C82C;
	sub_82294520(ctx, base);
loc_8273C82C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C834"))) PPC_WEAK_FUNC(sub_8273C834);
PPC_FUNC_IMPL(__imp__sub_8273C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C838"))) PPC_WEAK_FUNC(sub_8273C838);
PPC_FUNC_IMPL(__imp__sub_8273C838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8273C840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8273c908
	if (ctx.cr6.eq) goto loc_8273C908;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// ble cr6,0x8273c8e8
	if (!ctx.cr6.gt) goto loc_8273C8E8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8273c884
	if (ctx.cr6.eq) goto loc_8273C884;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x8273C884;
	sub_82294520(ctx, base);
loc_8273C884:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273c908
	if (!ctx.cr6.gt) goto loc_8273C908;
loc_8273C894:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822b0a48
	ctx.lr = 0x8273C8A0;
	sub_822B0A48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273c8c8
	if (ctx.cr6.eq) goto loc_8273C8C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_8273C8C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273c894
	if (ctx.cr6.lt) goto loc_8273C894;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8273C8E8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273c90c
	if (ctx.cr6.eq) goto loc_8273C90C;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x8273C908;
	sub_82294520(ctx, base);
loc_8273C908:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8273C90C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C914"))) PPC_WEAK_FUNC(sub_8273C914);
PPC_FUNC_IMPL(__imp__sub_8273C914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C918"))) PPC_WEAK_FUNC(sub_8273C918);
PPC_FUNC_IMPL(__imp__sub_8273C918) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8273C938;
	sub_82294A58(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8273c954
	if (!ctx.cr6.gt) goto loc_8273C954;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8273C954:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x8273C95C;
	sub_822959A8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8273c994
	if (!ctx.cr6.gt) goto loc_8273C994;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8273C978:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8273c978
	if (ctx.cr6.lt) goto loc_8273C978;
loc_8273C994:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273ca70
	if (!ctx.cr6.gt) goto loc_8273CA70;
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r6,r11,31161
	ctx.r6.u64 = ctx.r11.u64 | 31161;
loc_8273C9B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r10,19,13,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,10,0,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// xor r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r9,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8273c9b0
	if (ctx.cr6.lt) goto loc_8273C9B0;
loc_8273CA70:
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

__attribute__((alias("__imp__sub_8273CA88"))) PPC_WEAK_FUNC(sub_8273CA88);
PPC_FUNC_IMPL(__imp__sub_8273CA88) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8273CAA8;
	sub_82294A58(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8273cac4
	if (!ctx.cr6.gt) goto loc_8273CAC4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8273CAC4:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x8273CACC;
	sub_822959A8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8273cb04
	if (!ctx.cr6.gt) goto loc_8273CB04;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8273CAE8:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8273cae8
	if (ctx.cr6.lt) goto loc_8273CAE8;
loc_8273CB04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273cbe0
	if (!ctx.cr6.gt) goto loc_8273CBE0;
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r6,r11,31161
	ctx.r6.u64 = ctx.r11.u64 | 31161;
loc_8273CB20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r10,19,13,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,10,0,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// xor r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r9,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8273cb20
	if (ctx.cr6.lt) goto loc_8273CB20;
loc_8273CBE0:
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

__attribute__((alias("__imp__sub_8273CBF8"))) PPC_WEAK_FUNC(sub_8273CBF8);
PPC_FUNC_IMPL(__imp__sub_8273CBF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CC04"))) PPC_WEAK_FUNC(sub_8273CC04);
PPC_FUNC_IMPL(__imp__sub_8273CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CC08"))) PPC_WEAK_FUNC(sub_8273CC08);
PPC_FUNC_IMPL(__imp__sub_8273CC08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CC14"))) PPC_WEAK_FUNC(sub_8273CC14);
PPC_FUNC_IMPL(__imp__sub_8273CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CC18"))) PPC_WEAK_FUNC(sub_8273CC18);
PPC_FUNC_IMPL(__imp__sub_8273CC18) {
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
	// beq cr6,0x8273cc80
	if (ctx.cr6.eq) goto loc_8273CC80;
	// bl 0x822ee508
	ctx.lr = 0x8273CC38;
	sub_822EE508(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cc58
	if (ctx.cr6.eq) goto loc_8273CC58;
loc_8273CC44:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273cc68
	if (ctx.cr6.eq) goto loc_8273CC68;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273cc44
	if (!ctx.cr6.eq) goto loc_8273CC44;
loc_8273CC58:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273cc80
	if (ctx.cr6.eq) goto loc_8273CC80;
loc_8273CC68:
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
loc_8273CC80:
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

__attribute__((alias("__imp__sub_8273CC98"))) PPC_WEAK_FUNC(sub_8273CC98);
PPC_FUNC_IMPL(__imp__sub_8273CC98) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cd08
	if (ctx.cr6.eq) goto loc_8273CD08;
	// bl 0x822ee508
	ctx.lr = 0x8273CCBC;
	sub_822EE508(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cce0
	if (ctx.cr6.eq) goto loc_8273CCE0;
loc_8273CCCC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273ccf0
	if (ctx.cr6.eq) goto loc_8273CCF0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273cccc
	if (!ctx.cr6.eq) goto loc_8273CCCC;
loc_8273CCE0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8273cd08
	if (ctx.cr6.eq) goto loc_8273CD08;
loc_8273CCF0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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
loc_8273CD08:
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

__attribute__((alias("__imp__sub_8273CD20"))) PPC_WEAK_FUNC(sub_8273CD20);
PPC_FUNC_IMPL(__imp__sub_8273CD20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CD24"))) PPC_WEAK_FUNC(sub_8273CD24);
PPC_FUNC_IMPL(__imp__sub_8273CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CD28"))) PPC_WEAK_FUNC(sub_8273CD28);
PPC_FUNC_IMPL(__imp__sub_8273CD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CD2C"))) PPC_WEAK_FUNC(sub_8273CD2C);
PPC_FUNC_IMPL(__imp__sub_8273CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CD30"))) PPC_WEAK_FUNC(sub_8273CD30);
PPC_FUNC_IMPL(__imp__sub_8273CD30) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8273cd40
	if (!ctx.cr6.eq) goto loc_8273CD40;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_8273CD40:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273CD60"))) PPC_WEAK_FUNC(sub_8273CD60);
PPC_FUNC_IMPL(__imp__sub_8273CD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CD64"))) PPC_WEAK_FUNC(sub_8273CD64);
PPC_FUNC_IMPL(__imp__sub_8273CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CD68"))) PPC_WEAK_FUNC(sub_8273CD68);
PPC_FUNC_IMPL(__imp__sub_8273CD68) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cdd8
	if (ctx.cr6.eq) goto loc_8273CDD8;
	// bl 0x822e2698
	ctx.lr = 0x8273CD8C;
	sub_822E2698(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cdb0
	if (ctx.cr6.eq) goto loc_8273CDB0;
loc_8273CD9C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273cdc0
	if (ctx.cr6.eq) goto loc_8273CDC0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273cd9c
	if (!ctx.cr6.eq) goto loc_8273CD9C;
loc_8273CDB0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8273cdd8
	if (ctx.cr6.eq) goto loc_8273CDD8;
loc_8273CDC0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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
loc_8273CDD8:
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

__attribute__((alias("__imp__sub_8273CDF0"))) PPC_WEAK_FUNC(sub_8273CDF0);
PPC_FUNC_IMPL(__imp__sub_8273CDF0) {
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
	// beq cr6,0x8273ce58
	if (ctx.cr6.eq) goto loc_8273CE58;
	// bl 0x822cffe0
	ctx.lr = 0x8273CE10;
	sub_822CFFE0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ce30
	if (ctx.cr6.eq) goto loc_8273CE30;
loc_8273CE1C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273ce40
	if (ctx.cr6.eq) goto loc_8273CE40;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273ce1c
	if (!ctx.cr6.eq) goto loc_8273CE1C;
loc_8273CE30:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273ce58
	if (ctx.cr6.eq) goto loc_8273CE58;
loc_8273CE40:
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
loc_8273CE58:
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

__attribute__((alias("__imp__sub_8273CE70"))) PPC_WEAK_FUNC(sub_8273CE70);
PPC_FUNC_IMPL(__imp__sub_8273CE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CE74"))) PPC_WEAK_FUNC(sub_8273CE74);
PPC_FUNC_IMPL(__imp__sub_8273CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CE78"))) PPC_WEAK_FUNC(sub_8273CE78);
PPC_FUNC_IMPL(__imp__sub_8273CE78) {
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
	// beq cr6,0x8273cee0
	if (ctx.cr6.eq) goto loc_8273CEE0;
	// bl 0x822e3a70
	ctx.lr = 0x8273CE98;
	sub_822E3A70(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ceb8
	if (ctx.cr6.eq) goto loc_8273CEB8;
loc_8273CEA4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273cec8
	if (ctx.cr6.eq) goto loc_8273CEC8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273cea4
	if (!ctx.cr6.eq) goto loc_8273CEA4;
loc_8273CEB8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273cee0
	if (ctx.cr6.eq) goto loc_8273CEE0;
loc_8273CEC8:
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
loc_8273CEE0:
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

__attribute__((alias("__imp__sub_8273CEF8"))) PPC_WEAK_FUNC(sub_8273CEF8);
PPC_FUNC_IMPL(__imp__sub_8273CEF8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273CF24;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_8273CF44"))) PPC_WEAK_FUNC(sub_8273CF44);
PPC_FUNC_IMPL(__imp__sub_8273CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CF48"))) PPC_WEAK_FUNC(sub_8273CF48);
PPC_FUNC_IMPL(__imp__sub_8273CF48) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273CF74;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8273CF9C"))) PPC_WEAK_FUNC(sub_8273CF9C);
PPC_FUNC_IMPL(__imp__sub_8273CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CFA0"))) PPC_WEAK_FUNC(sub_8273CFA0);
PPC_FUNC_IMPL(__imp__sub_8273CFA0) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8273CFCC;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8273CFF4"))) PPC_WEAK_FUNC(sub_8273CFF4);
PPC_FUNC_IMPL(__imp__sub_8273CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CFF8"))) PPC_WEAK_FUNC(sub_8273CFF8);
PPC_FUNC_IMPL(__imp__sub_8273CFF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-340
	ctx.r3.s64 = ctx.r3.s64 + -340;
	// b 0x82736030
	sub_82736030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D000"))) PPC_WEAK_FUNC(sub_8273D000);
PPC_FUNC_IMPL(__imp__sub_8273D000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D004"))) PPC_WEAK_FUNC(sub_8273D004);
PPC_FUNC_IMPL(__imp__sub_8273D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D008"))) PPC_WEAK_FUNC(sub_8273D008);
PPC_FUNC_IMPL(__imp__sub_8273D008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273D010;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-27648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27648);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d044
	if (!ctx.cr6.eq) goto loc_8273D044;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e4a88
	ctx.lr = 0x8273D038;
	sub_826E4A88(ctx, base);
	// stw r3,-27648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27648, ctx.r3.u32);
	// bl 0x826e4b48
	ctx.lr = 0x8273D040;
	sub_826E4B48(ctx, base);
	// lwz r3,-27648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27648);
loc_8273D044:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a8798
	ctx.lr = 0x8273D070;
	sub_822A8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D078"))) PPC_WEAK_FUNC(sub_8273D078);
PPC_FUNC_IMPL(__imp__sub_8273D078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D07C"))) PPC_WEAK_FUNC(sub_8273D07C);
PPC_FUNC_IMPL(__imp__sub_8273D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D080"))) PPC_WEAK_FUNC(sub_8273D080);
PPC_FUNC_IMPL(__imp__sub_8273D080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273D088;
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
	// ld r4,-2464(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2464);
	// bl 0x8229e490
	ctx.lr = 0x8273D0AC;
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
	ctx.lr = 0x8273D0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0D0"))) PPC_WEAK_FUNC(sub_8273D0D0);
PPC_FUNC_IMPL(__imp__sub_8273D0D0) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-25460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d108
	if (!ctx.cr6.eq) goto loc_8273D108;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82a11968
	ctx.lr = 0x8273D0FC;
	sub_82A11968(ctx, base);
	// stw r3,-25460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25460, ctx.r3.u32);
	// bl 0x82a11a18
	ctx.lr = 0x8273D104;
	sub_82A11A18(ctx, base);
	// lwz r3,-25460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25460);
loc_8273D108:
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

__attribute__((alias("__imp__sub_8273D11C"))) PPC_WEAK_FUNC(sub_8273D11C);
PPC_FUNC_IMPL(__imp__sub_8273D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D120"))) PPC_WEAK_FUNC(sub_8273D120);
PPC_FUNC_IMPL(__imp__sub_8273D120) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x8273d13c
	if (ctx.cr6.eq) goto loc_8273D13C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8273d140
	goto loc_8273D140;
loc_8273D13C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8273D140:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273d154
	if (ctx.cr6.eq) goto loc_8273D154;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8273d158
	goto loc_8273D158;
loc_8273D154:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8273D158:
	// b 0x82cb0328
	sub_82CB0328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D15C"))) PPC_WEAK_FUNC(sub_8273D15C);
PPC_FUNC_IMPL(__imp__sub_8273D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D160"))) PPC_WEAK_FUNC(sub_8273D160);
PPC_FUNC_IMPL(__imp__sub_8273D160) {
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
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d198
	if (ctx.cr6.eq) goto loc_8273D198;
	// bl 0x826279e0
	ctx.lr = 0x8273D184;
	sub_826279E0(ctx, base);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d198
	if (ctx.cr6.eq) goto loc_8273D198;
	// bl 0x82419a40
	ctx.lr = 0x8273D198;
	sub_82419A40(ctx, base);
loc_8273D198:
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

__attribute__((alias("__imp__sub_8273D1AC"))) PPC_WEAK_FUNC(sub_8273D1AC);
PPC_FUNC_IMPL(__imp__sub_8273D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D1B0"))) PPC_WEAK_FUNC(sub_8273D1B0);
PPC_FUNC_IMPL(__imp__sub_8273D1B0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// mulli r10,r4,237
	ctx.r10.s64 = ctx.r4.s64 * 237;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r4,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xoris r3,r6,37886
	ctx.r3.u64 = ctx.r6.u64 ^ 2482896896;
	// xori r3,r3,37582
	ctx.r3.u64 = ctx.r3.u64 ^ 37582;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D1D0"))) PPC_WEAK_FUNC(sub_8273D1D0);
PPC_FUNC_IMPL(__imp__sub_8273D1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8273D1D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273d344
	if (ctx.cr6.eq) goto loc_8273D344;
	// lwz r11,744(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273d344
	if (ctx.cr6.eq) goto loc_8273D344;
	// lwz r11,740(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 740);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273d344
	if (ctx.cr6.eq) goto loc_8273D344;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8273d22c
	if (ctx.cr6.gt) goto loc_8273D22C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8273d234
	goto loc_8273D234;
loc_8273D22C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8273D234:
	// lfs f0,1028(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8273d344
	if (!ctx.cr6.lt) goto loc_8273D344;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,14488
	ctx.r29.s64 = ctx.r11.s64 + 14488;
	// addi r28,r10,-12808
	ctx.r28.s64 = ctx.r10.s64 + -12808;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-24316
	ctx.r5.s64 = ctx.r11.s64 + -24316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823338c8
	ctx.lr = 0x8273D274;
	sub_823338C8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x8273d290
	if (!ctx.cr6.eq) goto loc_8273D290;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8273D290:
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82347258
	ctx.lr = 0x8273D298;
	sub_82347258(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273D2A0;
	sub_82299080(ctx, base);
	// lwz r11,924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 924);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273d2b8
	if (ctx.cr6.eq) goto loc_8273D2B8;
	// lwz r27,88(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x8273d2bc
	goto loc_8273D2BC;
loc_8273D2B8:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8273D2BC:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273d2d0
	if (ctx.cr6.eq) goto loc_8273D2D0;
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8273d2d4
	goto loc_8273D2D4;
loc_8273D2D0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8273D2D4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-24284
	ctx.r5.s64 = ctx.r11.s64 + -24284;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823338c8
	ctx.lr = 0x8273D2F4;
	sub_823338C8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273d308
	if (!ctx.cr6.eq) goto loc_8273D308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8273D308:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82347258
	ctx.lr = 0x8273D318;
	sub_82347258(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273D320;
	sub_82299080(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// lfs f1,-18312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18312);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273D344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273D344:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D34C"))) PPC_WEAK_FUNC(sub_8273D34C);
PPC_FUNC_IMPL(__imp__sub_8273D34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D350"))) PPC_WEAK_FUNC(sub_8273D350);
PPC_FUNC_IMPL(__imp__sub_8273D350) {
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
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,14864
	ctx.r7.s64 = ctx.r8.s64 + 14864;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r8,r6,-21072
	ctx.r8.s64 = ctx.r6.s64 + -21072;
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// addi r7,r5,-20700
	ctx.r7.s64 = ctx.r5.s64 + -20700;
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// addi r4,r6,11272
	ctx.r4.s64 = ctx.r6.s64 + 11272;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// bl 0x823bdf10
	ctx.lr = 0x8273D3C4;
	sub_823BDF10(ctx, base);
	// addi r3,r31,996
	ctx.r3.s64 = ctx.r31.s64 + 996;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bdf10
	ctx.lr = 0x8273D3D0;
	sub_823BDF10(ctx, base);
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

__attribute__((alias("__imp__sub_8273D3E8"))) PPC_WEAK_FUNC(sub_8273D3E8);
PPC_FUNC_IMPL(__imp__sub_8273D3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x8273D3F0;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8976(r1)
	ea = -8976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// bl 0x82307178
	ctx.lr = 0x8273D410;
	sub_82307178(ctx, base);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r20,r11,14488
	ctx.r20.s64 = ctx.r11.s64 + 14488;
	// lwz r11,-28808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273d43c
	if (!ctx.cr6.eq) goto loc_8273D43C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825ff3d0
	ctx.lr = 0x8273D430;
	sub_825FF3D0(ctx, base);
	// stw r3,-28808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28808, ctx.r3.u32);
	// bl 0x825ff490
	ctx.lr = 0x8273D438;
	sub_825FF490(ctx, base);
	// lwz r11,-28808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28808);
loc_8273D43C:
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,14476
	ctx.r27.s64 = ctx.r11.s64 + 14476;
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d46c
	if (!ctx.cr6.eq) goto loc_8273D46C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82398580
	ctx.lr = 0x8273D460;
	sub_82398580(ctx, base);
	// stw r3,-31632(r28)
	PPC_STORE_U32(ctx.r28.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8273D468;
	sub_82398640(ctx, base);
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
loc_8273D46C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4820
	ctx.r5.s64 = ctx.r11.s64 + -4820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0678
	ctx.lr = 0x8273D480;
	sub_822A0678(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d498
	if (ctx.cr6.eq) goto loc_8273D498;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x8273d49c
	goto loc_8273D49C;
loc_8273D498:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_8273D49C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b2f88
	ctx.lr = 0x8273D4A4;
	sub_822B2F88(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// addi r26,r11,-19580
	ctx.r26.s64 = ctx.r11.s64 + -19580;
	// addi r25,r10,-27584
	ctx.r25.s64 = ctx.r10.s64 + -27584;
	// addi r22,r9,11272
	ctx.r22.s64 = ctx.r9.s64 + 11272;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273d5cc
	if (ctx.cr6.eq) goto loc_8273D5CC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r29,r11,-24256
	ctx.r29.s64 = ctx.r11.s64 + -24256;
	// bne cr6,0x8273d4e8
	if (!ctx.cr6.eq) goto loc_8273D4E8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822960c0
	ctx.lr = 0x8273D4E4;
	sub_822960C0(ctx, base);
	// b 0x8273d50c
	goto loc_8273D50C;
loc_8273D4E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273d504
	if (!ctx.cr6.eq) goto loc_8273D504;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x8273D500;
	sub_822960C0(ctx, base);
	// b 0x8273d50c
	goto loc_8273D50C;
loc_8273D504:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8273D50C;
	sub_8233E1A0(ctx, base);
loc_8273D50C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8273d524
	if (!ctx.cr6.eq) goto loc_8273D524;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8273D524:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8273D52C;
	sub_82CB0328(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273d574
	if (ctx.cr6.eq) goto loc_8273D574;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273d5a4
	if (ctx.cr6.eq) goto loc_8273D5A4;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d554
	if (!ctx.cr6.eq) goto loc_8273D554;
	// bl 0x822900a0
	ctx.lr = 0x8273D550;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273D554:
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
	ctx.lr = 0x8273D570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273D574:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273d5a4
	if (ctx.cr6.eq) goto loc_8273D5A4;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d590
	if (!ctx.cr6.eq) goto loc_8273D590;
	// bl 0x822900a0
	ctx.lr = 0x8273D58C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273D590:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273D5A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273D5A4:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8273D5C0;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8273d4e8
	if (!ctx.cr6.eq) goto loc_8273D4E8;
loc_8273D5CC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-28608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273d5f0
	if (!ctx.cr6.eq) goto loc_8273D5F0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82606128
	ctx.lr = 0x8273D5E4;
	sub_82606128(ctx, base);
	// stw r3,-28608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28608, ctx.r3.u32);
	// bl 0x826061d8
	ctx.lr = 0x8273D5EC;
	sub_826061D8(ctx, base);
	// lwz r11,-28608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28608);
loc_8273D5F0:
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d614
	if (!ctx.cr6.eq) goto loc_8273D614;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82398580
	ctx.lr = 0x8273D608;
	sub_82398580(ctx, base);
	// stw r3,-31632(r28)
	PPC_STORE_U32(ctx.r28.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8273D610;
	sub_82398640(ctx, base);
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
loc_8273D614:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24244
	ctx.r5.s64 = ctx.r11.s64 + -24244;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0678
	ctx.lr = 0x8273D628;
	sub_822A0678(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d640
	if (ctx.cr6.eq) goto loc_8273D640;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x8273d644
	goto loc_8273D644;
loc_8273D640:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_8273D644:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b2f88
	ctx.lr = 0x8273D64C;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273d758
	if (ctx.cr6.eq) goto loc_8273D758;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r29,r11,-24208
	ctx.r29.s64 = ctx.r11.s64 + -24208;
	// bne cr6,0x8273d674
	if (!ctx.cr6.eq) goto loc_8273D674;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822960c0
	ctx.lr = 0x8273D670;
	sub_822960C0(ctx, base);
	// b 0x8273d698
	goto loc_8273D698;
loc_8273D674:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273d690
	if (!ctx.cr6.eq) goto loc_8273D690;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x8273D68C;
	sub_822960C0(ctx, base);
	// b 0x8273d698
	goto loc_8273D698;
loc_8273D690:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8273D698;
	sub_8233E1A0(ctx, base);
loc_8273D698:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8273d6b0
	if (!ctx.cr6.eq) goto loc_8273D6B0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8273D6B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8273D6B8;
	sub_82CB0328(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273d700
	if (ctx.cr6.eq) goto loc_8273D700;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273d730
	if (ctx.cr6.eq) goto loc_8273D730;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d6e0
	if (!ctx.cr6.eq) goto loc_8273D6E0;
	// bl 0x822900a0
	ctx.lr = 0x8273D6DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273D6E0:
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
	ctx.lr = 0x8273D6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273D700:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273d730
	if (ctx.cr6.eq) goto loc_8273D730;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d71c
	if (!ctx.cr6.eq) goto loc_8273D71C;
	// bl 0x822900a0
	ctx.lr = 0x8273D718;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273D71C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273D730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273D730:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8273D74C;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8273d674
	if (!ctx.cr6.eq) goto loc_8273D674;
loc_8273D758:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-27340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273d77c
	if (!ctx.cr6.eq) goto loc_8273D77C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82759ad0
	ctx.lr = 0x8273D770;
	sub_82759AD0(ctx, base);
	// stw r3,-27340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27340, ctx.r3.u32);
	// bl 0x82759b80
	ctx.lr = 0x8273D778;
	sub_82759B80(ctx, base);
	// lwz r11,-27340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27340);
loc_8273D77C:
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d7a0
	if (!ctx.cr6.eq) goto loc_8273D7A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82398580
	ctx.lr = 0x8273D794;
	sub_82398580(ctx, base);
	// stw r3,-31632(r28)
	PPC_STORE_U32(ctx.r28.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8273D79C;
	sub_82398640(ctx, base);
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
loc_8273D7A0:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24184
	ctx.r5.s64 = ctx.r11.s64 + -24184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0678
	ctx.lr = 0x8273D7B4;
	sub_822A0678(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d7cc
	if (ctx.cr6.eq) goto loc_8273D7CC;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x8273d7d0
	goto loc_8273D7D0;
loc_8273D7CC:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_8273D7D0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b2f88
	ctx.lr = 0x8273D7D8;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273d8e4
	if (ctx.cr6.eq) goto loc_8273D8E4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r29,r11,-24172
	ctx.r29.s64 = ctx.r11.s64 + -24172;
	// bne cr6,0x8273d800
	if (!ctx.cr6.eq) goto loc_8273D800;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822960c0
	ctx.lr = 0x8273D7FC;
	sub_822960C0(ctx, base);
	// b 0x8273d824
	goto loc_8273D824;
loc_8273D800:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273d81c
	if (!ctx.cr6.eq) goto loc_8273D81C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x8273D818;
	sub_822960C0(ctx, base);
	// b 0x8273d824
	goto loc_8273D824;
loc_8273D81C:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8273D824;
	sub_8233E1A0(ctx, base);
loc_8273D824:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8273d83c
	if (!ctx.cr6.eq) goto loc_8273D83C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8273D83C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8273D844;
	sub_82CB0328(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273d88c
	if (ctx.cr6.eq) goto loc_8273D88C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273d8bc
	if (ctx.cr6.eq) goto loc_8273D8BC;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d86c
	if (!ctx.cr6.eq) goto loc_8273D86C;
	// bl 0x822900a0
	ctx.lr = 0x8273D868;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273D86C:
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
	ctx.lr = 0x8273D888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273D88C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273d8bc
	if (ctx.cr6.eq) goto loc_8273D8BC;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d8a8
	if (!ctx.cr6.eq) goto loc_8273D8A8;
	// bl 0x822900a0
	ctx.lr = 0x8273D8A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273D8A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273D8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273D8BC:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8273D8D8;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8273d800
	if (!ctx.cr6.eq) goto loc_8273D800;
loc_8273D8E4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-27972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27972);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273d908
	if (!ctx.cr6.eq) goto loc_8273D908;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8267d920
	ctx.lr = 0x8273D8FC;
	sub_8267D920(ctx, base);
	// stw r3,-27972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27972, ctx.r3.u32);
	// bl 0x8267d9e0
	ctx.lr = 0x8273D904;
	sub_8267D9E0(ctx, base);
	// lwz r11,-27972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27972);
loc_8273D908:
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d92c
	if (!ctx.cr6.eq) goto loc_8273D92C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82398580
	ctx.lr = 0x8273D920;
	sub_82398580(ctx, base);
	// stw r3,-31632(r28)
	PPC_STORE_U32(ctx.r28.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8273D928;
	sub_82398640(ctx, base);
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
loc_8273D92C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1304
	ctx.r5.s64 = ctx.r11.s64 + -1304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0678
	ctx.lr = 0x8273D940;
	sub_822A0678(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273d958
	if (ctx.cr6.eq) goto loc_8273D958;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x8273d95c
	goto loc_8273D95C;
loc_8273D958:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_8273D95C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b2f88
	ctx.lr = 0x8273D964;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273da70
	if (ctx.cr6.eq) goto loc_8273DA70;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r29,r11,-24156
	ctx.r29.s64 = ctx.r11.s64 + -24156;
	// bne cr6,0x8273d98c
	if (!ctx.cr6.eq) goto loc_8273D98C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822960c0
	ctx.lr = 0x8273D988;
	sub_822960C0(ctx, base);
	// b 0x8273d9b0
	goto loc_8273D9B0;
loc_8273D98C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273d9a8
	if (!ctx.cr6.eq) goto loc_8273D9A8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x8273D9A4;
	sub_822960C0(ctx, base);
	// b 0x8273d9b0
	goto loc_8273D9B0;
loc_8273D9A8:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8273D9B0;
	sub_8233E1A0(ctx, base);
loc_8273D9B0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8273d9c8
	if (!ctx.cr6.eq) goto loc_8273D9C8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8273D9C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8273D9D0;
	sub_82CB0328(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273da18
	if (ctx.cr6.eq) goto loc_8273DA18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273da48
	if (ctx.cr6.eq) goto loc_8273DA48;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273d9f8
	if (!ctx.cr6.eq) goto loc_8273D9F8;
	// bl 0x822900a0
	ctx.lr = 0x8273D9F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273D9F8:
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
	ctx.lr = 0x8273DA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273DA18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273da48
	if (ctx.cr6.eq) goto loc_8273DA48;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273da34
	if (!ctx.cr6.eq) goto loc_8273DA34;
	// bl 0x822900a0
	ctx.lr = 0x8273DA30;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DA34:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273DA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273DA48:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8273DA64;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8273d98c
	if (!ctx.cr6.eq) goto loc_8273D98C;
loc_8273DA70:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-28912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273da94
	if (!ctx.cr6.eq) goto loc_8273DA94;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825ddb88
	ctx.lr = 0x8273DA88;
	sub_825DDB88(ctx, base);
	// stw r3,-28912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28912, ctx.r3.u32);
	// bl 0x825ddc48
	ctx.lr = 0x8273DA90;
	sub_825DDC48(ctx, base);
	// lwz r11,-28912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28912);
loc_8273DA94:
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273dab8
	if (!ctx.cr6.eq) goto loc_8273DAB8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82398580
	ctx.lr = 0x8273DAAC;
	sub_82398580(ctx, base);
	// stw r3,-31632(r28)
	PPC_STORE_U32(ctx.r28.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8273DAB4;
	sub_82398640(ctx, base);
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
loc_8273DAB8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24136
	ctx.r5.s64 = ctx.r11.s64 + -24136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0678
	ctx.lr = 0x8273DACC;
	sub_822A0678(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273dae4
	if (ctx.cr6.eq) goto loc_8273DAE4;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x8273dae8
	goto loc_8273DAE8;
loc_8273DAE4:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_8273DAE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b2f88
	ctx.lr = 0x8273DAF0;
	sub_822B2F88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r29,r11,-24092
	ctx.r29.s64 = ctx.r11.s64 + -24092;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273dbe8
	if (ctx.cr6.eq) goto loc_8273DBE8;
loc_8273DB04:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273db20
	if (!ctx.cr6.eq) goto loc_8273DB20;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x8273DB1C;
	sub_822960C0(ctx, base);
	// b 0x8273db28
	goto loc_8273DB28;
loc_8273DB20:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8273DB28;
	sub_8233E1A0(ctx, base);
loc_8273DB28:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8273db40
	if (!ctx.cr6.eq) goto loc_8273DB40;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8273DB40:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8273DB48;
	sub_82CB0328(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273db90
	if (ctx.cr6.eq) goto loc_8273DB90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273dbc0
	if (ctx.cr6.eq) goto loc_8273DBC0;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273db70
	if (!ctx.cr6.eq) goto loc_8273DB70;
	// bl 0x822900a0
	ctx.lr = 0x8273DB6C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DB70:
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
	ctx.lr = 0x8273DB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273DB90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273dbc0
	if (ctx.cr6.eq) goto loc_8273DBC0;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273dbac
	if (!ctx.cr6.eq) goto loc_8273DBAC;
	// bl 0x822900a0
	ctx.lr = 0x8273DBA8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DBAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273DBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273DBC0:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8273DBDC;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8273db04
	if (!ctx.cr6.eq) goto loc_8273DB04;
loc_8273DBE8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-27936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273dc0c
	if (!ctx.cr6.eq) goto loc_8273DC0C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82697a30
	ctx.lr = 0x8273DC00;
	sub_82697A30(ctx, base);
	// stw r3,-27936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27936, ctx.r3.u32);
	// bl 0x82697af0
	ctx.lr = 0x8273DC08;
	sub_82697AF0(ctx, base);
	// lwz r11,-27936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27936);
loc_8273DC0C:
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273dc30
	if (!ctx.cr6.eq) goto loc_8273DC30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82398580
	ctx.lr = 0x8273DC24;
	sub_82398580(ctx, base);
	// stw r3,-31632(r28)
	PPC_STORE_U32(ctx.r28.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x8273DC2C;
	sub_82398640(ctx, base);
	// lwz r3,-31632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31632);
loc_8273DC30:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0678
	ctx.lr = 0x8273DC40;
	sub_822A0678(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273dc58
	if (ctx.cr6.eq) goto loc_8273DC58;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x8273dc5c
	goto loc_8273DC5C;
loc_8273DC58:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_8273DC5C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b2f88
	ctx.lr = 0x8273DC64;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273dd70
	if (ctx.cr6.eq) goto loc_8273DD70;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r29,r11,-24064
	ctx.r29.s64 = ctx.r11.s64 + -24064;
	// bne cr6,0x8273dc8c
	if (!ctx.cr6.eq) goto loc_8273DC8C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822960c0
	ctx.lr = 0x8273DC88;
	sub_822960C0(ctx, base);
	// b 0x8273dcb0
	goto loc_8273DCB0;
loc_8273DC8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8273dca8
	if (!ctx.cr6.eq) goto loc_8273DCA8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822960c0
	ctx.lr = 0x8273DCA4;
	sub_822960C0(ctx, base);
	// b 0x8273dcb0
	goto loc_8273DCB0;
loc_8273DCA8:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8273DCB0;
	sub_8233E1A0(ctx, base);
loc_8273DCB0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8273dcc8
	if (!ctx.cr6.eq) goto loc_8273DCC8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8273DCC8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8273DCD0;
	sub_82CB0328(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273dd18
	if (ctx.cr6.eq) goto loc_8273DD18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273dd48
	if (ctx.cr6.eq) goto loc_8273DD48;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273dcf8
	if (!ctx.cr6.eq) goto loc_8273DCF8;
	// bl 0x822900a0
	ctx.lr = 0x8273DCF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DCF8:
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
	ctx.lr = 0x8273DD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273DD18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273dd48
	if (ctx.cr6.eq) goto loc_8273DD48;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273dd34
	if (!ctx.cr6.eq) goto loc_8273DD34;
	// bl 0x822900a0
	ctx.lr = 0x8273DD30;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DD34:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273DD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273DD48:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822b2f88
	ctx.lr = 0x8273DD64;
	sub_822B2F88(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8273dc8c
	if (!ctx.cr6.eq) goto loc_8273DC8C;
loc_8273DD70:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r26,-31884
	ctx.r26.s64 = -2089549824;
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// lwz r11,-3816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273de08
	if (ctx.cr6.eq) goto loc_8273DE08;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-31280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273ddac
	if (!ctx.cr6.eq) goto loc_8273DDAC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82418550
	ctx.lr = 0x8273DDA0;
	sub_82418550(ctx, base);
	// stw r3,-31280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31280, ctx.r3.u32);
	// bl 0x82418608
	ctx.lr = 0x8273DDA8;
	sub_82418608(ctx, base);
	// lwz r3,-31280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31280);
loc_8273DDAC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-24024
	ctx.r5.s64 = ctx.r11.s64 + -24024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7ae0
	ctx.lr = 0x8273DDC8;
	sub_822A7AE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28868);
	// lwz r4,25104(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25104);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x822a93e8
	ctx.lr = 0x8273DDF0;
	sub_822A93E8(ctx, base);
	// stw r3,736(r21)
	PPC_STORE_U32(ctx.r21.u32 + 736, ctx.r3.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273DE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273DE08:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r31,r11,-14100
	ctx.r31.s64 = ctx.r11.s64 + -14100;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// beq cr6,0x8273de68
	if (ctx.cr6.eq) goto loc_8273DE68;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273de48
	if (!ctx.cr6.eq) goto loc_8273DE48;
	// bl 0x822900a0
	ctx.lr = 0x8273DE44;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DE48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273DE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
loc_8273DE68:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8273de7c
	if (ctx.cr6.eq) goto loc_8273DE7C;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x8273DE7C;
	sub_82BEA998(ctx, base);
loc_8273DE7C:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r31,r11,-14040
	ctx.r31.s64 = ctx.r11.s64 + -14040;
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// beq cr6,0x8273dedc
	if (ctx.cr6.eq) goto loc_8273DEDC;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273debc
	if (!ctx.cr6.eq) goto loc_8273DEBC;
	// bl 0x822900a0
	ctx.lr = 0x8273DEB8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DEBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273DED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
loc_8273DEDC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8273def0
	if (ctx.cr6.eq) goto loc_8273DEF0;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x8273DEF0;
	sub_82BEA998(ctx, base);
loc_8273DEF0:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// addi r30,r11,-14076
	ctx.r30.s64 = ctx.r11.s64 + -14076;
	// lwz r10,-31536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31536);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// beq cr6,0x8273df60
	if (ctx.cr6.eq) goto loc_8273DF60;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273df34
	if (!ctx.cr6.eq) goto loc_8273DF34;
	// bl 0x822900a0
	ctx.lr = 0x8273DF30;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DF34:
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
	ctx.lr = 0x8273DF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// bl 0x82bea998
	ctx.lr = 0x8273DF60;
	sub_82BEA998(ctx, base);
loc_8273DF60:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// addi r31,r11,-14028
	ctx.r31.s64 = ctx.r11.s64 + -14028;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// beq cr6,0x8273dfcc
	if (ctx.cr6.eq) goto loc_8273DFCC;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273dfac
	if (!ctx.cr6.eq) goto loc_8273DFAC;
	// bl 0x822900a0
	ctx.lr = 0x8273DFA8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273DFAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273DFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
loc_8273DFCC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8273dfe0
	if (ctx.cr6.eq) goto loc_8273DFE0;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x8273DFE0;
	sub_82BEA998(ctx, base);
loc_8273DFE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,6512
	ctx.r5.s64 = ctx.r10.s64 + 6512;
	// addi r4,r9,-8912
	ctx.r4.s64 = ctx.r9.s64 + -8912;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823bf148
	ctx.lr = 0x8273E000;
	sub_823BF148(ctx, base);
	// lwz r8,736(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 736);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r27,r11,25392
	ctx.r27.s64 = ctx.r11.s64 + 25392;
	// beq cr6,0x8273e2dc
	if (ctx.cr6.eq) goto loc_8273E2DC;
	// lwz r3,184(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 184);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// bne cr6,0x8273e030
	if (!ctx.cr6.eq) goto loc_8273E030;
	// lwz r4,25104(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25104);
loc_8273E030:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x822a93e8
	ctx.lr = 0x8273E04C;
	sub_822A93E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,752(r21)
	PPC_STORE_U32(ctx.r21.u32 + 752, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8273e324
	if (ctx.cr6.eq) goto loc_8273E324;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r29,736(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 736);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r11,-23960
	ctx.r31.s64 = ctx.r11.s64 + -23960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8232f858
	ctx.lr = 0x8273E074;
	sub_8232F858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273e098
	if (ctx.cr6.eq) goto loc_8273E098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8273E088;
	sub_82CB0EC8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb2688
	ctx.lr = 0x8273E094;
	sub_82CB2688(ctx, base);
	// stw r3,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r3.u32);
loc_8273E098:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r29,736(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 736);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r11,-23948
	ctx.r31.s64 = ctx.r11.s64 + -23948;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8232f858
	ctx.lr = 0x8273E0B0;
	sub_8232F858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273e0d4
	if (ctx.cr6.eq) goto loc_8273E0D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8273E0C4;
	sub_82CB0EC8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb2688
	ctx.lr = 0x8273E0D0;
	sub_82CB2688(ctx, base);
	// stw r3,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r3.u32);
loc_8273E0D4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-23936
	ctx.r4.s64 = ctx.r11.s64 + -23936;
	// bl 0x823329d8
	ctx.lr = 0x8273E0E4;
	sub_823329D8(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r10,-23916
	ctx.r4.s64 = ctx.r10.s64 + -23916;
	// addi r30,r28,60
	ctx.r30.s64 = ctx.r28.s64 + 60;
	// bl 0x82294d90
	ctx.lr = 0x8273E0F8;
	sub_82294D90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r4,r8,-12776
	ctx.r4.s64 = ctx.r8.s64 + -12776;
	// addi r6,r9,-23688
	ctx.r6.s64 = ctx.r9.s64 + -23688;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823338c8
	ctx.lr = 0x8273E11C;
	sub_823338C8(ctx, base);
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8273e160
	if (ctx.cr6.eq) goto loc_8273E160;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273e160
	if (ctx.cr6.eq) goto loc_8273E160;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e14c
	if (!ctx.cr6.eq) goto loc_8273E14C;
	// bl 0x822900a0
	ctx.lr = 0x8273E148;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E14C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E160:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne cr6,0x8273e178
	if (!ctx.cr6.eq) goto loc_8273E178;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_8273E178:
	// lwz r3,736(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 736);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r6,84(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E19C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8273e1e8
	if (ctx.cr6.eq) goto loc_8273E1E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273e218
	if (ctx.cr6.eq) goto loc_8273E218;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e1c8
	if (!ctx.cr6.eq) goto loc_8273E1C8;
	// bl 0x822900a0
	ctx.lr = 0x8273E1C4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E1C8:
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
	ctx.lr = 0x8273E1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273E1E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273e218
	if (ctx.cr6.eq) goto loc_8273E218;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e204
	if (!ctx.cr6.eq) goto loc_8273E204;
	// bl 0x822900a0
	ctx.lr = 0x8273E200;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E204:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E218:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827485b8
	ctx.lr = 0x8273E244;
	sub_827485B8(ctx, base);
	// lwz r3,752(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 752);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273E25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8273e2a8
	if (ctx.cr6.eq) goto loc_8273E2A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273e338
	if (ctx.cr6.eq) goto loc_8273E338;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e288
	if (!ctx.cr6.eq) goto loc_8273E288;
	// bl 0x822900a0
	ctx.lr = 0x8273E284;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E288:
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
	ctx.lr = 0x8273E2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8273E2A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273e338
	if (ctx.cr6.eq) goto loc_8273E338;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e2c4
	if (!ctx.cr6.eq) goto loc_8273E2C4;
	// bl 0x822900a0
	ctx.lr = 0x8273E2C0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E2C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8273e338
	goto loc_8273E338;
loc_8273E2DC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-27768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e300
	if (!ctx.cr6.eq) goto loc_8273E300;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x826cc410
	ctx.lr = 0x8273E2F4;
	sub_826CC410(ctx, base);
	// stw r3,-27768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27768, ctx.r3.u32);
	// bl 0x826cc4d0
	ctx.lr = 0x8273E2FC;
	sub_826CC4D0(ctx, base);
	// lwz r3,-27768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27768);
loc_8273E300:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82396ef8
	ctx.lr = 0x8273E308;
	sub_82396EF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273e324
	if (ctx.cr6.eq) goto loc_8273E324;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E324:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E338:
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// li r5,8190
	ctx.r5.s64 = 8190;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r3,r1,674
	ctx.r3.s64 = ctx.r1.s64 + 674;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// sth r11,672(r1)
	PPC_STORE_U16(ctx.r1.u32 + 672, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x8273E35C;
	sub_82CB16F0(ctx, base);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823332d8
	ctx.lr = 0x8273E374;
	sub_823332D8(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-14064
	ctx.r28.s64 = ctx.r11.s64 + -14064;
	// beq cr6,0x8273e390
	if (ctx.cr6.eq) goto loc_8273E390;
	// lhz r10,672(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 672);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x8273e3b0
	if (!ctx.cr6.eq) goto loc_8273E3B0;
loc_8273E390:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e3a4
	if (ctx.cr6.eq) goto loc_8273E3A4;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8273e3a8
	goto loc_8273E3A8;
loc_8273E3A4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8273E3A8:
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82cafc18
	ctx.lr = 0x8273E3B0;
	sub_82CAFC18(ctx, base);
loc_8273E3B0:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x823be038
	ctx.lr = 0x8273E3C4;
	sub_823BE038(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// beq cr6,0x8273e42c
	if (ctx.cr6.eq) goto loc_8273E42C;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e3f4
	if (!ctx.cr6.eq) goto loc_8273E3F4;
	// bl 0x822900a0
	ctx.lr = 0x8273E3F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E3F4:
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
	ctx.lr = 0x8273E410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e42c
	if (ctx.cr6.eq) goto loc_8273E42C;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82bea998
	ctx.lr = 0x8273E42C;
	sub_82BEA998(ctx, base);
loc_8273E42C:
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r23,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// beq cr6,0x8273e494
	if (ctx.cr6.eq) goto loc_8273E494;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e45c
	if (!ctx.cr6.eq) goto loc_8273E45C;
	// bl 0x822900a0
	ctx.lr = 0x8273E458;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E45C:
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
	ctx.lr = 0x8273E478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e494
	if (ctx.cr6.eq) goto loc_8273E494;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82bea998
	ctx.lr = 0x8273E494;
	sub_82BEA998(ctx, base);
loc_8273E494:
	// lwz r30,352(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r23,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r23.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// beq cr6,0x8273e508
	if (ctx.cr6.eq) goto loc_8273E508;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e4d0
	if (!ctx.cr6.eq) goto loc_8273E4D0;
	// bl 0x822900a0
	ctx.lr = 0x8273E4CC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E4D0:
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
	ctx.lr = 0x8273E4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e508
	if (ctx.cr6.eq) goto loc_8273E508;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bea998
	ctx.lr = 0x8273E508;
	sub_82BEA998(ctx, base);
loc_8273E508:
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8233a320
	ctx.lr = 0x8273E514;
	sub_8233A320(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// beq cr6,0x8273e57c
	if (ctx.cr6.eq) goto loc_8273E57C;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e544
	if (!ctx.cr6.eq) goto loc_8273E544;
	// bl 0x822900a0
	ctx.lr = 0x8273E540;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E544:
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
	ctx.lr = 0x8273E560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e57c
	if (ctx.cr6.eq) goto loc_8273E57C;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82bea998
	ctx.lr = 0x8273E57C;
	sub_82BEA998(ctx, base);
loc_8273E57C:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r10,384(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r9,352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273E5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e774
	if (!ctx.cr6.eq) goto loc_8273E774;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e5bc
	if (ctx.cr6.eq) goto loc_8273E5BC;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8273e5c0
	goto loc_8273E5C0;
loc_8273E5BC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8273E5C0:
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82cb0328
	ctx.lr = 0x8273E5C8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273e774
	if (ctx.cr6.eq) goto loc_8273E774;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e5e4
	if (ctx.cr6.eq) goto loc_8273E5E4;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8273e5e8
	goto loc_8273E5E8;
loc_8273E5E4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8273E5E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x8273e5f8
	if (!ctx.cr6.eq) goto loc_8273E5F8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8273E5F8:
	// bl 0x82cb0328
	ctx.lr = 0x8273E5FC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273e670
	if (ctx.cr6.eq) goto loc_8273E670;
	// li r19,1
	ctx.r19.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bne cr6,0x8273e618
	if (!ctx.cr6.eq) goto loc_8273E618;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8273E618:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-23908
	ctx.r5.s64 = ctx.r11.s64 + -23908;
	// addi r4,r10,-12824
	ctx.r4.s64 = ctx.r10.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823338c8
	ctx.lr = 0x8273E63C;
	sub_823338C8(ctx, base);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8273e654
	if (!ctx.cr6.eq) goto loc_8273E654;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8273E654:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822bc6c8
	ctx.lr = 0x8273E660;
	sub_822BC6C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e674
	if (!ctx.cr6.eq) goto loc_8273E674;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8273e678
	goto loc_8273E678;
loc_8273E670:
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8273E674:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8273E678:
	// clrlwi r10,r19,31
	ctx.r10.u64 = ctx.r19.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273e700
	if (ctx.cr6.eq) goto loc_8273E700;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e6d0
	if (ctx.cr6.eq) goto loc_8273E6D0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273e700
	if (ctx.cr6.eq) goto loc_8273E700;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e6b0
	if (!ctx.cr6.eq) goto loc_8273E6B0;
	// bl 0x822900a0
	ctx.lr = 0x8273E6AC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E6B0:
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
	ctx.lr = 0x8273E6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8273E6D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273e700
	if (ctx.cr6.eq) goto loc_8273E700;
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273e6ec
	if (!ctx.cr6.eq) goto loc_8273E6EC;
	// bl 0x822900a0
	ctx.lr = 0x8273E6E8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E6EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E700:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273e72c
	if (ctx.cr6.eq) goto loc_8273E72C;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r11,-3768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3768, ctx.r11.u32);
	// bl 0x82295d40
	ctx.lr = 0x8273E720;
	sub_82295D40(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x8273e784
	goto loc_8273E784;
loc_8273E72C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e740
	if (ctx.cr6.eq) goto loc_8273E740;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8273e744
	goto loc_8273E744;
loc_8273E740:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_8273E744:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r30,r1,136
	ctx.r30.s64 = ctx.r1.s64 + 136;
	// bl 0x823be038
	ctx.lr = 0x8273E75C;
	sub_823BE038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273E774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E774:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82295d40
	ctx.lr = 0x8273E77C;
	sub_82295D40(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8273E784:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// beq cr6,0x8273e7d8
	if (ctx.cr6.eq) goto loc_8273E7D8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// beq cr6,0x8273e810
	if (ctx.cr6.eq) goto loc_8273E810;
	// lwz r11,28888(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273e7b4
	if (!ctx.cr6.eq) goto loc_8273E7B4;
	// bl 0x822900a0
	ctx.lr = 0x8273E7B0;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E7B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273E7D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
loc_8273E7D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273e810
	if (ctx.cr6.eq) goto loc_8273E810;
	// lwz r11,28888(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273e7f8
	if (!ctx.cr6.eq) goto loc_8273E7F8;
	// bl 0x822900a0
	ctx.lr = 0x8273E7F4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28888);
loc_8273E7F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273E810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E810:
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// bl 0x82295d40
	ctx.lr = 0x8273E824;
	sub_82295D40(ctx, base);
	// addi r1,r1,8976
	ctx.r1.s64 = ctx.r1.s64 + 8976;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E82C"))) PPC_WEAK_FUNC(sub_8273E82C);
PPC_FUNC_IMPL(__imp__sub_8273E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273E830"))) PPC_WEAK_FUNC(sub_8273E830);
PPC_FUNC_IMPL(__imp__sub_8273E830) {
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
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273e85c
	if (ctx.cr6.eq) goto loc_8273E85C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273E85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273E85C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273e8c4
	if (ctx.cr6.eq) goto loc_8273E8C4;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8273e884
	if (ctx.cr6.gt) goto loc_8273E884;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8273e88c
	goto loc_8273E88C;
loc_8273E884:
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8273E88C:
	// lwz r3,980(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273e8a0
	if (ctx.cr6.eq) goto loc_8273E8A0;
	// bl 0x82748558
	ctx.lr = 0x8273E89C;
	sub_82748558(ctx, base);
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
loc_8273E8A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824204e0
	ctx.lr = 0x8273E8B0;
	sub_824204E0(ctx, base);
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// bl 0x8236b018
	ctx.lr = 0x8273E8B8;
	sub_8236B018(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// bl 0x82421118
	ctx.lr = 0x8273E8C4;
	sub_82421118(ctx, base);
loc_8273E8C4:
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

__attribute__((alias("__imp__sub_8273E8D8"))) PPC_WEAK_FUNC(sub_8273E8D8);
PPC_FUNC_IMPL(__imp__sub_8273E8D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82309818
	sub_82309818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E8DC"))) PPC_WEAK_FUNC(sub_8273E8DC);
PPC_FUNC_IMPL(__imp__sub_8273E8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273E8E0"))) PPC_WEAK_FUNC(sub_8273E8E0);
PPC_FUNC_IMPL(__imp__sub_8273E8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8273E8E8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e9b0
	if (ctx.cr6.eq) goto loc_8273E9B0;
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8273e9b0
	if (ctx.cr6.eq) goto loc_8273E9B0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822960c0
	ctx.lr = 0x8273E924;
	sub_822960C0(ctx, base);
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// li r31,255
	ctx.r31.s64 = 255;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// bl 0x82748468
	ctx.lr = 0x8273E954;
	sub_82748468(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x8273E95C;
	sub_82299080(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822960c0
	ctx.lr = 0x8273E968;
	sub_822960C0(ctx, base);
	// lwz r9,740(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,64(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// bl 0x82748468
	ctx.lr = 0x8273E994;
	sub_82748468(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x8273E99C;
	sub_82299080(ctx, base);
	// lwz r7,740(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,64(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// bl 0x82748410
	ctx.lr = 0x8273E9B0;
	sub_82748410(ctx, base);
loc_8273E9B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E9BC"))) PPC_WEAK_FUNC(sub_8273E9BC);
PPC_FUNC_IMPL(__imp__sub_8273E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273E9C0"))) PPC_WEAK_FUNC(sub_8273E9C0);
PPC_FUNC_IMPL(__imp__sub_8273E9C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273EA00"))) PPC_WEAK_FUNC(sub_8273EA00);
PPC_FUNC_IMPL(__imp__sub_8273EA00) {
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
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x822b41e8
	ctx.lr = 0x8273EA1C;
	sub_822B41E8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x822b41e8
	ctx.lr = 0x8273EA24;
	sub_822B41E8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822b41e8
	ctx.lr = 0x8273EA2C;
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

__attribute__((alias("__imp__sub_8273EA40"))) PPC_WEAK_FUNC(sub_8273EA40);
PPC_FUNC_IMPL(__imp__sub_8273EA40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273EA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,204(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273EA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r30.s64;
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

__attribute__((alias("__imp__sub_8273EA9C"))) PPC_WEAK_FUNC(sub_8273EA9C);
PPC_FUNC_IMPL(__imp__sub_8273EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273EAA0"))) PPC_WEAK_FUNC(sub_8273EAA0);
PPC_FUNC_IMPL(__imp__sub_8273EAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8273EAA8;
	__savegprlr_21(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r11.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r4,r11,-23860
	ctx.r4.s64 = ctx.r11.s64 + -23860;
	// bl 0x82333168
	ctx.lr = 0x8273EAD0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23832
	ctx.r4.s64 = ctx.r11.s64 + -23832;
	// bl 0x82333168
	ctx.lr = 0x8273EAE8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273ee68
	if (ctx.cr6.eq) goto loc_8273EE68;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273eb30
	if (ctx.cr6.eq) goto loc_8273EB30;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273eb30
	if (ctx.cr6.eq) goto loc_8273EB30;
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273eb30
	if (ctx.cr6.eq) goto loc_8273EB30;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lwz r11,19200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,19200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19200, ctx.r11.u32);
loc_8273EB30:
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r26,868
	ctx.r4.s64 = ctx.r26.s64 + 868;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823be038
	ctx.lr = 0x8273EB48;
	sub_823BE038(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823bedc8
	ctx.lr = 0x8273EB50;
	sub_823BEDC8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273ec20
	if (ctx.cr6.eq) goto loc_8273EC20;
	// lwz r30,272(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r29,268(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stw r23,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r23.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r23,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r23.u32);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x8273eb88
	if (!ctx.cr6.eq) goto loc_8273EB88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8273EB88:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,30976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30976);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273EBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273ec18
	if (!ctx.cr6.eq) goto loc_8273EC18;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x8273ebc8
	if (!ctx.cr6.eq) goto loc_8273EBC8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8273EBC8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-23816
	ctx.r4.s64 = ctx.r11.s64 + -23816;
	// bl 0x8232d178
	ctx.lr = 0x8273EBD8;
	sub_8232D178(ctx, base);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-25448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ebfc
	if (ctx.cr6.eq) goto loc_8273EBFC;
	// lis r9,-31886
	ctx.r9.s64 = -2089680896;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// stb r10,-22329(r9)
	PPC_STORE_U8(ctx.r9.u32 + -22329, ctx.r10.u8);
loc_8273EBFC:
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82299080
	ctx.lr = 0x8273EC04;
	sub_82299080(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82295d40
	ctx.lr = 0x8273EC0C;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273EC18:
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82299080
	ctx.lr = 0x8273EC20;
	sub_82299080(ctx, base);
loc_8273EC20:
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ec4c
	if (ctx.cr6.eq) goto loc_8273EC4C;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ec4c
	if (ctx.cr6.eq) goto loc_8273EC4C;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273ec4c
	if (ctx.cr6.eq) goto loc_8273EC4C;
	// lwz r31,160(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
loc_8273EC4C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,7092
	ctx.r4.s64 = ctx.r11.s64 + 7092;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r30,r1,136
	ctx.r30.s64 = ctx.r1.s64 + 136;
	// bl 0x8233e028
	ctx.lr = 0x8273EC6C;
	sub_8233E028(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x82544158
	ctx.lr = 0x8273EC7C;
	sub_82544158(ctx, base);
	// bl 0x82747268
	ctx.lr = 0x8273EC80;
	sub_82747268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273ee2c
	if (ctx.cr6.eq) goto loc_8273EE2C;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8233c740
	ctx.lr = 0x8273EC9C;
	sub_8233C740(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x822bbe90
	ctx.lr = 0x8273ECA8;
	sub_822BBE90(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23744
	ctx.r4.s64 = ctx.r11.s64 + -23744;
	// bl 0x82295680
	ctx.lr = 0x8273ECB8;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b21c0
	ctx.lr = 0x8273ECC4;
	sub_822B21C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273ECD0;
	sub_82299080(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8273ee04
	if (!ctx.cr6.eq) goto loc_8273EE04;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23732
	ctx.r4.s64 = ctx.r11.s64 + -23732;
	// bl 0x82295680
	ctx.lr = 0x8273ECE8;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b21c0
	ctx.lr = 0x8273ECF4;
	sub_822B21C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273ED00;
	sub_82299080(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273ed10
	if (ctx.cr6.eq) goto loc_8273ED10;
	// stb r21,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r21.u8);
	// b 0x8273ee08
	goto loc_8273EE08;
loc_8273ED10:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23716
	ctx.r4.s64 = ctx.r11.s64 + -23716;
	// bl 0x82295680
	ctx.lr = 0x8273ED20;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b21c0
	ctx.lr = 0x8273ED2C;
	sub_822B21C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273ED38;
	sub_82299080(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273ed4c
	if (ctx.cr6.eq) goto loc_8273ED4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r11.u8);
	// b 0x8273ee08
	goto loc_8273EE08;
loc_8273ED4C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23704
	ctx.r4.s64 = ctx.r11.s64 + -23704;
	// bl 0x82295680
	ctx.lr = 0x8273ED5C;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b21c0
	ctx.lr = 0x8273ED68;
	sub_822B21C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273ED74;
	sub_82299080(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273ed88
	if (ctx.cr6.eq) goto loc_8273ED88;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r11.u8);
	// b 0x8273ee08
	goto loc_8273EE08;
loc_8273ED88:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23692
	ctx.r4.s64 = ctx.r11.s64 + -23692;
	// bl 0x82295680
	ctx.lr = 0x8273ED98;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b21c0
	ctx.lr = 0x8273EDA4;
	sub_822B21C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273EDB0;
	sub_82299080(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273edc4
	if (ctx.cr6.eq) goto loc_8273EDC4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r11.u8);
	// b 0x8273ee08
	goto loc_8273EE08;
loc_8273EDC4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23680
	ctx.r4.s64 = ctx.r11.s64 + -23680;
	// bl 0x82295680
	ctx.lr = 0x8273EDD4;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b21c0
	ctx.lr = 0x8273EDE0;
	sub_822B21C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273EDEC;
	sub_82299080(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273ee00
	if (ctx.cr6.eq) goto loc_8273EE00;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r11.u8);
	// b 0x8273ee08
	goto loc_8273EE08;
loc_8273EE00:
	// stb r21,449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 449, ctx.r21.u8);
loc_8273EE04:
	// stb r23,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r23.u8);
loc_8273EE08:
	// lbz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 448);
	// lbz r10,449(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 449);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8273ee24
	if (ctx.cr6.lt) goto loc_8273EE24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 449, ctx.r11.u8);
loc_8273EE24:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82299080
	ctx.lr = 0x8273EE2C;
	sub_82299080(ctx, base);
loc_8273EE2C:
	// lwz r11,-60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// addi r3,r26,-60
	ctx.r3.s64 = ctx.r26.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273EE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31886
	ctx.r9.s64 = -2089680896;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r11,-22329(r9)
	PPC_STORE_U8(ctx.r9.u32 + -22329, ctx.r11.u8);
	// bl 0x82295d40
	ctx.lr = 0x8273EE5C;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273EE68:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23668
	ctx.r4.s64 = ctx.r11.s64 + -23668;
	// bl 0x82333168
	ctx.lr = 0x8273EE78;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273eea0
	if (ctx.cr6.eq) goto loc_8273EEA0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,18884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18884);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,18884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18884, ctx.r11.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273EEA0:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23648
	ctx.r4.s64 = ctx.r11.s64 + -23648;
	// bl 0x82333168
	ctx.lr = 0x8273EEB0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f000
	if (ctx.cr6.eq) goto loc_8273F000;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r26,868
	ctx.r4.s64 = ctx.r26.s64 + 868;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823be038
	ctx.lr = 0x8273EECC;
	sub_823BE038(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823bedc8
	ctx.lr = 0x8273EED4;
	sub_823BEDC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273efec
	if (ctx.cr6.eq) goto loc_8273EFEC;
	// lwz r30,272(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r29,268(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r23,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r23.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r23,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r23.u32);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// stw r23,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x8273ef0c
	if (!ctx.cr6.eq) goto loc_8273EF0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8273EF0C:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,360
	ctx.r6.s64 = ctx.r1.s64 + 360;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,30976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30976);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273EF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273efc4
	if (ctx.cr6.eq) goto loc_8273EFC4;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// bne cr6,0x8273ef58
	if (!ctx.cr6.eq) goto loc_8273EF58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8273EF58:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8233e028
	ctx.lr = 0x8273EF6C;
	sub_8233E028(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822adb18
	ctx.lr = 0x8273EF78;
	sub_822ADB18(ctx, base);
	// addi r31,r26,-60
	ctx.r31.s64 = ctx.r26.s64 + -60;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82742ca8
	ctx.lr = 0x8273EF88;
	sub_82742CA8(ctx, base);
	// lwz r10,1072(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1072);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r10,r11,31,0,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0xE0000000) | (ctx.r10.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r10,1072(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1072, ctx.r10.u32);
	// bl 0x827430b8
	ctx.lr = 0x8273EFA0;
	sub_827430B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c58f0
	ctx.lr = 0x8273EFA8;
	sub_822C58F0(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82299080
	ctx.lr = 0x8273EFB0;
	sub_82299080(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82295d40
	ctx.lr = 0x8273EFB8;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273EFC4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x8273efd4
	if (!ctx.cr6.eq) goto loc_8273EFD4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8273EFD4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-23816
	ctx.r4.s64 = ctx.r11.s64 + -23816;
	// bl 0x8232d178
	ctx.lr = 0x8273EFE4;
	sub_8232D178(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82299080
	ctx.lr = 0x8273EFEC;
	sub_82299080(ctx, base);
loc_8273EFEC:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82295d40
	ctx.lr = 0x8273EFF4;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F000:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-21276
	ctx.r4.s64 = ctx.r11.s64 + -21276;
	// bl 0x82333168
	ctx.lr = 0x8273F010;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f114
	if (ctx.cr6.eq) goto loc_8273F114;
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r26,868
	ctx.r4.s64 = ctx.r26.s64 + 868;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823be038
	ctx.lr = 0x8273F030;
	sub_823BE038(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823bedc8
	ctx.lr = 0x8273F038;
	sub_823BEDC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f0e4
	if (ctx.cr6.eq) goto loc_8273F0E4;
	// lwz r30,272(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r29,268(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r23,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r23.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r23,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r23.u32);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x8273f070
	if (!ctx.cr6.eq) goto loc_8273F070;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8273F070:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,30976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30976);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273F098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273f0dc
	if (!ctx.cr6.eq) goto loc_8273F0DC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x8273f0b0
	if (!ctx.cr6.eq) goto loc_8273F0B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8273F0B0:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-23816
	ctx.r4.s64 = ctx.r11.s64 + -23816;
	// bl 0x8232d178
	ctx.lr = 0x8273F0C0;
	sub_8232D178(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82299080
	ctx.lr = 0x8273F0C8;
	sub_82299080(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82295d40
	ctx.lr = 0x8273F0D0;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F0DC:
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82299080
	ctx.lr = 0x8273F0E4;
	sub_82299080(ctx, base);
loc_8273F0E4:
	// lwz r11,-60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// addi r3,r26,-60
	ctx.r3.s64 = ctx.r26.s64 + -60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273F100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82295d40
	ctx.lr = 0x8273F108;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F114:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23512
	ctx.r4.s64 = ctx.r11.s64 + -23512;
	// bl 0x82333168
	ctx.lr = 0x8273F124;
	sub_82333168(ctx, base);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f1b4
	if (ctx.cr6.eq) goto loc_8273F1B4;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273f150
	if (ctx.cr6.eq) goto loc_8273F150;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273f1b4
	if (!ctx.cr6.eq) goto loc_8273F1B4;
loc_8273F150:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822960c0
	ctx.lr = 0x8273F15C;
	sub_822960C0(ctx, base);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8273f190
	if (ctx.cr6.gt) goto loc_8273F190;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82748308
	ctx.lr = 0x8273F17C;
	sub_82748308(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F184;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F190:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82748308
	ctx.lr = 0x8273F1A0;
	sub_82748308(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F1A8;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F1B4:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273f254
	if (ctx.cr6.eq) goto loc_8273F254;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273f254
	if (!ctx.cr6.eq) goto loc_8273F254;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23484
	ctx.r4.s64 = ctx.r11.s64 + -23484;
	// bl 0x82333168
	ctx.lr = 0x8273F1E4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f254
	if (ctx.cr6.eq) goto loc_8273F254;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
	// bl 0x822960c0
	ctx.lr = 0x8273F1FC;
	sub_822960C0(ctx, base);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8273f224
	if (ctx.cr6.gt) goto loc_8273F224;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8273f22c
	goto loc_8273F22C;
loc_8273F224:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8273F22C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x82748208
	ctx.lr = 0x8273F240;
	sub_82748208(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F248;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F254:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23476
	ctx.r4.s64 = ctx.r11.s64 + -23476;
	// bl 0x82333168
	ctx.lr = 0x8273F264;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f398
	if (ctx.cr6.eq) goto loc_8273F398;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r26,868
	ctx.r31.s64 = ctx.r26.s64 + 868;
	// addi r4,r11,18180
	ctx.r4.s64 = ctx.r11.s64 + 18180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823bef80
	ctx.lr = 0x8273F288;
	sub_823BEF80(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-23452
	ctx.r4.s64 = ctx.r10.s64 + -23452;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bef80
	ctx.lr = 0x8273F2A0;
	sub_823BEF80(ctx, base);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8273f304
	if (ctx.cr6.eq) goto loc_8273F304;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273f304
	if (ctx.cr6.eq) goto loc_8273F304;
	// lwz r10,3768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3768);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273f304
	if (ctx.cr6.eq) goto loc_8273F304;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,3768(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3768);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273F2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r7,208(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r3,80(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,292(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 292);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8273F304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273F304:
	// lwz r10,864(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 864);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273f36c
	if (ctx.cr6.eq) goto loc_8273F36C;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273f36c
	if (ctx.cr6.eq) goto loc_8273F36C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273f36c
	if (ctx.cr6.eq) goto loc_8273F36C;
	// lwz r11,3768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273f36c
	if (ctx.cr6.eq) goto loc_8273F36C;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,3768(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3768);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273F350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,864(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 864);
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// lwz r3,80(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,292(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8273F36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273F36C:
	// lwz r11,-60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r26,-60
	ctx.r3.s64 = ctx.r26.s64 + -60;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,18648
	ctx.r4.s64 = ctx.r10.s64 + 18648;
	// lwz r9,276(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273F38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F398:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23444
	ctx.r4.s64 = ctx.r11.s64 + -23444;
	// bl 0x82333168
	ctx.lr = 0x8273F3A8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f440
	if (ctx.cr6.eq) goto loc_8273F440;
	// lwz r11,1000(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740700
	if (ctx.cr6.eq) goto loc_82740700;
	// lwz r10,952(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 952);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273f3d8
	if (ctx.cr6.eq) goto loc_8273F3D8;
	// lwz r3,948(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 948);
	// b 0x8273f3dc
	goto loc_8273F3DC;
loc_8273F3D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8273F3DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8273F3E4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82740700
	if (ctx.cr6.eq) goto loc_82740700;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r26,936
	ctx.r4.s64 = ctx.r26.s64 + 936;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823beb78
	ctx.lr = 0x8273F3FC;
	sub_823BEB78(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273f410
	if (ctx.cr6.eq) goto loc_8273F410;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8273f414
	goto loc_8273F414;
loc_8273F410:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8273F414:
	// lwz r11,-60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// addi r3,r26,-60
	ctx.r3.s64 = ctx.r26.s64 + -60;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273F42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F434;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F440:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-10680
	ctx.r4.s64 = ctx.r11.s64 + -10680;
	// bl 0x82333168
	ctx.lr = 0x8273F450;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827405a0
	if (!ctx.cr6.eq) goto loc_827405A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-10668
	ctx.r4.s64 = ctx.r11.s64 + -10668;
	// bl 0x82333168
	ctx.lr = 0x8273F468;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827405a0
	if (!ctx.cr6.eq) goto loc_827405A0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23424
	ctx.r4.s64 = ctx.r11.s64 + -23424;
	// bl 0x82333168
	ctx.lr = 0x8273F480;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f4cc
	if (ctx.cr6.eq) goto loc_8273F4CC;
	// lwz r10,-60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r26,-60
	ctx.r3.s64 = ctx.r26.s64 + -60;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,284(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273F4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r8,23508
	ctx.r4.s64 = ctx.r8.s64 + 23508;
	// bl 0x8232d178
	ctx.lr = 0x8273F4C0;
	sub_8232D178(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F4CC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23392
	ctx.r4.s64 = ctx.r11.s64 + -23392;
	// bl 0x82333168
	ctx.lr = 0x8273F4DC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f5e4
	if (ctx.cr6.eq) goto loc_8273F5E4;
	// lis r30,-31882
	ctx.r30.s64 = -2089418752;
	// lwz r11,18524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lwz r3,864(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 864);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,18524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18524, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f590
	if (ctx.cr6.eq) goto loc_8273F590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273F518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273f5d0
	if (!ctx.cr6.eq) goto loc_8273F5D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14488
	ctx.r6.s64 = ctx.r11.s64 + 14488;
	// addi r5,r10,-23376
	ctx.r5.s64 = ctx.r10.s64 + -23376;
	// addi r4,r9,-12808
	ctx.r4.s64 = ctx.r9.s64 + -12808;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823338c8
	ctx.lr = 0x8273F548;
	sub_823338C8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x8273f564
	if (!ctx.cr6.eq) goto loc_8273F564;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_8273F564:
	// lwz r10,-60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r31,r26,-60
	ctx.r31.s64 = ctx.r26.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273F584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F58C;
	sub_82299080(ctx, base);
	// b 0x8273f5bc
	goto loc_8273F5BC;
loc_8273F590:
	// lwz r10,-60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r31,r26,-60
	ctx.r31.s64 = ctx.r26.s64 + -60;
	// addi r4,r9,11272
	ctx.r4.s64 = ctx.r9.s64 + 11272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,288(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273F5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273F5BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273F5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273F5D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,18524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18524, ctx.r11.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F5E4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23340
	ctx.r4.s64 = ctx.r11.s64 + -23340;
	// bl 0x82333168
	ctx.lr = 0x8273F5F4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23292
	ctx.r4.s64 = ctx.r11.s64 + -23292;
	// bl 0x82333168
	ctx.lr = 0x8273F60C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f700
	if (ctx.cr6.eq) goto loc_8273F700;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// bl 0x82745fc0
	ctx.lr = 0x8273F62C;
	sub_82745FC0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8273F634:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8273f688
	if (!ctx.cr6.lt) goto loc_8273F688;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8273f67c
	if (!ctx.cr6.eq) goto loc_8273F67C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8229bd90
	ctx.lr = 0x8273F668;
	sub_8229BD90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82296158
	ctx.lr = 0x8273F674;
	sub_82296158(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F67C;
	sub_82299080(ctx, base);
loc_8273F67C:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82746070
	ctx.lr = 0x8273F684;
	sub_82746070(ctx, base);
	// b 0x8273f634
	goto loc_8273F634;
loc_8273F688:
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827472e8
	ctx.lr = 0x8273F69C;
	sub_827472E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8273f6ec
	if (!ctx.cr6.gt) goto loc_8273F6EC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r4,r11,-23172
	ctx.r4.s64 = ctx.r11.s64 + -23172;
	// addi r9,r9,11272
	ctx.r9.s64 = ctx.r9.s64 + 11272;
loc_8273F6BC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273f6d0
	if (ctx.cr6.eq) goto loc_8273F6D0;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8273f6d4
	goto loc_8273F6D4;
loc_8273F6D0:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_8273F6D4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x8273F6DC;
	sub_8232D178(ctx, base);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8273f6bc
	if (ctx.cr6.lt) goto loc_8273F6BC;
loc_8273F6EC:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295e20
	ctx.lr = 0x8273F6F4;
	sub_82295E20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F700:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23160
	ctx.r4.s64 = ctx.r11.s64 + -23160;
	// bl 0x82333168
	ctx.lr = 0x8273F710;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23140
	ctx.r4.s64 = ctx.r11.s64 + -23140;
	// bl 0x82333168
	ctx.lr = 0x8273F728;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23112
	ctx.r4.s64 = ctx.r11.s64 + -23112;
	// bl 0x82333168
	ctx.lr = 0x8273F740;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23072
	ctx.r4.s64 = ctx.r11.s64 + -23072;
	// bl 0x82333168
	ctx.lr = 0x8273F758;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-23044
	ctx.r4.s64 = ctx.r11.s64 + -23044;
	// bl 0x82333168
	ctx.lr = 0x8273F770;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25136
	ctx.r4.s64 = ctx.r11.s64 + -25136;
	// bl 0x82333168
	ctx.lr = 0x8273F788;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f8dc
	if (ctx.cr6.eq) goto loc_8273F8DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823335a8
	ctx.lr = 0x8273F7A0;
	sub_823335A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x8273f7c0
	if (!ctx.cr6.eq) goto loc_8273F7C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8273F7C0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-25128
	ctx.r4.s64 = ctx.r11.s64 + -25128;
	// bl 0x82cb0328
	ctx.lr = 0x8273F7CC;
	sub_82CB0328(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// xori r29,r9,1
	ctx.r29.u64 = ctx.r9.u64 ^ 1;
	// bne cr6,0x8273f7e8
	if (!ctx.cr6.eq) goto loc_8273F7E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8273F7E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-25116
	ctx.r4.s64 = ctx.r11.s64 + -25116;
	// bl 0x82cb0328
	ctx.lr = 0x8273F7F4;
	sub_82CB0328(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x823648a0
	ctx.lr = 0x8273F800;
	sub_823648A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r3,r3,58,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8239dac8
	ctx.lr = 0x8273F810;
	sub_8239DAC8(ctx, base);
	// bl 0x822b4df0
	ctx.lr = 0x8273F814;
	sub_822B4DF0(ctx, base);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8273f848
	if (ctx.cr6.eq) goto loc_8273F848;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8273f8a0
	if (ctx.cr6.eq) goto loc_8273F8A0;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,-23000
	ctx.r4.s64 = ctx.r11.s64 + -23000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8273f880
	goto loc_8273F880;
loc_8273F848:
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,-22932
	ctx.r4.s64 = ctx.r11.s64 + -22932;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273F868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8273F880:
	// bctrl 
	ctx.lr = 0x8273F884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31840);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273f8a0
	if (ctx.cr6.eq) goto loc_8273F8A0;
loc_8273F894:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273f894
	if (!ctx.cr6.eq) goto loc_8273F894;
loc_8273F8A0:
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273F8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F8D0;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F8DC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-22908
	ctx.r4.s64 = ctx.r11.s64 + -22908;
	// bl 0x82333168
	ctx.lr = 0x8273F8EC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f920
	if (ctx.cr6.eq) goto loc_8273F920;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28888);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273F914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F920:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-22884
	ctx.r4.s64 = ctx.r11.s64 + -22884;
	// bl 0x82333168
	ctx.lr = 0x8273F930;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273f9bc
	if (ctx.cr6.eq) goto loc_8273F9BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823335a8
	ctx.lr = 0x8273F948;
	sub_823335A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r11,11272
	ctx.r9.s64 = ctx.r11.s64 + 11272;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bne cr6,0x8273f968
	if (!ctx.cr6.eq) goto loc_8273F968;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_8273F968:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-22868
	ctx.r4.s64 = ctx.r11.s64 + -22868;
	// bl 0x8232d178
	ctx.lr = 0x8273F978;
	sub_8232D178(ctx, base);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bne cr6,0x8273f988
	if (!ctx.cr6.eq) goto loc_8273F988;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8273F988:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,28888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28888);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273F9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x8273F9B0;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273F9BC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-22848
	ctx.r4.s64 = ctx.r11.s64 + -22848;
	// bl 0x82333168
	ctx.lr = 0x8273F9CC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273fca8
	if (ctx.cr6.eq) goto loc_8273FCA8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2bc0
	ctx.lr = 0x8273F9DC;
	sub_822B2BC0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r29,r11,-27344
	ctx.r29.s64 = ctx.r11.s64 + -27344;
	// addi r30,r10,-21944
	ctx.r30.s64 = ctx.r10.s64 + -21944;
loc_8273F9EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8273fc70
	if (!ctx.cr6.lt) goto loc_8273FC70;
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
	// lwz r8,204(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8273FA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273fa34
	if (!ctx.cr6.eq) goto loc_8273FA34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x822b2388
	ctx.lr = 0x8273FA30;
	sub_822B2388(ctx, base);
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r29.u32);
loc_8273FA34:
	// bl 0x822db6a0
	ctx.lr = 0x8273FA38;
	sub_822DB6A0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fa58
	if (ctx.cr6.eq) goto loc_8273FA58;
loc_8273FA44:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fa58
	if (ctx.cr6.eq) goto loc_8273FA58;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fa44
	if (!ctx.cr6.eq) goto loc_8273FA44;
loc_8273FA58:
	// bl 0x82311418
	ctx.lr = 0x8273FA5C;
	sub_82311418(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fa7c
	if (ctx.cr6.eq) goto loc_8273FA7C;
loc_8273FA68:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fa7c
	if (ctx.cr6.eq) goto loc_8273FA7C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fa68
	if (!ctx.cr6.eq) goto loc_8273FA68;
loc_8273FA7C:
	// bl 0x82310fb8
	ctx.lr = 0x8273FA80;
	sub_82310FB8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273faa0
	if (ctx.cr6.eq) goto loc_8273FAA0;
loc_8273FA8C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273faa0
	if (ctx.cr6.eq) goto loc_8273FAA0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fa8c
	if (!ctx.cr6.eq) goto loc_8273FA8C;
loc_8273FAA0:
	// bl 0x82313218
	ctx.lr = 0x8273FAA4;
	sub_82313218(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fac4
	if (ctx.cr6.eq) goto loc_8273FAC4;
loc_8273FAB0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fb94
	if (ctx.cr6.eq) goto loc_8273FB94;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fab0
	if (!ctx.cr6.eq) goto loc_8273FAB0;
loc_8273FAC4:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273fb94
	if (!ctx.cr6.eq) goto loc_8273FB94;
	// bl 0x82312908
	ctx.lr = 0x8273FAD8;
	sub_82312908(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273faf8
	if (ctx.cr6.eq) goto loc_8273FAF8;
loc_8273FAE4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fb94
	if (ctx.cr6.eq) goto loc_8273FB94;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fae4
	if (!ctx.cr6.eq) goto loc_8273FAE4;
loc_8273FAF8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273fb94
	if (!ctx.cr6.eq) goto loc_8273FB94;
	// bl 0x82310f18
	ctx.lr = 0x8273FB0C;
	sub_82310F18(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fb2c
	if (ctx.cr6.eq) goto loc_8273FB2C;
loc_8273FB18:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fb94
	if (ctx.cr6.eq) goto loc_8273FB94;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fb18
	if (!ctx.cr6.eq) goto loc_8273FB18;
loc_8273FB2C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273fb94
	if (!ctx.cr6.eq) goto loc_8273FB94;
	// bl 0x823113c8
	ctx.lr = 0x8273FB40;
	sub_823113C8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fb60
	if (ctx.cr6.eq) goto loc_8273FB60;
loc_8273FB4C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fb94
	if (ctx.cr6.eq) goto loc_8273FB94;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fb4c
	if (!ctx.cr6.eq) goto loc_8273FB4C;
loc_8273FB60:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273fb94
	if (!ctx.cr6.eq) goto loc_8273FB94;
	// bl 0x823156f8
	ctx.lr = 0x8273FB74;
	sub_823156F8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fb94
	if (ctx.cr6.eq) goto loc_8273FB94;
loc_8273FB80:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fb94
	if (ctx.cr6.eq) goto loc_8273FB94;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fb80
	if (!ctx.cr6.eq) goto loc_8273FB80;
loc_8273FB94:
	// bl 0x82312958
	ctx.lr = 0x8273FB98;
	sub_82312958(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fbb8
	if (ctx.cr6.eq) goto loc_8273FBB8;
loc_8273FBA4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fc20
	if (ctx.cr6.eq) goto loc_8273FC20;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fba4
	if (!ctx.cr6.eq) goto loc_8273FBA4;
loc_8273FBB8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273fc20
	if (!ctx.cr6.eq) goto loc_8273FC20;
	// bl 0x82312908
	ctx.lr = 0x8273FBCC;
	sub_82312908(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fbec
	if (ctx.cr6.eq) goto loc_8273FBEC;
loc_8273FBD8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fc20
	if (ctx.cr6.eq) goto loc_8273FC20;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fbd8
	if (!ctx.cr6.eq) goto loc_8273FBD8;
loc_8273FBEC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8273fc20
	if (!ctx.cr6.eq) goto loc_8273FC20;
	// bl 0x823156f8
	ctx.lr = 0x8273FC00;
	sub_823156F8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fc20
	if (ctx.cr6.eq) goto loc_8273FC20;
loc_8273FC0C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fc20
	if (ctx.cr6.eq) goto loc_8273FC20;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fc0c
	if (!ctx.cr6.eq) goto loc_8273FC0C;
loc_8273FC20:
	// bl 0x822d6060
	ctx.lr = 0x8273FC24;
	sub_822D6060(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fc44
	if (ctx.cr6.eq) goto loc_8273FC44;
loc_8273FC30:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8273fc54
	if (ctx.cr6.eq) goto loc_8273FC54;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273fc30
	if (!ctx.cr6.eq) goto loc_8273FC30;
loc_8273FC44:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273fc64
	if (ctx.cr6.eq) goto loc_8273FC64;
loc_8273FC54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x822b2388
	ctx.lr = 0x8273FC60;
	sub_822B2388(ctx, base);
	// stw r29,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r29.u32);
loc_8273FC64:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b2b40
	ctx.lr = 0x8273FC6C;
	sub_822B2B40(ctx, base);
	// b 0x8273f9ec
	goto loc_8273F9EC;
loc_8273FC70:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// lwz r3,28888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28888);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8273FC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273FCA8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-22824
	ctx.r4.s64 = ctx.r11.s64 + -22824;
	// bl 0x82333168
	ctx.lr = 0x8273FCB8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273ff04
	if (ctx.cr6.eq) goto loc_8273FF04;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r23,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r23.u32);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// bl 0x827462f8
	ctx.lr = 0x8273FCF0;
	sub_827462F8(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r29,r11,-21944
	ctx.r29.s64 = ctx.r11.s64 + -21944;
loc_8273FCF8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8273fd80
	if (!ctx.cr6.lt) goto loc_8273FD80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r30,68(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// beq cr6,0x8273fd74
	if (ctx.cr6.eq) goto loc_8273FD74;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8273fd74
	if (ctx.cr6.eq) goto loc_8273FD74;
loc_8273FD34:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8273fd5c
	if (!ctx.cr6.eq) goto loc_8273FD5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251a718
	ctx.lr = 0x8273FD44;
	sub_8251A718(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8273fd34
	if (!ctx.cr6.eq) goto loc_8273FD34;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8273fd74
	if (ctx.cr6.eq) goto loc_8273FD74;
loc_8273FD5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827461b0
	ctx.lr = 0x8273FD68;
	sub_827461B0(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82745f10
	ctx.lr = 0x8273FD74;
	sub_82745F10(ctx, base);
loc_8273FD74:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x827463a8
	ctx.lr = 0x8273FD7C;
	sub_827463A8(ctx, base);
	// b 0x8273fcf8
	goto loc_8273FCF8;
loc_8273FD80:
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82747550
	ctx.lr = 0x8273FD94;
	sub_82747550(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8273fed8
	if (!ctx.cr6.gt) goto loc_8273FED8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8273FDA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273FDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8273fda4
	if (!ctx.cr0.eq) goto loc_8273FDA4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8273fed8
	if (!ctx.cr6.gt) goto loc_8273FED8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r27,r11,-22636
	ctx.r27.s64 = ctx.r11.s64 + -22636;
	// addi r26,r10,-22664
	ctx.r26.s64 = ctx.r10.s64 + -22664;
	// addi r25,r9,11272
	ctx.r25.s64 = ctx.r9.s64 + 11272;
loc_8273FDE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x827460f8
	ctx.lr = 0x8273FE0C;
	sub_827460F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8229bd90
	ctx.lr = 0x8273FE20;
	sub_8229BD90(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273fe34
	if (ctx.cr6.eq) goto loc_8273FE34;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8273fe38
	goto loc_8273FE38;
loc_8273FE34:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8273FE38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8273FE4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r9,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 10;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x8273FE64;
	sub_8232D178(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82299080
	ctx.lr = 0x8273FE6C;
	sub_82299080(ctx, base);
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8273fec4
	if (!ctx.cr6.gt) goto loc_8273FEC4;
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8273FE7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8229bd90
	ctx.lr = 0x8273FE8C;
	sub_8229BD90(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273fea0
	if (ctx.cr6.eq) goto loc_8273FEA0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8273fea4
	goto loc_8273FEA4;
loc_8273FEA0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_8273FEA4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d178
	ctx.lr = 0x8273FEB0;
	sub_8232D178(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x8273FEB8;
	sub_82299080(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8273fe7c
	if (!ctx.cr0.eq) goto loc_8273FE7C;
loc_8273FEC4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82383e08
	ctx.lr = 0x8273FECC;
	sub_82383E08(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8273fde4
	if (!ctx.cr0.eq) goto loc_8273FDE4;
loc_8273FED8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82745e98
	ctx.lr = 0x8273FEE0;
	sub_82745E98(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82294a58
	ctx.lr = 0x8273FEE8;
	sub_82294A58(ctx, base);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82746908
	ctx.lr = 0x8273FEF8;
	sub_82746908(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_8273FF04:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-22604
	ctx.r4.s64 = ctx.r11.s64 + -22604;
	// bl 0x82333168
	ctx.lr = 0x8273FF14;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82740080
	if (ctx.cr6.eq) goto loc_82740080;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// bl 0x8251a190
	ctx.lr = 0x8273FF38;
	sub_8251A190(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r28,r11,-27344
	ctx.r28.s64 = ctx.r11.s64 + -27344;
	// addi r30,r10,-21944
	ctx.r30.s64 = ctx.r10.s64 + -21944;
	// addi r27,r9,-22544
	ctx.r27.s64 = ctx.r9.s64 + -22544;
	// addi r26,r8,-22572
	ctx.r26.s64 = ctx.r8.s64 + -22572;
loc_8273FF58:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82740040
	if (!ctx.cr6.lt) goto loc_82740040;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b2388
	ctx.lr = 0x8273FF80;
	sub_822B2388(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82740030
	if (!ctx.cr6.gt) goto loc_82740030;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82740010
	if (ctx.cr6.eq) goto loc_82740010;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273ffe0
	if (ctx.cr6.eq) goto loc_8273FFE0;
	// stw r23,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r23.u32);
	// addi r5,r1,312
	ctx.r5.s64 = ctx.r1.s64 + 312;
	// stw r23,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r23.u32);
	// bl 0x8229bcd0
	ctx.lr = 0x8273FFBC;
	sub_8229BCD0(ctx, base);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295908
	ctx.lr = 0x8273FFC8;
	sub_82295908(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82299080
	ctx.lr = 0x8273FFD0;
	sub_82299080(ctx, base);
	// stw r28,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r28.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8251a240
	ctx.lr = 0x8273FFDC;
	sub_8251A240(ctx, base);
	// b 0x8273ff58
	goto loc_8273FF58;
loc_8273FFE0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822960c0
	ctx.lr = 0x8273FFEC;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295908
	ctx.lr = 0x8273FFF8;
	sub_82295908(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x82740000;
	sub_82299080(ctx, base);
	// stw r28,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r28.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8251a240
	ctx.lr = 0x8274000C;
	sub_8251A240(ctx, base);
	// b 0x8273ff58
	goto loc_8273FF58;
loc_82740010:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822960c0
	ctx.lr = 0x8274001C;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295908
	ctx.lr = 0x82740028;
	sub_82295908(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82740030;
	sub_82299080(ctx, base);
loc_82740030:
	// stw r28,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r28.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8251a240
	ctx.lr = 0x8274003C;
	sub_8251A240(ctx, base);
	// b 0x8273ff58
	goto loc_8273FF58;
loc_82740040:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740054
	if (ctx.cr6.eq) goto loc_82740054;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x8274005c
	goto loc_8274005C;
loc_82740054:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_8274005C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-22308
	ctx.r4.s64 = ctx.r11.s64 + -22308;
	// bl 0x8232d178
	ctx.lr = 0x8274006C;
	sub_8232D178(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82299080
	ctx.lr = 0x82740074;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82740080:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-22260
	ctx.r4.s64 = ctx.r11.s64 + -22260;
	// bl 0x82333168
	ctx.lr = 0x82740090;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// beq cr6,0x82740400
	if (ctx.cr6.eq) goto loc_82740400;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r4,r11,-22220
	ctx.r4.s64 = ctx.r11.s64 + -22220;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x82333168
	ctx.lr = 0x827400C4;
	sub_82333168(ctx, base);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r9,-22208
	ctx.r4.s64 = ctx.r9.s64 + -22208;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// bl 0x82333168
	ctx.lr = 0x827400D8;
	sub_82333168(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b2bc0
	ctx.lr = 0x827400E4;
	sub_822B2BC0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r25,r11,-21944
	ctx.r25.s64 = ctx.r11.s64 + -21944;
loc_827400F0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827403ac
	if (!ctx.cr6.lt) goto loc_827403AC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8250d9a0
	ctx.lr = 0x82740110;
	sub_8250D9A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827403a0
	if (ctx.cr6.eq) goto loc_827403A0;
	// lwz r26,656(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 656);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// beq cr6,0x827401d8
	if (ctx.cr6.eq) goto loc_827401D8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82740140
	if (!ctx.cr6.eq) goto loc_82740140;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x827401d8
	if (ctx.cr6.eq) goto loc_827401D8;
loc_82740140:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82746560
	ctx.lr = 0x8274014C;
	sub_82746560(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827401c8
	if (!ctx.cr6.eq) goto loc_827401C8;
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r23,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r23.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// stw r23,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r23.u32);
	// stw r23,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r23.u32);
	// stw r23,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// stw r23,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r23.u32);
	// stw r23,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r23.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// bl 0x82746498
	ctx.lr = 0x8274019C;
	sub_82746498(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82746560
	ctx.lr = 0x827401A8;
	sub_82746560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x822b41e8
	ctx.lr = 0x827401B4;
	sub_822B41E8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822b41e8
	ctx.lr = 0x827401BC;
	sub_822B41E8(ctx, base);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x822b41e8
	ctx.lr = 0x827401C4;
	sub_822B41E8(ctx, base);
	// b 0x827401d8
	goto loc_827401D8;
loc_827401C8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_827401D8:
	// lwz r11,664(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827402c8
	if (!ctx.cr6.gt) goto loc_827402C8;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_827401EC:
	// lwz r11,660(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 660);
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827402a8
	if (ctx.cr6.eq) goto loc_827402A8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8274020c
	if (!ctx.cr6.eq) goto loc_8274020C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x827402a8
	if (ctx.cr6.eq) goto loc_827402A8;
loc_8274020C:
	// lwz r10,116(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bgt cr6,0x8274026c
	if (ctx.cr6.gt) goto loc_8274026C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823ade20
	ctx.lr = 0x82740254;
	sub_823ADE20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ade20
	ctx.lr = 0x82740260;
	sub_823ADE20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823ade20
	ctx.lr = 0x8274026C;
	sub_823ADE20(ctx, base);
loc_8274026C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,116(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r10,120(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,120(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
loc_827402A8:
	// lwz r11,664(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 664);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827401ec
	if (ctx.cr6.lt) goto loc_827401EC;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b2b40
	ctx.lr = 0x827402C4;
	sub_822B2B40(ctx, base);
	// b 0x827400f0
	goto loc_827400F0;
loc_827402C8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827403a0
	if (ctx.cr6.eq) goto loc_827403A0;
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827403a0
	if (!ctx.cr6.gt) goto loc_827403A0;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_827402E4:
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274038c
	if (ctx.cr6.eq) goto loc_8274038C;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82740330
	if (!ctx.cr6.gt) goto loc_82740330;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
loc_82740308:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82740324
	if (ctx.cr6.eq) goto loc_82740324;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82740324
	if (!ctx.cr6.gt) goto loc_82740324;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82740324:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82740308
	if (!ctx.cr0.eq) goto loc_82740308;
loc_82740330:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82740340
	if (!ctx.cr6.eq) goto loc_82740340;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8274038c
	if (ctx.cr6.eq) goto loc_8274038C;
loc_82740340:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bgt cr6,0x8274037c
	if (ctx.cr6.gt) goto loc_8274037C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823ade20
	ctx.lr = 0x82740364;
	sub_823ADE20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ade20
	ctx.lr = 0x82740370;
	sub_823ADE20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823ade20
	ctx.lr = 0x8274037C;
	sub_823ADE20(ctx, base);
loc_8274037C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_8274038C:
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827402e4
	if (ctx.cr6.lt) goto loc_827402E4;
loc_827403A0:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b2b40
	ctx.lr = 0x827403A8;
	sub_822B2B40(ctx, base);
	// b 0x827400f0
	goto loc_827400F0;
loc_827403AC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x827403bc
	if (!ctx.cr6.eq) goto loc_827403BC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x827403dc
	if (ctx.cr6.eq) goto loc_827403DC;
loc_827403BC:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_827403C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827403dc
	if (ctx.cr6.lt) goto loc_827403DC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827403dc
	if (!ctx.cr6.lt) goto loc_827403DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x827403c4
	goto loc_827403C4;
loc_827403DC:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82294a58
	ctx.lr = 0x827403E4;
	sub_82294A58(ctx, base);
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// bl 0x82746ad8
	ctx.lr = 0x827403F4;
	sub_82746AD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82740400:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r4,r11,-22188
	ctx.r4.s64 = ctx.r11.s64 + -22188;
	// bl 0x82333168
	ctx.lr = 0x8274040C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82740460
	if (ctx.cr6.eq) goto loc_82740460;
	// bl 0x822955c8
	ctx.lr = 0x82740418;
	sub_822955C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x82295518
	ctx.lr = 0x8274042C;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_82740434:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82740700
	if (!ctx.cr6.lt) goto loc_82740700;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x827477a0
	ctx.lr = 0x82740454;
	sub_827477A0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82295518
	ctx.lr = 0x8274045C;
	sub_82295518(ctx, base);
	// b 0x82740434
	goto loc_82740434;
loc_82740460:
	// lwz r3,-31264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r31,892(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8274057c
	if (ctx.cr6.eq) goto loc_8274057C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82420680
	ctx.lr = 0x8274047C;
	sub_82420680(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lwz r10,-31264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8274057c
	if (ctx.cr6.eq) goto loc_8274057C;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x827404ac
	if (ctx.cr6.gt) goto loc_827404AC;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x827404b4
	goto loc_827404B4;
loc_827404AC:
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_827404B4:
	// lwz r9,980(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 980);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82740508
	if (ctx.cr6.eq) goto loc_82740508;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x827404d4
	if (ctx.cr6.gt) goto loc_827404D4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x827404dc
	goto loc_827404DC;
loc_827404D4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827404DC:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827404FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lwz r10,-31264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
loc_82740508:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8274057c
	if (ctx.cr6.eq) goto loc_8274057C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24416
	ctx.r4.s64 = ctx.r11.s64 + -24416;
	// bl 0x82333168
	ctx.lr = 0x82740520;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740540
	if (!ctx.cr6.eq) goto loc_82740540;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24408
	ctx.r4.s64 = ctx.r11.s64 + -24408;
	// bl 0x82333168
	ctx.lr = 0x82740538;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8274057c
	if (ctx.cr6.eq) goto loc_8274057C;
loc_82740540:
	// lwz r11,864(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82740568
	if (ctx.cr6.gt) goto loc_82740568;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82740570
	goto loc_82740570;
loc_82740568:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82740570:
	// lbz r11,940(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82740700
	if (!ctx.cr6.eq) goto loc_82740700;
loc_8274057C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82309ab0
	ctx.lr = 0x8274058C;
	sub_82309AB0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_827405A0:
	// lwz r11,-60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -60);
	// addi r3,r26,-60
	ctx.r3.s64 = ctx.r26.s64 + -60;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827405B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,-31264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8274062c
	if (!ctx.cr6.gt) goto loc_8274062C;
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8274062c
	if (ctx.cr6.eq) goto loc_8274062C;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x827405f0
	if (ctx.cr6.gt) goto loc_827405F0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x827405f8
	goto loc_827405F8;
loc_827405F0:
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_827405F8:
	// lwz r9,980(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 980);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8274062c
	if (ctx.cr6.eq) goto loc_8274062C;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82740618
	if (ctx.cr6.gt) goto loc_82740618;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82740620
	goto loc_82740620;
loc_82740618:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82740620:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x827481a8
	ctx.lr = 0x82740628;
	sub_827481A8(ctx, base);
	// lwz r10,-31264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
loc_8274062C:
	// lwz r11,208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274068c
	if (ctx.cr6.eq) goto loc_8274068C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274068c
	if (ctx.cr6.eq) goto loc_8274068C;
	// lwz r11,3768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274068c
	if (ctx.cr6.eq) goto loc_8274068C;
	// lwz r11,208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,3768(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3768);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82740670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r7,208(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r3,80(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,292(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 292);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8274068C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274068C:
	// lwz r10,864(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 864);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827406f4
	if (ctx.cr6.eq) goto loc_827406F4;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827406f4
	if (ctx.cr6.eq) goto loc_827406F4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827406f4
	if (ctx.cr6.eq) goto loc_827406F4;
	// lwz r11,3768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827406f4
	if (ctx.cr6.eq) goto loc_827406F4;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,3768(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3768);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827406D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,864(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 864);
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// lwz r3,80(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,292(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x827406F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827406F4:
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-3768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3768, ctx.r11.u32);
loc_82740700:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274070C"))) PPC_WEAK_FUNC(sub_8274070C);
PPC_FUNC_IMPL(__imp__sub_8274070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82740710"))) PPC_WEAK_FUNC(sub_82740710);
PPC_FUNC_IMPL(__imp__sub_82740710) {
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

__attribute__((alias("__imp__sub_82740730"))) PPC_WEAK_FUNC(sub_82740730);
PPC_FUNC_IMPL(__imp__sub_82740730) {
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
	ctx.lr = 0x8274074C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82746908
	ctx.lr = 0x82740760;
	sub_82746908(ctx, base);
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

__attribute__((alias("__imp__sub_82740774"))) PPC_WEAK_FUNC(sub_82740774);
PPC_FUNC_IMPL(__imp__sub_82740774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82740778"))) PPC_WEAK_FUNC(sub_82740778);
PPC_FUNC_IMPL(__imp__sub_82740778) {
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

__attribute__((alias("__imp__sub_82740798"))) PPC_WEAK_FUNC(sub_82740798);
PPC_FUNC_IMPL(__imp__sub_82740798) {
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
	ctx.lr = 0x827407B4;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82746ad8
	ctx.lr = 0x827407C8;
	sub_82746AD8(ctx, base);
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

__attribute__((alias("__imp__sub_827407DC"))) PPC_WEAK_FUNC(sub_827407DC);
PPC_FUNC_IMPL(__imp__sub_827407DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827407E0"))) PPC_WEAK_FUNC(sub_827407E0);
PPC_FUNC_IMPL(__imp__sub_827407E0) {
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
	// lwz r10,924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82740864
	if (ctx.cr6.eq) goto loc_82740864;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274085c
	if (ctx.cr6.eq) goto loc_8274085C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274085c
	if (ctx.cr6.eq) goto loc_8274085C;
	// lwz r11,3768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274085c
	if (ctx.cr6.eq) goto loc_8274085C;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,3768(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3768);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82740840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,924(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// lwz r3,80(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,292(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8274085C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274085C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
loc_82740864:
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

__attribute__((alias("__imp__sub_82740878"))) PPC_WEAK_FUNC(sub_82740878);
PPC_FUNC_IMPL(__imp__sub_82740878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82740880;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822b2a20
	ctx.lr = 0x827408A4;
	sub_822B2A20(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,1076
	ctx.r3.s64 = ctx.r26.s64 + 1076;
	// bl 0x82427888
	ctx.lr = 0x827408B0;
	sub_82427888(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827408c4
	if (ctx.cr6.eq) goto loc_827408C4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x827408c8
	goto loc_827408C8;
loc_827408C4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_827408C8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r30,r11,-22148
	ctx.r30.s64 = ctx.r11.s64 + -22148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cafee0
	ctx.lr = 0x827408D8;
	sub_82CAFEE0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827408f0
	if (ctx.cr6.eq) goto loc_827408F0;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x827408f4
	goto loc_827408F4;
loc_827408F0:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_827408F4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740908
	if (ctx.cr6.eq) goto loc_82740908;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x8274090c
	goto loc_8274090C;
loc_82740908:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8274090C:
	// bl 0x82cb0ec8
	ctx.lr = 0x82740910;
	sub_82CB0EC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8274091C;
	sub_82CB0EC8(ctx, base);
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// subf r10,r3,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r3.s64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827409cc
	if (!ctx.cr6.eq) goto loc_827409CC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// beq cr6,0x82740954
	if (ctx.cr6.eq) goto loc_82740954;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82740958
	goto loc_82740958;
loc_82740954:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_82740958:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r5,r10,-5100
	ctx.r5.s64 = ctx.r10.s64 + -5100;
	// addi r4,r9,-22132
	ctx.r4.s64 = ctx.r9.s64 + -22132;
	// lwz r3,28876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28876);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82740984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827409fc
	if (ctx.cr6.eq) goto loc_827409FC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827409a0
	if (!ctx.cr6.eq) goto loc_827409A0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_827409A0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823be038
	ctx.lr = 0x827409B0;
	sub_823BE038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823beaf8
	ctx.lr = 0x827409BC;
	sub_823BEAF8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82295d40
	ctx.lr = 0x827409C4;
	sub_82295D40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x827409CC;
	sub_82299080(ctx, base);
loc_827409CC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82740b18
	if (!ctx.cr6.eq) goto loc_82740B18;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823beb78
	ctx.lr = 0x827409E8;
	sub_823BEB78(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740a94
	if (ctx.cr6.eq) goto loc_82740A94;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82740a98
	goto loc_82740A98;
loc_827409FC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740a10
	if (ctx.cr6.eq) goto loc_82740A10;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82740a14
	goto loc_82740A14;
loc_82740A10:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82740A14:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14488
	ctx.r6.s64 = ctx.r11.s64 + 14488;
	// addi r5,r10,-22120
	ctx.r5.s64 = ctx.r10.s64 + -22120;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823338c8
	ctx.lr = 0x82740A3C;
	sub_823338C8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82740a50
	if (!ctx.cr6.eq) goto loc_82740A50;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82740A50:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8232e868
	ctx.lr = 0x82740A5C;
	sub_8232E868(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82295908
	ctx.lr = 0x82740A68;
	sub_82295908(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82740A70;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82740A78;
	sub_82299080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82740A80;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740A88;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740A94:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82740A98:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14488
	ctx.r6.s64 = ctx.r11.s64 + 14488;
	// addi r5,r10,-22096
	ctx.r5.s64 = ctx.r10.s64 + -22096;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823338c8
	ctx.lr = 0x82740AC0;
	sub_823338C8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82740ad4
	if (!ctx.cr6.eq) goto loc_82740AD4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82740AD4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8232e868
	ctx.lr = 0x82740AE0;
	sub_8232E868(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82295908
	ctx.lr = 0x82740AEC;
	sub_82295908(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82740AF4;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82740AFC;
	sub_82299080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x82740B04;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740B0C;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740B18:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-22072
	ctx.r29.s64 = ctx.r11.s64 + -22072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823bf2d8
	ctx.lr = 0x82740B2C;
	sub_823BF2D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-22056
	ctx.r28.s64 = ctx.r11.s64 + -22056;
	// bne cr6,0x82740e7c
	if (!ctx.cr6.eq) goto loc_82740E7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf2d8
	ctx.lr = 0x82740B48;
	sub_823BF2D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82740e7c
	if (!ctx.cr6.eq) goto loc_82740E7C;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22040
	ctx.r4.s64 = ctx.r11.s64 + -22040;
	// bl 0x823bf2d8
	ctx.lr = 0x82740B60;
	sub_823BF2D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82740b98
	if (ctx.cr6.eq) goto loc_82740B98;
	// addi r4,r26,928
	ctx.r4.s64 = ctx.r26.s64 + 928;
	// bl 0x823beaf8
	ctx.lr = 0x82740B74;
	sub_823BEAF8(ctx, base);
loc_82740B74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bedc8
	ctx.lr = 0x82740B7C;
	sub_823BEDC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82740d00
	if (ctx.cr6.eq) goto loc_82740D00;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740cb0
	if (ctx.cr6.eq) goto loc_82740CB0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82740cb4
	goto loc_82740CB4;
loc_82740B98:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22024
	ctx.r4.s64 = ctx.r11.s64 + -22024;
	// bl 0x823bf378
	ctx.lr = 0x82740BA8;
	sub_823BF378(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82740b74
	if (ctx.cr6.eq) goto loc_82740B74;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// bl 0x82cb2688
	ctx.lr = 0x82740BC0;
	sub_82CB2688(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,28904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28904);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82740be0
	if (ctx.cr6.eq) goto loc_82740BE0;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x82740be4
	goto loc_82740BE4;
loc_82740BE0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82740BE4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-22012
	ctx.r4.s64 = ctx.r11.s64 + -22012;
	// bl 0x8232e868
	ctx.lr = 0x82740BF4;
	sub_8232E868(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82740c08
	if (!ctx.cr6.eq) goto loc_82740C08;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82740C08:
	// addi r30,r26,928
	ctx.r30.s64 = ctx.r26.s64 + 928;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// bl 0x823be038
	ctx.lr = 0x82740C24;
	sub_823BE038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82740C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82295d40
	ctx.lr = 0x82740C4C;
	sub_82295D40(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82740c8c
	if (ctx.cr6.eq) goto loc_82740C8C;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// bl 0x823beaf8
	ctx.lr = 0x82740C68;
	sub_823BEAF8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82740C70;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82740C78;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740C80;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740C8C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82740C94;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82740C9C;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740CA4;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740CB0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82740CB4:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r4,r10,-21972
	ctx.r4.s64 = ctx.r10.s64 + -21972;
	// lwz r3,-24528(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24528);
	// bl 0x8232d178
	ctx.lr = 0x82740CC8;
	sub_8232D178(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82740CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740CF4;
	sub_82295D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740D00:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-14100
	ctx.r30.s64 = ctx.r11.s64 + -14100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822b21c0
	ctx.lr = 0x82740D14;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82740dec
	if (ctx.cr6.eq) goto loc_82740DEC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82740dec
	if (ctx.cr6.eq) goto loc_82740DEC;
	// lwz r11,924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82740d4c
	if (ctx.cr6.eq) goto loc_82740D4C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82740D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82740D4C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,176
	ctx.r3.s64 = 176;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8273d008
	ctx.lr = 0x82740D70;
	sub_8273D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82740d84
	if (ctx.cr6.eq) goto loc_82740D84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826e3da0
	ctx.lr = 0x82740D80;
	sub_826E3DA0(ctx, base);
	// b 0x82740d88
	goto loc_82740D88;
loc_82740D84:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82740D88:
	// stw r3,924(r26)
	PPC_STORE_U32(ctx.r26.u32 + 924, ctx.r3.u32);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82740dd8
	if (!ctx.cr6.eq) goto loc_82740DD8;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740dac
	if (ctx.cr6.eq) goto loc_82740DAC;
	// lwz r5,164(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// b 0x82740db0
	goto loc_82740DB0;
loc_82740DAC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82740DB0:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r9,-21928
	ctx.r4.s64 = ctx.r9.s64 + -21928;
	// lfs f1,-18132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18132);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,288(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82740DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,924(r26)
	PPC_STORE_U32(ctx.r26.u32 + 924, ctx.r27.u32);
loc_82740DD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740DE0;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740DEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b21c0
	ctx.lr = 0x82740DF8;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82740e50
	if (ctx.cr6.eq) goto loc_82740E50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,14488
	ctx.r6.s64 = ctx.r11.s64 + 14488;
	// addi r5,r10,-21892
	ctx.r5.s64 = ctx.r10.s64 + -21892;
	// addi r4,r9,-12824
	ctx.r4.s64 = ctx.r9.s64 + -12824;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823338c8
	ctx.lr = 0x82740E28;
	sub_823338C8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82295908
	ctx.lr = 0x82740E34;
	sub_82295908(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299080
	ctx.lr = 0x82740E3C;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740E44;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740E50:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823beb78
	ctx.lr = 0x82740E60;
	sub_823BEB78(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82299080
	ctx.lr = 0x82740E68;
	sub_82299080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740E70;
	sub_82295D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82740E7C:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82740e94
	if (ctx.cr6.eq) goto loc_82740E94;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x822a82b0
	ctx.lr = 0x82740E94;
	sub_822A82B0(ctx, base);
loc_82740E94:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,-14064
	ctx.r11.s64 = ctx.r11.s64 + -14064;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82740eb0
	if (ctx.cr6.eq) goto loc_82740EB0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82740eb4
	goto loc_82740EB4;
loc_82740EB0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82740EB4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823be038
	ctx.lr = 0x82740EC8;
	sub_823BE038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82740EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82295d40
	ctx.lr = 0x82740EEC;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r3,r3,58,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8239dac8
	ctx.lr = 0x82740EFC;
	sub_8239DAC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf2d8
	ctx.lr = 0x82740F08;
	sub_823BF2D8(ctx, base);
	// addi r30,r26,928
	ctx.r30.s64 = ctx.r26.s64 + 928;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823bef80
	ctx.lr = 0x82740F20;
	sub_823BEF80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823bef80
	ctx.lr = 0x82740F34;
	sub_823BEF80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d40
	ctx.lr = 0x82740F3C;
	sub_82295D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82740F48"))) PPC_WEAK_FUNC(sub_82740F48);
PPC_FUNC_IMPL(__imp__sub_82740F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,1156
	ctx.r3.s64 = ctx.r3.s64 + 1156;
	// b 0x82745cb0
	sub_82745CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82740F60"))) PPC_WEAK_FUNC(sub_82740F60);
PPC_FUNC_IMPL(__imp__sub_82740F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82740F64"))) PPC_WEAK_FUNC(sub_82740F64);
PPC_FUNC_IMPL(__imp__sub_82740F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82740F68"))) PPC_WEAK_FUNC(sub_82740F68);
PPC_FUNC_IMPL(__imp__sub_82740F68) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x82740F80;
	sub_82294350(ctx, base);
	// lwz r10,1160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82740fa0
	if (!ctx.cr6.gt) goto loc_82740FA0;
	// lwz r10,1156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,1156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82740FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82740FB0"))) PPC_WEAK_FUNC(sub_82740FB0);
PPC_FUNC_IMPL(__imp__sub_82740FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82740FB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82740fdc
	if (!ctx.cr6.lt) goto loc_82740FDC;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,1156
	ctx.r3.s64 = ctx.r30.s64 + 1156;
	// bl 0x82745cb0
	ctx.lr = 0x82740FDC;
	sub_82745CB0(ctx, base);
loc_82740FDC:
	// lwz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1156);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82741080
	if (ctx.cr6.eq) goto loc_82741080;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r11,-21868
	ctx.r4.s64 = ctx.r11.s64 + -21868;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r10,-24656
	ctx.r29.s64 = ctx.r10.s64 + -24656;
	// addi r28,r9,11744
	ctx.r28.s64 = ctx.r9.s64 + 11744;
	// bl 0x822960c0
	ctx.lr = 0x82741010;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82741020;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82741030;
	sub_82295FF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82741038;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82741040;
	sub_82299080(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82741054
	if (ctx.cr6.eq) goto loc_82741054;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8274105c
	goto loc_8274105C;
loc_82741054:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8274105C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747820
	ctx.lr = 0x82741068;
	sub_82747820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741078
	if (ctx.cr6.eq) goto loc_82741078;
	// lwz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1156);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_82741078:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82741080;
	sub_82299080(ctx, base);
loc_82741080:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82741088"))) PPC_WEAK_FUNC(sub_82741088);
PPC_FUNC_IMPL(__imp__sub_82741088) {
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
	// lwz r11,1160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x827410bc
	if (!ctx.cr6.lt) goto loc_827410BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,1156
	ctx.r3.s64 = ctx.r30.s64 + 1156;
	// bl 0x82745cb0
	ctx.lr = 0x827410BC;
	sub_82745CB0(ctx, base);
loc_827410BC:
	// lwz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1156);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82741120
	if (ctx.cr6.eq) goto loc_82741120;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21868
	ctx.r4.s64 = ctx.r11.s64 + -21868;
	// bl 0x822960c0
	ctx.lr = 0x827410E0;
	sub_822960C0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827410f4
	if (ctx.cr6.eq) goto loc_827410F4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x827410fc
	goto loc_827410FC;
loc_827410F4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_827410FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747820
	ctx.lr = 0x82741108;
	sub_82747820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741118
	if (ctx.cr6.eq) goto loc_82741118;
	// lwz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1156);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82741118:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82741120;
	sub_82299080(ctx, base);
loc_82741120:
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

__attribute__((alias("__imp__sub_82741138"))) PPC_WEAK_FUNC(sub_82741138);
PPC_FUNC_IMPL(__imp__sub_82741138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82741140;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r27,25344(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82294350
	ctx.lr = 0x82741154;
	sub_82294350(ctx, base);
	// lwz r10,1160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82741174
	if (!ctx.cr6.gt) goto loc_82741174;
	// lwz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,1156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_82741174:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r28,r11,-21836
	ctx.r28.s64 = ctx.r11.s64 + -21836;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r10,-24656
	ctx.r30.s64 = ctx.r10.s64 + -24656;
	// addi r29,r9,11744
	ctx.r29.s64 = ctx.r9.s64 + 11744;
	// addi r26,r8,11544
	ctx.r26.s64 = ctx.r8.s64 + 11544;
	// bl 0x822960c0
	ctx.lr = 0x827411A0;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82295ff0
	ctx.lr = 0x827411B0;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82295ff0
	ctx.lr = 0x827411C0;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82295ff0
	ctx.lr = 0x827411D0;
	sub_82295FF0(ctx, base);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x827411f4
	if (ctx.cr6.eq) goto loc_827411F4;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x827411F4;
	sub_82294520(ctx, base);
loc_827411F4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x827411FC;
	sub_82294CC8(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82741220
	if (ctx.cr6.eq) goto loc_82741220;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294520
	ctx.lr = 0x82741220;
	sub_82294520(ctx, base);
loc_82741220:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82294cc8
	ctx.lr = 0x82741228;
	sub_82294CC8(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274124c
	if (ctx.cr6.eq) goto loc_8274124C;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294520
	ctx.lr = 0x8274124C;
	sub_82294520(ctx, base);
loc_8274124C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82294cc8
	ctx.lr = 0x82741254;
	sub_82294CC8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bne cr6,0x8274127c
	if (!ctx.cr6.eq) goto loc_8274127C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8274127C:
	// lis r30,-31889
	ctx.r30.s64 = -2089877504;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,30976(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30976);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827412A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827412c0
	if (ctx.cr6.eq) goto loc_827412C0;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = ctx.r11.s64 + 4016;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823645e8
	ctx.lr = 0x827412C0;
	sub_823645E8(ctx, base);
loc_827412C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822960c0
	ctx.lr = 0x827412CC;
	sub_822960C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bne cr6,0x827412ec
	if (!ctx.cr6.eq) goto loc_827412EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_827412EC:
	// lwz r3,30976(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8274132c
	if (ctx.cr6.eq) goto loc_8274132C;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,4232
	ctx.r4.s64 = ctx.r11.s64 + 4232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823645e8
	ctx.lr = 0x8274132C;
	sub_823645E8(ctx, base);
loc_8274132C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82741350
	if (ctx.cr6.eq) goto loc_82741350;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82741350;
	sub_82294520(ctx, base);
loc_82741350:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82741358;
	sub_82294CC8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274137c
	if (ctx.cr6.eq) goto loc_8274137C;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x8274137C;
	sub_82294520(ctx, base);
loc_8274137C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82741384;
	sub_82294CC8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827413a8
	if (ctx.cr6.eq) goto loc_827413A8;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x827413A8;
	sub_82294520(ctx, base);
loc_827413A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x827413B0;
	sub_82294CC8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827413d4
	if (ctx.cr6.eq) goto loc_827413D4;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x827413D4;
	sub_82294520(ctx, base);
loc_827413D4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x827413DC;
	sub_82294CC8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827413E4"))) PPC_WEAK_FUNC(sub_827413E4);
PPC_FUNC_IMPL(__imp__sub_827413E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827413E8"))) PPC_WEAK_FUNC(sub_827413E8);
PPC_FUNC_IMPL(__imp__sub_827413E8) {
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
	// bgt cr6,0x82741414
	if (ctx.cr6.gt) goto loc_82741414;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8274141c
	goto loc_8274141C;
loc_82741414:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8274141C:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82741424;
	sub_8258A128(ctx, base);
	// lwz r11,2220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2220);
	// lwz r3,1704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,1040(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8274143C;
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
}

__attribute__((alias("__imp__sub_82741450"))) PPC_WEAK_FUNC(sub_82741450);
PPC_FUNC_IMPL(__imp__sub_82741450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82741458;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r24,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r24.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r25,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r25.u32);
	// lwz r9,32(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// addi r26,r24,28
	ctx.r26.s64 = ctx.r24.s64 + 28;
	// stw r24,-31900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31900, ctx.r24.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r15,r11,11272
	ctx.r15.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x827414a0
	if (ctx.cr6.eq) goto loc_827414A0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x827414a4
	goto loc_827414A4;
loc_827414A0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_827414A4:
	// bl 0x82a0f238
	ctx.lr = 0x827414A8;
	sub_82A0F238(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r4,r11,13612
	ctx.r4.s64 = ctx.r11.s64 + 13612;
	// bl 0x82295680
	ctx.lr = 0x827414B8;
	sub_82295680(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82356cf0
	ctx.lr = 0x827414C4;
	sub_82356CF0(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,25348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// bl 0x82355680
	ctx.lr = 0x827414D0;
	sub_82355680(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827414EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r6,300(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 300);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82741500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,296(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 296);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82741514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// stw r4,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82741598
	if (ctx.cr6.eq) goto loc_82741598;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82741598
	if (ctx.cr6.eq) goto loc_82741598;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82741560
	if (ctx.cr6.eq) goto loc_82741560;
loc_82741548:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82741560
	if (ctx.cr6.eq) goto loc_82741560;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82741548
	if (!ctx.cr6.eq) goto loc_82741548;
loc_82741560:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82741574
	if (ctx.cr6.eq) goto loc_82741574;
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// b 0x8274158c
	goto loc_8274158C;
loc_82741574:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233e028
	ctx.lr = 0x82741588;
	sub_8233E028(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_8274158C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82745a48
	ctx.lr = 0x82741598;
	sub_82745A48(ctx, base);
loc_82741598:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82743d48
	ctx.lr = 0x827415A0;
	sub_82743D48(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r8,r9,-13352
	ctx.r8.s64 = ctx.r9.s64 + -13352;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,-13352(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13352, ctx.r10.u32);
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// bl 0x82bea278
	ctx.lr = 0x827415C4;
	sub_82BEA278(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822b2a20
	ctx.lr = 0x827415D0;
	sub_822B2A20(ctx, base);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x827415f8
	if (ctx.cr6.eq) goto loc_827415F8;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827415F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r17,176(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
loc_827415F8:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82741830
	if (ctx.cr6.eq) goto loc_82741830;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-21816
	ctx.r4.s64 = ctx.r11.s64 + -21816;
	// bl 0x823bf2d8
	ctx.lr = 0x82741618;
	sub_823BF2D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82741640
	if (!ctx.cr6.eq) goto loc_82741640;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r11,856(r16)
	PPC_STORE_U8(ctx.r16.u32 + 856, ctx.r11.u8);
	// addi r3,r16,860
	ctx.r3.s64 = ctx.r16.s64 + 860;
	// bl 0x822bbe90
	ctx.lr = 0x82741634;
	sub_822BBE90(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8273d160
	ctx.lr = 0x8274163C;
	sub_8273D160(ctx, base);
	// stb r18,856(r16)
	PPC_STORE_U8(ctx.r16.u32 + 856, ctx.r18.u8);
loc_82741640:
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8274165c
	if (ctx.cr6.gt) goto loc_8274165C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82741664
	goto loc_82741664;
loc_8274165C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82741664:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x82748138
	ctx.lr = 0x8274166C;
	sub_82748138(ctx, base);
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r18,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r18.u32);
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// bl 0x824204e0
	ctx.lr = 0x82741684;
	sub_824204E0(ctx, base);
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// bl 0x8236b018
	ctx.lr = 0x8274168C;
	sub_8236B018(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// bl 0x82421118
	ctx.lr = 0x82741698;
	sub_82421118(ctx, base);
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x827416b4
	if (ctx.cr6.gt) goto loc_827416B4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x827416bc
	goto loc_827416BC;
loc_827416B4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827416BC:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x827480d8
	ctx.lr = 0x827416C4;
	sub_827480D8(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827416E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
loc_827416E8:
	// addic. r31,r31,1
	ctx.xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82741830
	if (ctx.cr0.lt) goto loc_82741830;
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82741710
	if (!ctx.cr6.lt) goto loc_82741710;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827416e8
	if (ctx.cr6.eq) goto loc_827416E8;
loc_82741710:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82741830
	if (ctx.cr6.lt) goto loc_82741830;
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82741830
	if (!ctx.cr6.lt) goto loc_82741830;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827417bc
	if (ctx.cr6.eq) goto loc_827417BC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,492(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 492);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82741768
	if (ctx.cr6.eq) goto loc_82741768;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r4,492(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 492);
	// bl 0x8276ee70
	ctx.lr = 0x82741768;
	sub_8276EE70(ctx, base);
loc_82741768:
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82741780
	if (!ctx.cr6.lt) goto loc_82741780;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x82741784
	goto loc_82741784;
loc_82741780:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82741784:
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// bl 0x8276ee70
	ctx.lr = 0x8274179C;
	sub_8276EE70(ctx, base);
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827417b4
	if (!ctx.cr6.lt) goto loc_827417B4;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x827417b8
	goto loc_827417B8;
loc_827417B4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_827417B8:
	// stw r18,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r18.u32);
loc_827417BC:
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827417d4
	if (!ctx.cr6.lt) goto loc_827417D4;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x827417d8
	goto loc_827417D8;
loc_827417D4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_827417D8:
	// stw r18,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r18.u32);
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827417f4
	if (!ctx.cr6.lt) goto loc_827417F4;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x827417f8
	goto loc_827417F8;
loc_827417F4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_827417F8:
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r9.u32);
loc_82741804:
	// addic. r31,r31,1
	ctx.xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82741710
	if (ctx.cr0.lt) goto loc_82741710;
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82741710
	if (!ctx.cr6.lt) goto loc_82741710;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82741804
	if (ctx.cr6.eq) goto loc_82741804;
	// b 0x82741710
	goto loc_82741710;
loc_82741830:
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82741888
	if (ctx.cr6.eq) goto loc_82741888;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741888
	if (ctx.cr6.eq) goto loc_82741888;
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// lwz r3,736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82741888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82741888:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r29,r11,58,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239dac8
	ctx.lr = 0x8274189C;
	sub_8239DAC8(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r11,-31264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827418d4
	if (ctx.cr6.eq) goto loc_827418D4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r12,-16385
	ctx.r12.s64 = -16385;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// stw r10,-31264(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31264, ctx.r10.u32);
	// bl 0x8239dac8
	ctx.lr = 0x827418D4;
	sub_8239DAC8(ctx, base);
loc_827418D4:
	// bl 0x823648a0
	ctx.lr = 0x827418D8;
	sub_823648A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239dac8
	ctx.lr = 0x827418E4;
	sub_8239DAC8(ctx, base);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// stw r18,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r18.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// lwz r31,25276(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25276);
	// stw r11,25276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25276, ctx.r11.u32);
	// bl 0x822b4a40
	ctx.lr = 0x82741900;
	sub_822B4A40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x822b4bf8
	ctx.lr = 0x8274190C;
	sub_822B4BF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82741924
	if (ctx.cr6.eq) goto loc_82741924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b4e58
	ctx.lr = 0x8274191C;
	sub_822B4E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82741924;
	sub_82294A58(ctx, base);
loc_82741924:
	// bl 0x823a1178
	ctx.lr = 0x82741928;
	sub_823A1178(ctx, base);
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// lwz r27,752(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82741a00
	if (ctx.cr6.eq) goto loc_82741A00;
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82741a00
	if (ctx.cr6.eq) goto loc_82741A00;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r1,260
	ctx.r31.s64 = ctx.r1.s64 + 260;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r4,-2464(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2464);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x8274196C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,228(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82741988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// lwz r7,752(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// lwz r5,120(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// lwz r4,196(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 196);
	// addic. r31,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r31.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x827419e0
	if (ctx.cr0.lt) goto loc_827419E0;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x827419b0
	goto loc_827419B0;
loc_827419AC:
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
loc_827419B0:
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r3,120(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r7,264(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// lwzx r4,r8,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x827419D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x827419ac
	if (!ctx.cr0.lt) goto loc_827419AC;
loc_827419E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239dac8
	ctx.lr = 0x827419EC;
	sub_8239DAC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239dac8
	ctx.lr = 0x827419F8;
	sub_8239DAC8(ctx, base);
	// lwz r24,636(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r25,652(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
loc_82741A00:
	// bl 0x8236b738
	ctx.lr = 0x82741A04;
	sub_8236B738(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,31796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31796);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82741a6c
	if (ctx.cr6.eq) goto loc_82741A6C;
loc_82741A18:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239dac8
	ctx.lr = 0x82741A24;
	sub_8239DAC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e645c8
	ctx.lr = 0x82741A2C;
	sub_82E645C8(ctx, base);
	// lwz r3,25344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x82294350
	ctx.lr = 0x82741A38;
	sub_82294350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741a44
	if (ctx.cr6.eq) goto loc_82741A44;
	// lwz r31,1092(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
loc_82741A44:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8236b738
	ctx.lr = 0x82741A60;
	sub_8236B738(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82741a18
	if (!ctx.cr6.eq) goto loc_82741A18;
loc_82741A6C:
	// bl 0x8236b738
	ctx.lr = 0x82741A70;
	sub_8236B738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82741ad0
	if (ctx.cr6.eq) goto loc_82741AD0;
loc_82741A7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239dac8
	ctx.lr = 0x82741A88;
	sub_8239DAC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e645c8
	ctx.lr = 0x82741A90;
	sub_82E645C8(ctx, base);
	// lwz r3,25344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x82294350
	ctx.lr = 0x82741A9C;
	sub_82294350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741aa8
	if (ctx.cr6.eq) goto loc_82741AA8;
	// lwz r31,1092(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
loc_82741AA8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8236b738
	ctx.lr = 0x82741AC4;
	sub_8236B738(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82741a7c
	if (!ctx.cr6.eq) goto loc_82741A7C;
loc_82741AD0:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// bl 0x82357a78
	ctx.lr = 0x82741AE0;
	sub_82357A78(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82741b48
	if (ctx.cr6.eq) goto loc_82741B48;
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// lwz r11,744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82741b48
	if (!ctx.cr6.eq) goto loc_82741B48;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82747fc8
	ctx.lr = 0x82741B1C;
	sub_82747FC8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82741b40
	if (ctx.cr6.eq) goto loc_82741B40;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x82741B40;
	sub_82294520(ctx, base);
loc_82741B40:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x82741B48;
	sub_82294CC8(ctx, base);
loc_82741B48:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r10,-3728
	ctx.r7.s64 = ctx.r10.s64 + -3728;
	// lwz r3,28876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28876);
	// addi r5,r9,-21804
	ctx.r5.s64 = ctx.r9.s64 + -21804;
	// addi r4,r8,12840
	ctx.r4.s64 = ctx.r8.s64 + 12840;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82741c0c
	if (ctx.cr6.eq) goto loc_82741C0C;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-21740
	ctx.r4.s64 = ctx.r11.s64 + -21740;
	// bl 0x822960c0
	ctx.lr = 0x82741B9C;
	sub_822960C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233c6a0
	ctx.lr = 0x82741BA8;
	sub_8233C6A0(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82741bd0
	if (ctx.cr6.eq) goto loc_82741BD0;
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x82741BD0;
	sub_82294520(ctx, base);
loc_82741BD0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x82741BD8;
	sub_82294CC8(ctx, base);
	// lwz r3,25344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82741bec
	if (ctx.cr6.eq) goto loc_82741BEC;
	// bl 0x82741138
	ctx.lr = 0x82741BE8;
	sub_82741138(ctx, base);
	// b 0x82741c0c
	goto loc_82741C0C;
loc_82741BEC:
	// bl 0x82294350
	ctx.lr = 0x82741BF0;
	sub_82294350(ctx, base);
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82741c0c
	if (!ctx.cr6.gt) goto loc_82741C0C;
	// lwz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// lwz r10,1156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// stw r18,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r18.u32);
loc_82741C0C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r20,r11,11544
	ctx.r20.s64 = ctx.r11.s64 + 11544;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82295ff0
	ctx.lr = 0x82741C24;
	sub_82295FF0(ctx, base);
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r18,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// lwz r31,228(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82741c48
	if (!ctx.cr6.eq) goto loc_82741C48;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82741C48:
	// lis r21,-31889
	ctx.r21.s64 = -2089877504;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,30976(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30976);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741c94
	if (ctx.cr6.eq) goto loc_82741C94;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82741c88
	if (!ctx.cr6.eq) goto loc_82741C88;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82741C88:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a7bf8
	ctx.lr = 0x82741C94;
	sub_822A7BF8(ctx, base);
loc_82741C94:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82741cf4
	if (ctx.cr6.eq) goto loc_82741CF4;
	// stw r18,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741d2c
	if (ctx.cr6.eq) goto loc_82741D2C;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82741cd0
	if (!ctx.cr6.eq) goto loc_82741CD0;
	// bl 0x822900a0
	ctx.lr = 0x82741CCC;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82741CD0:
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
	ctx.lr = 0x82741CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
loc_82741CF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741d2c
	if (ctx.cr6.eq) goto loc_82741D2C;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82741d14
	if (!ctx.cr6.eq) goto loc_82741D14;
	// bl 0x822900a0
	ctx.lr = 0x82741D10;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82741D14:
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
	ctx.lr = 0x82741D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82741D2C:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// stw r18,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// beq cr6,0x82741d80
	if (ctx.cr6.eq) goto loc_82741D80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82741db0
	if (ctx.cr6.eq) goto loc_82741DB0;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82741d60
	if (!ctx.cr6.eq) goto loc_82741D60;
	// bl 0x822900a0
	ctx.lr = 0x82741D5C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82741D60:
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
	ctx.lr = 0x82741D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82741D80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82741db0
	if (ctx.cr6.eq) goto loc_82741DB0;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82741d9c
	if (!ctx.cr6.eq) goto loc_82741D9C;
	// bl 0x822900a0
	ctx.lr = 0x82741D98;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82741D9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82741DB0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82741dc4
	if (ctx.cr6.eq) goto loc_82741DC4;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82741dc8
	goto loc_82741DC8;
loc_82741DC4:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82741DC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a7bf8
	ctx.lr = 0x82741DD4;
	sub_822A7BF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82741e9c
	if (!ctx.cr6.eq) goto loc_82741E9C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82741df0
	if (ctx.cr6.eq) goto loc_82741DF0;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82741df4
	goto loc_82741DF4;
loc_82741DF0:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
loc_82741DF4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-21732
	ctx.r4.s64 = ctx.r11.s64 + -21732;
	// bl 0x8232e868
	ctx.lr = 0x82741E04;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82295908
	ctx.lr = 0x82741E10;
	sub_82295908(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82741e5c
	if (ctx.cr6.eq) goto loc_82741E5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82741e8c
	if (ctx.cr6.eq) goto loc_82741E8C;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82741e3c
	if (!ctx.cr6.eq) goto loc_82741E3C;
	// bl 0x822900a0
	ctx.lr = 0x82741E38;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82741E3C:
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
	ctx.lr = 0x82741E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82741E5C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82741e8c
	if (ctx.cr6.eq) goto loc_82741E8C;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82741e78
	if (!ctx.cr6.eq) goto loc_82741E78;
	// bl 0x822900a0
	ctx.lr = 0x82741E74;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82741E78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82741E8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82741E9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2692
	ctx.r4.s64 = ctx.r11.s64 + -2692;
	// bl 0x82747878
	ctx.lr = 0x82741EAC;
	sub_82747878(ctx, base);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// stw r3,-31264(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31264, ctx.r3.u32);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lwz r3,-31264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// bl 0x8241cd70
	ctx.lr = 0x82741EC8;
	sub_8241CD70(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82742558
	if (ctx.cr6.eq) goto loc_82742558;
	// lwz r11,64(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 64);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82742300
	if (!ctx.cr6.gt) goto loc_82742300;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// addi r24,r11,19480
	ctx.r24.s64 = ctx.r11.s64 + 19480;
	// addi r23,r10,18512
	ctx.r23.s64 = ctx.r10.s64 + 18512;
loc_82741EF4:
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827421c0
	if (!ctx.cr6.eq) goto loc_827421C0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233e1a0
	ctx.lr = 0x82741F10;
	sub_8233E1A0(ctx, base);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x82741f28
	if (!ctx.cr6.eq) goto loc_82741F28;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82741F28:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a6e40
	ctx.lr = 0x82741F30;
	sub_822A6E40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82742154
	if (!ctx.cr6.eq) goto loc_82742154;
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82742004
	if (!ctx.cr6.gt) goto loc_82742004;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82295ff0
	ctx.lr = 0x82741F60;
	sub_82295FF0(ctx, base);
	// stw r18,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r18.u32);
	// stw r18,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r18.u32);
	// stw r18,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r18.u32);
	// lwz r31,332(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r30,328(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82741f84
	if (!ctx.cr6.eq) goto loc_82741F84;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82741F84:
	// lwz r3,30976(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,280
	ctx.r6.s64 = ctx.r1.s64 + 280;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82741FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82741fcc
	if (ctx.cr6.eq) goto loc_82741FCC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82741fc0
	if (!ctx.cr6.eq) goto loc_82741FC0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82741FC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a7bf8
	ctx.lr = 0x82741FCC;
	sub_822A7BF8(ctx, base);
loc_82741FCC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x82741fdc
	if (!ctx.cr6.eq) goto loc_82741FDC;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82741FDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a7bf8
	ctx.lr = 0x82741FE8;
	sub_822A7BF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82299080
	ctx.lr = 0x82741FF4;
	sub_82299080(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82299080
	ctx.lr = 0x82741FFC;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82742154
	if (!ctx.cr6.eq) goto loc_82742154;
loc_82742004:
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82742028
	if (!ctx.cr6.eq) goto loc_82742028;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82742154
	if (ctx.cr6.eq) goto loc_82742154;
loc_82742028:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233e1a0
	ctx.lr = 0x82742030;
	sub_8233E1A0(ctx, base);
	// stw r18,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r18.u32);
	// stw r18,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r18.u32);
	// stw r18,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r18.u32);
	// lwz r29,228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82742054
	if (!ctx.cr6.eq) goto loc_82742054;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82742054:
	// lwz r3,30976(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,264
	ctx.r6.s64 = ctx.r1.s64 + 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82742078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82742144
	if (ctx.cr6.eq) goto loc_82742144;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82295ff0
	ctx.lr = 0x82742090;
	sub_82295FF0(ctx, base);
	// stw r18,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r18.u32);
	// stw r18,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r18.u32);
	// stw r18,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r18.u32);
	// lwz r31,300(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r30,296(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x827420b4
	if (!ctx.cr6.eq) goto loc_827420B4;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_827420B4:
	// lwz r3,30976(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30976);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827420D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827420fc
	if (ctx.cr6.eq) goto loc_827420FC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x827420f0
	if (!ctx.cr6.eq) goto loc_827420F0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_827420F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a7bf8
	ctx.lr = 0x827420FC;
	sub_822A7BF8(ctx, base);
loc_827420FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x8274210c
	if (!ctx.cr6.eq) goto loc_8274210C;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_8274210C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a7bf8
	ctx.lr = 0x82742118;
	sub_822A7BF8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x82742128
	if (!ctx.cr6.eq) goto loc_82742128;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82742128:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a6e40
	ctx.lr = 0x82742130;
	sub_822A6E40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82299080
	ctx.lr = 0x8274213C;
	sub_82299080(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82299080
	ctx.lr = 0x82742144;
	sub_82299080(ctx, base);
loc_82742144:
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82299080
	ctx.lr = 0x8274214C;
	sub_82299080(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82299080
	ctx.lr = 0x82742154;
	sub_82299080(ctx, base);
loc_82742154:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274217c
	if (ctx.cr6.eq) goto loc_8274217C;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x82742178;
	sub_82294520(ctx, base);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8274217C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827421ac
	if (ctx.cr6.eq) goto loc_827421AC;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82742198
	if (!ctx.cr6.eq) goto loc_82742198;
	// bl 0x822900a0
	ctx.lr = 0x82742194;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82742198:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827421AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827421AC:
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// beq cr6,0x8274241c
	if (ctx.cr6.eq) goto loc_8274241C;
loc_827421C0:
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r3,360(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// xor r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// xor r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// xor r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// xor r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// or r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82742360
	if (!ctx.cr6.eq) goto loc_82742360;
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8232e868
	ctx.lr = 0x82742278;
	sub_8232E868(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8274228c
	if (!ctx.cr6.eq) goto loc_8274228C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_8274228C:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827422A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8232d178
	ctx.lr = 0x827422BC;
	sub_8232D178(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827422e0
	if (ctx.cr6.eq) goto loc_827422E0;
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x827422E0;
	sub_82294520(ctx, base);
loc_827422E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x827422E8;
	sub_82294CC8(ctx, base);
	// lwz r11,64(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 64);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,60
	ctx.r27.s64 = ctx.r27.s64 + 60;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82741ef4
	if (ctx.cr6.lt) goto loc_82741EF4;
	// lwz r24,636(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
loc_82742300:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82742314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r9,148(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 148);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r8,208(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82742530
	if (ctx.cr6.eq) goto loc_82742530;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r8,208(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82742528
	if (ctx.cr6.eq) goto loc_82742528;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// b 0x8274252c
	goto loc_8274252C;
loc_82742360:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8274237c
	if (!ctx.cr6.eq) goto loc_8274237C;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x822960c0
	ctx.lr = 0x82742378;
	sub_822960C0(ctx, base);
	// b 0x82742384
	goto loc_82742384;
loc_8274237C:
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82742384;
	sub_8233E1A0(ctx, base);
loc_82742384:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82742398
	if (!ctx.cr6.eq) goto loc_82742398;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
loc_82742398:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,18452
	ctx.r4.s64 = ctx.r11.s64 + 18452;
	// bl 0x8232e868
	ctx.lr = 0x827423A8;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,652(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// bl 0x82295908
	ctx.lr = 0x827423B4;
	sub_82295908(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827423d8
	if (ctx.cr6.eq) goto loc_827423D8;
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x827423D8;
	sub_82294520(ctx, base);
loc_827423D8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294cc8
	ctx.lr = 0x827423E0;
	sub_82294CC8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82742404
	if (ctx.cr6.eq) goto loc_82742404;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x82742404;
	sub_82294520(ctx, base);
loc_82742404:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x8274240C;
	sub_82294CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8274241C:
	// lwz r11,60(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 60);
	// mulli r10,r22,60
	ctx.r10.s64 = ctx.r22.s64 * 60;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8233e1a0
	ctx.lr = 0x82742430;
	sub_8233E1A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82742444
	if (ctx.cr6.eq) goto loc_82742444;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82742448
	goto loc_82742448;
loc_82742444:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
loc_82742448:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-21672
	ctx.r4.s64 = ctx.r11.s64 + -21672;
	// bl 0x8232e868
	ctx.lr = 0x82742458;
	sub_8232E868(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,652(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// bl 0x82295908
	ctx.lr = 0x82742464;
	sub_82295908(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82742488
	if (ctx.cr6.eq) goto loc_82742488;
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82294520
	ctx.lr = 0x82742488;
	sub_82294520(ctx, base);
loc_82742488:
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827424bc
	if (ctx.cr6.eq) goto loc_827424BC;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827424a8
	if (!ctx.cr6.eq) goto loc_827424A8;
	// bl 0x822900a0
	ctx.lr = 0x827424A4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_827424A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827424BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827424BC:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r18,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827424e0
	if (ctx.cr6.eq) goto loc_827424E0;
	// stw r18,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r18.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82294520
	ctx.lr = 0x827424E0;
	sub_82294520(ctx, base);
loc_827424E0:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82741e8c
	if (ctx.cr6.eq) goto loc_82741E8C;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82741e78
	if (!ctx.cr6.eq) goto loc_82741E78;
	// bl 0x822900a0
	ctx.lr = 0x82742500;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82742518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82742528:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_8274252C:
	// stw r10,25324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25324, ctx.r10.u32);
loc_82742530:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82742548
	if (ctx.cr6.gt) goto loc_82742548;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82742550
	goto loc_82742550;
loc_82742548:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82742550:
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,940(r11)
	PPC_STORE_U8(ctx.r11.u32 + 940, ctx.r10.u8);
loc_82742558:
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-31264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,-28424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28424, ctx.r11.u32);
	// bl 0x82420840
	ctx.lr = 0x82742570;
	sub_82420840(ctx, base);
	// lwz r9,736(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 736);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82742594
	if (ctx.cr6.eq) goto loc_82742594;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,18180
	ctx.r4.s64 = ctx.r11.s64 + 18180;
	// bl 0x823bf2d8
	ctx.lr = 0x8274258C;
	sub_823BF2D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82742674
	if (ctx.cr6.eq) goto loc_82742674;
loc_82742594:
	// lwz r11,924(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827425a4
	if (ctx.cr6.eq) goto loc_827425A4;
	// stw r18,924(r16)
	PPC_STORE_U32(ctx.r16.u32 + 924, ctx.r18.u32);
loc_827425A4:
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// bl 0x8241c3c0
	ctx.lr = 0x827425C0;
	sub_8241C3C0(ctx, base);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82423348
	ctx.lr = 0x827425D4;
	sub_82423348(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82742630
	if (ctx.cr6.eq) goto loc_82742630;
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82742668
	if (ctx.cr6.eq) goto loc_82742668;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274260c
	if (!ctx.cr6.eq) goto loc_8274260C;
	// bl 0x822900a0
	ctx.lr = 0x82742608;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_8274260C:
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
	ctx.lr = 0x8274262C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
loc_82742630:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82742668
	if (ctx.cr6.eq) goto loc_82742668;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82742650
	if (!ctx.cr6.eq) goto loc_82742650;
	// bl 0x822900a0
	ctx.lr = 0x8274264C;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82742650:
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
	ctx.lr = 0x82742668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82742668:
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
loc_82742674:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-31264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82420b20
	ctx.lr = 0x82742684;
	sub_82420B20(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r16,928
	ctx.r3.s64 = ctx.r16.s64 + 928;
	// bl 0x823beaf8
	ctx.lr = 0x82742690;
	sub_823BEAF8(ctx, base);
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x827426ac
	if (ctx.cr6.gt) goto loc_827426AC;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x827426b4
	goto loc_827426B4;
loc_827426AC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827426B4:
	// lbz r11,940(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 940);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x827426cc
	if (!ctx.cr6.eq) goto loc_827426CC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r16,996
	ctx.r3.s64 = ctx.r16.s64 + 996;
	// bl 0x823beaf8
	ctx.lr = 0x827426CC;
	sub_823BEAF8(ctx, base);
loc_827426CC:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_827426D0:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x827428a0
	if (ctx.cr0.lt) goto loc_827428A0;
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827426f8
	if (!ctx.cr6.lt) goto loc_827426F8;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827426d0
	if (ctx.cr6.eq) goto loc_827426D0;
loc_827426F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827428a0
	if (ctx.cr6.lt) goto loc_827428A0;
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827428a0
	if (!ctx.cr6.lt) goto loc_827428A0;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823beb78
	ctx.lr = 0x82742738;
	sub_823BEB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x826214c0
	ctx.lr = 0x82742748;
	sub_826214C0(ctx, base);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827427a4
	if (ctx.cr6.eq) goto loc_827427A4;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827427e0
	if (ctx.cr6.eq) goto loc_827427E0;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82742780
	if (!ctx.cr6.eq) goto loc_82742780;
	// bl 0x822900a0
	ctx.lr = 0x8274277C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82742780:
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
	ctx.lr = 0x8274279C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// b 0x827427a8
	goto loc_827427A8;
loc_827427A4:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_827427A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827427e0
	if (ctx.cr6.eq) goto loc_827427E0;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827427c8
	if (!ctx.cr6.eq) goto loc_827427C8;
	// bl 0x822900a0
	ctx.lr = 0x827427C4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_827427C8:
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
	ctx.lr = 0x827427E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827427E0:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// beq cr6,0x82742838
	if (ctx.cr6.eq) goto loc_82742838;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82742868
	if (ctx.cr6.eq) goto loc_82742868;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82742818
	if (!ctx.cr6.eq) goto loc_82742818;
	// bl 0x822900a0
	ctx.lr = 0x82742814;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82742818:
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
	ctx.lr = 0x82742834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82742838:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82742868
	if (ctx.cr6.eq) goto loc_82742868;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82742854
	if (!ctx.cr6.eq) goto loc_82742854;
	// bl 0x822900a0
	ctx.lr = 0x82742850;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82742854:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82742868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82742868:
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
loc_82742874:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x827426f8
	if (ctx.cr0.lt) goto loc_827426F8;
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827426f8
	if (!ctx.cr6.lt) goto loc_827426F8;
	// lwz r11,740(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82742874
	if (ctx.cr6.eq) goto loc_82742874;
	// b 0x827426f8
	goto loc_827426F8;
loc_827428A0:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,-3816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82742968
	if (ctx.cr6.eq) goto loc_82742968;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,6512
	ctx.r31.s64 = ctx.r11.s64 + 6512;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r30,r10,-8912
	ctx.r30.s64 = ctx.r10.s64 + -8912;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-5488
	ctx.r5.s64 = ctx.r9.s64 + -5488;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823bf1f8
	ctx.lr = 0x827428D8;
	sub_823BF1F8(ctx, base);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,-21608
	ctx.r5.s64 = ctx.r8.s64 + -21608;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823bf1f8
	ctx.lr = 0x827428F0;
	sub_823BF1F8(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r7,-22528
	ctx.r5.s64 = ctx.r7.s64 + -22528;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823bf1f8
	ctx.lr = 0x82742908;
	sub_823BF1F8(ctx, base);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r5,-21596
	ctx.r5.s64 = ctx.r5.s64 + -21596;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823bf1f8
	ctx.lr = 0x82742920;
	sub_823BF1F8(ctx, base);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r3,-21584
	ctx.r5.s64 = ctx.r3.s64 + -21584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823bf1f8
	ctx.lr = 0x82742938;
	sub_823BF1F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-21572
	ctx.r5.s64 = ctx.r11.s64 + -21572;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823bf1f8
	ctx.lr = 0x82742950;
	sub_823BF1F8(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-21560
	ctx.r5.s64 = ctx.r10.s64 + -21560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823bf1f8
	ctx.lr = 0x82742968;
	sub_823BF1F8(ctx, base);
loc_82742968:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// lwz r3,32012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32012);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82742980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,28896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28896);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8274299C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827429c8
	if (ctx.cr6.eq) goto loc_827429C8;
loc_827429B0:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827429c8
	if (ctx.cr6.eq) goto loc_827429C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827429b0
	if (!ctx.cr6.eq) goto loc_827429B0;
loc_827429C8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827429dc
	if (ctx.cr6.eq) goto loc_827429DC;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x827429f8
	goto loc_827429F8;
loc_827429DC:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8233e028
	ctx.lr = 0x827429F4;
	sub_8233E028(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_827429F8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82745620
	ctx.lr = 0x82742A04;
	sub_82745620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
	// bl 0x82295680
	ctx.lr = 0x82742A14;
	sub_82295680(ctx, base);
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
	// bgt cr6,0x82742a34
	if (ctx.cr6.gt) goto loc_82742A34;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82742a3c
	goto loc_82742A3C;
loc_82742A34:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82742A3C:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82742A44;
	sub_8258A128(ctx, base);
	// lwz r11,2220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2220);
	// lwz r3,1704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,1040(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82742A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82742ab8
	if (ctx.cr6.eq) goto loc_82742AB8;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r18.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82742af0
	if (ctx.cr6.eq) goto loc_82742AF0;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82742a94
	if (!ctx.cr6.eq) goto loc_82742A94;
	// bl 0x822900a0
	ctx.lr = 0x82742A90;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82742A94:
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
	ctx.lr = 0x82742AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
loc_82742AB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82742af0
	if (ctx.cr6.eq) goto loc_82742AF0;
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82742ad8
	if (!ctx.cr6.eq) goto loc_82742AD8;
	// bl 0x822900a0
	ctx.lr = 0x82742AD4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82742AD8:
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
	ctx.lr = 0x82742AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82742AF0:
	// stw r18,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r18.u32);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r18.u32);
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// lwz r3,25348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// bl 0x82355770
	ctx.lr = 0x82742B08;
	sub_82355770(ctx, base);
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-22329(r10)
	PPC_STORE_U8(ctx.r10.u32 + -22329, ctx.r11.u8);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82742B24"))) PPC_WEAK_FUNC(sub_82742B24);
PPC_FUNC_IMPL(__imp__sub_82742B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82742B28"))) PPC_WEAK_FUNC(sub_82742B28);
PPC_FUNC_IMPL(__imp__sub_82742B28) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r31,1076
	ctx.r3.s64 = ctx.r31.s64 + 1076;
	// bl 0x82427888
	ctx.lr = 0x82742B4C;
	sub_82427888(ctx, base);
	// stb r30,1088(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1088, ctx.r30.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r31,928
	ctx.r30.s64 = ctx.r31.s64 + 928;
	// addi r31,r11,18180
	ctx.r31.s64 = ctx.r11.s64 + 18180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823bf2d8
	ctx.lr = 0x82742B68;
	sub_823BF2D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82742b84
	if (ctx.cr6.eq) goto loc_82742B84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823bef80
	ctx.lr = 0x82742B84;
	sub_823BEF80(ctx, base);
loc_82742B84:
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

__attribute__((alias("__imp__sub_82742B9C"))) PPC_WEAK_FUNC(sub_82742B9C);
PPC_FUNC_IMPL(__imp__sub_82742B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

