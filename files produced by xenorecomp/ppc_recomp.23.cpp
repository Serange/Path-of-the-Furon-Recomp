#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823122C8"))) PPC_WEAK_FUNC(sub_823122C8);
PPC_FUNC_IMPL(__imp__sub_823122C8) {
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
	// lwz r3,-28576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312300
	if (!ctx.cr6.eq) goto loc_82312300;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607298
	ctx.lr = 0x823122F4;
	sub_82607298(ctx, base);
	// stw r3,-28576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28576, ctx.r3.u32);
	// bl 0x82607358
	ctx.lr = 0x823122FC;
	sub_82607358(ctx, base);
	// lwz r3,-28576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28576);
loc_82312300:
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

__attribute__((alias("__imp__sub_82312314"))) PPC_WEAK_FUNC(sub_82312314);
PPC_FUNC_IMPL(__imp__sub_82312314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312318"))) PPC_WEAK_FUNC(sub_82312318);
PPC_FUNC_IMPL(__imp__sub_82312318) {
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
	// lwz r3,-27340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312350
	if (!ctx.cr6.eq) goto loc_82312350;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82759ad0
	ctx.lr = 0x82312344;
	sub_82759AD0(ctx, base);
	// stw r3,-27340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27340, ctx.r3.u32);
	// bl 0x82759b80
	ctx.lr = 0x8231234C;
	sub_82759B80(ctx, base);
	// lwz r3,-27340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27340);
loc_82312350:
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

__attribute__((alias("__imp__sub_82312364"))) PPC_WEAK_FUNC(sub_82312364);
PPC_FUNC_IMPL(__imp__sub_82312364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312368"))) PPC_WEAK_FUNC(sub_82312368);
PPC_FUNC_IMPL(__imp__sub_82312368) {
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
	// lwz r3,-28692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823123a0
	if (!ctx.cr6.eq) goto loc_823123A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82603340
	ctx.lr = 0x82312394;
	sub_82603340(ctx, base);
	// stw r3,-28692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28692, ctx.r3.u32);
	// bl 0x82603400
	ctx.lr = 0x8231239C;
	sub_82603400(ctx, base);
	// lwz r3,-28692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28692);
loc_823123A0:
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

__attribute__((alias("__imp__sub_823123B4"))) PPC_WEAK_FUNC(sub_823123B4);
PPC_FUNC_IMPL(__imp__sub_823123B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823123B8"))) PPC_WEAK_FUNC(sub_823123B8);
PPC_FUNC_IMPL(__imp__sub_823123B8) {
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
	// lwz r3,-27628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823123f0
	if (!ctx.cr6.eq) goto loc_823123F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e58c8
	ctx.lr = 0x823123E4;
	sub_826E58C8(ctx, base);
	// stw r3,-27628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27628, ctx.r3.u32);
	// bl 0x826e5988
	ctx.lr = 0x823123EC;
	sub_826E5988(ctx, base);
	// lwz r3,-27628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27628);
loc_823123F0:
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

__attribute__((alias("__imp__sub_82312404"))) PPC_WEAK_FUNC(sub_82312404);
PPC_FUNC_IMPL(__imp__sub_82312404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312408"))) PPC_WEAK_FUNC(sub_82312408);
PPC_FUNC_IMPL(__imp__sub_82312408) {
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
	// lwz r3,-28404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312440
	if (!ctx.cr6.eq) goto loc_82312440;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82628508
	ctx.lr = 0x82312434;
	sub_82628508(ctx, base);
	// stw r3,-28404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28404, ctx.r3.u32);
	// bl 0x826285c8
	ctx.lr = 0x8231243C;
	sub_826285C8(ctx, base);
	// lwz r3,-28404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28404);
loc_82312440:
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

__attribute__((alias("__imp__sub_82312454"))) PPC_WEAK_FUNC(sub_82312454);
PPC_FUNC_IMPL(__imp__sub_82312454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312458"))) PPC_WEAK_FUNC(sub_82312458);
PPC_FUNC_IMPL(__imp__sub_82312458) {
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
	// lwz r3,-28408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312490
	if (!ctx.cr6.eq) goto loc_82312490;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826282d8
	ctx.lr = 0x82312484;
	sub_826282D8(ctx, base);
	// stw r3,-28408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28408, ctx.r3.u32);
	// bl 0x82628398
	ctx.lr = 0x8231248C;
	sub_82628398(ctx, base);
	// lwz r3,-28408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28408);
loc_82312490:
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

__attribute__((alias("__imp__sub_823124A4"))) PPC_WEAK_FUNC(sub_823124A4);
PPC_FUNC_IMPL(__imp__sub_823124A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823124A8"))) PPC_WEAK_FUNC(sub_823124A8);
PPC_FUNC_IMPL(__imp__sub_823124A8) {
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
	// lwz r3,-28412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823124e0
	if (!ctx.cr6.eq) goto loc_823124E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826280b0
	ctx.lr = 0x823124D4;
	sub_826280B0(ctx, base);
	// stw r3,-28412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28412, ctx.r3.u32);
	// bl 0x82628170
	ctx.lr = 0x823124DC;
	sub_82628170(ctx, base);
	// lwz r3,-28412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28412);
loc_823124E0:
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

__attribute__((alias("__imp__sub_823124F4"))) PPC_WEAK_FUNC(sub_823124F4);
PPC_FUNC_IMPL(__imp__sub_823124F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823124F8"))) PPC_WEAK_FUNC(sub_823124F8);
PPC_FUNC_IMPL(__imp__sub_823124F8) {
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
	// lwz r3,-26108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312530
	if (!ctx.cr6.eq) goto loc_82312530;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827d59f0
	ctx.lr = 0x82312524;
	sub_827D59F0(ctx, base);
	// stw r3,-26108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26108, ctx.r3.u32);
	// bl 0x827d5ab0
	ctx.lr = 0x8231252C;
	sub_827D5AB0(ctx, base);
	// lwz r3,-26108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26108);
loc_82312530:
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

__attribute__((alias("__imp__sub_82312544"))) PPC_WEAK_FUNC(sub_82312544);
PPC_FUNC_IMPL(__imp__sub_82312544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312548"))) PPC_WEAK_FUNC(sub_82312548);
PPC_FUNC_IMPL(__imp__sub_82312548) {
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
	// lwz r3,-27624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312580
	if (!ctx.cr6.eq) goto loc_82312580;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e5af0
	ctx.lr = 0x82312574;
	sub_826E5AF0(ctx, base);
	// stw r3,-27624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27624, ctx.r3.u32);
	// bl 0x826e5bb0
	ctx.lr = 0x8231257C;
	sub_826E5BB0(ctx, base);
	// lwz r3,-27624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27624);
loc_82312580:
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

__attribute__((alias("__imp__sub_82312594"))) PPC_WEAK_FUNC(sub_82312594);
PPC_FUNC_IMPL(__imp__sub_82312594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312598"))) PPC_WEAK_FUNC(sub_82312598);
PPC_FUNC_IMPL(__imp__sub_82312598) {
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
	// lwz r3,-27620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823125d0
	if (!ctx.cr6.eq) goto loc_823125D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e5d20
	ctx.lr = 0x823125C4;
	sub_826E5D20(ctx, base);
	// stw r3,-27620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27620, ctx.r3.u32);
	// bl 0x826e5de0
	ctx.lr = 0x823125CC;
	sub_826E5DE0(ctx, base);
	// lwz r3,-27620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27620);
loc_823125D0:
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

__attribute__((alias("__imp__sub_823125E4"))) PPC_WEAK_FUNC(sub_823125E4);
PPC_FUNC_IMPL(__imp__sub_823125E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823125E8"))) PPC_WEAK_FUNC(sub_823125E8);
PPC_FUNC_IMPL(__imp__sub_823125E8) {
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
	// lwz r3,-27532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312620
	if (!ctx.cr6.eq) goto loc_82312620;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826fb000
	ctx.lr = 0x82312614;
	sub_826FB000(ctx, base);
	// stw r3,-27532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27532, ctx.r3.u32);
	// bl 0x826fb0c0
	ctx.lr = 0x8231261C;
	sub_826FB0C0(ctx, base);
	// lwz r3,-27532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27532);
loc_82312620:
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

__attribute__((alias("__imp__sub_82312634"))) PPC_WEAK_FUNC(sub_82312634);
PPC_FUNC_IMPL(__imp__sub_82312634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312638"))) PPC_WEAK_FUNC(sub_82312638);
PPC_FUNC_IMPL(__imp__sub_82312638) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r3,25372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312670
	if (!ctx.cr6.eq) goto loc_82312670;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82306ef0
	ctx.lr = 0x82312664;
	sub_82306EF0(ctx, base);
	// stw r3,25372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25372, ctx.r3.u32);
	// bl 0x82306fb0
	ctx.lr = 0x8231266C;
	sub_82306FB0(ctx, base);
	// lwz r3,25372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
loc_82312670:
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

__attribute__((alias("__imp__sub_82312684"))) PPC_WEAK_FUNC(sub_82312684);
PPC_FUNC_IMPL(__imp__sub_82312684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312688"))) PPC_WEAK_FUNC(sub_82312688);
PPC_FUNC_IMPL(__imp__sub_82312688) {
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
	// lwz r3,-28544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823126c0
	if (!ctx.cr6.eq) goto loc_823126C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82608418
	ctx.lr = 0x823126B4;
	sub_82608418(ctx, base);
	// stw r3,-28544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28544, ctx.r3.u32);
	// bl 0x826084d8
	ctx.lr = 0x823126BC;
	sub_826084D8(ctx, base);
	// lwz r3,-28544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28544);
loc_823126C0:
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

__attribute__((alias("__imp__sub_823126D4"))) PPC_WEAK_FUNC(sub_823126D4);
PPC_FUNC_IMPL(__imp__sub_823126D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823126D8"))) PPC_WEAK_FUNC(sub_823126D8);
PPC_FUNC_IMPL(__imp__sub_823126D8) {
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
	// lwz r3,-28476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312710
	if (!ctx.cr6.eq) goto loc_82312710;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8260a920
	ctx.lr = 0x82312704;
	sub_8260A920(ctx, base);
	// stw r3,-28476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28476, ctx.r3.u32);
	// bl 0x8260a9e0
	ctx.lr = 0x8231270C;
	sub_8260A9E0(ctx, base);
	// lwz r3,-28476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28476);
loc_82312710:
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

__attribute__((alias("__imp__sub_82312724"))) PPC_WEAK_FUNC(sub_82312724);
PPC_FUNC_IMPL(__imp__sub_82312724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312728"))) PPC_WEAK_FUNC(sub_82312728);
PPC_FUNC_IMPL(__imp__sub_82312728) {
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
	// lwz r3,-28752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312760
	if (!ctx.cr6.eq) goto loc_82312760;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82601268
	ctx.lr = 0x82312754;
	sub_82601268(ctx, base);
	// stw r3,-28752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28752, ctx.r3.u32);
	// bl 0x82601328
	ctx.lr = 0x8231275C;
	sub_82601328(ctx, base);
	// lwz r3,-28752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28752);
loc_82312760:
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

__attribute__((alias("__imp__sub_82312774"))) PPC_WEAK_FUNC(sub_82312774);
PPC_FUNC_IMPL(__imp__sub_82312774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312778"))) PPC_WEAK_FUNC(sub_82312778);
PPC_FUNC_IMPL(__imp__sub_82312778) {
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
	// lwz r3,-28688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823127b0
	if (!ctx.cr6.eq) goto loc_823127B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82603570
	ctx.lr = 0x823127A4;
	sub_82603570(ctx, base);
	// stw r3,-28688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28688, ctx.r3.u32);
	// bl 0x82603630
	ctx.lr = 0x823127AC;
	sub_82603630(ctx, base);
	// lwz r3,-28688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28688);
loc_823127B0:
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

__attribute__((alias("__imp__sub_823127C4"))) PPC_WEAK_FUNC(sub_823127C4);
PPC_FUNC_IMPL(__imp__sub_823127C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823127C8"))) PPC_WEAK_FUNC(sub_823127C8);
PPC_FUNC_IMPL(__imp__sub_823127C8) {
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
	// lwz r3,-28604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312800
	if (!ctx.cr6.eq) goto loc_82312800;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82606360
	ctx.lr = 0x823127F4;
	sub_82606360(ctx, base);
	// stw r3,-28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28604, ctx.r3.u32);
	// bl 0x82606420
	ctx.lr = 0x823127FC;
	sub_82606420(ctx, base);
	// lwz r3,-28604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28604);
loc_82312800:
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

__attribute__((alias("__imp__sub_82312814"))) PPC_WEAK_FUNC(sub_82312814);
PPC_FUNC_IMPL(__imp__sub_82312814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312818"))) PPC_WEAK_FUNC(sub_82312818);
PPC_FUNC_IMPL(__imp__sub_82312818) {
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
	// lwz r3,-27408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312850
	if (!ctx.cr6.eq) goto loc_82312850;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827490d0
	ctx.lr = 0x82312844;
	sub_827490D0(ctx, base);
	// stw r3,-27408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27408, ctx.r3.u32);
	// bl 0x82749190
	ctx.lr = 0x8231284C;
	sub_82749190(ctx, base);
	// lwz r3,-27408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27408);
loc_82312850:
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

__attribute__((alias("__imp__sub_82312864"))) PPC_WEAK_FUNC(sub_82312864);
PPC_FUNC_IMPL(__imp__sub_82312864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312868"))) PPC_WEAK_FUNC(sub_82312868);
PPC_FUNC_IMPL(__imp__sub_82312868) {
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
	// lwz r3,-27236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823128a0
	if (!ctx.cr6.eq) goto loc_823128A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8278df70
	ctx.lr = 0x82312894;
	sub_8278DF70(ctx, base);
	// stw r3,-27236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27236, ctx.r3.u32);
	// bl 0x8278e030
	ctx.lr = 0x8231289C;
	sub_8278E030(ctx, base);
	// lwz r3,-27236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27236);
loc_823128A0:
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

__attribute__((alias("__imp__sub_823128B4"))) PPC_WEAK_FUNC(sub_823128B4);
PPC_FUNC_IMPL(__imp__sub_823128B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823128B8"))) PPC_WEAK_FUNC(sub_823128B8);
PPC_FUNC_IMPL(__imp__sub_823128B8) {
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
	// lwz r3,-27284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823128f0
	if (!ctx.cr6.eq) goto loc_823128F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8276bb30
	ctx.lr = 0x823128E4;
	sub_8276BB30(ctx, base);
	// stw r3,-27284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27284, ctx.r3.u32);
	// bl 0x8276bbf0
	ctx.lr = 0x823128EC;
	sub_8276BBF0(ctx, base);
	// lwz r3,-27284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27284);
loc_823128F0:
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

__attribute__((alias("__imp__sub_82312904"))) PPC_WEAK_FUNC(sub_82312904);
PPC_FUNC_IMPL(__imp__sub_82312904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312908"))) PPC_WEAK_FUNC(sub_82312908);
PPC_FUNC_IMPL(__imp__sub_82312908) {
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
	// lwz r3,-27360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312940
	if (!ctx.cr6.eq) goto loc_82312940;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82754de0
	ctx.lr = 0x82312934;
	sub_82754DE0(ctx, base);
	// stw r3,-27360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27360, ctx.r3.u32);
	// bl 0x82754ea0
	ctx.lr = 0x8231293C;
	sub_82754EA0(ctx, base);
	// lwz r3,-27360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27360);
loc_82312940:
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

__attribute__((alias("__imp__sub_82312954"))) PPC_WEAK_FUNC(sub_82312954);
PPC_FUNC_IMPL(__imp__sub_82312954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312958"))) PPC_WEAK_FUNC(sub_82312958);
PPC_FUNC_IMPL(__imp__sub_82312958) {
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
	// lwz r3,-27504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312990
	if (!ctx.cr6.eq) goto loc_82312990;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82706178
	ctx.lr = 0x82312984;
	sub_82706178(ctx, base);
	// stw r3,-27504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27504, ctx.r3.u32);
	// bl 0x82706238
	ctx.lr = 0x8231298C;
	sub_82706238(ctx, base);
	// lwz r3,-27504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27504);
loc_82312990:
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

__attribute__((alias("__imp__sub_823129A4"))) PPC_WEAK_FUNC(sub_823129A4);
PPC_FUNC_IMPL(__imp__sub_823129A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823129A8"))) PPC_WEAK_FUNC(sub_823129A8);
PPC_FUNC_IMPL(__imp__sub_823129A8) {
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
	// lwz r3,-28160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823129e0
	if (!ctx.cr6.eq) goto loc_823129E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82659d40
	ctx.lr = 0x823129D4;
	sub_82659D40(ctx, base);
	// stw r3,-28160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28160, ctx.r3.u32);
	// bl 0x82659e00
	ctx.lr = 0x823129DC;
	sub_82659E00(ctx, base);
	// lwz r3,-28160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28160);
loc_823129E0:
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

__attribute__((alias("__imp__sub_823129F4"))) PPC_WEAK_FUNC(sub_823129F4);
PPC_FUNC_IMPL(__imp__sub_823129F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823129F8"))) PPC_WEAK_FUNC(sub_823129F8);
PPC_FUNC_IMPL(__imp__sub_823129F8) {
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
	// lwz r3,-28228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312a30
	if (!ctx.cr6.eq) goto loc_82312A30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264c800
	ctx.lr = 0x82312A24;
	sub_8264C800(ctx, base);
	// stw r3,-28228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28228, ctx.r3.u32);
	// bl 0x8264c8c0
	ctx.lr = 0x82312A2C;
	sub_8264C8C0(ctx, base);
	// lwz r3,-28228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28228);
loc_82312A30:
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

__attribute__((alias("__imp__sub_82312A44"))) PPC_WEAK_FUNC(sub_82312A44);
PPC_FUNC_IMPL(__imp__sub_82312A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312A48"))) PPC_WEAK_FUNC(sub_82312A48);
PPC_FUNC_IMPL(__imp__sub_82312A48) {
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
	// lwz r3,-30376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312a80
	if (!ctx.cr6.eq) goto loc_82312A80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824caca0
	ctx.lr = 0x82312A74;
	sub_824CACA0(ctx, base);
	// stw r3,-30376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30376, ctx.r3.u32);
	// bl 0x824cad60
	ctx.lr = 0x82312A7C;
	sub_824CAD60(ctx, base);
	// lwz r3,-30376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30376);
loc_82312A80:
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

__attribute__((alias("__imp__sub_82312A94"))) PPC_WEAK_FUNC(sub_82312A94);
PPC_FUNC_IMPL(__imp__sub_82312A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312A98"))) PPC_WEAK_FUNC(sub_82312A98);
PPC_FUNC_IMPL(__imp__sub_82312A98) {
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
	// lwz r3,-27224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312ad0
	if (!ctx.cr6.eq) goto loc_82312AD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8279d5b8
	ctx.lr = 0x82312AC4;
	sub_8279D5B8(ctx, base);
	// stw r3,-27224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27224, ctx.r3.u32);
	// bl 0x8279d678
	ctx.lr = 0x82312ACC;
	sub_8279D678(ctx, base);
	// lwz r3,-27224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27224);
loc_82312AD0:
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

__attribute__((alias("__imp__sub_82312AE4"))) PPC_WEAK_FUNC(sub_82312AE4);
PPC_FUNC_IMPL(__imp__sub_82312AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312AE8"))) PPC_WEAK_FUNC(sub_82312AE8);
PPC_FUNC_IMPL(__imp__sub_82312AE8) {
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
	// lwz r3,-27216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312b20
	if (!ctx.cr6.eq) goto loc_82312B20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8279da18
	ctx.lr = 0x82312B14;
	sub_8279DA18(ctx, base);
	// stw r3,-27216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27216, ctx.r3.u32);
	// bl 0x8279dad8
	ctx.lr = 0x82312B1C;
	sub_8279DAD8(ctx, base);
	// lwz r3,-27216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27216);
loc_82312B20:
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

__attribute__((alias("__imp__sub_82312B34"))) PPC_WEAK_FUNC(sub_82312B34);
PPC_FUNC_IMPL(__imp__sub_82312B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312B38"))) PPC_WEAK_FUNC(sub_82312B38);
PPC_FUNC_IMPL(__imp__sub_82312B38) {
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
	// lwz r3,-27220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312b70
	if (!ctx.cr6.eq) goto loc_82312B70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8279d7e8
	ctx.lr = 0x82312B64;
	sub_8279D7E8(ctx, base);
	// stw r3,-27220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27220, ctx.r3.u32);
	// bl 0x8279d8a8
	ctx.lr = 0x82312B6C;
	sub_8279D8A8(ctx, base);
	// lwz r3,-27220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27220);
loc_82312B70:
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

__attribute__((alias("__imp__sub_82312B84"))) PPC_WEAK_FUNC(sub_82312B84);
PPC_FUNC_IMPL(__imp__sub_82312B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312B88"))) PPC_WEAK_FUNC(sub_82312B88);
PPC_FUNC_IMPL(__imp__sub_82312B88) {
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
	// lwz r3,-31200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312bc0
	if (!ctx.cr6.eq) goto loc_82312BC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8243d968
	ctx.lr = 0x82312BB4;
	sub_8243D968(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// bl 0x8243da28
	ctx.lr = 0x82312BBC;
	sub_8243DA28(ctx, base);
	// lwz r3,-31200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_82312BC0:
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

__attribute__((alias("__imp__sub_82312BD4"))) PPC_WEAK_FUNC(sub_82312BD4);
PPC_FUNC_IMPL(__imp__sub_82312BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312BD8"))) PPC_WEAK_FUNC(sub_82312BD8);
PPC_FUNC_IMPL(__imp__sub_82312BD8) {
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
	// lwz r3,-27352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312c10
	if (!ctx.cr6.eq) goto loc_82312C10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827579b0
	ctx.lr = 0x82312C04;
	sub_827579B0(ctx, base);
	// stw r3,-27352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27352, ctx.r3.u32);
	// bl 0x82757a70
	ctx.lr = 0x82312C0C;
	sub_82757A70(ctx, base);
	// lwz r3,-27352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27352);
loc_82312C10:
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

__attribute__((alias("__imp__sub_82312C24"))) PPC_WEAK_FUNC(sub_82312C24);
PPC_FUNC_IMPL(__imp__sub_82312C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312C28"))) PPC_WEAK_FUNC(sub_82312C28);
PPC_FUNC_IMPL(__imp__sub_82312C28) {
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
	// lwz r3,-27480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312c60
	if (!ctx.cr6.eq) goto loc_82312C60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8270f910
	ctx.lr = 0x82312C54;
	sub_8270F910(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
	// bl 0x8270f9d0
	ctx.lr = 0x82312C5C;
	sub_8270F9D0(ctx, base);
	// lwz r3,-27480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
loc_82312C60:
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

__attribute__((alias("__imp__sub_82312C74"))) PPC_WEAK_FUNC(sub_82312C74);
PPC_FUNC_IMPL(__imp__sub_82312C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312C78"))) PPC_WEAK_FUNC(sub_82312C78);
PPC_FUNC_IMPL(__imp__sub_82312C78) {
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
	// lwz r3,-28484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312cb0
	if (!ctx.cr6.eq) goto loc_82312CB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8260a4c8
	ctx.lr = 0x82312CA4;
	sub_8260A4C8(ctx, base);
	// stw r3,-28484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28484, ctx.r3.u32);
	// bl 0x8260a588
	ctx.lr = 0x82312CAC;
	sub_8260A588(ctx, base);
	// lwz r3,-28484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28484);
loc_82312CB0:
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

__attribute__((alias("__imp__sub_82312CC4"))) PPC_WEAK_FUNC(sub_82312CC4);
PPC_FUNC_IMPL(__imp__sub_82312CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312CC8"))) PPC_WEAK_FUNC(sub_82312CC8);
PPC_FUNC_IMPL(__imp__sub_82312CC8) {
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
	// lwz r3,-28716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312d00
	if (!ctx.cr6.eq) goto loc_82312D00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82602620
	ctx.lr = 0x82312CF4;
	sub_82602620(ctx, base);
	// stw r3,-28716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28716, ctx.r3.u32);
	// bl 0x826026e0
	ctx.lr = 0x82312CFC;
	sub_826026E0(ctx, base);
	// lwz r3,-28716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28716);
loc_82312D00:
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

__attribute__((alias("__imp__sub_82312D14"))) PPC_WEAK_FUNC(sub_82312D14);
PPC_FUNC_IMPL(__imp__sub_82312D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312D18"))) PPC_WEAK_FUNC(sub_82312D18);
PPC_FUNC_IMPL(__imp__sub_82312D18) {
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
	// lwz r3,-28464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312d50
	if (!ctx.cr6.eq) goto loc_82312D50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8261bc00
	ctx.lr = 0x82312D44;
	sub_8261BC00(ctx, base);
	// stw r3,-28464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28464, ctx.r3.u32);
	// bl 0x8261bcc0
	ctx.lr = 0x82312D4C;
	sub_8261BCC0(ctx, base);
	// lwz r3,-28464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28464);
loc_82312D50:
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

__attribute__((alias("__imp__sub_82312D64"))) PPC_WEAK_FUNC(sub_82312D64);
PPC_FUNC_IMPL(__imp__sub_82312D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312D68"))) PPC_WEAK_FUNC(sub_82312D68);
PPC_FUNC_IMPL(__imp__sub_82312D68) {
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
	// lwz r3,-27608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312da0
	if (!ctx.cr6.eq) goto loc_82312DA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e8298
	ctx.lr = 0x82312D94;
	sub_826E8298(ctx, base);
	// stw r3,-27608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27608, ctx.r3.u32);
	// bl 0x826e8358
	ctx.lr = 0x82312D9C;
	sub_826E8358(ctx, base);
	// lwz r3,-27608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27608);
loc_82312DA0:
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

__attribute__((alias("__imp__sub_82312DB4"))) PPC_WEAK_FUNC(sub_82312DB4);
PPC_FUNC_IMPL(__imp__sub_82312DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312DB8"))) PPC_WEAK_FUNC(sub_82312DB8);
PPC_FUNC_IMPL(__imp__sub_82312DB8) {
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
	// lwz r3,-26116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312df0
	if (!ctx.cr6.eq) goto loc_82312DF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827d24e0
	ctx.lr = 0x82312DE4;
	sub_827D24E0(ctx, base);
	// stw r3,-26116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26116, ctx.r3.u32);
	// bl 0x827d25a0
	ctx.lr = 0x82312DEC;
	sub_827D25A0(ctx, base);
	// lwz r3,-26116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26116);
loc_82312DF0:
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

__attribute__((alias("__imp__sub_82312E04"))) PPC_WEAK_FUNC(sub_82312E04);
PPC_FUNC_IMPL(__imp__sub_82312E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312E08"))) PPC_WEAK_FUNC(sub_82312E08);
PPC_FUNC_IMPL(__imp__sub_82312E08) {
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
	// lwz r3,-26168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312e40
	if (!ctx.cr6.eq) goto loc_82312E40;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827bdaa0
	ctx.lr = 0x82312E34;
	sub_827BDAA0(ctx, base);
	// stw r3,-26168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26168, ctx.r3.u32);
	// bl 0x827bdb60
	ctx.lr = 0x82312E3C;
	sub_827BDB60(ctx, base);
	// lwz r3,-26168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26168);
loc_82312E40:
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

__attribute__((alias("__imp__sub_82312E54"))) PPC_WEAK_FUNC(sub_82312E54);
PPC_FUNC_IMPL(__imp__sub_82312E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312E58"))) PPC_WEAK_FUNC(sub_82312E58);
PPC_FUNC_IMPL(__imp__sub_82312E58) {
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
	// lwz r3,-27756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312e90
	if (!ctx.cr6.eq) goto loc_82312E90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826cf928
	ctx.lr = 0x82312E84;
	sub_826CF928(ctx, base);
	// stw r3,-27756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27756, ctx.r3.u32);
	// bl 0x826cf9e8
	ctx.lr = 0x82312E8C;
	sub_826CF9E8(ctx, base);
	// lwz r3,-27756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27756);
loc_82312E90:
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

__attribute__((alias("__imp__sub_82312EA4"))) PPC_WEAK_FUNC(sub_82312EA4);
PPC_FUNC_IMPL(__imp__sub_82312EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312EA8"))) PPC_WEAK_FUNC(sub_82312EA8);
PPC_FUNC_IMPL(__imp__sub_82312EA8) {
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
	// lwz r3,-28172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312ee0
	if (!ctx.cr6.eq) goto loc_82312EE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826596b8
	ctx.lr = 0x82312ED4;
	sub_826596B8(ctx, base);
	// stw r3,-28172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28172, ctx.r3.u32);
	// bl 0x82659778
	ctx.lr = 0x82312EDC;
	sub_82659778(ctx, base);
	// lwz r3,-28172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28172);
loc_82312EE0:
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

__attribute__((alias("__imp__sub_82312EF4"))) PPC_WEAK_FUNC(sub_82312EF4);
PPC_FUNC_IMPL(__imp__sub_82312EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312EF8"))) PPC_WEAK_FUNC(sub_82312EF8);
PPC_FUNC_IMPL(__imp__sub_82312EF8) {
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
	// lwz r3,-27760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312f30
	if (!ctx.cr6.eq) goto loc_82312F30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826cf6f8
	ctx.lr = 0x82312F24;
	sub_826CF6F8(ctx, base);
	// stw r3,-27760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27760, ctx.r3.u32);
	// bl 0x826cf7b8
	ctx.lr = 0x82312F2C;
	sub_826CF7B8(ctx, base);
	// lwz r3,-27760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27760);
loc_82312F30:
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

__attribute__((alias("__imp__sub_82312F44"))) PPC_WEAK_FUNC(sub_82312F44);
PPC_FUNC_IMPL(__imp__sub_82312F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312F48"))) PPC_WEAK_FUNC(sub_82312F48);
PPC_FUNC_IMPL(__imp__sub_82312F48) {
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
	// lwz r3,-28804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312f80
	if (!ctx.cr6.eq) goto loc_82312F80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ff5f8
	ctx.lr = 0x82312F74;
	sub_825FF5F8(ctx, base);
	// stw r3,-28804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28804, ctx.r3.u32);
	// bl 0x825ff6b8
	ctx.lr = 0x82312F7C;
	sub_825FF6B8(ctx, base);
	// lwz r3,-28804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28804);
loc_82312F80:
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

__attribute__((alias("__imp__sub_82312F94"))) PPC_WEAK_FUNC(sub_82312F94);
PPC_FUNC_IMPL(__imp__sub_82312F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312F98"))) PPC_WEAK_FUNC(sub_82312F98);
PPC_FUNC_IMPL(__imp__sub_82312F98) {
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
	// lwz r3,-28524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82312fd0
	if (!ctx.cr6.eq) goto loc_82312FD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82608ef8
	ctx.lr = 0x82312FC4;
	sub_82608EF8(ctx, base);
	// stw r3,-28524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28524, ctx.r3.u32);
	// bl 0x82608fb8
	ctx.lr = 0x82312FCC;
	sub_82608FB8(ctx, base);
	// lwz r3,-28524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28524);
loc_82312FD0:
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

__attribute__((alias("__imp__sub_82312FE4"))) PPC_WEAK_FUNC(sub_82312FE4);
PPC_FUNC_IMPL(__imp__sub_82312FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312FE8"))) PPC_WEAK_FUNC(sub_82312FE8);
PPC_FUNC_IMPL(__imp__sub_82312FE8) {
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
	// lwz r3,-28528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313020
	if (!ctx.cr6.eq) goto loc_82313020;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82608cc8
	ctx.lr = 0x82313014;
	sub_82608CC8(ctx, base);
	// stw r3,-28528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28528, ctx.r3.u32);
	// bl 0x82608d88
	ctx.lr = 0x8231301C;
	sub_82608D88(ctx, base);
	// lwz r3,-28528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28528);
loc_82313020:
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

__attribute__((alias("__imp__sub_82313034"))) PPC_WEAK_FUNC(sub_82313034);
PPC_FUNC_IMPL(__imp__sub_82313034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313038"))) PPC_WEAK_FUNC(sub_82313038);
PPC_FUNC_IMPL(__imp__sub_82313038) {
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
	// lwz r3,-28488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313070
	if (!ctx.cr6.eq) goto loc_82313070;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8260a298
	ctx.lr = 0x82313064;
	sub_8260A298(ctx, base);
	// stw r3,-28488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28488, ctx.r3.u32);
	// bl 0x8260a358
	ctx.lr = 0x8231306C;
	sub_8260A358(ctx, base);
	// lwz r3,-28488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28488);
loc_82313070:
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

__attribute__((alias("__imp__sub_82313084"))) PPC_WEAK_FUNC(sub_82313084);
PPC_FUNC_IMPL(__imp__sub_82313084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313088"))) PPC_WEAK_FUNC(sub_82313088);
PPC_FUNC_IMPL(__imp__sub_82313088) {
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
	// lwz r3,-31244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823130c0
	if (!ctx.cr6.eq) goto loc_823130C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424f00
	ctx.lr = 0x823130B4;
	sub_82424F00(ctx, base);
	// stw r3,-31244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31244, ctx.r3.u32);
	// bl 0x82424fc0
	ctx.lr = 0x823130BC;
	sub_82424FC0(ctx, base);
	// lwz r3,-31244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31244);
loc_823130C0:
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

__attribute__((alias("__imp__sub_823130D4"))) PPC_WEAK_FUNC(sub_823130D4);
PPC_FUNC_IMPL(__imp__sub_823130D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823130D8"))) PPC_WEAK_FUNC(sub_823130D8);
PPC_FUNC_IMPL(__imp__sub_823130D8) {
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
	// lwz r3,-31252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313110
	if (!ctx.cr6.eq) goto loc_82313110;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424aa0
	ctx.lr = 0x82313104;
	sub_82424AA0(ctx, base);
	// stw r3,-31252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31252, ctx.r3.u32);
	// bl 0x82424b60
	ctx.lr = 0x8231310C;
	sub_82424B60(ctx, base);
	// lwz r3,-31252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31252);
loc_82313110:
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

__attribute__((alias("__imp__sub_82313124"))) PPC_WEAK_FUNC(sub_82313124);
PPC_FUNC_IMPL(__imp__sub_82313124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313128"))) PPC_WEAK_FUNC(sub_82313128);
PPC_FUNC_IMPL(__imp__sub_82313128) {
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
	// lwz r3,-31248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313160
	if (!ctx.cr6.eq) goto loc_82313160;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424cd0
	ctx.lr = 0x82313154;
	sub_82424CD0(ctx, base);
	// stw r3,-31248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31248, ctx.r3.u32);
	// bl 0x82424d90
	ctx.lr = 0x8231315C;
	sub_82424D90(ctx, base);
	// lwz r3,-31248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31248);
loc_82313160:
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

__attribute__((alias("__imp__sub_82313174"))) PPC_WEAK_FUNC(sub_82313174);
PPC_FUNC_IMPL(__imp__sub_82313174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313178"))) PPC_WEAK_FUNC(sub_82313178);
PPC_FUNC_IMPL(__imp__sub_82313178) {
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
	// lwz r3,-31256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823131b0
	if (!ctx.cr6.eq) goto loc_823131B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82424878
	ctx.lr = 0x823131A4;
	sub_82424878(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// bl 0x82424938
	ctx.lr = 0x823131AC;
	sub_82424938(ctx, base);
	// lwz r3,-31256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_823131B0:
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

__attribute__((alias("__imp__sub_823131C4"))) PPC_WEAK_FUNC(sub_823131C4);
PPC_FUNC_IMPL(__imp__sub_823131C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823131C8"))) PPC_WEAK_FUNC(sub_823131C8);
PPC_FUNC_IMPL(__imp__sub_823131C8) {
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
	// lwz r3,-27604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313200
	if (!ctx.cr6.eq) goto loc_82313200;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e8d00
	ctx.lr = 0x823131F4;
	sub_826E8D00(ctx, base);
	// stw r3,-27604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27604, ctx.r3.u32);
	// bl 0x826e8db8
	ctx.lr = 0x823131FC;
	sub_826E8DB8(ctx, base);
	// lwz r3,-27604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27604);
loc_82313200:
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

__attribute__((alias("__imp__sub_82313214"))) PPC_WEAK_FUNC(sub_82313214);
PPC_FUNC_IMPL(__imp__sub_82313214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313218"))) PPC_WEAK_FUNC(sub_82313218);
PPC_FUNC_IMPL(__imp__sub_82313218) {
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
	// lwz r3,-27600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313250
	if (!ctx.cr6.eq) goto loc_82313250;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826e9158
	ctx.lr = 0x82313244;
	sub_826E9158(ctx, base);
	// stw r3,-27600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27600, ctx.r3.u32);
	// bl 0x826e9218
	ctx.lr = 0x8231324C;
	sub_826E9218(ctx, base);
	// lwz r3,-27600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27600);
loc_82313250:
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

__attribute__((alias("__imp__sub_82313264"))) PPC_WEAK_FUNC(sub_82313264);
PPC_FUNC_IMPL(__imp__sub_82313264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313268"))) PPC_WEAK_FUNC(sub_82313268);
PPC_FUNC_IMPL(__imp__sub_82313268) {
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
	// lwz r3,-28564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823132a0
	if (!ctx.cr6.eq) goto loc_823132A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607928
	ctx.lr = 0x82313294;
	sub_82607928(ctx, base);
	// stw r3,-28564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28564, ctx.r3.u32);
	// bl 0x826079e8
	ctx.lr = 0x8231329C;
	sub_826079E8(ctx, base);
	// lwz r3,-28564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28564);
loc_823132A0:
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

__attribute__((alias("__imp__sub_823132B4"))) PPC_WEAK_FUNC(sub_823132B4);
PPC_FUNC_IMPL(__imp__sub_823132B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823132B8"))) PPC_WEAK_FUNC(sub_823132B8);
PPC_FUNC_IMPL(__imp__sub_823132B8) {
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
	// lwz r3,-28724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823132f0
	if (!ctx.cr6.eq) goto loc_823132F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826021c0
	ctx.lr = 0x823132E4;
	sub_826021C0(ctx, base);
	// stw r3,-28724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28724, ctx.r3.u32);
	// bl 0x82602280
	ctx.lr = 0x823132EC;
	sub_82602280(ctx, base);
	// lwz r3,-28724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28724);
loc_823132F0:
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

__attribute__((alias("__imp__sub_82313304"))) PPC_WEAK_FUNC(sub_82313304);
PPC_FUNC_IMPL(__imp__sub_82313304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313308"))) PPC_WEAK_FUNC(sub_82313308);
PPC_FUNC_IMPL(__imp__sub_82313308) {
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
	// lwz r3,-28596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313340
	if (!ctx.cr6.eq) goto loc_82313340;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826067b0
	ctx.lr = 0x82313334;
	sub_826067B0(ctx, base);
	// stw r3,-28596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28596, ctx.r3.u32);
	// bl 0x82606870
	ctx.lr = 0x8231333C;
	sub_82606870(ctx, base);
	// lwz r3,-28596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28596);
loc_82313340:
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

__attribute__((alias("__imp__sub_82313354"))) PPC_WEAK_FUNC(sub_82313354);
PPC_FUNC_IMPL(__imp__sub_82313354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313358"))) PPC_WEAK_FUNC(sub_82313358);
PPC_FUNC_IMPL(__imp__sub_82313358) {
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
	// lwz r3,-31760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313390
	if (!ctx.cr6.eq) goto loc_82313390;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82376f30
	ctx.lr = 0x82313384;
	sub_82376F30(ctx, base);
	// stw r3,-31760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31760, ctx.r3.u32);
	// bl 0x82376ff0
	ctx.lr = 0x8231338C;
	sub_82376FF0(ctx, base);
	// lwz r3,-31760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31760);
loc_82313390:
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

__attribute__((alias("__imp__sub_823133A4"))) PPC_WEAK_FUNC(sub_823133A4);
PPC_FUNC_IMPL(__imp__sub_823133A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823133A8"))) PPC_WEAK_FUNC(sub_823133A8);
PPC_FUNC_IMPL(__imp__sub_823133A8) {
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
	// lwz r3,-28588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28588);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823133e0
	if (!ctx.cr6.eq) goto loc_823133E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82606c08
	ctx.lr = 0x823133D4;
	sub_82606C08(ctx, base);
	// stw r3,-28588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28588, ctx.r3.u32);
	// bl 0x82606cc8
	ctx.lr = 0x823133DC;
	sub_82606CC8(ctx, base);
	// lwz r3,-28588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28588);
loc_823133E0:
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

__attribute__((alias("__imp__sub_823133F4"))) PPC_WEAK_FUNC(sub_823133F4);
PPC_FUNC_IMPL(__imp__sub_823133F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823133F8"))) PPC_WEAK_FUNC(sub_823133F8);
PPC_FUNC_IMPL(__imp__sub_823133F8) {
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
	// lwz r3,-28668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313430
	if (!ctx.cr6.eq) goto loc_82313430;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604050
	ctx.lr = 0x82313424;
	sub_82604050(ctx, base);
	// stw r3,-28668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28668, ctx.r3.u32);
	// bl 0x82604110
	ctx.lr = 0x8231342C;
	sub_82604110(ctx, base);
	// lwz r3,-28668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28668);
loc_82313430:
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

__attribute__((alias("__imp__sub_82313444"))) PPC_WEAK_FUNC(sub_82313444);
PPC_FUNC_IMPL(__imp__sub_82313444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313448"))) PPC_WEAK_FUNC(sub_82313448);
PPC_FUNC_IMPL(__imp__sub_82313448) {
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
	// lwz r3,-28660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313480
	if (!ctx.cr6.eq) goto loc_82313480;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826044b0
	ctx.lr = 0x82313474;
	sub_826044B0(ctx, base);
	// stw r3,-28660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28660, ctx.r3.u32);
	// bl 0x82604570
	ctx.lr = 0x8231347C;
	sub_82604570(ctx, base);
	// lwz r3,-28660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28660);
loc_82313480:
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

__attribute__((alias("__imp__sub_82313494"))) PPC_WEAK_FUNC(sub_82313494);
PPC_FUNC_IMPL(__imp__sub_82313494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313498"))) PPC_WEAK_FUNC(sub_82313498);
PPC_FUNC_IMPL(__imp__sub_82313498) {
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
	// lwz r3,-28664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823134d0
	if (!ctx.cr6.eq) goto loc_823134D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604280
	ctx.lr = 0x823134C4;
	sub_82604280(ctx, base);
	// stw r3,-28664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28664, ctx.r3.u32);
	// bl 0x82604340
	ctx.lr = 0x823134CC;
	sub_82604340(ctx, base);
	// lwz r3,-28664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28664);
loc_823134D0:
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

__attribute__((alias("__imp__sub_823134E4"))) PPC_WEAK_FUNC(sub_823134E4);
PPC_FUNC_IMPL(__imp__sub_823134E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823134E8"))) PPC_WEAK_FUNC(sub_823134E8);
PPC_FUNC_IMPL(__imp__sub_823134E8) {
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
	// lwz r3,-30348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313520
	if (!ctx.cr6.eq) goto loc_82313520;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824cbbe0
	ctx.lr = 0x82313514;
	sub_824CBBE0(ctx, base);
	// stw r3,-30348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30348, ctx.r3.u32);
	// bl 0x824cbca0
	ctx.lr = 0x8231351C;
	sub_824CBCA0(ctx, base);
	// lwz r3,-30348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30348);
loc_82313520:
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

__attribute__((alias("__imp__sub_82313534"))) PPC_WEAK_FUNC(sub_82313534);
PPC_FUNC_IMPL(__imp__sub_82313534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313538"))) PPC_WEAK_FUNC(sub_82313538);
PPC_FUNC_IMPL(__imp__sub_82313538) {
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
	// lwz r3,-27752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313570
	if (!ctx.cr6.eq) goto loc_82313570;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826d1ed0
	ctx.lr = 0x82313564;
	sub_826D1ED0(ctx, base);
	// stw r3,-27752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27752, ctx.r3.u32);
	// bl 0x826d1f90
	ctx.lr = 0x8231356C;
	sub_826D1F90(ctx, base);
	// lwz r3,-27752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27752);
loc_82313570:
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

__attribute__((alias("__imp__sub_82313584"))) PPC_WEAK_FUNC(sub_82313584);
PPC_FUNC_IMPL(__imp__sub_82313584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313588"))) PPC_WEAK_FUNC(sub_82313588);
PPC_FUNC_IMPL(__imp__sub_82313588) {
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
	// lwz r3,-30380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823135c0
	if (!ctx.cr6.eq) goto loc_823135C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824caa70
	ctx.lr = 0x823135B4;
	sub_824CAA70(ctx, base);
	// stw r3,-30380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30380, ctx.r3.u32);
	// bl 0x824cab30
	ctx.lr = 0x823135BC;
	sub_824CAB30(ctx, base);
	// lwz r3,-30380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30380);
loc_823135C0:
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

__attribute__((alias("__imp__sub_823135D4"))) PPC_WEAK_FUNC(sub_823135D4);
PPC_FUNC_IMPL(__imp__sub_823135D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823135D8"))) PPC_WEAK_FUNC(sub_823135D8);
PPC_FUNC_IMPL(__imp__sub_823135D8) {
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
	// lwz r3,-28628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313610
	if (!ctx.cr6.eq) goto loc_82313610;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82605630
	ctx.lr = 0x82313604;
	sub_82605630(ctx, base);
	// stw r3,-28628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28628, ctx.r3.u32);
	// bl 0x826056f0
	ctx.lr = 0x8231360C;
	sub_826056F0(ctx, base);
	// lwz r3,-28628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28628);
loc_82313610:
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

__attribute__((alias("__imp__sub_82313624"))) PPC_WEAK_FUNC(sub_82313624);
PPC_FUNC_IMPL(__imp__sub_82313624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313628"))) PPC_WEAK_FUNC(sub_82313628);
PPC_FUNC_IMPL(__imp__sub_82313628) {
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
	// lwz r3,-28640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313660
	if (!ctx.cr6.eq) goto loc_82313660;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604fa0
	ctx.lr = 0x82313654;
	sub_82604FA0(ctx, base);
	// stw r3,-28640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28640, ctx.r3.u32);
	// bl 0x82605060
	ctx.lr = 0x8231365C;
	sub_82605060(ctx, base);
	// lwz r3,-28640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28640);
loc_82313660:
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

__attribute__((alias("__imp__sub_82313674"))) PPC_WEAK_FUNC(sub_82313674);
PPC_FUNC_IMPL(__imp__sub_82313674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313678"))) PPC_WEAK_FUNC(sub_82313678);
PPC_FUNC_IMPL(__imp__sub_82313678) {
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
	// lwz r3,-28648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28648);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823136b0
	if (!ctx.cr6.eq) goto loc_823136B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604b40
	ctx.lr = 0x823136A4;
	sub_82604B40(ctx, base);
	// stw r3,-28648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28648, ctx.r3.u32);
	// bl 0x82604bf0
	ctx.lr = 0x823136AC;
	sub_82604BF0(ctx, base);
	// lwz r3,-28648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28648);
loc_823136B0:
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

__attribute__((alias("__imp__sub_823136C4"))) PPC_WEAK_FUNC(sub_823136C4);
PPC_FUNC_IMPL(__imp__sub_823136C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823136C8"))) PPC_WEAK_FUNC(sub_823136C8);
PPC_FUNC_IMPL(__imp__sub_823136C8) {
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
	// lwz r3,-27252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313700
	if (!ctx.cr6.eq) goto loc_82313700;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8278a358
	ctx.lr = 0x823136F4;
	sub_8278A358(ctx, base);
	// stw r3,-27252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27252, ctx.r3.u32);
	// bl 0x8278a418
	ctx.lr = 0x823136FC;
	sub_8278A418(ctx, base);
	// lwz r3,-27252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27252);
loc_82313700:
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

__attribute__((alias("__imp__sub_82313714"))) PPC_WEAK_FUNC(sub_82313714);
PPC_FUNC_IMPL(__imp__sub_82313714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313718"))) PPC_WEAK_FUNC(sub_82313718);
PPC_FUNC_IMPL(__imp__sub_82313718) {
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
	// lwz r3,-28572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313750
	if (!ctx.cr6.eq) goto loc_82313750;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826074c8
	ctx.lr = 0x82313744;
	sub_826074C8(ctx, base);
	// stw r3,-28572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28572, ctx.r3.u32);
	// bl 0x82607588
	ctx.lr = 0x8231374C;
	sub_82607588(ctx, base);
	// lwz r3,-28572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28572);
loc_82313750:
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

__attribute__((alias("__imp__sub_82313764"))) PPC_WEAK_FUNC(sub_82313764);
PPC_FUNC_IMPL(__imp__sub_82313764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313768"))) PPC_WEAK_FUNC(sub_82313768);
PPC_FUNC_IMPL(__imp__sub_82313768) {
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
	// lwz r3,-28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823137a0
	if (!ctx.cr6.eq) goto loc_823137A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8261c060
	ctx.lr = 0x82313794;
	sub_8261C060(ctx, base);
	// stw r3,-28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28440, ctx.r3.u32);
	// bl 0x8261c120
	ctx.lr = 0x8231379C;
	sub_8261C120(ctx, base);
	// lwz r3,-28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28440);
loc_823137A0:
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

__attribute__((alias("__imp__sub_823137B4"))) PPC_WEAK_FUNC(sub_823137B4);
PPC_FUNC_IMPL(__imp__sub_823137B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823137B8"))) PPC_WEAK_FUNC(sub_823137B8);
PPC_FUNC_IMPL(__imp__sub_823137B8) {
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
	// lwz r3,-28624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823137f0
	if (!ctx.cr6.eq) goto loc_823137F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82605860
	ctx.lr = 0x823137E4;
	sub_82605860(ctx, base);
	// stw r3,-28624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28624, ctx.r3.u32);
	// bl 0x82605910
	ctx.lr = 0x823137EC;
	sub_82605910(ctx, base);
	// lwz r3,-28624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28624);
loc_823137F0:
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

__attribute__((alias("__imp__sub_82313804"))) PPC_WEAK_FUNC(sub_82313804);
PPC_FUNC_IMPL(__imp__sub_82313804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313808"))) PPC_WEAK_FUNC(sub_82313808);
PPC_FUNC_IMPL(__imp__sub_82313808) {
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
	// lwz r3,-28744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313840
	if (!ctx.cr6.eq) goto loc_82313840;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826016d0
	ctx.lr = 0x82313834;
	sub_826016D0(ctx, base);
	// stw r3,-28744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28744, ctx.r3.u32);
	// bl 0x82601780
	ctx.lr = 0x8231383C;
	sub_82601780(ctx, base);
	// lwz r3,-28744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28744);
loc_82313840:
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

__attribute__((alias("__imp__sub_82313854"))) PPC_WEAK_FUNC(sub_82313854);
PPC_FUNC_IMPL(__imp__sub_82313854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313858"))) PPC_WEAK_FUNC(sub_82313858);
PPC_FUNC_IMPL(__imp__sub_82313858) {
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
	// lwz r3,-31332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313890
	if (!ctx.cr6.eq) goto loc_82313890;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8240b858
	ctx.lr = 0x82313884;
	sub_8240B858(ctx, base);
	// stw r3,-31332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31332, ctx.r3.u32);
	// bl 0x8240b918
	ctx.lr = 0x8231388C;
	sub_8240B918(ctx, base);
	// lwz r3,-31332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31332);
loc_82313890:
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

__attribute__((alias("__imp__sub_823138A4"))) PPC_WEAK_FUNC(sub_823138A4);
PPC_FUNC_IMPL(__imp__sub_823138A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823138A8"))) PPC_WEAK_FUNC(sub_823138A8);
PPC_FUNC_IMPL(__imp__sub_823138A8) {
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
	// lwz r3,-31336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823138e0
	if (!ctx.cr6.eq) goto loc_823138E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8240b628
	ctx.lr = 0x823138D4;
	sub_8240B628(ctx, base);
	// stw r3,-31336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31336, ctx.r3.u32);
	// bl 0x8240b6e8
	ctx.lr = 0x823138DC;
	sub_8240B6E8(ctx, base);
	// lwz r3,-31336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31336);
loc_823138E0:
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

__attribute__((alias("__imp__sub_823138F4"))) PPC_WEAK_FUNC(sub_823138F4);
PPC_FUNC_IMPL(__imp__sub_823138F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823138F8"))) PPC_WEAK_FUNC(sub_823138F8);
PPC_FUNC_IMPL(__imp__sub_823138F8) {
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
	// lwz r3,-28732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28732);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313930
	if (!ctx.cr6.eq) goto loc_82313930;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82601d60
	ctx.lr = 0x82313924;
	sub_82601D60(ctx, base);
	// stw r3,-28732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28732, ctx.r3.u32);
	// bl 0x82601e20
	ctx.lr = 0x8231392C;
	sub_82601E20(ctx, base);
	// lwz r3,-28732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28732);
loc_82313930:
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

__attribute__((alias("__imp__sub_82313944"))) PPC_WEAK_FUNC(sub_82313944);
PPC_FUNC_IMPL(__imp__sub_82313944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313948"))) PPC_WEAK_FUNC(sub_82313948);
PPC_FUNC_IMPL(__imp__sub_82313948) {
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
	// lwz r3,-27240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313980
	if (!ctx.cr6.eq) goto loc_82313980;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8278dd48
	ctx.lr = 0x82313974;
	sub_8278DD48(ctx, base);
	// stw r3,-27240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27240, ctx.r3.u32);
	// bl 0x8278de08
	ctx.lr = 0x8231397C;
	sub_8278DE08(ctx, base);
	// lwz r3,-27240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27240);
loc_82313980:
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

__attribute__((alias("__imp__sub_82313994"))) PPC_WEAK_FUNC(sub_82313994);
PPC_FUNC_IMPL(__imp__sub_82313994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313998"))) PPC_WEAK_FUNC(sub_82313998);
PPC_FUNC_IMPL(__imp__sub_82313998) {
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
	// lwz r3,-28700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823139d0
	if (!ctx.cr6.eq) goto loc_823139D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82602ee0
	ctx.lr = 0x823139C4;
	sub_82602EE0(ctx, base);
	// stw r3,-28700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28700, ctx.r3.u32);
	// bl 0x82602fa0
	ctx.lr = 0x823139CC;
	sub_82602FA0(ctx, base);
	// lwz r3,-28700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28700);
loc_823139D0:
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

__attribute__((alias("__imp__sub_823139E4"))) PPC_WEAK_FUNC(sub_823139E4);
PPC_FUNC_IMPL(__imp__sub_823139E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823139E8"))) PPC_WEAK_FUNC(sub_823139E8);
PPC_FUNC_IMPL(__imp__sub_823139E8) {
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
	// lwz r3,-28060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28060);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313a20
	if (!ctx.cr6.eq) goto loc_82313A20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82676918
	ctx.lr = 0x82313A14;
	sub_82676918(ctx, base);
	// stw r3,-28060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28060, ctx.r3.u32);
	// bl 0x826769d8
	ctx.lr = 0x82313A1C;
	sub_826769D8(ctx, base);
	// lwz r3,-28060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28060);
loc_82313A20:
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

__attribute__((alias("__imp__sub_82313A34"))) PPC_WEAK_FUNC(sub_82313A34);
PPC_FUNC_IMPL(__imp__sub_82313A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313A38"))) PPC_WEAK_FUNC(sub_82313A38);
PPC_FUNC_IMPL(__imp__sub_82313A38) {
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
	// lwz r3,-28056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313a70
	if (!ctx.cr6.eq) goto loc_82313A70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82676b48
	ctx.lr = 0x82313A64;
	sub_82676B48(ctx, base);
	// stw r3,-28056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28056, ctx.r3.u32);
	// bl 0x82676c08
	ctx.lr = 0x82313A6C;
	sub_82676C08(ctx, base);
	// lwz r3,-28056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28056);
loc_82313A70:
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

__attribute__((alias("__imp__sub_82313A84"))) PPC_WEAK_FUNC(sub_82313A84);
PPC_FUNC_IMPL(__imp__sub_82313A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313A88"))) PPC_WEAK_FUNC(sub_82313A88);
PPC_FUNC_IMPL(__imp__sub_82313A88) {
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
	// lwz r3,-27516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313ac0
	if (!ctx.cr6.eq) goto loc_82313AC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827013f0
	ctx.lr = 0x82313AB4;
	sub_827013F0(ctx, base);
	// stw r3,-27516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27516, ctx.r3.u32);
	// bl 0x827014b0
	ctx.lr = 0x82313ABC;
	sub_827014B0(ctx, base);
	// lwz r3,-27516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27516);
loc_82313AC0:
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

__attribute__((alias("__imp__sub_82313AD4"))) PPC_WEAK_FUNC(sub_82313AD4);
PPC_FUNC_IMPL(__imp__sub_82313AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313AD8"))) PPC_WEAK_FUNC(sub_82313AD8);
PPC_FUNC_IMPL(__imp__sub_82313AD8) {
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
	// lwz r3,-27716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313b10
	if (!ctx.cr6.eq) goto loc_82313B10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826dbe80
	ctx.lr = 0x82313B04;
	sub_826DBE80(ctx, base);
	// stw r3,-27716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27716, ctx.r3.u32);
	// bl 0x826dbf40
	ctx.lr = 0x82313B0C;
	sub_826DBF40(ctx, base);
	// lwz r3,-27716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27716);
loc_82313B10:
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

__attribute__((alias("__imp__sub_82313B24"))) PPC_WEAK_FUNC(sub_82313B24);
PPC_FUNC_IMPL(__imp__sub_82313B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313B28"))) PPC_WEAK_FUNC(sub_82313B28);
PPC_FUNC_IMPL(__imp__sub_82313B28) {
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
	// lwz r3,-28536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313b60
	if (!ctx.cr6.eq) goto loc_82313B60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82608870
	ctx.lr = 0x82313B54;
	sub_82608870(ctx, base);
	// stw r3,-28536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28536, ctx.r3.u32);
	// bl 0x82608930
	ctx.lr = 0x82313B5C;
	sub_82608930(ctx, base);
	// lwz r3,-28536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28536);
loc_82313B60:
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

__attribute__((alias("__imp__sub_82313B74"))) PPC_WEAK_FUNC(sub_82313B74);
PPC_FUNC_IMPL(__imp__sub_82313B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313B78"))) PPC_WEAK_FUNC(sub_82313B78);
PPC_FUNC_IMPL(__imp__sub_82313B78) {
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
	// lwz r3,-28540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313bb0
	if (!ctx.cr6.eq) goto loc_82313BB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82608648
	ctx.lr = 0x82313BA4;
	sub_82608648(ctx, base);
	// stw r3,-28540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28540, ctx.r3.u32);
	// bl 0x82608708
	ctx.lr = 0x82313BAC;
	sub_82608708(ctx, base);
	// lwz r3,-28540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28540);
loc_82313BB0:
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

__attribute__((alias("__imp__sub_82313BC4"))) PPC_WEAK_FUNC(sub_82313BC4);
PPC_FUNC_IMPL(__imp__sub_82313BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313BC8"))) PPC_WEAK_FUNC(sub_82313BC8);
PPC_FUNC_IMPL(__imp__sub_82313BC8) {
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
	// lwz r3,-27944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27944);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313c00
	if (!ctx.cr6.eq) goto loc_82313C00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826870d8
	ctx.lr = 0x82313BF4;
	sub_826870D8(ctx, base);
	// stw r3,-27944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27944, ctx.r3.u32);
	// bl 0x82687198
	ctx.lr = 0x82313BFC;
	sub_82687198(ctx, base);
	// lwz r3,-27944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27944);
loc_82313C00:
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

__attribute__((alias("__imp__sub_82313C14"))) PPC_WEAK_FUNC(sub_82313C14);
PPC_FUNC_IMPL(__imp__sub_82313C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313C18"))) PPC_WEAK_FUNC(sub_82313C18);
PPC_FUNC_IMPL(__imp__sub_82313C18) {
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
	// lwz r3,-26140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313c50
	if (!ctx.cr6.eq) goto loc_82313C50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827c70b0
	ctx.lr = 0x82313C44;
	sub_827C70B0(ctx, base);
	// stw r3,-26140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26140, ctx.r3.u32);
	// bl 0x827c7170
	ctx.lr = 0x82313C4C;
	sub_827C7170(ctx, base);
	// lwz r3,-26140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26140);
loc_82313C50:
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

__attribute__((alias("__imp__sub_82313C64"))) PPC_WEAK_FUNC(sub_82313C64);
PPC_FUNC_IMPL(__imp__sub_82313C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313C68"))) PPC_WEAK_FUNC(sub_82313C68);
PPC_FUNC_IMPL(__imp__sub_82313C68) {
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
	// lwz r3,-27568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313ca0
	if (!ctx.cr6.eq) goto loc_82313CA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826f69b0
	ctx.lr = 0x82313C94;
	sub_826F69B0(ctx, base);
	// stw r3,-27568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27568, ctx.r3.u32);
	// bl 0x826f6a70
	ctx.lr = 0x82313C9C;
	sub_826F6A70(ctx, base);
	// lwz r3,-27568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27568);
loc_82313CA0:
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

__attribute__((alias("__imp__sub_82313CB4"))) PPC_WEAK_FUNC(sub_82313CB4);
PPC_FUNC_IMPL(__imp__sub_82313CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313CB8"))) PPC_WEAK_FUNC(sub_82313CB8);
PPC_FUNC_IMPL(__imp__sub_82313CB8) {
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
	// lwz r3,-28500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313cf0
	if (!ctx.cr6.eq) goto loc_82313CF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82609c08
	ctx.lr = 0x82313CE4;
	sub_82609C08(ctx, base);
	// stw r3,-28500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28500, ctx.r3.u32);
	// bl 0x82609cc8
	ctx.lr = 0x82313CEC;
	sub_82609CC8(ctx, base);
	// lwz r3,-28500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28500);
loc_82313CF0:
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

__attribute__((alias("__imp__sub_82313D04"))) PPC_WEAK_FUNC(sub_82313D04);
PPC_FUNC_IMPL(__imp__sub_82313D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313D08"))) PPC_WEAK_FUNC(sub_82313D08);
PPC_FUNC_IMPL(__imp__sub_82313D08) {
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
	// lwz r3,-27368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313d40
	if (!ctx.cr6.eq) goto loc_82313D40;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827502d8
	ctx.lr = 0x82313D34;
	sub_827502D8(ctx, base);
	// stw r3,-27368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27368, ctx.r3.u32);
	// bl 0x82750398
	ctx.lr = 0x82313D3C;
	sub_82750398(ctx, base);
	// lwz r3,-27368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27368);
loc_82313D40:
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

__attribute__((alias("__imp__sub_82313D54"))) PPC_WEAK_FUNC(sub_82313D54);
PPC_FUNC_IMPL(__imp__sub_82313D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313D58"))) PPC_WEAK_FUNC(sub_82313D58);
PPC_FUNC_IMPL(__imp__sub_82313D58) {
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
	// lwz r3,-28620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313d90
	if (!ctx.cr6.eq) goto loc_82313D90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82605a98
	ctx.lr = 0x82313D84;
	sub_82605A98(ctx, base);
	// stw r3,-28620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28620, ctx.r3.u32);
	// bl 0x82605b58
	ctx.lr = 0x82313D8C;
	sub_82605B58(ctx, base);
	// lwz r3,-28620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28620);
loc_82313D90:
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

__attribute__((alias("__imp__sub_82313DA4"))) PPC_WEAK_FUNC(sub_82313DA4);
PPC_FUNC_IMPL(__imp__sub_82313DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313DA8"))) PPC_WEAK_FUNC(sub_82313DA8);
PPC_FUNC_IMPL(__imp__sub_82313DA8) {
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
	// lwz r3,-28212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313de0
	if (!ctx.cr6.eq) goto loc_82313DE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264d0c0
	ctx.lr = 0x82313DD4;
	sub_8264D0C0(ctx, base);
	// stw r3,-28212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28212, ctx.r3.u32);
	// bl 0x8264d180
	ctx.lr = 0x82313DDC;
	sub_8264D180(ctx, base);
	// lwz r3,-28212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28212);
loc_82313DE0:
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

__attribute__((alias("__imp__sub_82313DF4"))) PPC_WEAK_FUNC(sub_82313DF4);
PPC_FUNC_IMPL(__imp__sub_82313DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313DF8"))) PPC_WEAK_FUNC(sub_82313DF8);
PPC_FUNC_IMPL(__imp__sub_82313DF8) {
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
	// lwz r3,-31284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313e30
	if (!ctx.cr6.eq) goto loc_82313E30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82414a68
	ctx.lr = 0x82313E24;
	sub_82414A68(ctx, base);
	// stw r3,-31284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31284, ctx.r3.u32);
	// bl 0x82414b28
	ctx.lr = 0x82313E2C;
	sub_82414B28(ctx, base);
	// lwz r3,-31284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31284);
loc_82313E30:
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

__attribute__((alias("__imp__sub_82313E44"))) PPC_WEAK_FUNC(sub_82313E44);
PPC_FUNC_IMPL(__imp__sub_82313E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313E48"))) PPC_WEAK_FUNC(sub_82313E48);
PPC_FUNC_IMPL(__imp__sub_82313E48) {
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
	// lwz r3,-28196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313e80
	if (!ctx.cr6.eq) goto loc_82313E80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264d980
	ctx.lr = 0x82313E74;
	sub_8264D980(ctx, base);
	// stw r3,-28196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28196, ctx.r3.u32);
	// bl 0x8264da40
	ctx.lr = 0x82313E7C;
	sub_8264DA40(ctx, base);
	// lwz r3,-28196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28196);
loc_82313E80:
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

__attribute__((alias("__imp__sub_82313E94"))) PPC_WEAK_FUNC(sub_82313E94);
PPC_FUNC_IMPL(__imp__sub_82313E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313E98"))) PPC_WEAK_FUNC(sub_82313E98);
PPC_FUNC_IMPL(__imp__sub_82313E98) {
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
	// lwz r3,-26084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26084);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313ed0
	if (!ctx.cr6.eq) goto loc_82313ED0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827e3520
	ctx.lr = 0x82313EC4;
	sub_827E3520(ctx, base);
	// stw r3,-26084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26084, ctx.r3.u32);
	// bl 0x827e35e0
	ctx.lr = 0x82313ECC;
	sub_827E35E0(ctx, base);
	// lwz r3,-26084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26084);
loc_82313ED0:
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

__attribute__((alias("__imp__sub_82313EE4"))) PPC_WEAK_FUNC(sub_82313EE4);
PPC_FUNC_IMPL(__imp__sub_82313EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313EE8"))) PPC_WEAK_FUNC(sub_82313EE8);
PPC_FUNC_IMPL(__imp__sub_82313EE8) {
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
	// lwz r3,-28204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313f20
	if (!ctx.cr6.eq) goto loc_82313F20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264d520
	ctx.lr = 0x82313F14;
	sub_8264D520(ctx, base);
	// stw r3,-28204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28204, ctx.r3.u32);
	// bl 0x8264d5e0
	ctx.lr = 0x82313F1C;
	sub_8264D5E0(ctx, base);
	// lwz r3,-28204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28204);
loc_82313F20:
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

__attribute__((alias("__imp__sub_82313F34"))) PPC_WEAK_FUNC(sub_82313F34);
PPC_FUNC_IMPL(__imp__sub_82313F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313F38"))) PPC_WEAK_FUNC(sub_82313F38);
PPC_FUNC_IMPL(__imp__sub_82313F38) {
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
	// lwz r3,-27228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313f70
	if (!ctx.cr6.eq) goto loc_82313F70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8279c650
	ctx.lr = 0x82313F64;
	sub_8279C650(ctx, base);
	// stw r3,-27228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27228, ctx.r3.u32);
	// bl 0x8279c710
	ctx.lr = 0x82313F6C;
	sub_8279C710(ctx, base);
	// lwz r3,-27228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27228);
loc_82313F70:
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

__attribute__((alias("__imp__sub_82313F84"))) PPC_WEAK_FUNC(sub_82313F84);
PPC_FUNC_IMPL(__imp__sub_82313F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313F88"))) PPC_WEAK_FUNC(sub_82313F88);
PPC_FUNC_IMPL(__imp__sub_82313F88) {
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
	// lwz r3,-28192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313fc0
	if (!ctx.cr6.eq) goto loc_82313FC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264dbb0
	ctx.lr = 0x82313FB4;
	sub_8264DBB0(ctx, base);
	// stw r3,-28192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28192, ctx.r3.u32);
	// bl 0x8264dc70
	ctx.lr = 0x82313FBC;
	sub_8264DC70(ctx, base);
	// lwz r3,-28192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28192);
loc_82313FC0:
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

__attribute__((alias("__imp__sub_82313FD4"))) PPC_WEAK_FUNC(sub_82313FD4);
PPC_FUNC_IMPL(__imp__sub_82313FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313FD8"))) PPC_WEAK_FUNC(sub_82313FD8);
PPC_FUNC_IMPL(__imp__sub_82313FD8) {
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
	// lwz r3,-28208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314010
	if (!ctx.cr6.eq) goto loc_82314010;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264d2f0
	ctx.lr = 0x82314004;
	sub_8264D2F0(ctx, base);
	// stw r3,-28208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28208, ctx.r3.u32);
	// bl 0x8264d3b0
	ctx.lr = 0x8231400C;
	sub_8264D3B0(ctx, base);
	// lwz r3,-28208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28208);
loc_82314010:
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

__attribute__((alias("__imp__sub_82314024"))) PPC_WEAK_FUNC(sub_82314024);
PPC_FUNC_IMPL(__imp__sub_82314024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314028"))) PPC_WEAK_FUNC(sub_82314028);
PPC_FUNC_IMPL(__imp__sub_82314028) {
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
	// lwz r3,-28184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314060
	if (!ctx.cr6.eq) goto loc_82314060;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264e010
	ctx.lr = 0x82314054;
	sub_8264E010(ctx, base);
	// stw r3,-28184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28184, ctx.r3.u32);
	// bl 0x8264e0d0
	ctx.lr = 0x8231405C;
	sub_8264E0D0(ctx, base);
	// lwz r3,-28184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28184);
loc_82314060:
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

__attribute__((alias("__imp__sub_82314074"))) PPC_WEAK_FUNC(sub_82314074);
PPC_FUNC_IMPL(__imp__sub_82314074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314078"))) PPC_WEAK_FUNC(sub_82314078);
PPC_FUNC_IMPL(__imp__sub_82314078) {
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
	// lwz r3,-28188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823140b0
	if (!ctx.cr6.eq) goto loc_823140B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264dde0
	ctx.lr = 0x823140A4;
	sub_8264DDE0(ctx, base);
	// stw r3,-28188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28188, ctx.r3.u32);
	// bl 0x8264dea0
	ctx.lr = 0x823140AC;
	sub_8264DEA0(ctx, base);
	// lwz r3,-28188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28188);
loc_823140B0:
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

__attribute__((alias("__imp__sub_823140C4"))) PPC_WEAK_FUNC(sub_823140C4);
PPC_FUNC_IMPL(__imp__sub_823140C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823140C8"))) PPC_WEAK_FUNC(sub_823140C8);
PPC_FUNC_IMPL(__imp__sub_823140C8) {
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
	// lwz r3,-28504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314100
	if (!ctx.cr6.eq) goto loc_82314100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826099d8
	ctx.lr = 0x823140F4;
	sub_826099D8(ctx, base);
	// stw r3,-28504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28504, ctx.r3.u32);
	// bl 0x82609a98
	ctx.lr = 0x823140FC;
	sub_82609A98(ctx, base);
	// lwz r3,-28504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28504);
loc_82314100:
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

__attribute__((alias("__imp__sub_82314114"))) PPC_WEAK_FUNC(sub_82314114);
PPC_FUNC_IMPL(__imp__sub_82314114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314118"))) PPC_WEAK_FUNC(sub_82314118);
PPC_FUNC_IMPL(__imp__sub_82314118) {
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
	// lwz r3,-28812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28812);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314150
	if (!ctx.cr6.eq) goto loc_82314150;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825fd150
	ctx.lr = 0x82314144;
	sub_825FD150(ctx, base);
	// stw r3,-28812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28812, ctx.r3.u32);
	// bl 0x825fd210
	ctx.lr = 0x8231414C;
	sub_825FD210(ctx, base);
	// lwz r3,-28812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28812);
loc_82314150:
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

__attribute__((alias("__imp__sub_82314164"))) PPC_WEAK_FUNC(sub_82314164);
PPC_FUNC_IMPL(__imp__sub_82314164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314168"))) PPC_WEAK_FUNC(sub_82314168);
PPC_FUNC_IMPL(__imp__sub_82314168) {
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
	// lwz r3,-26076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823141a0
	if (!ctx.cr6.eq) goto loc_823141A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x827e5ac0
	ctx.lr = 0x82314194;
	sub_827E5AC0(ctx, base);
	// stw r3,-26076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26076, ctx.r3.u32);
	// bl 0x827e5b80
	ctx.lr = 0x8231419C;
	sub_827E5B80(ctx, base);
	// lwz r3,-26076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26076);
loc_823141A0:
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

__attribute__((alias("__imp__sub_823141B4"))) PPC_WEAK_FUNC(sub_823141B4);
PPC_FUNC_IMPL(__imp__sub_823141B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823141B8"))) PPC_WEAK_FUNC(sub_823141B8);
PPC_FUNC_IMPL(__imp__sub_823141B8) {
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
	// lwz r3,-28820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823141f0
	if (!ctx.cr6.eq) goto loc_823141F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f6a88
	ctx.lr = 0x823141E4;
	sub_825F6A88(ctx, base);
	// stw r3,-28820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28820, ctx.r3.u32);
	// bl 0x825f6b48
	ctx.lr = 0x823141EC;
	sub_825F6B48(ctx, base);
	// lwz r3,-28820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28820);
loc_823141F0:
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

__attribute__((alias("__imp__sub_82314204"))) PPC_WEAK_FUNC(sub_82314204);
PPC_FUNC_IMPL(__imp__sub_82314204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314208"))) PPC_WEAK_FUNC(sub_82314208);
PPC_FUNC_IMPL(__imp__sub_82314208) {
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
	// lwz r3,-28824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314240
	if (!ctx.cr6.eq) goto loc_82314240;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f6858
	ctx.lr = 0x82314234;
	sub_825F6858(ctx, base);
	// stw r3,-28824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28824, ctx.r3.u32);
	// bl 0x825f6918
	ctx.lr = 0x8231423C;
	sub_825F6918(ctx, base);
	// lwz r3,-28824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28824);
loc_82314240:
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

__attribute__((alias("__imp__sub_82314254"))) PPC_WEAK_FUNC(sub_82314254);
PPC_FUNC_IMPL(__imp__sub_82314254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314258"))) PPC_WEAK_FUNC(sub_82314258);
PPC_FUNC_IMPL(__imp__sub_82314258) {
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
	// lwz r3,-28816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314290
	if (!ctx.cr6.eq) goto loc_82314290;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f6cb8
	ctx.lr = 0x82314284;
	sub_825F6CB8(ctx, base);
	// stw r3,-28816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28816, ctx.r3.u32);
	// bl 0x825f6d78
	ctx.lr = 0x8231428C;
	sub_825F6D78(ctx, base);
	// lwz r3,-28816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28816);
loc_82314290:
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

__attribute__((alias("__imp__sub_823142A4"))) PPC_WEAK_FUNC(sub_823142A4);
PPC_FUNC_IMPL(__imp__sub_823142A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823142A8"))) PPC_WEAK_FUNC(sub_823142A8);
PPC_FUNC_IMPL(__imp__sub_823142A8) {
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
	// lwz r3,-28828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823142e0
	if (!ctx.cr6.eq) goto loc_823142E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f6628
	ctx.lr = 0x823142D4;
	sub_825F6628(ctx, base);
	// stw r3,-28828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28828, ctx.r3.u32);
	// bl 0x825f66e8
	ctx.lr = 0x823142DC;
	sub_825F66E8(ctx, base);
	// lwz r3,-28828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28828);
loc_823142E0:
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

__attribute__((alias("__imp__sub_823142F4"))) PPC_WEAK_FUNC(sub_823142F4);
PPC_FUNC_IMPL(__imp__sub_823142F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823142F8"))) PPC_WEAK_FUNC(sub_823142F8);
PPC_FUNC_IMPL(__imp__sub_823142F8) {
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
	// lwz r3,-28832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314330
	if (!ctx.cr6.eq) goto loc_82314330;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f63f8
	ctx.lr = 0x82314324;
	sub_825F63F8(ctx, base);
	// stw r3,-28832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28832, ctx.r3.u32);
	// bl 0x825f64b8
	ctx.lr = 0x8231432C;
	sub_825F64B8(ctx, base);
	// lwz r3,-28832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28832);
loc_82314330:
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

__attribute__((alias("__imp__sub_82314344"))) PPC_WEAK_FUNC(sub_82314344);
PPC_FUNC_IMPL(__imp__sub_82314344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314348"))) PPC_WEAK_FUNC(sub_82314348);
PPC_FUNC_IMPL(__imp__sub_82314348) {
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
	// lwz r3,-28840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314380
	if (!ctx.cr6.eq) goto loc_82314380;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f5f98
	ctx.lr = 0x82314374;
	sub_825F5F98(ctx, base);
	// stw r3,-28840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28840, ctx.r3.u32);
	// bl 0x825f6058
	ctx.lr = 0x8231437C;
	sub_825F6058(ctx, base);
	// lwz r3,-28840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28840);
loc_82314380:
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

__attribute__((alias("__imp__sub_82314394"))) PPC_WEAK_FUNC(sub_82314394);
PPC_FUNC_IMPL(__imp__sub_82314394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314398"))) PPC_WEAK_FUNC(sub_82314398);
PPC_FUNC_IMPL(__imp__sub_82314398) {
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
	// lwz r3,-28844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28844);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823143d0
	if (!ctx.cr6.eq) goto loc_823143D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f5d68
	ctx.lr = 0x823143C4;
	sub_825F5D68(ctx, base);
	// stw r3,-28844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28844, ctx.r3.u32);
	// bl 0x825f5e28
	ctx.lr = 0x823143CC;
	sub_825F5E28(ctx, base);
	// lwz r3,-28844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28844);
loc_823143D0:
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

__attribute__((alias("__imp__sub_823143E4"))) PPC_WEAK_FUNC(sub_823143E4);
PPC_FUNC_IMPL(__imp__sub_823143E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823143E8"))) PPC_WEAK_FUNC(sub_823143E8);
PPC_FUNC_IMPL(__imp__sub_823143E8) {
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
	// lwz r3,-28836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314420
	if (!ctx.cr6.eq) goto loc_82314420;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f61c8
	ctx.lr = 0x82314414;
	sub_825F61C8(ctx, base);
	// stw r3,-28836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28836, ctx.r3.u32);
	// bl 0x825f6288
	ctx.lr = 0x8231441C;
	sub_825F6288(ctx, base);
	// lwz r3,-28836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28836);
loc_82314420:
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

__attribute__((alias("__imp__sub_82314434"))) PPC_WEAK_FUNC(sub_82314434);
PPC_FUNC_IMPL(__imp__sub_82314434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314438"))) PPC_WEAK_FUNC(sub_82314438);
PPC_FUNC_IMPL(__imp__sub_82314438) {
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
	// lwz r3,-28848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28848);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314470
	if (!ctx.cr6.eq) goto loc_82314470;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f5b38
	ctx.lr = 0x82314464;
	sub_825F5B38(ctx, base);
	// stw r3,-28848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28848, ctx.r3.u32);
	// bl 0x825f5bf8
	ctx.lr = 0x8231446C;
	sub_825F5BF8(ctx, base);
	// lwz r3,-28848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28848);
loc_82314470:
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

__attribute__((alias("__imp__sub_82314484"))) PPC_WEAK_FUNC(sub_82314484);
PPC_FUNC_IMPL(__imp__sub_82314484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314488"))) PPC_WEAK_FUNC(sub_82314488);
PPC_FUNC_IMPL(__imp__sub_82314488) {
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
	// lwz r3,-28852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823144c0
	if (!ctx.cr6.eq) goto loc_823144C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f5908
	ctx.lr = 0x823144B4;
	sub_825F5908(ctx, base);
	// stw r3,-28852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28852, ctx.r3.u32);
	// bl 0x825f59c8
	ctx.lr = 0x823144BC;
	sub_825F59C8(ctx, base);
	// lwz r3,-28852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28852);
loc_823144C0:
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

__attribute__((alias("__imp__sub_823144D4"))) PPC_WEAK_FUNC(sub_823144D4);
PPC_FUNC_IMPL(__imp__sub_823144D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823144D8"))) PPC_WEAK_FUNC(sub_823144D8);
PPC_FUNC_IMPL(__imp__sub_823144D8) {
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
	// lwz r3,-28796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314510
	if (!ctx.cr6.eq) goto loc_82314510;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ffa58
	ctx.lr = 0x82314504;
	sub_825FFA58(ctx, base);
	// stw r3,-28796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28796, ctx.r3.u32);
	// bl 0x825ffb18
	ctx.lr = 0x8231450C;
	sub_825FFB18(ctx, base);
	// lwz r3,-28796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28796);
loc_82314510:
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

__attribute__((alias("__imp__sub_82314524"))) PPC_WEAK_FUNC(sub_82314524);
PPC_FUNC_IMPL(__imp__sub_82314524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314528"))) PPC_WEAK_FUNC(sub_82314528);
PPC_FUNC_IMPL(__imp__sub_82314528) {
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
	// lwz r3,-27272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314560
	if (!ctx.cr6.eq) goto loc_82314560;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82775670
	ctx.lr = 0x82314554;
	sub_82775670(ctx, base);
	// stw r3,-27272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27272, ctx.r3.u32);
	// bl 0x82775730
	ctx.lr = 0x8231455C;
	sub_82775730(ctx, base);
	// lwz r3,-27272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27272);
loc_82314560:
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

__attribute__((alias("__imp__sub_82314574"))) PPC_WEAK_FUNC(sub_82314574);
PPC_FUNC_IMPL(__imp__sub_82314574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314578"))) PPC_WEAK_FUNC(sub_82314578);
PPC_FUNC_IMPL(__imp__sub_82314578) {
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
	// lwz r3,-28800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823145b0
	if (!ctx.cr6.eq) goto loc_823145B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ff828
	ctx.lr = 0x823145A4;
	sub_825FF828(ctx, base);
	// stw r3,-28800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28800, ctx.r3.u32);
	// bl 0x825ff8e8
	ctx.lr = 0x823145AC;
	sub_825FF8E8(ctx, base);
	// lwz r3,-28800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28800);
loc_823145B0:
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

__attribute__((alias("__imp__sub_823145C4"))) PPC_WEAK_FUNC(sub_823145C4);
PPC_FUNC_IMPL(__imp__sub_823145C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823145C8"))) PPC_WEAK_FUNC(sub_823145C8);
PPC_FUNC_IMPL(__imp__sub_823145C8) {
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
	// lwz r3,-28896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314600
	if (!ctx.cr6.eq) goto loc_82314600;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f09e8
	ctx.lr = 0x823145F4;
	sub_825F09E8(ctx, base);
	// stw r3,-28896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28896, ctx.r3.u32);
	// bl 0x825f0aa8
	ctx.lr = 0x823145FC;
	sub_825F0AA8(ctx, base);
	// lwz r3,-28896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28896);
loc_82314600:
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

__attribute__((alias("__imp__sub_82314614"))) PPC_WEAK_FUNC(sub_82314614);
PPC_FUNC_IMPL(__imp__sub_82314614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314618"))) PPC_WEAK_FUNC(sub_82314618);
PPC_FUNC_IMPL(__imp__sub_82314618) {
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
	// lwz r3,-28872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314650
	if (!ctx.cr6.eq) goto loc_82314650;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f1708
	ctx.lr = 0x82314644;
	sub_825F1708(ctx, base);
	// stw r3,-28872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28872, ctx.r3.u32);
	// bl 0x825f17c8
	ctx.lr = 0x8231464C;
	sub_825F17C8(ctx, base);
	// lwz r3,-28872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28872);
loc_82314650:
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

__attribute__((alias("__imp__sub_82314664"))) PPC_WEAK_FUNC(sub_82314664);
PPC_FUNC_IMPL(__imp__sub_82314664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314668"))) PPC_WEAK_FUNC(sub_82314668);
PPC_FUNC_IMPL(__imp__sub_82314668) {
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
	// lwz r3,-28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823146a0
	if (!ctx.cr6.eq) goto loc_823146A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f0e48
	ctx.lr = 0x82314694;
	sub_825F0E48(ctx, base);
	// stw r3,-28888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28888, ctx.r3.u32);
	// bl 0x825f0f08
	ctx.lr = 0x8231469C;
	sub_825F0F08(ctx, base);
	// lwz r3,-28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28888);
loc_823146A0:
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

__attribute__((alias("__imp__sub_823146B4"))) PPC_WEAK_FUNC(sub_823146B4);
PPC_FUNC_IMPL(__imp__sub_823146B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823146B8"))) PPC_WEAK_FUNC(sub_823146B8);
PPC_FUNC_IMPL(__imp__sub_823146B8) {
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
	// lwz r3,-28868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823146f0
	if (!ctx.cr6.eq) goto loc_823146F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f1938
	ctx.lr = 0x823146E4;
	sub_825F1938(ctx, base);
	// stw r3,-28868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28868, ctx.r3.u32);
	// bl 0x825f19f8
	ctx.lr = 0x823146EC;
	sub_825F19F8(ctx, base);
	// lwz r3,-28868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28868);
loc_823146F0:
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

__attribute__((alias("__imp__sub_82314704"))) PPC_WEAK_FUNC(sub_82314704);
PPC_FUNC_IMPL(__imp__sub_82314704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314708"))) PPC_WEAK_FUNC(sub_82314708);
PPC_FUNC_IMPL(__imp__sub_82314708) {
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
	// lwz r3,-28860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28860);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314740
	if (!ctx.cr6.eq) goto loc_82314740;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f1d98
	ctx.lr = 0x82314734;
	sub_825F1D98(ctx, base);
	// stw r3,-28860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28860, ctx.r3.u32);
	// bl 0x825f1e58
	ctx.lr = 0x8231473C;
	sub_825F1E58(ctx, base);
	// lwz r3,-28860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28860);
loc_82314740:
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

__attribute__((alias("__imp__sub_82314754"))) PPC_WEAK_FUNC(sub_82314754);
PPC_FUNC_IMPL(__imp__sub_82314754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314758"))) PPC_WEAK_FUNC(sub_82314758);
PPC_FUNC_IMPL(__imp__sub_82314758) {
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
	// lwz r3,-28884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28884);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314790
	if (!ctx.cr6.eq) goto loc_82314790;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f1078
	ctx.lr = 0x82314784;
	sub_825F1078(ctx, base);
	// stw r3,-28884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28884, ctx.r3.u32);
	// bl 0x825f1138
	ctx.lr = 0x8231478C;
	sub_825F1138(ctx, base);
	// lwz r3,-28884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28884);
loc_82314790:
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

__attribute__((alias("__imp__sub_823147A4"))) PPC_WEAK_FUNC(sub_823147A4);
PPC_FUNC_IMPL(__imp__sub_823147A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823147A8"))) PPC_WEAK_FUNC(sub_823147A8);
PPC_FUNC_IMPL(__imp__sub_823147A8) {
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
	// lwz r3,-28880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28880);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823147e0
	if (!ctx.cr6.eq) goto loc_823147E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f12a8
	ctx.lr = 0x823147D4;
	sub_825F12A8(ctx, base);
	// stw r3,-28880(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28880, ctx.r3.u32);
	// bl 0x825f1368
	ctx.lr = 0x823147DC;
	sub_825F1368(ctx, base);
	// lwz r3,-28880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28880);
loc_823147E0:
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

__attribute__((alias("__imp__sub_823147F4"))) PPC_WEAK_FUNC(sub_823147F4);
PPC_FUNC_IMPL(__imp__sub_823147F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823147F8"))) PPC_WEAK_FUNC(sub_823147F8);
PPC_FUNC_IMPL(__imp__sub_823147F8) {
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
	// lwz r3,-28856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314830
	if (!ctx.cr6.eq) goto loc_82314830;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f1fc8
	ctx.lr = 0x82314824;
	sub_825F1FC8(ctx, base);
	// stw r3,-28856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28856, ctx.r3.u32);
	// bl 0x825f2088
	ctx.lr = 0x8231482C;
	sub_825F2088(ctx, base);
	// lwz r3,-28856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28856);
loc_82314830:
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

__attribute__((alias("__imp__sub_82314844"))) PPC_WEAK_FUNC(sub_82314844);
PPC_FUNC_IMPL(__imp__sub_82314844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314848"))) PPC_WEAK_FUNC(sub_82314848);
PPC_FUNC_IMPL(__imp__sub_82314848) {
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
	// lwz r3,-28876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314880
	if (!ctx.cr6.eq) goto loc_82314880;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f14d8
	ctx.lr = 0x82314874;
	sub_825F14D8(ctx, base);
	// stw r3,-28876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28876, ctx.r3.u32);
	// bl 0x825f1598
	ctx.lr = 0x8231487C;
	sub_825F1598(ctx, base);
	// lwz r3,-28876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28876);
loc_82314880:
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

__attribute__((alias("__imp__sub_82314894"))) PPC_WEAK_FUNC(sub_82314894);
PPC_FUNC_IMPL(__imp__sub_82314894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314898"))) PPC_WEAK_FUNC(sub_82314898);
PPC_FUNC_IMPL(__imp__sub_82314898) {
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
	// lwz r3,-28864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823148d0
	if (!ctx.cr6.eq) goto loc_823148D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f1b68
	ctx.lr = 0x823148C4;
	sub_825F1B68(ctx, base);
	// stw r3,-28864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28864, ctx.r3.u32);
	// bl 0x825f1c28
	ctx.lr = 0x823148CC;
	sub_825F1C28(ctx, base);
	// lwz r3,-28864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28864);
loc_823148D0:
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

__attribute__((alias("__imp__sub_823148E4"))) PPC_WEAK_FUNC(sub_823148E4);
PPC_FUNC_IMPL(__imp__sub_823148E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823148E8"))) PPC_WEAK_FUNC(sub_823148E8);
PPC_FUNC_IMPL(__imp__sub_823148E8) {
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
	// lwz r3,-28892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314920
	if (!ctx.cr6.eq) goto loc_82314920;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825f0c18
	ctx.lr = 0x82314914;
	sub_825F0C18(ctx, base);
	// stw r3,-28892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28892, ctx.r3.u32);
	// bl 0x825f0cd8
	ctx.lr = 0x8231491C;
	sub_825F0CD8(ctx, base);
	// lwz r3,-28892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28892);
loc_82314920:
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

__attribute__((alias("__imp__sub_82314934"))) PPC_WEAK_FUNC(sub_82314934);
PPC_FUNC_IMPL(__imp__sub_82314934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314938"))) PPC_WEAK_FUNC(sub_82314938);
PPC_FUNC_IMPL(__imp__sub_82314938) {
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
	// lwz r3,-28568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314970
	if (!ctx.cr6.eq) goto loc_82314970;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826076f8
	ctx.lr = 0x82314964;
	sub_826076F8(ctx, base);
	// stw r3,-28568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28568, ctx.r3.u32);
	// bl 0x826077b8
	ctx.lr = 0x8231496C;
	sub_826077B8(ctx, base);
	// lwz r3,-28568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28568);
loc_82314970:
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

__attribute__((alias("__imp__sub_82314984"))) PPC_WEAK_FUNC(sub_82314984);
PPC_FUNC_IMPL(__imp__sub_82314984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314988"))) PPC_WEAK_FUNC(sub_82314988);
PPC_FUNC_IMPL(__imp__sub_82314988) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r3,25364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823149c0
	if (!ctx.cr6.eq) goto loc_823149C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82306aa0
	ctx.lr = 0x823149B4;
	sub_82306AA0(ctx, base);
	// stw r3,25364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25364, ctx.r3.u32);
	// bl 0x82306b60
	ctx.lr = 0x823149BC;
	sub_82306B60(ctx, base);
	// lwz r3,25364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25364);
loc_823149C0:
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

__attribute__((alias("__imp__sub_823149D4"))) PPC_WEAK_FUNC(sub_823149D4);
PPC_FUNC_IMPL(__imp__sub_823149D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823149D8"))) PPC_WEAK_FUNC(sub_823149D8);
PPC_FUNC_IMPL(__imp__sub_823149D8) {
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
	// lwz r3,-28592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28592);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314a10
	if (!ctx.cr6.eq) goto loc_82314A10;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826069e0
	ctx.lr = 0x82314A04;
	sub_826069E0(ctx, base);
	// stw r3,-28592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28592, ctx.r3.u32);
	// bl 0x82606aa0
	ctx.lr = 0x82314A0C;
	sub_82606AA0(ctx, base);
	// lwz r3,-28592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28592);
loc_82314A10:
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

__attribute__((alias("__imp__sub_82314A24"))) PPC_WEAK_FUNC(sub_82314A24);
PPC_FUNC_IMPL(__imp__sub_82314A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314A28"))) PPC_WEAK_FUNC(sub_82314A28);
PPC_FUNC_IMPL(__imp__sub_82314A28) {
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
	// lwz r3,-28220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314a60
	if (!ctx.cr6.eq) goto loc_82314A60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8264cc60
	ctx.lr = 0x82314A54;
	sub_8264CC60(ctx, base);
	// stw r3,-28220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28220, ctx.r3.u32);
	// bl 0x8264cd20
	ctx.lr = 0x82314A5C;
	sub_8264CD20(ctx, base);
	// lwz r3,-28220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28220);
loc_82314A60:
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

__attribute__((alias("__imp__sub_82314A74"))) PPC_WEAK_FUNC(sub_82314A74);
PPC_FUNC_IMPL(__imp__sub_82314A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314A78"))) PPC_WEAK_FUNC(sub_82314A78);
PPC_FUNC_IMPL(__imp__sub_82314A78) {
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
	// lwz r3,-29364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314ab0
	if (!ctx.cr6.eq) goto loc_82314AB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8255fbe8
	ctx.lr = 0x82314AA4;
	sub_8255FBE8(ctx, base);
	// stw r3,-29364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29364, ctx.r3.u32);
	// bl 0x8255fca8
	ctx.lr = 0x82314AAC;
	sub_8255FCA8(ctx, base);
	// lwz r3,-29364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29364);
loc_82314AB0:
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

__attribute__((alias("__imp__sub_82314AC4"))) PPC_WEAK_FUNC(sub_82314AC4);
PPC_FUNC_IMPL(__imp__sub_82314AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

