#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82575058"))) PPC_WEAK_FUNC(sub_82575058);
PPC_FUNC_IMPL(__imp__sub_82575058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82575060;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825750a0
	if (ctx.cr6.eq) goto loc_825750A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,864
	ctx.r11.s64 = ctx.r31.s64 + 864;
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
	ctx.lr = 0x825750A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825750A0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cd98
	ctx.lr = 0x825750B0;
	sub_8256CD98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825750B8"))) PPC_WEAK_FUNC(sub_825750B8);
PPC_FUNC_IMPL(__imp__sub_825750B8) {
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
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x825750e4
	if (!ctx.cr6.eq) goto loc_825750E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825750E4:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x825750F4;
	sub_8256D9A0(ctx, base);
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x8257510c
	if (!ctx.cr6.eq) goto loc_8257510C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257510C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x8257511C;
	sub_8256D9A0(ctx, base);
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

__attribute__((alias("__imp__sub_82575130"))) PPC_WEAK_FUNC(sub_82575130);
PPC_FUNC_IMPL(__imp__sub_82575130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575144
	if (ctx.cr6.eq) goto loc_82575144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x825a1250
	sub_825A1250(ctx, base);
	return;
loc_82575144:
	// b 0x8256d3c0
	sub_8256D3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575148"))) PPC_WEAK_FUNC(sub_82575148);
PPC_FUNC_IMPL(__imp__sub_82575148) {
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
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x8257516C;
	sub_82594938(ctx, base);
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575180
	if (ctx.cr6.eq) goto loc_82575180;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a1730
	ctx.lr = 0x82575180;
	sub_825A1730(ctx, base);
loc_82575180:
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

__attribute__((alias("__imp__sub_82575198"))) PPC_WEAK_FUNC(sub_82575198);
PPC_FUNC_IMPL(__imp__sub_82575198) {
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
	// bl 0x8256d610
	ctx.lr = 0x825751B8;
	sub_8256D610(ctx, base);
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825751dc
	if (ctx.cr6.eq) goto loc_825751DC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825751DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825751DC:
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

__attribute__((alias("__imp__sub_825751F4"))) PPC_WEAK_FUNC(sub_825751F4);
PPC_FUNC_IMPL(__imp__sub_825751F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825751F8"))) PPC_WEAK_FUNC(sub_825751F8);
PPC_FUNC_IMPL(__imp__sub_825751F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82575200;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575254
	if (ctx.cr6.eq) goto loc_82575254;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82575240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x82575248;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82575258
	if (!ctx.cr6.eq) goto loc_82575258;
loc_82575254:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82575258:
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82575270
	if (ctx.cr6.eq) goto loc_82575270;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82575270;
	sub_82299080(ctx, base);
loc_82575270:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575294
	if (ctx.cr6.eq) goto loc_82575294;
	// lwz r3,912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82575294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82575294:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257529C"))) PPC_WEAK_FUNC(sub_8257529C);
PPC_FUNC_IMPL(__imp__sub_8257529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825752A0"))) PPC_WEAK_FUNC(sub_825752A0);
PPC_FUNC_IMPL(__imp__sub_825752A0) {
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
	// bl 0x82574918
	ctx.lr = 0x825752C0;
	sub_82574918(ctx, base);
	// lwz r3,912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825752d4
	if (ctx.cr6.eq) goto loc_825752D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825a3168
	ctx.lr = 0x825752D4;
	sub_825A3168(ctx, base);
loc_825752D4:
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

__attribute__((alias("__imp__sub_825752EC"))) PPC_WEAK_FUNC(sub_825752EC);
PPC_FUNC_IMPL(__imp__sub_825752EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825752F0"))) PPC_WEAK_FUNC(sub_825752F0);
PPC_FUNC_IMPL(__imp__sub_825752F0) {
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
	// bl 0x82563b40
	ctx.lr = 0x82575308;
	sub_82563B40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257531C;
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

__attribute__((alias("__imp__sub_82575330"))) PPC_WEAK_FUNC(sub_82575330);
PPC_FUNC_IMPL(__imp__sub_82575330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82575350"))) PPC_WEAK_FUNC(sub_82575350);
PPC_FUNC_IMPL(__imp__sub_82575350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82575354"))) PPC_WEAK_FUNC(sub_82575354);
PPC_FUNC_IMPL(__imp__sub_82575354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82575358"))) PPC_WEAK_FUNC(sub_82575358);
PPC_FUNC_IMPL(__imp__sub_82575358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82575360;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x8257537C;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825753a8
	if (ctx.cr6.eq) goto loc_825753A8;
	// lwz r11,-864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -864);
	// addi r3,r31,-864
	ctx.r3.s64 = ctx.r31.s64 + -864;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257539C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bbe90
	ctx.lr = 0x825753A8;
	sub_822BBE90(ctx, base);
loc_825753A8:
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
	ctx.lr = 0x825753C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825753C8"))) PPC_WEAK_FUNC(sub_825753C8);
PPC_FUNC_IMPL(__imp__sub_825753C8) {
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
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294bb8
	ctx.lr = 0x825753E4;
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

__attribute__((alias("__imp__sub_825753FC"))) PPC_WEAK_FUNC(sub_825753FC);
PPC_FUNC_IMPL(__imp__sub_825753FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82575400"))) PPC_WEAK_FUNC(sub_82575400);
PPC_FUNC_IMPL(__imp__sub_82575400) {
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
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257545c
	if (ctx.cr6.eq) goto loc_8257545C;
	// lwz r11,-772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -772);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257545c
	if (ctx.cr6.eq) goto loc_8257545C;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82575448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257545C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257545C:
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

__attribute__((alias("__imp__sub_82575474"))) PPC_WEAK_FUNC(sub_82575474);
PPC_FUNC_IMPL(__imp__sub_82575474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82575478"))) PPC_WEAK_FUNC(sub_82575478);
PPC_FUNC_IMPL(__imp__sub_82575478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
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

__attribute__((alias("__imp__sub_82575498"))) PPC_WEAK_FUNC(sub_82575498);
PPC_FUNC_IMPL(__imp__sub_82575498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257549C"))) PPC_WEAK_FUNC(sub_8257549C);
PPC_FUNC_IMPL(__imp__sub_8257549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825754A0"))) PPC_WEAK_FUNC(sub_825754A0);
PPC_FUNC_IMPL(__imp__sub_825754A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x825754A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825754D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82575560
	if (!ctx.cr6.gt) goto loc_82575560;
	// addi r28,r31,-864
	ctx.r28.s64 = ctx.r31.s64 + -864;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
loc_825754F4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r28,864
	ctx.r11.s64 = ctx.r28.s64 + 864;
	// bne cr6,0x8257550c
	if (!ctx.cr6.eq) goto loc_8257550C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8257550C:
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
	ctx.lr = 0x82575530;
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
	ctx.lr = 0x8257554C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825754f4
	if (ctx.cr6.lt) goto loc_825754F4;
loc_82575560:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257559c
	if (ctx.cr6.eq) goto loc_8257559C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82575588
	if (!ctx.cr6.eq) goto loc_82575588;
	// bl 0x822900a0
	ctx.lr = 0x82575584;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82575588:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257559C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257559C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825755A4"))) PPC_WEAK_FUNC(sub_825755A4);
PPC_FUNC_IMPL(__imp__sub_825755A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825755A8"))) PPC_WEAK_FUNC(sub_825755A8);
PPC_FUNC_IMPL(__imp__sub_825755A8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e640b8
	ctx.lr = 0x825755D4;
	sub_82E640B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575628
	if (ctx.cr6.eq) goto loc_82575628;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825755FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822bbe90
	ctx.lr = 0x82575608;
	sub_822BBE90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82575610;
	sub_82299080(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82575628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82575628:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575640
	if (ctx.cr6.eq) goto loc_82575640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82551b68
	ctx.lr = 0x82575640;
	sub_82551B68(ctx, base);
loc_82575640:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825b2098
	ctx.lr = 0x8257564C;
	sub_825B2098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822dcf28
	ctx.lr = 0x82575658;
	sub_822DCF28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82575674"))) PPC_WEAK_FUNC(sub_82575674);
PPC_FUNC_IMPL(__imp__sub_82575674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82575678"))) PPC_WEAK_FUNC(sub_82575678);
PPC_FUNC_IMPL(__imp__sub_82575678) {
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
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825756d4
	if (ctx.cr6.eq) goto loc_825756D4;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825756b8
	if (ctx.cr6.eq) goto loc_825756B8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a3048
	ctx.lr = 0x825756B8;
	sub_825A3048(ctx, base);
loc_825756B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825756d4
	if (ctx.cr6.eq) goto loc_825756D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825a3048
	ctx.lr = 0x825756D4;
	sub_825A3048(ctx, base);
loc_825756D4:
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

__attribute__((alias("__imp__sub_825756EC"))) PPC_WEAK_FUNC(sub_825756EC);
PPC_FUNC_IMPL(__imp__sub_825756EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825756F0"))) PPC_WEAK_FUNC(sub_825756F0);
PPC_FUNC_IMPL(__imp__sub_825756F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x825756F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82574d20
	ctx.lr = 0x82575708;
	sub_82574D20(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825757d0
	if (!ctx.cr6.gt) goto loc_825757D0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825757d0
	if (ctx.cr6.eq) goto loc_825757D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82575738
	if (ctx.cr6.eq) goto loc_82575738;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82575758
	goto loc_82575758;
loc_82575738:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82575754;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82575758:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15380
	ctx.r4.s64 = ctx.r10.s64 + 15380;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257577C;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825757d0
	if (!ctx.cr6.eq) goto loc_825757D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825757d0
	if (!ctx.cr6.eq) goto loc_825757D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825757d0
	if (!ctx.cr6.eq) goto loc_825757D0;
	// lwz r11,912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825757d0
	if (ctx.cr6.eq) goto loc_825757D0;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r29,704
	ctx.r3.s64 = ctx.r29.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x825757D0;
	sub_82586D40(ctx, base);
loc_825757D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825757D8"))) PPC_WEAK_FUNC(sub_825757D8);
PPC_FUNC_IMPL(__imp__sub_825757D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x825757E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82575a1c
	if (!ctx.cr6.gt) goto loc_82575A1C;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82575a1c
	if (ctx.cr6.eq) goto loc_82575A1C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8257581c
	if (ctx.cr6.eq) goto loc_8257581C;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// b 0x8257583c
	goto loc_8257583C;
loc_8257581C:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82575838;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8257583C:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16104
	ctx.r4.s64 = ctx.r10.s64 + 16104;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x82575860;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82575900
	if (!ctx.cr6.eq) goto loc_82575900;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82575900
	if (!ctx.cr6.eq) goto loc_82575900;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82575898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575a1c
	if (ctx.cr6.eq) goto loc_82575A1C;
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825758d8
	if (!ctx.cr6.eq) goto loc_825758D8;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825758d8
	if (!ctx.cr6.eq) goto loc_825758D8;
	// lbz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82575a1c
	if (ctx.cr6.eq) goto loc_82575A1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575a1c
	if (ctx.cr6.eq) goto loc_82575A1C;
loc_825758D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825758EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574e08
	ctx.lr = 0x825758F8;
	sub_82574E08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82575900:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15380
	ctx.r4.s64 = ctx.r11.s64 + 15380;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257591C;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82575a1c
	if (!ctx.cr6.eq) goto loc_82575A1C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82575a1c
	if (!ctx.cr6.eq) goto loc_82575A1C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82575a1c
	if (!ctx.cr6.eq) goto loc_82575A1C;
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575a1c
	if (ctx.cr6.eq) goto loc_82575A1C;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82575968;
	sub_8256D9A0(ctx, base);
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r30,r31,864
	ctx.r30.s64 = ctx.r31.s64 + 864;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257598C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825759d8
	if (ctx.cr0.lt) goto loc_825759D8;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825759B8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825759d4
	if (!ctx.cr6.eq) goto loc_825759D4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x825759b8
	if (!ctx.cr0.lt) goto loc_825759B8;
	// b 0x825759d8
	goto loc_825759D8;
loc_825759D4:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_825759D8:
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,352(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,72(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82575A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82575A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82575A1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574e08
	ctx.lr = 0x82575A28;
	sub_82574E08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575A30"))) PPC_WEAK_FUNC(sub_82575A30);
PPC_FUNC_IMPL(__imp__sub_82575A30) {
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
	// bl 0x82574ff8
	ctx.lr = 0x82575A48;
	sub_82574FF8(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r10,r31,384
	ctx.r10.s64 = ctx.r31.s64 + 384;
	// lwz r9,392(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r8,388(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// or r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r6,384(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82575afc
	if (ctx.cr6.eq) goto loc_82575AFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r9,r31,372
	ctx.r9.s64 = ctx.r31.s64 + 372;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r9,12
	ctx.r3.s64 = ctx.r9.s64 + 12;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,376(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,380(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r7,388(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,392(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r7,400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
loc_82575AFC:
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

__attribute__((alias("__imp__sub_82575B10"))) PPC_WEAK_FUNC(sub_82575B10);
PPC_FUNC_IMPL(__imp__sub_82575B10) {
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
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82575b3c
	if (!ctx.cr6.eq) goto loc_82575B3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82575B3C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82575B4C;
	sub_8256D9A0(ctx, base);
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82575b64
	if (!ctx.cr6.eq) goto loc_82575B64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82575B64:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82575B74;
	sub_8256D9A0(ctx, base);
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

__attribute__((alias("__imp__sub_82575B88"))) PPC_WEAK_FUNC(sub_82575B88);
PPC_FUNC_IMPL(__imp__sub_82575B88) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82574918
	ctx.lr = 0x82575BA8;
	sub_82574918(ctx, base);
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82575c74
	if (ctx.cr6.eq) goto loc_82575C74;
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575c74
	if (ctx.cr6.eq) goto loc_82575C74;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// lfs f12,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f10,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f9,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r31,268(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82575C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82575C74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82575C8C"))) PPC_WEAK_FUNC(sub_82575C8C);
PPC_FUNC_IMPL(__imp__sub_82575C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82575C90"))) PPC_WEAK_FUNC(sub_82575C90);
PPC_FUNC_IMPL(__imp__sub_82575C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82575C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-11832
	ctx.r11.s64 = ctx.r11.s64 + -11832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82575f94
	if (!ctx.cr6.eq) goto loc_82575F94;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82575f94
	if (!ctx.cr6.eq) goto loc_82575F94;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82575d4c
	if (!ctx.cr6.eq) goto loc_82575D4C;
	// addi r29,r31,748
	ctx.r29.s64 = ctx.r31.s64 + 748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82575CE8;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575d24
	if (ctx.cr6.eq) goto loc_82575D24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18380(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18380);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82575D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82575D24:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822f03d0
	ctx.lr = 0x82575D2C;
	sub_822F03D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82564c58
	ctx.lr = 0x82575D40;
	sub_82564C58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82575D4C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82575de0
	if (!ctx.cr6.eq) goto loc_82575DE0;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575d88
	if (ctx.cr6.eq) goto loc_82575D88;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575d88
	if (ctx.cr6.eq) goto loc_82575D88;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575d88
	if (ctx.cr6.eq) goto loc_82575D88;
	// ld r4,844(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 844);
	// bl 0x826cd690
	ctx.lr = 0x82575D88;
	sub_826CD690(ctx, base);
loc_82575D88:
	// addi r29,r31,760
	ctx.r29.s64 = ctx.r31.s64 + 760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82575D98;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575fac
	if (ctx.cr6.eq) goto loc_82575FAC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18364(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18364);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82575DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82575DE0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82575f10
	if (!ctx.cr6.eq) goto loc_82575F10;
	// addi r29,r31,772
	ctx.r29.s64 = ctx.r31.s64 + 772;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82575DF8;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575e34
	if (ctx.cr6.eq) goto loc_82575E34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18372(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18372);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82575E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82575E34:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82566ca0
	ctx.lr = 0x82575E44;
	sub_82566CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575fac
	if (ctx.cr6.eq) goto loc_82575FAC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575e80
	if (ctx.cr6.eq) goto loc_82575E80;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575e80
	if (ctx.cr6.eq) goto loc_82575E80;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575e80
	if (ctx.cr6.eq) goto loc_82575E80;
	// ld r4,844(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 844);
	// bl 0x826cd690
	ctx.lr = 0x82575E80;
	sub_826CD690(ctx, base);
loc_82575E80:
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// bl 0x82575fd0
	ctx.lr = 0x82575E98;
	sub_82575FD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x8240c6f8
	ctx.lr = 0x82575EA4;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575ec4
	if (ctx.cr6.eq) goto loc_82575EC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557a38
	ctx.lr = 0x82575EBC;
	sub_82557A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82575ee8
	if (!ctx.cr6.eq) goto loc_82575EE8;
loc_82575EC4:
	// bl 0x822f2228
	ctx.lr = 0x82575EC8;
	sub_822F2228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825656f0
	ctx.lr = 0x82575EE8;
	sub_825656F0(ctx, base);
loc_82575EE8:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822f03d0
	ctx.lr = 0x82575EF0;
	sub_822F03D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82565228
	ctx.lr = 0x82575F04;
	sub_82565228(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82575F10:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82575f94
	if (!ctx.cr6.eq) goto loc_82575F94;
	// addi r29,r31,796
	ctx.r29.s64 = ctx.r31.s64 + 796;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82575F28;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82575f64
	if (ctx.cr6.eq) goto loc_82575F64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18396(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18396);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82575F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82575F64:
	// bl 0x822f2278
	ctx.lr = 0x82575F68;
	sub_822F2278(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825656f0
	ctx.lr = 0x82575F88;
	sub_825656F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82575F94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825749f8
	ctx.lr = 0x82575FA0;
	sub_825749F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82575fb0
	if (ctx.cr6.eq) goto loc_82575FB0;
loc_82575FAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82575FB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575FB8"))) PPC_WEAK_FUNC(sub_82575FB8);
PPC_FUNC_IMPL(__imp__sub_82575FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575FC8"))) PPC_WEAK_FUNC(sub_82575FC8);
PPC_FUNC_IMPL(__imp__sub_82575FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82575FCC"))) PPC_WEAK_FUNC(sub_82575FCC);
PPC_FUNC_IMPL(__imp__sub_82575FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82575FD0"))) PPC_WEAK_FUNC(sub_82575FD0);
PPC_FUNC_IMPL(__imp__sub_82575FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82575FD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,972(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 972);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825761a8
	if (ctx.cr6.eq) goto loc_825761A8;
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r11,972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 972, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822ab8c0
	ctx.lr = 0x82576020;
	sub_822AB8C0(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82576034
	if (!ctx.cr6.eq) goto loc_82576034;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82567278
	ctx.lr = 0x82576030;
	sub_82567278(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82576034:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r27,r1,120
	ctx.r27.s64 = ctx.r1.s64 + 120;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x822f25e8
	ctx.lr = 0x8257604C;
	sub_822F25E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x825656f0
	ctx.lr = 0x8257606C;
	sub_825656F0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257612c
	if (!ctx.cr6.gt) goto loc_8257612C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r25,r11,8052
	ctx.r25.s64 = ctx.r11.s64 + 8052;
loc_8257608C:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x824acfc0
	ctx.lr = 0x825760AC;
	sub_824ACFC0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ble cr6,0x825760dc
	if (!ctx.cr6.gt) goto loc_825760DC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_825760C0:
	// lwz r9,972(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 972);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// bne 0x825760c0
	if (!ctx.cr0.eq) goto loc_825760C0;
loc_825760DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257610c
	if (ctx.cr6.eq) goto loc_8257610C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825760f8
	if (!ctx.cr6.eq) goto loc_825760F8;
	// bl 0x822900a0
	ctx.lr = 0x825760F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_825760F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257610C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257610C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// blt cr6,0x8257608c
	if (ctx.cr6.lt) goto loc_8257608C;
loc_8257612C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576164
	if (ctx.cr6.eq) goto loc_82576164;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82576150
	if (!ctx.cr6.eq) goto loc_82576150;
	// bl 0x822900a0
	ctx.lr = 0x8257614C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82576150:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82576164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576164:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x825761a8
	if (ctx.cr6.eq) goto loc_825761A8;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82576194
	if (!ctx.cr6.eq) goto loc_82576194;
	// bl 0x822900a0
	ctx.lr = 0x82576190;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82576194:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825761A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825761A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825761B0"))) PPC_WEAK_FUNC(sub_825761B0);
PPC_FUNC_IMPL(__imp__sub_825761B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x825761B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x825761D4;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576200
	if (ctx.cr6.eq) goto loc_82576200;
	// lwz r11,-864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -864);
	// addi r3,r31,-864
	ctx.r3.s64 = ctx.r31.s64 + -864;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825761F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82576200;
	sub_822BBE90(ctx, base);
loc_82576200:
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
	ctx.lr = 0x82576218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576220"))) PPC_WEAK_FUNC(sub_82576220);
PPC_FUNC_IMPL(__imp__sub_82576220) {
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
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8257623C;
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

__attribute__((alias("__imp__sub_82576254"))) PPC_WEAK_FUNC(sub_82576254);
PPC_FUNC_IMPL(__imp__sub_82576254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576258"))) PPC_WEAK_FUNC(sub_82576258);
PPC_FUNC_IMPL(__imp__sub_82576258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82576260;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-864
	ctx.r30.s64 = ctx.r3.s64 + -864;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r30,864
	ctx.r11.s64 = ctx.r30.s64 + 864;
	// bne cr6,0x82576280
	if (!ctx.cr6.eq) goto loc_82576280;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82576280:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b1d70
	ctx.lr = 0x82576294;
	sub_825B1D70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825763e8
	if (ctx.cr6.eq) goto loc_825763E8;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e640b8
	ctx.lr = 0x825762AC;
	sub_82E640B8(ctx, base);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b2018
	ctx.lr = 0x825762BC;
	sub_825B2018(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825763e0
	if (ctx.cr6.eq) goto loc_825763E0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825763e0
	if (ctx.cr6.eq) goto loc_825763E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825763e0
	if (!ctx.cr6.gt) goto loc_825763E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,-14956
	ctx.r4.s64 = ctx.r11.s64 + -14956;
	// bl 0x82cb0328
	ctx.lr = 0x825762EC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825763cc
	if (ctx.cr6.eq) goto loc_825763CC;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82576310
	if (!ctx.cr6.eq) goto loc_82576310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82576310:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-20180
	ctx.r4.s64 = ctx.r11.s64 + -20180;
	// bl 0x82cb0328
	ctx.lr = 0x8257631C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825763cc
	if (ctx.cr6.eq) goto loc_825763CC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82576338
	if (!ctx.cr6.eq) goto loc_82576338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82576338:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24256
	ctx.r4.s64 = ctx.r11.s64 + -24256;
	// bl 0x82cb0328
	ctx.lr = 0x82576344;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825763cc
	if (ctx.cr6.eq) goto loc_825763CC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82576360
	if (!ctx.cr6.eq) goto loc_82576360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82576360:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-16936
	ctx.r4.s64 = ctx.r11.s64 + -16936;
	// bl 0x82cb0328
	ctx.lr = 0x8257636C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825763c4
	if (ctx.cr6.eq) goto loc_825763C4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82576388
	if (!ctx.cr6.eq) goto loc_82576388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82576388:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-20168
	ctx.r4.s64 = ctx.r11.s64 + -20168;
	// bl 0x82cb0328
	ctx.lr = 0x82576394;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825763c4
	if (ctx.cr6.eq) goto loc_825763C4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825763b0
	if (!ctx.cr6.eq) goto loc_825763B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825763B0:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24128
	ctx.r4.s64 = ctx.r11.s64 + -24128;
	// bl 0x82cb0328
	ctx.lr = 0x825763BC;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825763e0
	if (!ctx.cr6.eq) goto loc_825763E0;
loc_825763C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825763d0
	goto loc_825763D0;
loc_825763CC:
	// li r4,1
	ctx.r4.s64 = 1;
loc_825763D0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82575fd0
	ctx.lr = 0x825763DC;
	sub_82575FD0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_825763E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822dcf28
	ctx.lr = 0x825763E8;
	sub_822DCF28(ctx, base);
loc_825763E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825763F4"))) PPC_WEAK_FUNC(sub_825763F4);
PPC_FUNC_IMPL(__imp__sub_825763F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825763F8"))) PPC_WEAK_FUNC(sub_825763F8);
PPC_FUNC_IMPL(__imp__sub_825763F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82551b68
	sub_82551B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576414"))) PPC_WEAK_FUNC(sub_82576414);
PPC_FUNC_IMPL(__imp__sub_82576414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576418"))) PPC_WEAK_FUNC(sub_82576418);
PPC_FUNC_IMPL(__imp__sub_82576418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82576420;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257645c
	if (ctx.cr6.eq) goto loc_8257645C;
	// addic. r11,r31,-864
	ctx.xer.ca = ctx.r31.u32 > 863;
	ctx.r11.s64 = ctx.r31.s64 + -864;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// bne 0x8257644c
	if (!ctx.cr0.eq) goto loc_8257644C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8257644C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825588a0
	ctx.lr = 0x82576458;
	sub_825588A0(ctx, base);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
loc_8257645C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x82576480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8257650c
	if (!ctx.cr6.gt) goto loc_8257650C;
	// addi r28,r31,-864
	ctx.r28.s64 = ctx.r31.s64 + -864;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
loc_825764A0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r28,864
	ctx.r11.s64 = ctx.r28.s64 + 864;
	// bne cr6,0x825764b8
	if (!ctx.cr6.eq) goto loc_825764B8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_825764B8:
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
	ctx.lr = 0x825764DC;
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
	ctx.lr = 0x825764F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825764a0
	if (ctx.cr6.lt) goto loc_825764A0;
loc_8257650C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576548
	if (ctx.cr6.eq) goto loc_82576548;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82576534
	if (!ctx.cr6.eq) goto loc_82576534;
	// bl 0x822900a0
	ctx.lr = 0x82576530;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82576534:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82576548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576548:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576550"))) PPC_WEAK_FUNC(sub_82576550);
PPC_FUNC_IMPL(__imp__sub_82576550) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e640b8
	ctx.lr = 0x8257657C;
	sub_82E640B8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82576598
	if (ctx.cr6.eq) goto loc_82576598;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24256
	ctx.r4.s64 = ctx.r11.s64 + -24256;
	// b 0x825765a0
	goto loc_825765A0;
loc_82576598:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24128
	ctx.r4.s64 = ctx.r11.s64 + -24128;
loc_825765A0:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82427888
	ctx.lr = 0x825765A8;
	sub_82427888(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825765C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825b2098
	ctx.lr = 0x825765CC;
	sub_825B2098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dcf28
	ctx.lr = 0x825765D8;
	sub_822DCF28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_825765F4"))) PPC_WEAK_FUNC(sub_825765F4);
PPC_FUNC_IMPL(__imp__sub_825765F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825765F8"))) PPC_WEAK_FUNC(sub_825765F8);
PPC_FUNC_IMPL(__imp__sub_825765F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82576600;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82574d20
	ctx.lr = 0x82576610;
	sub_82574D20(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825766d8
	if (!ctx.cr6.gt) goto loc_825766D8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825766d8
	if (ctx.cr6.eq) goto loc_825766D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82576640
	if (ctx.cr6.eq) goto loc_82576640;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82576660
	goto loc_82576660;
loc_82576640:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257665C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82576660:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16140
	ctx.r4.s64 = ctx.r10.s64 + 16140;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x82576684;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825766d8
	if (!ctx.cr6.eq) goto loc_825766D8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825766d8
	if (!ctx.cr6.eq) goto loc_825766D8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825766d8
	if (!ctx.cr6.eq) goto loc_825766D8;
	// lwz r11,912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825766d8
	if (ctx.cr6.eq) goto loc_825766D8;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r29,704
	ctx.r3.s64 = ctx.r29.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x825766D8;
	sub_82586D40(ctx, base);
loc_825766D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825766E0"))) PPC_WEAK_FUNC(sub_825766E0);
PPC_FUNC_IMPL(__imp__sub_825766E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x825766E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825769bc
	if (!ctx.cr6.gt) goto loc_825769BC;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825769bc
	if (ctx.cr6.eq) goto loc_825769BC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r27,r11,-19580
	ctx.r27.s64 = ctx.r11.s64 + -19580;
	// beq cr6,0x8257672c
	if (ctx.cr6.eq) goto loc_8257672C;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x82576748
	goto loc_82576748;
loc_8257672C:
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
	ctx.lr = 0x82576744;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82576748:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16184
	ctx.r4.s64 = ctx.r10.s64 + 16184;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257676C;
	sub_8233E028(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x825767a4
	if (!ctx.cr6.eq) goto loc_825767A4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825767a4
	if (!ctx.cr6.eq) goto loc_825767A4;
	// lwz r11,864(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 864);
	// addi r3,r28,864
	ctx.r3.s64 = ctx.r28.s64 + 864;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x825769b8
	goto loc_825769B8;
loc_825767A4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16140
	ctx.r4.s64 = ctx.r11.s64 + 16140;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x825767C0;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825769bc
	if (!ctx.cr6.eq) goto loc_825769BC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825769bc
	if (!ctx.cr6.eq) goto loc_825769BC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825768c0
	if (!ctx.cr6.eq) goto loc_825768C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825769bc
	if (ctx.cr6.eq) goto loc_825769BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258ad88
	ctx.lr = 0x825767FC;
	sub_8258AD88(ctx, base);
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576820
	if (ctx.cr6.eq) goto loc_82576820;
	// lwz r10,912(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r8,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r8.u32);
	// b 0x82576850
	goto loc_82576850;
loc_82576820:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16216
	ctx.r4.s64 = ctx.r11.s64 + 16216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257683C;
	sub_8233E028(ctx, base);
	// lwz r11,912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
loc_82576850:
	// lwz r11,912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82576868
	if (!ctx.cr6.eq) goto loc_82576868;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82576868:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82576878;
	sub_8256D9A0(ctx, base);
	// lwz r3,912(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825768a4
	if (ctx.cr6.eq) goto loc_825768A4;
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x825a0470
	ctx.lr = 0x82576890;
	sub_825A0470(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82574e08
	ctx.lr = 0x8257689C;
	sub_82574E08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_825768A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a0470
	ctx.lr = 0x825768AC;
	sub_825A0470(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82574e08
	ctx.lr = 0x825768B8;
	sub_82574E08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_825768C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825769bc
	if (ctx.cr6.eq) goto loc_825769BC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15560
	ctx.r4.s64 = ctx.r11.s64 + 15560;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x825768E4;
	sub_8233E028(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x825768f8
	if (ctx.cr6.eq) goto loc_825768F8;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82576914
	goto loc_82576914;
loc_825768F8:
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
	ctx.lr = 0x82576910;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82576914:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825769bc
	if (!ctx.cr6.eq) goto loc_825769BC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825769bc
	if (!ctx.cr6.eq) goto loc_825769BC;
	// lwz r11,912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825769bc
	if (ctx.cr6.eq) goto loc_825769BC;
	// lwz r10,164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825769bc
	if (ctx.cr6.eq) goto loc_825769BC;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257696c
	if (ctx.cr6.eq) goto loc_8257696C;
	// lwz r31,164(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x82576970
	goto loc_82576970;
loc_8257696C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82576970:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82576980;
	sub_822960C0(ctx, base);
	// lwz r10,864(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 864);
	// addi r3,r28,864
	ctx.r3.s64 = ctx.r28.s64 + 864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8257699C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x825769A4;
	sub_82299080(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,596(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 596);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_825769B8:
	// bctrl 
	ctx.lr = 0x825769BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825769BC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82574e08
	ctx.lr = 0x825769C8;
	sub_82574E08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825769D0"))) PPC_WEAK_FUNC(sub_825769D0);
PPC_FUNC_IMPL(__imp__sub_825769D0) {
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
	// bl 0x82574ff8
	ctx.lr = 0x825769E8;
	sub_82574FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x825769F0;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,424
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 424, ctx.xer);
	// bge cr6,0x82576a18
	if (!ctx.cr6.lt) goto loc_82576A18;
	// lwz r11,916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576a18
	if (ctx.cr6.eq) goto loc_82576A18;
	// addi r5,r31,940
	ctx.r5.s64 = ctx.r31.s64 + 940;
	// lwz r6,912(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r4,r31,920
	ctx.r4.s64 = ctx.r31.s64 + 920;
	// bl 0x82574730
	ctx.lr = 0x82576A18;
	sub_82574730(ctx, base);
loc_82576A18:
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

__attribute__((alias("__imp__sub_82576A2C"))) PPC_WEAK_FUNC(sub_82576A2C);
PPC_FUNC_IMPL(__imp__sub_82576A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576A30"))) PPC_WEAK_FUNC(sub_82576A30);
PPC_FUNC_IMPL(__imp__sub_82576A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82576A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576a78
	if (ctx.cr6.eq) goto loc_82576A78;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,864
	ctx.r11.s64 = ctx.r31.s64 + 864;
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
	ctx.lr = 0x82576A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576A78:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575058
	ctx.lr = 0x82576A88;
	sub_82575058(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576A90"))) PPC_WEAK_FUNC(sub_82576A90);
PPC_FUNC_IMPL(__imp__sub_82576A90) {
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
	// bl 0x825750b8
	ctx.lr = 0x82576AA8;
	sub_825750B8(ctx, base);
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82576ac0
	if (!ctx.cr6.eq) goto loc_82576AC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82576AC0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82576AD0;
	sub_8256D9A0(ctx, base);
	// lwz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82576ae8
	if (!ctx.cr6.eq) goto loc_82576AE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82576AE8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82576AF8;
	sub_8256D9A0(ctx, base);
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

__attribute__((alias("__imp__sub_82576B0C"))) PPC_WEAK_FUNC(sub_82576B0C);
PPC_FUNC_IMPL(__imp__sub_82576B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576B10"))) PPC_WEAK_FUNC(sub_82576B10);
PPC_FUNC_IMPL(__imp__sub_82576B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82576B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576b44
	if (ctx.cr6.eq) goto loc_82576B44;
	// bl 0x825a1250
	ctx.lr = 0x82576B38;
	sub_825A1250(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x82576b48
	if (!ctx.cr6.eq) goto loc_82576B48;
loc_82576B44:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82576B48:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576b64
	if (ctx.cr6.eq) goto loc_82576B64;
	// bl 0x825a1250
	ctx.lr = 0x82576B60;
	sub_825A1250(ctx, base);
	// b 0x82576b6c
	goto loc_82576B6C;
loc_82576B64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d3c0
	ctx.lr = 0x82576B6C;
	sub_8256D3C0(ctx, base);
loc_82576B6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82576b7c
	if (!ctx.cr6.eq) goto loc_82576B7C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82576b80
	if (ctx.cr6.eq) goto loc_82576B80;
loc_82576B7C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82576B80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576B88"))) PPC_WEAK_FUNC(sub_82576B88);
PPC_FUNC_IMPL(__imp__sub_82576B88) {
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
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x82576BAC;
	sub_82594938(ctx, base);
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576bc0
	if (ctx.cr6.eq) goto loc_82576BC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a1730
	ctx.lr = 0x82576BC0;
	sub_825A1730(ctx, base);
loc_82576BC0:
	// lwz r3,976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576bd4
	if (ctx.cr6.eq) goto loc_82576BD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a1730
	ctx.lr = 0x82576BD4;
	sub_825A1730(ctx, base);
loc_82576BD4:
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

__attribute__((alias("__imp__sub_82576BEC"))) PPC_WEAK_FUNC(sub_82576BEC);
PPC_FUNC_IMPL(__imp__sub_82576BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576BF0"))) PPC_WEAK_FUNC(sub_82576BF0);
PPC_FUNC_IMPL(__imp__sub_82576BF0) {
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
	// bl 0x82575198
	ctx.lr = 0x82576C10;
	sub_82575198(ctx, base);
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576c34
	if (ctx.cr6.eq) goto loc_82576C34;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82576C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576C34:
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

__attribute__((alias("__imp__sub_82576C4C"))) PPC_WEAK_FUNC(sub_82576C4C);
PPC_FUNC_IMPL(__imp__sub_82576C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576C50"))) PPC_WEAK_FUNC(sub_82576C50);
PPC_FUNC_IMPL(__imp__sub_82576C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82576C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825751f8
	ctx.lr = 0x82576C70;
	sub_825751F8(ctx, base);
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576cb0
	if (ctx.cr6.eq) goto loc_82576CB0;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82576C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x82576CA4;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82576cb4
	if (!ctx.cr6.eq) goto loc_82576CB4;
loc_82576CB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82576CB4:
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82576ccc
	if (ctx.cr6.eq) goto loc_82576CCC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82576CCC;
	sub_82299080(ctx, base);
loc_82576CCC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576cf0
	if (ctx.cr6.eq) goto loc_82576CF0;
	// lwz r3,976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82576CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576CF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576CF8"))) PPC_WEAK_FUNC(sub_82576CF8);
PPC_FUNC_IMPL(__imp__sub_82576CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82576D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82576ddc
	if (ctx.cr6.eq) goto loc_82576DDC;
	// lwz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576dd4
	if (ctx.cr6.eq) goto loc_82576DD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// lfs f12,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f9,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,268(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82576DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576DD4:
	// lwz r3,976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// b 0x82576e9c
	goto loc_82576E9C;
loc_82576DDC:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576e98
	if (ctx.cr6.eq) goto loc_82576E98;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f11,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lfs f13,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f12,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r11,268(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576E98:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
loc_82576E9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576eac
	if (ctx.cr6.eq) goto loc_82576EAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a3168
	ctx.lr = 0x82576EAC;
	sub_825A3168(ctx, base);
loc_82576EAC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576EB4"))) PPC_WEAK_FUNC(sub_82576EB4);
PPC_FUNC_IMPL(__imp__sub_82576EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82576EB8"))) PPC_WEAK_FUNC(sub_82576EB8);
PPC_FUNC_IMPL(__imp__sub_82576EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82576EC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-11832
	ctx.r11.s64 = ctx.r11.s64 + -11832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825770f4
	if (!ctx.cr6.eq) goto loc_825770F4;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825770f4
	if (!ctx.cr6.eq) goto loc_825770F4;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82576f74
	if (!ctx.cr6.eq) goto loc_82576F74;
	// addi r29,r31,748
	ctx.r29.s64 = ctx.r31.s64 + 748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82576F10;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576f4c
	if (ctx.cr6.eq) goto loc_82576F4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18380(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18380);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82576F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576F4C:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822f03d0
	ctx.lr = 0x82576F54;
	sub_822F03D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82564c58
	ctx.lr = 0x82576F68;
	sub_82564C58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82576F74:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82577070
	if (!ctx.cr6.eq) goto loc_82577070;
	// addi r29,r31,772
	ctx.r29.s64 = ctx.r31.s64 + 772;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82576F8C;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576fc8
	if (ctx.cr6.eq) goto loc_82576FC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18372(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18372);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82576FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576FC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82566ca0
	ctx.lr = 0x82576FD8;
	sub_82566CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257710c
	if (ctx.cr6.eq) goto loc_8257710C;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// bl 0x82577118
	ctx.lr = 0x82576FF8;
	sub_82577118(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x8240c6f8
	ctx.lr = 0x82577004;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82577024
	if (ctx.cr6.eq) goto loc_82577024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557a38
	ctx.lr = 0x8257701C;
	sub_82557A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82577048
	if (!ctx.cr6.eq) goto loc_82577048;
loc_82577024:
	// bl 0x822f2228
	ctx.lr = 0x82577028;
	sub_822F2228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825656f0
	ctx.lr = 0x82577048;
	sub_825656F0(ctx, base);
loc_82577048:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822f03d0
	ctx.lr = 0x82577050;
	sub_822F03D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82565228
	ctx.lr = 0x82577064;
	sub_82565228(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82577070:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x825770f4
	if (!ctx.cr6.eq) goto loc_825770F4;
	// addi r29,r31,796
	ctx.r29.s64 = ctx.r31.s64 + 796;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82577088;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825770c4
	if (ctx.cr6.eq) goto loc_825770C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18396(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18396);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825770C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825770C4:
	// bl 0x822f2278
	ctx.lr = 0x825770C8;
	sub_822F2278(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825656f0
	ctx.lr = 0x825770E8;
	sub_825656F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_825770F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825749f8
	ctx.lr = 0x82577100;
	sub_825749F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82577110
	if (ctx.cr6.eq) goto loc_82577110;
loc_8257710C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82577110:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577118"))) PPC_WEAK_FUNC(sub_82577118);
PPC_FUNC_IMPL(__imp__sub_82577118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82577120;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,972(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 972);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825772f0
	if (ctx.cr6.eq) goto loc_825772F0;
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r11,972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 972, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822ab8c0
	ctx.lr = 0x82577168;
	sub_822AB8C0(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8257717c
	if (!ctx.cr6.eq) goto loc_8257717C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82567278
	ctx.lr = 0x82577178;
	sub_82567278(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8257717C:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r27,r1,120
	ctx.r27.s64 = ctx.r1.s64 + 120;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x822f25e8
	ctx.lr = 0x82577194;
	sub_822F25E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x825656f0
	ctx.lr = 0x825771B4;
	sub_825656F0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82577274
	if (!ctx.cr6.gt) goto loc_82577274;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r25,r11,8052
	ctx.r25.s64 = ctx.r11.s64 + 8052;
loc_825771D4:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x824acfc0
	ctx.lr = 0x825771F4;
	sub_824ACFC0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ble cr6,0x82577224
	if (!ctx.cr6.gt) goto loc_82577224;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82577208:
	// lwz r9,972(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 972);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// bne 0x82577208
	if (!ctx.cr0.eq) goto loc_82577208;
loc_82577224:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82577254
	if (ctx.cr6.eq) goto loc_82577254;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82577240
	if (!ctx.cr6.eq) goto loc_82577240;
	// bl 0x822900a0
	ctx.lr = 0x8257723C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82577240:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82577254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82577254:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// blt cr6,0x825771d4
	if (ctx.cr6.lt) goto loc_825771D4;
loc_82577274:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825772ac
	if (ctx.cr6.eq) goto loc_825772AC;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82577298
	if (!ctx.cr6.eq) goto loc_82577298;
	// bl 0x822900a0
	ctx.lr = 0x82577294;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82577298:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825772AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825772AC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x825772f0
	if (ctx.cr6.eq) goto loc_825772F0;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825772dc
	if (!ctx.cr6.eq) goto loc_825772DC;
	// bl 0x822900a0
	ctx.lr = 0x825772D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_825772DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825772F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825772F0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825772F8"))) PPC_WEAK_FUNC(sub_825772F8);
PPC_FUNC_IMPL(__imp__sub_825772F8) {
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
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257732c
	if (ctx.cr6.eq) goto loc_8257732C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257732C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257732C:
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257734c
	if (ctx.cr6.eq) goto loc_8257734C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257734C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257734C:
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

__attribute__((alias("__imp__sub_82577360"))) PPC_WEAK_FUNC(sub_82577360);
PPC_FUNC_IMPL(__imp__sub_82577360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82577368;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r29,-864
	ctx.r30.s64 = ctx.r29.s64 + -864;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r30,864
	ctx.r11.s64 = ctx.r30.s64 + 864;
	// bne cr6,0x82577390
	if (!ctx.cr6.eq) goto loc_82577390;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82577390:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b1d70
	ctx.lr = 0x825773A4;
	sub_825B1D70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825774fc
	if (ctx.cr6.eq) goto loc_825774FC;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e640b8
	ctx.lr = 0x825773BC;
	sub_82E640B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b2018
	ctx.lr = 0x825773D0;
	sub_825B2018(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825774f4
	if (ctx.cr6.eq) goto loc_825774F4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825774f4
	if (ctx.cr6.eq) goto loc_825774F4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825774f4
	if (!ctx.cr6.gt) goto loc_825774F4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,-14956
	ctx.r4.s64 = ctx.r11.s64 + -14956;
	// bl 0x82cb0328
	ctx.lr = 0x82577400;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825774e0
	if (ctx.cr6.eq) goto loc_825774E0;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82577424
	if (!ctx.cr6.eq) goto loc_82577424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82577424:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-20180
	ctx.r4.s64 = ctx.r11.s64 + -20180;
	// bl 0x82cb0328
	ctx.lr = 0x82577430;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825774e0
	if (ctx.cr6.eq) goto loc_825774E0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257744c
	if (!ctx.cr6.eq) goto loc_8257744C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8257744C:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24256
	ctx.r4.s64 = ctx.r11.s64 + -24256;
	// bl 0x82cb0328
	ctx.lr = 0x82577458;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825774e0
	if (ctx.cr6.eq) goto loc_825774E0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82577474
	if (!ctx.cr6.eq) goto loc_82577474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82577474:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-16936
	ctx.r4.s64 = ctx.r11.s64 + -16936;
	// bl 0x82cb0328
	ctx.lr = 0x82577480;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825774d8
	if (ctx.cr6.eq) goto loc_825774D8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257749c
	if (!ctx.cr6.eq) goto loc_8257749C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8257749C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-20168
	ctx.r4.s64 = ctx.r11.s64 + -20168;
	// bl 0x82cb0328
	ctx.lr = 0x825774A8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825774d8
	if (ctx.cr6.eq) goto loc_825774D8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825774c4
	if (!ctx.cr6.eq) goto loc_825774C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825774C4:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24128
	ctx.r4.s64 = ctx.r11.s64 + -24128;
	// bl 0x82cb0328
	ctx.lr = 0x825774D0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825774f4
	if (!ctx.cr6.eq) goto loc_825774F4;
loc_825774D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825774e4
	goto loc_825774E4;
loc_825774E0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_825774E4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82577118
	ctx.lr = 0x825774F0;
	sub_82577118(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_825774F4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822dcf28
	ctx.lr = 0x825774FC;
	sub_822DCF28(ctx, base);
loc_825774FC:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82577544
	if (ctx.cr6.eq) goto loc_82577544;
	// lwz r11,-772(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -772);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82577544
	if (ctx.cr6.eq) goto loc_82577544;
	// lwz r3,112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82577530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82577544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82577544:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82575400
	ctx.lr = 0x82577550;
	sub_82575400(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82577560
	if (!ctx.cr6.eq) goto loc_82577560;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82577564
	if (ctx.cr6.eq) goto loc_82577564;
loc_82577560:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82577564:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257756C"))) PPC_WEAK_FUNC(sub_8257756C);
PPC_FUNC_IMPL(__imp__sub_8257756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577570"))) PPC_WEAK_FUNC(sub_82577570);
PPC_FUNC_IMPL(__imp__sub_82577570) {
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
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825775a4
	if (ctx.cr6.eq) goto loc_825775A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82551b68
	ctx.lr = 0x825775A4;
	sub_82551B68(ctx, base);
loc_825775A4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825775c8
	if (ctx.cr6.eq) goto loc_825775C8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825775C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825775C8:
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

__attribute__((alias("__imp__sub_825775E0"))) PPC_WEAK_FUNC(sub_825775E0);
PPC_FUNC_IMPL(__imp__sub_825775E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x825775E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825754a0
	ctx.lr = 0x825775F4;
	sub_825754A0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82577628
	if (ctx.cr6.eq) goto loc_82577628;
	// addic. r11,r31,-864
	ctx.xer.ca = ctx.r31.u32 > 863;
	ctx.r11.s64 = ctx.r31.s64 + -864;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// bne 0x82577618
	if (!ctx.cr0.eq) goto loc_82577618;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82577618:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825588a0
	ctx.lr = 0x82577624;
	sub_825588A0(ctx, base);
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
loc_82577628:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x8257764C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825776d8
	if (!ctx.cr6.gt) goto loc_825776D8;
	// addi r28,r31,-864
	ctx.r28.s64 = ctx.r31.s64 + -864;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
loc_8257766C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r28,864
	ctx.r11.s64 = ctx.r28.s64 + 864;
	// bne cr6,0x82577684
	if (!ctx.cr6.eq) goto loc_82577684;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82577684:
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
	ctx.lr = 0x825776A8;
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
	ctx.lr = 0x825776C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8257766c
	if (ctx.cr6.lt) goto loc_8257766C;
loc_825776D8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82577714
	if (ctx.cr6.eq) goto loc_82577714;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82577700
	if (!ctx.cr6.eq) goto loc_82577700;
	// bl 0x822900a0
	ctx.lr = 0x825776FC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82577700:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82577714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82577714:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257771C"))) PPC_WEAK_FUNC(sub_8257771C);
PPC_FUNC_IMPL(__imp__sub_8257771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577720"))) PPC_WEAK_FUNC(sub_82577720);
PPC_FUNC_IMPL(__imp__sub_82577720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82577728;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825755a8
	ctx.lr = 0x82577738;
	sub_825755A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e640b8
	ctx.lr = 0x8257774C;
	sub_82E640B8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82577768
	if (ctx.cr6.eq) goto loc_82577768;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24256
	ctx.r4.s64 = ctx.r11.s64 + -24256;
	// b 0x82577770
	goto loc_82577770;
loc_82577768:
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r4,r11,-24128
	ctx.r4.s64 = ctx.r11.s64 + -24128;
loc_82577770:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82427888
	ctx.lr = 0x82577778;
	sub_82427888(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82577790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825b2098
	ctx.lr = 0x8257779C;
	sub_825B2098(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825777b0
	if (!ctx.cr6.eq) goto loc_825777B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x825777b4
	if (ctx.cr6.eq) goto loc_825777B4;
loc_825777B0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_825777B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dcf28
	ctx.lr = 0x825777BC;
	sub_822DCF28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825777C8"))) PPC_WEAK_FUNC(sub_825777C8);
PPC_FUNC_IMPL(__imp__sub_825777C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x825777D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825756f0
	ctx.lr = 0x825777E0;
	sub_825756F0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825778a8
	if (!ctx.cr6.gt) goto loc_825778A8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825778a8
	if (ctx.cr6.eq) goto loc_825778A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82577810
	if (ctx.cr6.eq) goto loc_82577810;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82577830
	goto loc_82577830;
loc_82577810:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257782C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82577830:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16268
	ctx.r4.s64 = ctx.r10.s64 + 16268;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x82577854;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825778a8
	if (!ctx.cr6.eq) goto loc_825778A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825778a8
	if (!ctx.cr6.eq) goto loc_825778A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825778a8
	if (!ctx.cr6.eq) goto loc_825778A8;
	// lwz r11,976(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825778a8
	if (ctx.cr6.eq) goto loc_825778A8;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r29,704
	ctx.r3.s64 = ctx.r29.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x825778A8;
	sub_82586D40(ctx, base);
loc_825778A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825778B0"))) PPC_WEAK_FUNC(sub_825778B0);
PPC_FUNC_IMPL(__imp__sub_825778B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x825778B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825779ec
	if (!ctx.cr6.gt) goto loc_825779EC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825779ec
	if (ctx.cr6.eq) goto loc_825779EC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825778f4
	if (ctx.cr6.eq) goto loc_825778F4;
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// b 0x82577914
	goto loc_82577914;
loc_825778F4:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82577910;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82577914:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16184
	ctx.r4.s64 = ctx.r10.s64 + 16184;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x82577938;
	sub_8233E028(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82577984
	if (!ctx.cr6.eq) goto loc_82577984;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82577984
	if (!ctx.cr6.eq) goto loc_82577984;
	// lwz r11,864(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 864);
	// addi r3,r28,864
	ctx.r3.s64 = ctx.r28.s64 + 864;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82577970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825757d8
	ctx.lr = 0x8257797C;
	sub_825757D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82577984:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16268
	ctx.r4.s64 = ctx.r11.s64 + 16268;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x825779A0;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825779ec
	if (!ctx.cr6.eq) goto loc_825779EC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825779ec
	if (!ctx.cr6.eq) goto loc_825779EC;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825779ec
	if (!ctx.cr6.eq) goto loc_825779EC;
	// lwz r11,976(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825779ec
	if (ctx.cr6.eq) goto loc_825779EC;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r28,704
	ctx.r3.s64 = ctx.r28.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x825779EC;
	sub_82586D40(ctx, base);
loc_825779EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825757d8
	ctx.lr = 0x825779F8;
	sub_825757D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577A00"))) PPC_WEAK_FUNC(sub_82577A00);
PPC_FUNC_IMPL(__imp__sub_82577A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82577A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82577a4c
	if (ctx.cr6.eq) goto loc_82577A4C;
	// addi r11,r31,816
	ctx.r11.s64 = ctx.r31.s64 + 816;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x82577A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82577A4C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cd98
	ctx.lr = 0x82577A5C;
	sub_8256CD98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577A64"))) PPC_WEAK_FUNC(sub_82577A64);
PPC_FUNC_IMPL(__imp__sub_82577A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577A68"))) PPC_WEAK_FUNC(sub_82577A68);
PPC_FUNC_IMPL(__imp__sub_82577A68) {
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
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82577a94
	if (!ctx.cr6.eq) goto loc_82577A94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82577A94:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82577AA4;
	sub_8256D9A0(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82577abc
	if (!ctx.cr6.eq) goto loc_82577ABC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82577ABC:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82577ACC;
	sub_8256D9A0(ctx, base);
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

__attribute__((alias("__imp__sub_82577AE0"))) PPC_WEAK_FUNC(sub_82577AE0);
PPC_FUNC_IMPL(__imp__sub_82577AE0) {
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
	// bl 0x82561b48
	ctx.lr = 0x82577AF8;
	sub_82561B48(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11832
	ctx.r4.s64 = ctx.r11.s64 + -11832;
	// bl 0x822adb18
	ctx.lr = 0x82577B08;
	sub_822ADB18(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-11768
	ctx.r4.s64 = ctx.r10.s64 + -11768;
	// bl 0x822adb18
	ctx.lr = 0x82577B18;
	sub_822ADB18(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-11824
	ctx.r4.s64 = ctx.r9.s64 + -11824;
	// bl 0x822adb18
	ctx.lr = 0x82577B28;
	sub_822ADB18(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-11816
	ctx.r4.s64 = ctx.r8.s64 + -11816;
	// bl 0x822adb18
	ctx.lr = 0x82577B38;
	sub_822ADB18(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-11808
	ctx.r4.s64 = ctx.r7.s64 + -11808;
	// bl 0x822adb18
	ctx.lr = 0x82577B48;
	sub_822ADB18(ctx, base);
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-11800
	ctx.r4.s64 = ctx.r6.s64 + -11800;
	// bl 0x822adb18
	ctx.lr = 0x82577B58;
	sub_822ADB18(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-11792
	ctx.r4.s64 = ctx.r5.s64 + -11792;
	// bl 0x822adb18
	ctx.lr = 0x82577B68;
	sub_822ADB18(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-11784
	ctx.r4.s64 = ctx.r4.s64 + -11784;
	// bl 0x822adb18
	ctx.lr = 0x82577B78;
	sub_822ADB18(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11776
	ctx.r4.s64 = ctx.r11.s64 + -11776;
	// bl 0x822adb18
	ctx.lr = 0x82577B88;
	sub_822ADB18(ctx, base);
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

__attribute__((alias("__imp__sub_82577B9C"))) PPC_WEAK_FUNC(sub_82577B9C);
PPC_FUNC_IMPL(__imp__sub_82577B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577BA0"))) PPC_WEAK_FUNC(sub_82577BA0);
PPC_FUNC_IMPL(__imp__sub_82577BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82577bb4
	if (ctx.cr6.eq) goto loc_82577BB4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x825a1250
	sub_825A1250(ctx, base);
	return;
loc_82577BB4:
	// b 0x8256d3c0
	sub_8256D3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577BB8"))) PPC_WEAK_FUNC(sub_82577BB8);
PPC_FUNC_IMPL(__imp__sub_82577BB8) {
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
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x82577BDC;
	sub_82594938(ctx, base);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82577bf0
	if (ctx.cr6.eq) goto loc_82577BF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a1730
	ctx.lr = 0x82577BF0;
	sub_825A1730(ctx, base);
loc_82577BF0:
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

__attribute__((alias("__imp__sub_82577C08"))) PPC_WEAK_FUNC(sub_82577C08);
PPC_FUNC_IMPL(__imp__sub_82577C08) {
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
	// bl 0x8256d610
	ctx.lr = 0x82577C28;
	sub_8256D610(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82577c4c
	if (ctx.cr6.eq) goto loc_82577C4C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82577C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82577C4C:
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

__attribute__((alias("__imp__sub_82577C64"))) PPC_WEAK_FUNC(sub_82577C64);
PPC_FUNC_IMPL(__imp__sub_82577C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577C68"))) PPC_WEAK_FUNC(sub_82577C68);
PPC_FUNC_IMPL(__imp__sub_82577C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82577C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82577d34
	if (ctx.cr6.eq) goto loc_82577D34;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// lfs f12,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f9,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,268(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82577D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82577D34:
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82577d48
	if (ctx.cr6.eq) goto loc_82577D48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a3168
	ctx.lr = 0x82577D48;
	sub_825A3168(ctx, base);
loc_82577D48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577D50"))) PPC_WEAK_FUNC(sub_82577D50);
PPC_FUNC_IMPL(__imp__sub_82577D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82577D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,864(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82577e58
	if (ctx.cr6.eq) goto loc_82577E58;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,272
	ctx.r31.s64 = ctx.r11.s64 + 272;
	// lwz r30,304(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82577d94
	if (!ctx.cr6.eq) goto loc_82577D94;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82577D94:
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82577e58
	if (!ctx.cr6.lt) goto loc_82577E58;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82577dac
	if (!ctx.cr6.eq) goto loc_82577DAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82577DAC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82577df0
	if (!ctx.cr6.eq) goto loc_82577DF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258c1f0
	ctx.lr = 0x82577DC8;
	sub_8258C1F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82578f30
	ctx.lr = 0x82577DDC;
	sub_82578F30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82577DE4;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82577DF0:
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1c78
	ctx.lr = 0x82577E04;
	sub_822B1C78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1b70
	ctx.lr = 0x82577E18;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822952c8
	ctx.lr = 0x82577E28;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82578f30
	ctx.lr = 0x82577E3C;
	sub_82578F30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82577E44;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82577E4C;
	sub_82299080(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82577E54;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82577E58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577E60"))) PPC_WEAK_FUNC(sub_82577E60);
PPC_FUNC_IMPL(__imp__sub_82577E60) {
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
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82577ea0
	if (ctx.cr6.eq) goto loc_82577EA0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82577ea0
	if (ctx.cr6.eq) goto loc_82577EA0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82577ea0
	if (ctx.cr6.eq) goto loc_82577EA0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82577ec0
	if (!ctx.cr6.eq) goto loc_82577EC0;
loc_82577EA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82577EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82577ed8
	if (!ctx.cr6.eq) goto loc_82577ED8;
loc_82577EC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82566300
	ctx.lr = 0x82577ECC;
	sub_82566300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82577edc
	if (ctx.cr6.eq) goto loc_82577EDC;
loc_82577ED8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82577EDC:
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

__attribute__((alias("__imp__sub_82577EF4"))) PPC_WEAK_FUNC(sub_82577EF4);
PPC_FUNC_IMPL(__imp__sub_82577EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577EF8"))) PPC_WEAK_FUNC(sub_82577EF8);
PPC_FUNC_IMPL(__imp__sub_82577EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82577F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825784ac
	if (ctx.cr6.eq) goto loc_825784AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11832
	ctx.r11.s64 = ctx.r11.s64 + -11832;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825781ac
	if (!ctx.cr6.eq) goto loc_825781AC;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825781ac
	if (!ctx.cr6.eq) goto loc_825781AC;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x825784ac
	if (ctx.cr6.gt) goto loc_825784AC;
	// lis r12,-32169
	ctx.r12.s64 = -2108227584;
	// addi r12,r12,32616
	ctx.r12.s64 = ctx.r12.s64 + 32616;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82577F78;
	case 1:
		goto loc_8257804C;
	case 2:
		goto loc_82577FF0;
	case 3:
		goto loc_8257812C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,32632(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32632);
	// lwz r18,-32692(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -32692);
	// lwz r18,32752(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32752);
	// lwz r18,-32468(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -32468);
loc_82577F78:
	// addi r29,r30,748
	ctx.r29.s64 = ctx.r30.s64 + 748;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82577F88;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82577fc4
	if (ctx.cr6.eq) goto loc_82577FC4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,-18380(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18380);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82577FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82577FC4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822f03d0
	ctx.lr = 0x82577FCC;
	sub_822F03D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82564c58
	ctx.lr = 0x82577FE0;
	sub_82564C58(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82577FF0:
	// addi r29,r30,760
	ctx.r29.s64 = ctx.r30.s64 + 760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x82578000;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257803c
	if (ctx.cr6.eq) goto loc_8257803C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,-18364(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18364);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257803C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257803C:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8257804C:
	// addi r29,r30,772
	ctx.r29.s64 = ctx.r30.s64 + 772;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x8257805C;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578098
	if (ctx.cr6.eq) goto loc_82578098;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,-18372(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18372);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82578098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578098:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82566ca0
	ctx.lr = 0x825780A8;
	sub_82566CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257811c
	if (ctx.cr6.eq) goto loc_8257811C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,784
	ctx.r3.s64 = ctx.r30.s64 + 784;
	// bl 0x8240c6f8
	ctx.lr = 0x825780BC;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825780dc
	if (ctx.cr6.eq) goto loc_825780DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557a38
	ctx.lr = 0x825780D4;
	sub_82557A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82578100
	if (!ctx.cr6.eq) goto loc_82578100;
loc_825780DC:
	// bl 0x822f2228
	ctx.lr = 0x825780E0;
	sub_822F2228(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825656f0
	ctx.lr = 0x82578100;
	sub_825656F0(ctx, base);
loc_82578100:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822f03d0
	ctx.lr = 0x82578108;
	sub_822F03D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82565228
	ctx.lr = 0x8257811C;
	sub_82565228(ctx, base);
loc_8257811C:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8257812C:
	// addi r29,r30,796
	ctx.r29.s64 = ctx.r30.s64 + 796;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x8257813C;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578178
	if (ctx.cr6.eq) goto loc_82578178;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,-18396(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18396);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82578178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578178:
	// bl 0x822f2278
	ctx.lr = 0x8257817C;
	sub_822F2278(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825656f0
	ctx.lr = 0x8257819C;
	sub_825656F0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_825781AC:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825784ac
	if (ctx.cr6.eq) goto loc_825784AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825784ac
	if (ctx.cr6.eq) goto loc_825784AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r3,272
	ctx.r28.s64 = ctx.r3.s64 + 272;
	// addi r11,r11,-11824
	ctx.r11.s64 = ctx.r11.s64 + -11824;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825781ec
	if (!ctx.cr6.eq) goto loc_825781EC;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82578458
	if (ctx.cr6.eq) goto loc_82578458;
loc_825781EC:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257824c
	if (!ctx.cr6.eq) goto loc_8257824C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257824c
	if (!ctx.cr6.eq) goto loc_8257824C;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257823c
	if (!ctx.cr6.gt) goto loc_8257823C;
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x825a4020
	ctx.lr = 0x82578230;
	sub_825A4020(ctx, base);
loc_82578230:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82577d50
	ctx.lr = 0x8257823C;
	sub_82577D50(ctx, base);
loc_8257823C:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8257824C:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11808
	ctx.r11.s64 = ctx.r11.s64 + -11808;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82578274
	if (!ctx.cr6.eq) goto loc_82578274;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82578230
	if (ctx.cr6.eq) goto loc_82578230;
loc_82578274:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11800
	ctx.r11.s64 = ctx.r11.s64 + -11800;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257831c
	if (!ctx.cr6.eq) goto loc_8257831C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257831c
	if (!ctx.cr6.eq) goto loc_8257831C;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578458
	if (!ctx.cr6.gt) goto loc_82578458;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825782C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825782e8
	if (ctx.cr6.eq) goto loc_825782E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825782E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825782E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// bl 0x825a4020
	ctx.lr = 0x825782F4;
	sub_825A4020(ctx, base);
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257830C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8257831C:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11792
	ctx.r11.s64 = ctx.r11.s64 + -11792;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825783d8
	if (!ctx.cr6.eq) goto loc_825783D8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825783d8
	if (!ctx.cr6.eq) goto loc_825783D8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8257835c
	if (!ctx.cr6.eq) goto loc_8257835C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257835C:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82578458
	if (!ctx.cr6.lt) goto loc_82578458;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825783a4
	if (ctx.cr6.eq) goto loc_825783A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825783A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825783A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// bl 0x825a4020
	ctx.lr = 0x825783B0;
	sub_825A4020(ctx, base);
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825783C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_825783D8:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11784
	ctx.r11.s64 = ctx.r11.s64 + -11784;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82578400
	if (!ctx.cr6.eq) goto loc_82578400;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82578438
	if (ctx.cr6.eq) goto loc_82578438;
loc_82578400:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11776
	ctx.r11.s64 = ctx.r11.s64 + -11776;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82578468
	if (!ctx.cr6.eq) goto loc_82578468;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82578468
	if (!ctx.cr6.eq) goto loc_82578468;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8257843c
	if (!ctx.cr6.eq) goto loc_8257843C;
loc_82578438:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8257843C:
	// bl 0x825a4020
	ctx.lr = 0x82578440;
	sub_825A4020(ctx, base);
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578458:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82578468:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-11768
	ctx.r11.s64 = ctx.r11.s64 + -11768;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825784ac
	if (!ctx.cr6.eq) goto loc_825784AC;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825784ac
	if (!ctx.cr6.eq) goto loc_825784AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825784AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825784AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825784B8"))) PPC_WEAK_FUNC(sub_825784B8);
PPC_FUNC_IMPL(__imp__sub_825784B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x825784C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578798
	if (ctx.cr6.eq) goto loc_82578798;
	// lwz r10,908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82578798
	if (!ctx.cr6.eq) goto loc_82578798;
	// lwz r10,912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r30,r11,272
	ctx.r30.s64 = ctx.r11.s64 + 272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82578520
	if (ctx.cr6.eq) goto loc_82578520;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82578518
	if (!ctx.cr6.eq) goto loc_82578518;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82578518:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82578798
	if (!ctx.cr6.lt) goto loc_82578798;
loc_82578520:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578634
	if (ctx.cr6.eq) goto loc_82578634;
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r29,304(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// bne cr6,0x8257855c
	if (!ctx.cr6.eq) goto loc_8257855C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8257855C:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82578598
	if (!ctx.cr6.eq) goto loc_82578598;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82295ff0
	ctx.lr = 0x8257857C;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82578f30
	ctx.lr = 0x82578590;
	sub_82578F30(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x82578614
	goto loc_82578614;
loc_82578598:
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822b1c78
	ctx.lr = 0x825785AC;
	sub_822B1C78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1b70
	ctx.lr = 0x825785C4;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82295ff0
	ctx.lr = 0x825785D4;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822952c8
	ctx.lr = 0x825785E4;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82578f30
	ctx.lr = 0x825785F8;
	sub_82578F30(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82578600;
	sub_82299080(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82578608;
	sub_82299080(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x82578610;
	sub_82299080(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
loc_82578614:
	// bl 0x82299080
	ctx.lr = 0x82578618;
	sub_82299080(ctx, base);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x825a4020
	ctx.lr = 0x82578628;
	sub_825A4020(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82578634:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8257878c
	if (ctx.cr6.eq) goto loc_8257878C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82578688
	if (ctx.cr6.eq) goto loc_82578688;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x82578798
	if (!ctx.cr6.eq) goto loc_82578798;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82578660;
	sub_822960C0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578f30
	ctx.lr = 0x82578674;
	sub_82578F30(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x8257867C;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82578688:
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r29,304(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// bne cr6,0x825786a4
	if (!ctx.cr6.eq) goto loc_825786A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_825786A4:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x825786fc
	if (!ctx.cr6.eq) goto loc_825786FC;
	// bl 0x822960c0
	ctx.lr = 0x825786BC;
	sub_822960C0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822952c8
	ctx.lr = 0x825786CC;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82578f30
	ctx.lr = 0x825786E0;
	sub_82578F30(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82299080
	ctx.lr = 0x825786E8;
	sub_82299080(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x825786F0;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_825786FC:
	// bl 0x822960c0
	ctx.lr = 0x82578700;
	sub_822960C0(ctx, base);
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x822b1c78
	ctx.lr = 0x82578718;
	sub_822B1C78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
	// bl 0x822b1b70
	ctx.lr = 0x82578730;
	sub_822B1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822952c8
	ctx.lr = 0x82578740;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822952c8
	ctx.lr = 0x82578750;
	sub_822952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82578f30
	ctx.lr = 0x82578764;
	sub_82578F30(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x8257876C;
	sub_82299080(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82299080
	ctx.lr = 0x82578774;
	sub_82299080(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82299080
	ctx.lr = 0x8257877C;
	sub_82299080(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82578784;
	sub_82299080(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82299080
	ctx.lr = 0x8257878C;
	sub_82299080(ctx, base);
loc_8257878C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82578798:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825787A4"))) PPC_WEAK_FUNC(sub_825787A4);
PPC_FUNC_IMPL(__imp__sub_825787A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825787A8"))) PPC_WEAK_FUNC(sub_825787A8);
PPC_FUNC_IMPL(__imp__sub_825787A8) {
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
	// lbz r11,916(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 916);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82578880
	if (ctx.cr6.gt) goto loc_82578880;
	// lis r12,-32168
	ctx.r12.s64 = -2108162048;
	// addi r12,r12,-30756
	ctx.r12.s64 = ctx.r12.s64 + -30756;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8257880C;
	case 1:
		goto loc_825787EC;
	case 2:
		goto loc_82578834;
	case 3:
		goto loc_8257884C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-30708(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30708);
	// lwz r18,-30740(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30740);
	// lwz r18,-30668(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30668);
	// lwz r18,-30644(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30644);
loc_825787EC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82cb55e0
	ctx.lr = 0x825787F4;
	sub_82CB55E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8257880C:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82578820
	if (ctx.cr6.lt) goto loc_82578820;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bne cr6,0x8257887c
	if (!ctx.cr6.eq) goto loc_8257887C;
loc_82578820:
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
loc_82578834:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8233cac0
	ctx.lr = 0x8257883C;
	sub_8233CAC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8257884C:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x82578860
	if (ctx.cr6.lt) goto loc_82578860;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x8257887c
	if (!ctx.cr6.gt) goto loc_8257887C;
loc_82578860:
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x8257887c
	if (ctx.cr6.eq) goto loc_8257887C;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x8257887c
	if (ctx.cr6.eq) goto loc_8257887C;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82578880
	if (!ctx.cr6.eq) goto loc_82578880;
loc_8257887C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82578880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578890"))) PPC_WEAK_FUNC(sub_82578890);
PPC_FUNC_IMPL(__imp__sub_82578890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82578898;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578944
	if (ctx.cr6.eq) goto loc_82578944;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x825788bc
	if (!ctx.cr6.eq) goto loc_825788BC;
	// lwz r31,304(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
loc_825788BC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82578944
	if (!ctx.cr6.gt) goto loc_82578944;
	// addi r28,r11,272
	ctx.r28.s64 = ctx.r11.s64 + 272;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82578944
	if (ctx.cr6.eq) goto loc_82578944;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578944
	if (!ctx.cr6.gt) goto loc_82578944;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
	// lhz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// bl 0x8233cac0
	ctx.lr = 0x825788F8;
	sub_8233CAC0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82578904:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82578944
	if (ctx.cr6.lt) goto loc_82578944;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82578944
	if (!ctx.cr6.lt) goto loc_82578944;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x8233cac0
	ctx.lr = 0x82578924;
	sub_8233CAC0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82578938
	if (ctx.cr6.eq) goto loc_82578938;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// b 0x82578904
	goto loc_82578904;
loc_82578938:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82578944:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578950"))) PPC_WEAK_FUNC(sub_82578950);
PPC_FUNC_IMPL(__imp__sub_82578950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82578958;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,864(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82578a24
	if (ctx.cr6.eq) goto loc_82578A24;
	// lwz r11,276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// addi r28,r10,272
	ctx.r28.s64 = ctx.r10.s64 + 272;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82578988
	if (!ctx.cr6.eq) goto loc_82578988;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82578988:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82578994
	if (!ctx.cr6.eq) goto loc_82578994;
	// lwz r30,304(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
loc_82578994:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82578a20
	if (ctx.cr6.eq) goto loc_82578A20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578a20
	if (!ctx.cr6.gt) goto loc_82578A20;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x825789c0
	if (!ctx.cr6.eq) goto loc_825789C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825789C0:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82578a20
	if (!ctx.cr6.lt) goto loc_82578A20;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8233cac0
	ctx.lr = 0x825789DC;
	sub_8233CAC0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825789E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82578a20
	if (ctx.cr6.lt) goto loc_82578A20;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82578a20
	if (!ctx.cr6.lt) goto loc_82578A20;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x8233cac0
	ctx.lr = 0x82578A00;
	sub_8233CAC0(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82578a14
	if (ctx.cr6.eq) goto loc_82578A14;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x825789e4
	goto loc_825789E4;
loc_82578A14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82578A20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82578A24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578A2C"))) PPC_WEAK_FUNC(sub_82578A2C);
PPC_FUNC_IMPL(__imp__sub_82578A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578A30"))) PPC_WEAK_FUNC(sub_82578A30);
PPC_FUNC_IMPL(__imp__sub_82578A30) {
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
	// bl 0x82563b40
	ctx.lr = 0x82578A48;
	sub_82563B40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578A5C;
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

__attribute__((alias("__imp__sub_82578A70"))) PPC_WEAK_FUNC(sub_82578A70);
PPC_FUNC_IMPL(__imp__sub_82578A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82578A90"))) PPC_WEAK_FUNC(sub_82578A90);
PPC_FUNC_IMPL(__imp__sub_82578A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578A94"))) PPC_WEAK_FUNC(sub_82578A94);
PPC_FUNC_IMPL(__imp__sub_82578A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578A98"))) PPC_WEAK_FUNC(sub_82578A98);
PPC_FUNC_IMPL(__imp__sub_82578A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82578AA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82578ac0
	if (!ctx.cr6.eq) goto loc_82578AC0;
	// bl 0x82567278
	ctx.lr = 0x82578ABC;
	sub_82567278(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82578AC0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256caa0
	ctx.lr = 0x82578AD0;
	sub_8256CAA0(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578afc
	if (ctx.cr6.eq) goto loc_82578AFC;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82578b04
	goto loc_82578B04;
loc_82578AFC:
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// bl 0x82294bb8
	ctx.lr = 0x82578B04;
	sub_82294BB8(ctx, base);
loc_82578B04:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r5,-29052(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29052);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82578b3c
	if (!ctx.cr6.eq) goto loc_82578B3C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825bef80
	ctx.lr = 0x82578B30;
	sub_825BEF80(ctx, base);
	// stw r3,-29052(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29052, ctx.r3.u32);
	// bl 0x825bf040
	ctx.lr = 0x82578B38;
	sub_825BF040(ctx, base);
	// lwz r5,-29052(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29052);
loc_82578B3C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825656f0
	ctx.lr = 0x82578B58;
	sub_825656F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578c14
	if (!ctx.cr6.gt) goto loc_82578C14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r24,r11,8052
	ctx.r24.s64 = ctx.r11.s64 + 8052;
loc_82578B78:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x824adb90
	ctx.lr = 0x82578B98;
	sub_824ADB90(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82578bc4
	if (!ctx.cr6.gt) goto loc_82578BC4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82578BAC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82295908
	ctx.lr = 0x82578BB8;
	sub_82295908(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82578bac
	if (!ctx.cr0.eq) goto loc_82578BAC;
loc_82578BC4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82578bf4
	if (ctx.cr6.eq) goto loc_82578BF4;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82578be0
	if (!ctx.cr6.eq) goto loc_82578BE0;
	// bl 0x822900a0
	ctx.lr = 0x82578BDC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82578BE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578BF4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// blt cr6,0x82578b78
	if (ctx.cr6.lt) goto loc_82578B78;
loc_82578C14:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578c4c
	if (ctx.cr6.eq) goto loc_82578C4C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82578c38
	if (!ctx.cr6.eq) goto loc_82578C38;
	// bl 0x822900a0
	ctx.lr = 0x82578C34;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82578C38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578C4C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// beq cr6,0x82578cb4
	if (ctx.cr6.eq) goto loc_82578CB4;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578cec
	if (ctx.cr6.eq) goto loc_82578CEC;
	// lwz r11,28888(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82578c90
	if (!ctx.cr6.eq) goto loc_82578C90;
	// bl 0x822900a0
	ctx.lr = 0x82578C8C;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82578C90:
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
	ctx.lr = 0x82578CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82578CB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578cec
	if (ctx.cr6.eq) goto loc_82578CEC;
	// lwz r11,28888(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82578cd4
	if (!ctx.cr6.eq) goto loc_82578CD4;
	// bl 0x822900a0
	ctx.lr = 0x82578CD0;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82578CD4:
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
	ctx.lr = 0x82578CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578CEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578CF4"))) PPC_WEAK_FUNC(sub_82578CF4);
PPC_FUNC_IMPL(__imp__sub_82578CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578CF8"))) PPC_WEAK_FUNC(sub_82578CF8);
PPC_FUNC_IMPL(__imp__sub_82578CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82578D00;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bne cr6,0x82578d24
	if (!ctx.cr6.eq) goto loc_82578D24;
	// bl 0x82567278
	ctx.lr = 0x82578D20;
	sub_82567278(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82578D24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,920
	ctx.r3.s64 = ctx.r30.s64 + 920;
	// bl 0x8240c6f8
	ctx.lr = 0x82578D30;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578d4c
	if (ctx.cr6.eq) goto loc_82578D4C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255a3b0
	ctx.lr = 0x82578D48;
	sub_8255A3B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82578D4C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// lwz r5,-29032(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29032);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82578d80
	if (!ctx.cr6.eq) goto loc_82578D80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825bfa70
	ctx.lr = 0x82578D74;
	sub_825BFA70(ctx, base);
	// stw r3,-29032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29032, ctx.r3.u32);
	// bl 0x825bfb30
	ctx.lr = 0x82578D7C;
	sub_825BFB30(ctx, base);
	// lwz r5,-29032(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29032);
loc_82578D80:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825656f0
	ctx.lr = 0x82578D9C;
	sub_825656F0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578e04
	if (!ctx.cr6.gt) goto loc_82578E04;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82578DB0:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// lwzx r31,r29,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82295908
	ctx.lr = 0x82578DC8;
	sub_82295908(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,324(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82578DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,268(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82578df0
	if (ctx.cr6.eq) goto loc_82578DF0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82578DF0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82578db0
	if (ctx.cr6.lt) goto loc_82578DB0;
loc_82578E04:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82578ed4
	if (ctx.cr6.eq) goto loc_82578ED4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x82578E20;
	sub_822960C0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82578f30
	ctx.lr = 0x82578E34;
	sub_82578F30(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82578e90
	if (ctx.cr6.eq) goto loc_82578E90;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578ec8
	if (ctx.cr6.eq) goto loc_82578EC8;
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82578e6c
	if (!ctx.cr6.eq) goto loc_82578E6C;
	// bl 0x822900a0
	ctx.lr = 0x82578E68;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82578E6C:
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
	ctx.lr = 0x82578E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82578E90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578ec8
	if (ctx.cr6.eq) goto loc_82578EC8;
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82578eb0
	if (!ctx.cr6.eq) goto loc_82578EB0;
	// bl 0x822900a0
	ctx.lr = 0x82578EAC;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82578EB0:
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
	ctx.lr = 0x82578EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578EC8:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
loc_82578ED4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578f0c
	if (ctx.cr6.eq) goto loc_82578F0C;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82578ef8
	if (!ctx.cr6.eq) goto loc_82578EF8;
	// bl 0x822900a0
	ctx.lr = 0x82578EF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82578EF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578F0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578F14"))) PPC_WEAK_FUNC(sub_82578F14);
PPC_FUNC_IMPL(__imp__sub_82578F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578F18"))) PPC_WEAK_FUNC(sub_82578F18);
PPC_FUNC_IMPL(__imp__sub_82578F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578F28"))) PPC_WEAK_FUNC(sub_82578F28);
PPC_FUNC_IMPL(__imp__sub_82578F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578F2C"))) PPC_WEAK_FUNC(sub_82578F2C);
PPC_FUNC_IMPL(__imp__sub_82578F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578F30"))) PPC_WEAK_FUNC(sub_82578F30);
PPC_FUNC_IMPL(__imp__sub_82578F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82578F38;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579020
	if (ctx.cr6.eq) goto loc_82579020;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,268(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82578F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82578fd4
	if (!ctx.cr6.eq) goto loc_82578FD4;
	// lwz r4,864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82578FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361f10
	ctx.lr = 0x82578FC8;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82578fd8
	if (!ctx.cr6.eq) goto loc_82578FD8;
loc_82578FD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82578FD8:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82578ff0
	if (ctx.cr6.eq) goto loc_82578FF0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82578FF0;
	sub_82299080(ctx, base);
loc_82578FF0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579018
	if (ctx.cr6.eq) goto loc_82579018;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579018:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82579020;
	sub_82299080(ctx, base);
loc_82579020:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579028"))) PPC_WEAK_FUNC(sub_82579028);
PPC_FUNC_IMPL(__imp__sub_82579028) {
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
	// lwz r11,864(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 864);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579060
	if (ctx.cr6.eq) goto loc_82579060;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257905C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82579068
	goto loc_82579068;
loc_82579060:
	// addi r4,r4,832
	ctx.r4.s64 = ctx.r4.s64 + 832;
	// bl 0x82294bb8
	ctx.lr = 0x82579068;
	sub_82294BB8(ctx, base);
loc_82579068:
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

__attribute__((alias("__imp__sub_82579080"))) PPC_WEAK_FUNC(sub_82579080);
PPC_FUNC_IMPL(__imp__sub_82579080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82579088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f10
	ctx.lr = 0x825790A4;
	sub_82361F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825790d0
	if (ctx.cr6.eq) goto loc_825790D0;
	// lwz r11,-816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -816);
	// addi r3,r31,-816
	ctx.r3.s64 = ctx.r31.s64 + -816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825790C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bbe90
	ctx.lr = 0x825790D0;
	sub_822BBE90(ctx, base);
loc_825790D0:
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
	ctx.lr = 0x825790E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825790F0"))) PPC_WEAK_FUNC(sub_825790F0);
PPC_FUNC_IMPL(__imp__sub_825790F0) {
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
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294bb8
	ctx.lr = 0x8257910C;
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

__attribute__((alias("__imp__sub_82579124"))) PPC_WEAK_FUNC(sub_82579124);
PPC_FUNC_IMPL(__imp__sub_82579124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579128"))) PPC_WEAK_FUNC(sub_82579128);
PPC_FUNC_IMPL(__imp__sub_82579128) {
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
	// addic. r11,r31,-816
	ctx.xer.ca = ctx.r31.u32 > 815;
	ctx.r11.s64 = ctx.r31.s64 + -816;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// bne 0x82579158
	if (!ctx.cr0.eq) goto loc_82579158;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82579158:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825b1d70
	ctx.lr = 0x82579168;
	sub_825B1D70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825791c0
	if (ctx.cr6.eq) goto loc_825791C0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825791c0
	if (ctx.cr6.eq) goto loc_825791C0;
	// lwz r11,-724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -724);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825791c0
	if (ctx.cr6.eq) goto loc_825791C0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825791A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825791B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825791c4
	goto loc_825791C4;
loc_825791C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825791C4:
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

__attribute__((alias("__imp__sub_825791DC"))) PPC_WEAK_FUNC(sub_825791DC);
PPC_FUNC_IMPL(__imp__sub_825791DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825791E0"))) PPC_WEAK_FUNC(sub_825791E0);
PPC_FUNC_IMPL(__imp__sub_825791E0) {
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
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579214
	if (ctx.cr6.eq) goto loc_82579214;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82551b68
	ctx.lr = 0x82579214;
	sub_82551B68(ctx, base);
loc_82579214:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579238
	if (ctx.cr6.eq) goto loc_82579238;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579238:
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

__attribute__((alias("__imp__sub_82579250"))) PPC_WEAK_FUNC(sub_82579250);
PPC_FUNC_IMPL(__imp__sub_82579250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82579258;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82579294
	if (ctx.cr6.eq) goto loc_82579294;
	// addic. r11,r31,-816
	ctx.xer.ca = ctx.r31.u32 > 815;
	ctx.r11.s64 = ctx.r31.s64 + -816;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// bne 0x82579284
	if (!ctx.cr0.eq) goto loc_82579284;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82579284:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825588a0
	ctx.lr = 0x82579290;
	sub_825588A0(ctx, base);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
loc_82579294:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x825792B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82579344
	if (!ctx.cr6.gt) goto loc_82579344;
	// addi r28,r31,-816
	ctx.r28.s64 = ctx.r31.s64 + -816;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
loc_825792D8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r28,816
	ctx.r11.s64 = ctx.r28.s64 + 816;
	// bne cr6,0x825792f0
	if (!ctx.cr6.eq) goto loc_825792F0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_825792F0:
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
	ctx.lr = 0x82579314;
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
	ctx.lr = 0x82579330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825792d8
	if (ctx.cr6.lt) goto loc_825792D8;
loc_82579344:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579380
	if (ctx.cr6.eq) goto loc_82579380;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8257936c
	if (!ctx.cr6.eq) goto loc_8257936C;
	// bl 0x822900a0
	ctx.lr = 0x82579368;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8257936C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579380:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579388"))) PPC_WEAK_FUNC(sub_82579388);
PPC_FUNC_IMPL(__imp__sub_82579388) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e640b8
	ctx.lr = 0x825793B4;
	sub_82E640B8(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r31,-816
	ctx.r11.s64 = ctx.r31.s64 + -816;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x825793e4
	if (ctx.cr6.eq) goto loc_825793E4;
	// lwz r4,864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825793E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825793ec
	goto loc_825793EC;
loc_825793E4:
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// bl 0x82294bb8
	ctx.lr = 0x825793EC;
	sub_82294BB8(ctx, base);
loc_825793EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822bbe90
	ctx.lr = 0x825793F8;
	sub_822BBE90(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82579420
	if (ctx.cr6.eq) goto loc_82579420;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82579420;
	sub_82294520(ctx, base);
loc_82579420:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82579428;
	sub_82294CC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825b2098
	ctx.lr = 0x8257944C;
	sub_825B2098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822dcf28
	ctx.lr = 0x82579458;
	sub_822DCF28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82579474"))) PPC_WEAK_FUNC(sub_82579474);
PPC_FUNC_IMPL(__imp__sub_82579474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579478"))) PPC_WEAK_FUNC(sub_82579478);
PPC_FUNC_IMPL(__imp__sub_82579478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82579480;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8229b318
	ctx.lr = 0x82579490;
	sub_8229B318(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825795a4
	if (!ctx.cr6.gt) goto loc_825795A4;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825795a4
	if (ctx.cr6.eq) goto loc_825795A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825794c0
	if (ctx.cr6.eq) goto loc_825794C0;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x825794e0
	goto loc_825794E0;
loc_825794C0:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x825794DC;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_825794E0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15968
	ctx.r4.s64 = ctx.r10.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x82579504;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8257953c
	if (!ctx.cr6.eq) goto loc_8257953C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257953c
	if (!ctx.cr6.eq) goto loc_8257953C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825795a4
	if (!ctx.cr6.eq) goto loc_825795A4;
	// lwz r11,868(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 868);
	// b 0x82579584
	goto loc_82579584;
loc_8257953C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15380
	ctx.r4.s64 = ctx.r11.s64 + 15380;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82579558;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825795a4
	if (!ctx.cr6.eq) goto loc_825795A4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825795a4
	if (!ctx.cr6.eq) goto loc_825795A4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825795a4
	if (!ctx.cr6.eq) goto loc_825795A4;
	// lwz r11,864(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 864);
loc_82579584:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825795a4
	if (ctx.cr6.eq) goto loc_825795A4;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r27,704
	ctx.r3.s64 = ctx.r27.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x825795A4;
	sub_82586D40(ctx, base);
loc_825795A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825795AC"))) PPC_WEAK_FUNC(sub_825795AC);
PPC_FUNC_IMPL(__imp__sub_825795AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825795B0"))) PPC_WEAK_FUNC(sub_825795B0);
PPC_FUNC_IMPL(__imp__sub_825795B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x825795B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82579b54
	if (!ctx.cr6.gt) goto loc_82579B54;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r27,r11,-19580
	ctx.r27.s64 = ctx.r11.s64 + -19580;
	// beq cr6,0x825795fc
	if (ctx.cr6.eq) goto loc_825795FC;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// b 0x82579618
	goto loc_82579618;
loc_825795FC:
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
	ctx.lr = 0x82579614;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82579618:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15424
	ctx.r4.s64 = ctx.r10.s64 + 15424;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257963C;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82579774
	if (!ctx.cr6.eq) goto loc_82579774;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82579774
	if (!ctx.cr6.eq) goto loc_82579774;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825796d0
	if (ctx.cr6.eq) goto loc_825796D0;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825796d0
	if (ctx.cr6.eq) goto loc_825796D0;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825796bc
	if (!ctx.cr6.eq) goto loc_825796BC;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825796bc
	if (!ctx.cr6.eq) goto loc_825796BC;
	// lbz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825796d0
	if (ctx.cr6.eq) goto loc_825796D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825796d0
	if (ctx.cr6.eq) goto loc_825796D0;
loc_825796BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825796D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825796D0:
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825796e8
	if (ctx.cr6.eq) goto loc_825796E8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82579b54
	if (!ctx.cr6.eq) goto loc_82579B54;
loc_825796E8:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r4,r31,896
	ctx.r4.s64 = ctx.r31.s64 + 896;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578f30
	ctx.lr = 0x82579714;
	sub_82578F30(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8257974c
	if (!ctx.cr6.eq) goto loc_8257974C;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8257974c
	if (!ctx.cr6.eq) goto loc_8257974C;
	// lbz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
loc_8257974C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257976C;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82579774:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16328
	ctx.r4.s64 = ctx.r11.s64 + 16328;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82579790;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82579840
	if (!ctx.cr6.eq) goto loc_82579840;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82579840
	if (!ctx.cr6.eq) goto loc_82579840;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825797cc
	if (ctx.cr6.eq) goto loc_825797CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82579b54
	if (!ctx.cr6.eq) goto loc_82579B54;
loc_825797CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,896
	ctx.r4.s64 = ctx.r31.s64 + 896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578f30
	ctx.lr = 0x825797E0;
	sub_82578F30(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82579818
	if (!ctx.cr6.eq) goto loc_82579818;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82579818
	if (!ctx.cr6.eq) goto loc_82579818;
	// lbz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
loc_82579818:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257982C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x82579838;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82579840:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15968
	ctx.r4.s64 = ctx.r11.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257985C;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825799b8
	if (!ctx.cr6.eq) goto loc_825799B8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825799b8
	if (!ctx.cr6.eq) goto loc_825799B8;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8257995c
	if (!ctx.cr6.eq) goto loc_8257995C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258aea8
	ctx.lr = 0x82579898;
	sub_8258AEA8(ctx, base);
	// lwz r11,868(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825798bc
	if (ctx.cr6.eq) goto loc_825798BC;
	// lwz r10,868(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r8,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r8.u32);
	// b 0x825798ec
	goto loc_825798EC;
loc_825798BC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16020
	ctx.r4.s64 = ctx.r11.s64 + 16020;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x825798D8;
	sub_8233E028(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
loc_825798EC:
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82579904
	if (!ctx.cr6.eq) goto loc_82579904;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82579904:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82579914;
	sub_8256D9A0(ctx, base);
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579940
	if (ctx.cr6.eq) goto loc_82579940;
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x825a0470
	ctx.lr = 0x8257992C;
	sub_825A0470(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x82579938;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82579940:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a0470
	ctx.lr = 0x82579948;
	sub_825A0470(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x82579954;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8257995C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15560
	ctx.r4.s64 = ctx.r11.s64 + 15560;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x82579980;
	sub_8233E028(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82579b54
	if (!ctx.cr6.eq) goto loc_82579B54;
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
	ctx.lr = 0x825799A4;
	sub_8233E028(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x825799B0;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_825799B8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15380
	ctx.r4.s64 = ctx.r11.s64 + 15380;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x825799D4;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82579b54
	if (!ctx.cr6.eq) goto loc_82579B54;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82579b54
	if (!ctx.cr6.eq) goto loc_82579B54;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82579b54
	if (!ctx.cr6.eq) goto loc_82579B54;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579b54
	if (ctx.cr6.eq) goto loc_82579B54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258aea8
	ctx.lr = 0x82579A10;
	sub_8258AEA8(ctx, base);
	// lwz r11,864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579a30
	if (ctx.cr6.eq) goto loc_82579A30;
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r9,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r9.u32);
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r8,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r8.u32);
loc_82579A30:
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x82579a48
	if (!ctx.cr6.eq) goto loc_82579A48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82579A48:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x82579A58;
	sub_8256D9A0(ctx, base);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r30,r31,816
	ctx.r30.s64 = ctx.r31.s64 + 816;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82579acc
	if (ctx.cr0.lt) goto loc_82579ACC;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82579AAC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82579ac8
	if (!ctx.cr6.eq) goto loc_82579AC8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82579aac
	if (!ctx.cr0.lt) goto loc_82579AAC;
	// b 0x82579acc
	goto loc_82579ACC;
loc_82579AC8:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82579ACC:
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,352(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,72(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82579b34
	if (ctx.cr0.lt) goto loc_82579B34;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82579B14:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82579b30
	if (!ctx.cr6.eq) goto loc_82579B30;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82579b14
	if (!ctx.cr0.lt) goto loc_82579B14;
	// b 0x82579b34
	goto loc_82579B34;
loc_82579B30:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82579B34:
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// bl 0x825a45b8
	ctx.lr = 0x82579B3C;
	sub_825A45B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579B54:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x82579B60;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579B68"))) PPC_WEAK_FUNC(sub_82579B68);
PPC_FUNC_IMPL(__imp__sub_82579B68) {
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
	// bl 0x8256f588
	ctx.lr = 0x82579B80;
	sub_8256F588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x82579B88;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,424
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 424, ctx.xer);
	// bge cr6,0x82579c64
	if (!ctx.cr6.lt) goto loc_82579C64;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// addi r3,r31,872
	ctx.r3.s64 = ctx.r31.s64 + 872;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579bb0
	if (ctx.cr6.eq) goto loc_82579BB0;
	// addi r5,r31,372
	ctx.r5.s64 = ctx.r31.s64 + 372;
	// lwz r6,868(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// addi r4,r31,876
	ctx.r4.s64 = ctx.r31.s64 + 876;
	// bl 0x82574730
	ctx.lr = 0x82579BB0;
	sub_82574730(ctx, base);
loc_82579BB0:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r10,r31,384
	ctx.r10.s64 = ctx.r31.s64 + 384;
	// lwz r9,392(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r8,388(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// or r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r6,384(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82579c64
	if (ctx.cr6.eq) goto loc_82579C64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r9,r31,372
	ctx.r9.s64 = ctx.r31.s64 + 372;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r9,12
	ctx.r3.s64 = ctx.r9.s64 + 12;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,376(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,380(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r7,388(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,392(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r7,400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
loc_82579C64:
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

__attribute__((alias("__imp__sub_82579C78"))) PPC_WEAK_FUNC(sub_82579C78);
PPC_FUNC_IMPL(__imp__sub_82579C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256cd98
	sub_8256CD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579C7C"))) PPC_WEAK_FUNC(sub_82579C7C);
PPC_FUNC_IMPL(__imp__sub_82579C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579C80"))) PPC_WEAK_FUNC(sub_82579C80);
PPC_FUNC_IMPL(__imp__sub_82579C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82579C88;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579cb8
	if (ctx.cr6.eq) goto loc_82579CB8;
	// rotlwi r22,r11,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r23,868(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 868);
	// b 0x82579ccc
	goto loc_82579CCC;
loc_82579CB8:
	// lwz r11,820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579f74
	if (ctx.cr6.eq) goto loc_82579F74;
	// rotlwi r22,r11,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r23,864(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 864);
loc_82579CCC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82579f74
	if (ctx.cr6.eq) goto loc_82579F74;
	// lwz r11,828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82579f74
	if (ctx.cr6.eq) goto loc_82579F74;
	// lis r31,-31906
	ctx.r31.s64 = -2090991616;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,19204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19204);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82579d2c
	if (!ctx.cr6.eq) goto loc_82579D2C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16392
	ctx.r4.s64 = ctx.r11.s64 + 16392;
	// bl 0x822960c0
	ctx.lr = 0x82579D08;
	sub_822960C0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82579d1c
	if (!ctx.cr6.eq) goto loc_82579D1C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82579D1C:
	// stw r11,19204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19204, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82579D28;
	sub_82299080(ctx, base);
	// lwz r10,19204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19204);
loc_82579D2C:
	// lwz r26,128(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r25,64(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lfs f31,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// addic. r27,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r27.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble 0x82579da0
	if (!ctx.cr0.gt) goto loc_82579DA0;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82579D58:
	// lwz r28,60(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82cb0ec8
	ctx.lr = 0x82579D78;
	sub_82CB0EC8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82579da0
	if (ctx.cr6.lt) goto loc_82579DA0;
	// lwzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// blt cr6,0x82579d58
	if (ctx.cr6.lt) goto loc_82579D58;
loc_82579DA0:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// ble cr6,0x82579de0
	if (!ctx.cr6.gt) goto loc_82579DE0;
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b2a20
	ctx.lr = 0x82579DE0;
	sub_822B2A20(ctx, base);
loc_82579DE0:
	// lwz r10,128(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lfs f30,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r24,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r24.u8);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r11.u8);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x822b1b70
	ctx.lr = 0x82579E44;
	sub_822B1B70(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82579e58
	if (ctx.cr6.eq) goto loc_82579E58;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82579e60
	goto loc_82579E60;
loc_82579E58:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82579E60:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825ad6e0
	ctx.lr = 0x82579E6C;
	sub_825AD6E0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82579e90
	if (ctx.cr6.eq) goto loc_82579E90;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82579E90;
	sub_82294520(ctx, base);
loc_82579E90:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579ecc
	if (ctx.cr6.eq) goto loc_82579ECC;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82579eb8
	if (!ctx.cr6.eq) goto loc_82579EB8;
	// bl 0x822900a0
	ctx.lr = 0x82579EB4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82579EB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579ECC:
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// lfs f13,496(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,128(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// lfs f12,500(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 500);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,476(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 476);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// addi r6,r10,11744
	ctx.r6.s64 = ctx.r10.s64 + 11744;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// addi r8,r11,72
	ctx.r8.s64 = ctx.r11.s64 + 72;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f2,f10,f29
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// bl 0x8242cb78
	ctx.lr = 0x82579F1C;
	sub_8242CB78(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82579f40
	if (ctx.cr6.eq) goto loc_82579F40;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82579F40;
	sub_82294520(ctx, base);
loc_82579F40:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82579f74
	if (ctx.cr6.eq) goto loc_82579F74;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82579f60
	if (!ctx.cr6.eq) goto loc_82579F60;
	// bl 0x822900a0
	ctx.lr = 0x82579F5C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82579F60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82579F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579F74:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579F88"))) PPC_WEAK_FUNC(sub_82579F88);
PPC_FUNC_IMPL(__imp__sub_82579F88) {
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
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x82579FAC;
	sub_82594938(ctx, base);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82579fc0
	if (ctx.cr6.eq) goto loc_82579FC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a8e20
	ctx.lr = 0x82579FC0;
	sub_825A8E20(ctx, base);
loc_82579FC0:
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

__attribute__((alias("__imp__sub_82579FD8"))) PPC_WEAK_FUNC(sub_82579FD8);
PPC_FUNC_IMPL(__imp__sub_82579FD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256f630
	sub_8256F630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579FDC"))) PPC_WEAK_FUNC(sub_82579FDC);
PPC_FUNC_IMPL(__imp__sub_82579FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579FE0"))) PPC_WEAK_FUNC(sub_82579FE0);
PPC_FUNC_IMPL(__imp__sub_82579FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256f728
	sub_8256F728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579FE4"))) PPC_WEAK_FUNC(sub_82579FE4);
PPC_FUNC_IMPL(__imp__sub_82579FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579FE8"))) PPC_WEAK_FUNC(sub_82579FE8);
PPC_FUNC_IMPL(__imp__sub_82579FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579FF8"))) PPC_WEAK_FUNC(sub_82579FF8);
PPC_FUNC_IMPL(__imp__sub_82579FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579FFC"))) PPC_WEAK_FUNC(sub_82579FFC);
PPC_FUNC_IMPL(__imp__sub_82579FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A000"))) PPC_WEAK_FUNC(sub_8257A000);
PPC_FUNC_IMPL(__imp__sub_8257A000) {
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
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x8257a024
	if (!ctx.cr6.eq) goto loc_8257A024;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257A024:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8256d9a0
	ctx.lr = 0x8257A030;
	sub_8256D9A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A040"))) PPC_WEAK_FUNC(sub_8257A040);
PPC_FUNC_IMPL(__imp__sub_8257A040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a10c
	if (ctx.cr6.eq) goto loc_8257A10C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// lfs f12,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f9,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f13,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r31,268(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8257A10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257A10C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A120"))) PPC_WEAK_FUNC(sub_8257A120);
PPC_FUNC_IMPL(__imp__sub_8257A120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257A128;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8229b318
	ctx.lr = 0x8257A138;
	sub_8229B318(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257a200
	if (!ctx.cr6.gt) goto loc_8257A200;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257a200
	if (ctx.cr6.eq) goto loc_8257A200;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8257a168
	if (ctx.cr6.eq) goto loc_8257A168;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8257a188
	goto loc_8257A188;
loc_8257A168:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257A184;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8257A188:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15968
	ctx.r4.s64 = ctx.r10.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257A1AC;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257a200
	if (!ctx.cr6.eq) goto loc_8257A200;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257a200
	if (!ctx.cr6.eq) goto loc_8257A200;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257a200
	if (!ctx.cr6.eq) goto loc_8257A200;
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a200
	if (ctx.cr6.eq) goto loc_8257A200;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r29,704
	ctx.r3.s64 = ctx.r29.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x8257A200;
	sub_82586D40(ctx, base);
loc_8257A200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A208"))) PPC_WEAK_FUNC(sub_8257A208);
PPC_FUNC_IMPL(__imp__sub_8257A208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8257A210;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257a3e4
	if (!ctx.cr6.gt) goto loc_8257A3E4;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257a3e4
	if (ctx.cr6.eq) goto loc_8257A3E4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r28,r11,-19580
	ctx.r28.s64 = ctx.r11.s64 + -19580;
	// beq cr6,0x8257a254
	if (ctx.cr6.eq) goto loc_8257A254;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8257a270
	goto loc_8257A270;
loc_8257A254:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257A26C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8257A270:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15968
	ctx.r4.s64 = ctx.r10.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257A294;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257a3e4
	if (!ctx.cr6.eq) goto loc_8257A3E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257a3e4
	if (!ctx.cr6.eq) goto loc_8257A3E4;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8257a39c
	if (!ctx.cr6.eq) goto loc_8257A39C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a3e4
	if (ctx.cr6.eq) goto loc_8257A3E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258af30
	ctx.lr = 0x8257A2D8;
	sub_8258AF30(ctx, base);
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a2fc
	if (ctx.cr6.eq) goto loc_8257A2FC;
	// lwz r10,832(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r8,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r8.u32);
	// b 0x8257a32c
	goto loc_8257A32C;
loc_8257A2FC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16400
	ctx.r4.s64 = ctx.r11.s64 + 16400;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257A318;
	sub_8233E028(ctx, base);
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
loc_8257A32C:
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x8257a344
	if (!ctx.cr6.eq) goto loc_8257A344;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257A344:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x8257A354;
	sub_8256D9A0(ctx, base);
	// lwz r3,832(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a380
	if (ctx.cr6.eq) goto loc_8257A380;
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x825a0470
	ctx.lr = 0x8257A36C;
	sub_825A0470(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257A378;
	sub_8256F728(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8257A380:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a0470
	ctx.lr = 0x8257A388;
	sub_825A0470(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257A394;
	sub_8256F728(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8257A39C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a3e4
	if (ctx.cr6.eq) goto loc_8257A3E4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15560
	ctx.r4.s64 = ctx.r11.s64 + 15560;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257A3C0;
	sub_8233E028(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8257a3e4
	if (!ctx.cr6.eq) goto loc_8257A3E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257A3E4;
	sub_8233E028(ctx, base);
loc_8257A3E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257A3F0;
	sub_8256F728(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A3F8"))) PPC_WEAK_FUNC(sub_8257A3F8);
PPC_FUNC_IMPL(__imp__sub_8257A3F8) {
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
	// bl 0x8256f588
	ctx.lr = 0x8257A410;
	sub_8256F588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x8257A418;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,424
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 424, ctx.xer);
	// bge cr6,0x8257a440
	if (!ctx.cr6.lt) goto loc_8257A440;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// addi r3,r31,836
	ctx.r3.s64 = ctx.r31.s64 + 836;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a440
	if (ctx.cr6.eq) goto loc_8257A440;
	// addi r5,r31,372
	ctx.r5.s64 = ctx.r31.s64 + 372;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r4,r31,840
	ctx.r4.s64 = ctx.r31.s64 + 840;
	// bl 0x82574730
	ctx.lr = 0x8257A440;
	sub_82574730(ctx, base);
loc_8257A440:
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

__attribute__((alias("__imp__sub_8257A454"))) PPC_WEAK_FUNC(sub_8257A454);
PPC_FUNC_IMPL(__imp__sub_8257A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A458"))) PPC_WEAK_FUNC(sub_8257A458);
PPC_FUNC_IMPL(__imp__sub_8257A458) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A478"))) PPC_WEAK_FUNC(sub_8257A478);
PPC_FUNC_IMPL(__imp__sub_8257A478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A47C"))) PPC_WEAK_FUNC(sub_8257A47C);
PPC_FUNC_IMPL(__imp__sub_8257A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A480"))) PPC_WEAK_FUNC(sub_8257A480);
PPC_FUNC_IMPL(__imp__sub_8257A480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8257A488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r30,r28,832
	ctx.r30.s64 = ctx.r28.s64 + 832;
loc_8257A498:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8257a4b0
	if (!ctx.cr6.eq) goto loc_8257A4B0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257A4B0:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a4e8
	if (ctx.cr6.eq) goto loc_8257A4E8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257a4e8
	if (ctx.cr6.eq) goto loc_8257A4E8;
	// addi r31,r28,704
	ctx.r31.s64 = ctx.r28.s64 + 704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586c38
	ctx.lr = 0x8257A4D4;
	sub_82586C38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8257a4e8
	if (!ctx.cr6.eq) goto loc_8257A4E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586ca8
	ctx.lr = 0x8257A4E8;
	sub_82586CA8(ctx, base);
loc_8257A4E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8257a498
	if (!ctx.cr0.eq) goto loc_8257A498;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4FC"))) PPC_WEAK_FUNC(sub_8257A4FC);
PPC_FUNC_IMPL(__imp__sub_8257A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A500"))) PPC_WEAK_FUNC(sub_8257A500);
PPC_FUNC_IMPL(__imp__sub_8257A500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8257A508;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae8
	ctx.lr = 0x8257A510;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addic. r29,r31,832
	ctx.xer.ca = ctx.r31.u32 > 4294966463;
	ctx.r29.s64 = ctx.r31.s64 + 832;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8257a9e0
	if (ctx.cr0.eq) goto loc_8257A9E0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f13,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f31,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f31.f64 = double(temp.f32);
	// lfs f11,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f10.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f12,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f29,f10,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f11,f31
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stb r10,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r10.u8);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stb r11,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r11.u8);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r11,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r11.u8);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x8257A5A8;
	sub_82CB1160(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f9,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f9.f64 = double(temp.f32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f8,872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f8.f64 = double(temp.f32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// ld r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A608;
	sub_82CB1160(ctx, base);
	// lfs f7,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,268(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// fsubs f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A680;
	sub_82CB1160(ctx, base);
	// lfs f0,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lwz r3,840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// lfs f12,880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f12.f64 = double(temp.f32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fadds f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// ld r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A6EC;
	sub_82CB1160(ctx, base);
	// lfs f10,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	ctx.f9.f64 = double(temp.f32);
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f5,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f28
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,268(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// fsubs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A764;
	sub_82CB1160(ctx, base);
	// lfs f3,908(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fadds f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f0,900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// lfs f12,904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fsubs f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lwz r28,268(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8257A7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A7F8;
	sub_82CB1160(ctx, base);
	// lfs f4,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lfs f1,896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f30,f4
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,268(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// fadds f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A880;
	sub_82CB1160(ctx, base);
	// lfs f8,888(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f29,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// lwz r3,856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// lfs f6,884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f6.f64 = double(temp.f32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fadds f5,f7,f28
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A8EC;
	sub_82CB1160(ctx, base);
	// lfs f4,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// lfs f2,892(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f29,f3
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f3.f64));
	// fadds f0,f2,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// ld r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f4,f31
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,268(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// fadds f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82cb1160
	ctx.lr = 0x8257A974;
	sub_82CB1160(ctx, base);
	// lfs f8,892(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f30,f8
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// lfs f7,896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// fsubs f5,f29,f7
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fadds f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// lwz r11,268(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 268);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257A9E0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b34
	ctx.lr = 0x8257A9EC;
	__restfpr_28(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A9F0"))) PPC_WEAK_FUNC(sub_8257A9F0);
PPC_FUNC_IMPL(__imp__sub_8257A9F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8229b318
	sub_8229B318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A9F4"))) PPC_WEAK_FUNC(sub_8257A9F4);
PPC_FUNC_IMPL(__imp__sub_8257A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A9F8"))) PPC_WEAK_FUNC(sub_8257A9F8);
PPC_FUNC_IMPL(__imp__sub_8257A9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256f728
	sub_8256F728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A9FC"))) PPC_WEAK_FUNC(sub_8257A9FC);
PPC_FUNC_IMPL(__imp__sub_8257A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AA00"))) PPC_WEAK_FUNC(sub_8257AA00);
PPC_FUNC_IMPL(__imp__sub_8257AA00) {
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
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257AA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8257aa48
	if (!ctx.cr6.eq) goto loc_8257AA48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257AA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257AA48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x8257AA54;
	sub_82594938(ctx, base);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257aa68
	if (ctx.cr6.eq) goto loc_8257AA68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a8e20
	ctx.lr = 0x8257AA68;
	sub_825A8E20(ctx, base);
loc_8257AA68:
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

__attribute__((alias("__imp__sub_8257AA80"))) PPC_WEAK_FUNC(sub_8257AA80);
PPC_FUNC_IMPL(__imp__sub_8257AA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257AA88;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ad8
	ctx.lr = 0x8257AA90;
	__savefpr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257ac18
	if (!ctx.cr6.eq) goto loc_8257AC18;
	// lwz r11,848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8257ac18
	if (!ctx.cr6.eq) goto loc_8257AC18;
	// lfs f27,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fsubs f26,f0,f27
	ctx.f26.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// addi r8,r11,-32444
	ctx.r8.s64 = ctx.r11.s64 + -32444;
	// lfs f25,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f25.f64 = double(temp.f32);
	// lfs f13,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f31,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,-1448(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1448);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f24,f13,f25
	ctx.f24.f64 = double(float(ctx.f13.f64 - ctx.f25.f64));
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x8242bfa0
	ctx.lr = 0x8257AB40;
	sub_8242BFA0(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x8242bfa0
	ctx.lr = 0x8257AB88;
	sub_8242BFA0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fadds f2,f24,f25
	ctx.f2.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x8242bfa0
	ctx.lr = 0x8257ABD0;
	sub_8242BFA0(ctx, base);
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fadds f1,f26,f27
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x8257AC18;
	sub_8242BFA0(ctx, base);
loc_8257AC18:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b24
	ctx.lr = 0x8257AC24;
	__restfpr_24(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AC28"))) PPC_WEAK_FUNC(sub_8257AC28);
PPC_FUNC_IMPL(__imp__sub_8257AC28) {
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
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257adb0
	if (ctx.cr6.eq) goto loc_8257ADB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82562288
	ctx.lr = 0x8257AC50;
	sub_82562288(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257adb0
	if (ctx.cr6.eq) goto loc_8257ADB0;
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257ad20
	if (ctx.cr6.eq) goto loc_8257AD20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257ac80
	if (ctx.cr6.eq) goto loc_8257AC80;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8257ac90
	goto loc_8257AC90;
loc_8257AC80:
	// lbz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 832);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8257AC90:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f12,16156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,-18360(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18360);
	// lwz r5,340(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fsubs f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmul f12,f4,f0
	ctx.f12.f64 = ctx.f4.f64 * ctx.f0.f64;
	// fsubs f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fadds f4,f6,f2
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// fadds f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// b 0x8257ad9c
	goto loc_8257AD9C;
loc_8257AD20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257ad5c
	if (ctx.cr6.eq) goto loc_8257AD5C;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfd f0,-17664(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17664);
	// lfd f13,-17672(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17672);
	// fsub f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8257ad5c
	if (ctx.cr6.gt) goto loc_8257AD5C;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// b 0x8257ad6c
	goto loc_8257AD6C;
loc_8257AD5C:
	// lbz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 832);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f4,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
loc_8257AD6C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// fmr f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f4.f64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lfd f0,-18352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lwz r5,340(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// fsub f13,f0,f4
	ctx.f13.f64 = ctx.f0.f64 - ctx.f4.f64;
	// lfd f0,-18360(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18360);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
loc_8257AD9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8257ADB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257ADB0:
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

__attribute__((alias("__imp__sub_8257ADC4"))) PPC_WEAK_FUNC(sub_8257ADC4);
PPC_FUNC_IMPL(__imp__sub_8257ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257ADC8"))) PPC_WEAK_FUNC(sub_8257ADC8);
PPC_FUNC_IMPL(__imp__sub_8257ADC8) {
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
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257ADF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f630
	ctx.lr = 0x8257AE00;
	sub_8256F630(ctx, base);
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

__attribute__((alias("__imp__sub_8257AE18"))) PPC_WEAK_FUNC(sub_8257AE18);
PPC_FUNC_IMPL(__imp__sub_8257AE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AE28"))) PPC_WEAK_FUNC(sub_8257AE28);
PPC_FUNC_IMPL(__imp__sub_8257AE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AE2C"))) PPC_WEAK_FUNC(sub_8257AE2C);
PPC_FUNC_IMPL(__imp__sub_8257AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AE30"))) PPC_WEAK_FUNC(sub_8257AE30);
PPC_FUNC_IMPL(__imp__sub_8257AE30) {
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
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x8257ae54
	if (!ctx.cr6.eq) goto loc_8257AE54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257AE54:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8256d9a0
	ctx.lr = 0x8257AE60;
	sub_8256D9A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AE70"))) PPC_WEAK_FUNC(sub_8257AE70);
PPC_FUNC_IMPL(__imp__sub_8257AE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8257AE78;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257aee8
	if (!ctx.cr6.eq) goto loc_8257AEE8;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x822ef6d8
	ctx.lr = 0x8257AEA8;
	sub_822EF6D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82562028
	ctx.lr = 0x8257AEC0;
	sub_82562028(ctx, base);
	// bl 0x8258afb8
	ctx.lr = 0x8257AEC4;
	sub_8258AFB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257AEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257AEE8:
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257af44
	if (!ctx.cr6.eq) goto loc_8257AF44;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x822ef6d8
	ctx.lr = 0x8257AF04;
	sub_822EF6D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82562028
	ctx.lr = 0x8257AF1C;
	sub_82562028(ctx, base);
	// bl 0x8258afb8
	ctx.lr = 0x8257AF20;
	sub_8258AFB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257AF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257AF44:
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// stb r10,996(r11)
	PPC_STORE_U8(ctx.r11.u32 + 996, ctx.r10.u8);
	// lwz r9,864(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// stb r29,996(r9)
	PPC_STORE_U8(ctx.r9.u32 + 996, ctx.r29.u8);
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8257af80
	if (ctx.cr6.eq) goto loc_8257AF80;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// bl 0x8257d798
	ctx.lr = 0x8257AF80;
	sub_8257D798(ctx, base);
loc_8257AF80:
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8257afa4
	if (ctx.cr6.eq) goto loc_8257AFA4;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// bl 0x8257d798
	ctx.lr = 0x8257AFA4;
	sub_8257D798(ctx, base);
loc_8257AFA4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cd98
	ctx.lr = 0x8257AFB4;
	sub_8256CD98(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r30,-31882
	ctx.r30.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-18212(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + -18212);
	// lwz r27,868(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x8257AFD8;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-18212(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + -18212);
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// lwz r31,864(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x8257B014;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257B030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B038"))) PPC_WEAK_FUNC(sub_8257B038);
PPC_FUNC_IMPL(__imp__sub_8257B038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B03C"))) PPC_WEAK_FUNC(sub_8257B03C);
PPC_FUNC_IMPL(__imp__sub_8257B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B040"))) PPC_WEAK_FUNC(sub_8257B040);
PPC_FUNC_IMPL(__imp__sub_8257B040) {
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
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x8257B064;
	sub_82594938(ctx, base);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257b078
	if (ctx.cr6.eq) goto loc_8257B078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a8e20
	ctx.lr = 0x8257B078;
	sub_825A8E20(ctx, base);
loc_8257B078:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257b090
	if (ctx.cr6.eq) goto loc_8257B090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257b3f0
	ctx.lr = 0x8257B090;
	sub_8257B3F0(ctx, base);
loc_8257B090:
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

__attribute__((alias("__imp__sub_8257B0A8"))) PPC_WEAK_FUNC(sub_8257B0A8);
PPC_FUNC_IMPL(__imp__sub_8257B0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257B0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257b1b0
	if (ctx.cr6.eq) goto loc_8257B1B0;
	// lwz r11,860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257b1b0
	if (ctx.cr6.eq) goto loc_8257B1B0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82562208
	ctx.lr = 0x8257B0E0;
	sub_82562208(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8257b0f8
	if (!ctx.cr6.eq) goto loc_8257B0F8;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8257B0F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f13,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r10.u8);
	// lfs f11,880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f11.f64 = double(temp.f32);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f12,876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f10,884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fadds f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// ld r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fsubs f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lwz r11,268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B1B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B1B8"))) PPC_WEAK_FUNC(sub_8257B1B8);
PPC_FUNC_IMPL(__imp__sub_8257B1B8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257b294
	if (!ctx.cr6.eq) goto loc_8257B294;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8257b230
	if (ctx.cr6.eq) goto loc_8257B230;
	// bl 0x8257c320
	ctx.lr = 0x8257B228;
	sub_8257C320(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x8257b234
	goto loc_8257B234;
loc_8257B230:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_8257B234:
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8257b254
	if (ctx.cr6.eq) goto loc_8257B254;
	// bl 0x8257c320
	ctx.lr = 0x8257B250;
	sub_8257C320(ctx, base);
	// b 0x8257b258
	goto loc_8257B258;
loc_8257B254:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8257B258:
	// lfs f0,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f13,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f11,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f9,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8242bec0
	ctx.lr = 0x8257B294;
	sub_8242BEC0(ctx, base);
loc_8257B294:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_8257B2B4"))) PPC_WEAK_FUNC(sub_8257B2B4);
PPC_FUNC_IMPL(__imp__sub_8257B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B2B8"))) PPC_WEAK_FUNC(sub_8257B2B8);
PPC_FUNC_IMPL(__imp__sub_8257B2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257b2d4
	if (ctx.cr6.eq) goto loc_8257B2D4;
	// lwz r11,868(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 868);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257b2d8
	if (!ctx.cr6.eq) goto loc_8257B2D8;
loc_8257B2D4:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_8257B2D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82562300
	sub_82562300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B2E0"))) PPC_WEAK_FUNC(sub_8257B2E0);
PPC_FUNC_IMPL(__imp__sub_8257B2E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257B2F0"))) PPC_WEAK_FUNC(sub_8257B2F0);
PPC_FUNC_IMPL(__imp__sub_8257B2F0) {
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
	// bl 0x8256c518
	ctx.lr = 0x8257B310;
	sub_8256C518(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257b33c
	if (ctx.cr6.eq) goto loc_8257B33C;
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257b33c
	if (ctx.cr6.eq) goto loc_8257B33C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257B33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B33C:
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

__attribute__((alias("__imp__sub_8257B354"))) PPC_WEAK_FUNC(sub_8257B354);
PPC_FUNC_IMPL(__imp__sub_8257B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B358"))) PPC_WEAK_FUNC(sub_8257B358);
PPC_FUNC_IMPL(__imp__sub_8257B358) {
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
	// bl 0x8256c5a8
	ctx.lr = 0x8257B370;
	sub_8256C5A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257B384;
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

__attribute__((alias("__imp__sub_8257B398"))) PPC_WEAK_FUNC(sub_8257B398);
PPC_FUNC_IMPL(__imp__sub_8257B398) {
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
	// bl 0x82563b40
	ctx.lr = 0x8257B3B0;
	sub_82563B40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257B3C4;
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

__attribute__((alias("__imp__sub_8257B3D8"))) PPC_WEAK_FUNC(sub_8257B3D8);
PPC_FUNC_IMPL(__imp__sub_8257B3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 900, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B3E8"))) PPC_WEAK_FUNC(sub_8257B3E8);
PPC_FUNC_IMPL(__imp__sub_8257B3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82566300
	sub_82566300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B3EC"))) PPC_WEAK_FUNC(sub_8257B3EC);
PPC_FUNC_IMPL(__imp__sub_8257B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B3F0"))) PPC_WEAK_FUNC(sub_8257B3F0);
PPC_FUNC_IMPL(__imp__sub_8257B3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8257B3F8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6adc
	ctx.lr = 0x8257B400;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B420;
	sub_825941E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B438;
	sub_825941E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B450;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B468;
	sub_825941E0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257b544
	if (!ctx.cr6.gt) goto loc_8257B544;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8257B480:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8257b530
	if (ctx.cr6.eq) goto loc_8257B530;
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257b530
	if (ctx.cr6.eq) goto loc_8257B530;
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B4B8;
	sub_825941E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B4D0;
	sub_825941E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B4E8;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B500;
	sub_825941E0(ctx, base);
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x8257b50c
	if (!ctx.cr6.lt) goto loc_8257B50C;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
loc_8257B50C:
	// fcmpu cr6,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// bge cr6,0x8257b518
	if (!ctx.cr6.lt) goto loc_8257B518;
	// fmr f25,f30
	ctx.f25.f64 = ctx.f30.f64;
loc_8257B518:
	// fcmpu cr6,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// ble cr6,0x8257b524
	if (!ctx.cr6.gt) goto loc_8257B524;
	// fmr f26,f29
	ctx.f26.f64 = ctx.f29.f64;
loc_8257B524:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// ble cr6,0x8257b530
	if (!ctx.cr6.gt) goto loc_8257B530;
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
loc_8257B530:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257b480
	if (ctx.cr6.lt) goto loc_8257B480;
loc_8257B544:
	// stfs f28,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f25,876(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f26,880(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stfs f27,884(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// bl 0x8257b578
	ctx.lr = 0x8257B55C;
	sub_8257B578(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b28
	ctx.lr = 0x8257B574;
	__restfpr_25(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B578"))) PPC_WEAK_FUNC(sub_8257B578);
PPC_FUNC_IMPL(__imp__sub_8257B578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8257B580;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6acc
	ctx.lr = 0x8257B588;
	__savefpr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r31,872
	ctx.r30.s64 = ctx.r31.s64 + 872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825941e0
	ctx.lr = 0x8257B5A8;
	sub_825941E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825941e0
	ctx.lr = 0x8257B5C0;
	sub_825941E0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fabs f30,f0
	ctx.f30.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x825941e0
	ctx.lr = 0x8257B5E0;
	sub_825941E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825941e0
	ctx.lr = 0x8257B5F8;
	sub_825941E0(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// fabs f29,f13
	ctx.f29.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// bl 0x825941e0
	ctx.lr = 0x8257B614;
	sub_825941E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x825941e0
	ctx.lr = 0x8257B62C;
	sub_825941E0(ctx, base);
	// fsubs f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// fabs f27,f12
	ctx.f27.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// bl 0x825941e0
	ctx.lr = 0x8257B648;
	sub_825941E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x825941e0
	ctx.lr = 0x8257B660;
	sub_825941E0(ctx, base);
	// fsubs f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fabs f26,f11
	ctx.f26.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// bl 0x825941e0
	ctx.lr = 0x8257B67C;
	sub_825941E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825941e0
	ctx.lr = 0x8257B694;
	sub_825941E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B6AC;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B6C4;
	sub_825941E0(ctx, base);
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r27,864(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-18212
	ctx.r30.s64 = ctx.r11.s64 + -18212;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,-18212(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18212);
	// ble cr6,0x8257b6fc
	if (!ctx.cr6.gt) goto loc_8257B6FC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// b 0x8257b704
	goto loc_8257B704;
loc_8257B6FC:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
loc_8257B704:
	// lwz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x8257B70C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fcmpu cr6,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f26.f64);
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x8257b744
	if (!ctx.cr6.gt) goto loc_8257B744;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// b 0x8257b74c
	goto loc_8257B74C;
loc_8257B744:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r28,r1,92
	ctx.r28.s64 = ctx.r1.s64 + 92;
loc_8257B74C:
	// lwz r29,868(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x8257B75C;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r10,868(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r8,92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lfs f28,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// not r6,r8
	ctx.r6.u64 = ~ctx.r8.u64;
	// rlwinm r29,r7,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r30,r6,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257b7b4
	if (ctx.cr6.eq) goto loc_8257B7B4;
	// bl 0x8257c320
	ctx.lr = 0x8257B7AC;
	sub_8257C320(ctx, base);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// b 0x8257b7b8
	goto loc_8257B7B8;
loc_8257B7B4:
	// fmr f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f28.f64;
loc_8257B7B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257b7cc
	if (ctx.cr6.eq) goto loc_8257B7CC;
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// bl 0x8257c320
	ctx.lr = 0x8257B7C8;
	sub_8257C320(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
loc_8257B7CC:
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8257b7f0
	if (ctx.cr6.eq) goto loc_8257B7F0;
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// bl 0x8257d798
	ctx.lr = 0x8257B7F0;
	sub_8257D798(ctx, base);
loc_8257B7F0:
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8257b814
	if (ctx.cr6.eq) goto loc_8257B814;
	// rlwimi r11,r29,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// bl 0x8257d798
	ctx.lr = 0x8257B814;
	sub_8257D798(ctx, base);
loc_8257B814:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lfs f31,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8257ce98
	ctx.lr = 0x8257B828;
	sub_8257CE98(ctx, base);
	// fsubs f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// fdivs f30,f31,f30
	ctx.f30.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x8257cd10
	ctx.lr = 0x8257B83C;
	sub_8257CD10(ctx, base);
	// fsubs f13,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f23.f64));
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// fmuls f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bl 0x8257cd90
	ctx.lr = 0x8257B84C;
	sub_8257CD90(ctx, base);
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8257ce98
	ctx.lr = 0x8257B858;
	sub_8257CE98(ctx, base);
	// fsubs f12,f26,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f25.f64));
	// fdivs f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f27.f64));
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x8257cd10
	ctx.lr = 0x8257B86C;
	sub_8257CD10(ctx, base);
	// fsubs f11,f22,f21
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// fmuls f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x8257cd90
	ctx.lr = 0x8257B87C;
	sub_8257CD90(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b18
	ctx.lr = 0x8257B888;
	__restfpr_21(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B88C"))) PPC_WEAK_FUNC(sub_8257B88C);
PPC_FUNC_IMPL(__imp__sub_8257B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B890"))) PPC_WEAK_FUNC(sub_8257B890);
PPC_FUNC_IMPL(__imp__sub_8257B890) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8257b8f0
	ctx.lr = 0x8257B8A8;
	sub_8257B8F0(ctx, base);
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

__attribute__((alias("__imp__sub_8257B8BC"))) PPC_WEAK_FUNC(sub_8257B8BC);
PPC_FUNC_IMPL(__imp__sub_8257B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B8C0"))) PPC_WEAK_FUNC(sub_8257B8C0);
PPC_FUNC_IMPL(__imp__sub_8257B8C0) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8257b8f0
	ctx.lr = 0x8257B8D8;
	sub_8257B8F0(ctx, base);
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

__attribute__((alias("__imp__sub_8257B8EC"))) PPC_WEAK_FUNC(sub_8257B8EC);
PPC_FUNC_IMPL(__imp__sub_8257B8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B8F0"))) PPC_WEAK_FUNC(sub_8257B8F0);
PPC_FUNC_IMPL(__imp__sub_8257B8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8257B8F8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8257bc88
	ctx.lr = 0x8257B910;
	sub_8257BC88(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// xori r28,r7,1
	ctx.r28.u64 = ctx.r7.u64 ^ 1;
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8257b9dc
	if (!ctx.cr6.gt) goto loc_8257B9DC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8257B944:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8257b9c8
	if (ctx.cr6.eq) goto loc_8257B9C8;
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257b9c8
	if (ctx.cr6.eq) goto loc_8257B9C8;
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B97C;
	sub_825941E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fsubs f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825942e0
	ctx.lr = 0x8257B998;
	sub_825942E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257B9AC;
	sub_825941E0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// fsubs f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825942e0
	ctx.lr = 0x8257B9C8;
	sub_825942E0(ctx, base);
loc_8257B9C8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257b944
	if (ctx.cr6.lt) goto loc_8257B944;
loc_8257B9DC:
	// addi r29,r31,872
	ctx.r29.s64 = ctx.r31.s64 + 872;
	// clrlwi r27,r28,24
	ctx.r27.u64 = ctx.r28.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// addi r25,r11,14488
	ctx.r25.s64 = ctx.r11.s64 + 14488;
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8257ba60
	if (!ctx.cr6.eq) goto loc_8257BA60;
	// lwz r11,-29488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257ba20
	if (!ctx.cr6.eq) goto loc_8257BA20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8255b818
	ctx.lr = 0x8257BA14;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x8257BA1C;
	sub_8255B8D8(ctx, base);
	// lwz r11,-29488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29488);
loc_8257BA20:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257ba40
	if (ctx.cr6.eq) goto loc_8257BA40;
loc_8257BA2C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257ba50
	if (ctx.cr6.eq) goto loc_8257BA50;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8257ba2c
	if (!ctx.cr6.eq) goto loc_8257BA2C;
loc_8257BA40:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8257ba60
	if (ctx.cr6.eq) goto loc_8257BA60;
loc_8257BA50:
	// addi r10,r28,124
	ctx.r10.s64 = ctx.r28.s64 + 124;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8257ba98
	goto loc_8257BA98;
loc_8257BA60:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// bl 0x82593c18
	ctx.lr = 0x8257BA80;
	sub_82593C18(ctx, base);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-29488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29488);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
loc_8257BA98:
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// fsubs f31,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lbz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8257bad8
	if (ctx.cr6.eq) goto loc_8257BAD8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82593c18
	ctx.lr = 0x8257BAC4;
	sub_82593C18(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-29488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29488);
	// fdivs f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_8257BAD8:
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfsx f0,r28,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8257bb38
	if (ctx.cr6.eq) goto loc_8257BB38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257BB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r26.u8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,476(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 476);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8257BB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-29488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29488);
loc_8257BB38:
	// clrlwi r27,r24,24
	ctx.r27.u64 = ctx.r24.u32 & 0xFF;
	// stfsx f31,r28,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, temp.u32);
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8257bbac
	if (!ctx.cr6.eq) goto loc_8257BBAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257bb6c
	if (!ctx.cr6.eq) goto loc_8257BB6C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8255b818
	ctx.lr = 0x8257BB60;
	sub_8255B818(ctx, base);
	// stw r3,-29488(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29488, ctx.r3.u32);
	// bl 0x8255b8d8
	ctx.lr = 0x8257BB68;
	sub_8255B8D8(ctx, base);
	// lwz r11,-29488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29488);
loc_8257BB6C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257bb8c
	if (ctx.cr6.eq) goto loc_8257BB8C;
loc_8257BB78:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257bb9c
	if (ctx.cr6.eq) goto loc_8257BB9C;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8257bb78
	if (!ctx.cr6.eq) goto loc_8257BB78;
loc_8257BB8C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257bbac
	if (ctx.cr6.eq) goto loc_8257BBAC;
loc_8257BB9C:
	// addi r11,r24,124
	ctx.r11.s64 = ctx.r24.s64 + 124;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8257bbe0
	goto loc_8257BBE0;
loc_8257BBAC:
	// add r11,r29,r24
	ctx.r11.u64 = ctx.r29.u64 + ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// bl 0x82593c18
	ctx.lr = 0x8257BBCC;
	sub_82593C18(ctx, base);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
loc_8257BBE0:
	// add r11,r29,r24
	ctx.r11.u64 = ctx.r29.u64 + ctx.r24.u64;
	// fsubs f31,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lbz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8257bc1c
	if (ctx.cr6.eq) goto loc_8257BC1C;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82593c18
	ctx.lr = 0x8257BC0C;
	sub_82593C18(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_8257BC1C:
	// rlwinm r30,r24,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r30,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8257bc74
	if (ctx.cr6.eq) goto loc_8257BC74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257BC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r26.u8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,476(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 476);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8257BC74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257BC74:
	// stfsx f31,r30,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BC88"))) PPC_WEAK_FUNC(sub_8257BC88);
PPC_FUNC_IMPL(__imp__sub_8257BC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8257BC90;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// addi r30,r31,872
	ctx.r30.s64 = ctx.r31.s64 + 872;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// xori r28,r10,1
	ctx.r28.u64 = ctx.r10.u64 ^ 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x825941e0
	ctx.lr = 0x8257BCD0;
	sub_825941E0(ctx, base);
	// cntlzw r9,r25
	ctx.r9.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r6,1
	ctx.r6.s64 = 1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r11,2
	ctx.r27.s64 = ctx.r11.s64 + 2;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257BCF8;
	sub_825941E0(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fabs f30,f0
	ctx.f30.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x825941e0
	ctx.lr = 0x8257BD18;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257BD2C;
	sub_825941E0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8257bd40
	if (!ctx.cr6.eq) goto loc_8257BD40;
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// b 0x8257bd48
	goto loc_8257BD48;
loc_8257BD40:
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
loc_8257BD48:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8257be0c
	if (ctx.cr6.eq) goto loc_8257BE0C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8257bdcc
	if (!ctx.cr6.gt) goto loc_8257BDCC;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8257bd84
	if (ctx.cr6.eq) goto loc_8257BD84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8257c320
	ctx.lr = 0x8257BD7C;
	sub_8257C320(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x8257bd88
	goto loc_8257BD88;
loc_8257BD84:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_8257BD88:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257BD9C;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257BDB4;
	sub_825941E0(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8257BDCC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257BDE0;
	sub_825941E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825941e0
	ctx.lr = 0x8257BDF8;
	sub_825941E0(ctx, base);
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8257BE0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8257c168
	ctx.lr = 0x8257BE14;
	sub_8257C168(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BE2C"))) PPC_WEAK_FUNC(sub_8257BE2C);
PPC_FUNC_IMPL(__imp__sub_8257BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BE30"))) PPC_WEAK_FUNC(sub_8257BE30);
PPC_FUNC_IMPL(__imp__sub_8257BE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257BE38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8229b318
	ctx.lr = 0x8257BE48;
	sub_8229B318(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257bf10
	if (!ctx.cr6.gt) goto loc_8257BF10;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257bf10
	if (ctx.cr6.eq) goto loc_8257BF10;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8257be78
	if (ctx.cr6.eq) goto loc_8257BE78;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8257be98
	goto loc_8257BE98;
loc_8257BE78:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257BE94;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8257BE98:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15968
	ctx.r4.s64 = ctx.r10.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257BEBC;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257bf10
	if (!ctx.cr6.eq) goto loc_8257BF10;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257bf10
	if (!ctx.cr6.eq) goto loc_8257BF10;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257bf10
	if (!ctx.cr6.eq) goto loc_8257BF10;
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257bf10
	if (ctx.cr6.eq) goto loc_8257BF10;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r29,704
	ctx.r3.s64 = ctx.r29.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x8257BF10;
	sub_82586D40(ctx, base);
loc_8257BF10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BF18"))) PPC_WEAK_FUNC(sub_8257BF18);
PPC_FUNC_IMPL(__imp__sub_8257BF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8257BF20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257c0f4
	if (!ctx.cr6.gt) goto loc_8257C0F4;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257c0f4
	if (ctx.cr6.eq) goto loc_8257C0F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r28,r11,-19580
	ctx.r28.s64 = ctx.r11.s64 + -19580;
	// beq cr6,0x8257bf64
	if (ctx.cr6.eq) goto loc_8257BF64;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8257bf80
	goto loc_8257BF80;
loc_8257BF64:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257BF7C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8257BF80:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15968
	ctx.r4.s64 = ctx.r10.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257BFA4;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257c0f4
	if (!ctx.cr6.eq) goto loc_8257C0F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257c0f4
	if (!ctx.cr6.eq) goto loc_8257C0F4;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8257c0ac
	if (!ctx.cr6.eq) goto loc_8257C0AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c0f4
	if (ctx.cr6.eq) goto loc_8257C0F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258b038
	ctx.lr = 0x8257BFE8;
	sub_8258B038(ctx, base);
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c00c
	if (ctx.cr6.eq) goto loc_8257C00C;
	// lwz r10,832(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r8,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r8.u32);
	// b 0x8257c03c
	goto loc_8257C03C;
loc_8257C00C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16020
	ctx.r4.s64 = ctx.r11.s64 + 16020;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257C028;
	sub_8233E028(ctx, base);
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
loc_8257C03C:
	// lwz r11,832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x8257c054
	if (!ctx.cr6.eq) goto loc_8257C054;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C054:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x8257C064;
	sub_8256D9A0(ctx, base);
	// lwz r3,832(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 832);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c090
	if (ctx.cr6.eq) goto loc_8257C090;
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x825a0470
	ctx.lr = 0x8257C07C;
	sub_825A0470(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257C088;
	sub_8256F728(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8257C090:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a0470
	ctx.lr = 0x8257C098;
	sub_825A0470(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257C0A4;
	sub_8256F728(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8257C0AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c0f4
	if (ctx.cr6.eq) goto loc_8257C0F4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15560
	ctx.r4.s64 = ctx.r11.s64 + 15560;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257C0D0;
	sub_8233E028(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8257c0f4
	if (!ctx.cr6.eq) goto loc_8257C0F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257C0F4;
	sub_8233E028(ctx, base);
loc_8257C0F4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257C100;
	sub_8256F728(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C108"))) PPC_WEAK_FUNC(sub_8257C108);
PPC_FUNC_IMPL(__imp__sub_8257C108) {
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
	// bl 0x8256f588
	ctx.lr = 0x8257C120;
	sub_8256F588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x8257C128;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,424
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 424, ctx.xer);
	// bge cr6,0x8257c150
	if (!ctx.cr6.lt) goto loc_8257C150;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// addi r3,r31,836
	ctx.r3.s64 = ctx.r31.s64 + 836;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c150
	if (ctx.cr6.eq) goto loc_8257C150;
	// addi r5,r31,372
	ctx.r5.s64 = ctx.r31.s64 + 372;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r4,r31,840
	ctx.r4.s64 = ctx.r31.s64 + 840;
	// bl 0x82574730
	ctx.lr = 0x8257C150;
	sub_82574730(ctx, base);
loc_8257C150:
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

__attribute__((alias("__imp__sub_8257C164"))) PPC_WEAK_FUNC(sub_8257C164);
PPC_FUNC_IMPL(__imp__sub_8257C164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C168"))) PPC_WEAK_FUNC(sub_8257C168);
PPC_FUNC_IMPL(__imp__sub_8257C168) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r11,996(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 996);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82563ce8
	ctx.lr = 0x8257C1AC;
	sub_82563CE8(ctx, base);
	// lbz r8,996(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 996);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,844(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 ^ 1;
	// bl 0x82563ce8
	ctx.lr = 0x8257C1D0;
	sub_82563CE8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257c1dc
	if (ctx.cr6.eq) goto loc_8257C1DC;
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8257C1DC:
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r10,-18304
	ctx.r9.s64 = ctx.r10.s64 + -18304;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f11,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f1,f11,f0,f13
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C22C"))) PPC_WEAK_FUNC(sub_8257C22C);
PPC_FUNC_IMPL(__imp__sub_8257C22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C230"))) PPC_WEAK_FUNC(sub_8257C230);
PPC_FUNC_IMPL(__imp__sub_8257C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8257C238;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r10,26648
	ctx.r29.s64 = ctx.r10.s64 + 26648;
	// lfs f0,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,28928(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28928);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwzx r9,r5,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,28920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28920, ctx.r11.u32);
	// stw r10,28928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28928, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8257C2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lwz r3,28924(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257c2c8
	if (ctx.cr6.eq) goto loc_8257C2C8;
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
	ctx.lr = 0x8257C2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257C2C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,28920(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28920);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8257c308
	if (!ctx.cr6.eq) goto loc_8257C308;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257C308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257C308:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257c168
	ctx.lr = 0x8257C314;
	sub_8257C168(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C320"))) PPC_WEAK_FUNC(sub_8257C320);
PPC_FUNC_IMPL(__imp__sub_8257C320) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f1,972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x8257c374
	if (ctx.cr6.eq) goto loc_8257C374;
	// lbz r11,977(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 977);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,976(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 976);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// bl 0x82593c18
	ctx.lr = 0x8257C364;
	sub_82593C18(ctx, base);
	// lfs f0,972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
loc_8257C374:
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

__attribute__((alias("__imp__sub_8257C388"))) PPC_WEAK_FUNC(sub_8257C388);
PPC_FUNC_IMPL(__imp__sub_8257C388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8257C390;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257c424
	if (!ctx.cr6.eq) goto loc_8257C424;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8257C3CC;
	sub_8233E028(ctx, base);
	// bl 0x822ea678
	ctx.lr = 0x8257C3D0;
	sub_822EA678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82562028
	ctx.lr = 0x8257C3E8;
	sub_82562028(ctx, base);
	// bl 0x8258b0c0
	ctx.lr = 0x8257C3EC;
	sub_8258B0C0(ctx, base);
	// stw r3,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r3.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16536
	ctx.r4.s64 = ctx.r10.s64 + 16536;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8257C40C;
	sub_8233E028(ctx, base);
	// lwz r9,844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,816(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 816);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
loc_8257C424:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257c4a8
	if (!ctx.cr6.eq) goto loc_8257C4A8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8257C450;
	sub_8233E028(ctx, base);
	// bl 0x822ea678
	ctx.lr = 0x8257C454;
	sub_822EA678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82562028
	ctx.lr = 0x8257C46C;
	sub_82562028(ctx, base);
	// bl 0x8258b0c0
	ctx.lr = 0x8257C470;
	sub_8258B0C0(ctx, base);
	// stw r3,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r3.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16600
	ctx.r4.s64 = ctx.r10.s64 + 16600;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8257C490;
	sub_8233E028(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,816(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 816);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
loc_8257C4A8:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257c55c
	if (!ctx.cr6.eq) goto loc_8257C55C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16632
	ctx.r4.s64 = ctx.r11.s64 + 16632;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8257C4D4;
	sub_8233E028(ctx, base);
	// bl 0x822ea6c8
	ctx.lr = 0x8257C4D8;
	sub_822EA6C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82562028
	ctx.lr = 0x8257C4F0;
	sub_82562028(ctx, base);
	// bl 0x8258b140
	ctx.lr = 0x8257C4F4;
	sub_8258B140(ctx, base);
	// lbz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// stw r3,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r3.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f0,-15120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r10,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// stb r8,16(r5)
	PPC_STORE_U8(ctx.r5.u32 + 16, ctx.r8.u8);
	// lfs f0,980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,996(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// stb r8,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r8.u8);
loc_8257C55C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,844(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257C57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257C59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,852(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,276(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,548(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8257C5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,548(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 548);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8257C5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,548(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 548);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8257C5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cd98
	ctx.lr = 0x8257C608;
	sub_8256CD98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C610"))) PPC_WEAK_FUNC(sub_8257C610);
PPC_FUNC_IMPL(__imp__sub_8257C610) {
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
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x8257c634
	if (!ctx.cr6.eq) goto loc_8257C634;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C634:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8256d9a0
	ctx.lr = 0x8257C640;
	sub_8256D9A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C650"))) PPC_WEAK_FUNC(sub_8257C650);
PPC_FUNC_IMPL(__imp__sub_8257C650) {
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
	// bl 0x8257d798
	ctx.lr = 0x8257C66C;
	sub_8257D798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825636b8
	ctx.lr = 0x8257C674;
	sub_825636B8(ctx, base);
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

__attribute__((alias("__imp__sub_8257C688"))) PPC_WEAK_FUNC(sub_8257C688);
PPC_FUNC_IMPL(__imp__sub_8257C688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c754
	if (ctx.cr6.eq) goto loc_8257C754;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,816(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// lfs f12,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f9,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f13,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r31,268(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8257C754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257C754:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C768"))) PPC_WEAK_FUNC(sub_8257C768);
PPC_FUNC_IMPL(__imp__sub_8257C768) {
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
	// bl 0x82561b48
	ctx.lr = 0x8257C780;
	sub_82561B48(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11832
	ctx.r4.s64 = ctx.r11.s64 + -11832;
	// bl 0x822adb18
	ctx.lr = 0x8257C790;
	sub_822ADB18(ctx, base);
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

__attribute__((alias("__imp__sub_8257C7A4"))) PPC_WEAK_FUNC(sub_8257C7A4);
PPC_FUNC_IMPL(__imp__sub_8257C7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C7A8"))) PPC_WEAK_FUNC(sub_8257C7A8);
PPC_FUNC_IMPL(__imp__sub_8257C7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257C7B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-11832
	ctx.r11.s64 = ctx.r11.s64 + -11832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257c854
	if (!ctx.cr6.eq) goto loc_8257C854;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257c854
	if (!ctx.cr6.eq) goto loc_8257C854;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257c854
	if (!ctx.cr6.eq) goto loc_8257C854;
	// addi r29,r31,748
	ctx.r29.s64 = ctx.r31.s64 + 748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x8257C800;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257c83c
	if (ctx.cr6.eq) goto loc_8257C83C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18380(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18380);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257C83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257C83C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257d370
	ctx.lr = 0x8257C848;
	sub_8257D370(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8257C854:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82566300
	ctx.lr = 0x8257C860;
	sub_82566300(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8257c870
	if (ctx.cr6.eq) goto loc_8257C870;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257C870:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C878"))) PPC_WEAK_FUNC(sub_8257C878);
PPC_FUNC_IMPL(__imp__sub_8257C878) {
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
	// bl 0x82563b40
	ctx.lr = 0x8257C890;
	sub_82563B40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257C8A4;
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

__attribute__((alias("__imp__sub_8257C8B8"))) PPC_WEAK_FUNC(sub_8257C8B8);
PPC_FUNC_IMPL(__imp__sub_8257C8B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,1020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1020, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C8C8"))) PPC_WEAK_FUNC(sub_8257C8C8);
PPC_FUNC_IMPL(__imp__sub_8257C8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1020, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,376(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257C8F4"))) PPC_WEAK_FUNC(sub_8257C8F4);
PPC_FUNC_IMPL(__imp__sub_8257C8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C8F8"))) PPC_WEAK_FUNC(sub_8257C8F8);
PPC_FUNC_IMPL(__imp__sub_8257C8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8257C900;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82671e50
	ctx.lr = 0x8257C930;
	sub_82671E50(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x8257c950
	if (!ctx.cr6.eq) goto loc_8257C950;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8257C950:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x82cb0328
	ctx.lr = 0x8257C95C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8257c96c
	if (!ctx.cr6.eq) goto loc_8257C96C;
	// lwz r3,844(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 844);
	// b 0x8257c9c0
	goto loc_8257C9C0;
loc_8257C96C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x8257c97c
	if (!ctx.cr6.eq) goto loc_8257C97C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8257C97C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,16600
	ctx.r4.s64 = ctx.r11.s64 + 16600;
	// bl 0x82cb0328
	ctx.lr = 0x8257C988;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8257c998
	if (!ctx.cr6.eq) goto loc_8257C998;
	// lwz r3,848(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 848);
	// b 0x8257c9c0
	goto loc_8257C9C0;
loc_8257C998:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x8257c9a8
	if (!ctx.cr6.eq) goto loc_8257C9A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8257C9A8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,16648
	ctx.r4.s64 = ctx.r11.s64 + 16648;
	// bl 0x82cb0328
	ctx.lr = 0x8257C9B4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8257c9d8
	if (!ctx.cr6.eq) goto loc_8257C9D8;
	// lwz r3,852(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
loc_8257C9C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8256dac8
	ctx.lr = 0x8257C9D8;
	sub_8256DAC8(ctx, base);
loc_8257C9D8:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8257ca00
	if (ctx.cr6.eq) goto loc_8257CA00;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8257CA00;
	sub_82294520(ctx, base);
loc_8257CA00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8257CA08;
	sub_82294CC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CA10"))) PPC_WEAK_FUNC(sub_8257CA10);
PPC_FUNC_IMPL(__imp__sub_8257CA10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8257caa8
	if (!ctx.cr6.eq) goto loc_8257CAA8;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8257ca84
	if (!ctx.cr6.gt) goto loc_8257CA84;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82563ce8
	ctx.lr = 0x8257CA60;
	sub_82563CE8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82563ce8
	ctx.lr = 0x8257CA78;
	sub_82563CE8(ctx, base);
	// fadds f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// b 0x8257cb24
	goto loc_8257CB24;
loc_8257CA84:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8257cb38
	if (!ctx.cr6.lt) goto loc_8257CB38;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x8257CAA0;
	sub_82563CE8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8257cb08
	goto loc_8257CB08;
loc_8257CAA8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8257cae8
	if (!ctx.cr6.gt) goto loc_8257CAE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82563ce8
	ctx.lr = 0x8257CAC4;
	sub_82563CE8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82563ce8
	ctx.lr = 0x8257CADC;
	sub_82563CE8(ctx, base);
	// fadds f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// b 0x8257cb24
	goto loc_8257CB24;
loc_8257CAE8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8257cb38
	if (!ctx.cr6.lt) goto loc_8257CB38;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82563ce8
	ctx.lr = 0x8257CB04;
	sub_82563CE8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
loc_8257CB08:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82563ce8
	ctx.lr = 0x8257CB1C;
	sub_82563CE8(ctx, base);
	// fadds f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
loc_8257CB24:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-17672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8257cb38
	if (!ctx.cr6.gt) goto loc_8257CB38;
	// fsubs f31,f1,f30
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
loc_8257CB38:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257CB58"))) PPC_WEAK_FUNC(sub_8257CB58);
PPC_FUNC_IMPL(__imp__sub_8257CB58) {
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
	// bl 0x82cb6ae4
	ctx.lr = 0x8257CB70;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x8257ca10
	ctx.lr = 0x8257CB80;
	sub_8257CA10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x8257c168
	ctx.lr = 0x8257CB90;
	sub_8257C168(ctx, base);
	// lbz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x8257cc04
	if (!ctx.cr6.eq) goto loc_8257CC04;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x8257CBB4;
	sub_82563CE8(ctx, base);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r10,3
	ctx.r10.s64 = 3;
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stb r10,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// bl 0x82563ce8
	ctx.lr = 0x8257CBDC;
	sub_82563CE8(ctx, base);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r11,r11,-17672
	ctx.r11.s64 = ctx.r11.s64 + -17672;
	// lfd f31,0(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x8257cc88
	if (ctx.cr6.lt) goto loc_8257CC88;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8257cc60
	goto loc_8257CC60;
loc_8257CC04:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82563ce8
	ctx.lr = 0x8257CC10;
	sub_82563CE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// bl 0x82563f48
	ctx.lr = 0x8257CC28;
	sub_82563F48(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82563ce8
	ctx.lr = 0x8257CC3C;
	sub_82563CE8(ctx, base);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r11,r11,-17672
	ctx.r11.s64 = ctx.r11.s64 + -17672;
	// lfd f31,0(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x8257cc88
	if (ctx.cr6.lt) goto loc_8257CC88;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8257CC60:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82563ce8
	ctx.lr = 0x8257CC70;
	sub_82563CE8(ctx, base);
	// fadds f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x8257cc8c
	if (!ctx.cr6.lt) goto loc_8257CC8C;
loc_8257CC88:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8257CC8C:
	// lfs f0,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lfs f13,952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// lfs f28,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x8257ccdc
	if (ctx.cr6.lt) goto loc_8257CCDC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// bl 0x8240c6f8
	ctx.lr = 0x8257CCC0;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ccd8
	if (ctx.cr6.eq) goto loc_8257CCD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255aea0
	ctx.lr = 0x8257CCD8;
	sub_8255AEA0(ctx, base);
loc_8257CCD8:
	// stfs f28,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
loc_8257CCDC:
	// fsubs f0,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8257ccf0
	if (!ctx.cr6.gt) goto loc_8257CCF0;
	// stfs f28,1016(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
loc_8257CCF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b30
	ctx.lr = 0x8257CCFC;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_8257CD10"))) PPC_WEAK_FUNC(sub_8257CD10);
PPC_FUNC_IMPL(__imp__sub_8257CD10) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8257cd48
	if (ctx.cr6.lt) goto loc_8257CD48;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8257cd48
	if (!ctx.cr6.lt) goto loc_8257CD48;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_8257CD48:
	// lfs f13,968(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f13,-17672(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x8257cd78
	if (!ctx.cr6.gt) goto loc_8257CD78;
	// stfs f0,968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257d018
	ctx.lr = 0x8257CD70;
	sub_8257D018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257cf38
	ctx.lr = 0x8257CD78;
	sub_8257CF38(ctx, base);
loc_8257CD78:
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

__attribute__((alias("__imp__sub_8257CD8C"))) PPC_WEAK_FUNC(sub_8257CD8C);
PPC_FUNC_IMPL(__imp__sub_8257CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257CD90"))) PPC_WEAK_FUNC(sub_8257CD90);
PPC_FUNC_IMPL(__imp__sub_8257CD90) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8257cdc0
	if (!ctx.cr6.lt) goto loc_8257CDC0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8257cdd4
	goto loc_8257CDD4;
loc_8257CDC0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8257cdd4
	if (!ctx.cr6.lt) goto loc_8257CDD4;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_8257CDD4:
	// lfs f13,964(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f13,-17672(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x8257ce00
	if (!ctx.cr6.gt) goto loc_8257CE00;
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257cf38
	ctx.lr = 0x8257CDFC;
	sub_8257CF38(ctx, base);
	// stfs f31,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
loc_8257CE00:
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

__attribute__((alias("__imp__sub_8257CE18"))) PPC_WEAK_FUNC(sub_8257CE18);
PPC_FUNC_IMPL(__imp__sub_8257CE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ce44
	if (ctx.cr6.eq) goto loc_8257CE44;
	// lbz r11,996(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 996);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82563ce8
	sub_82563CE8(ctx, base);
	return;
loc_8257CE44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257CE50"))) PPC_WEAK_FUNC(sub_8257CE50);
PPC_FUNC_IMPL(__imp__sub_8257CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8257ce74
	if (ctx.cr6.lt) goto loc_8257CE74;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8257ce74
	if (!ctx.cr6.lt) goto loc_8257CE74;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_8257CE74:
	// lfs f13,960(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f13,-17672(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,960(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257CE98"))) PPC_WEAK_FUNC(sub_8257CE98);
PPC_FUNC_IMPL(__imp__sub_8257CE98) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8257cec4
	if (!ctx.cr6.lt) goto loc_8257CEC4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_8257CEC4:
	// stfs f1,952(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257c168
	ctx.lr = 0x8257CED4;
	sub_8257C168(ctx, base);
	// lfs f0,952(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8257cee4
	if (!ctx.cr6.gt) goto loc_8257CEE4;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_8257CEE4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8257cf00
	if (ctx.cr6.lt) goto loc_8257CF00;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f31,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8257cf00
	if (!ctx.cr6.lt) goto loc_8257CF00;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8257CF00:
	// lfs f0,960(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfd f0,-17672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8257cf20
	if (!ctx.cr6.gt) goto loc_8257CF20;
	// stfs f31,960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
loc_8257CF20:
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

__attribute__((alias("__imp__sub_8257CF38"))) PPC_WEAK_FUNC(sub_8257CF38);
PPC_FUNC_IMPL(__imp__sub_8257CF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8257CF40;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r28,996(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 996);
	// lwz r31,852(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// xori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 ^ 1;
	// bl 0x825941e0
	ctx.lr = 0x8257CF78;
	sub_825941E0(ctx, base);
	// cntlzw r9,r28
	ctx.r9.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// bl 0x825941e0
	ctx.lr = 0x8257CF9C;
	sub_825941E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8257c168
	ctx.lr = 0x8257CFAC;
	sub_8257C168(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lbz r11,996(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 996);
	// lfs f13,964(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r31,r4,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fmadds f31,f13,f10,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f12.f64));
	// bl 0x82563ce8
	ctx.lr = 0x8257CFE8;
	sub_82563CE8(ctx, base);
	// lwz r11,852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
	// rlwinm r3,r31,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// li r10,3
	ctx.r10.s64 = 3;
	// fsubs f9,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfsx f9,r3,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// stb r10,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D018"))) PPC_WEAK_FUNC(sub_8257D018);
PPC_FUNC_IMPL(__imp__sub_8257D018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8257D020;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82567278
	ctx.lr = 0x8257D030;
	sub_82567278(ctx, base);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r28,852(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,-29320(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29320);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8257d060
	if (!ctx.cr6.eq) goto loc_8257D060;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8258f318
	ctx.lr = 0x8257D054;
	sub_8258F318(ctx, base);
	// stw r3,-29320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29320, ctx.r3.u32);
	// bl 0x8258f3d8
	ctx.lr = 0x8257D05C;
	sub_8258F3D8(ctx, base);
	// lwz r4,-29320(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29320);
loc_8257D060:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82564a00
	ctx.lr = 0x8257D070;
	sub_82564A00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8257d128
	if (!ctx.cr6.eq) goto loc_8257D128;
	// lbz r11,985(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 985);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,984(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 984);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// bl 0x82593c18
	ctx.lr = 0x8257D0A0;
	sub_82593C18(ctx, base);
	// lfs f0,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f31,f0,f13,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// bl 0x8257c168
	ctx.lr = 0x8257D0BC;
	sub_8257C168(ctx, base);
	// lfs f11,968(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lbz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r4,r6,-18304
	ctx.r4.s64 = ctx.r6.s64 + -18304;
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// lfsx f8,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f10,f31
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// stfsx f7,r10,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// stb r3,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r3.u8);
loc_8257D128:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D134"))) PPC_WEAK_FUNC(sub_8257D134);
PPC_FUNC_IMPL(__imp__sub_8257D134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D138"))) PPC_WEAK_FUNC(sub_8257D138);
PPC_FUNC_IMPL(__imp__sub_8257D138) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8257c168
	ctx.lr = 0x8257D154;
	sub_8257C168(ctx, base);
	// lfs f0,960(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257d174
	if (!ctx.cr6.eq) goto loc_8257D174;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
loc_8257D174:
	// stfs f0,952(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
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

__attribute__((alias("__imp__sub_8257D18C"))) PPC_WEAK_FUNC(sub_8257D18C);
PPC_FUNC_IMPL(__imp__sub_8257D18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D190"))) PPC_WEAK_FUNC(sub_8257D190);
PPC_FUNC_IMPL(__imp__sub_8257D190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// b 0x8257d798
	sub_8257D798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D1B4"))) PPC_WEAK_FUNC(sub_8257D1B4);
PPC_FUNC_IMPL(__imp__sub_8257D1B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D1B8"))) PPC_WEAK_FUNC(sub_8257D1B8);
PPC_FUNC_IMPL(__imp__sub_8257D1B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d350
	if (ctx.cr6.eq) goto loc_8257D350;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d350
	if (ctx.cr6.eq) goto loc_8257D350;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d350
	if (ctx.cr6.eq) goto loc_8257D350;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d350
	if (ctx.cr6.eq) goto loc_8257D350;
	// ld r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 76);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r8,1004(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// lwz r7,1008(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,1012(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,-28844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f30,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82564358
	ctx.lr = 0x8257D28C;
	sub_82564358(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f5,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lbz r9,996(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r7.u32);
	// stw r6,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r6.u32);
	// stw r8,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r8.u32);
	// bne cr6,0x8257d318
	if (!ctx.cr6.eq) goto loc_8257D318;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x8257D2E4;
	sub_82563CE8(ctx, base);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x8257d350
	if (!ctx.cr6.gt) goto loc_8257D350;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82563ce8
	ctx.lr = 0x8257D304;
	sub_82563CE8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8257d350
	if (!ctx.cr6.lt) goto loc_8257D350;
	// lfs f0,1004(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x8257d340
	goto loc_8257D340;
loc_8257D318:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8257d350
	if (!ctx.cr6.lt) goto loc_8257D350;
	// lfs f13,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8257d350
	if (!ctx.cr6.gt) goto loc_8257D350;
	// lfs f13,1008(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_8257D340:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x8257d350
	if (ctx.cr6.eq) goto loc_8257D350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257cb58
	ctx.lr = 0x8257D350;
	sub_8257CB58(ctx, base);
loc_8257D350:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8257D36C"))) PPC_WEAK_FUNC(sub_8257D36C);
PPC_FUNC_IMPL(__imp__sub_8257D36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D370"))) PPC_WEAK_FUNC(sub_8257D370);
PPC_FUNC_IMPL(__imp__sub_8257D370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8257D378;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,1036
	ctx.r29.s64 = ctx.r31.s64 + 1036;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x8257D39C;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d4d4
	if (ctx.cr6.eq) goto loc_8257D4D4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d4d4
	if (ctx.cr6.eq) goto loc_8257D4D4;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d4d4
	if (ctx.cr6.eq) goto loc_8257D4D4;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d4d4
	if (ctx.cr6.eq) goto loc_8257D4D4;
	// lwz r30,120(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257d4d4
	if (ctx.cr6.eq) goto loc_8257D4D4;
	// lbz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82563ce8
	ctx.lr = 0x8257D3FC;
	sub_82563CE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8257c168
	ctx.lr = 0x8257D40C;
	sub_8257C168(ctx, base);
	// ld r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 76);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,-28844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82564358
	ctx.lr = 0x8257D47C;
	sub_82564358(ctx, base);
	// lbz r7,996(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8257d490
	if (!ctx.cr6.eq) goto loc_8257D490;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8257d494
	goto loc_8257D494;
loc_8257D490:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
loc_8257D494:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-17828(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17828);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// fdivs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257D4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257D4D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D4E4"))) PPC_WEAK_FUNC(sub_8257D4E4);
PPC_FUNC_IMPL(__imp__sub_8257D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D4E8"))) PPC_WEAK_FUNC(sub_8257D4E8);
PPC_FUNC_IMPL(__imp__sub_8257D4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,816(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D4F8"))) PPC_WEAK_FUNC(sub_8257D4F8);
PPC_FUNC_IMPL(__imp__sub_8257D4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D4FC"))) PPC_WEAK_FUNC(sub_8257D4FC);
PPC_FUNC_IMPL(__imp__sub_8257D4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D500"))) PPC_WEAK_FUNC(sub_8257D500);
PPC_FUNC_IMPL(__imp__sub_8257D500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,956(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,952(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8257cb58
	sub_8257CB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D510"))) PPC_WEAK_FUNC(sub_8257D510);
PPC_FUNC_IMPL(__imp__sub_8257D510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,956(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,952(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x8257cb58
	sub_8257CB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D524"))) PPC_WEAK_FUNC(sub_8257D524);
PPC_FUNC_IMPL(__imp__sub_8257D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D528"))) PPC_WEAK_FUNC(sub_8257D528);
PPC_FUNC_IMPL(__imp__sub_8257D528) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d614
	if (ctx.cr6.eq) goto loc_8257D614;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d614
	if (ctx.cr6.eq) goto loc_8257D614;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d614
	if (ctx.cr6.eq) goto loc_8257D614;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d614
	if (ctx.cr6.eq) goto loc_8257D614;
	// ld r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 76);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,-28844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82564358
	ctx.lr = 0x8257D5DC;
	sub_82564358(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r8.u32);
	// stw r7,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r7.u32);
	// stw r9,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r9.u32);
loc_8257D614:
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

__attribute__((alias("__imp__sub_8257D628"))) PPC_WEAK_FUNC(sub_8257D628);
PPC_FUNC_IMPL(__imp__sub_8257D628) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1016(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8257d65c
	if (ctx.cr6.eq) goto loc_8257D65C;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8257cb58
	ctx.lr = 0x8257D65C;
	sub_8257CB58(ctx, base);
loc_8257D65C:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r8.u32);
	// stw r7,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r7.u32);
	// stw r9,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D6A8"))) PPC_WEAK_FUNC(sub_8257D6A8);
PPC_FUNC_IMPL(__imp__sub_8257D6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257d1b8
	sub_8257D1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D6AC"))) PPC_WEAK_FUNC(sub_8257D6AC);
PPC_FUNC_IMPL(__imp__sub_8257D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D6B0"))) PPC_WEAK_FUNC(sub_8257D6B0);
PPC_FUNC_IMPL(__imp__sub_8257D6B0) {
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
	// addi r3,r30,444
	ctx.r3.s64 = ctx.r30.s64 + 444;
	// bl 0x82594938
	ctx.lr = 0x8257D6D0;
	sub_82594938(ctx, base);
	// lwz r10,1020(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1020);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257d77c
	if (!ctx.cr6.eq) goto loc_8257D77C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257D6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8257d77c
	if (!ctx.cr6.eq) goto loc_8257D77C;
	// lwz r11,1020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1020);
	// lwz r10,844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,1020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1020, ctx.r9.u32);
	// beq cr6,0x8257d764
	if (ctx.cr6.eq) goto loc_8257D764;
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d764
	if (ctx.cr6.eq) goto loc_8257D764;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8257D728:
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257D740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,844(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,584(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 584);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257D758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8257d728
	if (ctx.cr6.lt) goto loc_8257D728;
loc_8257D764:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257d018
	ctx.lr = 0x8257D76C;
	sub_8257D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257cf38
	ctx.lr = 0x8257D774;
	sub_8257CF38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257d138
	ctx.lr = 0x8257D77C;
	sub_8257D138(ctx, base);
loc_8257D77C:
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

__attribute__((alias("__imp__sub_8257D794"))) PPC_WEAK_FUNC(sub_8257D794);
PPC_FUNC_IMPL(__imp__sub_8257D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D798"))) PPC_WEAK_FUNC(sub_8257D798);
PPC_FUNC_IMPL(__imp__sub_8257D798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257D7A0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae8
	ctx.lr = 0x8257D7A8;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r10,996(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r8,r9,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r10,985(r31)
	PPC_STORE_U8(ctx.r31.u32 + 985, ctx.r10.u8);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stb r10,993(r31)
	PPC_STORE_U8(ctx.r31.u32 + 993, ctx.r10.u8);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// stb r3,977(r31)
	PPC_STORE_U8(ctx.r31.u32 + 977, ctx.r3.u8);
	// beq cr6,0x8257dfdc
	if (ctx.cr6.eq) goto loc_8257DFDC;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8258a478
	ctx.lr = 0x8257D7F4;
	sub_8258A478(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257dfdc
	if (ctx.cr6.eq) goto loc_8257DFDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257c320
	ctx.lr = 0x8257D808;
	sub_8257C320(ctx, base);
	// lbz r11,993(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 993);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r5,992(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 992);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82593c18
	ctx.lr = 0x8257D834;
	sub_82593C18(ctx, base);
	// lwz r6,1000(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f0,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r6,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f28,f13,f0,f12
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8257d868
	if (!ctx.cr6.eq) goto loc_8257D868;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x8257d86c
	goto loc_8257D86C;
loc_8257D868:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
loc_8257D86C:
	// lbz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 996);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8257dc20
	if (!ctx.cr6.eq) goto loc_8257DC20;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257d898
	if (!ctx.cr6.eq) goto loc_8257D898;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d898
	if (ctx.cr6.eq) goto loc_8257D898;
	// lbz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257d8c4
	if (ctx.cr6.lt) goto loc_8257D8C4;
loc_8257D898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fneg f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257D8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257d8dc
	if (!ctx.cr6.eq) goto loc_8257D8DC;
loc_8257D8C4:
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d8dc
	if (ctx.cr6.eq) goto loc_8257D8DC;
	// lbz r11,485(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 485);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257d908
	if (ctx.cr6.lt) goto loc_8257D908;
loc_8257D8DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257D900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257d920
	if (!ctx.cr6.eq) goto loc_8257D920;
loc_8257D908:
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d920
	if (ctx.cr6.eq) goto loc_8257D920;
	// lbz r11,486(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 486);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257d94c
	if (ctx.cr6.lt) goto loc_8257D94C;
loc_8257D920:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257D944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257d974
	if (!ctx.cr6.eq) goto loc_8257D974;
loc_8257D94C:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d974
	if (ctx.cr6.eq) goto loc_8257D974;
	// lbz r11,487(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 487);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8257d974
	if (!ctx.cr6.lt) goto loc_8257D974;
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lfs f13,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8257d9a0
	if (ctx.cr6.eq) goto loc_8257D9A0;
loc_8257D974:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fneg f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257D998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257d9bc
	if (!ctx.cr6.eq) goto loc_8257D9BC;
loc_8257D9A0:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257d9bc
	if (ctx.cr6.eq) goto loc_8257D9BC;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257d9e8
	if (ctx.cr6.lt) goto loc_8257D9E8;
loc_8257D9BC:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257D9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257da04
	if (!ctx.cr6.eq) goto loc_8257DA04;
loc_8257D9E8:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257da04
	if (ctx.cr6.eq) goto loc_8257DA04;
	// lbz r11,485(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 485);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257da30
	if (ctx.cr6.lt) goto loc_8257DA30;
loc_8257DA04:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257da4c
	if (!ctx.cr6.eq) goto loc_8257DA4C;
loc_8257DA30:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257da4c
	if (ctx.cr6.eq) goto loc_8257DA4C;
	// lbz r11,486(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 486);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257da78
	if (ctx.cr6.lt) goto loc_8257DA78;
loc_8257DA4C:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257da94
	if (!ctx.cr6.eq) goto loc_8257DA94;
loc_8257DA78:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257da94
	if (ctx.cr6.eq) goto loc_8257DA94;
	// lbz r11,487(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 487);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257dac0
	if (ctx.cr6.lt) goto loc_8257DAC0;
loc_8257DA94:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257dadc
	if (!ctx.cr6.eq) goto loc_8257DADC;
loc_8257DAC0:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257dadc
	if (ctx.cr6.eq) goto loc_8257DADC;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257db08
	if (ctx.cr6.lt) goto loc_8257DB08;
loc_8257DADC:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257db24
	if (!ctx.cr6.eq) goto loc_8257DB24;
loc_8257DB08:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257db24
	if (ctx.cr6.eq) goto loc_8257DB24;
	// lbz r11,485(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 485);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257db50
	if (ctx.cr6.lt) goto loc_8257DB50;
loc_8257DB24:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fneg f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257db6c
	if (!ctx.cr6.eq) goto loc_8257DB6C;
loc_8257DB50:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257db6c
	if (ctx.cr6.eq) goto loc_8257DB6C;
	// lbz r11,486(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 486);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257db98
	if (ctx.cr6.lt) goto loc_8257DB98;
loc_8257DB6C:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257dbb4
	if (!ctx.cr6.eq) goto loc_8257DBB4;
loc_8257DB98:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257dbb4
	if (ctx.cr6.eq) goto loc_8257DBB4;
	// lbz r11,487(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 487);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257dbd8
	if (ctx.cr6.lt) goto loc_8257DBD8;
loc_8257DBB4:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257DBD8:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lbz r10,79(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 79);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8257dc18
	if (ctx.cr6.eq) goto loc_8257DC18;
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,376(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257DC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257DC18:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8257dfc4
	goto loc_8257DFC4;
loc_8257DC20:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257dc40
	if (!ctx.cr6.eq) goto loc_8257DC40;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257dc40
	if (ctx.cr6.eq) goto loc_8257DC40;
	// lbz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257dc6c
	if (ctx.cr6.lt) goto loc_8257DC6C;
loc_8257DC40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257dc84
	if (!ctx.cr6.eq) goto loc_8257DC84;
loc_8257DC6C:
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257dc84
	if (ctx.cr6.eq) goto loc_8257DC84;
	// lbz r11,485(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 485);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257dcb0
	if (ctx.cr6.lt) goto loc_8257DCB0;
loc_8257DC84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fneg f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DCA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257dcd8
	if (!ctx.cr6.eq) goto loc_8257DCD8;
loc_8257DCB0:
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257dcd8
	if (ctx.cr6.eq) goto loc_8257DCD8;
	// lbz r11,486(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 486);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8257dcd8
	if (!ctx.cr6.lt) goto loc_8257DCD8;
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lfs f13,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8257dd04
	if (ctx.cr6.eq) goto loc_8257DD04;
loc_8257DCD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fneg f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257dd1c
	if (!ctx.cr6.eq) goto loc_8257DD1C;
loc_8257DD04:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257dd1c
	if (ctx.cr6.eq) goto loc_8257DD1C;
	// lbz r11,487(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 487);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257dd48
	if (ctx.cr6.lt) goto loc_8257DD48;
loc_8257DD1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257dd64
	if (!ctx.cr6.eq) goto loc_8257DD64;
loc_8257DD48:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257dd64
	if (ctx.cr6.eq) goto loc_8257DD64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257dd90
	if (ctx.cr6.lt) goto loc_8257DD90;
loc_8257DD64:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DD88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257ddac
	if (!ctx.cr6.eq) goto loc_8257DDAC;
loc_8257DD90:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257ddac
	if (ctx.cr6.eq) goto loc_8257DDAC;
	// lbz r11,485(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 485);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257ddd8
	if (ctx.cr6.lt) goto loc_8257DDD8;
loc_8257DDAC:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257ddf4
	if (!ctx.cr6.eq) goto loc_8257DDF4;
loc_8257DDD8:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257ddf4
	if (ctx.cr6.eq) goto loc_8257DDF4;
	// lbz r11,486(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 486);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257de20
	if (ctx.cr6.lt) goto loc_8257DE20;
loc_8257DDF4:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257de3c
	if (!ctx.cr6.eq) goto loc_8257DE3C;
loc_8257DE20:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257de3c
	if (ctx.cr6.eq) goto loc_8257DE3C;
	// lbz r11,487(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 487);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257de68
	if (ctx.cr6.lt) goto loc_8257DE68;
loc_8257DE3C:
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257de84
	if (!ctx.cr6.eq) goto loc_8257DE84;
loc_8257DE68:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257de84
	if (ctx.cr6.eq) goto loc_8257DE84;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257deb0
	if (ctx.cr6.lt) goto loc_8257DEB0;
loc_8257DE84:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fneg f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257decc
	if (!ctx.cr6.eq) goto loc_8257DECC;
loc_8257DEB0:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257decc
	if (ctx.cr6.eq) goto loc_8257DECC;
	// lbz r11,485(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 485);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257def8
	if (ctx.cr6.lt) goto loc_8257DEF8;
loc_8257DECC:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257df14
	if (!ctx.cr6.eq) goto loc_8257DF14;
loc_8257DEF8:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257df14
	if (ctx.cr6.eq) goto loc_8257DF14;
	// lbz r11,486(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 486);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257df40
	if (ctx.cr6.lt) goto loc_8257DF40;
loc_8257DF14:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257df5c
	if (!ctx.cr6.eq) goto loc_8257DF5C;
loc_8257DF40:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257df5c
	if (ctx.cr6.eq) goto loc_8257DF5C;
	// lbz r11,487(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 487);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257df80
	if (ctx.cr6.lt) goto loc_8257DF80;
loc_8257DF5C:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257DF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257DF80:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lbz r10,78(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 78);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8257dfc0
	if (ctx.cr6.eq) goto loc_8257DFC0;
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,376(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257DFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257DFC0:
	// li r5,2
	ctx.r5.s64 = 2;
loc_8257DFC4:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82594498
	ctx.lr = 0x8257DFDC;
	sub_82594498(ctx, base);
loc_8257DFDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b34
	ctx.lr = 0x8257DFE8;
	__restfpr_28(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DFEC"))) PPC_WEAK_FUNC(sub_8257DFEC);
PPC_FUNC_IMPL(__imp__sub_8257DFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257DFF0"))) PPC_WEAK_FUNC(sub_8257DFF0);
PPC_FUNC_IMPL(__imp__sub_8257DFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257DFF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8229b318
	ctx.lr = 0x8257E008;
	sub_8229B318(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257e0d0
	if (!ctx.cr6.gt) goto loc_8257E0D0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257e0d0
	if (ctx.cr6.eq) goto loc_8257E0D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8257e038
	if (ctx.cr6.eq) goto loc_8257E038;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x8257e058
	goto loc_8257E058;
loc_8257E038:
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257E054;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8257E058:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,15968
	ctx.r4.s64 = ctx.r10.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257E07C;
	sub_8233E028(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257e0d0
	if (!ctx.cr6.eq) goto loc_8257E0D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257e0d0
	if (!ctx.cr6.eq) goto loc_8257E0D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257e0d0
	if (!ctx.cr6.eq) goto loc_8257E0D0;
	// lwz r11,816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e0d0
	if (ctx.cr6.eq) goto loc_8257E0D0;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r29,704
	ctx.r3.s64 = ctx.r29.s64 + 704;
	// bl 0x82586d40
	ctx.lr = 0x8257E0D0;
	sub_82586D40(ctx, base);
loc_8257E0D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E0D8"))) PPC_WEAK_FUNC(sub_8257E0D8);
PPC_FUNC_IMPL(__imp__sub_8257E0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8257E0E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257e3d4
	if (!ctx.cr6.gt) goto loc_8257E3D4;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257e3d4
	if (ctx.cr6.eq) goto loc_8257E3D4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r27,r11,-19580
	ctx.r27.s64 = ctx.r11.s64 + -19580;
	// beq cr6,0x8257e124
	if (ctx.cr6.eq) goto loc_8257E124;
	// addi r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 + 44;
	// b 0x8257e140
	goto loc_8257E140;
loc_8257E124:
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
	ctx.lr = 0x8257E13C;
	sub_8233E028(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8257E140:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,16672
	ctx.r4.s64 = ctx.r10.s64 + 16672;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8233e028
	ctx.lr = 0x8257E164;
	sub_8233E028(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8257e184
	if (!ctx.cr6.eq) goto loc_8257E184;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257e220
	if (ctx.cr6.eq) goto loc_8257E220;
loc_8257E184:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16692
	ctx.r4.s64 = ctx.r11.s64 + 16692;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257E1A0;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257e1b8
	if (!ctx.cr6.eq) goto loc_8257E1B8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257e220
	if (ctx.cr6.eq) goto loc_8257E220;
loc_8257E1B8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16720
	ctx.r4.s64 = ctx.r11.s64 + 16720;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257E1D4;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257e1ec
	if (!ctx.cr6.eq) goto loc_8257E1EC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257e220
	if (ctx.cr6.eq) goto loc_8257E220;
loc_8257E1EC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257E208;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257e270
	if (!ctx.cr6.eq) goto loc_8257E270;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257e270
	if (!ctx.cr6.eq) goto loc_8257E270;
loc_8257E220:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257d798
	ctx.lr = 0x8257E22C;
	sub_8257D798(ctx, base);
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,376(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257E25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257E268;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8257E270:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15968
	ctx.r4.s64 = ctx.r11.s64 + 15968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257E28C;
	sub_8233E028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257e3d4
	if (!ctx.cr6.eq) goto loc_8257E3D4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257e3d4
	if (!ctx.cr6.eq) goto loc_8257E3D4;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8257e38c
	if (!ctx.cr6.eq) goto loc_8257E38C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e3d4
	if (ctx.cr6.eq) goto loc_8257E3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258b1c0
	ctx.lr = 0x8257E2C8;
	sub_8258B1C0(ctx, base);
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e2ec
	if (ctx.cr6.eq) goto loc_8257E2EC;
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r8,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r8.u32);
	// b 0x8257e31c
	goto loc_8257E31C;
loc_8257E2EC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,16020
	ctx.r4.s64 = ctx.r11.s64 + 16020;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257E308;
	sub_8233E028(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
loc_8257E31C:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne cr6,0x8257e334
	if (!ctx.cr6.eq) goto loc_8257E334;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257E334:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d9a0
	ctx.lr = 0x8257E344;
	sub_8256D9A0(ctx, base);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e370
	if (ctx.cr6.eq) goto loc_8257E370;
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x825a0470
	ctx.lr = 0x8257E35C;
	sub_825A0470(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257E368;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8257E370:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a0470
	ctx.lr = 0x8257E378;
	sub_825A0470(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257E384;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8257E38C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e3d4
	if (ctx.cr6.eq) goto loc_8257E3D4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,15560
	ctx.r4.s64 = ctx.r11.s64 + 15560;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8257E3B0;
	sub_8233E028(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8257e3d4
	if (!ctx.cr6.eq) goto loc_8257E3D4;
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
	ctx.lr = 0x8257E3D4;
	sub_8233E028(ctx, base);
loc_8257E3D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f728
	ctx.lr = 0x8257E3E0;
	sub_8256F728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E3E8"))) PPC_WEAK_FUNC(sub_8257E3E8);
PPC_FUNC_IMPL(__imp__sub_8257E3E8) {
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
	// bl 0x8256f588
	ctx.lr = 0x8257E404;
	sub_8256F588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229bb00
	ctx.lr = 0x8257E40C;
	sub_8229BB00(ctx, base);
	// cmpwi cr6,r3,432
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 432, ctx.xer);
	// bge cr6,0x8257e4b8
	if (!ctx.cr6.lt) goto loc_8257E4B8;
	// cmpwi cr6,r3,424
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 424, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bge cr6,0x8257e480
	if (!ctx.cr6.lt) goto loc_8257E480;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257e444
	if (ctx.cr6.eq) goto loc_8257E444;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8257E444;
	sub_82294520(ctx, base);
loc_8257E444:
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// beq cr6,0x8257e4b8
	if (ctx.cr6.eq) goto loc_8257E4B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e4b8
	if (ctx.cr6.eq) goto loc_8257E4B8;
	// addi r5,r31,372
	ctx.r5.s64 = ctx.r31.s64 + 372;
	// lwz r6,816(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r4,r31,824
	ctx.r4.s64 = ctx.r31.s64 + 824;
	// bl 0x82574730
	ctx.lr = 0x8257E47C;
	sub_82574730(ctx, base);
	// b 0x8257e4b8
	goto loc_8257E4B8;
loc_8257E480:
	// lwz r4,844(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257e49c
	if (ctx.cr6.eq) goto loc_8257E49C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562628
	ctx.lr = 0x8257E498;
	sub_82562628(ctx, base);
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
loc_8257E49C:
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257e4b8
	if (ctx.cr6.eq) goto loc_8257E4B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562628
	ctx.lr = 0x8257E4B4;
	sub_82562628(ctx, base);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
loc_8257E4B8:
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

__attribute__((alias("__imp__sub_8257E4D0"))) PPC_WEAK_FUNC(sub_8257E4D0);
PPC_FUNC_IMPL(__imp__sub_8257E4D0) {
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
	// bl 0x82561b48
	ctx.lr = 0x8257E4E8;
	sub_82561B48(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11832
	ctx.r4.s64 = ctx.r11.s64 + -11832;
	// bl 0x822adb18
	ctx.lr = 0x8257E4F8;
	sub_822ADB18(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-11760
	ctx.r4.s64 = ctx.r10.s64 + -11760;
	// bl 0x822ac058
	ctx.lr = 0x8257E508;
	sub_822AC058(ctx, base);
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

__attribute__((alias("__imp__sub_8257E51C"))) PPC_WEAK_FUNC(sub_8257E51C);
PPC_FUNC_IMPL(__imp__sub_8257E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E520"))) PPC_WEAK_FUNC(sub_8257E520);
PPC_FUNC_IMPL(__imp__sub_8257E520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257E528;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-11760
	ctx.r11.s64 = ctx.r11.s64 + -11760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257e5b4
	if (!ctx.cr6.eq) goto loc_8257E5B4;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257e5b4
	if (!ctx.cr6.eq) goto loc_8257E5B4;
	// addi r29,r31,864
	ctx.r29.s64 = ctx.r31.s64 + 864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x8257E56C;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257e5cc
	if (ctx.cr6.eq) goto loc_8257E5CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-17836(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17836);
	// lwz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257E5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8257E5B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82566578
	ctx.lr = 0x8257E5C0;
	sub_82566578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8257e5d0
	if (ctx.cr6.eq) goto loc_8257E5D0;
loc_8257E5CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257E5D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E5D8"))) PPC_WEAK_FUNC(sub_8257E5D8);
PPC_FUNC_IMPL(__imp__sub_8257E5D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,820(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E5E8"))) PPC_WEAK_FUNC(sub_8257E5E8);
PPC_FUNC_IMPL(__imp__sub_8257E5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E5EC"))) PPC_WEAK_FUNC(sub_8257E5EC);
PPC_FUNC_IMPL(__imp__sub_8257E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E5F0"))) PPC_WEAK_FUNC(sub_8257E5F0);
PPC_FUNC_IMPL(__imp__sub_8257E5F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,824(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E600"))) PPC_WEAK_FUNC(sub_8257E600);
PPC_FUNC_IMPL(__imp__sub_8257E600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E604"))) PPC_WEAK_FUNC(sub_8257E604);
PPC_FUNC_IMPL(__imp__sub_8257E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E608"))) PPC_WEAK_FUNC(sub_8257E608);
PPC_FUNC_IMPL(__imp__sub_8257E608) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,828(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825a0470
	sub_825A0470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E618"))) PPC_WEAK_FUNC(sub_8257E618);
PPC_FUNC_IMPL(__imp__sub_8257E618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E61C"))) PPC_WEAK_FUNC(sub_8257E61C);
PPC_FUNC_IMPL(__imp__sub_8257E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E620"))) PPC_WEAK_FUNC(sub_8257E620);
PPC_FUNC_IMPL(__imp__sub_8257E620) {
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
	// lbz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257e650
	if (!ctx.cr6.eq) goto loc_8257E650;
	// lfs f0,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8257e658
	goto loc_8257E658;
loc_8257E650:
	// lfs f0,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
loc_8257E658:
	// addi r3,r31,1016
	ctx.r3.s64 = ctx.r31.s64 + 1016;
	// fsubs f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x825938b0
	ctx.lr = 0x8257E664;
	sub_825938B0(ctx, base);
	// lfs f0,1024(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1020(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8257e688
	if (!ctx.cr6.gt) goto loc_8257E688;
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// b 0x8257e68c
	goto loc_8257E68C;
loc_8257E688:
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_8257E68C:
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

__attribute__((alias("__imp__sub_8257E6A4"))) PPC_WEAK_FUNC(sub_8257E6A4);
PPC_FUNC_IMPL(__imp__sub_8257E6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E6A8"))) PPC_WEAK_FUNC(sub_8257E6A8);
PPC_FUNC_IMPL(__imp__sub_8257E6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8257E6B0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825938b0
	ctx.lr = 0x8257E6D4;
	sub_825938B0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8257e714
	if (!ctx.cr6.eq) goto loc_8257E714;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8257e700
	if (ctx.cr6.lt) goto loc_8257E700;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8257e704
	if (ctx.cr6.lt) goto loc_8257E704;
loc_8257E700:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_8257E704:
	// lfs f0,1020(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1024(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f31,f12,f31,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
loc_8257E714:
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82593930
	ctx.lr = 0x8257E724;
	sub_82593930(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825938b0
	ctx.lr = 0x8257E72C;
	sub_825938B0(ctx, base);
	// fsubs f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-17672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17672);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8257e778
	if (!ctx.cr6.gt) goto loc_8257E778;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257E764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8257E778:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E78C"))) PPC_WEAK_FUNC(sub_8257E78C);
PPC_FUNC_IMPL(__imp__sub_8257E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E790"))) PPC_WEAK_FUNC(sub_8257E790);
PPC_FUNC_IMPL(__imp__sub_8257E790) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,1016
	ctx.r3.s64 = ctx.r31.s64 + 1016;
	// bl 0x825938b0
	ctx.lr = 0x8257E7B4;
	sub_825938B0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257e7d8
	if (ctx.cr6.eq) goto loc_8257E7D8;
	// lfs f0,1024(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1020(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8257e7d8
	if (!ctx.cr6.gt) goto loc_8257E7D8;
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_8257E7D8:
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

