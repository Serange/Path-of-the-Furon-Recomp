#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AD33F0"))) PPC_WEAK_FUNC(sub_82AD33F0);
PPC_FUNC_IMPL(__imp__sub_82AD33F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD33F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
	// bl 0x82295680
	ctx.lr = 0x82AD3414;
	sub_82295680(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361f10
	ctx.lr = 0x82AD3420;
	sub_82361F10(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ad344c
	if (ctx.cr6.eq) goto loc_82AD344C;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82AD344C;
	sub_82294520(ctx, base);
loc_82AD344C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82AD3454;
	sub_82294CC8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad3468
	if (ctx.cr6.eq) goto loc_82AD3468;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x822bbe90
	ctx.lr = 0x82AD3468;
	sub_822BBE90(ctx, base);
loc_82AD3468:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad3490
	if (ctx.cr6.eq) goto loc_82AD3490;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD3490:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,336(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD34B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD34BC"))) PPC_WEAK_FUNC(sub_82AD34BC);
PPC_FUNC_IMPL(__imp__sub_82AD34BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD34C0"))) PPC_WEAK_FUNC(sub_82AD34C0);
PPC_FUNC_IMPL(__imp__sub_82AD34C0) {
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
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD34E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r11,-31264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad354c
	if (ctx.cr6.eq) goto loc_82AD354C;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ad354c
	if (!ctx.cr6.gt) goto loc_82AD354C;
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad354c
	if (ctx.cr6.eq) goto loc_82AD354C;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ad354c
	if (ctx.cr6.eq) goto loc_82AD354C;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad354c
	if (ctx.cr6.eq) goto loc_82AD354C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD354C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD354C:
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

__attribute__((alias("__imp__sub_82AD3560"))) PPC_WEAK_FUNC(sub_82AD3560);
PPC_FUNC_IMPL(__imp__sub_82AD3560) {
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
	// beq cr6,0x82ad35c8
	if (ctx.cr6.eq) goto loc_82AD35C8;
	// bl 0x829ac070
	ctx.lr = 0x82AD3580;
	sub_829AC070(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad35a0
	if (ctx.cr6.eq) goto loc_82AD35A0;
loc_82AD358C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82ad35b0
	if (ctx.cr6.eq) goto loc_82AD35B0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad358c
	if (!ctx.cr6.eq) goto loc_82AD358C;
loc_82AD35A0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad35c8
	if (ctx.cr6.eq) goto loc_82AD35C8;
loc_82AD35B0:
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
loc_82AD35C8:
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

__attribute__((alias("__imp__sub_82AD35E0"))) PPC_WEAK_FUNC(sub_82AD35E0);
PPC_FUNC_IMPL(__imp__sub_82AD35E0) {
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
	// ld r4,772(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 772);
	// bl 0x8229e490
	ctx.lr = 0x82AD360C;
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
	ctx.lr = 0x82AD3628;
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

__attribute__((alias("__imp__sub_82AD3640"))) PPC_WEAK_FUNC(sub_82AD3640);
PPC_FUNC_IMPL(__imp__sub_82AD3640) {
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
	// ld r4,-52(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -52);
	// bl 0x8229e490
	ctx.lr = 0x82AD366C;
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
	ctx.lr = 0x82AD3688;
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

__attribute__((alias("__imp__sub_82AD36A0"))) PPC_WEAK_FUNC(sub_82AD36A0);
PPC_FUNC_IMPL(__imp__sub_82AD36A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,18720
	ctx.r7.s64 = ctx.r9.s64 + 18720;
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

__attribute__((alias("__imp__sub_82AD36D0"))) PPC_WEAK_FUNC(sub_82AD36D0);
PPC_FUNC_IMPL(__imp__sub_82AD36D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD36D8"))) PPC_WEAK_FUNC(sub_82AD36D8);
PPC_FUNC_IMPL(__imp__sub_82AD36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,18720
	ctx.r7.s64 = ctx.r9.s64 + 18720;
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

__attribute__((alias("__imp__sub_82AD3700"))) PPC_WEAK_FUNC(sub_82AD3700);
PPC_FUNC_IMPL(__imp__sub_82AD3700) {
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
	// bl 0x82ad3770
	ctx.lr = 0x82AD3720;
	sub_82AD3770(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad3754
	if (ctx.cr6.eq) goto loc_82AD3754;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad374c
	if (ctx.cr6.lt) goto loc_82AD374C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ad3754
	if (!ctx.cr6.gt) goto loc_82AD3754;
loc_82AD374C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AD3754;
	sub_82294A58(ctx, base);
loc_82AD3754:
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

__attribute__((alias("__imp__sub_82AD3770"))) PPC_WEAK_FUNC(sub_82AD3770);
PPC_FUNC_IMPL(__imp__sub_82AD3770) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,18720
	ctx.r10.s64 = ctx.r11.s64 + 18720;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD3798;
	sub_8229C068(ctx, base);
	// lwz r9,568(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,560
	ctx.r31.s64 = ctx.r30.s64 + 560;
	// stw r11,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ad37c4
	if (ctx.cr6.eq) goto loc_82AD37C4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82AD37C4;
	sub_82294520(ctx, base);
loc_82AD37C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82AD37CC;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82616810
	ctx.lr = 0x82AD37D4;
	sub_82616810(ctx, base);
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

__attribute__((alias("__imp__sub_82AD37EC"))) PPC_WEAK_FUNC(sub_82AD37EC);
PPC_FUNC_IMPL(__imp__sub_82AD37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD37F0"))) PPC_WEAK_FUNC(sub_82AD37F0);
PPC_FUNC_IMPL(__imp__sub_82AD37F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r8,19720
	ctx.r6.s64 = ctx.r8.s64 + 19720;
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r7,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r7.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3834"))) PPC_WEAK_FUNC(sub_82AD3834);
PPC_FUNC_IMPL(__imp__sub_82AD3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3838"))) PPC_WEAK_FUNC(sub_82AD3838);
PPC_FUNC_IMPL(__imp__sub_82AD3838) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3840"))) PPC_WEAK_FUNC(sub_82AD3840);
PPC_FUNC_IMPL(__imp__sub_82AD3840) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r8,19720
	ctx.r6.s64 = ctx.r8.s64 + 19720;
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r7,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD387C"))) PPC_WEAK_FUNC(sub_82AD387C);
PPC_FUNC_IMPL(__imp__sub_82AD387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3880"))) PPC_WEAK_FUNC(sub_82AD3880);
PPC_FUNC_IMPL(__imp__sub_82AD3880) {
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
	// bl 0x82ad38f0
	ctx.lr = 0x82AD38A0;
	sub_82AD38F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad38d4
	if (ctx.cr6.eq) goto loc_82AD38D4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad38cc
	if (ctx.cr6.lt) goto loc_82AD38CC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ad38d4
	if (!ctx.cr6.gt) goto loc_82AD38D4;
loc_82AD38CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AD38D4;
	sub_82294A58(ctx, base);
loc_82AD38D4:
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

__attribute__((alias("__imp__sub_82AD38F0"))) PPC_WEAK_FUNC(sub_82AD38F0);
PPC_FUNC_IMPL(__imp__sub_82AD38F0) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,19720
	ctx.r10.s64 = ctx.r11.s64 + 19720;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD3918;
	sub_8229C068(ctx, base);
	// lwz r9,320(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,312
	ctx.r31.s64 = ctx.r30.s64 + 312;
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ad3944
	if (ctx.cr6.eq) goto loc_82AD3944;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82AD3944;
	sub_82294520(ctx, base);
loc_82AD3944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82AD394C;
	sub_82294CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c6b28
	ctx.lr = 0x82AD3954;
	sub_824C6B28(ctx, base);
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

__attribute__((alias("__imp__sub_82AD396C"))) PPC_WEAK_FUNC(sub_82AD396C);
PPC_FUNC_IMPL(__imp__sub_82AD396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3970"))) PPC_WEAK_FUNC(sub_82AD3970);
PPC_FUNC_IMPL(__imp__sub_82AD3970) {
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
	ctx.lr = 0x82AD3988;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad3a0c
	if (ctx.cr6.eq) goto loc_82AD3A0C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,20100
	ctx.r11.s64 = ctx.r8.s64 + 20100;
	// lis r5,-32083
	ctx.r5.s64 = -2102591488;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,15592
	ctx.r6.s64 = ctx.r5.s64 + 15592;
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
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD39FC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD3A0C:
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

__attribute__((alias("__imp__sub_82AD3A20"))) PPC_WEAK_FUNC(sub_82AD3A20);
PPC_FUNC_IMPL(__imp__sub_82AD3A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD3A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-30808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30808);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad3a54
	if (!ctx.cr6.eq) goto loc_82AD3A54;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249a9d8
	ctx.lr = 0x82AD3A48;
	sub_8249A9D8(ctx, base);
	// stw r3,-30808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30808, ctx.r3.u32);
	// bl 0x8249aa98
	ctx.lr = 0x82AD3A50;
	sub_8249AA98(ctx, base);
	// lwz r10,-30808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30808);
loc_82AD3A54:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24288);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad3a74
	if (ctx.cr6.eq) goto loc_82AD3A74;
	// bl 0x822d1868
	ctx.lr = 0x82AD3A68;
	sub_822D1868(ctx, base);
	// lwz r11,-24288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24288);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad3a7c
	goto loc_82AD3A7C;
loc_82AD3A74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD3A7C:
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
	// bne cr6,0x82ad3aac
	if (!ctx.cr6.eq) goto loc_82AD3AAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD3A9C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD3AA4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24288);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD3AAC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad3ad8
	if (!ctx.cr6.eq) goto loc_82AD3AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD3AC8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD3AD0;
	sub_82398640(ctx, base);
	// lwz r11,-24288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24288);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD3AD8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad3b10
	if (ctx.cr6.eq) goto loc_82AD3B10;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD3AF4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad3b10
	if (!ctx.cr6.eq) goto loc_82AD3B10;
	// lwz r3,-24288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24288);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD3B10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD3B18"))) PPC_WEAK_FUNC(sub_82AD3B18);
PPC_FUNC_IMPL(__imp__sub_82AD3B18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3B20"))) PPC_WEAK_FUNC(sub_82AD3B20);
PPC_FUNC_IMPL(__imp__sub_82AD3B20) {
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
	// lwz r11,-30808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30808);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad3b64
	if (!ctx.cr6.eq) goto loc_82AD3B64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8249a9d8
	ctx.lr = 0x82AD3B58;
	sub_8249A9D8(ctx, base);
	// stw r3,-30808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30808, ctx.r3.u32);
	// bl 0x8249aa98
	ctx.lr = 0x82AD3B60;
	sub_8249AA98(ctx, base);
	// lwz r11,-30808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30808);
loc_82AD3B64:
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

__attribute__((alias("__imp__sub_82AD3B8C"))) PPC_WEAK_FUNC(sub_82AD3B8C);
PPC_FUNC_IMPL(__imp__sub_82AD3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3B90"))) PPC_WEAK_FUNC(sub_82AD3B90);
PPC_FUNC_IMPL(__imp__sub_82AD3B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD3B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,144(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad3c38
	if (ctx.cr6.eq) goto loc_82AD3C38;
	// lwz r9,148(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ad3bd0
	if (ctx.cr6.eq) goto loc_82AD3BD0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r30,r11,20144
	ctx.r30.s64 = ctx.r11.s64 + 20144;
	// b 0x82ad3bd4
	goto loc_82AD3BD4;
loc_82AD3BD0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82AD3BD4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ad3bf4
	if (!ctx.cr6.eq) goto loc_82AD3BF4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x82AD3BF0;
	sub_822960C0(ctx, base);
	// b 0x82ad3bfc
	goto loc_82AD3BFC;
loc_82AD3BF4:
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AD3BFC;
	sub_8233E1A0(ctx, base);
loc_82AD3BFC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ad3c10
	if (!ctx.cr6.eq) goto loc_82AD3C10;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82AD3C10:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26548
	ctx.r4.s64 = ctx.r11.s64 + -26548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232e868
	ctx.lr = 0x82AD3C24;
	sub_8232E868(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82AD3C2C;
	sub_82299080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AD3C38:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,20164
	ctx.r4.s64 = ctx.r11.s64 + 20164;
	// bl 0x822960c0
	ctx.lr = 0x82AD3C48;
	sub_822960C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD3C54"))) PPC_WEAK_FUNC(sub_82AD3C54);
PPC_FUNC_IMPL(__imp__sub_82AD3C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3C58"))) PPC_WEAK_FUNC(sub_82AD3C58);
PPC_FUNC_IMPL(__imp__sub_82AD3C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x824b5530
	sub_824B5530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD3C5C"))) PPC_WEAK_FUNC(sub_82AD3C5C);
PPC_FUNC_IMPL(__imp__sub_82AD3C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3C60"))) PPC_WEAK_FUNC(sub_82AD3C60);
PPC_FUNC_IMPL(__imp__sub_82AD3C60) {
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
	// lwz r10,-31504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31504);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad3ca0
	if (!ctx.cr6.eq) goto loc_82AD3CA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x823c94e8
	ctx.lr = 0x82AD3C94;
	sub_823C94E8(ctx, base);
	// stw r3,-31504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31504, ctx.r3.u32);
	// bl 0x823c95a0
	ctx.lr = 0x82AD3C9C;
	sub_823C95A0(ctx, base);
	// lwz r10,-31504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31504);
loc_82AD3CA0:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad3cc0
	if (ctx.cr6.eq) goto loc_82AD3CC0;
loc_82AD3CAC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad3ce0
	if (ctx.cr6.eq) goto loc_82AD3CE0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad3cac
	if (!ctx.cr6.eq) goto loc_82AD3CAC;
loc_82AD3CC0:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82AD3CC8:
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
loc_82AD3CE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ad3cc8
	goto loc_82AD3CC8;
}

__attribute__((alias("__imp__sub_82AD3CE8"))) PPC_WEAK_FUNC(sub_82AD3CE8);
PPC_FUNC_IMPL(__imp__sub_82AD3CE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r9,20200
	ctx.r8.s64 = ctx.r9.s64 + 20200;
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

__attribute__((alias("__imp__sub_82AD3D10"))) PPC_WEAK_FUNC(sub_82AD3D10);
PPC_FUNC_IMPL(__imp__sub_82AD3D10) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3D18"))) PPC_WEAK_FUNC(sub_82AD3D18);
PPC_FUNC_IMPL(__imp__sub_82AD3D18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r9,20200
	ctx.r8.s64 = ctx.r9.s64 + 20200;
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

__attribute__((alias("__imp__sub_82AD3D38"))) PPC_WEAK_FUNC(sub_82AD3D38);
PPC_FUNC_IMPL(__imp__sub_82AD3D38) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,20200
	ctx.r10.s64 = ctx.r11.s64 + 20200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD3D64;
	sub_8229C068(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,11896
	ctx.r8.s64 = ctx.r9.s64 + 11896;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD3D78;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248eca0
	ctx.lr = 0x82AD3D80;
	sub_8248ECA0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ad3db4
	if (ctx.cr6.eq) goto loc_82AD3DB4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad3dac
	if (ctx.cr6.lt) goto loc_82AD3DAC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ad3db4
	if (!ctx.cr6.gt) goto loc_82AD3DB4;
loc_82AD3DAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AD3DB4;
	sub_82294A58(ctx, base);
loc_82AD3DB4:
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

__attribute__((alias("__imp__sub_82AD3DD0"))) PPC_WEAK_FUNC(sub_82AD3DD0);
PPC_FUNC_IMPL(__imp__sub_82AD3DD0) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,20200
	ctx.r10.s64 = ctx.r11.s64 + 20200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD3DF4;
	sub_8229C068(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,11896
	ctx.r8.s64 = ctx.r9.s64 + 11896;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD3E08;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248eca0
	ctx.lr = 0x82AD3E10;
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

__attribute__((alias("__imp__sub_82AD3E24"))) PPC_WEAK_FUNC(sub_82AD3E24);
PPC_FUNC_IMPL(__imp__sub_82AD3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3E28"))) PPC_WEAK_FUNC(sub_82AD3E28);
PPC_FUNC_IMPL(__imp__sub_82AD3E28) {
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
	ctx.lr = 0x82AD3E40;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad3ec4
	if (ctx.cr6.eq) goto loc_82AD3EC4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,20588
	ctx.r11.s64 = ctx.r8.s64 + 20588;
	// lis r5,-32083
	ctx.r5.s64 = -2102591488;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,26568
	ctx.r6.s64 = ctx.r5.s64 + 26568;
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
	// li r5,30560
	ctx.r5.s64 = 30560;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD3EB4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD3EC4:
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

__attribute__((alias("__imp__sub_82AD3ED8"))) PPC_WEAK_FUNC(sub_82AD3ED8);
PPC_FUNC_IMPL(__imp__sub_82AD3ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD3EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad3f0c
	if (!ctx.cr6.eq) goto loc_82AD3F0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82AD3F00;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82AD3F08;
	sub_82605060(ctx, base);
	// lwz r10,-28640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82AD3F0C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24284);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad3f2c
	if (ctx.cr6.eq) goto loc_82AD3F2C;
	// bl 0x82313628
	ctx.lr = 0x82AD3F20;
	sub_82313628(ctx, base);
	// lwz r11,-24284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24284);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad3f34
	goto loc_82AD3F34;
loc_82AD3F2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD3F34:
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
	// bne cr6,0x82ad3f64
	if (!ctx.cr6.eq) goto loc_82AD3F64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD3F54;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD3F5C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24284);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD3F64:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad3f90
	if (!ctx.cr6.eq) goto loc_82AD3F90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD3F80;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD3F88;
	sub_82398640(ctx, base);
	// lwz r11,-24284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24284);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD3F90:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad3fc8
	if (ctx.cr6.eq) goto loc_82AD3FC8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD3FAC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad3fc8
	if (!ctx.cr6.eq) goto loc_82AD3FC8;
	// lwz r3,-24284(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24284);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD3FC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD3FD0"))) PPC_WEAK_FUNC(sub_82AD3FD0);
PPC_FUNC_IMPL(__imp__sub_82AD3FD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3FD8"))) PPC_WEAK_FUNC(sub_82AD3FD8);
PPC_FUNC_IMPL(__imp__sub_82AD3FD8) {
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
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad401c
	if (!ctx.cr6.eq) goto loc_82AD401C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82AD4010;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x82AD4018;
	sub_82605060(ctx, base);
	// lwz r11,-28640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82AD401C:
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

__attribute__((alias("__imp__sub_82AD4044"))) PPC_WEAK_FUNC(sub_82AD4044);
PPC_FUNC_IMPL(__imp__sub_82AD4044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD4048"))) PPC_WEAK_FUNC(sub_82AD4048);
PPC_FUNC_IMPL(__imp__sub_82AD4048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ad40d8
	if (ctx.cr6.eq) goto loc_82AD40D8;
	// lwz r11,368(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad40d8
	if (ctx.cr6.eq) goto loc_82AD40D8;
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lfs f0,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lfs f11,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,404(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lfs f10,400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lfs f9,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,30520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 30520);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f0,32092(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32092);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lfs f5,30536(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 30536);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fnmsubs f3,f7,f0,f4
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f4.f64)));
	// fsubs f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fcmpu cr6,f3,f5
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// bgt cr6,0x82ad40d0
	if (ctx.cr6.gt) goto loc_82AD40D0;
	// lfs f12,30524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 30524);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f12,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lfs f10,30540(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 30540);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x82ad40d8
	if (!ctx.cr6.gt) goto loc_82AD40D8;
loc_82AD40D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82AD40D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD40E0"))) PPC_WEAK_FUNC(sub_82AD40E0);
PPC_FUNC_IMPL(__imp__sub_82AD40E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD40E8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-22496
	ctx.r9.s64 = ctx.r11.s64 + -22496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f0,-22496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22496);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// fsubs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,30520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 30520);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,32088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32088);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fdivs f10,f30,f12
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AD413C;
	sub_82CB2298(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ad415c
	if (!ctx.cr6.lt) goto loc_82AD415C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad4168
	goto loc_82AD4168;
loc_82AD415C:
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82ad4168
	if (ctx.cr6.lt) goto loc_82AD4168;
	// li r11,49
	ctx.r11.s64 = 49;
loc_82AD4168:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfs f0,30524(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 30524);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x82cb2298
	ctx.lr = 0x82AD417C;
	sub_82CB2298(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ad419c
	if (!ctx.cr6.lt) goto loc_82AD419C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ad41a8
	goto loc_82AD41A8;
loc_82AD419C:
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82ad41a8
	if (ctx.cr6.lt) goto loc_82AD41A8;
	// li r11,49
	ctx.r11.s64 = 49;
loc_82AD41A8:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lfs f0,30520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 30520);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82ad41e0
	if (!ctx.cr6.lt) goto loc_82AD41E0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x82ad41e0
	if (ctx.cr6.lt) goto loc_82AD41E0;
	// lfs f13,30524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 30524);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bge cr6,0x82ad41e0
	if (!ctx.cr6.lt) goto loc_82AD41E0;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82ad41e4
	if (!ctx.cr6.lt) goto loc_82AD41E4;
loc_82AD41E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD41E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD41F8"))) PPC_WEAK_FUNC(sub_82AD41F8);
PPC_FUNC_IMPL(__imp__sub_82AD41F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AD4200;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82ad40e0
	ctx.lr = 0x82AD424C;
	sub_82AD40E0(ctx, base);
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad40e0
	ctx.lr = 0x82AD4284;
	sub_82AD40E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad4298
	if (ctx.cr6.eq) goto loc_82AD4298;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82ad429c
	if (!ctx.cr6.eq) goto loc_82AD429C;
loc_82AD4298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD429C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD42A8"))) PPC_WEAK_FUNC(sub_82AD42A8);
PPC_FUNC_IMPL(__imp__sub_82AD42A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82AD42B0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ae0
	ctx.lr = 0x82AD42B8;
	__savefpr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,50
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 50, ctx.xer);
	// blt cr6,0x82ad42cc
	if (ctx.cr6.lt) goto loc_82AD42CC;
	// li r7,49
	ctx.r7.s64 = 49;
loc_82AD42CC:
	// cmpwi cr6,r6,50
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 50, ctx.xer);
	// blt cr6,0x82ad42d8
	if (ctx.cr6.lt) goto loc_82AD42D8;
	// li r6,49
	ctx.r6.s64 = 49;
loc_82AD42D8:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// extsw r3,r10
	ctx.r3.s64 = ctx.r10.s32;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r6,r9,-32444
	ctx.r6.s64 = ctx.r9.s64 + -32444;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f9,-17464(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17464);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f30,-15612(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15612);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f30,200(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lfs f0,-1000(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -1000);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,-22496
	ctx.r31.s64 = ctx.r11.s64 + -22496;
	// lfs f10,30524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 30524);
	ctx.f10.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stb r6,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r6.u8);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfd f4,104(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// lfd f2,120(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fcfid f10,f2
	ctx.f10.f64 = double(ctx.f2.s64);
	// lfs f13,30520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 30520);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-22496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// frsp f6,f3
	ctx.f6.f64 = double(float(ctx.f3.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// fmadds f28,f7,f8,f13
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f27,f6,f9,f0
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmadds f26,f5,f8,f13
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f26,196(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmadds f29,f4,f9,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfd f0,-17672(r4)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + -17672);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// ble cr6,0x82ad4478
	if (!ctx.cr6.gt) goto loc_82AD4478;
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// b 0x82ad447c
	goto loc_82AD447C;
loc_82AD4478:
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
loc_82AD447C:
	// fabs f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82ad4494
	if (!ctx.cr6.gt) goto loc_82AD4494;
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// b 0x82ad4498
	goto loc_82AD4498;
loc_82AD4494:
	// stfs f31,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
loc_82AD4498:
	// stfs f31,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ad65a8
	ctx.lr = 0x82AD44B4;
	sub_82AD65A8(ctx, base);
	// lwz r11,30544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30544);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad4744
	if (ctx.cr6.eq) goto loc_82AD4744;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ad44d4
	if (ctx.cr6.eq) goto loc_82AD44D4;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82AD44D4:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f26,180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f28,196(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r7,196(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r28.s64;
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// rlwinm r11,r5,0,31,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFF01;
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// subfe r5,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r31,r11,255
	ctx.r31.s64 = ctx.r11.s64 + 255;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// lis r25,-31883
	ctx.r25.s64 = -2089484288;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r26,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r26.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r27,332(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AD4570;
	sub_8240A888(ctx, base);
	// lwz r11,656(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 656);
	// addi r3,r27,656
	ctx.r3.s64 = ctx.r27.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD4594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f28,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f28,196(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stfs f27,176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r26,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r26.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r27,332(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AD4600;
	sub_8240A888(ctx, base);
	// lwz r11,656(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 656);
	// addi r3,r27,656
	ctx.r3.s64 = ctx.r27.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD4624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f26,196(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f26,180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f27,176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stw r7,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r26,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r26.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r27,332(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AD4690;
	sub_8240A888(ctx, base);
	// lwz r10,656(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 656);
	// addi r3,r27,656
	ctx.r3.s64 = ctx.r27.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD46B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f28,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f27,176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f26,180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stw r7,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stb r26,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r26.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// lwz r11,-31264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31264);
	// lwz r31,332(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AD4720;
	sub_8240A888(ctx, base);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD4744:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b2c
	ctx.lr = 0x82AD4754;
	__restfpr_26(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4758"))) PPC_WEAK_FUNC(sub_82AD4758);
PPC_FUNC_IMPL(__imp__sub_82AD4758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82AD4760;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82cb6ad4
	ctx.lr = 0x82AD4768;
	__savefpr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r17,r11,-22496
	ctx.r17.s64 = ctx.r11.s64 + -22496;
	// lbz r9,-1444(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1444);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad47c0
	if (ctx.cr6.eq) goto loc_82AD47C0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r10,30516(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30516);
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r9,740(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// lwz r11,492(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 492);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad47c0
	if (ctx.cr6.eq) goto loc_82AD47C0;
	// stw r11,30516(r21)
	PPC_STORE_U32(ctx.r21.u32 + 30516, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad47c0
	if (ctx.cr6.eq) goto loc_82AD47C0;
	// lfs f0,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r17)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r17.u32 + 8, temp.u32);
loc_82AD47C0:
	// lwz r11,30516(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad47f0
	if (ctx.cr6.eq) goto loc_82AD47F0;
	// lfs f13,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30528(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 30528);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r17)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// lwz r11,30516(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30516);
	// lfs f12,30532(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 30532);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,4(r17)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r17.u32 + 4, temp.u32);
loc_82AD47F0:
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r19,r21,492
	ctx.r19.s64 = ctx.r21.s64 + 492;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// lis r23,-31885
	ctx.r23.s64 = -2089615360;
loc_82AD4800:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
loc_82AD4808:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad49b0
	if (!ctx.cr6.gt) goto loc_82AD49B0;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_82AD481C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r25,r11,r24
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82ad4848
	if (!ctx.cr6.eq) goto loc_82AD4848;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d230
	ctx.lr = 0x82AD4844;
	sub_8232D230(ctx, base);
	// b 0x82ad49a4
	goto loc_82AD49A4;
loc_82AD4848:
	// lwz r11,368(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82ad485c
	if (!ctx.cr6.eq) goto loc_82AD485C;
	// addi r11,r25,244
	ctx.r11.s64 = ctx.r25.s64 + 244;
loc_82AD485C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x82ad40e0
	ctx.lr = 0x82AD4888;
	sub_82AD40E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad48f4
	if (ctx.cr6.eq) goto loc_82AD48F4;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82ad48b4
	if (!ctx.cr6.eq) goto loc_82AD48B4;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82ad48b4
	if (!ctx.cr6.eq) goto loc_82AD48B4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x82ad49a4
	goto loc_82AD49A4;
loc_82AD48B4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d230
	ctx.lr = 0x82AD48CC;
	sub_8232D230(ctx, base);
	// mulli r11,r30,50
	ctx.r11.s64 = ctx.r30.s64 * 50;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82ad4918
	goto loc_82AD4918;
loc_82AD48F4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d230
	ctx.lr = 0x82AD490C;
	sub_8232D230(ctx, base);
	// lwz r10,30500(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// addi r31,r21,30492
	ctx.r31.s64 = ctx.r21.s64 + 30492;
	// lwz r30,30496(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30496);
loc_82AD4918:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ad4990
	if (!ctx.cr6.gt) goto loc_82AD4990;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// bne cr6,0x82ad4954
	if (!ctx.cr6.eq) goto loc_82AD4954;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad4990
	if (ctx.cr6.eq) goto loc_82AD4990;
loc_82AD4954:
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82ad4970
	if (!ctx.cr6.eq) goto loc_82AD4970;
	// bl 0x822900a0
	ctx.lr = 0x82AD496C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82AD4970:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD498C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82AD4990:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad49a4
	if (ctx.cr0.eq) goto loc_82AD49A4;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82AD49A4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad481c
	if (ctx.cr6.lt) goto loc_82AD481C;
loc_82AD49B0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpwi cr6,r22,50
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 50, ctx.xer);
	// blt cr6,0x82ad4808
	if (ctx.cr6.lt) goto loc_82AD4808;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,600
	ctx.r19.s64 = ctx.r19.s64 + 600;
	// cmpwi cr6,r20,50
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 50, ctx.xer);
	// blt cr6,0x82ad4800
	if (ctx.cr6.lt) goto loc_82AD4800;
	// lwz r11,30496(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30496);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad4b44
	if (!ctx.cr6.gt) goto loc_82AD4B44;
	// addi r26,r21,30492
	ctx.r26.s64 = ctx.r21.s64 + 30492;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_82AD49E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r25,r11,r24
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82ad4a14
	if (!ctx.cr6.eq) goto loc_82AD4A14;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d230
	ctx.lr = 0x82AD4A10;
	sub_8232D230(ctx, base);
	// b 0x82ad4b38
	goto loc_82AD4B38;
loc_82AD4A14:
	// lwz r11,368(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82ad4a28
	if (!ctx.cr6.eq) goto loc_82AD4A28;
	// addi r11,r25,244
	ctx.r11.s64 = ctx.r25.s64 + 244;
loc_82AD4A28:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x82ad40e0
	ctx.lr = 0x82AD4A54;
	sub_82AD40E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad4b30
	if (ctx.cr6.eq) goto loc_82AD4B30;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232d230
	ctx.lr = 0x82AD4A74;
	sub_8232D230(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 * 50;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82ad4b18
	if (!ctx.cr6.gt) goto loc_82AD4B18;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
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
	// bne cr6,0x82ad4adc
	if (!ctx.cr6.eq) goto loc_82AD4ADC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad4b18
	if (ctx.cr6.eq) goto loc_82AD4B18;
loc_82AD4ADC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad4af8
	if (!ctx.cr6.eq) goto loc_82AD4AF8;
	// bl 0x822900a0
	ctx.lr = 0x82AD4AF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82AD4AF8:
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
	ctx.lr = 0x82AD4B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82AD4B18:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad4b38
	if (ctx.cr0.eq) goto loc_82AD4B38;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82ad4b38
	goto loc_82AD4B38;
loc_82AD4B30:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_82AD4B38:
	// lwz r11,30496(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30496);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad49e8
	if (ctx.cr6.lt) goto loc_82AD49E8;
loc_82AD4B44:
	// lwz r11,30544(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30544);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad4dd4
	if (ctx.cr6.eq) goto loc_82AD4DD4;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r10,30496(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30496);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// li r30,255
	ctx.r30.s64 = 255;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f28,31564(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31564);
	ctx.f28.f64 = double(temp.f32);
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r10,30556(r21)
	PPC_STORE_U32(ctx.r21.u32 + 30556, ctx.r10.u32);
	// stw r10,30548(r21)
	PPC_STORE_U32(ctx.r21.u32 + 30548, ctx.r10.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r9,r11,31900
	ctx.r9.s64 = ctx.r11.s64 + 31900;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// lfs f23,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f23.f64 = double(temp.f32);
	// lwz r22,176(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f29,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f29.f64 = double(temp.f32);
	// stw r18,30552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 30552, ctx.r18.u32);
	// lfs f30,31900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31900);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	ctx.f26.f64 = double(temp.f32);
loc_82AD4BC0:
	// lfs f0,30520(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 30520);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fadds f13,f0,f23
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// stw r23,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// stb r30,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r30.u8);
	// stb r18,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r18.u8);
	// stb r18,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r18.u8);
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lwz r31,332(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AD4C34;
	sub_8240A888(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD4C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,30524(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 30524);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// fmadds f29,f12,f26,f29
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f29.f64));
	// lfs f25,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f24.f64 = double(temp.f32);
	// lfs f31,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82AD4C74:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82ad4d00
	if (!ctx.cr6.eq) goto loc_82AD4D00;
	// stfs f25,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f0,30524(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 30524);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stb r18,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r18.u8);
	// stb r18,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r18.u8);
	// stb r30,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r30.u8);
	// lwz r11,-31264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31264);
	// lwz r31,332(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8240a888
	ctx.lr = 0x82AD4CDC;
	sub_8240A888(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD4D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD4D00:
	// lfs f0,30520(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 30520);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r25,50
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 50, ctx.xer);
	// fmadds f31,f0,f26,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f31.f64));
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bge cr6,0x82ad4dbc
	if (!ctx.cr6.lt) goto loc_82AD4DBC;
	// cmpwi cr6,r29,50
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 50, ctx.xer);
	// bge cr6,0x82ad4dbc
	if (!ctx.cr6.lt) goto loc_82AD4DBC;
	// mulli r11,r25,50
	ctx.r11.s64 = ctx.r25.s64 * 50;
	// lwz r9,30548(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30548);
	// lwz r10,30552(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30552);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r11,496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 496);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,30548(r21)
	PPC_STORE_U32(ctx.r21.u32 + 30548, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,30552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 30552, ctx.r6.u32);
	// ble cr6,0x82ad4dbc
	if (!ctx.cr6.gt) goto loc_82AD4DBC;
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,30524(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 30524);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ld r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lfs f0,8(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fadds f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fsubs f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f8,f29,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x825d3478
	ctx.lr = 0x82AD4DBC;
	sub_825D3478(ctx, base);
loc_82AD4DBC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,50
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 50, ctx.xer);
	// ble cr6,0x82ad4c74
	if (!ctx.cr6.gt) goto loc_82AD4C74;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,50
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 50, ctx.xer);
	// ble cr6,0x82ad4bc0
	if (!ctx.cr6.gt) goto loc_82AD4BC0;
loc_82AD4DD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82cb6b20
	ctx.lr = 0x82AD4DE4;
	__restfpr_23(ctx, base);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4DE8"))) PPC_WEAK_FUNC(sub_82AD4DE8);
PPC_FUNC_IMPL(__imp__sub_82AD4DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82AD4DF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,50
	ctx.r25.s64 = 50;
	// addi r27,r24,492
	ctx.r27.s64 = ctx.r24.s64 + 492;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_82AD4E08:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,50
	ctx.r29.s64 = 50;
loc_82AD4E10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad4e64
	if (ctx.cr6.eq) goto loc_82AD4E64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad4e64
	if (ctx.cr6.eq) goto loc_82AD4E64;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad4e44
	if (!ctx.cr6.eq) goto loc_82AD4E44;
	// bl 0x822900a0
	ctx.lr = 0x82AD4E40;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82AD4E44:
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
	ctx.lr = 0x82AD4E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82AD4E64:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82ad4e10
	if (!ctx.cr0.eq) goto loc_82AD4E10;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,600
	ctx.r27.s64 = ctx.r27.s64 + 600;
	// bne 0x82ad4e08
	if (!ctx.cr0.eq) goto loc_82AD4E08;
	// lwz r11,30500(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30500);
	// addi r31,r24,30492
	ctx.r31.s64 = ctx.r24.s64 + 30492;
	// stw r28,30496(r24)
	PPC_STORE_U32(ctx.r24.u32 + 30496, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad4ed4
	if (ctx.cr6.eq) goto loc_82AD4ED4;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad4ed4
	if (ctx.cr6.eq) goto loc_82AD4ED4;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad4eb4
	if (!ctx.cr6.eq) goto loc_82AD4EB4;
	// bl 0x822900a0
	ctx.lr = 0x82AD4EB0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82AD4EB4:
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
	ctx.lr = 0x82AD4ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82AD4ED4:
	// lwz r11,30512(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30512);
	// addi r31,r24,30504
	ctx.r31.s64 = ctx.r24.s64 + 30504;
	// stw r28,30508(r24)
	PPC_STORE_U32(ctx.r24.u32 + 30508, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad4f2c
	if (ctx.cr6.eq) goto loc_82AD4F2C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad4f2c
	if (ctx.cr6.eq) goto loc_82AD4F2C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad4f0c
	if (!ctx.cr6.eq) goto loc_82AD4F0C;
	// bl 0x822900a0
	ctx.lr = 0x82AD4F08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82AD4F0C:
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
	ctx.lr = 0x82AD4F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82AD4F2C:
	// lwz r11,30516(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30516);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// stw r28,30556(r24)
	PPC_STORE_U32(ctx.r24.u32 + 30556, ctx.r28.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r28,30552(r24)
	PPC_STORE_U32(ctx.r24.u32 + 30552, ctx.r28.u32);
	// stw r28,30548(r24)
	PPC_STORE_U32(ctx.r24.u32 + 30548, ctx.r28.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r11,-1444(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1444, ctx.r11.u8);
	// bl 0x82773cf0
	ctx.lr = 0x82AD4F54;
	sub_82773CF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4F5C"))) PPC_WEAK_FUNC(sub_82AD4F5C);
PPC_FUNC_IMPL(__imp__sub_82AD4F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD4F60"))) PPC_WEAK_FUNC(sub_82AD4F60);
PPC_FUNC_IMPL(__imp__sub_82AD4F60) {
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
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ad5018
	if (ctx.cr6.eq) goto loc_82AD5018;
	// bl 0x82ad4048
	ctx.lr = 0x82AD4F84;
	sub_82AD4048(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad4f94
	if (ctx.cr6.eq) goto loc_82AD4F94;
	// addi r3,r31,30504
	ctx.r3.s64 = ctx.r31.s64 + 30504;
	// b 0x82ad5010
	goto loc_82AD5010;
loc_82AD4F94:
	// lwz r11,368(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad4fac
	if (ctx.cr6.eq) goto loc_82AD4FAC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// b 0x82ad4fb0
	goto loc_82AD4FB0;
loc_82AD4FAC:
	// addi r11,r4,244
	ctx.r11.s64 = ctx.r4.s64 + 244;
loc_82AD4FB0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82ad40e0
	ctx.lr = 0x82AD4FDC;
	sub_82AD40E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad500c
	if (ctx.cr6.eq) goto loc_82AD500C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 * 50;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82ad5010
	goto loc_82AD5010;
loc_82AD500C:
	// addi r3,r31,30492
	ctx.r3.s64 = ctx.r31.s64 + 30492;
loc_82AD5010:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x823f6e20
	ctx.lr = 0x82AD5018;
	sub_823F6E20(ctx, base);
loc_82AD5018:
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

__attribute__((alias("__imp__sub_82AD502C"))) PPC_WEAK_FUNC(sub_82AD502C);
PPC_FUNC_IMPL(__imp__sub_82AD502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD5030"))) PPC_WEAK_FUNC(sub_82AD5030);
PPC_FUNC_IMPL(__imp__sub_82AD5030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AD5038;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ad5178
	if (ctx.cr6.eq) goto loc_82AD5178;
	// lwz r11,368(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5064
	if (ctx.cr6.eq) goto loc_82AD5064;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// b 0x82ad5068
	goto loc_82AD5068;
loc_82AD5064:
	// addi r11,r4,244
	ctx.r11.s64 = ctx.r4.s64 + 244;
loc_82AD5068:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82ad40e0
	ctx.lr = 0x82AD5094;
	sub_82AD40E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad50d8
	if (ctx.cr6.eq) goto loc_82AD50D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mulli r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 * 50;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0d78
	ctx.lr = 0x82AD50D0;
	sub_824C0D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad5160
	if (!ctx.cr6.eq) goto loc_82AD5160;
loc_82AD50D8:
	// addi r31,r30,30492
	ctx.r31.s64 = ctx.r30.s64 + 30492;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0d78
	ctx.lr = 0x82AD50EC;
	sub_824C0D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad5160
	if (!ctx.cr6.eq) goto loc_82AD5160;
	// addi r31,r30,30504
	ctx.r31.s64 = ctx.r30.s64 + 30504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0d78
	ctx.lr = 0x82AD5108;
	sub_824C0D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad5160
	if (!ctx.cr6.eq) goto loc_82AD5160;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,492
	ctx.r29.s64 = ctx.r30.s64 + 492;
loc_82AD5118:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AD5120:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0d78
	ctx.lr = 0x82AD5130;
	sub_824C0D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad5160
	if (!ctx.cr6.eq) goto loc_82AD5160;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r30,50
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 50, ctx.xer);
	// blt cr6,0x82ad5120
	if (ctx.cr6.lt) goto loc_82AD5120;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,600
	ctx.r29.s64 = ctx.r29.s64 + 600;
	// cmpwi cr6,r28,50
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 50, ctx.xer);
	// blt cr6,0x82ad5118
	if (ctx.cr6.lt) goto loc_82AD5118;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82AD5160:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d230
	ctx.lr = 0x82AD5178;
	sub_8232D230(ctx, base);
loc_82AD5178:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5180"))) PPC_WEAK_FUNC(sub_82AD5180);
PPC_FUNC_IMPL(__imp__sub_82AD5180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82AD5188;
	__savegprlr_16(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r11,26648
	ctx.r23.s64 = ctx.r11.s64 + 26648;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwzx r7,r8,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD51D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,28920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28920, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// lwzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD520C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lwz r3,28924(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5234
	if (ctx.cr6.eq) goto loc_82AD5234;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r4,28908(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28908);
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD5234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD5234:
	// lwz r11,28920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bne cr6,0x82ad5248
	if (!ctx.cr6.eq) goto loc_82AD5248;
	// addi r27,r1,92
	ctx.r27.s64 = ctx.r1.s64 + 92;
loc_82AD5248:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r7,r8,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD5274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f0,-15120(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r7,r8,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD52AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r10,28928(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28928);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,28928(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28928, ctx.r10.u32);
	// lwzx r6,r7,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AD52EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// xori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 ^ 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x82ad533c
	if (!ctx.cr6.eq) goto loc_82AD533C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r8,r10,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD533C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD533C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5350
	if (!ctx.cr6.eq) goto loc_82AD5350;
	// bl 0x82316058
	ctx.lr = 0x82AD534C;
	sub_82316058(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_82AD5350:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// fmuls f31,f1,f1
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// bl 0x82ad41f8
	ctx.lr = 0x82AD5378;
	sub_82AD41F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad5384
	if (!ctx.cr6.eq) goto loc_82AD5384;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82AD5384:
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r22,104(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// bl 0x82bea998
	ctx.lr = 0x82AD53A4;
	sub_82BEA998(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r20,108(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 2;
	// lwz r17,112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r19,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r19.u32);
	// lhz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_82AD53BC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// beq cr6,0x82ad5484
	if (ctx.cr6.eq) goto loc_82AD5484;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AD53CC:
	// lwz r11,30496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30496);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ad5470
	if (!ctx.cr6.lt) goto loc_82AD5470;
	// lwz r11,30492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30492);
	// addi r3,r26,30492
	ctx.r3.s64 = ctx.r26.s64 + 30492;
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// bne cr6,0x82ad5408
	if (!ctx.cr6.eq) goto loc_82AD5408;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD5404;
	sub_8232D180(ctx, base);
	// b 0x82ad5464
	goto loc_82AD5464;
loc_82AD5408:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD541C;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5458
	if (ctx.cr6.eq) goto loc_82AD5458;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5448
	if (ctx.cr6.eq) goto loc_82AD5448;
loc_82AD5434:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad545c
	if (ctx.cr6.eq) goto loc_82AD545C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5434
	if (!ctx.cr6.eq) goto loc_82AD5434;
loc_82AD5448:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad545c
	if (!ctx.cr6.eq) goto loc_82AD545C;
loc_82AD5458:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
loc_82AD545C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82AD5464:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad53cc
	if (ctx.cr6.eq) goto loc_82AD53CC;
loc_82AD5470:
	// lwz r11,30496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30496);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5484
	if (ctx.cr6.lt) goto loc_82AD5484;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
loc_82AD5484:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5558
	if (ctx.cr6.eq) goto loc_82AD5558;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5544
	if (!ctx.cr6.eq) goto loc_82AD5544;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AD54A0:
	// lwz r11,30508(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30508);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ad5544
	if (!ctx.cr6.lt) goto loc_82AD5544;
	// lwz r11,30504(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30504);
	// addi r3,r26,30504
	ctx.r3.s64 = ctx.r26.s64 + 30504;
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// bne cr6,0x82ad54dc
	if (!ctx.cr6.eq) goto loc_82AD54DC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD54D8;
	sub_8232D180(ctx, base);
	// b 0x82ad5538
	goto loc_82AD5538;
loc_82AD54DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD54F0;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad552c
	if (ctx.cr6.eq) goto loc_82AD552C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad551c
	if (ctx.cr6.eq) goto loc_82AD551C;
loc_82AD5508:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad5530
	if (ctx.cr6.eq) goto loc_82AD5530;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5508
	if (!ctx.cr6.eq) goto loc_82AD5508;
loc_82AD551C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad5530
	if (!ctx.cr6.eq) goto loc_82AD5530;
loc_82AD552C:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
loc_82AD5530:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82AD5538:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad54a0
	if (ctx.cr6.eq) goto loc_82AD54A0;
loc_82AD5544:
	// lwz r11,30508(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30508);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5558
	if (ctx.cr6.lt) goto loc_82AD5558;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
loc_82AD5558:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5654
	if (!ctx.cr6.eq) goto loc_82AD5654;
	// mulli r29,r22,50
	ctx.r29.s64 = ctx.r22.s64 * 50;
loc_82AD5568:
	// cmpw cr6,r22,r17
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r17.s32, ctx.xer);
	// bgt cr6,0x82ad5648
	if (ctx.cr6.gt) goto loc_82AD5648;
	// add r11,r29,r25
	ctx.r11.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ad5620
	if (!ctx.cr6.lt) goto loc_82AD5620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// bne cr6,0x82ad55c4
	if (!ctx.cr6.eq) goto loc_82AD55C4;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD55C0;
	sub_8232D180(ctx, base);
	// b 0x82ad563c
	goto loc_82AD563C;
loc_82AD55C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD55D8;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5614
	if (ctx.cr6.eq) goto loc_82AD5614;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5604
	if (ctx.cr6.eq) goto loc_82AD5604;
loc_82AD55F0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad5618
	if (ctx.cr6.eq) goto loc_82AD5618;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad55f0
	if (!ctx.cr6.eq) goto loc_82AD55F0;
loc_82AD5604:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad5618
	if (!ctx.cr6.eq) goto loc_82AD5618;
loc_82AD5614:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
loc_82AD5618:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82ad563c
	goto loc_82AD563C;
loc_82AD5620:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x82ad563c
	if (!ctx.cr6.gt) goto loc_82AD563C;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r29,r29,50
	ctx.r29.s64 = ctx.r29.s64 + 50;
loc_82AD563C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5568
	if (ctx.cr6.eq) goto loc_82AD5568;
loc_82AD5648:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad56e4
	if (ctx.cr6.eq) goto loc_82AD56E4;
loc_82AD5654:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82ad56b0
	if (ctx.cr6.eq) goto loc_82AD56B0;
loc_82AD5668:
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// beq cr6,0x82ad56b0
	if (ctx.cr6.eq) goto loc_82AD56B0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r7,r8,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD569C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82ad5668
	if (!ctx.cr6.eq) goto loc_82AD5668;
loc_82AD56B0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// cmplwi cr6,r8,49
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 49, ctx.xer);
	// bne cr6,0x82ad56cc
	if (!ctx.cr6.eq) goto loc_82AD56CC;
	// stw r19,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r19.u32);
loc_82AD56CC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82ad53bc
	if (!ctx.cr6.eq) goto loc_82AD53BC;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82AD56E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5704"))) PPC_WEAK_FUNC(sub_82AD5704);
PPC_FUNC_IMPL(__imp__sub_82AD5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD5708"))) PPC_WEAK_FUNC(sub_82AD5708);
PPC_FUNC_IMPL(__imp__sub_82AD5708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82AD5710;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// fmuls f31,f1,f1
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// stw r26,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r26.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r23,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x82ad41f8
	ctx.lr = 0x82AD5758;
	sub_82AD41F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad5848
	if (!ctx.cr6.eq) goto loc_82AD5848;
	// lwz r11,30496(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30496);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad5848
	if (!ctx.cr6.gt) goto loc_82AD5848;
	// addi r28,r14,30492
	ctx.r28.s64 = ctx.r14.s64 + 30492;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AD5778:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x82ad57a8
	if (!ctx.cr6.eq) goto loc_82AD57A8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD57A4;
	sub_8232D180(ctx, base);
	// b 0x82ad5834
	goto loc_82AD5834;
loc_82AD57A8:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD57BC;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5834
	if (ctx.cr6.eq) goto loc_82AD5834;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad57e4
	if (ctx.cr6.eq) goto loc_82AD57E4;
loc_82AD57D0:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82ad57f4
	if (ctx.cr6.eq) goto loc_82AD57F4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad57d0
	if (!ctx.cr6.eq) goto loc_82AD57D0;
loc_82AD57E4:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad5834
	if (ctx.cr6.eq) goto loc_82AD5834;
loc_82AD57F4:
	// bl 0x82981ac8
	ctx.lr = 0x82AD57F8;
	sub_82981AC8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5818
	if (ctx.cr6.eq) goto loc_82AD5818;
loc_82AD5804:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82ad5834
	if (ctx.cr6.eq) goto loc_82AD5834;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5804
	if (!ctx.cr6.eq) goto loc_82AD5804;
loc_82AD5818:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad5834
	if (!ctx.cr6.eq) goto loc_82AD5834;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823f6e20
	ctx.lr = 0x82AD5834;
	sub_823F6E20(ctx, base);
loc_82AD5834:
	// lwz r11,30496(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30496);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5778
	if (ctx.cr6.lt) goto loc_82AD5778;
loc_82AD5848:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r19,-31883
	ctx.r19.s64 = -2089484288;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r15,r11,11336
	ctx.r15.s64 = ctx.r11.s64 + 11336;
	// beq cr6,0x82ad5964
	if (ctx.cr6.eq) goto loc_82AD5964;
	// lwz r11,30508(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30508);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad5964
	if (!ctx.cr6.gt) goto loc_82AD5964;
	// addi r28,r14,30504
	ctx.r28.s64 = ctx.r14.s64 + 30504;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AD5874:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x82ad58a4
	if (!ctx.cr6.eq) goto loc_82AD58A4;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD58A0;
	sub_8232D180(ctx, base);
	// b 0x82ad5950
	goto loc_82AD5950;
loc_82AD58A4:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD58B8;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5950
	if (ctx.cr6.eq) goto loc_82AD5950;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad58e0
	if (ctx.cr6.eq) goto loc_82AD58E0;
loc_82AD58CC:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82ad58f0
	if (ctx.cr6.eq) goto loc_82AD58F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad58cc
	if (!ctx.cr6.eq) goto loc_82AD58CC;
loc_82AD58E0:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad5950
	if (ctx.cr6.eq) goto loc_82AD5950;
loc_82AD58F0:
	// lwz r11,-25596(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -25596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad590c
	if (!ctx.cr6.eq) goto loc_82AD590C;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x829e6830
	ctx.lr = 0x82AD5904;
	sub_829E6830(ctx, base);
	// stw r3,-25596(r19)
	PPC_STORE_U32(ctx.r19.u32 + -25596, ctx.r3.u32);
	// bl 0x829e68e0
	ctx.lr = 0x82AD590C;
	sub_829E68E0(ctx, base);
loc_82AD590C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5930
	if (ctx.cr6.eq) goto loc_82AD5930;
loc_82AD5918:
	// lwz r10,-25596(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -25596);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad5950
	if (ctx.cr6.eq) goto loc_82AD5950;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5918
	if (!ctx.cr6.eq) goto loc_82AD5918;
loc_82AD5930:
	// lwz r11,-25596(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -25596);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ad5950
	if (!ctx.cr6.eq) goto loc_82AD5950;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823f6e20
	ctx.lr = 0x82AD5950;
	sub_823F6E20(ctx, base);
loc_82AD5950:
	// lwz r11,30508(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30508);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5874
	if (ctx.cr6.lt) goto loc_82AD5874;
loc_82AD5964:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bgt cr6,0x82ad5b54
	if (ctx.cr6.gt) goto loc_82AD5B54;
	// lwz r16,96(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r22,r11,50
	ctx.r22.s64 = ctx.r11.s64 * 50;
	// lis r21,-31885
	ctx.r21.s64 = -2089615360;
loc_82AD598C:
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r14
	ctx.r27.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ad5b34
	if (!ctx.cr6.gt) goto loc_82AD5B34;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82AD59B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r28,r25,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ad59e4
	if (!ctx.cr6.eq) goto loc_82AD59E4;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD59E0;
	sub_8232D180(ctx, base);
	// b 0x82ad5b20
	goto loc_82AD5B20;
loc_82AD59E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD59F8;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5b20
	if (ctx.cr6.eq) goto loc_82AD5B20;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5a24
	if (ctx.cr6.eq) goto loc_82AD5A24;
loc_82AD5A0C:
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad5a38
	if (ctx.cr6.eq) goto loc_82AD5A38;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5a0c
	if (!ctx.cr6.eq) goto loc_82AD5A0C;
loc_82AD5A24:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad5b20
	if (ctx.cr6.eq) goto loc_82AD5B20;
loc_82AD5A38:
	// lwz r11,-25596(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -25596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5a54
	if (!ctx.cr6.eq) goto loc_82AD5A54;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x829e6830
	ctx.lr = 0x82AD5A4C;
	sub_829E6830(ctx, base);
	// stw r3,-25596(r19)
	PPC_STORE_U32(ctx.r19.u32 + -25596, ctx.r3.u32);
	// bl 0x829e68e0
	ctx.lr = 0x82AD5A54;
	sub_829E68E0(ctx, base);
loc_82AD5A54:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5a78
	if (ctx.cr6.eq) goto loc_82AD5A78;
loc_82AD5A60:
	// lwz r10,-25596(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -25596);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad5b20
	if (ctx.cr6.eq) goto loc_82AD5B20;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5a60
	if (!ctx.cr6.eq) goto loc_82AD5A60;
loc_82AD5A78:
	// lwz r11,-25596(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -25596);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ad5b20
	if (!ctx.cr6.eq) goto loc_82AD5B20;
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82ad5b0c
	if (!ctx.cr6.gt) goto loc_82AD5B0C;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
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
	// stw r7,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82ad5ad0
	if (!ctx.cr6.eq) goto loc_82AD5AD0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad5b0c
	if (ctx.cr6.eq) goto loc_82AD5B0C;
loc_82AD5AD0:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad5aec
	if (!ctx.cr6.eq) goto loc_82AD5AEC;
	// bl 0x822900a0
	ctx.lr = 0x82AD5AE8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28888);
loc_82AD5AEC:
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
	ctx.lr = 0x82AD5B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_82AD5B0C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ad5b20
	if (ctx.cr0.eq) goto loc_82AD5B20;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82AD5B20:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad59b8
	if (ctx.cr6.lt) goto loc_82AD59B8;
loc_82AD5B34:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r16
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r16.s32, ctx.xer);
	// ble cr6,0x82ad5b4c
	if (!ctx.cr6.gt) goto loc_82AD5B4C;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r22,r22,50
	ctx.r22.s64 = ctx.r22.s64 + 50;
loc_82AD5B4C:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x82ad598c
	if (!ctx.cr6.gt) goto loc_82AD598C;
loc_82AD5B54:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5B70"))) PPC_WEAK_FUNC(sub_82AD5B70);
PPC_FUNC_IMPL(__imp__sub_82AD5B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82AD5B78;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82cb6adc
	ctx.lr = 0x82AD5B80;
	__savefpr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r5.u64);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// std r6,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r6.u64);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r7,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r7.u64);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// std r8,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r8.u64);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// bl 0x82ad40e0
	ctx.lr = 0x82AD5BB8;
	sub_82AD40E0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ad40e0
	ctx.lr = 0x82AD5BCC;
	sub_82AD40E0(ctx, base);
	// lfs f0,456(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f26,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f30.f64 = double(temp.f32);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f12,f26,f30
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// lfs f27,448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f29.f64 = double(temp.f32);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f11,f27,f29
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// lfs f25,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f25.f64 = double(temp.f32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mulli r26,r24,50
	ctx.r26.s64 = ctx.r24.s64 * 50;
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lwz r21,88(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f31,f11,f11,f9
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
loc_82AD5C20:
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82ad5cd4
	if (!ctx.cr6.lt) goto loc_82AD5CD4;
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x82ad5cdc
	if (!ctx.cr6.gt) goto loc_82AD5CDC;
loc_82AD5C30:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r11,r11,-22496
	ctx.r11.s64 = ctx.r11.s64 + -22496;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82ad5c90
	if (ctx.cr6.lt) goto loc_82AD5C90;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// blt cr6,0x82ad5c90
	if (ctx.cr6.lt) goto loc_82AD5C90;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// blt cr6,0x82ad5c90
	if (ctx.cr6.lt) goto loc_82AD5C90;
	// fcmpu cr6,f26,f12
	ctx.cr6.compare(ctx.f26.f64, ctx.f12.f64);
	// blt cr6,0x82ad5c90
	if (ctx.cr6.lt) goto loc_82AD5C90;
	// lfs f13,30520(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 30520);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bgt cr6,0x82ad5c90
	if (ctx.cr6.gt) goto loc_82AD5C90;
	// lfs f0,30524(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 30524);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82ad5c90
	if (ctx.cr6.gt) goto loc_82AD5C90;
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bgt cr6,0x82ad5c90
	if (ctx.cr6.gt) goto loc_82AD5C90;
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// ble cr6,0x82ad5fd0
	if (!ctx.cr6.gt) goto loc_82AD5FD0;
loc_82AD5C90:
	// lwz r11,30496(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30496);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad5fd0
	if (!ctx.cr6.gt) goto loc_82AD5FD0;
	// addi r28,r20,30492
	ctx.r28.s64 = ctx.r20.s64 + 30492;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AD5CA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ad5ec0
	if (!ctx.cr6.eq) goto loc_82AD5EC0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD5CD0;
	sub_8232D180(ctx, base);
	// b 0x82ad5fbc
	goto loc_82AD5FBC;
loc_82AD5CD4:
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82ad5c30
	if (ctx.cr6.lt) goto loc_82AD5C30;
loc_82AD5CDC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ad42a8
	ctx.lr = 0x82AD5CF4;
	sub_82AD42A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5e6c
	if (ctx.cr6.eq) goto loc_82AD5E6C;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ad5e6c
	if (!ctx.cr6.gt) goto loc_82AD5E6C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AD5D28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ad5d54
	if (!ctx.cr6.eq) goto loc_82AD5D54;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD5D50;
	sub_8232D180(ctx, base);
	// b 0x82ad5e50
	goto loc_82AD5E50;
loc_82AD5D54:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5d74
	if (ctx.cr6.eq) goto loc_82AD5D74;
loc_82AD5D60:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82ad5d84
	if (ctx.cr6.eq) goto loc_82AD5D84;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5d60
	if (!ctx.cr6.eq) goto loc_82AD5D60;
loc_82AD5D74:
	// cntlzw r11,r17
	ctx.r11.u64 = ctx.r17.u32 == 0 ? 32 : __builtin_clz(ctx.r17.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad5e50
	if (ctx.cr6.eq) goto loc_82AD5E50;
loc_82AD5D84:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8260ea08
	ctx.lr = 0x82AD5D94;
	sub_8260EA08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD5DA4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ad5da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD5DA4;
	// stfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f25,132(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d48e8
	ctx.lr = 0x82AD5DE4;
	sub_823D48E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5e50
	if (ctx.cr6.eq) goto loc_82AD5E50;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f0,f9,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82ad5e50
	if (ctx.cr6.gt) goto loc_82AD5E50;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r10,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r10.u32);
	// stw r9,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r9.u32);
	// stw r8,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r8.u32);
	// stw r7,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r7.u32);
	// stw r6,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r6.u32);
loc_82AD5E50:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5d28
	if (ctx.cr6.lt) goto loc_82AD5D28;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82ad5c30
	if (!ctx.cr6.eq) goto loc_82AD5C30;
loc_82AD5E6C:
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x82ad5e7c
	if (!ctx.cr6.lt) goto loc_82AD5E7C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x82ad5e80
	goto loc_82AD5E80;
loc_82AD5E7C:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82AD5E80:
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x82ad5e94
	if (!ctx.cr6.lt) goto loc_82AD5E94;
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x82ad5c20
	if (!ctx.cr6.gt) goto loc_82AD5C20;
	// b 0x82ad5e9c
	goto loc_82AD5E9C;
loc_82AD5E94:
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x82ad5c20
	if (!ctx.cr6.lt) goto loc_82AD5C20;
loc_82AD5E9C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82ad5eb4
	if (!ctx.cr6.lt) goto loc_82AD5EB4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,50
	ctx.r26.s64 = ctx.r26.s64 + 50;
	// b 0x82ad5c20
	goto loc_82AD5C20;
loc_82AD5EB4:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,-50
	ctx.r26.s64 = ctx.r26.s64 + -50;
	// b 0x82ad5c20
	goto loc_82AD5C20;
loc_82AD5EC0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad5ee0
	if (ctx.cr6.eq) goto loc_82AD5EE0;
loc_82AD5ECC:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82ad5ef0
	if (ctx.cr6.eq) goto loc_82AD5EF0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad5ecc
	if (!ctx.cr6.eq) goto loc_82AD5ECC;
loc_82AD5EE0:
	// cntlzw r11,r17
	ctx.r11.u64 = ctx.r17.u32 == 0 ? 32 : __builtin_clz(ctx.r17.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad5fbc
	if (ctx.cr6.eq) goto loc_82AD5FBC;
loc_82AD5EF0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8260ea08
	ctx.lr = 0x82AD5F00;
	sub_8260EA08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD5F10:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ad5f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD5F10;
	// stfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f25,132(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d48e8
	ctx.lr = 0x82AD5F50;
	sub_823D48E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad5fbc
	if (ctx.cr6.eq) goto loc_82AD5FBC;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f0,f9,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82ad5fbc
	if (ctx.cr6.gt) goto loc_82AD5FBC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r10,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r10.u32);
	// stw r9,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r9.u32);
	// stw r8,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r8.u32);
	// stw r7,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r7.u32);
	// stw r6,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r6.u32);
loc_82AD5FBC:
	// lwz r11,30496(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30496);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5ca8
	if (ctx.cr6.lt) goto loc_82AD5CA8;
loc_82AD5FD0:
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad6130
	if (ctx.cr6.eq) goto loc_82AD6130;
	// lwz r11,30508(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30508);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad6130
	if (!ctx.cr6.gt) goto loc_82AD6130;
	// addi r28,r20,30504
	ctx.r28.s64 = ctx.r20.s64 + 30504;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AD5FF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ad6020
	if (!ctx.cr6.eq) goto loc_82AD6020;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD601C;
	sub_8232D180(ctx, base);
	// b 0x82ad611c
	goto loc_82AD611C;
loc_82AD6020:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad6040
	if (ctx.cr6.eq) goto loc_82AD6040;
loc_82AD602C:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82ad6050
	if (ctx.cr6.eq) goto loc_82AD6050;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad602c
	if (!ctx.cr6.eq) goto loc_82AD602C;
loc_82AD6040:
	// cntlzw r11,r17
	ctx.r11.u64 = ctx.r17.u32 == 0 ? 32 : __builtin_clz(ctx.r17.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad611c
	if (ctx.cr6.eq) goto loc_82AD611C;
loc_82AD6050:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8260ea08
	ctx.lr = 0x82AD6060;
	sub_8260EA08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD6070:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ad6070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD6070;
	// stfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f25,132(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d48e8
	ctx.lr = 0x82AD60B0;
	sub_823D48E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad611c
	if (ctx.cr6.eq) goto loc_82AD611C;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f0,f9,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82ad611c
	if (ctx.cr6.gt) goto loc_82AD611C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r10,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r10.u32);
	// stw r9,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r9.u32);
	// stw r8,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r8.u32);
	// stw r7,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r7.u32);
	// stw r6,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r6.u32);
loc_82AD611C:
	// lwz r11,30508(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30508);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad5ff4
	if (ctx.cr6.lt) goto loc_82AD5FF4;
loc_82AD6130:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82cb6b28
	ctx.lr = 0x82AD6140;
	__restfpr_25(ctx, base);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6144"))) PPC_WEAK_FUNC(sub_82AD6144);
PPC_FUNC_IMPL(__imp__sub_82AD6144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD6148"))) PPC_WEAK_FUNC(sub_82AD6148);
PPC_FUNC_IMPL(__imp__sub_82AD6148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AD6150;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ad6178
	if (ctx.cr6.lt) goto loc_82AD6178;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ad61c4
	if (!ctx.cr6.lt) goto loc_82AD61C4;
loc_82AD6178:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// addi r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 + 44;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ad41f8
	ctx.lr = 0x82AD61A0;
	sub_82AD41F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad61b0
	if (!ctx.cr6.eq) goto loc_82AD61B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82AD61B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82AD61C4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad6288
	if (ctx.cr6.eq) goto loc_82AD6288;
	// lwz r11,30496(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30496);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ad6280
	if (!ctx.cr6.lt) goto loc_82AD6280;
	// addi r29,r28,30492
	ctx.r29.s64 = ctx.r28.s64 + 30492;
loc_82AD61E4:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ad6214
	if (!ctx.cr6.eq) goto loc_82AD6214;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD6210;
	sub_8232D180(ctx, base);
	// b 0x82ad6270
	goto loc_82AD6270;
loc_82AD6214:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD6234;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad6270
	if (ctx.cr6.eq) goto loc_82AD6270;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad6260
	if (ctx.cr6.eq) goto loc_82AD6260;
loc_82AD624C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad62d8
	if (ctx.cr6.eq) goto loc_82AD62D8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad624c
	if (!ctx.cr6.eq) goto loc_82AD624C;
loc_82AD6260:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad62d8
	if (!ctx.cr6.eq) goto loc_82AD62D8;
loc_82AD6270:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,30496(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30496);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ad61e4
	if (ctx.cr6.lt) goto loc_82AD61E4;
loc_82AD6280:
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
loc_82AD6288:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad6358
	if (ctx.cr6.eq) goto loc_82AD6358;
	// lwz r11,30508(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30508);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ad6350
	if (!ctx.cr6.lt) goto loc_82AD6350;
	// addi r29,r28,30504
	ctx.r29.s64 = ctx.r28.s64 + 30504;
loc_82AD62A8:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ad62e4
	if (!ctx.cr6.eq) goto loc_82AD62E4;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD62D4;
	sub_8232D180(ctx, base);
	// b 0x82ad6340
	goto loc_82AD6340;
loc_82AD62D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82AD62E4:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// bl 0x82ad64c0
	ctx.lr = 0x82AD6304;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad6340
	if (ctx.cr6.eq) goto loc_82AD6340;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad6330
	if (ctx.cr6.eq) goto loc_82AD6330;
loc_82AD631C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad62d8
	if (ctx.cr6.eq) goto loc_82AD62D8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad631c
	if (!ctx.cr6.eq) goto loc_82AD631C;
loc_82AD6330:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad62d8
	if (!ctx.cr6.eq) goto loc_82AD62D8;
loc_82AD6340:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,30508(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30508);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ad62a8
	if (ctx.cr6.lt) goto loc_82AD62A8;
loc_82AD6350:
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_82AD6358:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82ad6478
	if (ctx.cr6.gt) goto loc_82AD6478;
loc_82AD6368:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 * 50;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82ad6438
	if (!ctx.cr6.lt) goto loc_82AD6438;
loc_82AD639C:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ad63cc
	if (!ctx.cr6.eq) goto loc_82AD63CC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82AD63C8;
	sub_8232D180(ctx, base);
	// b 0x82ad6428
	goto loc_82AD6428;
loc_82AD63CC:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad64c0
	ctx.lr = 0x82AD63EC;
	sub_82AD64C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad6428
	if (ctx.cr6.eq) goto loc_82AD6428;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad6418
	if (ctx.cr6.eq) goto loc_82AD6418;
loc_82AD6404:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ad62d8
	if (ctx.cr6.eq) goto loc_82AD62D8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad6404
	if (!ctx.cr6.eq) goto loc_82AD6404;
loc_82AD6418:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad62d8
	if (!ctx.cr6.eq) goto loc_82AD62D8;
loc_82AD6428:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ad639c
	if (ctx.cr6.lt) goto loc_82AD639C;
loc_82AD6438:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ad6468
	if (!ctx.cr6.gt) goto loc_82AD6468;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_82AD6468:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ad6368
	if (!ctx.cr6.gt) goto loc_82AD6368;
loc_82AD6478:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6484"))) PPC_WEAK_FUNC(sub_82AD6484);
PPC_FUNC_IMPL(__imp__sub_82AD6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD6488"))) PPC_WEAK_FUNC(sub_82AD6488);
PPC_FUNC_IMPL(__imp__sub_82AD6488) {
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

__attribute__((alias("__imp__sub_82AD6498"))) PPC_WEAK_FUNC(sub_82AD6498);
PPC_FUNC_IMPL(__imp__sub_82AD6498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ad64b4
	if (ctx.cr6.lt) goto loc_82AD64B4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82AD64B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD64BC"))) PPC_WEAK_FUNC(sub_82AD64BC);
PPC_FUNC_IMPL(__imp__sub_82AD64BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD64C0"))) PPC_WEAK_FUNC(sub_82AD64C0);
PPC_FUNC_IMPL(__imp__sub_82AD64C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad64d4
	if (ctx.cr6.eq) goto loc_82AD64D4;
	// lfs f0,420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ad64dc
	goto loc_82AD64DC;
loc_82AD64D4:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
loc_82AD64DC:
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// beq cr6,0x82ad654c
	if (ctx.cr6.eq) goto loc_82AD654C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82ad6500
	if (!ctx.cr6.eq) goto loc_82AD6500;
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
loc_82AD6500:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// lfs f10,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// lfs f9,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f3,f6,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f0,f4,f4,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// b 0x82ad6594
	goto loc_82AD6594;
loc_82AD654C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82ad655c
	if (!ctx.cr6.eq) goto loc_82AD655C;
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
loc_82AD655C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lfs f11,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f10,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f0,f8,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
loc_82AD6594:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD65A8"))) PPC_WEAK_FUNC(sub_82AD65A8);
PPC_FUNC_IMPL(__imp__sub_82AD65A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f8,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f8,f6
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// lfs f9,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f9.f64 = double(temp.f32);
	// bge cr6,0x82ad65ec
	if (!ctx.cr6.lt) goto loc_82AD65EC;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// blt cr6,0x82ad65e4
	if (ctx.cr6.lt) goto loc_82AD65E4;
	// fsubs f0,f6,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82ad661c
	goto loc_82AD661C;
loc_82AD65E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AD65EC:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x82ad6618
	if (!ctx.cr6.gt) goto loc_82AD6618;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad65e4
	if (ctx.cr6.gt) goto loc_82AD65E4;
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82ad661c
	goto loc_82AD661C;
loc_82AD6618:
	// fmr f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f9.f64;
loc_82AD661C:
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// bge cr6,0x82ad664c
	if (!ctx.cr6.lt) goto loc_82AD664C;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// blt cr6,0x82ad65e4
	if (ctx.cr6.lt) goto loc_82AD65E4;
	// fsubs f0,f5,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82ad667c
	goto loc_82AD667C;
loc_82AD664C:
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82ad6678
	if (!ctx.cr6.gt) goto loc_82AD6678;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad65e4
	if (ctx.cr6.gt) goto loc_82AD65E4;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82ad667c
	goto loc_82AD667C;
loc_82AD6678:
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
loc_82AD667C:
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x82ad66a8
	if (!ctx.cr6.lt) goto loc_82AD66A8;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x82ad65e4
	if (ctx.cr6.lt) goto loc_82AD65E4;
	// fsubs f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// b 0x82ad66dc
	goto loc_82AD66DC;
loc_82AD66A8:
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82ad66d0
	if (!ctx.cr6.gt) goto loc_82AD66D0;
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgt cr6,0x82ad65e4
	if (ctx.cr6.gt) goto loc_82AD65E4;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// b 0x82ad66dc
	goto loc_82AD66DC;
loc_82AD66D0:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad67bc
	if (ctx.cr6.eq) goto loc_82AD67BC;
loc_82AD66DC:
	// fsubs f4,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// fcmpu cr6,f4,f9
	ctx.cr6.compare(ctx.f4.f64, ctx.f9.f64);
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
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lfsx f3,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f2,f3,f13,f0
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f1,f10,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fcmpu cr6,f1,f9
	ctx.cr6.compare(ctx.f1.f64, ctx.f9.f64);
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
	// rlwinm r11,r4,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r9,r4,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lfsx f0,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f10,f2
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f10.f64 : ctx.f2.f64;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82ad65e4
	if (ctx.cr6.lt) goto loc_82AD65E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,31796
	ctx.r11.s64 = ctx.r11.s64 + 31796;
	// lfs f13,1296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82ad65e4
	if (ctx.cr6.gt) goto loc_82AD65E4;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fadds f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fadds f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82ad65e4
	if (!ctx.cr6.gt) goto loc_82AD65E4;
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82ad65e4
	if (!ctx.cr6.lt) goto loc_82AD65E4;
	// fsubs f0,f5,f13
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82ad65e4
	if (!ctx.cr6.gt) goto loc_82AD65E4;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82ad65e4
	if (!ctx.cr6.lt) goto loc_82AD65E4;
	// fsubs f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82ad65e4
	if (!ctx.cr6.gt) goto loc_82AD65E4;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82ad65e4
	if (!ctx.cr6.lt) goto loc_82AD65E4;
loc_82AD67BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD67C4"))) PPC_WEAK_FUNC(sub_82AD67C4);
PPC_FUNC_IMPL(__imp__sub_82AD67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD67C8"))) PPC_WEAK_FUNC(sub_82AD67C8);
PPC_FUNC_IMPL(__imp__sub_82AD67C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,20648
	ctx.r7.s64 = ctx.r9.s64 + 20648;
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

__attribute__((alias("__imp__sub_82AD67F8"))) PPC_WEAK_FUNC(sub_82AD67F8);
PPC_FUNC_IMPL(__imp__sub_82AD67F8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD6800"))) PPC_WEAK_FUNC(sub_82AD6800);
PPC_FUNC_IMPL(__imp__sub_82AD6800) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,20648
	ctx.r7.s64 = ctx.r9.s64 + 20648;
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

__attribute__((alias("__imp__sub_82AD6828"))) PPC_WEAK_FUNC(sub_82AD6828);
PPC_FUNC_IMPL(__imp__sub_82AD6828) {
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
	// bl 0x82ad6898
	ctx.lr = 0x82AD6848;
	sub_82AD6898(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad687c
	if (ctx.cr6.eq) goto loc_82AD687C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad6874
	if (ctx.cr6.lt) goto loc_82AD6874;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ad687c
	if (!ctx.cr6.gt) goto loc_82AD687C;
loc_82AD6874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AD687C;
	sub_82294A58(ctx, base);
loc_82AD687C:
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

__attribute__((alias("__imp__sub_82AD6898"))) PPC_WEAK_FUNC(sub_82AD6898);
PPC_FUNC_IMPL(__imp__sub_82AD6898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD68A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,20648
	ctx.r10.s64 = ctx.r11.s64 + 20648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD68B8;
	sub_8229C068(ctx, base);
	// addi r3,r31,30504
	ctx.r3.s64 = ctx.r31.s64 + 30504;
	// bl 0x823832f8
	ctx.lr = 0x82AD68C0;
	sub_823832F8(ctx, base);
	// addi r3,r31,30492
	ctx.r3.s64 = ctx.r31.s64 + 30492;
	// bl 0x823832f8
	ctx.lr = 0x82AD68C8;
	sub_823832F8(ctx, base);
	// addi r30,r31,30492
	ctx.r30.s64 = ctx.r31.s64 + 30492;
	// li r29,49
	ctx.r29.s64 = 49;
loc_82AD68D0:
	// addi r30,r30,-600
	ctx.r30.s64 = ctx.r30.s64 + -600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad6920
	ctx.lr = 0x82AD68DC;
	sub_82AD6920(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82ad68d0
	if (!ctx.cr0.lt) goto loc_82AD68D0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3136
	ctx.r10.s64 = ctx.r11.s64 + -3136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD68F8;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383c00
	ctx.lr = 0x82AD6900;
	sub_82383C00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6908"))) PPC_WEAK_FUNC(sub_82AD6908);
PPC_FUNC_IMPL(__imp__sub_82AD6908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD690C"))) PPC_WEAK_FUNC(sub_82AD690C);
PPC_FUNC_IMPL(__imp__sub_82AD690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD6910"))) PPC_WEAK_FUNC(sub_82AD6910);
PPC_FUNC_IMPL(__imp__sub_82AD6910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD6914"))) PPC_WEAK_FUNC(sub_82AD6914);
PPC_FUNC_IMPL(__imp__sub_82AD6914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD6918"))) PPC_WEAK_FUNC(sub_82AD6918);
PPC_FUNC_IMPL(__imp__sub_82AD6918) {
	PPC_FUNC_PROLOGUE();
	// b 0x823832f8
	sub_823832F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD691C"))) PPC_WEAK_FUNC(sub_82AD691C);
PPC_FUNC_IMPL(__imp__sub_82AD691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD6920"))) PPC_WEAK_FUNC(sub_82AD6920);
PPC_FUNC_IMPL(__imp__sub_82AD6920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AD6928;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,600
	ctx.r31.s64 = ctx.r3.s64 + 600;
	// li r29,49
	ctx.r29.s64 = 49;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
loc_82AD693C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad6974
	if (ctx.cr6.eq) goto loc_82AD6974;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad6960
	if (!ctx.cr6.eq) goto loc_82AD6960;
	// bl 0x822900a0
	ctx.lr = 0x82AD695C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD6960:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD6974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6974:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bge 0x82ad693c
	if (!ctx.cr0.lt) goto loc_82AD693C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6990"))) PPC_WEAK_FUNC(sub_82AD6990);
PPC_FUNC_IMPL(__imp__sub_82AD6990) {
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
	ctx.lr = 0x82AD69A8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad6a2c
	if (ctx.cr6.eq) goto loc_82AD6A2C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,21644
	ctx.r11.s64 = ctx.r8.s64 + 21644;
	// lis r5,-32083
	ctx.r5.s64 = -2102591488;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,30560
	ctx.r6.s64 = ctx.r5.s64 + 30560;
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
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD6A1C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD6A2C:
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

__attribute__((alias("__imp__sub_82AD6A40"))) PPC_WEAK_FUNC(sub_82AD6A40);
PPC_FUNC_IMPL(__imp__sub_82AD6A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD6A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad6a74
	if (!ctx.cr6.eq) goto loc_82AD6A74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825b9158
	ctx.lr = 0x82AD6A68;
	sub_825B9158(ctx, base);
	// stw r3,-29224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29224, ctx.r3.u32);
	// bl 0x825b9218
	ctx.lr = 0x82AD6A70;
	sub_825B9218(ctx, base);
	// lwz r10,-29224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
loc_82AD6A74:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24280);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad6a94
	if (ctx.cr6.eq) goto loc_82AD6A94;
	// bl 0x822f13c0
	ctx.lr = 0x82AD6A88;
	sub_822F13C0(ctx, base);
	// lwz r11,-24280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24280);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad6a9c
	goto loc_82AD6A9C;
loc_82AD6A94:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD6A9C:
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
	// bne cr6,0x82ad6acc
	if (!ctx.cr6.eq) goto loc_82AD6ACC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD6ABC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD6AC4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24280);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD6ACC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad6af8
	if (!ctx.cr6.eq) goto loc_82AD6AF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD6AE8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD6AF0;
	sub_82398640(ctx, base);
	// lwz r11,-24280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24280);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD6AF8:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad6b30
	if (ctx.cr6.eq) goto loc_82AD6B30;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD6B14;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad6b30
	if (!ctx.cr6.eq) goto loc_82AD6B30;
	// lwz r3,-24280(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD6B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6B30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6B38"))) PPC_WEAK_FUNC(sub_82AD6B38);
PPC_FUNC_IMPL(__imp__sub_82AD6B38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD6B40"))) PPC_WEAK_FUNC(sub_82AD6B40);
PPC_FUNC_IMPL(__imp__sub_82AD6B40) {
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
	// lwz r11,-29224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad6b84
	if (!ctx.cr6.eq) goto loc_82AD6B84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825b9158
	ctx.lr = 0x82AD6B78;
	sub_825B9158(ctx, base);
	// stw r3,-29224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29224, ctx.r3.u32);
	// bl 0x825b9218
	ctx.lr = 0x82AD6B80;
	sub_825B9218(ctx, base);
	// lwz r11,-29224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29224);
loc_82AD6B84:
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

__attribute__((alias("__imp__sub_82AD6BAC"))) PPC_WEAK_FUNC(sub_82AD6BAC);
PPC_FUNC_IMPL(__imp__sub_82AD6BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD6BB0"))) PPC_WEAK_FUNC(sub_82AD6BB0);
PPC_FUNC_IMPL(__imp__sub_82AD6BB0) {
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
	ctx.lr = 0x82AD6BC8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad6c4c
	if (ctx.cr6.eq) goto loc_82AD6C4C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,21700
	ctx.r11.s64 = ctx.r8.s64 + 21700;
	// lis r5,-32083
	ctx.r5.s64 = -2102591488;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,30280
	ctx.r6.s64 = ctx.r5.s64 + 30280;
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD6C3C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD6C4C:
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

__attribute__((alias("__imp__sub_82AD6C60"))) PPC_WEAK_FUNC(sub_82AD6C60);
PPC_FUNC_IMPL(__imp__sub_82AD6C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD6C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-29100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad6c94
	if (!ctx.cr6.eq) goto loc_82AD6C94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825bd540
	ctx.lr = 0x82AD6C88;
	sub_825BD540(ctx, base);
	// stw r3,-29100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29100, ctx.r3.u32);
	// bl 0x825bd600
	ctx.lr = 0x82AD6C90;
	sub_825BD600(ctx, base);
	// lwz r10,-29100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29100);
loc_82AD6C94:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24276);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad6cb4
	if (ctx.cr6.eq) goto loc_82AD6CB4;
	// bl 0x822f2098
	ctx.lr = 0x82AD6CA8;
	sub_822F2098(ctx, base);
	// lwz r11,-24276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24276);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad6cbc
	goto loc_82AD6CBC;
loc_82AD6CB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD6CBC:
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
	// bne cr6,0x82ad6cec
	if (!ctx.cr6.eq) goto loc_82AD6CEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD6CDC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD6CE4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24276);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD6CEC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad6d18
	if (!ctx.cr6.eq) goto loc_82AD6D18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD6D08;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD6D10;
	sub_82398640(ctx, base);
	// lwz r11,-24276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24276);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD6D18:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad6d50
	if (ctx.cr6.eq) goto loc_82AD6D50;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD6D34;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad6d50
	if (!ctx.cr6.eq) goto loc_82AD6D50;
	// lwz r3,-24276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD6D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD6D50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD6D58"))) PPC_WEAK_FUNC(sub_82AD6D58);
PPC_FUNC_IMPL(__imp__sub_82AD6D58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD6D60"))) PPC_WEAK_FUNC(sub_82AD6D60);
PPC_FUNC_IMPL(__imp__sub_82AD6D60) {
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
	// lwz r11,-29100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29100);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad6da4
	if (!ctx.cr6.eq) goto loc_82AD6DA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825bd540
	ctx.lr = 0x82AD6D98;
	sub_825BD540(ctx, base);
	// stw r3,-29100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29100, ctx.r3.u32);
	// bl 0x825bd600
	ctx.lr = 0x82AD6DA0;
	sub_825BD600(ctx, base);
	// lwz r11,-29100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29100);
loc_82AD6DA4:
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

__attribute__((alias("__imp__sub_82AD6DCC"))) PPC_WEAK_FUNC(sub_82AD6DCC);
PPC_FUNC_IMPL(__imp__sub_82AD6DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD6DD0"))) PPC_WEAK_FUNC(sub_82AD6DD0);
PPC_FUNC_IMPL(__imp__sub_82AD6DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82AD6DD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lwz r11,136(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad6e04
	if (ctx.cr6.eq) goto loc_82AD6E04;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// b 0x82ad6e34
	goto loc_82AD6E34;
loc_82AD6E04:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad6e1c
	if (ctx.cr6.eq) goto loc_82AD6E1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ad6e30
	goto loc_82AD6E30;
loc_82AD6E1C:
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad6e34
	if (ctx.cr6.eq) goto loc_82AD6E34;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82AD6E30:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82AD6E34:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,236(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 236);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r10,-27584
	ctx.r10.s64 = ctx.r10.s64 + -27584;
	// addi r4,r9,-19580
	ctx.r4.s64 = ctx.r9.s64 + -19580;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82ad6e68
	if (!ctx.cr6.eq) goto loc_82AD6E68;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x822960c0
	ctx.lr = 0x82AD6E64;
	sub_822960C0(ctx, base);
	// b 0x82ad6e84
	goto loc_82AD6E84;
loc_82AD6E68:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82ad6e7c
	if (!ctx.cr6.eq) goto loc_82AD6E7C;
	// bl 0x822960c0
	ctx.lr = 0x82AD6E78;
	sub_822960C0(ctx, base);
	// b 0x82ad6e84
	goto loc_82AD6E84;
loc_82AD6E7C:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AD6E84;
	sub_8233E1A0(ctx, base);
loc_82AD6E84:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r17,r11,11272
	ctx.r17.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82ad6ea0
	if (!ctx.cr6.eq) goto loc_82AD6EA0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
loc_82AD6EA0:
	// lis r14,-31905
	ctx.r14.s64 = -2090926080;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,21760
	ctx.r4.s64 = ctx.r11.s64 + 21760;
	// lwz r3,-24528(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -24528);
	// bl 0x8232d178
	ctx.lr = 0x82AD6EB4;
	sub_8232D178(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ad6ed8
	if (ctx.cr6.eq) goto loc_82AD6ED8;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294520
	ctx.lr = 0x82AD6ED8;
	sub_82294520(ctx, base);
loc_82AD6ED8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82294cc8
	ctx.lr = 0x82AD6EE0;
	sub_82294CC8(ctx, base);
	// lwz r11,136(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ad6f14
	if (!ctx.cr6.eq) goto loc_82AD6F14;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ad6f14
	if (!ctx.cr6.eq) goto loc_82AD6F14;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad7460
	if (ctx.cr6.eq) goto loc_82AD7460;
loc_82AD6F14:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad7460
	if (ctx.cr6.eq) goto loc_82AD7460;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad7460
	if (ctx.cr6.eq) goto loc_82AD7460;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad7460
	if (ctx.cr6.eq) goto loc_82AD7460;
	// lwz r20,120(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ad7460
	if (ctx.cr6.eq) goto loc_82AD7460;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// bl 0x822ab8c0
	ctx.lr = 0x82AD6F60;
	sub_822AB8C0(ctx, base);
	// lwz r11,196(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 196);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad7418
	if (!ctx.cr6.gt) goto loc_82AD7418;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r24,-31883
	ctx.r24.s64 = -2089484288;
	// addi r16,r10,11336
	ctx.r16.s64 = ctx.r10.s64 + 11336;
	// addi r15,r11,21968
	ctx.r15.s64 = ctx.r11.s64 + 21968;
loc_82AD6F88:
	// lwz r11,228(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82ad6fdc
	if (ctx.cr6.gt) goto loc_82AD6FDC;
	// lwz r5,-24276(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24276);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ad6fb4
	if (!ctx.cr6.eq) goto loc_82AD6FB4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82ad6bb0
	ctx.lr = 0x82AD6FA8;
	sub_82AD6BB0(ctx, base);
	// stw r3,-24276(r24)
	PPC_STORE_U32(ctx.r24.u32 + -24276, ctx.r3.u32);
	// bl 0x82ad6c60
	ctx.lr = 0x82AD6FB0;
	sub_82AD6C60(ctx, base);
	// lwz r5,-24276(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24276);
loc_82AD6FB4:
	// lwz r11,192(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 192);
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x825656f0
	ctx.lr = 0x82AD6FD8;
	sub_825656F0(ctx, base);
	// b 0x82ad7408
	goto loc_82AD7408;
loc_82AD6FDC:
	// lwz r10,192(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 192);
	// rlwinm r21,r18,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r22,r21,r10
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// ble cr6,0x82ad7408
	if (!ctx.cr6.gt) goto loc_82AD7408;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82AD6FF8:
	// lwz r11,224(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 224);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwzx r28,r11,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ad7018
	if (!ctx.cr6.eq) goto loc_82AD7018;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822960c0
	ctx.lr = 0x82AD7014;
	sub_822960C0(ctx, base);
	// b 0x82ad7038
	goto loc_82AD7038;
loc_82AD7018:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ad7030
	if (!ctx.cr6.eq) goto loc_82AD7030;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822960c0
	ctx.lr = 0x82AD702C;
	sub_822960C0(ctx, base);
	// b 0x82ad7038
	goto loc_82AD7038;
loc_82AD7030:
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AD7038;
	sub_8233E1A0(ctx, base);
loc_82AD7038:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82ad7050
	if (!ctx.cr6.eq) goto loc_82AD7050;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822960c0
	ctx.lr = 0x82AD704C;
	sub_822960C0(ctx, base);
	// b 0x82ad7070
	goto loc_82AD7070;
loc_82AD7050:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ad7068
	if (!ctx.cr6.eq) goto loc_82AD7068;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822960c0
	ctx.lr = 0x82AD7064;
	sub_822960C0(ctx, base);
	// b 0x82ad7070
	goto loc_82AD7070;
loc_82AD7068:
	// addi r4,r22,44
	ctx.r4.s64 = ctx.r22.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AD7070;
	sub_8233E1A0(ctx, base);
loc_82AD7070:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad70cc
	if (ctx.cr6.eq) goto loc_82AD70CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad70d4
	if (ctx.cr6.eq) goto loc_82AD70D4;
loc_82AD7090:
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82ad70a4
	if (!ctx.cr6.eq) goto loc_82AD70A4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_82AD70A4:
	// bl 0x82cafee0
	ctx.lr = 0x82AD70A8;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad70d4
	if (ctx.cr6.eq) goto loc_82AD70D4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82ad70c0
	if (!ctx.cr6.eq) goto loc_82AD70C0;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82AD70C0:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x82ad70d8
	goto loc_82AD70D8;
loc_82AD70CC:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// b 0x82ad7090
	goto loc_82AD7090;
loc_82AD70D4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82AD70D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r31,r8,1
	ctx.r31.u64 = ctx.r8.u64 ^ 1;
	// beq cr6,0x82ad7130
	if (ctx.cr6.eq) goto loc_82AD7130;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad7160
	if (ctx.cr6.eq) goto loc_82AD7160;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad7110
	if (!ctx.cr6.eq) goto loc_82AD7110;
	// bl 0x822900a0
	ctx.lr = 0x82AD710C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD7110:
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
	ctx.lr = 0x82AD712C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AD7130:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad7160
	if (ctx.cr6.eq) goto loc_82AD7160;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad714c
	if (!ctx.cr6.eq) goto loc_82AD714C;
	// bl 0x822900a0
	ctx.lr = 0x82AD7148;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD714C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD7160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD7160:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// beq cr6,0x82ad71b4
	if (ctx.cr6.eq) goto loc_82AD71B4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad71e4
	if (ctx.cr6.eq) goto loc_82AD71E4;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad7194
	if (!ctx.cr6.eq) goto loc_82AD7194;
	// bl 0x822900a0
	ctx.lr = 0x82AD7190;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD7194:
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
	ctx.lr = 0x82AD71B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82AD71B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad71e4
	if (ctx.cr6.eq) goto loc_82AD71E4;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad71d0
	if (!ctx.cr6.eq) goto loc_82AD71D0;
	// bl 0x822900a0
	ctx.lr = 0x82AD71CC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD71D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD71E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD71E4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// beq cr6,0x82ad73f4
	if (ctx.cr6.eq) goto loc_82AD73F4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x82ad7214
	if (!ctx.cr6.eq) goto loc_82AD7214;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822960c0
	ctx.lr = 0x82AD7210;
	sub_822960C0(ctx, base);
	// b 0x82ad7234
	goto loc_82AD7234;
loc_82AD7214:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ad722c
	if (!ctx.cr6.eq) goto loc_82AD722C;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822960c0
	ctx.lr = 0x82AD7228;
	sub_822960C0(ctx, base);
	// b 0x82ad7234
	goto loc_82AD7234;
loc_82AD722C:
	// addi r4,r22,44
	ctx.r4.s64 = ctx.r22.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AD7234;
	sub_8233E1A0(ctx, base);
loc_82AD7234:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bne cr6,0x82ad724c
	if (!ctx.cr6.eq) goto loc_82AD724C;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82AD724C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x82ad7264
	if (!ctx.cr6.eq) goto loc_82AD7264;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822960c0
	ctx.lr = 0x82AD7260;
	sub_822960C0(ctx, base);
	// b 0x82ad7284
	goto loc_82AD7284;
loc_82AD7264:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ad727c
	if (!ctx.cr6.eq) goto loc_82AD727C;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822960c0
	ctx.lr = 0x82AD7278;
	sub_822960C0(ctx, base);
	// b 0x82ad7284
	goto loc_82AD7284;
loc_82AD727C:
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AD7284;
	sub_8233E1A0(ctx, base);
loc_82AD7284:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x82ad729c
	if (!ctx.cr6.eq) goto loc_82AD729C;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
loc_82AD729C:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,-24528(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -24528);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8232d178
	ctx.lr = 0x82AD72AC;
	sub_8232D178(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad72f4
	if (ctx.cr6.eq) goto loc_82AD72F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad7324
	if (ctx.cr6.eq) goto loc_82AD7324;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad72d4
	if (!ctx.cr6.eq) goto loc_82AD72D4;
	// bl 0x822900a0
	ctx.lr = 0x82AD72D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD72D4:
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
	ctx.lr = 0x82AD72F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AD72F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad7324
	if (ctx.cr6.eq) goto loc_82AD7324;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad7310
	if (!ctx.cr6.eq) goto loc_82AD7310;
	// bl 0x822900a0
	ctx.lr = 0x82AD730C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD7310:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD7324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD7324:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// beq cr6,0x82ad7378
	if (ctx.cr6.eq) goto loc_82AD7378;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad73a8
	if (ctx.cr6.eq) goto loc_82AD73A8;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad7358
	if (!ctx.cr6.eq) goto loc_82AD7358;
	// bl 0x822900a0
	ctx.lr = 0x82AD7354;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD7358:
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
	ctx.lr = 0x82AD7374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82AD7378:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad73a8
	if (ctx.cr6.eq) goto loc_82AD73A8;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad7394
	if (!ctx.cr6.eq) goto loc_82AD7394;
	// bl 0x822900a0
	ctx.lr = 0x82AD7390;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD7394:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD73A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD73A8:
	// lwz r5,-24276(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24276);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// bne cr6,0x82ad73d4
	if (!ctx.cr6.eq) goto loc_82AD73D4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82ad6bb0
	ctx.lr = 0x82AD73C8;
	sub_82AD6BB0(ctx, base);
	// stw r3,-24276(r24)
	PPC_STORE_U32(ctx.r24.u32 + -24276, ctx.r3.u32);
	// bl 0x82ad6c60
	ctx.lr = 0x82AD73D0;
	sub_82AD6C60(ctx, base);
	// lwz r5,-24276(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24276);
loc_82AD73D4:
	// lwz r11,192(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 192);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r21,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// bl 0x825656f0
	ctx.lr = 0x82AD73F4;
	sub_825656F0(ctx, base);
loc_82AD73F4:
	// lwz r11,228(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 228);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad6ff8
	if (ctx.cr6.lt) goto loc_82AD6FF8;
loc_82AD7408:
	// lwz r11,196(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 196);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad6f88
	if (ctx.cr6.lt) goto loc_82AD6F88;
loc_82AD7418:
	// lwz r11,148(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 148);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad7460
	if (ctx.cr6.eq) goto loc_82AD7460;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad744c
	if (!ctx.cr6.eq) goto loc_82AD744C;
	// bl 0x822900a0
	ctx.lr = 0x82AD7448;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82AD744C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD7460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD7460:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7468"))) PPC_WEAK_FUNC(sub_82AD7468);
PPC_FUNC_IMPL(__imp__sub_82AD7468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82AD7470;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82ad7560
	ctx.lr = 0x82AD7494;
	sub_82AD7560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ad7538
	if (ctx.cr6.eq) goto loc_82AD7538;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad74c0
	if (!ctx.cr6.eq) goto loc_82AD74C0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-27584
	ctx.r4.s64 = ctx.r11.s64 + -27584;
	// bl 0x822960c0
	ctx.lr = 0x82AD74BC;
	sub_822960C0(ctx, base);
	// b 0x82ad74e4
	goto loc_82AD74E4;
loc_82AD74C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82ad74dc
	if (!ctx.cr6.eq) goto loc_82AD74DC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x822960c0
	ctx.lr = 0x82AD74D8;
	sub_822960C0(ctx, base);
	// b 0x82ad74e4
	goto loc_82AD74E4;
loc_82AD74DC:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x82AD74E4;
	sub_8233E1A0(ctx, base);
loc_82AD74E4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad74f8
	if (ctx.cr6.eq) goto loc_82AD74F8;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82ad7500
	goto loc_82AD7500;
loc_82AD74F8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,11272
	ctx.r6.s64 = ctx.r11.s64 + 11272;
loc_82AD7500:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r4,r10,22080
	ctx.r4.s64 = ctx.r10.s64 + 22080;
	// lwz r3,-24528(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24528);
	// bl 0x8232d178
	ctx.lr = 0x82AD7518;
	sub_8232D178(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82AD7520;
	sub_82299080(ctx, base);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82ad75e8
	ctx.lr = 0x82AD7538;
	sub_82AD75E8(ctx, base);
loc_82AD7538:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c28b0
	ctx.lr = 0x82AD7554;
	sub_825C28B0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD755C"))) PPC_WEAK_FUNC(sub_82AD755C);
PPC_FUNC_IMPL(__imp__sub_82AD755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD7560"))) PPC_WEAK_FUNC(sub_82AD7560);
PPC_FUNC_IMPL(__imp__sub_82AD7560) {
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
	// beq cr6,0x82ad75c8
	if (ctx.cr6.eq) goto loc_82AD75C8;
	// bl 0x829a93b0
	ctx.lr = 0x82AD7580;
	sub_829A93B0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad75a0
	if (ctx.cr6.eq) goto loc_82AD75A0;
loc_82AD758C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82ad75b0
	if (ctx.cr6.eq) goto loc_82AD75B0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad758c
	if (!ctx.cr6.eq) goto loc_82AD758C;
loc_82AD75A0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad75c8
	if (ctx.cr6.eq) goto loc_82AD75C8;
loc_82AD75B0:
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
loc_82AD75C8:
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

__attribute__((alias("__imp__sub_82AD75E0"))) PPC_WEAK_FUNC(sub_82AD75E0);
PPC_FUNC_IMPL(__imp__sub_82AD75E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD75E4"))) PPC_WEAK_FUNC(sub_82AD75E4);
PPC_FUNC_IMPL(__imp__sub_82AD75E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD75E8"))) PPC_WEAK_FUNC(sub_82AD75E8);
PPC_FUNC_IMPL(__imp__sub_82AD75E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD75F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-1932(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1932);
	// bl 0x8229e490
	ctx.lr = 0x82AD761C;
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
	ctx.lr = 0x82AD7638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7640"))) PPC_WEAK_FUNC(sub_82AD7640);
PPC_FUNC_IMPL(__imp__sub_82AD7640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7644"))) PPC_WEAK_FUNC(sub_82AD7644);
PPC_FUNC_IMPL(__imp__sub_82AD7644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD7648"))) PPC_WEAK_FUNC(sub_82AD7648);
PPC_FUNC_IMPL(__imp__sub_82AD7648) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r9,22576
	ctx.r8.s64 = ctx.r9.s64 + 22576;
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

__attribute__((alias("__imp__sub_82AD7670"))) PPC_WEAK_FUNC(sub_82AD7670);
PPC_FUNC_IMPL(__imp__sub_82AD7670) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7678"))) PPC_WEAK_FUNC(sub_82AD7678);
PPC_FUNC_IMPL(__imp__sub_82AD7678) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r9,22576
	ctx.r8.s64 = ctx.r9.s64 + 22576;
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

__attribute__((alias("__imp__sub_82AD7698"))) PPC_WEAK_FUNC(sub_82AD7698);
PPC_FUNC_IMPL(__imp__sub_82AD7698) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,22576
	ctx.r10.s64 = ctx.r11.s64 + 22576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD76C4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b7288
	ctx.lr = 0x82AD76CC;
	sub_825B7288(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad7700
	if (ctx.cr6.eq) goto loc_82AD7700;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad76f8
	if (ctx.cr6.lt) goto loc_82AD76F8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ad7700
	if (!ctx.cr6.gt) goto loc_82AD7700;
loc_82AD76F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AD7700;
	sub_82294A58(ctx, base);
loc_82AD7700:
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

__attribute__((alias("__imp__sub_82AD771C"))) PPC_WEAK_FUNC(sub_82AD771C);
PPC_FUNC_IMPL(__imp__sub_82AD771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD7720"))) PPC_WEAK_FUNC(sub_82AD7720);
PPC_FUNC_IMPL(__imp__sub_82AD7720) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,22576
	ctx.r10.s64 = ctx.r11.s64 + 22576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD7744;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b7288
	ctx.lr = 0x82AD774C;
	sub_825B7288(ctx, base);
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

__attribute__((alias("__imp__sub_82AD7760"))) PPC_WEAK_FUNC(sub_82AD7760);
PPC_FUNC_IMPL(__imp__sub_82AD7760) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r9,22208
	ctx.r8.s64 = ctx.r9.s64 + 22208;
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

__attribute__((alias("__imp__sub_82AD7788"))) PPC_WEAK_FUNC(sub_82AD7788);
PPC_FUNC_IMPL(__imp__sub_82AD7788) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7790"))) PPC_WEAK_FUNC(sub_82AD7790);
PPC_FUNC_IMPL(__imp__sub_82AD7790) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r9,22208
	ctx.r8.s64 = ctx.r9.s64 + 22208;
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

__attribute__((alias("__imp__sub_82AD77B0"))) PPC_WEAK_FUNC(sub_82AD77B0);
PPC_FUNC_IMPL(__imp__sub_82AD77B0) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,22208
	ctx.r10.s64 = ctx.r11.s64 + 22208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD77DC;
	sub_8229C068(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82598970
	ctx.lr = 0x82AD77E4;
	sub_82598970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82AD77EC;
	sub_825B4310(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad7820
	if (ctx.cr6.eq) goto loc_82AD7820;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ad7818
	if (ctx.cr6.lt) goto loc_82AD7818;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ad7820
	if (!ctx.cr6.gt) goto loc_82AD7820;
loc_82AD7818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82AD7820;
	sub_82294A58(ctx, base);
loc_82AD7820:
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

__attribute__((alias("__imp__sub_82AD783C"))) PPC_WEAK_FUNC(sub_82AD783C);
PPC_FUNC_IMPL(__imp__sub_82AD783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD7840"))) PPC_WEAK_FUNC(sub_82AD7840);
PPC_FUNC_IMPL(__imp__sub_82AD7840) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,22208
	ctx.r10.s64 = ctx.r11.s64 + 22208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82AD7864;
	sub_8229C068(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82598970
	ctx.lr = 0x82AD786C;
	sub_82598970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4310
	ctx.lr = 0x82AD7874;
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

__attribute__((alias("__imp__sub_82AD7888"))) PPC_WEAK_FUNC(sub_82AD7888);
PPC_FUNC_IMPL(__imp__sub_82AD7888) {
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
	ctx.lr = 0x82AD78A0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad7924
	if (ctx.cr6.eq) goto loc_82AD7924;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,22968
	ctx.r11.s64 = ctx.r8.s64 + 22968;
	// lis r5,-32082
	ctx.r5.s64 = -2102525952;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9936
	ctx.r6.s64 = ctx.r5.s64 + -9936;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,832
	ctx.r5.s64 = 832;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD7914;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD7924:
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

__attribute__((alias("__imp__sub_82AD7938"))) PPC_WEAK_FUNC(sub_82AD7938);
PPC_FUNC_IMPL(__imp__sub_82AD7938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD7940;
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
	// bne cr6,0x82ad796c
	if (!ctx.cr6.eq) goto loc_82AD796C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255b818
	ctx.lr = 0x82AD7960;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x82AD7968;
	sub_8255B8D8(ctx, base);
	// lwz r10,-29488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
loc_82AD796C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24272);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad798c
	if (ctx.cr6.eq) goto loc_82AD798C;
	// bl 0x822e2698
	ctx.lr = 0x82AD7980;
	sub_822E2698(ctx, base);
	// lwz r11,-24272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24272);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad7994
	goto loc_82AD7994;
loc_82AD798C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD7994:
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
	// bne cr6,0x82ad79c4
	if (!ctx.cr6.eq) goto loc_82AD79C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD79B4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD79BC;
	sub_822AADA8(ctx, base);
	// lwz r11,-24272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24272);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD79C4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad79f0
	if (!ctx.cr6.eq) goto loc_82AD79F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD79E0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD79E8;
	sub_82398640(ctx, base);
	// lwz r11,-24272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24272);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD79F0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad7a28
	if (ctx.cr6.eq) goto loc_82AD7A28;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD7A0C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad7a28
	if (!ctx.cr6.eq) goto loc_82AD7A28;
	// lwz r3,-24272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24272);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD7A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD7A28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7A30"))) PPC_WEAK_FUNC(sub_82AD7A30);
PPC_FUNC_IMPL(__imp__sub_82AD7A30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7A38"))) PPC_WEAK_FUNC(sub_82AD7A38);
PPC_FUNC_IMPL(__imp__sub_82AD7A38) {
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
	// bne cr6,0x82ad7a7c
	if (!ctx.cr6.eq) goto loc_82AD7A7C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255b818
	ctx.lr = 0x82AD7A70;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x82AD7A78;
	sub_8255B8D8(ctx, base);
	// lwz r11,-29488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29488);
loc_82AD7A7C:
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

__attribute__((alias("__imp__sub_82AD7AA4"))) PPC_WEAK_FUNC(sub_82AD7AA4);
PPC_FUNC_IMPL(__imp__sub_82AD7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD7AA8"))) PPC_WEAK_FUNC(sub_82AD7AA8);
PPC_FUNC_IMPL(__imp__sub_82AD7AA8) {
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
	ctx.lr = 0x82AD7AC0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad7b44
	if (ctx.cr6.eq) goto loc_82AD7B44;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,22992
	ctx.r11.s64 = ctx.r8.s64 + 22992;
	// lis r5,-32082
	ctx.r5.s64 = -2102525952;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-9992
	ctx.r6.s64 = ctx.r5.s64 + -9992;
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
	// li r5,960
	ctx.r5.s64 = 960;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD7B34;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD7B44:
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

__attribute__((alias("__imp__sub_82AD7B58"))) PPC_WEAK_FUNC(sub_82AD7B58);
PPC_FUNC_IMPL(__imp__sub_82AD7B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD7B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad7b8c
	if (!ctx.cr6.eq) goto loc_82AD7B8C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad8328
	ctx.lr = 0x82AD7B80;
	sub_82AD8328(ctx, base);
	// stw r3,-24252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24252, ctx.r3.u32);
	// bl 0x82ad83d8
	ctx.lr = 0x82AD7B88;
	sub_82AD83D8(ctx, base);
	// lwz r10,-24252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
loc_82AD7B8C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24268);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad7bac
	if (ctx.cr6.eq) goto loc_82AD7BAC;
	// bl 0x8299fce0
	ctx.lr = 0x82AD7BA0;
	sub_8299FCE0(ctx, base);
	// lwz r11,-24268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24268);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad7bb4
	goto loc_82AD7BB4;
loc_82AD7BAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD7BB4:
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
	// bne cr6,0x82ad7be4
	if (!ctx.cr6.eq) goto loc_82AD7BE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD7BD4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD7BDC;
	sub_822AADA8(ctx, base);
	// lwz r11,-24268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24268);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD7BE4:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad7c10
	if (!ctx.cr6.eq) goto loc_82AD7C10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD7C00;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD7C08;
	sub_82398640(ctx, base);
	// lwz r11,-24268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24268);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD7C10:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad7c48
	if (ctx.cr6.eq) goto loc_82AD7C48;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD7C2C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad7c48
	if (!ctx.cr6.eq) goto loc_82AD7C48;
	// lwz r3,-24268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24268);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD7C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD7C48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7C50"))) PPC_WEAK_FUNC(sub_82AD7C50);
PPC_FUNC_IMPL(__imp__sub_82AD7C50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7C58"))) PPC_WEAK_FUNC(sub_82AD7C58);
PPC_FUNC_IMPL(__imp__sub_82AD7C58) {
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
	// lwz r11,-24252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad7c9c
	if (!ctx.cr6.eq) goto loc_82AD7C9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad8328
	ctx.lr = 0x82AD7C90;
	sub_82AD8328(ctx, base);
	// stw r3,-24252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24252, ctx.r3.u32);
	// bl 0x82ad83d8
	ctx.lr = 0x82AD7C98;
	sub_82AD83D8(ctx, base);
	// lwz r11,-24252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
loc_82AD7C9C:
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

__attribute__((alias("__imp__sub_82AD7CC4"))) PPC_WEAK_FUNC(sub_82AD7CC4);
PPC_FUNC_IMPL(__imp__sub_82AD7CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD7CC8"))) PPC_WEAK_FUNC(sub_82AD7CC8);
PPC_FUNC_IMPL(__imp__sub_82AD7CC8) {
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
	ctx.lr = 0x82AD7CE0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad7d64
	if (ctx.cr6.eq) goto loc_82AD7D64;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,23016
	ctx.r11.s64 = ctx.r8.s64 + 23016;
	// lis r5,-32082
	ctx.r5.s64 = -2102525952;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10080
	ctx.r6.s64 = ctx.r5.s64 + -10080;
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
	// li r5,1088
	ctx.r5.s64 = 1088;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD7D54;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD7D64:
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

__attribute__((alias("__imp__sub_82AD7D78"))) PPC_WEAK_FUNC(sub_82AD7D78);
PPC_FUNC_IMPL(__imp__sub_82AD7D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD7D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad7dac
	if (!ctx.cr6.eq) goto loc_82AD7DAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad8328
	ctx.lr = 0x82AD7DA0;
	sub_82AD8328(ctx, base);
	// stw r3,-24252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24252, ctx.r3.u32);
	// bl 0x82ad83d8
	ctx.lr = 0x82AD7DA8;
	sub_82AD83D8(ctx, base);
	// lwz r10,-24252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
loc_82AD7DAC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24264);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad7dcc
	if (ctx.cr6.eq) goto loc_82AD7DCC;
	// bl 0x8299fce0
	ctx.lr = 0x82AD7DC0;
	sub_8299FCE0(ctx, base);
	// lwz r11,-24264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24264);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad7dd4
	goto loc_82AD7DD4;
loc_82AD7DCC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD7DD4:
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
	// bne cr6,0x82ad7e04
	if (!ctx.cr6.eq) goto loc_82AD7E04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD7DF4;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD7DFC;
	sub_822AADA8(ctx, base);
	// lwz r11,-24264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24264);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD7E04:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad7e30
	if (!ctx.cr6.eq) goto loc_82AD7E30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD7E20;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD7E28;
	sub_82398640(ctx, base);
	// lwz r11,-24264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24264);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD7E30:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad7e68
	if (ctx.cr6.eq) goto loc_82AD7E68;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD7E4C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad7e68
	if (!ctx.cr6.eq) goto loc_82AD7E68;
	// lwz r3,-24264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24264);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD7E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD7E68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD7E70"))) PPC_WEAK_FUNC(sub_82AD7E70);
PPC_FUNC_IMPL(__imp__sub_82AD7E70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD7E78"))) PPC_WEAK_FUNC(sub_82AD7E78);
PPC_FUNC_IMPL(__imp__sub_82AD7E78) {
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
	// lwz r11,-24252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad7ebc
	if (!ctx.cr6.eq) goto loc_82AD7EBC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad8328
	ctx.lr = 0x82AD7EB0;
	sub_82AD8328(ctx, base);
	// stw r3,-24252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24252, ctx.r3.u32);
	// bl 0x82ad83d8
	ctx.lr = 0x82AD7EB8;
	sub_82AD83D8(ctx, base);
	// lwz r11,-24252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24252);
loc_82AD7EBC:
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

__attribute__((alias("__imp__sub_82AD7EE4"))) PPC_WEAK_FUNC(sub_82AD7EE4);
PPC_FUNC_IMPL(__imp__sub_82AD7EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD7EE8"))) PPC_WEAK_FUNC(sub_82AD7EE8);
PPC_FUNC_IMPL(__imp__sub_82AD7EE8) {
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
	ctx.lr = 0x82AD7F00;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad7f84
	if (ctx.cr6.eq) goto loc_82AD7F84;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,23040
	ctx.r11.s64 = ctx.r8.s64 + 23040;
	// lis r5,-32082
	ctx.r5.s64 = -2102525952;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10520
	ctx.r6.s64 = ctx.r5.s64 + -10520;
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
	// li r5,1136
	ctx.r5.s64 = 1136;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD7F74;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD7F84:
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

__attribute__((alias("__imp__sub_82AD7F98"))) PPC_WEAK_FUNC(sub_82AD7F98);
PPC_FUNC_IMPL(__imp__sub_82AD7F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD7FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad7fcc
	if (!ctx.cr6.eq) goto loc_82AD7FCC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7cc8
	ctx.lr = 0x82AD7FC0;
	sub_82AD7CC8(ctx, base);
	// stw r3,-24264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24264, ctx.r3.u32);
	// bl 0x82ad7d78
	ctx.lr = 0x82AD7FC8;
	sub_82AD7D78(ctx, base);
	// lwz r10,-24264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
loc_82AD7FCC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24260);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad7fec
	if (ctx.cr6.eq) goto loc_82AD7FEC;
	// bl 0x829a5840
	ctx.lr = 0x82AD7FE0;
	sub_829A5840(ctx, base);
	// lwz r11,-24260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24260);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad7ff4
	goto loc_82AD7FF4;
loc_82AD7FEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD7FF4:
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
	// bne cr6,0x82ad8024
	if (!ctx.cr6.eq) goto loc_82AD8024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD8014;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD801C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24260);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD8024:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad8050
	if (!ctx.cr6.eq) goto loc_82AD8050;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD8040;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD8048;
	sub_82398640(ctx, base);
	// lwz r11,-24260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24260);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD8050:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad8088
	if (ctx.cr6.eq) goto loc_82AD8088;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD806C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad8088
	if (!ctx.cr6.eq) goto loc_82AD8088;
	// lwz r3,-24260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD8088:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD8090"))) PPC_WEAK_FUNC(sub_82AD8090);
PPC_FUNC_IMPL(__imp__sub_82AD8090) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD8098"))) PPC_WEAK_FUNC(sub_82AD8098);
PPC_FUNC_IMPL(__imp__sub_82AD8098) {
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
	// lwz r11,-24264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad80dc
	if (!ctx.cr6.eq) goto loc_82AD80DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7cc8
	ctx.lr = 0x82AD80D0;
	sub_82AD7CC8(ctx, base);
	// stw r3,-24264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24264, ctx.r3.u32);
	// bl 0x82ad7d78
	ctx.lr = 0x82AD80D8;
	sub_82AD7D78(ctx, base);
	// lwz r11,-24264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
loc_82AD80DC:
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

__attribute__((alias("__imp__sub_82AD8104"))) PPC_WEAK_FUNC(sub_82AD8104);
PPC_FUNC_IMPL(__imp__sub_82AD8104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8108"))) PPC_WEAK_FUNC(sub_82AD8108);
PPC_FUNC_IMPL(__imp__sub_82AD8108) {
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
	ctx.lr = 0x82AD8120;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad81a4
	if (ctx.cr6.eq) goto loc_82AD81A4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,23072
	ctx.r11.s64 = ctx.r8.s64 + 23072;
	// lis r5,-32082
	ctx.r5.s64 = -2102525952;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10912
	ctx.r6.s64 = ctx.r5.s64 + -10912;
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
	// li r5,1088
	ctx.r5.s64 = 1088;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD8194;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD81A4:
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

__attribute__((alias("__imp__sub_82AD81B8"))) PPC_WEAK_FUNC(sub_82AD81B8);
PPC_FUNC_IMPL(__imp__sub_82AD81B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD81C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad81ec
	if (!ctx.cr6.eq) goto loc_82AD81EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7cc8
	ctx.lr = 0x82AD81E0;
	sub_82AD7CC8(ctx, base);
	// stw r3,-24264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24264, ctx.r3.u32);
	// bl 0x82ad7d78
	ctx.lr = 0x82AD81E8;
	sub_82AD7D78(ctx, base);
	// lwz r10,-24264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
loc_82AD81EC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24256);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad820c
	if (ctx.cr6.eq) goto loc_82AD820C;
	// bl 0x829a5840
	ctx.lr = 0x82AD8200;
	sub_829A5840(ctx, base);
	// lwz r11,-24256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24256);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad8214
	goto loc_82AD8214;
loc_82AD820C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD8214:
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
	// bne cr6,0x82ad8244
	if (!ctx.cr6.eq) goto loc_82AD8244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD8234;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD823C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24256);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD8244:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad8270
	if (!ctx.cr6.eq) goto loc_82AD8270;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD8260;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD8268;
	sub_82398640(ctx, base);
	// lwz r11,-24256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24256);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD8270:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad82a8
	if (ctx.cr6.eq) goto loc_82AD82A8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD828C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad82a8
	if (!ctx.cr6.eq) goto loc_82AD82A8;
	// lwz r3,-24256(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24256);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD82A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD82A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD82B0"))) PPC_WEAK_FUNC(sub_82AD82B0);
PPC_FUNC_IMPL(__imp__sub_82AD82B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD82B8"))) PPC_WEAK_FUNC(sub_82AD82B8);
PPC_FUNC_IMPL(__imp__sub_82AD82B8) {
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
	// lwz r11,-24264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad82fc
	if (!ctx.cr6.eq) goto loc_82AD82FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7cc8
	ctx.lr = 0x82AD82F0;
	sub_82AD7CC8(ctx, base);
	// stw r3,-24264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24264, ctx.r3.u32);
	// bl 0x82ad7d78
	ctx.lr = 0x82AD82F8;
	sub_82AD7D78(ctx, base);
	// lwz r11,-24264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
loc_82AD82FC:
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

__attribute__((alias("__imp__sub_82AD8324"))) PPC_WEAK_FUNC(sub_82AD8324);
PPC_FUNC_IMPL(__imp__sub_82AD8324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8328"))) PPC_WEAK_FUNC(sub_82AD8328);
PPC_FUNC_IMPL(__imp__sub_82AD8328) {
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
	ctx.lr = 0x82AD8340;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad83c4
	if (ctx.cr6.eq) goto loc_82AD83C4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,23116
	ctx.r11.s64 = ctx.r8.s64 + 23116;
	// lis r5,-32082
	ctx.r5.s64 = -2102525952;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-10960
	ctx.r6.s64 = ctx.r5.s64 + -10960;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,896
	ctx.r5.s64 = 896;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82AD83B4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD83C4:
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

__attribute__((alias("__imp__sub_82AD83D8"))) PPC_WEAK_FUNC(sub_82AD83D8);
PPC_FUNC_IMPL(__imp__sub_82AD83D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD83E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad840c
	if (!ctx.cr6.eq) goto loc_82AD840C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7888
	ctx.lr = 0x82AD8400;
	sub_82AD7888(ctx, base);
	// stw r3,-24272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24272, ctx.r3.u32);
	// bl 0x82ad7938
	ctx.lr = 0x82AD8408;
	sub_82AD7938(ctx, base);
	// lwz r10,-24272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
loc_82AD840C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24252);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ad842c
	if (ctx.cr6.eq) goto loc_82AD842C;
	// bl 0x8299f6a8
	ctx.lr = 0x82AD8420;
	sub_8299F6A8(ctx, base);
	// lwz r11,-24252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24252);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82ad8434
	goto loc_82AD8434;
loc_82AD842C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82AD8434:
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
	// bne cr6,0x82ad8464
	if (!ctx.cr6.eq) goto loc_82AD8464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82AD8454;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82AD845C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24252);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82AD8464:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad8490
	if (!ctx.cr6.eq) goto loc_82AD8490;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82AD8480;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82AD8488;
	sub_82398640(ctx, base);
	// lwz r11,-24252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24252);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82AD8490:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad84c8
	if (ctx.cr6.eq) goto loc_82AD84C8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82AD84AC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82ad84c8
	if (!ctx.cr6.eq) goto loc_82AD84C8;
	// lwz r3,-24252(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24252);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD84C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD84C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD84D0"))) PPC_WEAK_FUNC(sub_82AD84D0);
PPC_FUNC_IMPL(__imp__sub_82AD84D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD84D8"))) PPC_WEAK_FUNC(sub_82AD84D8);
PPC_FUNC_IMPL(__imp__sub_82AD84D8) {
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
	// lwz r11,-24272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad851c
	if (!ctx.cr6.eq) goto loc_82AD851C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7888
	ctx.lr = 0x82AD8510;
	sub_82AD7888(ctx, base);
	// stw r3,-24272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24272, ctx.r3.u32);
	// bl 0x82ad7938
	ctx.lr = 0x82AD8518;
	sub_82AD7938(ctx, base);
	// lwz r11,-24272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
loc_82AD851C:
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

__attribute__((alias("__imp__sub_82AD8544"))) PPC_WEAK_FUNC(sub_82AD8544);
PPC_FUNC_IMPL(__imp__sub_82AD8544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8548"))) PPC_WEAK_FUNC(sub_82AD8548);
PPC_FUNC_IMPL(__imp__sub_82AD8548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD8550;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8256cd98
	ctx.lr = 0x82AD855C;
	sub_8256CD98(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82ad8574
	if (ctx.cr6.eq) goto loc_82AD8574;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x82ad8578
	goto loc_82AD8578;
loc_82AD8574:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD8578:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a9acc8
	ctx.lr = 0x82AD8584;
	sub_82A9ACC8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ad8648
	if (ctx.cr6.eq) goto loc_82AD8648;
loc_82AD8590:
	// ld r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 76);
	// rlwinm r10,r11,0,5,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFF8;
	// rlwinm r10,r10,0,28,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC00000F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad862c
	if (ctx.cr6.eq) goto loc_82AD862C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad862c
	if (!ctx.cr6.gt) goto loc_82AD862C;
loc_82AD85B4:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad861c
	if (ctx.cr6.eq) goto loc_82AD861C;
	// bl 0x8258a478
	ctx.lr = 0x82AD85D4;
	sub_8258A478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ad861c
	if (ctx.cr6.eq) goto loc_82AD861C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AD85E4:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82ad8600
	if (!ctx.cr6.eq) goto loc_82AD8600;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad85e4
	if (!ctx.cr6.eq) goto loc_82AD85E4;
loc_82AD8600:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD861C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD861C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad85b4
	if (ctx.cr6.lt) goto loc_82AD85B4;
loc_82AD862C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82a9acc8
	ctx.lr = 0x82AD863C;
	sub_82A9ACC8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ad8590
	if (!ctx.cr6.eq) goto loc_82AD8590;
loc_82AD8648:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD8650"))) PPC_WEAK_FUNC(sub_82AD8650);
PPC_FUNC_IMPL(__imp__sub_82AD8650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AD8658;
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
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad86b4
	if (!ctx.cr6.gt) goto loc_82AD86B4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AD8678:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82a9ad68
	ctx.lr = 0x82AD8684;
	sub_82A9AD68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad86a0
	if (ctx.cr6.eq) goto loc_82AD86A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD86A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD86A0:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad8678
	if (ctx.cr6.lt) goto loc_82AD8678;
loc_82AD86B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD86BC"))) PPC_WEAK_FUNC(sub_82AD86BC);
PPC_FUNC_IMPL(__imp__sub_82AD86BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD86C0"))) PPC_WEAK_FUNC(sub_82AD86C0);
PPC_FUNC_IMPL(__imp__sub_82AD86C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AD86C8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad8754
	if (!ctx.cr6.gt) goto loc_82AD8754;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AD86EC:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82a9ad68
	ctx.lr = 0x82AD86F8;
	sub_82A9AD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ad8740
	if (ctx.cr6.eq) goto loc_82AD8740;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad8740
	if (ctx.cr6.eq) goto loc_82AD8740;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 620);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD8740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD8740:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad86ec
	if (ctx.cr6.lt) goto loc_82AD86EC;
loc_82AD8754:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD8760"))) PPC_WEAK_FUNC(sub_82AD8760);
PPC_FUNC_IMPL(__imp__sub_82AD8760) {
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
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD877C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82a9ad68
	ctx.lr = 0x82AD8780;
	sub_82A9AD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD8790"))) PPC_WEAK_FUNC(sub_82AD8790);
PPC_FUNC_IMPL(__imp__sub_82AD8790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r8,25344(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// bge cr6,0x82ad87d8
	if (!ctx.cr6.lt) goto loc_82AD87D8;
	// lwz r9,744(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ad87d8
	if (!ctx.cr6.gt) goto loc_82AD87D8;
	// lwz r10,740(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
loc_82AD87B4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82ad87d4
	if (!ctx.cr6.eq) goto loc_82AD87D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ad87b4
	if (ctx.cr6.lt) goto loc_82AD87B4;
	// b 0x82ad87d8
	goto loc_82AD87D8;
loc_82AD87D4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82AD87D8:
	// lwz r11,744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad8800
	if (!ctx.cr6.gt) goto loc_82AD8800;
	// lwz r11,740(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad8800
	if (ctx.cr6.eq) goto loc_82AD8800;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x829d9660
	sub_829D9660(ctx, base);
	return;
loc_82AD8800:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD8808"))) PPC_WEAK_FUNC(sub_82AD8808);
PPC_FUNC_IMPL(__imp__sub_82AD8808) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad8858
	if (ctx.cr6.eq) goto loc_82AD8858;
	// lwz r11,804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad8840
	if (!ctx.cr6.eq) goto loc_82AD8840;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
loc_82AD8840:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823f1ed0
	ctx.lr = 0x82AD8848;
	sub_823F1ED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AD8858:
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

__attribute__((alias("__imp__sub_82AD886C"))) PPC_WEAK_FUNC(sub_82AD886C);
PPC_FUNC_IMPL(__imp__sub_82AD886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8870"))) PPC_WEAK_FUNC(sub_82AD8870);
PPC_FUNC_IMPL(__imp__sub_82AD8870) {
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
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad88dc
	if (!ctx.cr6.eq) goto loc_82AD88DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD88B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad88c4
	if (ctx.cr6.eq) goto loc_82AD88C4;
	// lwz r3,496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// b 0x82ad88e0
	goto loc_82AD88E0;
loc_82AD88C4:
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
loc_82AD88DC:
	// lwz r3,840(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 840);
loc_82AD88E0:
	// bl 0x829d9128
	ctx.lr = 0x82AD88E4;
	sub_829D9128(ctx, base);
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

__attribute__((alias("__imp__sub_82AD88F8"))) PPC_WEAK_FUNC(sub_82AD88F8);
PPC_FUNC_IMPL(__imp__sub_82AD88F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad8924
	if (ctx.cr6.eq) goto loc_82AD8924;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ad8924
	if (!ctx.cr6.gt) goto loc_82AD8924;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82AD8924:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD892C"))) PPC_WEAK_FUNC(sub_82AD892C);
PPC_FUNC_IMPL(__imp__sub_82AD892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8930"))) PPC_WEAK_FUNC(sub_82AD8930);
PPC_FUNC_IMPL(__imp__sub_82AD8930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD8938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad8a98
	if (ctx.cr6.eq) goto loc_82AD8A98;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ad8968
	if (!ctx.cr6.eq) goto loc_82AD8968;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad8a98
	if (ctx.cr6.eq) goto loc_82AD8A98;
loc_82AD8968:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823ef2f0
	ctx.lr = 0x82AD8974;
	sub_823EF2F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ad8a98
	if (ctx.cr6.eq) goto loc_82AD8A98;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x828dd530
	ctx.lr = 0x82AD898C;
	sub_828DD530(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ad89cc
	if (ctx.cr6.eq) goto loc_82AD89CC;
	// bl 0x828dd530
	ctx.lr = 0x82AD899C;
	sub_828DD530(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD89C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AD89CC:
	// bl 0x8239a9d8
	ctx.lr = 0x82AD89D0;
	sub_8239A9D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ad8a10
	if (ctx.cr6.eq) goto loc_82AD8A10;
	// bl 0x8239a9d8
	ctx.lr = 0x82AD89E0;
	sub_8239A9D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AD8A10:
	// bl 0x828dd5b0
	ctx.lr = 0x82AD8A14;
	sub_828DD5B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ad8a54
	if (ctx.cr6.eq) goto loc_82AD8A54;
	// bl 0x828dd5b0
	ctx.lr = 0x82AD8A24;
	sub_828DD5B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AD8A54:
	// bl 0x823ef420
	ctx.lr = 0x82AD8A58;
	sub_823EF420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad8a98
	if (ctx.cr6.eq) goto loc_82AD8A98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ef420
	ctx.lr = 0x82AD8A68;
	sub_823EF420(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AD8A98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD8AA4"))) PPC_WEAK_FUNC(sub_82AD8AA4);
PPC_FUNC_IMPL(__imp__sub_82AD8AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8AA8"))) PPC_WEAK_FUNC(sub_82AD8AA8);
PPC_FUNC_IMPL(__imp__sub_82AD8AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD8AB0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae0
	ctx.lr = 0x82AD8AB8;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad8c20
	if (ctx.cr6.eq) goto loc_82AD8C20;
	// lfs f29,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fsubs f28,f0,f29
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f27,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f27.f64 = double(temp.f32);
	// lfs f13,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r29,1
	ctx.r29.s64 = 1;
	// fsubs f26,f13,f27
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x8242bfa0
	ctx.lr = 0x82AD8B48;
	sub_8242BFA0(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x8242bfa0
	ctx.lr = 0x82AD8B90;
	sub_8242BFA0(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fadds f2,f26,f27
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8242bfa0
	ctx.lr = 0x82AD8BD8;
	sub_8242BFA0(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fadds f1,f28,f29
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x82AD8C20;
	sub_8242BFA0(ctx, base);
loc_82AD8C20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b2c
	ctx.lr = 0x82AD8C2C;
	__restfpr_26(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD8C30"))) PPC_WEAK_FUNC(sub_82AD8C30);
PPC_FUNC_IMPL(__imp__sub_82AD8C30) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD8C38"))) PPC_WEAK_FUNC(sub_82AD8C38);
PPC_FUNC_IMPL(__imp__sub_82AD8C38) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad8c88
	if (ctx.cr6.eq) goto loc_82AD8C88;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad8c88
	if (ctx.cr6.eq) goto loc_82AD8C88;
	// lwz r11,952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad8c88
	if (ctx.cr6.eq) goto loc_82AD8C88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a59ed8
	ctx.lr = 0x82AD8C88;
	sub_82A59ED8(ctx, base);
loc_82AD8C88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD8C98"))) PPC_WEAK_FUNC(sub_82AD8C98);
PPC_FUNC_IMPL(__imp__sub_82AD8C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AD8CA0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 + 60;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD8CBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ad8cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD8CBC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r28,r29,76
	ctx.r28.s64 = ctx.r29.s64 + 76;
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82AD8CE4:
	// clrlwi r27,r31,24
	ctx.r27.u64 = ctx.r31.u32 & 0xFF;
	// lbzx r6,r28,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82563f48
	ctx.lr = 0x82AD8D00;
	sub_82563F48(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82563f48
	ctx.lr = 0x82AD8D1C;
	sub_82563F48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82ad8ce4
	if (ctx.cr6.lt) goto loc_82AD8CE4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD8D38"))) PPC_WEAK_FUNC(sub_82AD8D38);
PPC_FUNC_IMPL(__imp__sub_82AD8D38) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,856(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ad8e44
	if (ctx.cr6.gt) goto loc_82AD8E44;
	// lfs f13,864(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82ad8e4c
	if (!ctx.cr6.gt) goto loc_82AD8E4C;
	// lfs f11,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// lfs f12,848(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,864(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f7,844(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// ble cr6,0x82ad8da4
	if (!ctx.cr6.gt) goto loc_82AD8DA4;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82ad8e4c
	if (!ctx.cr6.eq) goto loc_82AD8E4C;
loc_82AD8DA4:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stfs f0,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f12,844(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ad8e00
	if (!ctx.cr6.eq) goto loc_82AD8E00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad8e00
	if (ctx.cr6.eq) goto loc_82AD8E00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a705a8
	ctx.lr = 0x82AD8DF4;
	sub_82A705A8(ctx, base);
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// rlwinm r8,r9,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
loc_82AD8E00:
	// addi r30,r31,876
	ctx.r30.s64 = ctx.r31.s64 + 876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82AD8E10;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad8e4c
	if (ctx.cr6.eq) goto loc_82AD8E4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-1340(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1340);
	// lwz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD8E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ad8e4c
	goto loc_82AD8E4C;
loc_82AD8E44:
	// fsubs f0,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
loc_82AD8E4C:
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

__attribute__((alias("__imp__sub_82AD8E64"))) PPC_WEAK_FUNC(sub_82AD8E64);
PPC_FUNC_IMPL(__imp__sub_82AD8E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8E68"))) PPC_WEAK_FUNC(sub_82AD8E68);
PPC_FUNC_IMPL(__imp__sub_82AD8E68) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad8ec0
	if (ctx.cr6.eq) goto loc_82AD8EC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a70038
	ctx.lr = 0x82AD8EB4;
	sub_82A70038(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
loc_82AD8EC0:
	// stfs f30,848(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f31,864(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f29,856(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
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

__attribute__((alias("__imp__sub_82AD8EEC"))) PPC_WEAK_FUNC(sub_82AD8EEC);
PPC_FUNC_IMPL(__imp__sub_82AD8EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8EF0"))) PPC_WEAK_FUNC(sub_82AD8EF0);
PPC_FUNC_IMPL(__imp__sub_82AD8EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f3,852(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,860(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AD8F0C"))) PPC_WEAK_FUNC(sub_82AD8F0C);
PPC_FUNC_IMPL(__imp__sub_82AD8F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8F10"))) PPC_WEAK_FUNC(sub_82AD8F10);
PPC_FUNC_IMPL(__imp__sub_82AD8F10) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD8F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad8f68
	if (ctx.cr6.eq) goto loc_82AD8F68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a70038
	ctx.lr = 0x82AD8F5C;
	sub_82A70038(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
loc_82AD8F68:
	// stfs f30,848(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f31,864(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f29,856(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
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

__attribute__((alias("__imp__sub_82AD8F94"))) PPC_WEAK_FUNC(sub_82AD8F94);
PPC_FUNC_IMPL(__imp__sub_82AD8F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8F98"))) PPC_WEAK_FUNC(sub_82AD8F98);
PPC_FUNC_IMPL(__imp__sub_82AD8F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f3,852(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,860(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AD8FB4"))) PPC_WEAK_FUNC(sub_82AD8FB4);
PPC_FUNC_IMPL(__imp__sub_82AD8FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD8FB8"))) PPC_WEAK_FUNC(sub_82AD8FB8);
PPC_FUNC_IMPL(__imp__sub_82AD8FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AD8FC0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ad903c
	if (ctx.cr6.eq) goto loc_82AD903C;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad903c
	if (!ctx.cr6.gt) goto loc_82AD903C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AD8FF0:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a6fe00
	ctx.lr = 0x82AD8FFC;
	sub_82A6FE00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad9028
	if (ctx.cr6.eq) goto loc_82AD9028;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a6fe00
	ctx.lr = 0x82AD9010;
	sub_82A6FE00(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD9028:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad8ff0
	if (ctx.cr6.lt) goto loc_82AD8FF0;
loc_82AD903C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9048"))) PPC_WEAK_FUNC(sub_82AD9048);
PPC_FUNC_IMPL(__imp__sub_82AD9048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AD9050;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ad90cc
	if (ctx.cr6.eq) goto loc_82AD90CC;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ad90cc
	if (!ctx.cr6.gt) goto loc_82AD90CC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AD9080:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a6fe00
	ctx.lr = 0x82AD908C;
	sub_82A6FE00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad90b8
	if (ctx.cr6.eq) goto loc_82AD90B8;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a6fe00
	ctx.lr = 0x82AD90A0;
	sub_82A6FE00(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD90B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD90B8:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ad9080
	if (ctx.cr6.lt) goto loc_82AD9080;
loc_82AD90CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD90D8"))) PPC_WEAK_FUNC(sub_82AD90D8);
PPC_FUNC_IMPL(__imp__sub_82AD90D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD90E0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae8
	ctx.lr = 0x82AD90E8;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ad8aa8
	ctx.lr = 0x82AD90F8;
	sub_82AD8AA8(ctx, base);
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad9254
	if (ctx.cr6.eq) goto loc_82AD9254;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,844(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29076);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ad9254
	if (ctx.cr6.lt) goto loc_82AD9254;
	// lwz r10,920(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,924(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// lwz r7,928(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// lfs f12,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,932(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// lfs f11,836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// lfs f10,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lfs f0,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// rlwinm r5,r11,0,1,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r31,920
	ctx.r4.s64 = ctx.r31.s64 + 920;
	// lfs f6,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f11,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f3,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f1,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f29,f3,f0
	ctx.f29.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsubs f28,f1,f13
	ctx.f28.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// beq cr6,0x82ad91c0
	if (ctx.cr6.eq) goto loc_82AD91C0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f31,f29,f0,f31
	ctx.f31.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fnmsubs f30,f28,f0,f30
	ctx.f30.f64 = double(float(-(ctx.f28.f64 * ctx.f0.f64 - ctx.f30.f64)));
loc_82AD91C0:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad9224
	if (!ctx.cr6.eq) goto loc_82AD9224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82cb1160
	ctx.lr = 0x82AD91E0;
	sub_82CB1160(ctx, base);
	// lfs f8,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// lfs f6,904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f6.f64 = double(temp.f32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// lfs f5,900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b34
	ctx.lr = 0x82AD9220;
	__restfpr_28(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82AD9224:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r8,688(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD9254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD9254:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b34
	ctx.lr = 0x82AD9260;
	__restfpr_28(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9264"))) PPC_WEAK_FUNC(sub_82AD9264);
PPC_FUNC_IMPL(__imp__sub_82AD9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9268"))) PPC_WEAK_FUNC(sub_82AD9268);
PPC_FUNC_IMPL(__imp__sub_82AD9268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82AD9270;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ad0
	ctx.lr = 0x82AD9278;
	__savefpr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// bl 0x8259a830
	ctx.lr = 0x82AD92AC;
	sub_8259A830(ctx, base);
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD92C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,268(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD92E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ad9424
	if (ctx.cr6.eq) goto loc_82AD9424;
	// lwz r29,192(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// bl 0x82add3f8
	ctx.lr = 0x82AD92F8;
	sub_82ADD3F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad93a0
	if (ctx.cr6.eq) goto loc_82AD93A0;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lfs f0,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lfs f13,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r6,320(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f26,f7,f13
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f27,f8,f0
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AD9354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lfs f8,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fmr f6,f26
	ctx.f6.f64 = ctx.f26.f64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8242bfa0
	ctx.lr = 0x82AD9390;
	sub_8242BFA0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b1c
	ctx.lr = 0x82AD939C;
	__restfpr_22(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82AD93A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259a8b0
	ctx.lr = 0x82AD93A8;
	sub_8259A8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// beq cr6,0x82ad93dc
	if (ctx.cr6.eq) goto loc_82AD93DC;
	// bl 0x8264c128
	ctx.lr = 0x82AD93CC;
	sub_8264C128(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b1c
	ctx.lr = 0x82AD93D8;
	__restfpr_22(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82AD93DC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f22
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f22.f64));
	// fdivs f12,f0,f23
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f23.f64));
	// fmuls f8,f13,f24
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// fmuls f7,f12,f25
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmuls f6,f13,f26
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f5,f12,f27
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x82AD9414;
	sub_8242BFA0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b1c
	ctx.lr = 0x82AD9420;
	__restfpr_22(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82AD9424:
	// bl 0x82a18308
	ctx.lr = 0x82AD9428;
	sub_82A18308(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad9498
	if (ctx.cr6.eq) goto loc_82AD9498;
	// lfs f0,908(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f12,912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f10.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// fdivs f23,f0,f11
	ctx.f23.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fdivs f22,f0,f9
	ctx.f22.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD946C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f8,f22,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f22.f64 * ctx.f24.f64));
	// fmuls f7,f23,f25
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f6,f22,f26
	ctx.f6.f64 = double(float(ctx.f22.f64 * ctx.f26.f64));
	// fmuls f5,f23,f27
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8242c1f0
	ctx.lr = 0x82AD9498;
	sub_8242C1F0(ctx, base);
loc_82AD9498:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b1c
	ctx.lr = 0x82AD94A4;
	__restfpr_22(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD94A8"))) PPC_WEAK_FUNC(sub_82AD94A8);
PPC_FUNC_IMPL(__imp__sub_82AD94A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AD94B0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ab0
	ctx.lr = 0x82AD94B8;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r9.u64);
	// fmr f15,f3
	ctx.fpscr.disableFlushMode();
	ctx.f15.f64 = ctx.f3.f64;
	// std r10,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r10.u64);
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// stfs f15,372(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f28,380(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD94F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,268(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD950C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f29,f15
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f15.f64;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// fabs f18,f28
	ctx.f18.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// lfs f22,-28844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28844);
	ctx.f22.f64 = double(temp.f32);
	// fabs f20,f29
	ctx.f20.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f21,908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f21.f64 = double(temp.f32);
	// lfs f19,912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f31,f21,f22
	ctx.f31.f64 = double(float(ctx.f21.f64 * ctx.f22.f64));
	// lfs f25,900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f30,f19,f22
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f22.f64));
	// lfs f24,904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f1,f20,f21
	ctx.f1.f64 = double(float(ctx.f20.f64 - ctx.f21.f64));
	// bl 0x82cb3db0
	ctx.lr = 0x82AD9544;
	sub_82CB3DB0(ctx, base);
	// frsp f16,f1
	ctx.fpscr.disableFlushMode();
	ctx.f16.f64 = double(float(ctx.f1.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fsubs f1,f18,f19
	ctx.f1.f64 = double(float(ctx.f18.f64 - ctx.f19.f64));
	// bl 0x82cb3db0
	ctx.lr = 0x82AD9554;
	sub_82CB3DB0(ctx, base);
	// frsp f17,f1
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = double(float(ctx.f1.f64));
	// stfs f17,116(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fcmpu cr6,f21,f20
	ctx.cr6.compare(ctx.f21.f64, ctx.f20.f64);
	// li r28,1
	ctx.r28.s64 = 1;
	// blt cr6,0x82ad956c
	if (ctx.cr6.lt) goto loc_82AD956C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AD956C:
	// fcmpu cr6,f19,f18
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f19.f64, ctx.f18.f64);
	// li r29,1
	ctx.r29.s64 = 1;
	// blt cr6,0x82ad957c
	if (ctx.cr6.lt) goto loc_82AD957C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AD957C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f23,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f23.f64 = double(temp.f32);
	// beq cr6,0x82ad9678
	if (ctx.cr6.eq) goto loc_82AD9678;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ad95a0
	if (!ctx.cr6.eq) goto loc_82AD95A0;
	// fmuls f17,f18,f22
	ctx.f17.f64 = double(float(ctx.f18.f64 * ctx.f22.f64));
	// b 0x82ad95a4
	goto loc_82AD95A4;
loc_82AD95A0:
	// fmr f17,f30
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = ctx.f30.f64;
loc_82AD95A4:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb3db0
	ctx.lr = 0x82AD95B0;
	sub_82CB3DB0(ctx, base);
	// frsp f15,f1
	ctx.fpscr.disableFlushMode();
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x82cb3db0
	ctx.lr = 0x82AD95C0;
	sub_82CB3DB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// frsp f17,f1
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = double(float(ctx.f1.f64));
	// li r5,16
	ctx.r5.s64 = 16;
	// fadds f14,f31,f25
	ctx.f14.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// fadds f15,f15,f27
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f27.f64));
	// bl 0x82cb1160
	ctx.lr = 0x82AD95E0;
	sub_82CB1160(ctx, base);
	// lwz r11,684(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 684);
	// fmr f5,f14
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f14.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f15
	ctx.f1.f64 = ctx.f15.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f7,f23
	ctx.f7.f64 = ctx.f23.f64;
	// fmr f6,f24
	ctx.f6.f64 = ctx.f24.f64;
	// fmr f4,f17
	ctx.f4.f64 = ctx.f17.f64;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82AD9628;
	sub_82CB1160(ctx, base);
	// lfs f0,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f19,f24
	ctx.f13.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// fadds f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f26.f64 + ctx.f0.f64));
	// lwz r10,684(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 684);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f7,f23
	ctx.f7.f64 = ctx.f23.f64;
	// fmr f5,f14
	ctx.f5.f64 = ctx.f14.f64;
	// fmr f4,f17
	ctx.f4.f64 = ctx.f17.f64;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// fmr f1,f15
	ctx.f1.f64 = ctx.f15.f64;
	// fsubs f6,f13,f30
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f2,f12,f17
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f17.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f14,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f14.f64 = double(temp.f32);
	// lfs f17,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f15.f64 = double(temp.f32);
	// b 0x82ad967c
	goto loc_82AD967C;
loc_82AD9678:
	// fmuls f14,f20,f22
	ctx.fpscr.disableFlushMode();
	ctx.f14.f64 = double(float(ctx.f20.f64 * ctx.f22.f64));
loc_82AD967C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad9764
	if (ctx.cr6.eq) goto loc_82AD9764;
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ad9698
	if (!ctx.cr6.eq) goto loc_82AD9698;
	// fmuls f14,f20,f22
	ctx.f14.f64 = double(float(ctx.f20.f64 * ctx.f22.f64));
	// b 0x82ad969c
	goto loc_82AD969C;
loc_82AD9698:
	// fmr f14,f31
	ctx.fpscr.disableFlushMode();
	ctx.f14.f64 = ctx.f31.f64;
loc_82AD969C:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// bl 0x82cb3db0
	ctx.lr = 0x82AD96A8;
	sub_82CB3DB0(ctx, base);
	// frsp f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f1.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb3db0
	ctx.lr = 0x82AD96B8;
	sub_82CB3DB0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// fadds f20,f30,f24
	ctx.f20.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// fadds f18,f0,f26
	ctx.f18.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// bl 0x82cb1160
	ctx.lr = 0x82AD96D8;
	sub_82CB1160(ctx, base);
	// lwz r11,684(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 684);
	// fmr f6,f20
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f20.f64;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f8,f23
	ctx.f8.f64 = ctx.f23.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// fmr f4,f17
	ctx.f4.f64 = ctx.f17.f64;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD970C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82AD9720;
	sub_82CB1160(ctx, base);
	// fadds f13,f21,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// lwz r10,684(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 684);
	// fadds f12,f27,f15
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f15.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f8,f23
	ctx.f8.f64 = ctx.f23.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f20
	ctx.f6.f64 = ctx.f20.f64;
	// fmr f4,f17
	ctx.f4.f64 = ctx.f17.f64;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// fsubs f5,f13,f31
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsubs f1,f12,f22
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f22.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD975C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f22,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f22.f64 = double(temp.f32);
	// b 0x82ad9768
	goto loc_82AD9768;
loc_82AD9764:
	// fmuls f22,f18,f22
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f18.f64 * ctx.f22.f64));
loc_82AD9768:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// bl 0x82cb3db0
	ctx.lr = 0x82AD9774;
	sub_82CB3DB0(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x82cb3db0
	ctx.lr = 0x82AD9784;
	sub_82CB3DB0(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ad97e0
	if (ctx.cr6.eq) goto loc_82AD97E0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ad97e0
	if (ctx.cr6.eq) goto loc_82AD97E0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82cb1160
	ctx.lr = 0x82AD97AC;
	sub_82CB1160(ctx, base);
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// fmr f8,f23
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f23.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f7,f23
	ctx.f7.f64 = ctx.f23.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f6,f30,f24
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// fadds f5,f31,f25
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// fmr f4,f17
	ctx.f4.f64 = ctx.f17.f64;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// fadds f2,f28,f26
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f26.f64));
	// fadds f1,f29,f27
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD97E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD97E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82cb1160
	ctx.lr = 0x82AD97F4;
	sub_82CB1160(ctx, base);
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f6,f24
	ctx.f6.f64 = ctx.f24.f64;
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD9828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f21,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// fadds f13,f27,f15
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f15.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r5,16
	ctx.r5.s64 = 16;
	// fsubs f23,f0,f31
	ctx.f23.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsubs f22,f13,f29
	ctx.f22.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82AD984C;
	sub_82CB1160(ctx, base);
	// lwz r10,684(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// fmr f5,f23
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f23.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f24
	ctx.f6.f64 = ctx.f24.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f19,f24
	ctx.f11.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f10,f26,f12
	ctx.f10.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r5,16
	ctx.r5.s64 = 16;
	// fsubs f26,f11,f30
	ctx.f26.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fsubs f24,f10,f28
	ctx.f24.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82AD98A8;
	sub_82CB1160(ctx, base);
	// lwz r9,684(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// fmr f6,f26
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f26.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD98DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82AD98F0;
	sub_82CB1160(ctx, base);
	// lwz r8,684(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f6,f26
	ctx.f6.f64 = ctx.f26.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f5,f23
	ctx.f5.f64 = ctx.f23.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD9924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82AD9930;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9934"))) PPC_WEAK_FUNC(sub_82AD9934);
PPC_FUNC_IMPL(__imp__sub_82AD9934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9938"))) PPC_WEAK_FUNC(sub_82AD9938);
PPC_FUNC_IMPL(__imp__sub_82AD9938) {
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
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// bl 0x8259a830
	ctx.lr = 0x82AD9950;
	sub_8259A830(ctx, base);
	// bl 0x8259a8b0
	ctx.lr = 0x82AD9954;
	sub_8259A8B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ad9994
	if (ctx.cr6.eq) goto loc_82AD9994;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ad9994
	if (!ctx.cr6.eq) goto loc_82AD9994;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264b350
	ctx.lr = 0x82AD9980;
	sub_8264B350(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD9994:
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

__attribute__((alias("__imp__sub_82AD99A8"))) PPC_WEAK_FUNC(sub_82AD99A8);
PPC_FUNC_IMPL(__imp__sub_82AD99A8) {
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
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// bl 0x8259a830
	ctx.lr = 0x82AD99BC;
	sub_8259A830(ctx, base);
	// bl 0x8259a8b0
	ctx.lr = 0x82AD99C0;
	sub_8259A8B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad99d8
	if (ctx.cr6.eq) goto loc_82AD99D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD99D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD99D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD99E8"))) PPC_WEAK_FUNC(sub_82AD99E8);
PPC_FUNC_IMPL(__imp__sub_82AD99E8) {
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
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// bl 0x8259a830
	ctx.lr = 0x82AD99FC;
	sub_8259A830(ctx, base);
	// bl 0x8259a8b0
	ctx.lr = 0x82AD9A00;
	sub_8259A8B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad9a18
	if (ctx.cr6.eq) goto loc_82AD9A18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD9A18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9A28"))) PPC_WEAK_FUNC(sub_82AD9A28);
PPC_FUNC_IMPL(__imp__sub_82AD9A28) {
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
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// bl 0x8259a830
	ctx.lr = 0x82AD9A3C;
	sub_8259A830(ctx, base);
	// bl 0x8259a8b0
	ctx.lr = 0x82AD9A40;
	sub_8259A8B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad9a4c
	if (ctx.cr6.eq) goto loc_82AD9A4C;
	// bl 0x8264b5c0
	ctx.lr = 0x82AD9A4C;
	sub_8264B5C0(ctx, base);
loc_82AD9A4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9A5C"))) PPC_WEAK_FUNC(sub_82AD9A5C);
PPC_FUNC_IMPL(__imp__sub_82AD9A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9A60"))) PPC_WEAK_FUNC(sub_82AD9A60);
PPC_FUNC_IMPL(__imp__sub_82AD9A60) {
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
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lbz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// stw r4,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r4.u32);
	// beq cr6,0x82ad9b04
	if (ctx.cr6.eq) goto loc_82AD9B04;
	// bl 0x82312c28
	ctx.lr = 0x82AD9A9C;
	sub_82312C28(ctx, base);
	// lwz r10,896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad9ac0
	if (ctx.cr6.eq) goto loc_82AD9AC0;
loc_82AD9AAC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82ad9ad0
	if (ctx.cr6.eq) goto loc_82AD9AD0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad9aac
	if (!ctx.cr6.eq) goto loc_82AD9AAC;
loc_82AD9AC0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ad9b04
	if (ctx.cr6.eq) goto loc_82AD9B04;
loc_82AD9AD0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ad9b04
	if (!ctx.cr6.eq) goto loc_82AD9B04;
	// addi r10,r31,900
	ctx.r10.s64 = ctx.r31.s64 + 900;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD9AEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ad9aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD9AEC;
	// b 0x82ad9b80
	goto loc_82AD9B80;
loc_82AD9B04:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ad9b5c
	if (ctx.cr6.eq) goto loc_82AD9B5C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ad9b5c
	if (!ctx.cr6.eq) goto loc_82AD9B5C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
	// stfs f0,904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD9B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// stfs f1,908(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 908, temp.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,268(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD9B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// b 0x82ad9b80
	goto loc_82AD9B80;
loc_82AD9B5C:
	// addi r10,r31,900
	ctx.r10.s64 = ctx.r31.s64 + 900;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD9B6C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ad9b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD9B6C;
loc_82AD9B80:
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

__attribute__((alias("__imp__sub_82AD9B98"))) PPC_WEAK_FUNC(sub_82AD9B98);
PPC_FUNC_IMPL(__imp__sub_82AD9B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82AD9BA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	ctx.lr = 0x82AD9BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,28928(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28928);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,28928(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28928, ctx.r10.u32);
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
	ctx.lr = 0x82AD9C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28928(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28928);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ad9c78
	if (ctx.cr6.eq) goto loc_82AD9C78;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AD9C64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ad9c64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AD9C64;
loc_82AD9C78:
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
	// bne cr6,0x82ad9cb4
	if (!ctx.cr6.eq) goto loc_82AD9CB4;
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
	ctx.lr = 0x82AD9CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD9CB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD9CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9CE4"))) PPC_WEAK_FUNC(sub_82AD9CE4);
PPC_FUNC_IMPL(__imp__sub_82AD9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9CE8"))) PPC_WEAK_FUNC(sub_82AD9CE8);
PPC_FUNC_IMPL(__imp__sub_82AD9CE8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// addi r10,r3,920
	ctx.r10.s64 = ctx.r3.s64 + 920;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 920, ctx.r9.u32);
	// stw r8,924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 924, ctx.r8.u32);
	// stw r7,928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 928, ctx.r7.u32);
	// stw r6,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD9D1C"))) PPC_WEAK_FUNC(sub_82AD9D1C);
PPC_FUNC_IMPL(__imp__sub_82AD9D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9D20"))) PPC_WEAK_FUNC(sub_82AD9D20);
PPC_FUNC_IMPL(__imp__sub_82AD9D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,224
	ctx.r10.s64 = ctx.r4.s64 + 224;
	// ld r4,224(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 224);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AD9D3C"))) PPC_WEAK_FUNC(sub_82AD9D3C);
PPC_FUNC_IMPL(__imp__sub_82AD9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9D40"))) PPC_WEAK_FUNC(sub_82AD9D40);
PPC_FUNC_IMPL(__imp__sub_82AD9D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,932(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 932);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,868(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 868, temp.u32);
	// stfs f13,872(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 872, temp.u32);
	// b 0x82ad8fb8
	sub_82AD8FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9D54"))) PPC_WEAK_FUNC(sub_82AD9D54);
PPC_FUNC_IMPL(__imp__sub_82AD9D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9D58"))) PPC_WEAK_FUNC(sub_82AD9D58);
PPC_FUNC_IMPL(__imp__sub_82AD9D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,872(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,868(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f0,f1,f13
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f12,932(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 932, temp.u32);
	// b 0x82ad9048
	sub_82AD9048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9D6C"))) PPC_WEAK_FUNC(sub_82AD9D6C);
PPC_FUNC_IMPL(__imp__sub_82AD9D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9D70"))) PPC_WEAK_FUNC(sub_82AD9D70);
PPC_FUNC_IMPL(__imp__sub_82AD9D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82AD9D78;
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
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ad9db8
	if (ctx.cr6.eq) goto loc_82AD9DB8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,896
	ctx.r11.s64 = ctx.r31.s64 + 896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD9DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AD9DB8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad8548
	ctx.lr = 0x82AD9DC8;
	sub_82AD8548(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82ad9e08
	if (ctx.cr6.eq) goto loc_82AD9E08;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82294520
	ctx.lr = 0x82AD9E08;
	sub_82294520(ctx, base);
loc_82AD9E08:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82294cc8
	ctx.lr = 0x82AD9E10;
	sub_82294CC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD9E18"))) PPC_WEAK_FUNC(sub_82AD9E18);
PPC_FUNC_IMPL(__imp__sub_82AD9E18) {
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
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x82AD9E34;
	sub_82594938(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9E48;
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

__attribute__((alias("__imp__sub_82AD9E5C"))) PPC_WEAK_FUNC(sub_82AD9E5C);
PPC_FUNC_IMPL(__imp__sub_82AD9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD9E60"))) PPC_WEAK_FUNC(sub_82AD9E60);
PPC_FUNC_IMPL(__imp__sub_82AD9E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82AD9E68;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ae4
	ctx.lr = 0x82AD9E70;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ada224
	if (ctx.cr6.eq) goto loc_82ADA224;
	// lwz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ad9e98
	if (ctx.cr6.eq) goto loc_82AD9E98;
	// lwz r28,928(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// b 0x82ad9ea0
	goto loc_82AD9EA0;
loc_82AD9E98:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
loc_82AD9EA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad9f24
	if (ctx.cr6.eq) goto loc_82AD9F24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD9EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825941e0
	ctx.lr = 0x82AD9F00;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x82AD9F18;
	sub_825941E0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fabs f31,f0
	ctx.f31.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// b 0x82ad9f2c
	goto loc_82AD9F2C;
loc_82AD9F24:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-16448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16448);
	ctx.f31.f64 = double(temp.f32);
loc_82AD9F2C:
	// lwz r3,940(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD9F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,940(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// stfs f1,1012(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1012, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,264(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD9F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lwz r31,940(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f28,1012(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1012);
	ctx.f28.f64 = double(temp.f32);
	// stw r27,1016(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1016, ctx.r27.u32);
	// lfs f29,-15120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,1004(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1004, temp.u32);
	// stfs f29,1008(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1008, temp.u32);
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lhz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f27,f12,f28
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// beq cr6,0x82ada140
	if (ctx.cr6.eq) goto loc_82ADA140;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r26,r11,-18304
	ctx.r26.s64 = ctx.r11.s64 + -18304;
loc_82AD9FB0:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242ca90
	ctx.lr = 0x82AD9FC4;
	sub_8242CA90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ad9fdc
	if (ctx.cr6.eq) goto loc_82AD9FDC;
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82ada0e0
	goto loc_82ADA0E0;
loc_82AD9FDC:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82ada0dc
	if (ctx.cr6.eq) goto loc_82ADA0DC;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ada024
	if (ctx.cr6.eq) goto loc_82ADA024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADA00C;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ada01c
	if (!ctx.cr6.eq) goto loc_82ADA01C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82ada060
	goto loc_82ADA060;
loc_82ADA01C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82ada060
	goto loc_82ADA060;
loc_82ADA024:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ada038
	if (ctx.cr6.lt) goto loc_82ADA038;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82ada060
	goto loc_82ADA060;
loc_82ADA038:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ada060
	if (ctx.cr6.eq) goto loc_82ADA060;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82ADA060:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ada0dc
	if (!ctx.cr6.lt) goto loc_82ADA0DC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82ada0dc
	if (!ctx.cr6.lt) goto loc_82ADA0DC;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ada0dc
	if (ctx.cr6.eq) goto loc_82ADA0DC;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
loc_82ADA0DC:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
loc_82ADA0E0:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ada100
	if (ctx.cr6.eq) goto loc_82ADA100;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_82ADA100:
	// lfs f12,1008(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,1004(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,1004(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1004, temp.u32);
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
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
	// lfsx f8,r26,r8
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f12,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f7,1008(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1008, temp.u32);
	// lhz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ad9fb0
	if (!ctx.cr6.eq) goto loc_82AD9FB0;
loc_82ADA140:
	// lfs f0,1008(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 944);
	// lfs f12,1004(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,1008(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1008, temp.u32);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// stfs f13,1004(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1004, temp.u32);
	// bne cr6,0x82ada1a8
	if (!ctx.cr6.eq) goto loc_82ADA1A8;
	// lfs f0,496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,996(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 996, temp.u32);
	// b 0x82ada1e0
	goto loc_82ADA1E0;
loc_82ADA1A8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82ada1c0
	if (!ctx.cr6.eq) goto loc_82ADA1C0;
	// lfs f0,504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,996(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 996, temp.u32);
	// b 0x82ada1e0
	goto loc_82ADA1E0;
loc_82ADA1C0:
	// lfs f12,496(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f11,504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fnmsubs f8,f13,f0,f9
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f8,996(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 996, temp.u32);
loc_82ADA1E0:
	// li r11,1020
	ctx.r11.s64 = 1020;
	// lfs f0,996(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// lfs f13,500(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1028
	ctx.r9.s64 = 1028;
	// lfs f12,496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// li r8,1032
	ctx.r8.s64 = 1032;
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lfs f10,504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f13
	ctx.f9.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f11,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f11.u32);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f9,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.f9.u32);
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f8,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.f8.u32);
	// stfs f13,1000(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1000, temp.u32);
	// stfiwx f7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.f7.u32);
loc_82ADA224:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b30
	ctx.lr = 0x82ADA230;
	__restfpr_27(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA234"))) PPC_WEAK_FUNC(sub_82ADA234);
PPC_FUNC_IMPL(__imp__sub_82ADA234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADA238"))) PPC_WEAK_FUNC(sub_82ADA238);
PPC_FUNC_IMPL(__imp__sub_82ADA238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82ADA240;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,21574
	ctx.r31.s64 = ctx.r11.s64 + 21574;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82295680
	ctx.lr = 0x82ADA260;
	sub_82295680(ctx, base);
	// addi r28,r30,928
	ctx.r28.s64 = ctx.r30.s64 + 928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADA270;
	sub_822BBE90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82ada298
	if (ctx.cr6.eq) goto loc_82ADA298;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82ADA298;
	sub_82294520(ctx, base);
loc_82ADA298:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82ADA2A0;
	sub_82294CC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82ADA2AC;
	sub_82295680(ctx, base);
	// addi r27,r30,916
	ctx.r27.s64 = ctx.r30.s64 + 916;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b21c0
	ctx.lr = 0x82ADA2BC;
	sub_822B21C0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ada2e4
	if (ctx.cr6.eq) goto loc_82ADA2E4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82ADA2E4;
	sub_82294520(ctx, base);
loc_82ADA2E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82ADA2EC;
	sub_82294CC8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82ada334
	if (ctx.cr6.eq) goto loc_82ADA334;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r31,r30,904
	ctx.r31.s64 = ctx.r30.s64 + 904;
	// addi r4,r11,23144
	ctx.r4.s64 = ctx.r11.s64 + 23144;
	// bl 0x82295680
	ctx.lr = 0x82ADA308;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x82ADA318;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADA324;
	sub_822BBE90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82ADA32C;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82ada478
	goto loc_82ADA478;
loc_82ADA334:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r4,r11,18988
	ctx.r4.s64 = ctx.r11.s64 + 18988;
	// bl 0x82295680
	ctx.lr = 0x82ADA340;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b21c0
	ctx.lr = 0x82ADA34C;
	sub_822B21C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82ADA358;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ada374
	if (ctx.cr6.eq) goto loc_82ADA374;
	// addi r31,r30,904
	ctx.r31.s64 = ctx.r30.s64 + 904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82ADA370;
	sub_82295908(ctx, base);
	// b 0x82ada47c
	goto loc_82ADA47C;
loc_82ADA374:
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
	// ble cr6,0x82ada394
	if (!ctx.cr6.gt) goto loc_82ADA394;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ADA394:
	// lwz r3,980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82ADA39C;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ada424
	if (ctx.cr6.eq) goto loc_82ADA424;
	// lwz r29,2276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2276);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ada424
	if (ctx.cr6.eq) goto loc_82ADA424;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e640b8
	ctx.lr = 0x82ADA3C0;
	sub_82E640B8(ctx, base);
	// addi r31,r30,904
	ctx.r31.s64 = ctx.r30.s64 + 904;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82295908
	ctx.lr = 0x82ADA3D0;
	sub_82295908(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295908
	ctx.lr = 0x82ADA3E4;
	sub_82295908(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,268(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ADA404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADA410;
	sub_822BBE90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82ADA418;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bbf20
	ctx.lr = 0x82ADA420;
	sub_822BBF20(ctx, base);
	// b 0x82ada47c
	goto loc_82ADA47C;
loc_82ADA424:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23152
	ctx.r4.s64 = ctx.r11.s64 + 23152;
	// bl 0x82295680
	ctx.lr = 0x82ADA434;
	sub_82295680(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82ADA43C;
	sub_82299080(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,23232
	ctx.r4.s64 = ctx.r10.s64 + 23232;
	// addi r31,r30,904
	ctx.r31.s64 = ctx.r30.s64 + 904;
	// bl 0x82295680
	ctx.lr = 0x82ADA450;
	sub_82295680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822952c8
	ctx.lr = 0x82ADA460;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADA46C;
	sub_822BBE90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82ADA474;
	sub_82299080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82ADA478:
	// bl 0x82299080
	ctx.lr = 0x82ADA47C;
	sub_82299080(ctx, base);
loc_82ADA47C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f10
	ctx.lr = 0x82ADA488;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ada4a4
	if (ctx.cr6.eq) goto loc_82ADA4A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADA4A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82ADA4B0;
	sub_82294BB8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA4BC"))) PPC_WEAK_FUNC(sub_82ADA4BC);
PPC_FUNC_IMPL(__imp__sub_82ADA4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADA4C0"))) PPC_WEAK_FUNC(sub_82ADA4C0);
PPC_FUNC_IMPL(__imp__sub_82ADA4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82ADA4C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,916
	ctx.r29.s64 = ctx.r31.s64 + 916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x82ADA4E4;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ada518
	if (ctx.cr6.eq) goto loc_82ADA518;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADA4F8;
	sub_822BBE90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82ADA518;
	sub_82299080(ctx, base);
loc_82ADA518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA520"))) PPC_WEAK_FUNC(sub_82ADA520);
PPC_FUNC_IMPL(__imp__sub_82ADA520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82ADA528;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,904
	ctx.r29.s64 = ctx.r31.s64 + 904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x82ADA540;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ada640
	if (ctx.cr6.eq) goto loc_82ADA640;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ada604
	if (ctx.cr6.eq) goto loc_82ADA604;
	// addi r30,r31,876
	ctx.r30.s64 = ctx.r31.s64 + 876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82ADA568;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ada598
	if (ctx.cr6.eq) goto loc_82ADA598;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-1340(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1340);
	// lwz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ADA598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADA598:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// stfs f13,864(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// bne cr6,0x82ada604
	if (!ctx.cr6.eq) goto loc_82ADA604;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ada604
	if (ctx.cr6.eq) goto loc_82ADA604;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a705a8
	ctx.lr = 0x82ADA5F8;
	sub_82A705A8(ctx, base);
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// rlwinm r8,r9,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
loc_82ADA604:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADA610;
	sub_822BBE90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x82295908
	ctx.lr = 0x82ADA61C;
	sub_82295908(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ada640
	if (ctx.cr6.eq) goto loc_82ADA640;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADA640:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADA648"))) PPC_WEAK_FUNC(sub_82ADA648);
PPC_FUNC_IMPL(__imp__sub_82ADA648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 940, ctx.r4.u32);
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82ADA668"))) PPC_WEAK_FUNC(sub_82ADA668);
PPC_FUNC_IMPL(__imp__sub_82ADA668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA66C"))) PPC_WEAK_FUNC(sub_82ADA66C);
PPC_FUNC_IMPL(__imp__sub_82ADA66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADA670"))) PPC_WEAK_FUNC(sub_82ADA670);
PPC_FUNC_IMPL(__imp__sub_82ADA670) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// addi r10,r3,948
	ctx.r10.s64 = ctx.r3.s64 + 948;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 948, ctx.r9.u32);
	// stw r8,952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 952, ctx.r8.u32);
	// stw r7,956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 956, ctx.r7.u32);
	// stw r6,960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 960, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADA6A4"))) PPC_WEAK_FUNC(sub_82ADA6A4);
PPC_FUNC_IMPL(__imp__sub_82ADA6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADA6A8"))) PPC_WEAK_FUNC(sub_82ADA6A8);
PPC_FUNC_IMPL(__imp__sub_82ADA6A8) {
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
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,896
	ctx.r11.s64 = ctx.r31.s64 + 896;
	// bne cr6,0x82ada6d4
	if (!ctx.cr6.eq) goto loc_82ADA6D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ADA6D4:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// bl 0x825b1fb0
	ctx.lr = 0x82ADA6E4;
	sub_825B1FB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ada708
	if (ctx.cr6.eq) goto loc_82ADA708;
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADA708:
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

__attribute__((alias("__imp__sub_82ADA724"))) PPC_WEAK_FUNC(sub_82ADA724);
PPC_FUNC_IMPL(__imp__sub_82ADA724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADA728"))) PPC_WEAK_FUNC(sub_82ADA728);
PPC_FUNC_IMPL(__imp__sub_82ADA728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,224
	ctx.r10.s64 = ctx.r4.s64 + 224;
	// ld r4,224(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 224);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r9,676(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82ADA744"))) PPC_WEAK_FUNC(sub_82ADA744);
PPC_FUNC_IMPL(__imp__sub_82ADA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADA748"))) PPC_WEAK_FUNC(sub_82ADA748);
PPC_FUNC_IMPL(__imp__sub_82ADA748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82ADA750;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82ad8aa8
	ctx.lr = 0x82ADA768;
	sub_82AD8AA8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,844(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29076);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82adaa38
	if (ctx.cr6.lt) goto loc_82ADAA38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x82ADA784;
	sub_82BEA278(ctx, base);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r8,948(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r6,952(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// addi r29,r31,948
	ctx.r29.s64 = ctx.r31.s64 + 948;
	// lwz r5,956(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// lwz r4,960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 988);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r3,964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// lwz r9,968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r7,972(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// lwz r30,976(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// stw r3,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r3.u32);
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// fneg f30,f12
	ctx.f30.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stw r7,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r7.u32);
	// stw r30,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r30.u32);
	// bgt cr6,0x82ada9ac
	if (ctx.cr6.gt) goto loc_82ADA9AC;
	// lis r12,-32082
	ctx.r12.s64 = -2102525952;
	// addi r12,r12,-22516
	ctx.r12.s64 = ctx.r12.s64 + -22516;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82ADA830;
	case 1:
		goto loc_82ADA848;
	case 2:
		goto loc_82ADA864;
	case 3:
		goto loc_82ADA888;
	case 4:
		goto loc_82ADA8A4;
	case 5:
		goto loc_82ADA92C;
	case 6:
		goto loc_82ADA944;
	case 7:
		goto loc_82ADA968;
	case 8:
		goto loc_82ADA980;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-22480(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22480);
	// lwz r21,-22456(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22456);
	// lwz r21,-22428(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22428);
	// lwz r21,-22392(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22392);
	// lwz r21,-22364(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22364);
	// lwz r21,-22228(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22228);
	// lwz r21,-22204(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22204);
	// lwz r21,-22168(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22168);
	// lwz r21,-22144(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -22144);
loc_82ADA830:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82ada990
	goto loc_82ADA990;
loc_82ADA848:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82ada994
	goto loc_82ADA994;
loc_82ADA864:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82ada994
	goto loc_82ADA994;
loc_82ADA888:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82ada994
	goto loc_82ADA994;
loc_82ADA8A4:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82ADA8A8:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// li r30,-1
	ctx.r30.s64 = -1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_82ADA8C0:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,684(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// fctiwz f9,f13
	ctx.f9.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ADA910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82ada8c0
	if (ctx.cr6.lt) goto loc_82ADA8C0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x82ada8a8
	if (ctx.cr6.lt) goto loc_82ADA8A8;
	// b 0x82ada9ac
	goto loc_82ADA9AC;
loc_82ADA92C:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82ada994
	goto loc_82ADA994;
loc_82ADA944:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82ada994
	goto loc_82ADA994;
loc_82ADA968:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82ada994
	goto loc_82ADA994;
loc_82ADA980:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82ADA990:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82ADA994:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADA9AC:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,684(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADA9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,25344(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adaa20
	if (ctx.cr6.eq) goto loc_82ADAA20;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adaa20
	if (ctx.cr6.eq) goto loc_82ADAA20;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adaa20
	if (ctx.cr6.eq) goto loc_82ADAA20;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
loc_82ADAA20:
	// bl 0x82a6fe80
	ctx.lr = 0x82ADAA24;
	sub_82A6FE80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adaa38
	if (ctx.cr6.eq) goto loc_82ADAA38;
	// lfs f0,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f13,308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
loc_82ADAA38:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADAA48"))) PPC_WEAK_FUNC(sub_82ADAA48);
PPC_FUNC_IMPL(__imp__sub_82ADAA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82ADAA50;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r11,r31,928
	ctx.r11.s64 = ctx.r31.s64 + 928;
	// lwz r10,932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adb000
	if (ctx.cr6.eq) goto loc_82ADB000;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82adb000
	if (!ctx.cr6.gt) goto loc_82ADB000;
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82adb000
	if (ctx.cr6.eq) goto loc_82ADB000;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adaaa8
	if (ctx.cr6.eq) goto loc_82ADAAA8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82adaab0
	goto loc_82ADAAB0;
loc_82ADAAA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
loc_82ADAAB0:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f0,948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f12,956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lfs f11,960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// lfs f10,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// lfs f9,836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f7,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,8(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f31,-15120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,12(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r27,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r27.u32);
	// beq cr6,0x82adb000
	if (ctx.cr6.eq) goto loc_82ADB000;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r27,r10,-16728
	ctx.r27.s64 = ctx.r10.s64 + -16728;
	// addi r28,r9,-16696
	ctx.r28.s64 = ctx.r9.s64 + -16696;
loc_82ADAB70:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82adac6c
	if (!ctx.cr6.eq) goto loc_82ADAC6C;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82adac1c
	if (!ctx.cr6.eq) goto loc_82ADAC1C;
	// lfs f0,840(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f13,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r22,12(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stw r22,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r22.u32);
	// b 0x82adaff0
	goto loc_82ADAFF0;
loc_82ADAC1C:
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r22,8(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r22,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r22.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// b 0x82adaff0
	goto loc_82ADAFF0;
loc_82ADAC6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242c908
	ctx.lr = 0x82ADAC74;
	sub_8242C908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82adacec
	if (ctx.cr6.eq) goto loc_82ADACEC;
	// lfs f13,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f11,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lfs f8,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// b 0x82adad6c
	goto loc_82ADAD6C;
loc_82ADACEC:
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adad24
	if (ctx.cr6.eq) goto loc_82ADAD24;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r10,84
	ctx.r3.s64 = ctx.r10.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADAD0C;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82adad1c
	if (!ctx.cr6.eq) goto loc_82ADAD1C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adad64
	goto loc_82ADAD64;
loc_82ADAD1C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82adad64
	goto loc_82ADAD64;
loc_82ADAD24:
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82adad3c
	if (ctx.cr6.lt) goto loc_82ADAD3C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adad64
	goto loc_82ADAD64;
loc_82ADAD3C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82adad64
	if (ctx.cr6.eq) goto loc_82ADAD64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82ADAD64:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82ADAD6C:
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82adaff0
	if (!ctx.cr6.lt) goto loc_82ADAFF0;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,76(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82adaff0
	if (!ctx.cr6.lt) goto loc_82ADAFF0;
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82adaff0
	if (ctx.cr6.eq) goto loc_82ADAFF0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,1032(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82adaff0
	if (ctx.cr6.gt) goto loc_82ADAFF0;
	// extsw r22,r10
	ctx.r22.s64 = ctx.r10.s32;
	// lwz r9,1028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r22,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r22.u64);
	// lfd f12,280(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// std r3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r3.u64);
	// lfd f13,288(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r3,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r3.u64);
	// lfd f9,256(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmadds f4,f7,f0,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// blt cr6,0x82adaff0
	if (ctx.cr6.lt) goto loc_82ADAFF0;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82adae68
	if (!ctx.cr6.lt) goto loc_82ADAE68;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r9,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r9.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r9.u64);
	// lfd f13,272(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f9.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ADAE68:
	// lwz r9,1020(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lfd f11,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r6,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r6.u64);
	// std r3,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r3.u64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f13,264(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f9,296(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// fadds f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// ble cr6,0x82adaed4
	if (!ctx.cr6.gt) goto loc_82ADAED4;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f9.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ADAED4:
	// extsw r9,r24
	ctx.r9.s64 = ctx.r24.s32;
	// lwz r6,212(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 212);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r11,208(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 208);
	// std r9,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r9.u64);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r4,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r4.u64);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// lfd f12,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// std r3,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r3.u64);
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lfd f8,320(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// lwz r11,192(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f10,248(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// std r3,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r3.u64);
	// lfd f4,208(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// lfd f2,224(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfd f5,200(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// fcfid f12,f2
	ctx.f12.f64 = double(ctx.f2.s64);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fcfid f10,f5
	ctx.f10.f64 = double(ctx.f5.s64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// frsp f30,f7
	ctx.f30.f64 = double(float(ctx.f7.f64));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// lfd f11,192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lfd f11,240(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmuls f3,f0,f30
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// fdivs f8,f6,f9
	ctx.f8.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fdivs f6,f1,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 / ctx.f9.f64));
	// fadds f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fdivs f7,f30,f11
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fdivs f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 / ctx.f11.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x82ADAFC0;
	sub_8242BFA0(ctx, base);
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// lfs f12,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmadds f31,f12,f30,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
loc_82ADAFF0:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adab70
	if (!ctx.cr6.eq) goto loc_82ADAB70;
loc_82ADB000:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB010"))) PPC_WEAK_FUNC(sub_82ADB010);
PPC_FUNC_IMPL(__imp__sub_82ADB010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82ADB018;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adb0d4
	if (ctx.cr6.eq) goto loc_82ADB0D4;
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb0d4
	if (ctx.cr6.eq) goto loc_82ADB0D4;
	// addi r30,r31,904
	ctx.r30.s64 = ctx.r31.s64 + 904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82ADB058;
	sub_82294BB8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x82427888
	ctx.lr = 0x82ADB068;
	sub_82427888(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,668(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ADB080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,660(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 660);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82ADB098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82ADB0A0;
	sub_82299080(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,688(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 688);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82ADB0B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82ADB0D4;
	sub_82299080(ctx, base);
loc_82ADB0D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad8c98
	ctx.lr = 0x82ADB0E0;
	sub_82AD8C98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB0E8"))) PPC_WEAK_FUNC(sub_82ADB0E8);
PPC_FUNC_IMPL(__imp__sub_82ADB0E8) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15228
	ctx.r4.s64 = ctx.r11.s64 + 15228;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82ADB120;
	sub_8233E028(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82adb1c0
	if (!ctx.cr6.eq) goto loc_82ADB1C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82adb1c0
	if (!ctx.cr6.eq) goto loc_82ADB1C0;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82adb17c
	if (ctx.cr0.lt) goto loc_82ADB17C;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82ADB15C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82adb178
	if (!ctx.cr6.eq) goto loc_82ADB178;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82adb15c
	if (!ctx.cr0.lt) goto loc_82ADB15C;
	// b 0x82adb17c
	goto loc_82ADB17C;
loc_82ADB178:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82ADB17C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82adb19c
	if (ctx.cr6.eq) goto loc_82ADB19C;
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb19c
	if (ctx.cr6.eq) goto loc_82ADB19C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8266f158
	ctx.lr = 0x82ADB19C;
	sub_8266F158(ctx, base);
loc_82ADB19C:
	// bl 0x825ab6e8
	ctx.lr = 0x82ADB1A0;
	sub_825AB6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82adb1c0
	if (ctx.cr6.eq) goto loc_82ADB1C0;
	// lwz r11,1080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb1c0
	if (ctx.cr6.eq) goto loc_82ADB1C0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825a2cf8
	ctx.lr = 0x82ADB1C0;
	sub_825A2CF8(ctx, base);
loc_82ADB1C0:
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

__attribute__((alias("__imp__sub_82ADB1D8"))) PPC_WEAK_FUNC(sub_82ADB1D8);
PPC_FUNC_IMPL(__imp__sub_82ADB1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82ADB1E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82361f10
	ctx.lr = 0x82ADB200;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adb22c
	if (ctx.cr6.eq) goto loc_82ADB22C;
	// lwz r11,-896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -896);
	// addi r3,r31,-896
	ctx.r3.s64 = ctx.r31.s64 + -896;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADB22C;
	sub_822BBE90(ctx, base);
loc_82ADB22C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB24C"))) PPC_WEAK_FUNC(sub_82ADB24C);
PPC_FUNC_IMPL(__imp__sub_82ADB24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADB250"))) PPC_WEAK_FUNC(sub_82ADB250);
PPC_FUNC_IMPL(__imp__sub_82ADB250) {
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
	// addi r4,r4,152
	ctx.r4.s64 = ctx.r4.s64 + 152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82ADB26C;
	sub_82294BB8(ctx, base);
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

__attribute__((alias("__imp__sub_82ADB284"))) PPC_WEAK_FUNC(sub_82ADB284);
PPC_FUNC_IMPL(__imp__sub_82ADB284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADB288"))) PPC_WEAK_FUNC(sub_82ADB288);
PPC_FUNC_IMPL(__imp__sub_82ADB288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82ADB290;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb304
	if (ctx.cr6.eq) goto loc_82ADB304;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,23240
	ctx.r4.s64 = ctx.r11.s64 + 23240;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// bl 0x822960c0
	ctx.lr = 0x82ADB2C4;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x82ADB2D0;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adb304
	if (ctx.cr6.eq) goto loc_82ADB304;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82295680
	ctx.lr = 0x82ADB2EC;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x82ADB2F8;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82adb308
	if (!ctx.cr6.eq) goto loc_82ADB308;
loc_82ADB304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ADB308:
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adb324
	if (ctx.cr6.eq) goto loc_82ADB324;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x82ADB324;
	sub_82299080(ctx, base);
loc_82ADB324:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adb338
	if (ctx.cr6.eq) goto loc_82ADB338;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82ADB338;
	sub_82299080(ctx, base);
loc_82ADB338:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb3b0
	if (ctx.cr6.eq) goto loc_82ADB3B0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ADB370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r30,r31,-896
	ctx.r30.s64 = ctx.r31.s64 + -896;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,272(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	// lwz r31,-896(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -896);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82ADB394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,668(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82ADB3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82ADB3B0;
	sub_82299080(ctx, base);
loc_82ADB3B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB3BC"))) PPC_WEAK_FUNC(sub_82ADB3BC);
PPC_FUNC_IMPL(__imp__sub_82ADB3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADB3C0"))) PPC_WEAK_FUNC(sub_82ADB3C0);
PPC_FUNC_IMPL(__imp__sub_82ADB3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82ADB3E0"))) PPC_WEAK_FUNC(sub_82ADB3E0);
PPC_FUNC_IMPL(__imp__sub_82ADB3E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADB3E4"))) PPC_WEAK_FUNC(sub_82ADB3E4);
PPC_FUNC_IMPL(__imp__sub_82ADB3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADB3E8"))) PPC_WEAK_FUNC(sub_82ADB3E8);
PPC_FUNC_IMPL(__imp__sub_82ADB3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82ADB3F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82adb42c
	if (ctx.cr6.eq) goto loc_82ADB42C;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb42c
	if (ctx.cr6.eq) goto loc_82ADB42C;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adb42c
	if (ctx.cr6.eq) goto loc_82ADB42C;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825588a0
	ctx.lr = 0x82ADB42C;
	sub_825588A0(ctx, base);
loc_82ADB42C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82adb4e0
	if (!ctx.cr6.gt) goto loc_82ADB4E0;
	// addi r28,r31,-896
	ctx.r28.s64 = ctx.r31.s64 + -896;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
loc_82ADB474:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r28,896
	ctx.r11.s64 = ctx.r28.s64 + 896;
	// bne cr6,0x82adb48c
	if (!ctx.cr6.eq) goto loc_82ADB48C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82ADB48C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r25,r1,88
	ctx.r25.s64 = ctx.r1.s64 + 88;
	// ld r4,-17548(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + -17548);
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82ADB4B0;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82adb474
	if (ctx.cr6.lt) goto loc_82ADB474;
loc_82ADB4E0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb51c
	if (ctx.cr6.eq) goto loc_82ADB51C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82adb508
	if (!ctx.cr6.eq) goto loc_82ADB508;
	// bl 0x822900a0
	ctx.lr = 0x82ADB504;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82ADB508:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADB51C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB524"))) PPC_WEAK_FUNC(sub_82ADB524);
PPC_FUNC_IMPL(__imp__sub_82ADB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADB528"))) PPC_WEAK_FUNC(sub_82ADB528);
PPC_FUNC_IMPL(__imp__sub_82ADB528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,960(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,976(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,868(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 868, temp.u32);
	// stfs f12,872(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 872, temp.u32);
	// stfs f13,980(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// stfs f11,984(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// b 0x82ad8fb8
	sub_82AD8FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB54C"))) PPC_WEAK_FUNC(sub_82ADB54C);
PPC_FUNC_IMPL(__imp__sub_82ADB54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADB550"))) PPC_WEAK_FUNC(sub_82ADB550);
PPC_FUNC_IMPL(__imp__sub_82ADB550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,872(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,868(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,984(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f0,f1,f13
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// lfs f10,980(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f12,f1,f10
	ctx.f9.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f10.f64)));
	// stfs f11,960(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// stfs f9,976(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// b 0x82ad9048
	sub_82AD9048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADB574"))) PPC_WEAK_FUNC(sub_82ADB574);
PPC_FUNC_IMPL(__imp__sub_82ADB574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADB578"))) PPC_WEAK_FUNC(sub_82ADB578);
PPC_FUNC_IMPL(__imp__sub_82ADB578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82ADB580;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ae4
	ctx.lr = 0x82ADB588;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,1104
	ctx.r30.s64 = ctx.r31.s64 + 1104;
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adb9fc
	if (ctx.cr6.eq) goto loc_82ADB9FC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82adb9fc
	if (!ctx.cr6.gt) goto loc_82ADB9FC;
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb9fc
	if (ctx.cr6.eq) goto loc_82ADB9FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adb9fc
	if (ctx.cr6.eq) goto loc_82ADB9FC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// beq cr6,0x82adb5ec
	if (ctx.cr6.eq) goto loc_82ADB5EC;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82adb5f0
	goto loc_82ADB5F0;
loc_82ADB5EC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82ADB5F0:
	// lwz r10,1120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adb604
	if (ctx.cr6.eq) goto loc_82ADB604;
	// lwz r24,1116(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// b 0x82adb608
	goto loc_82ADB608;
loc_82ADB604:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82ADB608:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADB620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ADB638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 + 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825941e0
	ctx.lr = 0x82ADB650;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x82ADB668;
	sub_825941E0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lwz r3,940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fabs f31,f0
	ctx.f31.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r6,268(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82ADB688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// stfs f1,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,264(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 264);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82ADB6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r29,940(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f28,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f28.f64 = double(temp.f32);
	// stw r27,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r27.u32);
	// addi r26,r11,-18304
	ctx.r26.s64 = ctx.r11.s64 + -18304;
	// lfs f29,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,1004(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// stfs f29,1008(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// lwz r9,108(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lhz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f27,f11,f28
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// beq cr6,0x82adb8c0
	if (ctx.cr6.eq) goto loc_82ADB8C0;
loc_82ADB6F8:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82adb8ac
	if (ctx.cr6.eq) goto loc_82ADB8AC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242ca90
	ctx.lr = 0x82ADB714;
	sub_8242CA90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adb72c
	if (ctx.cr6.eq) goto loc_82ADB72C;
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82adb82c
	goto loc_82ADB82C;
loc_82ADB72C:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82adb82c
	if (ctx.cr6.eq) goto loc_82ADB82C;
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adb774
	if (ctx.cr6.eq) goto loc_82ADB774;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADB75C;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82adb76c
	if (!ctx.cr6.eq) goto loc_82ADB76C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adb7b0
	goto loc_82ADB7B0;
loc_82ADB76C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82adb7b0
	goto loc_82ADB7B0;
loc_82ADB774:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82adb788
	if (ctx.cr6.lt) goto loc_82ADB788;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adb7b0
	goto loc_82ADB7B0;
loc_82ADB788:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82adb7b0
	if (ctx.cr6.eq) goto loc_82ADB7B0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ADB7B0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82adb82c
	if (!ctx.cr6.lt) goto loc_82ADB82C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82adb82c
	if (!ctx.cr6.lt) goto loc_82ADB82C;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82adb82c
	if (ctx.cr6.eq) goto loc_82ADB82C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
loc_82ADB82C:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82adb85c
	if (ctx.cr6.eq) goto loc_82ADB85C;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adb864
	if (ctx.cr6.eq) goto loc_82ADB864;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82adb864
	if (!ctx.cr6.eq) goto loc_82ADB864;
loc_82ADB85C:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82adb884
	goto loc_82ADB884;
loc_82ADB864:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82adb884
	if (!ctx.cr6.eq) goto loc_82ADB884;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82adb878
	if (ctx.cr6.eq) goto loc_82ADB878;
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_82ADB878:
	// lfs f12,1004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,1004(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
loc_82ADB884:
	// lfs f0,1008(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
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
	// lfsx f11,r26,r8
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,1008(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
loc_82ADB8AC:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// lhz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adb6f8
	if (!ctx.cr6.eq) goto loc_82ADB6F8;
loc_82ADB8C0:
	// lfs f0,1004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 944);
	// lfs f13,1008(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// stfs f12,1004(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,1008(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// bne cr6,0x82adb928
	if (!ctx.cr6.eq) goto loc_82ADB928;
	// lfs f0,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// b 0x82adb9a4
	goto loc_82ADB9A4;
loc_82ADB928:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82adb964
	if (!ctx.cr6.eq) goto loc_82ADB964;
	// lfs f0,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
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
	// lfsx f11,r26,r8
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,996(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// b 0x82adb9a4
	goto loc_82ADB9A4;
loc_82ADB964:
	// lfs f0,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f11,f13,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fnmsubs f9,f12,f13,f10
	ctx.f9.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f10.f64)));
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f29
	ctx.cr6.compare(ctx.f8.f64, ctx.f29.f64);
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
	// lfsx f7,r26,r7
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f6,f7,f0,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// stfs f6,996(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
loc_82ADB9A4:
	// li r11,1020
	ctx.r11.s64 = 1020;
	// lfs f13,996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1028
	ctx.r10.s64 = 1028;
	// lfs f12,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1032
	ctx.r9.s64 = 1032;
	// lfs f11,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// li r8,1132
	ctx.r8.s64 = 1132;
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lfs f9,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// fctiwz f7,f0
	ctx.f7.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f10.u32);
	// stfd f8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// fctiwz f6,f11
	ctx.f6.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f7,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f7.u32);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f6.u32);
	// stfs f12,1000(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stw r7,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r7.u32);
	// stfiwx f5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f5.u32);
	// stw r7,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r7.u32);
loc_82ADB9FC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b30
	ctx.lr = 0x82ADBA08;
	__restfpr_27(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADBA0C"))) PPC_WEAK_FUNC(sub_82ADBA0C);
PPC_FUNC_IMPL(__imp__sub_82ADBA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADBA10"))) PPC_WEAK_FUNC(sub_82ADBA10);
PPC_FUNC_IMPL(__imp__sub_82ADBA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82ADBA18;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae4
	ctx.lr = 0x82ADBA20;
	__savefpr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adbff8
	if (ctx.cr6.eq) goto loc_82ADBFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82adbff8
	if (!ctx.cr6.gt) goto loc_82ADBFF8;
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adbff8
	if (ctx.cr6.eq) goto loc_82ADBFF8;
	// lwz r10,1108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adba74
	if (ctx.cr6.eq) goto loc_82ADBA74;
	// lwz r28,1104(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// b 0x82adba78
	goto loc_82ADBA78;
loc_82ADBA74:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82ADBA78:
	// lwz r10,1120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adba8c
	if (ctx.cr6.eq) goto loc_82ADBA8C;
	// lwz r23,1116(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// b 0x82adba90
	goto loc_82ADBA90;
loc_82ADBA8C:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82ADBA90:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f28,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// fmr f29,f28
	ctx.f29.f64 = ctx.f28.f64;
	// bl 0x82adc7e8
	ctx.lr = 0x82ADBAB8;
	sub_82ADC7E8(ctx, base);
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adbff8
	if (ctx.cr6.eq) goto loc_82ADBFF8;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r27,71
	ctx.r27.s64 = 71;
	// lfs f27,21152(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f27.f64 = double(temp.f32);
loc_82ADBAD4:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82adbae4
	if (!ctx.cr6.eq) goto loc_82ADBAE4;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// b 0x82adbfe8
	goto loc_82ADBFE8;
loc_82ADBAE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8242c908
	ctx.lr = 0x82ADBAF0;
	sub_8242C908(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82adbb08
	if (ctx.cr6.eq) goto loc_82ADBB08;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// b 0x82adbb10
	goto loc_82ADBB10;
loc_82ADBB08:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
loc_82ADBB10:
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// beq cr6,0x82adbe50
	if (ctx.cr6.eq) goto loc_82ADBE50;
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adbb30
	if (ctx.cr6.eq) goto loc_82ADBB30;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82adbe50
	if (ctx.cr6.eq) goto loc_82ADBE50;
loc_82ADBB30:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82adbbb0
	if (!ctx.cr6.eq) goto loc_82ADBBB0;
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// sth r9,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adbb70
	if (ctx.cr6.eq) goto loc_82ADBB70;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADBB58;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82adbb68
	if (!ctx.cr6.eq) goto loc_82ADBB68;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adbbac
	goto loc_82ADBBAC;
loc_82ADBB68:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82adbbac
	goto loc_82ADBBAC;
loc_82ADBB70:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82adbb84
	if (ctx.cr6.lt) goto loc_82ADBB84;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adbbac
	goto loc_82ADBBAC;
loc_82ADBB84:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82adbbac
	if (ctx.cr6.eq) goto loc_82ADBBAC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82ADBBAC:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
loc_82ADBBB0:
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82adbfe8
	if (!ctx.cr6.lt) goto loc_82ADBFE8;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,76(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82adbfe8
	if (!ctx.cr6.lt) goto loc_82ADBFE8;
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82adbfe8
	if (ctx.cr6.eq) goto loc_82ADBFE8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,1032(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82adbfe8
	if (ctx.cr6.gt) goto loc_82ADBFE8;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// lwz r9,1028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// extsw r4,r30
	ctx.r4.s64 = ctx.r30.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfd f8,128(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmadds f4,f6,f0,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fcmpu cr6,f3,f5
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// blt cr6,0x82adbfe8
	if (ctx.cr6.lt) goto loc_82ADBFE8;
	// lbz r4,1089(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1089);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82adbda8
	if (ctx.cr6.eq) goto loc_82ADBDA8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82adbcbc
	if (!ctx.cr6.lt) goto loc_82ADBCBC;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r9,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r9.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82ADBCBC:
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// extsw r6,r30
	ctx.r6.s64 = ctx.r30.s32;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// lfd f11,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfd f13,224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f10,f8
	ctx.f10.f64 = double(float(ctx.f8.f64));
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// fadds f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fcmpu cr6,f5,f12
	ctx.cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// ble cr6,0x82adbd30
	if (!ctx.cr6.gt) goto loc_82ADBD30;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82ADBD30:
	// lwz r6,1024(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lwz r9,1132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f9,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// std r3,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r3.u64);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f12,240(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// fadds f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// ble cr6,0x82adbda8
	if (!ctx.cr6.gt) goto loc_82ADBDA8;
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ADBDA8:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// extsw r6,r25
	ctx.r6.s64 = ctx.r25.s32;
	// extsw r9,r24
	ctx.r9.s64 = ctx.r24.s32;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f12,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r3,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r3.u64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfd f9,168(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,696(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 696);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fadds f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fadds f0,f2,f30
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f1,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f1.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82ADBE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lfs f9,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f9.f64 = double(temp.f32);
	// std r10,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f31,f10,f9,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f31.f64));
	// b 0x82adbfe8
	goto loc_82ADBFE8;
loc_82ADBE50:
	// lwz r30,940(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// li r29,0
	ctx.r29.s64 = 0;
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adbe8c
	if (ctx.cr6.eq) goto loc_82ADBE8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADBE74;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82adbe84
	if (!ctx.cr6.eq) goto loc_82ADBE84;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adbebc
	goto loc_82ADBEBC;
loc_82ADBE84:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82adbebc
	goto loc_82ADBEBC;
loc_82ADBE8C:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// bgt cr6,0x82adbea0
	if (ctx.cr6.gt) goto loc_82ADBEA0;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adbebc
	goto loc_82ADBEBC;
loc_82ADBEA0:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,1432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
loc_82ADBEBC:
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82adbf10
	if (!ctx.cr6.lt) goto loc_82ADBF10;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82adbf10
	if (!ctx.cr6.lt) goto loc_82ADBF10;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82adbf10
	if (ctx.cr6.eq) goto loc_82ADBF10;
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82ADBF10:
	// lbz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1088);
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adbf40
	if (!ctx.cr6.eq) goto loc_82ADBF40;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,1012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f13,200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x82adbfd0
	goto loc_82ADBFD0;
loc_82ADBF40:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82adbf6c
	if (!ctx.cr6.eq) goto loc_82ADBF6C;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lfd f13,216(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f29,f10,f27
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// b 0x82adbfd0
	goto loc_82ADBFD0;
loc_82ADBF6C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82adbf94
	if (!ctx.cr6.eq) goto loc_82ADBF94;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lfd f13,232(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x82adbfd0
	goto loc_82ADBFD0;
loc_82ADBF94:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82adbfc4
	if (!ctx.cr6.eq) goto loc_82ADBFC4;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1096(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	ctx.f13.f64 = double(temp.f32);
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f12,248(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f29,f9,f13
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// b 0x82adbfd0
	goto loc_82ADBFD0;
loc_82ADBFC4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82adbfd0
	if (!ctx.cr6.eq) goto loc_82ADBFD0;
	// lfs f29,1096(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	ctx.f29.f64 = double(temp.f32);
loc_82ADBFD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f30,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82adc7e8
	ctx.lr = 0x82ADBFE8;
	sub_82ADC7E8(ctx, base);
loc_82ADBFE8:
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adbad4
	if (!ctx.cr6.eq) goto loc_82ADBAD4;
loc_82ADBFF8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b30
	ctx.lr = 0x82ADC004;
	__restfpr_27(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADC008"))) PPC_WEAK_FUNC(sub_82ADC008);
PPC_FUNC_IMPL(__imp__sub_82ADC008) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lwz r6,212(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r6,192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfd f4,136(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f2,144(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lfs f0,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lfs f9,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f9.f64 = double(temp.f32);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// lfs f6,836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f6.f64 = double(temp.f32);
	// frsp f9,f3
	ctx.f9.f64 = double(float(ctx.f3.f64));
	// lfs f3,960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f3.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f0,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f4
	ctx.f11.f64 = double(ctx.f4.s64);
	// lfs f30,1012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f30.f64 = double(temp.f32);
	// fcfid f10,f2
	ctx.f10.f64 = double(ctx.f2.s64);
	// lfs f2,952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f2.f64 = double(temp.f32);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// lfs f12,956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmuls f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f8,f7
	ctx.f8.f64 = double(float(ctx.f7.f64));
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// lfs f5,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f5.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f5,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// fmuls f3,f30,f9
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmuls f4,f30,f8
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// fdivs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// fdivs f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f31.f64));
	// fdivs f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fdivs f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f31.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x82ADC14C;
	sub_8242BFA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82ADC168"))) PPC_WEAK_FUNC(sub_82ADC168);
PPC_FUNC_IMPL(__imp__sub_82ADC168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82ADC170;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adc7a8
	if (ctx.cr6.eq) goto loc_82ADC7A8;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adc1c0
	if (ctx.cr6.eq) goto loc_82ADC1C0;
	// stw r25,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x82ADC1C0;
	sub_82294520(ctx, base);
loc_82ADC1C0:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// lfs f0,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,1020
	ctx.r12.s64 = 1020;
	// stfiwx f12,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f12.u32);
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stfiwx f11,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,21574
	ctx.r4.s64 = ctx.r9.s64 + 21574;
	// lfs f29,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// bl 0x82295680
	ctx.lr = 0x82ADC1FC;
	sub_82295680(ctx, base);
	// lwz r8,1120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82adc214
	if (ctx.cr6.eq) goto loc_82ADC214;
	// lwz r24,1116(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// b 0x82adc21c
	goto loc_82ADC21C;
loc_82ADC214:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r24,r11,11272
	ctx.r24.s64 = ctx.r11.s64 + 11272;
loc_82ADC21C:
	// lbz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 944);
	// lwz r10,1100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwimi r10,r7,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r10.u32);
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82adc7a0
	if (ctx.cr6.eq) goto loc_82ADC7A0;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r27,r10,23284
	ctx.r27.s64 = ctx.r10.s64 + 23284;
	// addi r26,r11,23280
	ctx.r26.s64 = ctx.r11.s64 + 23280;
loc_82ADC254:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8242c908
	ctx.lr = 0x82ADC25C;
	sub_8242C908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82adc26c
	if (ctx.cr6.eq) goto loc_82ADC26C;
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// b 0x82adc2e8
	goto loc_82ADC2E8;
loc_82ADC26C:
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// sth r8,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r8.u16);
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adc2a4
	if (ctx.cr6.eq) goto loc_82ADC2A4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r10,84
	ctx.r3.s64 = ctx.r10.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADC28C;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82adc29c
	if (!ctx.cr6.eq) goto loc_82ADC29C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adc2e4
	goto loc_82ADC2E4;
loc_82ADC29C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82adc2e4
	goto loc_82ADC2E4;
loc_82ADC2A4:
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82adc2bc
	if (ctx.cr6.lt) goto loc_82ADC2BC;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adc2e4
	goto loc_82ADC2E4;
loc_82ADC2BC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82adc2e4
	if (ctx.cr6.eq) goto loc_82ADC2E4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82ADC2E4:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
loc_82ADC2E8:
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82adc77c
	if (!ctx.cr6.lt) goto loc_82ADC77C;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,76(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82adc77c
	if (!ctx.cr6.lt) goto loc_82ADC77C;
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82adc77c
	if (ctx.cr6.eq) goto loc_82ADC77C;
	// lbz r10,1089(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1089);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82adc548
	if (!ctx.cr6.eq) goto loc_82ADC548;
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// lwz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82adc750
	if (ctx.cr6.gt) goto loc_82ADC750;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// lwz r8,1028(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f13,240(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// std r9,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r9.u64);
	// lfd f12,272(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// std r7,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r7.u64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfd f8,248(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fcmpu cr6,f4,f6
	ctx.cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// blt cr6,0x82adc750
	if (ctx.cr6.lt) goto loc_82ADC750;
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82adc4fc
	if (ctx.cr6.eq) goto loc_82ADC4FC;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adc3ec
	if (ctx.cr6.eq) goto loc_82ADC3EC;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82adc3ec
	if (!ctx.cr6.eq) goto loc_82ADC3EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// bl 0x8233cb60
	ctx.lr = 0x82ADC3E8;
	sub_8233CB60(ctx, base);
	// b 0x82adc4c4
	goto loc_82ADC4C4;
loc_82ADC3EC:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// fadds f30,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8233cb60
	ctx.lr = 0x82ADC404;
	sub_8233CB60(ctx, base);
	// lwz r10,1100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// rlwinm r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc434
	if (!ctx.cr6.eq) goto loc_82ADC434;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82adc42c
	if (!ctx.cr6.eq) goto loc_82ADC42C;
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x82adc458
	if (!ctx.cr6.eq) goto loc_82ADC458;
loc_82ADC42C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adc44c
	if (ctx.cr6.eq) goto loc_82ADC44C;
loc_82ADC434:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82adc44c
	if (!ctx.cr6.eq) goto loc_82ADC44C;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82adc458
	if (!ctx.cr6.eq) goto loc_82ADC458;
loc_82ADC44C:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82adc778
	if (!ctx.cr6.eq) goto loc_82ADC778;
loc_82ADC458:
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// std r9,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// lfd f0,264(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfd f13,256(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fadds f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x82adc4c0
	if (!ctx.cr6.gt) goto loc_82ADC4C0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82295680
	ctx.lr = 0x82ADC4A8;
	sub_82295680(ctx, base);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822951d0
	ctx.lr = 0x82ADC4B4;
	sub_822951D0(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82299080
	ctx.lr = 0x82ADC4BC;
	sub_82299080(ctx, base);
	// b 0x82adc4c4
	goto loc_82ADC4C4;
loc_82ADC4C0:
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
loc_82ADC4C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822951d0
	ctx.lr = 0x82ADC4D0;
	sub_822951D0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adc778
	if (ctx.cr6.eq) goto loc_82ADC778;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82ADC4F8;
	sub_82294520(ctx, base);
	// b 0x82adc778
	goto loc_82ADC778;
loc_82ADC4FC:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fadds f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x82adc750
	if (!ctx.cr6.gt) goto loc_82ADC750;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82295680
	ctx.lr = 0x82ADC530;
	sub_82295680(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822951d0
	ctx.lr = 0x82ADC53C;
	sub_822951D0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82299080
	ctx.lr = 0x82ADC544;
	sub_82299080(ctx, base);
	// b 0x82adc750
	goto loc_82ADC750;
loc_82ADC548:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82adc65c
	if (!ctx.cr6.eq) goto loc_82ADC65C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82295680
	ctx.lr = 0x82ADC55C;
	sub_82295680(ctx, base);
	// lwz r9,1032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82adc650
	if (ctx.cr6.gt) goto loc_82ADC650;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r11,1028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f13,224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f11,160(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r6,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r6.u64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfd f8,296(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmadds f4,f6,f0,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fcmpu cr6,f3,f5
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// blt cr6,0x82adc650
	if (ctx.cr6.lt) goto loc_82ADC650;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82adc5f8
	if (!ctx.cr6.lt) goto loc_82ADC5F8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
loc_82ADC5F8:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfd f8,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f4,f10,f0,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fcmpu cr6,f3,f5
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// bgt cr6,0x82adc78c
	if (ctx.cr6.gt) goto loc_82ADC78C;
loc_82ADC650:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82ADC658;
	sub_82299080(ctx, base);
	// b 0x82adc750
	goto loc_82ADC750;
loc_82ADC65C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82adc750
	if (!ctx.cr6.eq) goto loc_82ADC750;
	// lwz r9,1032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82adc750
	if (ctx.cr6.gt) goto loc_82ADC750;
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// lwz r11,1028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfd f9,152(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fadds f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// blt cr6,0x82adc750
	if (ctx.cr6.lt) goto loc_82ADC750;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82adc700
	if (!ctx.cr6.lt) goto loc_82ADC700;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// lfd f13,168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
loc_82ADC700:
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// lfd f8,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// lfd f11,200(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmadds f4,f6,f0,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fcmpu cr6,f3,f5
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// bgt cr6,0x82adc7a0
	if (ctx.cr6.gt) goto loc_82ADC7A0;
loc_82ADC750:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bl 0x8233cb60
	ctx.lr = 0x82ADC75C;
	sub_8233CB60(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lfd f13,232(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f31,f0,f11,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f31.f64));
loc_82ADC778:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_82ADC77C:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82adc254
	if (!ctx.cr6.eq) goto loc_82ADC254;
	// b 0x82adc7a0
	goto loc_82ADC7A0;
loc_82ADC78C:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822951d0
	ctx.lr = 0x82ADC798;
	sub_822951D0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82ADC7A0;
	sub_82299080(ctx, base);
loc_82ADC7A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82ADC7A8;
	sub_82299080(ctx, base);
loc_82ADC7A8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

__attribute__((alias("__imp__sub_82ADC7BC"))) PPC_WEAK_FUNC(sub_82ADC7BC);
PPC_FUNC_IMPL(__imp__sub_82ADC7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADC7C0"))) PPC_WEAK_FUNC(sub_82ADC7C0);
PPC_FUNC_IMPL(__imp__sub_82ADC7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1020
	ctx.r11.s64 = 1020;
	// lfs f0,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// lfs f13,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f12.u32);
	// stfiwx f11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.f11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADC7E4"))) PPC_WEAK_FUNC(sub_82ADC7E4);
PPC_FUNC_IMPL(__imp__sub_82ADC7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADC7E8"))) PPC_WEAK_FUNC(sub_82ADC7E8);
PPC_FUNC_IMPL(__imp__sub_82ADC7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82ADC7F0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ae4
	ctx.lr = 0x82ADC7F8;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,1120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adc81c
	if (ctx.cr6.eq) goto loc_82ADC81C;
	// lwz r26,1116(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1116);
	// b 0x82adc824
	goto loc_82ADC824;
loc_82ADC81C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,11272
	ctx.r26.s64 = ctx.r11.s64 + 11272;
loc_82ADC824:
	// lwz r11,940(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adcb38
	if (ctx.cr6.eq) goto loc_82ADCB38;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADC844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ADC85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r3,60
	ctx.r27.s64 = ctx.r3.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825941e0
	ctx.lr = 0x82ADC874;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825941e0
	ctx.lr = 0x82ADC88C;
	sub_825941E0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lwz r3,940(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 940);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fabs f31,f0
	ctx.f31.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r6,268(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82ADC8AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,940(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 940);
	// stfs f1,1012(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1012, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,264(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 264);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82ADC8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r31,940(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 940);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f29,1012(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1012);
	ctx.f29.f64 = double(temp.f32);
	// stw r27,1016(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1016, ctx.r27.u32);
	// lfs f28,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,1004(r29)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1004, temp.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f27,f11,f29
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// beq cr6,0x82adcaa0
	if (ctx.cr6.eq) goto loc_82ADCAA0;
loc_82ADC90C:
	// lhz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// beq cr6,0x82adca90
	if (ctx.cr6.eq) goto loc_82ADCA90;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242ca90
	ctx.lr = 0x82ADC92C;
	sub_8242CA90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adc944
	if (ctx.cr6.eq) goto loc_82ADC944;
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82adca44
	goto loc_82ADCA44;
loc_82ADC944:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82adca44
	if (ctx.cr6.eq) goto loc_82ADCA44;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adc98c
	if (ctx.cr6.eq) goto loc_82ADC98C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADC974;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82adc984
	if (!ctx.cr6.eq) goto loc_82ADC984;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adc9c8
	goto loc_82ADC9C8;
loc_82ADC984:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82adc9c8
	goto loc_82ADC9C8;
loc_82ADC98C:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82adc9a0
	if (ctx.cr6.lt) goto loc_82ADC9A0;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82adc9c8
	goto loc_82ADC9C8;
loc_82ADC9A0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82adc9c8
	if (ctx.cr6.eq) goto loc_82ADC9C8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ADC9C8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82adca44
	if (!ctx.cr6.lt) goto loc_82ADCA44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82adca44
	if (!ctx.cr6.lt) goto loc_82ADCA44;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82adca44
	if (ctx.cr6.eq) goto loc_82ADCA44;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
loc_82ADCA44:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// fmuls f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adca64
	if (ctx.cr6.eq) goto loc_82ADCA64;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_82ADCA64:
	// lfs f13,1004(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1004);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,1004(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1004, temp.u32);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82adcaa0
	if (ctx.cr6.eq) goto loc_82ADCAA0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adca90
	if (ctx.cr6.eq) goto loc_82ADCA90;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82adcaa0
	if (ctx.cr6.eq) goto loc_82ADCAA0;
loc_82ADCA90:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82adc90c
	if (!ctx.cr6.eq) goto loc_82ADC90C;
loc_82ADCAA0:
	// lfs f0,1004(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,944(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 944);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// stfs f13,1004(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1004, temp.u32);
	// bne cr6,0x82adcae0
	if (!ctx.cr6.eq) goto loc_82ADCAE0;
	// lfs f0,496(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,996(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 996, temp.u32);
	// b 0x82adcb18
	goto loc_82ADCB18;
loc_82ADCAE0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82adcaf8
	if (!ctx.cr6.eq) goto loc_82ADCAF8;
	// lfs f0,504(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,996(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 996, temp.u32);
	// b 0x82adcb18
	goto loc_82ADCB18;
loc_82ADCAF8:
	// lfs f12,496(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f11,504(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f0,-28844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fnmsubs f8,f13,f0,f9
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f8,996(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 996, temp.u32);
loc_82ADCB18:
	// li r11,1020
	ctx.r11.s64 = 1020;
	// lfs f0,996(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 996);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1032
	ctx.r10.s64 = 1032;
	// lfs f13,504(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f12.u32);
	// stfiwx f11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.f11.u32);
loc_82ADCB38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b30
	ctx.lr = 0x82ADCB44;
	__restfpr_27(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADCB48"))) PPC_WEAK_FUNC(sub_82ADCB48);
PPC_FUNC_IMPL(__imp__sub_82ADCB48) {
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
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rldicr r12,r12,61,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82adcbb0
	if (!ctx.cr6.eq) goto loc_82ADCBB0;
	// lwz r11,908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adcb90
	if (ctx.cr6.eq) goto loc_82ADCB90;
	// lwz r4,904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// b 0x82adcb98
	goto loc_82ADCB98;
loc_82ADCB90:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82ADCB98:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adcbb0
	if (ctx.cr6.eq) goto loc_82ADCBB0;
	// addi r5,r31,1104
	ctx.r5.s64 = ctx.r31.s64 + 1104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82adc168
	ctx.lr = 0x82ADCBB0;
	sub_82ADC168(ctx, base);
loc_82ADCBB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82adb010
	ctx.lr = 0x82ADCBBC;
	sub_82ADB010(ctx, base);
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

__attribute__((alias("__imp__sub_82ADCBD4"))) PPC_WEAK_FUNC(sub_82ADCBD4);
PPC_FUNC_IMPL(__imp__sub_82ADCBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADCBD8"))) PPC_WEAK_FUNC(sub_82ADCBD8);
PPC_FUNC_IMPL(__imp__sub_82ADCBD8) {
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
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r10,1090(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1090);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82adcc40
	if (!ctx.cr6.eq) goto loc_82ADCC40;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1090(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1090, ctx.r10.u8);
	// lwz r9,908(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82adcc20
	if (ctx.cr6.eq) goto loc_82ADCC20;
	// lwz r4,904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// b 0x82adcc28
	goto loc_82ADCC28;
loc_82ADCC20:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82ADCC28:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82adcc40
	if (ctx.cr6.eq) goto loc_82ADCC40;
	// addi r5,r31,1104
	ctx.r5.s64 = ctx.r31.s64 + 1104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82adc168
	ctx.lr = 0x82ADCC40;
	sub_82ADC168(ctx, base);
loc_82ADCC40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x82ADCC4C;
	sub_82594938(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADCC60;
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

__attribute__((alias("__imp__sub_82ADCC78"))) PPC_WEAK_FUNC(sub_82ADCC78);
PPC_FUNC_IMPL(__imp__sub_82ADCC78) {
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
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x82361f10
	ctx.lr = 0x82ADCC9C;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adccb8
	if (ctx.cr6.eq) goto loc_82ADCCB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADCCB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADCCB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ada520
	ctx.lr = 0x82ADCCC4;
	sub_82ADA520(ctx, base);
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

__attribute__((alias("__imp__sub_82ADCCDC"))) PPC_WEAK_FUNC(sub_82ADCCDC);
PPC_FUNC_IMPL(__imp__sub_82ADCCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADCCE0"))) PPC_WEAK_FUNC(sub_82ADCCE0);
PPC_FUNC_IMPL(__imp__sub_82ADCCE0) {
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
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADCD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,940(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82adcd30
	if (ctx.cr6.eq) goto loc_82ADCD30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r30.u32);
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADCD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADCD30:
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

__attribute__((alias("__imp__sub_82ADCD48"))) PPC_WEAK_FUNC(sub_82ADCD48);
PPC_FUNC_IMPL(__imp__sub_82ADCD48) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r3,1090
	ctx.r10.s64 = ctx.r3.s64 + 1090;
	// stb r11,1090(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1090, ctx.r11.u8);
	// stb r11,1091(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1091, ctx.r11.u8);
	// stb r11,1092(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1092, ctx.r11.u8);
	// stb r11,1093(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1093, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADCD64"))) PPC_WEAK_FUNC(sub_82ADCD64);
PPC_FUNC_IMPL(__imp__sub_82ADCD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADCD68"))) PPC_WEAK_FUNC(sub_82ADCD68);
PPC_FUNC_IMPL(__imp__sub_82ADCD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82ADCD70;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// blt cr6,0x82adce38
	if (ctx.cr6.lt) goto loc_82ADCE38;
	// lwz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r29,152
	ctx.r31.s64 = ctx.r29.s64 + 152;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82adcdb8
	if (ctx.cr6.eq) goto loc_82ADCDB8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82adcdbc
	goto loc_82ADCDBC;
loc_82ADCDB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82ADCDBC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-10292
	ctx.r4.s64 = ctx.r11.s64 + -10292;
	// bl 0x82cafee0
	ctx.lr = 0x82ADCDC8;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82adce38
	if (ctx.cr6.eq) goto loc_82ADCE38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adcde4
	if (ctx.cr6.eq) goto loc_82ADCDE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82adcde8
	goto loc_82ADCDE8;
loc_82ADCDE4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ADCDE8:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82adce38
	if (ctx.cr6.lt) goto loc_82ADCE38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295908
	ctx.lr = 0x82ADCE04;
	sub_82295908(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82adce18
	if (!ctx.cr6.eq) goto loc_82ADCE18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82ADCE18:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8232e868
	ctx.lr = 0x82ADCE24;
	sub_8232E868(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82ADCE30;
	sub_822BBE90(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82ADCE38;
	sub_82299080(ctx, base);
loc_82ADCE38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82adb288
	ctx.lr = 0x82ADCE44;
	sub_82ADB288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82adce68
	if (ctx.cr6.eq) goto loc_82ADCE68;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82adce68
	if (ctx.cr6.eq) goto loc_82ADCE68;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x822bbe90
	ctx.lr = 0x82ADCE68;
	sub_822BBE90(ctx, base);
loc_82ADCE68:
	// lwz r11,-896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -896);
	// addi r3,r29,-896
	ctx.r3.s64 = ctx.r29.s64 + -896;
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADCE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82adcea0
	if (ctx.cr6.eq) goto loc_82ADCEA0;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82ADCEA0;
	sub_82294520(ctx, base);
loc_82ADCEA0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82ADCEA8;
	sub_82294CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADCEB4"))) PPC_WEAK_FUNC(sub_82ADCEB4);
PPC_FUNC_IMPL(__imp__sub_82ADCEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADCEB8"))) PPC_WEAK_FUNC(sub_82ADCEB8);
PPC_FUNC_IMPL(__imp__sub_82ADCEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82ADCEC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r7,1020
	ctx.r7.s64 = 1020;
	// fctiwz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r10,948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// addi r27,r31,948
	ctx.r27.s64 = ctx.r31.s64 + 948;
	// lwz r8,952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// stfiwx f0,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f0.u32);
	// lwz r6,956(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// lwz r4,960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// lbz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 988);
	// stfiwx f13,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.f13.u32);
	// lwz r3,964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// lwz r30,968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r28,972(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// lwz r7,976(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r3,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r3.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// stw r30,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r30.u32);
	// stw r28,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r28.u32);
	// stw r7,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r7.u32);
	// bgt cr6,0x82add028
	if (ctx.cr6.gt) goto loc_82ADD028;
	// lis r12,-32082
	ctx.r12.s64 = -2102525952;
	// addi r12,r12,-12460
	ctx.r12.s64 = ctx.r12.s64 + -12460;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82ADCF78;
	case 1:
		goto loc_82ADCF84;
	case 2:
		goto loc_82ADCF90;
	case 3:
		goto loc_82ADCF98;
	case 4:
		goto loc_82ADCFA4;
	case 5:
		goto loc_82ADCFE8;
	case 6:
		goto loc_82ADCFF0;
	case 7:
		goto loc_82ADCFFC;
	case 8:
		goto loc_82ADD008;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-12424(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12424);
	// lwz r21,-12412(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12412);
	// lwz r21,-12400(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12400);
	// lwz r21,-12392(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12392);
	// lwz r21,-12380(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12380);
	// lwz r21,-12312(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12312);
	// lwz r21,-12304(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12304);
	// lwz r21,-12292(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12292);
	// lwz r21,-12280(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12280);
loc_82ADCF78:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82add010
	goto loc_82ADD010;
loc_82ADCF84:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82add010
	goto loc_82ADD010;
loc_82ADCF90:
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82add00c
	goto loc_82ADD00C;
loc_82ADCF98:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82add010
	goto loc_82ADD010;
loc_82ADCFA4:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82ADCFA8:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82ADCFAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADCFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82adcfac
	if (ctx.cr6.lt) goto loc_82ADCFAC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x82adcfa8
	if (ctx.cr6.lt) goto loc_82ADCFA8;
	// b 0x82add028
	goto loc_82ADD028;
loc_82ADCFE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82add00c
	goto loc_82ADD00C;
loc_82ADCFF0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82add010
	goto loc_82ADD010;
loc_82ADCFFC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82add010
	goto loc_82ADD010;
loc_82ADD008:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82ADD00C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82ADD010:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADD028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82ADD028:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,684(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ADD06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADD074"))) PPC_WEAK_FUNC(sub_82ADD074);
PPC_FUNC_IMPL(__imp__sub_82ADD074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADD078"))) PPC_WEAK_FUNC(sub_82ADD078);
PPC_FUNC_IMPL(__imp__sub_82ADD078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82ADD080;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r11,r31,928
	ctx.r11.s64 = ctx.r31.s64 + 928;
	// lwz r10,932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82add3e8
	if (ctx.cr6.eq) goto loc_82ADD3E8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82add3e8
	if (!ctx.cr6.gt) goto loc_82ADD3E8;
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82add3e8
	if (ctx.cr6.eq) goto loc_82ADD3E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82add0d8
	if (ctx.cr6.eq) goto loc_82ADD0D8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82add0e0
	goto loc_82ADD0E0;
loc_82ADD0D8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
loc_82ADD0E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82add3e8
	if (ctx.cr6.eq) goto loc_82ADD3E8;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r11,-16728
	ctx.r29.s64 = ctx.r11.s64 + -16728;
loc_82ADD100:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242c908
	ctx.lr = 0x82ADD108;
	sub_8242C908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82add180
	if (ctx.cr6.eq) goto loc_82ADD180;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lfs f0,832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lfs f11,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f7,196(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f4,200(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f3,204(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
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
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// b 0x82add268
	goto loc_82ADD268;
loc_82ADD180:
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82add1b8
	if (ctx.cr6.eq) goto loc_82ADD1B8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r10,84
	ctx.r3.s64 = ctx.r10.s64 + 84;
	// bl 0x8240a7a8
	ctx.lr = 0x82ADD1A0;
	sub_8240A7A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82add1b0
	if (!ctx.cr6.eq) goto loc_82ADD1B0;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82add1f8
	goto loc_82ADD1F8;
loc_82ADD1B0:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82add1f8
	goto loc_82ADD1F8;
loc_82ADD1B8:
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82add1d0
	if (ctx.cr6.lt) goto loc_82ADD1D0;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82add1f8
	goto loc_82ADD1F8;
loc_82ADD1D0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,127
	ctx.r11.s64 = 127;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82add1f8
	if (ctx.cr6.eq) goto loc_82ADD1F8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82ADD1F8:
	// lfs f0,948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f13,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lfs f12,952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f10.f64 = double(temp.f32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// lfs f9,956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f7,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lfs f5,960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f4,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f8,212(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f3,220(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
loc_82ADD268:
	// lwz r9,940(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82add3dc
	if (!ctx.cr6.lt) goto loc_82ADD3DC;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,76(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,60(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82add3dc
	if (!ctx.cr6.lt) goto loc_82ADD3DC;
	// lwz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82add3dc
	if (ctx.cr6.eq) goto loc_82ADD3DC;
	// lwz r9,212(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// extsw r8,r26
	ctx.r8.s64 = ctx.r26.s32;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r9,1024(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f8,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwz r4,208(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// lfd f6,160(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// lfd f2,176(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r3,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r3.u64);
	// lfd f3,168(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f10,f2
	ctx.f10.f64 = double(ctx.f2.s64);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fcfid f2,f12
	ctx.f2.f64 = double(ctx.f12.s64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// lfs f11,1012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f11.f64 = double(temp.f32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f30,f1
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fadds f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f4,f11,f3
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fdivs f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// fmuls f3,f11,f30
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fdivs f7,f30,f10
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fdivs f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fdivs f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 / ctx.f10.f64));
	// fadds f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x82ADD3D4;
	sub_8242BFA0(ctx, base);
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f30,f0,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f31.f64));
loc_82ADD3DC:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82add100
	if (!ctx.cr6.eq) goto loc_82ADD100;
loc_82ADD3E8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADD3F8"))) PPC_WEAK_FUNC(sub_82ADD3F8);
PPC_FUNC_IMPL(__imp__sub_82ADD3F8) {
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
	// beq cr6,0x82add460
	if (ctx.cr6.eq) goto loc_82ADD460;
	// bl 0x82310b58
	ctx.lr = 0x82ADD418;
	sub_82310B58(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82add438
	if (ctx.cr6.eq) goto loc_82ADD438;
loc_82ADD424:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82add448
	if (ctx.cr6.eq) goto loc_82ADD448;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82add424
	if (!ctx.cr6.eq) goto loc_82ADD424;
loc_82ADD438:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82add460
	if (ctx.cr6.eq) goto loc_82ADD460;
loc_82ADD448:
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
loc_82ADD460:
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

__attribute__((alias("__imp__sub_82ADD478"))) PPC_WEAK_FUNC(sub_82ADD478);
PPC_FUNC_IMPL(__imp__sub_82ADD478) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82add498
	if (!ctx.cr6.eq) goto loc_82ADD498;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82ADD498:
	// addi r11,r4,896
	ctx.r11.s64 = ctx.r4.s64 + 896;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADD4A4"))) PPC_WEAK_FUNC(sub_82ADD4A4);
PPC_FUNC_IMPL(__imp__sub_82ADD4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADD4A8"))) PPC_WEAK_FUNC(sub_82ADD4A8);
PPC_FUNC_IMPL(__imp__sub_82ADD4A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82add4d4
	if (!ctx.cr6.eq) goto loc_82ADD4D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82ADD4BC:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82ADD4D4:
	// addi r11,r4,896
	ctx.r11.s64 = ctx.r4.s64 + 896;
	// b 0x82add4bc
	goto loc_82ADD4BC;
}

__attribute__((alias("__imp__sub_82ADD4DC"))) PPC_WEAK_FUNC(sub_82ADD4DC);
PPC_FUNC_IMPL(__imp__sub_82ADD4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADD4E0"))) PPC_WEAK_FUNC(sub_82ADD4E0);
PPC_FUNC_IMPL(__imp__sub_82ADD4E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADD4E4"))) PPC_WEAK_FUNC(sub_82ADD4E4);
PPC_FUNC_IMPL(__imp__sub_82ADD4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADD4E8"))) PPC_WEAK_FUNC(sub_82ADD4E8);
PPC_FUNC_IMPL(__imp__sub_82ADD4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADD52C"))) PPC_WEAK_FUNC(sub_82ADD52C);
PPC_FUNC_IMPL(__imp__sub_82ADD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ADD530"))) PPC_WEAK_FUNC(sub_82ADD530);
PPC_FUNC_IMPL(__imp__sub_82ADD530) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r8,r9,3152
	ctx.r8.s64 = ctx.r9.s64 + 3152;
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

