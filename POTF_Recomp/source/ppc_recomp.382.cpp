#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C07508"))) PPC_WEAK_FUNC(sub_82C07508);
PPC_FUNC_IMPL(__imp__sub_82C07508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31904
	ctx.r31.s64 = -2090860544;
	// lwz r3,31004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07560
	if (ctx.cr6.eq) goto loc_82C07560;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r10,31060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31060);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82c07544
	if (!ctx.cr6.eq) goto loc_82C07544;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r10,r10,31020
	ctx.r10.s64 = ctx.r10.s64 + 31020;
	// stw r10,31060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31060, ctx.r10.u32);
loc_82C07544:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31004, ctx.r11.u32);
loc_82C07560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07574"))) PPC_WEAK_FUNC(sub_82C07574);
PPC_FUNC_IMPL(__imp__sub_82C07574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07578"))) PPC_WEAK_FUNC(sub_82C07578);
PPC_FUNC_IMPL(__imp__sub_82C07578) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82c085a8
	sub_82C085A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0758C"))) PPC_WEAK_FUNC(sub_82C0758C);
PPC_FUNC_IMPL(__imp__sub_82C0758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07590"))) PPC_WEAK_FUNC(sub_82C07590);
PPC_FUNC_IMPL(__imp__sub_82C07590) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c085a8
	sub_82C085A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C075A0"))) PPC_WEAK_FUNC(sub_82C075A0);
PPC_FUNC_IMPL(__imp__sub_82C075A0) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,24704
	ctx.r4.s64 = ctx.r11.s64 + 24704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb61f0
	ctx.lr = 0x82C075CC;
	sub_82CB61F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c085a8
	ctx.lr = 0x82C075E0;
	sub_82C085A8(ctx, base);
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

__attribute__((alias("__imp__sub_82C075F8"))) PPC_WEAK_FUNC(sub_82C075F8);
PPC_FUNC_IMPL(__imp__sub_82C075F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,7408
	ctx.r4.s64 = ctx.r11.s64 + 7408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb61f0
	ctx.lr = 0x82C0762C;
	sub_82CB61F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c085a8
	ctx.lr = 0x82C07640;
	sub_82C085A8(ctx, base);
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

__attribute__((alias("__imp__sub_82C07658"))) PPC_WEAK_FUNC(sub_82C07658);
PPC_FUNC_IMPL(__imp__sub_82C07658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C07660;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,8744
	ctx.r11.s64 = ctx.r11.s64 + 8744;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0769C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c076ac
	if (!ctx.cr0.eq) goto loc_82C076AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c076cc
	goto loc_82C076CC;
loc_82C076AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7412
	ctx.r5.s64 = ctx.r11.s64 + 7412;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c085a8
	ctx.lr = 0x82C076C4;
	sub_82C085A8(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_82C076CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C076D4"))) PPC_WEAK_FUNC(sub_82C076D4);
PPC_FUNC_IMPL(__imp__sub_82C076D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C076D8"))) PPC_WEAK_FUNC(sub_82C076D8);
PPC_FUNC_IMPL(__imp__sub_82C076D8) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,-18120
	ctx.r5.s64 = ctx.r11.s64 + -18120;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82c085a8
	ctx.lr = 0x82C07704;
	sub_82C085A8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-21172
	ctx.r5.s64 = ctx.r11.s64 + -21172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c085a8
	ctx.lr = 0x82C0771C;
	sub_82C085A8(ctx, base);
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

__attribute__((alias("__imp__sub_82C07738"))) PPC_WEAK_FUNC(sub_82C07738);
PPC_FUNC_IMPL(__imp__sub_82C07738) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,-18108
	ctx.r5.s64 = ctx.r11.s64 + -18108;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82c085a8
	ctx.lr = 0x82C07764;
	sub_82C085A8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-21172
	ctx.r5.s64 = ctx.r11.s64 + -21172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c085a8
	ctx.lr = 0x82C0777C;
	sub_82C085A8(ctx, base);
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

__attribute__((alias("__imp__sub_82C07798"))) PPC_WEAK_FUNC(sub_82C07798);
PPC_FUNC_IMPL(__imp__sub_82C07798) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,-19680
	ctx.r5.s64 = ctx.r11.s64 + -19680;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82c085a8
	ctx.lr = 0x82C077C4;
	sub_82C085A8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-21172
	ctx.r5.s64 = ctx.r11.s64 + -21172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c085a8
	ctx.lr = 0x82C077DC;
	sub_82C085A8(ctx, base);
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

__attribute__((alias("__imp__sub_82C077F8"))) PPC_WEAK_FUNC(sub_82C077F8);
PPC_FUNC_IMPL(__imp__sub_82C077F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,31004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c07830
	if (!ctx.cr6.eq) goto loc_82C07830;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07830
	if (ctx.cr6.eq) goto loc_82C07830;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x82c074a0
	ctx.lr = 0x82C07830;
	sub_82C074A0(ctx, base);
loc_82C07830:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r11,r11,8744
	ctx.r11.s64 = ctx.r11.s64 + 8744;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09588
	ctx.lr = 0x82C07850;
	sub_82C09588(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07864"))) PPC_WEAK_FUNC(sub_82C07864);
PPC_FUNC_IMPL(__imp__sub_82C07864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07868"))) PPC_WEAK_FUNC(sub_82C07868);
PPC_FUNC_IMPL(__imp__sub_82C07868) {
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
	// bl 0x82c08438
	ctx.lr = 0x82C07878;
	sub_82C08438(ctx, base);
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

__attribute__((alias("__imp__sub_82C0788C"))) PPC_WEAK_FUNC(sub_82C0788C);
PPC_FUNC_IMPL(__imp__sub_82C0788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07890"))) PPC_WEAK_FUNC(sub_82C07890);
PPC_FUNC_IMPL(__imp__sub_82C07890) {
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
	// bl 0x82c089d0
	ctx.lr = 0x82C078A0;
	sub_82C089D0(ctx, base);
	// bl 0x82c07508
	ctx.lr = 0x82C078A4;
	sub_82C07508(ctx, base);
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

__attribute__((alias("__imp__sub_82C078B8"))) PPC_WEAK_FUNC(sub_82C078B8);
PPC_FUNC_IMPL(__imp__sub_82C078B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c078e0
	if (ctx.cr6.eq) goto loc_82C078E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C078E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C078E0:
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

__attribute__((alias("__imp__sub_82C078F4"))) PPC_WEAK_FUNC(sub_82C078F4);
PPC_FUNC_IMPL(__imp__sub_82C078F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C078F8"))) PPC_WEAK_FUNC(sub_82C078F8);
PPC_FUNC_IMPL(__imp__sub_82C078F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08410
	sub_82C08410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C078FC"))) PPC_WEAK_FUNC(sub_82C078FC);
PPC_FUNC_IMPL(__imp__sub_82C078FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07900"))) PPC_WEAK_FUNC(sub_82C07900);
PPC_FUNC_IMPL(__imp__sub_82C07900) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08a60
	sub_82C08A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07904"))) PPC_WEAK_FUNC(sub_82C07904);
PPC_FUNC_IMPL(__imp__sub_82C07904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07908"))) PPC_WEAK_FUNC(sub_82C07908);
PPC_FUNC_IMPL(__imp__sub_82C07908) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08460
	sub_82C08460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0790C"))) PPC_WEAK_FUNC(sub_82C0790C);
PPC_FUNC_IMPL(__imp__sub_82C0790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07910"))) PPC_WEAK_FUNC(sub_82C07910);
PPC_FUNC_IMPL(__imp__sub_82C07910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07918"))) PPC_WEAK_FUNC(sub_82C07918);
PPC_FUNC_IMPL(__imp__sub_82C07918) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07920"))) PPC_WEAK_FUNC(sub_82C07920);
PPC_FUNC_IMPL(__imp__sub_82C07920) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07928"))) PPC_WEAK_FUNC(sub_82C07928);
PPC_FUNC_IMPL(__imp__sub_82C07928) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08aa0
	sub_82C08AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0792C"))) PPC_WEAK_FUNC(sub_82C0792C);
PPC_FUNC_IMPL(__imp__sub_82C0792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07930"))) PPC_WEAK_FUNC(sub_82C07930);
PPC_FUNC_IMPL(__imp__sub_82C07930) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c09a08
	sub_82C09A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07934"))) PPC_WEAK_FUNC(sub_82C07934);
PPC_FUNC_IMPL(__imp__sub_82C07934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07938"))) PPC_WEAK_FUNC(sub_82C07938);
PPC_FUNC_IMPL(__imp__sub_82C07938) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c09128
	sub_82C09128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0793C"))) PPC_WEAK_FUNC(sub_82C0793C);
PPC_FUNC_IMPL(__imp__sub_82C0793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07940"))) PPC_WEAK_FUNC(sub_82C07940);
PPC_FUNC_IMPL(__imp__sub_82C07940) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08f50
	sub_82C08F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07944"))) PPC_WEAK_FUNC(sub_82C07944);
PPC_FUNC_IMPL(__imp__sub_82C07944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07948"))) PPC_WEAK_FUNC(sub_82C07948);
PPC_FUNC_IMPL(__imp__sub_82C07948) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c086a0
	sub_82C086A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0794C"))) PPC_WEAK_FUNC(sub_82C0794C);
PPC_FUNC_IMPL(__imp__sub_82C0794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07950"))) PPC_WEAK_FUNC(sub_82C07950);
PPC_FUNC_IMPL(__imp__sub_82C07950) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c086c0
	sub_82C086C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07954"))) PPC_WEAK_FUNC(sub_82C07954);
PPC_FUNC_IMPL(__imp__sub_82C07954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07958"))) PPC_WEAK_FUNC(sub_82C07958);
PPC_FUNC_IMPL(__imp__sub_82C07958) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07980
	if (ctx.cr6.eq) goto loc_82C07980;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C07980:
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

__attribute__((alias("__imp__sub_82C07994"))) PPC_WEAK_FUNC(sub_82C07994);
PPC_FUNC_IMPL(__imp__sub_82C07994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07998"))) PPC_WEAK_FUNC(sub_82C07998);
PPC_FUNC_IMPL(__imp__sub_82C07998) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08bc0
	sub_82C08BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0799C"))) PPC_WEAK_FUNC(sub_82C0799C);
PPC_FUNC_IMPL(__imp__sub_82C0799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C079A0"))) PPC_WEAK_FUNC(sub_82C079A0);
PPC_FUNC_IMPL(__imp__sub_82C079A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c096f8
	sub_82C096F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C079A4"))) PPC_WEAK_FUNC(sub_82C079A4);
PPC_FUNC_IMPL(__imp__sub_82C079A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C079A8"))) PPC_WEAK_FUNC(sub_82C079A8);
PPC_FUNC_IMPL(__imp__sub_82C079A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08ec8
	sub_82C08EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C079AC"))) PPC_WEAK_FUNC(sub_82C079AC);
PPC_FUNC_IMPL(__imp__sub_82C079AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C079B0"))) PPC_WEAK_FUNC(sub_82C079B0);
PPC_FUNC_IMPL(__imp__sub_82C079B0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c079d8
	if (ctx.cr6.eq) goto loc_82C079D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C079D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C079D8:
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

__attribute__((alias("__imp__sub_82C079EC"))) PPC_WEAK_FUNC(sub_82C079EC);
PPC_FUNC_IMPL(__imp__sub_82C079EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C079F0"))) PPC_WEAK_FUNC(sub_82C079F0);
PPC_FUNC_IMPL(__imp__sub_82C079F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c071a0
	sub_82C071A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C079F4"))) PPC_WEAK_FUNC(sub_82C079F4);
PPC_FUNC_IMPL(__imp__sub_82C079F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C079F8"))) PPC_WEAK_FUNC(sub_82C079F8);
PPC_FUNC_IMPL(__imp__sub_82C079F8) {
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
	// bl 0x82c083e0
	ctx.lr = 0x82C07A10;
	sub_82C083E0(ctx, base);
	// lis r30,-31904
	ctx.r30.s64 = -2090860544;
	// lwz r11,31000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c07a38
	if (ctx.cr6.eq) goto loc_82C07A38;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07a38
	if (ctx.cr6.eq) goto loc_82C07A38;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C07A38:
	// bl 0x82c07508
	ctx.lr = 0x82C07A3C;
	sub_82C07508(ctx, base);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r31,-31909
	ctx.r31.s64 = -2091188224;
	// addi r3,r11,31020
	ctx.r3.s64 = ctx.r11.s64 + 31020;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8884, ctx.r11.u32);
	// bl 0x82c1c1c0
	ctx.lr = 0x82C07A64;
	sub_82C1C1C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,31000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 31000, ctx.r11.u32);
	// addi r11,r10,28456
	ctx.r11.s64 = ctx.r10.s64 + 28456;
	// stw r11,8884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8884, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C07A94"))) PPC_WEAK_FUNC(sub_82C07A94);
PPC_FUNC_IMPL(__imp__sub_82C07A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07A98"))) PPC_WEAK_FUNC(sub_82C07A98);
PPC_FUNC_IMPL(__imp__sub_82C07A98) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82b6e518
	ctx.lr = 0x82C07AB8;
	sub_82B6E518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c07ad8
	if (ctx.cr0.eq) goto loc_82C07AD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c06160
	ctx.lr = 0x82C07AC8;
	sub_82C06160(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21676
	ctx.r11.s64 = ctx.r11.s64 + -21676;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c07adc
	goto loc_82C07ADC;
loc_82C07AD8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C07ADC:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r11,r11,8744
	ctx.r11.s64 = ctx.r11.s64 + 8744;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82C07B24"))) PPC_WEAK_FUNC(sub_82C07B24);
PPC_FUNC_IMPL(__imp__sub_82C07B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07B28"))) PPC_WEAK_FUNC(sub_82C07B28);
PPC_FUNC_IMPL(__imp__sub_82C07B28) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
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
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07BA8"))) PPC_WEAK_FUNC(sub_82C07BA8);
PPC_FUNC_IMPL(__imp__sub_82C07BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07C94"))) PPC_WEAK_FUNC(sub_82C07C94);
PPC_FUNC_IMPL(__imp__sub_82C07C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07C98"))) PPC_WEAK_FUNC(sub_82C07C98);
PPC_FUNC_IMPL(__imp__sub_82C07C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07C9C"))) PPC_WEAK_FUNC(sub_82C07C9C);
PPC_FUNC_IMPL(__imp__sub_82C07C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07CA0"))) PPC_WEAK_FUNC(sub_82C07CA0);
PPC_FUNC_IMPL(__imp__sub_82C07CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lbz r3,31052(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31052);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CAC"))) PPC_WEAK_FUNC(sub_82C07CAC);
PPC_FUNC_IMPL(__imp__sub_82C07CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07CB0"))) PPC_WEAK_FUNC(sub_82C07CB0);
PPC_FUNC_IMPL(__imp__sub_82C07CB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CB8"))) PPC_WEAK_FUNC(sub_82C07CB8);
PPC_FUNC_IMPL(__imp__sub_82C07CB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CC0"))) PPC_WEAK_FUNC(sub_82C07CC0);
PPC_FUNC_IMPL(__imp__sub_82C07CC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CC8"))) PPC_WEAK_FUNC(sub_82C07CC8);
PPC_FUNC_IMPL(__imp__sub_82C07CC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CD0"))) PPC_WEAK_FUNC(sub_82C07CD0);
PPC_FUNC_IMPL(__imp__sub_82C07CD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CD8"))) PPC_WEAK_FUNC(sub_82C07CD8);
PPC_FUNC_IMPL(__imp__sub_82C07CD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CE0"))) PPC_WEAK_FUNC(sub_82C07CE0);
PPC_FUNC_IMPL(__imp__sub_82C07CE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CE8"))) PPC_WEAK_FUNC(sub_82C07CE8);
PPC_FUNC_IMPL(__imp__sub_82C07CE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CF0"))) PPC_WEAK_FUNC(sub_82C07CF0);
PPC_FUNC_IMPL(__imp__sub_82C07CF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CF8"))) PPC_WEAK_FUNC(sub_82C07CF8);
PPC_FUNC_IMPL(__imp__sub_82C07CF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D00"))) PPC_WEAK_FUNC(sub_82C07D00);
PPC_FUNC_IMPL(__imp__sub_82C07D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D0C"))) PPC_WEAK_FUNC(sub_82C07D0C);
PPC_FUNC_IMPL(__imp__sub_82C07D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07D10"))) PPC_WEAK_FUNC(sub_82C07D10);
PPC_FUNC_IMPL(__imp__sub_82C07D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D1C"))) PPC_WEAK_FUNC(sub_82C07D1C);
PPC_FUNC_IMPL(__imp__sub_82C07D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07D20"))) PPC_WEAK_FUNC(sub_82C07D20);
PPC_FUNC_IMPL(__imp__sub_82C07D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D34"))) PPC_WEAK_FUNC(sub_82C07D34);
PPC_FUNC_IMPL(__imp__sub_82C07D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07D38"))) PPC_WEAK_FUNC(sub_82C07D38);
PPC_FUNC_IMPL(__imp__sub_82C07D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,6520
	ctx.r11.s64 = ctx.r11.s64 + 6520;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D4C"))) PPC_WEAK_FUNC(sub_82C07D4C);
PPC_FUNC_IMPL(__imp__sub_82C07D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07D50"))) PPC_WEAK_FUNC(sub_82C07D50);
PPC_FUNC_IMPL(__imp__sub_82C07D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D60"))) PPC_WEAK_FUNC(sub_82C07D60);
PPC_FUNC_IMPL(__imp__sub_82C07D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,7424
	ctx.r10.s64 = ctx.r11.s64 + 7424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D80"))) PPC_WEAK_FUNC(sub_82C07D80);
PPC_FUNC_IMPL(__imp__sub_82C07D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c07ba8
	sub_82C07BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07D84"))) PPC_WEAK_FUNC(sub_82C07D84);
PPC_FUNC_IMPL(__imp__sub_82C07D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07D88"))) PPC_WEAK_FUNC(sub_82C07D88);
PPC_FUNC_IMPL(__imp__sub_82C07D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,6520
	ctx.r11.s64 = ctx.r11.s64 + 6520;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07DA0"))) PPC_WEAK_FUNC(sub_82C07DA0);
PPC_FUNC_IMPL(__imp__sub_82C07DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C07DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,7428
	ctx.r11.s64 = ctx.r11.s64 + 7428;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x82c07ec8
	if (ctx.cr6.eq) goto loc_82C07EC8;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// ble cr6,0x82c07e00
	if (!ctx.cr6.gt) goto loc_82C07E00;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C07E00:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82c07e10
	if (ctx.cr6.gt) goto loc_82C07E10;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82C07E10:
	// bl 0x82b6e518
	ctx.lr = 0x82C07E14;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c07e5c
	if (ctx.cr0.eq) goto loc_82C07E5C;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x82c07e54
	if (ctx.cr0.lt) goto loc_82C07E54;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,7424
	ctx.r9.s64 = ctx.r9.s64 + 7424;
loc_82C07E38:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x82c07e38
	if (!ctx.cr0.lt) goto loc_82C07E38;
loc_82C07E54:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82c07e60
	goto loc_82C07E60;
loc_82C07E5C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C07E60:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82c07eb4
	if (!ctx.cr6.gt) goto loc_82C07EB4;
	// li r11,20
	ctx.r11.s64 = 20;
loc_82C07E80:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,-20
	ctx.r8.s64 = ctx.r9.s64 + -20;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c07e80
	if (ctx.cr6.lt) goto loc_82C07E80;
loc_82C07EB4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
loc_82C07EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07ED4"))) PPC_WEAK_FUNC(sub_82C07ED4);
PPC_FUNC_IMPL(__imp__sub_82C07ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07ED8"))) PPC_WEAK_FUNC(sub_82C07ED8);
PPC_FUNC_IMPL(__imp__sub_82C07ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7428
	ctx.r11.s64 = ctx.r11.s64 + 7428;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82c07f40
	if (!ctx.cr6.gt) goto loc_82C07F40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c07f40
	if (ctx.cr0.eq) goto loc_82C07F40;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c07f3c
	if (ctx.cr6.eq) goto loc_82C07F3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c07f40
	goto loc_82C07F40;
loc_82C07F3C:
	// bl 0x82294ab8
	ctx.lr = 0x82C07F40;
	sub_82294AB8(ctx, base);
loc_82C07F40:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07F60"))) PPC_WEAK_FUNC(sub_82C07F60);
PPC_FUNC_IMPL(__imp__sub_82C07F60) {
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
	// bl 0x82c07ed8
	ctx.lr = 0x82C07F80;
	sub_82C07ED8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c07f9c
	if (ctx.cr0.eq) goto loc_82C07F9C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C07F9C:
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

__attribute__((alias("__imp__sub_82C07FB8"))) PPC_WEAK_FUNC(sub_82C07FB8);
PPC_FUNC_IMPL(__imp__sub_82C07FB8) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c0802c
	if (ctx.cr0.eq) goto loc_82C0802C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x82c08008
	if (ctx.cr0.lt) goto loc_82C08008;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_82C07FF8:
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x82c07ff8
	if (!ctx.cr0.lt) goto loc_82C07FF8;
loc_82C08008:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c08024
	if (ctx.cr0.eq) goto loc_82C08024;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C08024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82c08058
	goto loc_82C08058;
loc_82C0802C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82c08054
	if (ctx.cr0.eq) goto loc_82C08054;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C08054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C08058:
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

__attribute__((alias("__imp__sub_82C08070"))) PPC_WEAK_FUNC(sub_82C08070);
PPC_FUNC_IMPL(__imp__sub_82C08070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r11,31052(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31052);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c0809c
	if (ctx.cr0.eq) goto loc_82C0809C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c08150
	goto loc_82C08150;
loc_82C0809C:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r31,r11,8896
	ctx.r31.s64 = ctx.r11.s64 + 8896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c07ba8
	ctx.lr = 0x82C080AC;
	sub_82C07BA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,31052(r10)
	PPC_STORE_U8(ctx.r10.u32 + 31052, ctx.r11.u8);
	// bl 0x82c50d60
	ctx.lr = 0x82C080B8;
	sub_82C50D60(ctx, base);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r10,31056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c080d4
	if (!ctx.cr6.eq) goto loc_82C080D4;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lwz r10,31060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31060);
	// stw r10,31056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31056, ctx.r10.u32);
loc_82C080D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c08104
	if (ctx.cr6.eq) goto loc_82C08104;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82b6e518
	ctx.lr = 0x82C080E8;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c08104
	if (ctx.cr0.eq) goto loc_82C08104;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c07da0
	ctx.lr = 0x82C080F8;
	sub_82C07DA0(ctx, base);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,31044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31044, ctx.r3.u32);
	// b 0x82c08110
	goto loc_82C08110;
loc_82C08104:
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31044, ctx.r11.u32);
loc_82C08110:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c08140
	if (ctx.cr6.eq) goto loc_82C08140;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82b6e518
	ctx.lr = 0x82C08124;
	sub_82B6E518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c08140
	if (ctx.cr0.eq) goto loc_82C08140;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c01938
	ctx.lr = 0x82C08134;
	sub_82C01938(ctx, base);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,31048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31048, ctx.r3.u32);
	// b 0x82c0814c
	goto loc_82C0814C;
loc_82C08140:
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31048, ctx.r11.u32);
loc_82C0814C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C08150:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08164"))) PPC_WEAK_FUNC(sub_82C08164);
PPC_FUNC_IMPL(__imp__sub_82C08164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08168"))) PPC_WEAK_FUNC(sub_82C08168);
PPC_FUNC_IMPL(__imp__sub_82C08168) {
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
	// lis r31,-31904
	ctx.r31.s64 = -2090860544;
	// lwz r3,31044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31044);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c081d8
	if (ctx.cr6.eq) goto loc_82C081D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c081bc
	if (ctx.cr0.eq) goto loc_82C081BC;
	// lis r30,-31904
	ctx.r30.s64 = -2090860544;
loc_82C0819C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28104, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c089d0
	ctx.lr = 0x82C081AC;
	sub_82C089D0(ctx, base);
	// lwz r3,31044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31044);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c0819c
	if (!ctx.cr0.eq) goto loc_82C0819C;
loc_82C081BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C081D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31044, ctx.r11.u32);
loc_82C081D8:
	// lis r31,-31904
	ctx.r31.s64 = -2090860544;
	// lwz r3,31048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c08264
	if (ctx.cr6.eq) goto loc_82C08264;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r10,r11,-21624
	ctx.r10.s64 = ctx.r11.s64 + -21624;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82c08238
	goto loc_82C08238;
loc_82C081F8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0822c
	if (ctx.cr6.eq) goto loc_82C0822C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c0822c
	if (ctx.cr0.eq) goto loc_82C0822C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,31048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31048);
loc_82C0822C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c01410
	ctx.lr = 0x82C08234;
	sub_82C01410(ctx, base);
	// lwz r3,31048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31048);
loc_82C08238:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x82c081f8
	if (!ctx.cr0.eq) goto loc_82C081F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0825C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31048, ctx.r11.u32);
loc_82C08264:
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,31052(r10)
	PPC_STORE_U8(ctx.r10.u32 + 31052, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C08288"))) PPC_WEAK_FUNC(sub_82C08288);
PPC_FUNC_IMPL(__imp__sub_82C08288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r11,r11,16240
	ctx.r11.s64 = ctx.r11.s64 + 16240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c08304
	if (ctx.cr6.eq) goto loc_82C08304;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r11,r11,15964
	ctx.r11.s64 = ctx.r11.s64 + 15964;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c08304
	if (ctx.cr6.eq) goto loc_82C08304;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r11,r11,-1352
	ctx.r11.s64 = ctx.r11.s64 + -1352;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c08304
	if (ctx.cr6.eq) goto loc_82C08304;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r11,r11,15688
	ctx.r11.s64 = ctx.r11.s64 + 15688;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c08304
	if (ctx.cr6.eq) goto loc_82C08304;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// addi r11,r11,13348
	ctx.r11.s64 = ctx.r11.s64 + 13348;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c08304
	if (ctx.cr6.eq) goto loc_82C08304;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,13072
	ctx.r11.s64 = ctx.r11.s64 + 13072;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82C08304:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0830C"))) PPC_WEAK_FUNC(sub_82C0830C);
PPC_FUNC_IMPL(__imp__sub_82C0830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08310"))) PPC_WEAK_FUNC(sub_82C08310);
PPC_FUNC_IMPL(__imp__sub_82C08310) {
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
	// bl 0x82c07ca0
	ctx.lr = 0x82C08320;
	sub_82C07CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08340"))) PPC_WEAK_FUNC(sub_82C08340);
PPC_FUNC_IMPL(__imp__sub_82C08340) {
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
	// bl 0x82c07ca0
	ctx.lr = 0x82C08350;
	sub_82C07CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08370"))) PPC_WEAK_FUNC(sub_82C08370);
PPC_FUNC_IMPL(__imp__sub_82C08370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// b 0x82c00e48
	sub_82C00E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0837C"))) PPC_WEAK_FUNC(sub_82C0837C);
PPC_FUNC_IMPL(__imp__sub_82C0837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08380"))) PPC_WEAK_FUNC(sub_82C08380);
PPC_FUNC_IMPL(__imp__sub_82C08380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// b 0x82c00fa8
	sub_82C00FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0838C"))) PPC_WEAK_FUNC(sub_82C0838C);
PPC_FUNC_IMPL(__imp__sub_82C0838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08390"))) PPC_WEAK_FUNC(sub_82C08390);
PPC_FUNC_IMPL(__imp__sub_82C08390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// b 0x82c01040
	sub_82C01040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0839C"))) PPC_WEAK_FUNC(sub_82C0839C);
PPC_FUNC_IMPL(__imp__sub_82C0839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C083A0"))) PPC_WEAK_FUNC(sub_82C083A0);
PPC_FUNC_IMPL(__imp__sub_82C083A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// b 0x82c011a0
	sub_82C011A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C083AC"))) PPC_WEAK_FUNC(sub_82C083AC);
PPC_FUNC_IMPL(__imp__sub_82C083AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C083B0"))) PPC_WEAK_FUNC(sub_82C083B0);
PPC_FUNC_IMPL(__imp__sub_82C083B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lwz r11,9040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9040);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82c083c8
	if (ctx.cr0.eq) goto loc_82C083C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C083C8:
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,9040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9040, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C083D4"))) PPC_WEAK_FUNC(sub_82C083D4);
PPC_FUNC_IMPL(__imp__sub_82C083D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C083D8"))) PPC_WEAK_FUNC(sub_82C083D8);
PPC_FUNC_IMPL(__imp__sub_82C083D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c08070
	sub_82C08070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C083DC"))) PPC_WEAK_FUNC(sub_82C083DC);
PPC_FUNC_IMPL(__imp__sub_82C083DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C083E0"))) PPC_WEAK_FUNC(sub_82C083E0);
PPC_FUNC_IMPL(__imp__sub_82C083E0) {
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
	// bl 0x82c07ca0
	ctx.lr = 0x82C083F0;
	sub_82C07CA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c083fc
	if (ctx.cr0.eq) goto loc_82C083FC;
	// bl 0x82c08168
	ctx.lr = 0x82C083FC;
	sub_82C08168(ctx, base);
loc_82C083FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0840C"))) PPC_WEAK_FUNC(sub_82C0840C);
PPC_FUNC_IMPL(__imp__sub_82C0840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08410"))) PPC_WEAK_FUNC(sub_82C08410);
PPC_FUNC_IMPL(__imp__sub_82C08410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C08430"))) PPC_WEAK_FUNC(sub_82C08430);
PPC_FUNC_IMPL(__imp__sub_82C08430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08434"))) PPC_WEAK_FUNC(sub_82C08434);
PPC_FUNC_IMPL(__imp__sub_82C08434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08438"))) PPC_WEAK_FUNC(sub_82C08438);
PPC_FUNC_IMPL(__imp__sub_82C08438) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C08458"))) PPC_WEAK_FUNC(sub_82C08458);
PPC_FUNC_IMPL(__imp__sub_82C08458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0845C"))) PPC_WEAK_FUNC(sub_82C0845C);
PPC_FUNC_IMPL(__imp__sub_82C0845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08460"))) PPC_WEAK_FUNC(sub_82C08460);
PPC_FUNC_IMPL(__imp__sub_82C08460) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c0846c
	if (!ctx.cr6.eq) goto loc_82C0846C;
	// blr 
	return;
loc_82C0846C:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C08484"))) PPC_WEAK_FUNC(sub_82C08484);
PPC_FUNC_IMPL(__imp__sub_82C08484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08488"))) PPC_WEAK_FUNC(sub_82C08488);
PPC_FUNC_IMPL(__imp__sub_82C08488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82c06160
	ctx.lr = 0x82C084A0;
	sub_82C06160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,7440
	ctx.r11.s64 = ctx.r11.s64 + 7440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C084C4"))) PPC_WEAK_FUNC(sub_82C084C4);
PPC_FUNC_IMPL(__imp__sub_82C084C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C084C8"))) PPC_WEAK_FUNC(sub_82C084C8);
PPC_FUNC_IMPL(__imp__sub_82C084C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c06cf8
	sub_82C06CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C084CC"))) PPC_WEAK_FUNC(sub_82C084CC);
PPC_FUNC_IMPL(__imp__sub_82C084CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C084D0"))) PPC_WEAK_FUNC(sub_82C084D0);
PPC_FUNC_IMPL(__imp__sub_82C084D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82c06160
	ctx.lr = 0x82C084E8;
	sub_82C06160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,7444
	ctx.r11.s64 = ctx.r11.s64 + 7444;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0850C"))) PPC_WEAK_FUNC(sub_82C0850C);
PPC_FUNC_IMPL(__imp__sub_82C0850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08510"))) PPC_WEAK_FUNC(sub_82C08510);
PPC_FUNC_IMPL(__imp__sub_82C08510) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c06cf8
	sub_82C06CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08514"))) PPC_WEAK_FUNC(sub_82C08514);
PPC_FUNC_IMPL(__imp__sub_82C08514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08518"))) PPC_WEAK_FUNC(sub_82C08518);
PPC_FUNC_IMPL(__imp__sub_82C08518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C08520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82b6e518
	ctx.lr = 0x82C08530;
	sub_82B6E518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c08554
	if (ctx.cr0.eq) goto loc_82C08554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c06160
	ctx.lr = 0x82C08540;
	sub_82C06160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r11,r11,7444
	ctx.r11.s64 = ctx.r11.s64 + 7444;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c08558
	goto loc_82C08558;
loc_82C08554:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C08558:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c061b0
	ctx.lr = 0x82C08560;
	sub_82C061B0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-21172
	ctx.r4.s64 = ctx.r11.s64 + -21172;
	// bl 0x82c054f8
	ctx.lr = 0x82C08570;
	sub_82C054F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05530
	ctx.lr = 0x82C0857C;
	sub_82C05530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08588"))) PPC_WEAK_FUNC(sub_82C08588);
PPC_FUNC_IMPL(__imp__sub_82C08588) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C085A4"))) PPC_WEAK_FUNC(sub_82C085A4);
PPC_FUNC_IMPL(__imp__sub_82C085A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C085A8"))) PPC_WEAK_FUNC(sub_82C085A8);
PPC_FUNC_IMPL(__imp__sub_82C085A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C085B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c061b0
	ctx.lr = 0x82C085C4;
	sub_82C061B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c085d8
	if (ctx.cr6.eq) goto loc_82C085D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c06890
	ctx.lr = 0x82C085D8;
	sub_82C06890(ctx, base);
loc_82C085D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c085ec
	if (ctx.cr6.eq) goto loc_82C085EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c054f8
	ctx.lr = 0x82C085EC;
	sub_82C054F8(ctx, base);
loc_82C085EC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c08600
	if (ctx.cr6.eq) goto loc_82C08600;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c05530
	ctx.lr = 0x82C08600;
	sub_82C05530(ctx, base);
loc_82C08600:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0860C"))) PPC_WEAK_FUNC(sub_82C0860C);
PPC_FUNC_IMPL(__imp__sub_82C0860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08610"))) PPC_WEAK_FUNC(sub_82C08610);
PPC_FUNC_IMPL(__imp__sub_82C08610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C08618;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82b6e518
	ctx.lr = 0x82C08628;
	sub_82B6E518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c0864c
	if (ctx.cr0.eq) goto loc_82C0864C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c06160
	ctx.lr = 0x82C08638;
	sub_82C06160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r11,r11,7440
	ctx.r11.s64 = ctx.r11.s64 + 7440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c08650
	goto loc_82C08650;
loc_82C0864C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C08650:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c061b0
	ctx.lr = 0x82C08658;
	sub_82C061B0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-21172
	ctx.r4.s64 = ctx.r11.s64 + -21172;
	// bl 0x82c054f8
	ctx.lr = 0x82C08668;
	sub_82C054F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05530
	ctx.lr = 0x82C08674;
	sub_82C05530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08680"))) PPC_WEAK_FUNC(sub_82C08680);
PPC_FUNC_IMPL(__imp__sub_82C08680) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C0869C"))) PPC_WEAK_FUNC(sub_82C0869C);
PPC_FUNC_IMPL(__imp__sub_82C0869C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C086A0"))) PPC_WEAK_FUNC(sub_82C086A0);
PPC_FUNC_IMPL(__imp__sub_82C086A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r11,28104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28104, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C086BC"))) PPC_WEAK_FUNC(sub_82C086BC);
PPC_FUNC_IMPL(__imp__sub_82C086BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C086C0"))) PPC_WEAK_FUNC(sub_82C086C0);
PPC_FUNC_IMPL(__imp__sub_82C086C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r11,28104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28104, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C086DC"))) PPC_WEAK_FUNC(sub_82C086DC);
PPC_FUNC_IMPL(__imp__sub_82C086DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C086E0"))) PPC_WEAK_FUNC(sub_82C086E0);
PPC_FUNC_IMPL(__imp__sub_82C086E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C086E8"))) PPC_WEAK_FUNC(sub_82C086E8);
PPC_FUNC_IMPL(__imp__sub_82C086E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C086F0"))) PPC_WEAK_FUNC(sub_82C086F0);
PPC_FUNC_IMPL(__imp__sub_82C086F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C086F8"))) PPC_WEAK_FUNC(sub_82C086F8);
PPC_FUNC_IMPL(__imp__sub_82C086F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08700"))) PPC_WEAK_FUNC(sub_82C08700);
PPC_FUNC_IMPL(__imp__sub_82C08700) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08708"))) PPC_WEAK_FUNC(sub_82C08708);
PPC_FUNC_IMPL(__imp__sub_82C08708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,6520
	ctx.r11.s64 = ctx.r11.s64 + 6520;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08720"))) PPC_WEAK_FUNC(sub_82C08720);
PPC_FUNC_IMPL(__imp__sub_82C08720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08730"))) PPC_WEAK_FUNC(sub_82C08730);
PPC_FUNC_IMPL(__imp__sub_82C08730) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08738"))) PPC_WEAK_FUNC(sub_82C08738);
PPC_FUNC_IMPL(__imp__sub_82C08738) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08740"))) PPC_WEAK_FUNC(sub_82C08740);
PPC_FUNC_IMPL(__imp__sub_82C08740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,9044(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9044);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82c08758
	if (ctx.cr0.eq) goto loc_82C08758;
	// stw r10,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r10.u32);
loc_82C08758:
	// stb r10,9044(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9044, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08760"))) PPC_WEAK_FUNC(sub_82C08760);
PPC_FUNC_IMPL(__imp__sub_82C08760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,9045(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9045);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82c08778
	if (ctx.cr0.eq) goto loc_82C08778;
	// stw r10,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r10.u32);
loc_82C08778:
	// stb r10,9045(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9045, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08780"))) PPC_WEAK_FUNC(sub_82C08780);
PPC_FUNC_IMPL(__imp__sub_82C08780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,9046(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9046);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82c08798
	if (ctx.cr0.eq) goto loc_82C08798;
	// stw r10,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r10.u32);
loc_82C08798:
	// stb r10,9046(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9046, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C087A0"))) PPC_WEAK_FUNC(sub_82C087A0);
PPC_FUNC_IMPL(__imp__sub_82C087A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C087AC"))) PPC_WEAK_FUNC(sub_82C087AC);
PPC_FUNC_IMPL(__imp__sub_82C087AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C087B0"))) PPC_WEAK_FUNC(sub_82C087B0);
PPC_FUNC_IMPL(__imp__sub_82C087B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C087BC"))) PPC_WEAK_FUNC(sub_82C087BC);
PPC_FUNC_IMPL(__imp__sub_82C087BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C087C0"))) PPC_WEAK_FUNC(sub_82C087C0);
PPC_FUNC_IMPL(__imp__sub_82C087C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C087CC"))) PPC_WEAK_FUNC(sub_82C087CC);
PPC_FUNC_IMPL(__imp__sub_82C087CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C087D0"))) PPC_WEAK_FUNC(sub_82C087D0);
PPC_FUNC_IMPL(__imp__sub_82C087D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c087f0
	if (!ctx.cr6.eq) goto loc_82C087F0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82C087F0:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c08804
	if (!ctx.cr6.eq) goto loc_82C08804;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82C08804:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c08818
	if (ctx.cr0.eq) goto loc_82C08818;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_82C08818:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c0882c
	if (ctx.cr0.eq) goto loc_82C0882C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82C0882C:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08848"))) PPC_WEAK_FUNC(sub_82C08848);
PPC_FUNC_IMPL(__imp__sub_82C08848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c0887c
	if (!ctx.cr0.eq) goto loc_82C0887C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,6520
	ctx.r11.s64 = ctx.r11.s64 + 6520;
	// addi r10,r10,-21672
	ctx.r10.s64 = ctx.r10.s64 + -21672;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82C0887C:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82c088f8
	if (!ctx.cr6.eq) goto loc_82C088F8;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82c088dc
	if (!ctx.cr0.eq) goto loc_82C088DC;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82c0891c
	goto loc_82C0891C;
loc_82C088DC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82c0891c
	goto loc_82C0891C;
loc_82C088F8:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq 0x82c08918
	if (ctx.cr0.eq) goto loc_82C08918;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82c0891c
	goto loc_82C0891C;
loc_82C08918:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82C0891C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,6520
	ctx.r10.s64 = ctx.r10.s64 + 6520;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0893C"))) PPC_WEAK_FUNC(sub_82C0893C);
PPC_FUNC_IMPL(__imp__sub_82C0893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08940"))) PPC_WEAK_FUNC(sub_82C08940);
PPC_FUNC_IMPL(__imp__sub_82C08940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c08960
	if (!ctx.cr6.eq) goto loc_82C08960;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82C08960:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c08974
	if (!ctx.cr6.eq) goto loc_82C08974;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82C08974:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c08988
	if (ctx.cr0.eq) goto loc_82C08988;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_82C08988:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c0899c
	if (ctx.cr0.eq) goto loc_82C0899C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82C0899C:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C089B8"))) PPC_WEAK_FUNC(sub_82C089B8);
PPC_FUNC_IMPL(__imp__sub_82C089B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r11,r11,-31944
	ctx.r11.s64 = ctx.r11.s64 + -31944;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C089D0"))) PPC_WEAK_FUNC(sub_82C089D0);
PPC_FUNC_IMPL(__imp__sub_82C089D0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c08a44
	if (ctx.cr6.eq) goto loc_82C08A44;
	// lis r31,-31904
	ctx.r31.s64 = -2090860544;
	// lwz r30,28104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28104);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82c08a00
	if (!ctx.cr6.eq) goto loc_82C08A00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C08A00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,28104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28104, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,6520
	ctx.r11.s64 = ctx.r11.s64 + 6520;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,31044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31044);
	// bl 0x82c087d0
	ctx.lr = 0x82C08A3C;
	sub_82C087D0(ctx, base);
	// stw r30,28104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28104, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C08A44:
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

__attribute__((alias("__imp__sub_82C08A5C"))) PPC_WEAK_FUNC(sub_82C08A5C);
PPC_FUNC_IMPL(__imp__sub_82C08A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08A60"))) PPC_WEAK_FUNC(sub_82C08A60);
PPC_FUNC_IMPL(__imp__sub_82C08A60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c08a70
	if (!ctx.cr6.eq) goto loc_82C08A70;
loc_82C08A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C08A70:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c08a68
	if (!ctx.cr6.eq) goto loc_82C08A68;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c08a68
	if (!ctx.cr6.eq) goto loc_82C08A68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C08AA0"))) PPC_WEAK_FUNC(sub_82C08AA0);
PPC_FUNC_IMPL(__imp__sub_82C08AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C08AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c08ac0
	if (!ctx.cr6.eq) goto loc_82C08AC0;
loc_82C08AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c08b60
	goto loc_82C08B60;
loc_82C08AC0:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82c08ab8
	if (ctx.cr0.eq) goto loc_82C08AB8;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82b6e518
	ctx.lr = 0x82C08ADC;
	sub_82B6E518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c08afc
	if (ctx.cr0.eq) goto loc_82C08AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c06160
	ctx.lr = 0x82C08AEC;
	sub_82C06160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7440
	ctx.r11.s64 = ctx.r11.s64 + 7440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c08b00
	goto loc_82C08B00;
loc_82C08AFC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C08B00:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-19616
	ctx.r4.s64 = ctx.r11.s64 + -19616;
	// bl 0x82c04e10
	ctx.lr = 0x82C08B10;
	sub_82C04E10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c08b3c
	if (!ctx.cr0.eq) goto loc_82C08B3C;
loc_82C08B18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c08ab8
	if (ctx.cr6.eq) goto loc_82C08AB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c08ab8
	goto loc_82C08AB8;
loc_82C08B3C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-16208
	ctx.r4.s64 = ctx.r11.s64 + -16208;
	// bl 0x82c04d58
	ctx.lr = 0x82C08B4C;
	sub_82C04D58(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82c08b18
	if (ctx.cr0.eq) goto loc_82C08B18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c06b00
	ctx.lr = 0x82C08B5C;
	sub_82C06B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C08B60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08B68"))) PPC_WEAK_FUNC(sub_82C08B68);
PPC_FUNC_IMPL(__imp__sub_82C08B68) {
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
	// bl 0x82c06cf8
	ctx.lr = 0x82C08B88;
	sub_82C06CF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c08ba4
	if (ctx.cr0.eq) goto loc_82C08BA4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C08BA4:
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

__attribute__((alias("__imp__sub_82C08BC0"))) PPC_WEAK_FUNC(sub_82C08BC0);
PPC_FUNC_IMPL(__imp__sub_82C08BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82C08BC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c08be0
	if (!ctx.cr6.eq) goto loc_82C08BE0;
loc_82C08BD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c08e68
	goto loc_82C08E68;
loc_82C08BE0:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82c08bd8
	if (ctx.cr0.eq) goto loc_82C08BD8;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82b6e518
	ctx.lr = 0x82C08BFC;
	sub_82B6E518(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c08c20
	if (ctx.cr0.eq) goto loc_82C08C20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c06160
	ctx.lr = 0x82C08C0C;
	sub_82C06160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// addi r11,r11,7444
	ctx.r11.s64 = ctx.r11.s64 + 7444;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c08c24
	goto loc_82C08C24;
loc_82C08C20:
	// li r22,0
	ctx.r22.s64 = 0;
loc_82C08C24:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-21836
	ctx.r4.s64 = ctx.r11.s64 + -21836;
	// bl 0x82c04e10
	ctx.lr = 0x82C08C34;
	sub_82C04E10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c08c60
	if (!ctx.cr0.eq) goto loc_82C08C60;
loc_82C08C3C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82c08bd8
	if (ctx.cr6.eq) goto loc_82C08BD8;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c08bd8
	goto loc_82C08BD8;
loc_82C08C60:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-19640
	ctx.r4.s64 = ctx.r11.s64 + -19640;
	// bl 0x82c04d58
	ctx.lr = 0x82C08C70;
	sub_82C04D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c08c3c
	if (ctx.cr0.eq) goto loc_82C08C3C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r11,-18120
	ctx.r30.s64 = ctx.r11.s64 + -18120;
	// ble cr6,0x82c08cd0
	if (!ctx.cr6.gt) goto loc_82C08CD0;
loc_82C08C90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c04fa8
	ctx.lr = 0x82C08C9C;
	sub_82C04FA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C08CA4;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C08CAC;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c08cc0
	if (ctx.cr0.eq) goto loc_82C08CC0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c06d48
	ctx.lr = 0x82C08CC0;
	sub_82C06D48(ctx, base);
loc_82C08CC0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c08c90
	if (ctx.cr6.lt) goto loc_82C08C90;
loc_82C08CD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c04f20
	ctx.lr = 0x82C08CDC;
	sub_82C04F20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c08e64
	if (ctx.cr0.eq) goto loc_82C08E64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// bl 0x82c04e10
	ctx.lr = 0x82C08CF4;
	sub_82C04E10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c08c3c
	if (ctx.cr0.eq) goto loc_82C08C3C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c04d58
	ctx.lr = 0x82C08D08;
	sub_82C04D58(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82c08c3c
	if (ctx.cr0.eq) goto loc_82C08C3C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c061b0
	ctx.lr = 0x82C08D18;
	sub_82C061B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82c054f8
	ctx.lr = 0x82C08D24;
	sub_82C054F8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-21816
	ctx.r4.s64 = ctx.r11.s64 + -21816;
	// bl 0x82c04e10
	ctx.lr = 0x82C08D34;
	sub_82C04E10(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r11,-21808
	ctx.r4.s64 = ctx.r11.s64 + -21808;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c04e10
	ctx.lr = 0x82C08D48;
	sub_82C04E10(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c08e64
	if (!ctx.cr6.gt) goto loc_82C08E64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r27,r11,-19680
	ctx.r27.s64 = ctx.r11.s64 + -19680;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r26,r11,-18108
	ctx.r26.s64 = ctx.r11.s64 + -18108;
loc_82C08D6C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c04fa8
	ctx.lr = 0x82C08D78;
	sub_82C04FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C08D80;
	sub_82C051A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c08e48
	if (ctx.cr0.eq) goto loc_82C08E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82C08D90;
	sub_82C051A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C08D98;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c08de0
	if (!ctx.cr0.eq) goto loc_82C08DE0;
	// bl 0x82c05198
	ctx.lr = 0x82C08DA8;
	sub_82C05198(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82c08c3c
	if (ctx.cr0.eq) goto loc_82C08C3C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82c08c3c
	if (ctx.cr6.eq) goto loc_82C08C3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c04d58
	ctx.lr = 0x82C08DC4;
	sub_82C04D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c08c3c
	if (ctx.cr0.eq) goto loc_82C08C3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c06d48
	ctx.lr = 0x82C08DD8;
	sub_82C06D48(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82c08e30
	goto loc_82C08E30;
loc_82C08DE0:
	// bl 0x82c051a0
	ctx.lr = 0x82C08DE4;
	sub_82C051A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C08DEC;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c08e48
	if (!ctx.cr0.eq) goto loc_82C08E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C08DFC;
	sub_82C05198(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82c08c3c
	if (ctx.cr0.eq) goto loc_82C08C3C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c08c3c
	if (ctx.cr6.eq) goto loc_82C08C3C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c04d58
	ctx.lr = 0x82C08E18;
	sub_82C04D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c08c3c
	if (ctx.cr0.eq) goto loc_82C08C3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c06d48
	ctx.lr = 0x82C08E2C;
	sub_82C06D48(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82C08E30:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c054f8
	ctx.lr = 0x82C08E38;
	sub_82C054F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c05530
	ctx.lr = 0x82C08E44;
	sub_82C05530(ctx, base);
	// b 0x82c08e54
	goto loc_82C08E54;
loc_82C08E48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c06d48
	ctx.lr = 0x82C08E54;
	sub_82C06D48(ctx, base);
loc_82C08E54:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c08d6c
	if (ctx.cr6.lt) goto loc_82C08D6C;
loc_82C08E64:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82C08E68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08E70"))) PPC_WEAK_FUNC(sub_82C08E70);
PPC_FUNC_IMPL(__imp__sub_82C08E70) {
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
	// bl 0x82c06cf8
	ctx.lr = 0x82C08E90;
	sub_82C06CF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c08eac
	if (ctx.cr0.eq) goto loc_82C08EAC;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C08EAC:
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

__attribute__((alias("__imp__sub_82C08EC8"))) PPC_WEAK_FUNC(sub_82C08EC8);
PPC_FUNC_IMPL(__imp__sub_82C08EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r10.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c08f0c
	if (ctx.cr0.eq) goto loc_82C08F0C;
	// stw r3,28104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28104, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C08F0C:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,31048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31048);
	// bl 0x82c01410
	ctx.lr = 0x82C08F1C;
	sub_82C01410(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82C08F4C"))) PPC_WEAK_FUNC(sub_82C08F4C);
PPC_FUNC_IMPL(__imp__sub_82C08F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08F50"))) PPC_WEAK_FUNC(sub_82C08F50);
PPC_FUNC_IMPL(__imp__sub_82C08F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// stw r11,28104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28104, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c08f70
	if (!ctx.cr6.eq) goto loc_82C08F70;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C08F70:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C08F80"))) PPC_WEAK_FUNC(sub_82C08F80);
PPC_FUNC_IMPL(__imp__sub_82C08F80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08F8C"))) PPC_WEAK_FUNC(sub_82C08F8C);
PPC_FUNC_IMPL(__imp__sub_82C08F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08F90"))) PPC_WEAK_FUNC(sub_82C08F90);
PPC_FUNC_IMPL(__imp__sub_82C08F90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08F9C"))) PPC_WEAK_FUNC(sub_82C08F9C);
PPC_FUNC_IMPL(__imp__sub_82C08F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08FA0"))) PPC_WEAK_FUNC(sub_82C08FA0);
PPC_FUNC_IMPL(__imp__sub_82C08FA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08FAC"))) PPC_WEAK_FUNC(sub_82C08FAC);
PPC_FUNC_IMPL(__imp__sub_82C08FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08FB0"))) PPC_WEAK_FUNC(sub_82C08FB0);
PPC_FUNC_IMPL(__imp__sub_82C08FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c08fe4
	if (!ctx.cr0.eq) goto loc_82C08FE4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-31944
	ctx.r11.s64 = ctx.r11.s64 + -31944;
	// addi r10,r10,-21672
	ctx.r10.s64 = ctx.r10.s64 + -21672;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82C08FE4:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82c09060
	if (!ctx.cr6.eq) goto loc_82C09060;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82c09044
	if (!ctx.cr0.eq) goto loc_82C09044;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82c09084
	goto loc_82C09084;
loc_82C09044:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82c09084
	goto loc_82C09084;
loc_82C09060:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq 0x82c09080
	if (ctx.cr0.eq) goto loc_82C09080;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82c09084
	goto loc_82C09084;
loc_82C09080:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82C09084:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,-31944
	ctx.r10.s64 = ctx.r10.s64 + -31944;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C090A4"))) PPC_WEAK_FUNC(sub_82C090A4);
PPC_FUNC_IMPL(__imp__sub_82C090A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C090A8"))) PPC_WEAK_FUNC(sub_82C090A8);
PPC_FUNC_IMPL(__imp__sub_82C090A8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,31044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31044);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82c09108
	if (ctx.cr0.eq) goto loc_82C09108;
	// lis r30,-31904
	ctx.r30.s64 = -2090860544;
loc_82C090DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,28104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28104, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C090FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82c090dc
	if (!ctx.cr0.eq) goto loc_82C090DC;
loc_82C09108:
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

__attribute__((alias("__imp__sub_82C09124"))) PPC_WEAK_FUNC(sub_82C09124);
PPC_FUNC_IMPL(__imp__sub_82C09124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09128"))) PPC_WEAK_FUNC(sub_82C09128);
PPC_FUNC_IMPL(__imp__sub_82C09128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C09130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31904
	ctx.r29.s64 = -2090860544;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,28104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28104, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82c09170
	if (ctx.cr0.eq) goto loc_82C09170;
loc_82C09154:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c38850
	ctx.lr = 0x82C09160;
	sub_82C38850(ctx, base);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82c09154
	if (!ctx.cr0.eq) goto loc_82C09154;
	// lwz r11,28104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28104);
loc_82C09170:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82c08940
	ctx.lr = 0x82C0917C;
	sub_82C08940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0919C"))) PPC_WEAK_FUNC(sub_82C0919C);
PPC_FUNC_IMPL(__imp__sub_82C0919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C091A0"))) PPC_WEAK_FUNC(sub_82C091A0);
PPC_FUNC_IMPL(__imp__sub_82C091A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lwz r11,32100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// addi r31,r9,31072
	ctx.r31.s64 = ctx.r9.s64 + 31072;
	// bne 0x82c091fc
	if (!ctx.cr0.eq) goto loc_82C091FC;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,9044(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9044);
	// stw r11,32100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32100, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82c091e8
	if (ctx.cr0.eq) goto loc_82C091E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82C091E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,25280
	ctx.r3.s64 = ctx.r10.s64 + 25280;
	// stb r11,9044(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9044, ctx.r11.u8);
	// bl 0x82cb0ae8
	ctx.lr = 0x82C091FC;
	sub_82CB0AE8(ctx, base);
loc_82C091FC:
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

__attribute__((alias("__imp__sub_82C09214"))) PPC_WEAK_FUNC(sub_82C09214);
PPC_FUNC_IMPL(__imp__sub_82C09214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09218"))) PPC_WEAK_FUNC(sub_82C09218);
PPC_FUNC_IMPL(__imp__sub_82C09218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// lwz r11,-32404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31904
	ctx.r9.s64 = -2090860544;
	// addi r31,r9,32104
	ctx.r31.s64 = ctx.r9.s64 + 32104;
	// bne 0x82c09274
	if (!ctx.cr0.eq) goto loc_82C09274;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,9045(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9045);
	// stw r11,-32404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32404, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82c09260
	if (ctx.cr0.eq) goto loc_82C09260;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82C09260:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,25256
	ctx.r3.s64 = ctx.r10.s64 + 25256;
	// stb r11,9045(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9045, ctx.r11.u8);
	// bl 0x82cb0ae8
	ctx.lr = 0x82C09274;
	sub_82CB0AE8(ctx, base);
loc_82C09274:
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

__attribute__((alias("__imp__sub_82C0928C"))) PPC_WEAK_FUNC(sub_82C0928C);
PPC_FUNC_IMPL(__imp__sub_82C0928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09290"))) PPC_WEAK_FUNC(sub_82C09290);
PPC_FUNC_IMPL(__imp__sub_82C09290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// lwz r11,-31372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31372);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31903
	ctx.r9.s64 = -2090795008;
	// addi r31,r9,-32400
	ctx.r31.s64 = ctx.r9.s64 + -32400;
	// bne 0x82c092ec
	if (!ctx.cr0.eq) goto loc_82C092EC;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,9046(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9046);
	// stw r11,-31372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31372, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82c092d8
	if (ctx.cr0.eq) goto loc_82C092D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82C092D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,25232
	ctx.r3.s64 = ctx.r10.s64 + 25232;
	// stb r11,9046(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9046, ctx.r11.u8);
	// bl 0x82cb0ae8
	ctx.lr = 0x82C092EC;
	sub_82CB0AE8(ctx, base);
loc_82C092EC:
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

__attribute__((alias("__imp__sub_82C09304"))) PPC_WEAK_FUNC(sub_82C09304);
PPC_FUNC_IMPL(__imp__sub_82C09304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09308"))) PPC_WEAK_FUNC(sub_82C09308);
PPC_FUNC_IMPL(__imp__sub_82C09308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82c09384
	if (ctx.cr6.eq) goto loc_82C09384;
	// bl 0x82c091a0
	ctx.lr = 0x82C09328;
	sub_82C091A0(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82c09384
	if (!ctx.cr0.gt) goto loc_82C09384;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82C0933C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82C09348:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82c0936c
	if (ctx.cr0.eq) goto loc_82C0936C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c09348
	if (ctx.cr6.eq) goto loc_82C09348;
loc_82C0936C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82c0939c
	if (ctx.cr0.eq) goto loc_82C0939C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82c0933c
	if (ctx.cr6.lt) goto loc_82C0933C;
loc_82C09384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C09388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C0939C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82c09388
	goto loc_82C09388;
}

__attribute__((alias("__imp__sub_82C093A8"))) PPC_WEAK_FUNC(sub_82C093A8);
PPC_FUNC_IMPL(__imp__sub_82C093A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82c09424
	if (ctx.cr6.eq) goto loc_82C09424;
	// bl 0x82c09218
	ctx.lr = 0x82C093C8;
	sub_82C09218(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82c09424
	if (!ctx.cr0.gt) goto loc_82C09424;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82C093DC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82C093E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82c0940c
	if (ctx.cr0.eq) goto loc_82C0940C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c093e8
	if (ctx.cr6.eq) goto loc_82C093E8;
loc_82C0940C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82c0943c
	if (ctx.cr0.eq) goto loc_82C0943C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82c093dc
	if (ctx.cr6.lt) goto loc_82C093DC;
loc_82C09424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C09428:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C0943C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82c09428
	goto loc_82C09428;
}

__attribute__((alias("__imp__sub_82C09448"))) PPC_WEAK_FUNC(sub_82C09448);
PPC_FUNC_IMPL(__imp__sub_82C09448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82c094c4
	if (ctx.cr6.eq) goto loc_82C094C4;
	// bl 0x82c02650
	ctx.lr = 0x82C09468;
	sub_82C02650(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82c094c4
	if (!ctx.cr0.gt) goto loc_82C094C4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82C0947C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82C09488:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82c094ac
	if (ctx.cr0.eq) goto loc_82C094AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c09488
	if (ctx.cr6.eq) goto loc_82C09488;
loc_82C094AC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82c094dc
	if (ctx.cr0.eq) goto loc_82C094DC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82c0947c
	if (ctx.cr6.lt) goto loc_82C0947C;
loc_82C094C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C094C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C094DC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82c094c8
	goto loc_82C094C8;
}

__attribute__((alias("__imp__sub_82C094E8"))) PPC_WEAK_FUNC(sub_82C094E8);
PPC_FUNC_IMPL(__imp__sub_82C094E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82c09564
	if (ctx.cr6.eq) goto loc_82C09564;
	// bl 0x82c09290
	ctx.lr = 0x82C09508;
	sub_82C09290(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82c09564
	if (!ctx.cr0.gt) goto loc_82C09564;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82C0951C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82C09528:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82c0954c
	if (ctx.cr0.eq) goto loc_82C0954C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c09528
	if (ctx.cr6.eq) goto loc_82C09528;
loc_82C0954C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82c0957c
	if (ctx.cr0.eq) goto loc_82C0957C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82c0951c
	if (ctx.cr6.lt) goto loc_82C0951C;
loc_82C09564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C09568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C0957C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82c09568
	goto loc_82C09568;
}

__attribute__((alias("__imp__sub_82C09588"))) PPC_WEAK_FUNC(sub_82C09588);
PPC_FUNC_IMPL(__imp__sub_82C09588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C09590;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c07ca0
	ctx.lr = 0x82C095A0;
	sub_82C07CA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c096b0
	if (ctx.cr0.eq) goto loc_82C096B0;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,9048
	ctx.r8.s64 = ctx.r9.s64 + 9048;
loc_82C095B8:
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x82c095b8
	if (ctx.cr6.lt) goto loc_82C095B8;
	// cmplwi cr6,r10,16646
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16646, ctx.xer);
	// bne cr6,0x82c096b0
	if (!ctx.cr6.eq) goto loc_82C096B0;
	// lis r27,-31904
	ctx.r27.s64 = -2090860544;
	// lwz r11,31044(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c096b0
	if (ctx.cr6.eq) goto loc_82C096B0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c096b0
	if (ctx.cr6.eq) goto loc_82C096B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,7448
	ctx.r4.s64 = ctx.r11.s64 + 7448;
	// bl 0x82c04e10
	ctx.lr = 0x82C09604;
	sub_82C04E10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c0964c
	if (ctx.cr0.eq) goto loc_82C0964C;
	// bl 0x82c05198
	ctx.lr = 0x82C09610;
	sub_82C05198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c0964c
	if (ctx.cr0.eq) goto loc_82C0964C;
	// bl 0x82c09448
	ctx.lr = 0x82C0961C;
	sub_82C09448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c09654
	if (!ctx.cr0.eq) goto loc_82C09654;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82c02650
	ctx.lr = 0x82C0962C;
	sub_82C02650(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c0964c
	if (!ctx.cr6.gt) goto loc_82C0964C;
loc_82C09638:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82c02650
	ctx.lr = 0x82C09640;
	sub_82C02650(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c09638
	if (ctx.cr6.lt) goto loc_82C09638;
loc_82C0964C:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,28108
	ctx.r3.s64 = ctx.r11.s64 + 28108;
loc_82C09654:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31904
	ctx.r30.s64 = -2090860544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r29,28104(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28104);
	// stw r31,28104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28104, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0968C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c096bc
	if (!ctx.cr0.eq) goto loc_82C096BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C096AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28104, ctx.r29.u32);
loc_82C096B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C096B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82C096BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,31044(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31044);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,6520
	ctx.r11.s64 = ctx.r11.s64 + 6520;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c08848
	ctx.lr = 0x82C096E4;
	sub_82C08848(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x82c096b4
	goto loc_82C096B4;
}

__attribute__((alias("__imp__sub_82C096F4"))) PPC_WEAK_FUNC(sub_82C096F4);
PPC_FUNC_IMPL(__imp__sub_82C096F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C096F8"))) PPC_WEAK_FUNC(sub_82C096F8);
PPC_FUNC_IMPL(__imp__sub_82C096F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82C09700;
	__savegprlr_25(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c07ca0
	ctx.lr = 0x82C09718;
	sub_82C07CA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c09728
	if (!ctx.cr0.eq) goto loc_82C09728;
loc_82C09720:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c09a00
	goto loc_82C09A00;
loc_82C09728:
	// lis r29,-31904
	ctx.r29.s64 = -2090860544;
	// lwz r11,28104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c09720
	if (ctx.cr6.eq) goto loc_82C09720;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c09720
	if (ctx.cr6.eq) goto loc_82C09720;
	// lis r26,-31904
	ctx.r26.s64 = -2090860544;
	// lwz r11,31048(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31048);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c09720
	if (ctx.cr6.eq) goto loc_82C09720;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c09788
	if (!ctx.cr6.eq) goto loc_82C09788;
	// lis r31,-31903
	ctx.r31.s64 = -2090795008;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,7460
	ctx.r4.s64 = ctx.r11.s64 + 7460;
	// lwz r5,-31368(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31368);
	// bl 0x82cb61f0
	ctx.lr = 0x82C09778;
	sub_82CB61F0(ctx, base);
	// lwz r11,-31368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-31368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31368, ctx.r11.u32);
	// b 0x82c097d4
	goto loc_82C097D4;
loc_82C09788:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C09790:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c09790
	if (!ctx.cr6.eq) goto loc_82C09790;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// bgt cr6,0x82c09720
	if (ctx.cr6.gt) goto loc_82C09720;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_82C097C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82c097c0
	if (!ctx.cr0.eq) goto loc_82C097C0;
loc_82C097D4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-21172
	ctx.r30.s64 = ctx.r11.s64 + -21172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c04f20
	ctx.lr = 0x82C097E8;
	sub_82C04F20(ctx, base);
	// bl 0x82b82b60
	ctx.lr = 0x82C097EC;
	sub_82B82B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c09820
	if (!ctx.cr0.eq) goto loc_82C09820;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82b82e18
	ctx.lr = 0x82C097FC;
	sub_82B82E18(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c09720
	if (!ctx.cr6.gt) goto loc_82C09720;
loc_82C09808:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82b82e18
	ctx.lr = 0x82C09810;
	sub_82B82E18(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c09808
	if (ctx.cr6.lt) goto loc_82C09808;
	// b 0x82c09720
	goto loc_82C09720;
loc_82C09820:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c09720
	if (ctx.cr0.eq) goto loc_82C09720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0983C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x82c09874
	if (!ctx.cr6.eq) goto loc_82C09874;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c09720
	if (ctx.cr6.eq) goto loc_82C09720;
loc_82C09858:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C0985C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c09720
	goto loc_82C09720;
loc_82C09874:
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lwz r11,28104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28104);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C098A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c09858
	if (ctx.cr0.eq) goto loc_82C09858;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-18120
	ctx.r4.s64 = ctx.r11.s64 + -18120;
	// bl 0x82c04e10
	ctx.lr = 0x82C098B8;
	sub_82C04E10(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82c099c4
	if (ctx.cr0.eq) goto loc_82C099C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c04f20
	ctx.lr = 0x82C098CC;
	sub_82C04F20(ctx, base);
	// bl 0x82c093a8
	ctx.lr = 0x82C098D0;
	sub_82C093A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82c0999c
	if (ctx.cr0.eq) goto loc_82C0999C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-18140
	ctx.r4.s64 = ctx.r11.s64 + -18140;
	// bl 0x82c04f20
	ctx.lr = 0x82C098E8;
	sub_82C04F20(ctx, base);
	// bl 0x82c09308
	ctx.lr = 0x82C098EC;
	sub_82C09308(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82c09920
	if (!ctx.cr0.eq) goto loc_82C09920;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82c091a0
	ctx.lr = 0x82C098FC;
	sub_82C091A0(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c09858
	if (!ctx.cr6.gt) goto loc_82C09858;
loc_82C09908:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82c091a0
	ctx.lr = 0x82C09910;
	sub_82C091A0(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c09908
	if (ctx.cr6.lt) goto loc_82C09908;
	// b 0x82c09858
	goto loc_82C09858;
loc_82C09920:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82c0985c
	if (ctx.cr0.eq) goto loc_82C0985C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c09858
	if (ctx.cr6.eq) goto loc_82C09858;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c099c4
	if (!ctx.cr0.eq) goto loc_82C099C4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c09994
	if (ctx.cr6.eq) goto loc_82C09994;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c09994
	if (ctx.cr0.eq) goto loc_82C09994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C09994:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// b 0x82c09858
	goto loc_82C09858;
loc_82C0999C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82c09218
	ctx.lr = 0x82C099A4;
	sub_82C09218(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c099c4
	if (!ctx.cr6.gt) goto loc_82C099C4;
loc_82C099B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82c09218
	ctx.lr = 0x82C099B8;
	sub_82C09218(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c099b0
	if (ctx.cr6.lt) goto loc_82C099B0;
loc_82C099C4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r4,31048(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31048);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r11,r11,-21624
	ctx.r11.s64 = ctx.r11.s64 + -21624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82c01488
	ctx.lr = 0x82C099E8;
	sub_82C01488(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_82C09A00:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09A08"))) PPC_WEAK_FUNC(sub_82C09A08);
PPC_FUNC_IMPL(__imp__sub_82C09A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C09A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c07ca0
	ctx.lr = 0x82C09A24;
	sub_82C07CA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c09aa4
	if (ctx.cr0.eq) goto loc_82C09AA4;
	// lis r28,-31904
	ctx.r28.s64 = -2090860544;
	// lwz r11,28104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c09aa4
	if (ctx.cr6.eq) goto loc_82C09AA4;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82c09aa4
	if (ctx.cr0.eq) goto loc_82C09AA4;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c09aa4
	if (!ctx.cr6.lt) goto loc_82C09AA4;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-21172
	ctx.r4.s64 = ctx.r11.s64 + -21172;
	// bl 0x82c04f20
	ctx.lr = 0x82C09A68;
	sub_82C04F20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c09aa4
	if (ctx.cr0.eq) goto loc_82C09AA4;
	// bl 0x82c094e8
	ctx.lr = 0x82C09A74;
	sub_82C094E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c09ab0
	if (!ctx.cr0.eq) goto loc_82C09AB0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82c09290
	ctx.lr = 0x82C09A84;
	sub_82C09290(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c09aa4
	if (!ctx.cr6.gt) goto loc_82C09AA4;
loc_82C09A90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82c09290
	ctx.lr = 0x82C09A98;
	sub_82C09290(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c09a90
	if (ctx.cr6.lt) goto loc_82C09A90;
loc_82C09AA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C09AA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82C09AB0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq 0x82c09aa4
	if (ctx.cr0.eq) goto loc_82C09AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c09b0c
	if (!ctx.cr0.eq) goto loc_82C09B0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c09aa4
	goto loc_82C09AA4;
loc_82C09B0C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,28104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-31944
	ctx.r11.s64 = ctx.r11.s64 + -31944;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c08fb0
	ctx.lr = 0x82C09B38;
	sub_82C08FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82c09aa8
	goto loc_82C09AA8;
}

__attribute__((alias("__imp__sub_82C09B4C"))) PPC_WEAK_FUNC(sub_82C09B4C);
PPC_FUNC_IMPL(__imp__sub_82C09B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09B50"))) PPC_WEAK_FUNC(sub_82C09B50);
PPC_FUNC_IMPL(__imp__sub_82C09B50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B58"))) PPC_WEAK_FUNC(sub_82C09B58);
PPC_FUNC_IMPL(__imp__sub_82C09B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B60"))) PPC_WEAK_FUNC(sub_82C09B60);
PPC_FUNC_IMPL(__imp__sub_82C09B60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B68"))) PPC_WEAK_FUNC(sub_82C09B68);
PPC_FUNC_IMPL(__imp__sub_82C09B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B70"))) PPC_WEAK_FUNC(sub_82C09B70);
PPC_FUNC_IMPL(__imp__sub_82C09B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B78"))) PPC_WEAK_FUNC(sub_82C09B78);
PPC_FUNC_IMPL(__imp__sub_82C09B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B80"))) PPC_WEAK_FUNC(sub_82C09B80);
PPC_FUNC_IMPL(__imp__sub_82C09B80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B88"))) PPC_WEAK_FUNC(sub_82C09B88);
PPC_FUNC_IMPL(__imp__sub_82C09B88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B90"))) PPC_WEAK_FUNC(sub_82C09B90);
PPC_FUNC_IMPL(__imp__sub_82C09B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,140(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C09BA8;
	sub_82C0D1B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c0d640
	ctx.lr = 0x82C09BB0;
	sub_82C0D640(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09BC4"))) PPC_WEAK_FUNC(sub_82C09BC4);
PPC_FUNC_IMPL(__imp__sub_82C09BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09BC8"))) PPC_WEAK_FUNC(sub_82C09BC8);
PPC_FUNC_IMPL(__imp__sub_82C09BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c09be8
	if (!ctx.cr6.lt) goto loc_82C09BE8;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82C09BE8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09BF4"))) PPC_WEAK_FUNC(sub_82C09BF4);
PPC_FUNC_IMPL(__imp__sub_82C09BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09BF8"))) PPC_WEAK_FUNC(sub_82C09BF8);
PPC_FUNC_IMPL(__imp__sub_82C09BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x82c09c24
	if (ctx.cr6.lt) goto loc_82C09C24;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C09C24:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09C38"))) PPC_WEAK_FUNC(sub_82C09C38);
PPC_FUNC_IMPL(__imp__sub_82C09C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x82c09c64
	if (ctx.cr6.lt) goto loc_82C09C64;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C09C64:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09C78"))) PPC_WEAK_FUNC(sub_82C09C78);
PPC_FUNC_IMPL(__imp__sub_82C09C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c09c90
	if (!ctx.cr6.lt) goto loc_82C09C90;
loc_82C09C88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C09C90:
	// ble cr6,0x82c09c9c
	if (!ctx.cr6.gt) goto loc_82C09C9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C09C9C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c09c88
	if (ctx.cr6.lt) goto loc_82C09C88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09CBC"))) PPC_WEAK_FUNC(sub_82C09CBC);
PPC_FUNC_IMPL(__imp__sub_82C09CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09CC0"))) PPC_WEAK_FUNC(sub_82C09CC0);
PPC_FUNC_IMPL(__imp__sub_82C09CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09CC4"))) PPC_WEAK_FUNC(sub_82C09CC4);
PPC_FUNC_IMPL(__imp__sub_82C09CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09CC8"))) PPC_WEAK_FUNC(sub_82C09CC8);
PPC_FUNC_IMPL(__imp__sub_82C09CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09CD0"))) PPC_WEAK_FUNC(sub_82C09CD0);
PPC_FUNC_IMPL(__imp__sub_82C09CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09CD8"))) PPC_WEAK_FUNC(sub_82C09CD8);
PPC_FUNC_IMPL(__imp__sub_82C09CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,9152(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9152);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82c09cf0
	if (ctx.cr0.eq) goto loc_82C09CF0;
	// stw r10,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r10.u32);
loc_82C09CF0:
	// stb r10,9152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9152, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09CF8"))) PPC_WEAK_FUNC(sub_82C09CF8);
PPC_FUNC_IMPL(__imp__sub_82C09CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,9153(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9153);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82c09d10
	if (ctx.cr0.eq) goto loc_82C09D10;
	// stw r10,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r10.u32);
loc_82C09D10:
	// stb r10,9153(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9153, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09D18"))) PPC_WEAK_FUNC(sub_82C09D18);
PPC_FUNC_IMPL(__imp__sub_82C09D18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09D24"))) PPC_WEAK_FUNC(sub_82C09D24);
PPC_FUNC_IMPL(__imp__sub_82C09D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09D28"))) PPC_WEAK_FUNC(sub_82C09D28);
PPC_FUNC_IMPL(__imp__sub_82C09D28) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09D34"))) PPC_WEAK_FUNC(sub_82C09D34);
PPC_FUNC_IMPL(__imp__sub_82C09D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09D38"))) PPC_WEAK_FUNC(sub_82C09D38);
PPC_FUNC_IMPL(__imp__sub_82C09D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,7496
	ctx.r10.s64 = ctx.r11.s64 + 7496;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09D58"))) PPC_WEAK_FUNC(sub_82C09D58);
PPC_FUNC_IMPL(__imp__sub_82C09D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,7500
	ctx.r10.s64 = ctx.r11.s64 + 7500;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09D78"))) PPC_WEAK_FUNC(sub_82C09D78);
PPC_FUNC_IMPL(__imp__sub_82C09D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09D88"))) PPC_WEAK_FUNC(sub_82C09D88);
PPC_FUNC_IMPL(__imp__sub_82C09D88) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09D98"))) PPC_WEAK_FUNC(sub_82C09D98);
PPC_FUNC_IMPL(__imp__sub_82C09D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09DA0"))) PPC_WEAK_FUNC(sub_82C09DA0);
PPC_FUNC_IMPL(__imp__sub_82C09DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,7504
	ctx.r10.s64 = ctx.r11.s64 + 7504;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09DC0"))) PPC_WEAK_FUNC(sub_82C09DC0);
PPC_FUNC_IMPL(__imp__sub_82C09DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09DD0"))) PPC_WEAK_FUNC(sub_82C09DD0);
PPC_FUNC_IMPL(__imp__sub_82C09DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09DE0"))) PPC_WEAK_FUNC(sub_82C09DE0);
PPC_FUNC_IMPL(__imp__sub_82C09DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09DE8"))) PPC_WEAK_FUNC(sub_82C09DE8);
PPC_FUNC_IMPL(__imp__sub_82C09DE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C09DEC:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c09e08
	if (ctx.cr6.eq) goto loc_82C09E08;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c09dec
	if (!ctx.cr0.eq) goto loc_82C09DEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C09E08:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09E10"))) PPC_WEAK_FUNC(sub_82C09E10);
PPC_FUNC_IMPL(__imp__sub_82C09E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82c09e28
	if (!ctx.cr6.gt) goto loc_82C09E28;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82C09E28:
	// b 0x82b6e518
	sub_82B6E518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09E2C"))) PPC_WEAK_FUNC(sub_82C09E2C);
PPC_FUNC_IMPL(__imp__sub_82C09E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09E30"))) PPC_WEAK_FUNC(sub_82C09E30);
PPC_FUNC_IMPL(__imp__sub_82C09E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C09E40"))) PPC_WEAK_FUNC(sub_82C09E40);
PPC_FUNC_IMPL(__imp__sub_82C09E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82c09e58
	if (!ctx.cr6.gt) goto loc_82C09E58;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82C09E58:
	// b 0x82b6e518
	sub_82B6E518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09E5C"))) PPC_WEAK_FUNC(sub_82C09E5C);
PPC_FUNC_IMPL(__imp__sub_82C09E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09E60"))) PPC_WEAK_FUNC(sub_82C09E60);
PPC_FUNC_IMPL(__imp__sub_82C09E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C09E70"))) PPC_WEAK_FUNC(sub_82C09E70);
PPC_FUNC_IMPL(__imp__sub_82C09E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82c09e88
	if (!ctx.cr6.gt) goto loc_82C09E88;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82C09E88:
	// b 0x82b6e518
	sub_82B6E518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09E8C"))) PPC_WEAK_FUNC(sub_82C09E8C);
PPC_FUNC_IMPL(__imp__sub_82C09E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09E90"))) PPC_WEAK_FUNC(sub_82C09E90);
PPC_FUNC_IMPL(__imp__sub_82C09E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C09EA0"))) PPC_WEAK_FUNC(sub_82C09EA0);
PPC_FUNC_IMPL(__imp__sub_82C09EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C09EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f0,-18268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82c09f04
	if (!ctx.cr6.gt) goto loc_82C09F04;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C09ED4:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c09ed4
	if (ctx.cr6.lt) goto loc_82C09ED4;
loc_82C09F04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09F0C"))) PPC_WEAK_FUNC(sub_82C09F0C);
PPC_FUNC_IMPL(__imp__sub_82C09F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09F10"))) PPC_WEAK_FUNC(sub_82C09F10);
PPC_FUNC_IMPL(__imp__sub_82C09F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C09F18;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C09F48;
	sub_82C0D1B0(ctx, base);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C09F54;
	sub_82C0D1B0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r10,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r10.u8);
	// ble cr6,0x82c09fac
	if (!ctx.cr6.gt) goto loc_82C09FAC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82C09F80:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C09F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c09f80
	if (ctx.cr6.lt) goto loc_82C09F80;
loc_82C09FAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09FB8"))) PPC_WEAK_FUNC(sub_82C09FB8);
PPC_FUNC_IMPL(__imp__sub_82C09FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C09FC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c0a010
	if (!ctx.cr6.gt) goto loc_82C0A010;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C09FE0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82cb1690
	ctx.lr = 0x82C09FF4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a01c
	if (ctx.cr0.eq) goto loc_82C0A01C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c09fe0
	if (ctx.cr6.lt) goto loc_82C09FE0;
loc_82C0A010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C0A014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82C0A01C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82c0a014
	goto loc_82C0A014;
}

__attribute__((alias("__imp__sub_82C0A024"))) PPC_WEAK_FUNC(sub_82C0A024);
PPC_FUNC_IMPL(__imp__sub_82C0A024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0A028"))) PPC_WEAK_FUNC(sub_82C0A028);
PPC_FUNC_IMPL(__imp__sub_82C0A028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82C0A030;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c0a080
	if (!ctx.cr6.gt) goto loc_82C0A080;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C0A050:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82cb1690
	ctx.lr = 0x82C0A064;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a08c
	if (ctx.cr0.eq) goto loc_82C0A08C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c0a050
	if (ctx.cr6.lt) goto loc_82C0A050;
loc_82C0A080:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C0A084:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82C0A08C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82c0a084
	goto loc_82C0A084;
}

__attribute__((alias("__imp__sub_82C0A094"))) PPC_WEAK_FUNC(sub_82C0A094);
PPC_FUNC_IMPL(__imp__sub_82C0A094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0A098"))) PPC_WEAK_FUNC(sub_82C0A098);
PPC_FUNC_IMPL(__imp__sub_82C0A098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82C0A0A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82baaff8
	ctx.lr = 0x82C0A0B0;
	sub_82BAAFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82c0a0c4
	if (!ctx.cr6.eq) goto loc_82C0A0C4;
loc_82C0A0BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c0a438
	goto loc_82C0A438;
loc_82C0A0C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7620
	ctx.r30.s64 = ctx.r11.s64 + 7620;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A0D4;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A0DC;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c0a118
	if (!ctx.cr0.eq) goto loc_82C0A118;
	// bl 0x82c05198
	ctx.lr = 0x82C0A0EC;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C0A0F0;
	sub_82CB6C40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82c0a0bc
	if (ctx.cr6.gt) goto loc_82C0A0BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x82c0a0bc
	goto loc_82C0A0BC;
loc_82C0A118:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,7604
	ctx.r30.s64 = ctx.r11.s64 + 7604;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A124;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A12C;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c0a19c
	if (!ctx.cr0.eq) goto loc_82C0A19C;
	// bl 0x82c05198
	ctx.lr = 0x82C0A13C;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C0A140;
	sub_82CB6C40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82c0a17c
	if (ctx.cr6.gt) goto loc_82C0A17C;
	// beq 0x82c0a170
	if (ctx.cr0.eq) goto loc_82C0A170;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c0a194
	goto loc_82C0A194;
loc_82C0A170:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c0a194
	goto loc_82C0A194;
loc_82C0A17C:
	// beq 0x82c0a188
	if (ctx.cr0.eq) goto loc_82C0A188;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82c0a190
	goto loc_82C0A190;
loc_82C0A188:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82C0A190:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82C0A194:
	// stfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// b 0x82c0a0bc
	goto loc_82C0A0BC;
loc_82C0A19C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r11,-19556
	ctx.r30.s64 = ctx.r11.s64 + -19556;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A1A8;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A1B0;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a0bc
	if (ctx.cr0.eq) goto loc_82C0A0BC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-19548
	ctx.r30.s64 = ctx.r11.s64 + -19548;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A1C8;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A1D0;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a0bc
	if (ctx.cr0.eq) goto loc_82C0A0BC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-19484
	ctx.r30.s64 = ctx.r11.s64 + -19484;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A1E8;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A1F0;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a0bc
	if (ctx.cr0.eq) goto loc_82C0A0BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7588
	ctx.r30.s64 = ctx.r11.s64 + 7588;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A208;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A210;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c0a24c
	if (!ctx.cr0.eq) goto loc_82C0A24C;
	// bl 0x82c05198
	ctx.lr = 0x82C0A220;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C0A224;
	sub_82CB6C40(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c0a0bc
	if (!ctx.cr6.gt) goto loc_82C0A0BC;
	// stfs f0,148(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 148, temp.u32);
	// b 0x82c0a0bc
	goto loc_82C0A0BC;
loc_82C0A24C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,7568
	ctx.r30.s64 = ctx.r11.s64 + 7568;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A258;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A260;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c0a29c
	if (!ctx.cr0.eq) goto loc_82C0A29C;
	// bl 0x82c05198
	ctx.lr = 0x82C0A270;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C0A274;
	sub_82CB6C40(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c0a0bc
	if (!ctx.cr6.gt) goto loc_82C0A0BC;
	// stfs f0,152(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 152, temp.u32);
	// b 0x82c0a0bc
	goto loc_82C0A0BC;
loc_82C0A29C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,7552
	ctx.r30.s64 = ctx.r11.s64 + 7552;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A2A8;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A2B0;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c0a2e4
	if (!ctx.cr0.eq) goto loc_82C0A2E4;
	// bl 0x82c05198
	ctx.lr = 0x82C0A2C0;
	sub_82C05198(ctx, base);
	// bl 0x82cb6a70
	ctx.lr = 0x82C0A2C4;
	sub_82CB6A70(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// stw r3,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r3.u32);
	// blt cr6,0x82c0a2d8
	if (ctx.cr6.lt) goto loc_82C0A2D8;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// blt cr6,0x82c0a0bc
	if (ctx.cr6.lt) goto loc_82C0A0BC;
loc_82C0A2D8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r11.u32);
	// b 0x82c0a0bc
	goto loc_82C0A0BC;
loc_82C0A2E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,7536
	ctx.r30.s64 = ctx.r11.s64 + 7536;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A2F0;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A2F8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c0a3d4
	if (!ctx.cr0.eq) goto loc_82C0A3D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,6120
	ctx.r30.s64 = ctx.r11.s64 + 6120;
	// bl 0x82c05198
	ctx.lr = 0x82C0A310;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A318;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a3c8
	if (ctx.cr0.eq) goto loc_82C0A3C8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-12384
	ctx.r30.s64 = ctx.r11.s64 + -12384;
	// bl 0x82c05198
	ctx.lr = 0x82C0A330;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A338;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a3c8
	if (ctx.cr0.eq) goto loc_82C0A3C8;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-16692
	ctx.r30.s64 = ctx.r11.s64 + -16692;
	// bl 0x82c05198
	ctx.lr = 0x82C0A350;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A358;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a3c8
	if (ctx.cr0.eq) goto loc_82C0A3C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6116
	ctx.r30.s64 = ctx.r11.s64 + 6116;
	// bl 0x82c05198
	ctx.lr = 0x82C0A370;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A378;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a3c0
	if (ctx.cr0.eq) goto loc_82C0A3C0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-12392
	ctx.r30.s64 = ctx.r11.s64 + -12392;
	// bl 0x82c05198
	ctx.lr = 0x82C0A390;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A398;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c0a3c0
	if (ctx.cr0.eq) goto loc_82C0A3C0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,18988
	ctx.r30.s64 = ctx.r11.s64 + 18988;
	// bl 0x82c05198
	ctx.lr = 0x82C0A3B0;
	sub_82C05198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A3B8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c0a434
	if (!ctx.cr0.eq) goto loc_82C0A434;
loc_82C0A3C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c0a3cc
	goto loc_82C0A3CC;
loc_82C0A3C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C0A3CC:
	// stb r11,136(r29)
	PPC_STORE_U8(ctx.r29.u32 + 136, ctx.r11.u8);
	// b 0x82c0a0bc
	goto loc_82C0A0BC;
loc_82C0A3D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,7512
	ctx.r30.s64 = ctx.r11.s64 + 7512;
	// bl 0x82c051a0
	ctx.lr = 0x82C0A3E0;
	sub_82C051A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82C0A3E8;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c0a434
	if (!ctx.cr0.eq) goto loc_82C0A434;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05198
	ctx.lr = 0x82C0A3F8;
	sub_82C05198(ctx, base);
	// bl 0x82cb6c40
	ctx.lr = 0x82C0A3FC;
	sub_82CB6C40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,176(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 176, temp.u32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c0a424
	if (!ctx.cr6.gt) goto loc_82C0A424;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c0a0bc
	if (!ctx.cr6.gt) goto loc_82C0A0BC;
loc_82C0A424:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7508);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 176, temp.u32);
	// b 0x82c0a0bc
	goto loc_82C0A0BC;
loc_82C0A434:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C0A438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0A440"))) PPC_WEAK_FUNC(sub_82C0A440);
PPC_FUNC_IMPL(__imp__sub_82C0A440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82C0A448;
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,8896
	ctx.r30.s64 = ctx.r11.s64 + 8896;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82c0a490
	if (ctx.cr6.eq) goto loc_82C0A490;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82c0a494
	goto loc_82C0A494;
loc_82C0A490:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82C0A494:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c0a4d4
	if (ctx.cr0.eq) goto loc_82C0A4D4;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82c0a4d4
	if (!ctx.cr0.eq) goto loc_82C0A4D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c0a51c
	if (ctx.cr0.eq) goto loc_82C0A51C;
loc_82C0A4D4:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bne cr6,0x82c0a500
	if (!ctx.cr6.eq) goto loc_82C0A500;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A4F8;
	sub_82C0D1B0(ctx, base);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
loc_82C0A500:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c0a51c
	if (!ctx.cr6.lt) goto loc_82C0A51C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0a494
	if (!ctx.cr6.eq) goto loc_82C0A494;
loc_82C0A51C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0a538
	if (ctx.cr6.eq) goto loc_82C0A538;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c0a53c
	goto loc_82C0A53C;
loc_82C0A538:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82C0A53C:
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
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

__attribute__((alias("__imp__sub_82C0A554"))) PPC_WEAK_FUNC(sub_82C0A554);
PPC_FUNC_IMPL(__imp__sub_82C0A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0A558"))) PPC_WEAK_FUNC(sub_82C0A558);
PPC_FUNC_IMPL(__imp__sub_82C0A558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82C0A560;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6ae4
	ctx.lr = 0x82C0A568;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r24,r11,8896
	ctx.r24.s64 = ctx.r11.s64 + 8896;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82c0a5a0
	if (ctx.cr6.eq) goto loc_82C0A5A0;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// b 0x82c0a5a4
	goto loc_82C0A5A4;
loc_82C0A5A0:
	// fmr f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f29.f64;
loc_82C0A5A4:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r23,0
	ctx.r23.s64 = 0;
	// stfs f27,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c0a5e0
	if (!ctx.cr6.gt) goto loc_82C0A5E0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82C0A5C0:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r23.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c0a5c0
	if (ctx.cr6.lt) goto loc_82C0A5C0;
loc_82C0A5E0:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82c0a608
	if (!ctx.cr6.eq) goto loc_82C0A608;
	// stw r23,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r23.u32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A5F4;
	sub_82C0D1B0(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_82C0A608:
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A60C;
	sub_82C0D1B0(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lfs f13,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82c0a664
	if (!ctx.cr6.gt) goto loc_82C0A664;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A650;
	sub_82C0D1B0(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_82C0A664:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0a684
	if (!ctx.cr6.eq) goto loc_82C0A684;
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A674;
	sub_82C0D1B0(ctx, base);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x82c0a8d4
	goto loc_82C0A8D4;
loc_82C0A684:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A6A4;
	sub_82C0D1B0(ctx, base);
	// lfs f30,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A6AC;
	sub_82C0D1B0(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c0a440
	ctx.lr = 0x82C0A6F8;
	sub_82C0A440(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// li r22,1
	ctx.r22.s64 = 1;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82c0a72c
	if (ctx.cr6.lt) goto loc_82C0A72C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq 0x82c0a78c
	if (ctx.cr0.eq) goto loc_82C0A78C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0a440
	ctx.lr = 0x82C0A72C;
	sub_82C0A440(ctx, base);
loc_82C0A72C:
	// stb r22,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r22.u8);
loc_82C0A730:
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A734;
	sub_82C0D1B0(ctx, base);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c0d640
	ctx.lr = 0x82C0A740;
	sub_82C0D640(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82c0d638
	ctx.lr = 0x82C0A74C;
	sub_82C0D638(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// beq cr6,0x82c0a760
	if (ctx.cr6.eq) goto loc_82C0A760;
	// fcmpu cr6,f30,f1
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// ble cr6,0x82c0a760
	if (!ctx.cr6.gt) goto loc_82C0A760;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
loc_82C0A760:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwz r25,128(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0a794
	if (ctx.cr6.eq) goto loc_82C0A794;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// b 0x82c0a798
	goto loc_82C0A798;
loc_82C0A78C:
	// stb r23,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r23.u8);
	// b 0x82c0a730
	goto loc_82C0A730;
loc_82C0A794:
	// fmr f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f29.f64;
loc_82C0A798:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82C0A7AC:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82c0a85c
	if (!ctx.cr6.gt) goto loc_82C0A85C;
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lfs f12,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0a85c
	if (ctx.cr6.eq) goto loc_82C0A85C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f31,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,76(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A80C;
	sub_82C0D1B0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0a848
	if (ctx.cr6.eq) goto loc_82C0A848;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c0a84c
	goto loc_82C0A84C;
loc_82C0A848:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_82C0A84C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f31,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f27.f64));
	// beq 0x82c0a7ac
	if (ctx.cr0.eq) goto loc_82C0A7AC;
	// b 0x82c0a860
	goto loc_82C0A860;
loc_82C0A85C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82C0A860:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c0a8ac
	if (!ctx.cr0.eq) goto loc_82C0A8AC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bne cr6,0x82c0a890
	if (!ctx.cr6.eq) goto loc_82C0A890;
	// stw r23,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r23.u32);
	// bl 0x82c0d1b0
	ctx.lr = 0x82C0A888;
	sub_82C0D1B0(ctx, base);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
loc_82C0A890:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c0a8ac
	if (!ctx.cr6.lt) goto loc_82C0A8AC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c0a798
	if (!ctx.cr6.eq) goto loc_82C0A798;
loc_82C0A8AC:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0a8c8
	if (ctx.cr6.eq) goto loc_82C0A8C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c0a8cc
	goto loc_82C0A8CC;
loc_82C0A8C8:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_82C0A8CC:
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
loc_82C0A8D4:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0a8f0
	if (ctx.cr6.eq) goto loc_82C0A8F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0A8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c0a8f4
	goto loc_82C0A8F4;
loc_82C0A8F0:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_82C0A8F4:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6b30
	ctx.lr = 0x82C0A90C;
	__restfpr_27(ctx, base);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

