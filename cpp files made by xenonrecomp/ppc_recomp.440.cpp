#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D84A2C"))) PPC_WEAK_FUNC(sub_82D84A2C);
PPC_FUNC_IMPL(__imp__sub_82D84A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84A30"))) PPC_WEAK_FUNC(sub_82D84A30);
PPC_FUNC_IMPL(__imp__sub_82D84A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D84A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84A50;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84a90
	if (!ctx.cr6.eq) goto loc_82D84A90;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84a74
	if (ctx.cr6.eq) goto loc_82D84A74;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D84A74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84A90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D84A98"))) PPC_WEAK_FUNC(sub_82D84A98);
PPC_FUNC_IMPL(__imp__sub_82D84A98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84ABC;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84af4
	if (!ctx.cr6.eq) goto loc_82D84AF4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84adc
	if (ctx.cr6.eq) goto loc_82D84ADC;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84af4
	goto loc_82D84AF4;
loc_82D84ADC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D84B0C"))) PPC_WEAK_FUNC(sub_82D84B0C);
PPC_FUNC_IMPL(__imp__sub_82D84B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84B10"))) PPC_WEAK_FUNC(sub_82D84B10);
PPC_FUNC_IMPL(__imp__sub_82D84B10) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84B34;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84b6c
	if (!ctx.cr6.eq) goto loc_82D84B6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84b54
	if (ctx.cr6.eq) goto loc_82D84B54;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84b6c
	goto loc_82D84B6C;
loc_82D84B54:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84B6C:
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

__attribute__((alias("__imp__sub_82D84B84"))) PPC_WEAK_FUNC(sub_82D84B84);
PPC_FUNC_IMPL(__imp__sub_82D84B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84B88"))) PPC_WEAK_FUNC(sub_82D84B88);
PPC_FUNC_IMPL(__imp__sub_82D84B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84BB4;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84bf0
	if (!ctx.cr6.eq) goto loc_82D84BF0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84bd4
	if (ctx.cr6.eq) goto loc_82D84BD4;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84bf0
	goto loc_82D84BF0;
loc_82D84BD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84BF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D84C0C"))) PPC_WEAK_FUNC(sub_82D84C0C);
PPC_FUNC_IMPL(__imp__sub_82D84C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84C10"))) PPC_WEAK_FUNC(sub_82D84C10);
PPC_FUNC_IMPL(__imp__sub_82D84C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D84C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84C30;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84c70
	if (!ctx.cr6.eq) goto loc_82D84C70;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84c54
	if (ctx.cr6.eq) goto loc_82D84C54;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D84C54:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84C70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D84C78"))) PPC_WEAK_FUNC(sub_82D84C78);
PPC_FUNC_IMPL(__imp__sub_82D84C78) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84C9C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84cd4
	if (!ctx.cr6.eq) goto loc_82D84CD4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84cbc
	if (ctx.cr6.eq) goto loc_82D84CBC;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84cd4
	goto loc_82D84CD4;
loc_82D84CBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84CD4:
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

__attribute__((alias("__imp__sub_82D84CEC"))) PPC_WEAK_FUNC(sub_82D84CEC);
PPC_FUNC_IMPL(__imp__sub_82D84CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84CF0"))) PPC_WEAK_FUNC(sub_82D84CF0);
PPC_FUNC_IMPL(__imp__sub_82D84CF0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84D14;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84d4c
	if (!ctx.cr6.eq) goto loc_82D84D4C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84d34
	if (ctx.cr6.eq) goto loc_82D84D34;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84d4c
	goto loc_82D84D4C;
loc_82D84D34:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84D4C:
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

__attribute__((alias("__imp__sub_82D84D64"))) PPC_WEAK_FUNC(sub_82D84D64);
PPC_FUNC_IMPL(__imp__sub_82D84D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84D68"))) PPC_WEAK_FUNC(sub_82D84D68);
PPC_FUNC_IMPL(__imp__sub_82D84D68) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84D8C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84dc4
	if (!ctx.cr6.eq) goto loc_82D84DC4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84dac
	if (ctx.cr6.eq) goto loc_82D84DAC;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84dc4
	goto loc_82D84DC4;
loc_82D84DAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84DC4:
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

__attribute__((alias("__imp__sub_82D84DDC"))) PPC_WEAK_FUNC(sub_82D84DDC);
PPC_FUNC_IMPL(__imp__sub_82D84DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84DE0"))) PPC_WEAK_FUNC(sub_82D84DE0);
PPC_FUNC_IMPL(__imp__sub_82D84DE0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84E04;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84e3c
	if (!ctx.cr6.eq) goto loc_82D84E3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84e24
	if (ctx.cr6.eq) goto loc_82D84E24;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84e3c
	goto loc_82D84E3C;
loc_82D84E24:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84E3C:
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

__attribute__((alias("__imp__sub_82D84E54"))) PPC_WEAK_FUNC(sub_82D84E54);
PPC_FUNC_IMPL(__imp__sub_82D84E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84E58"))) PPC_WEAK_FUNC(sub_82D84E58);
PPC_FUNC_IMPL(__imp__sub_82D84E58) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84E7C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84eb4
	if (!ctx.cr6.eq) goto loc_82D84EB4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84e9c
	if (ctx.cr6.eq) goto loc_82D84E9C;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84eb4
	goto loc_82D84EB4;
loc_82D84E9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84EB4:
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

__attribute__((alias("__imp__sub_82D84ECC"))) PPC_WEAK_FUNC(sub_82D84ECC);
PPC_FUNC_IMPL(__imp__sub_82D84ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84ED0"))) PPC_WEAK_FUNC(sub_82D84ED0);
PPC_FUNC_IMPL(__imp__sub_82D84ED0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84EF4;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84f2c
	if (!ctx.cr6.eq) goto loc_82D84F2C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84f14
	if (ctx.cr6.eq) goto loc_82D84F14;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84f2c
	goto loc_82D84F2C;
loc_82D84F14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84F2C:
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

__attribute__((alias("__imp__sub_82D84F44"))) PPC_WEAK_FUNC(sub_82D84F44);
PPC_FUNC_IMPL(__imp__sub_82D84F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84F48"))) PPC_WEAK_FUNC(sub_82D84F48);
PPC_FUNC_IMPL(__imp__sub_82D84F48) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84F6C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d84fa4
	if (!ctx.cr6.eq) goto loc_82D84FA4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d84f8c
	if (ctx.cr6.eq) goto loc_82D84F8C;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d84fa4
	goto loc_82D84FA4;
loc_82D84F8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D84FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D84FA4:
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

__attribute__((alias("__imp__sub_82D84FBC"))) PPC_WEAK_FUNC(sub_82D84FBC);
PPC_FUNC_IMPL(__imp__sub_82D84FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D84FC0"))) PPC_WEAK_FUNC(sub_82D84FC0);
PPC_FUNC_IMPL(__imp__sub_82D84FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D84FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D84FE4;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85028
	if (!ctx.cr6.eq) goto loc_82D85028;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85008
	if (ctx.cr6.eq) goto loc_82D85008;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D85008:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85030"))) PPC_WEAK_FUNC(sub_82D85030);
PPC_FUNC_IMPL(__imp__sub_82D85030) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D8504C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85090
	if (!ctx.cr6.eq) goto loc_82D85090;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8507c
	if (ctx.cr6.eq) goto loc_82D8507C;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D8507C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85090:
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

__attribute__((alias("__imp__sub_82D850A4"))) PPC_WEAK_FUNC(sub_82D850A4);
PPC_FUNC_IMPL(__imp__sub_82D850A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D850A8"))) PPC_WEAK_FUNC(sub_82D850A8);
PPC_FUNC_IMPL(__imp__sub_82D850A8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D850CC;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85104
	if (!ctx.cr6.eq) goto loc_82D85104;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d850ec
	if (ctx.cr6.eq) goto loc_82D850EC;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d85104
	goto loc_82D85104;
loc_82D850EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85104:
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

__attribute__((alias("__imp__sub_82D8511C"))) PPC_WEAK_FUNC(sub_82D8511C);
PPC_FUNC_IMPL(__imp__sub_82D8511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85120"))) PPC_WEAK_FUNC(sub_82D85120);
PPC_FUNC_IMPL(__imp__sub_82D85120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D85128;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85140;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85180
	if (!ctx.cr6.eq) goto loc_82D85180;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85164
	if (ctx.cr6.eq) goto loc_82D85164;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D85164:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85180:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85188"))) PPC_WEAK_FUNC(sub_82D85188);
PPC_FUNC_IMPL(__imp__sub_82D85188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D85190;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D851A8;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d851d0
	if (!ctx.cr6.eq) goto loc_82D851D0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D851D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D851D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D851D8"))) PPC_WEAK_FUNC(sub_82D851D8);
PPC_FUNC_IMPL(__imp__sub_82D851D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D851E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D851F8;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85238
	if (!ctx.cr6.eq) goto loc_82D85238;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8521c
	if (ctx.cr6.eq) goto loc_82D8521C;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D8521C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85240"))) PPC_WEAK_FUNC(sub_82D85240);
PPC_FUNC_IMPL(__imp__sub_82D85240) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D8525C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d852a0
	if (!ctx.cr6.eq) goto loc_82D852A0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8528c
	if (ctx.cr6.eq) goto loc_82D8528C;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D8528C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D852A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D852A0:
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

__attribute__((alias("__imp__sub_82D852B4"))) PPC_WEAK_FUNC(sub_82D852B4);
PPC_FUNC_IMPL(__imp__sub_82D852B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D852B8"))) PPC_WEAK_FUNC(sub_82D852B8);
PPC_FUNC_IMPL(__imp__sub_82D852B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D852D4;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85318
	if (!ctx.cr6.eq) goto loc_82D85318;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85304
	if (ctx.cr6.eq) goto loc_82D85304;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D85304:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85318:
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

__attribute__((alias("__imp__sub_82D8532C"))) PPC_WEAK_FUNC(sub_82D8532C);
PPC_FUNC_IMPL(__imp__sub_82D8532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85330"))) PPC_WEAK_FUNC(sub_82D85330);
PPC_FUNC_IMPL(__imp__sub_82D85330) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D8534C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85390
	if (!ctx.cr6.eq) goto loc_82D85390;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8537c
	if (ctx.cr6.eq) goto loc_82D8537C;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D8537C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85390:
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

__attribute__((alias("__imp__sub_82D853A4"))) PPC_WEAK_FUNC(sub_82D853A4);
PPC_FUNC_IMPL(__imp__sub_82D853A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D853A8"))) PPC_WEAK_FUNC(sub_82D853A8);
PPC_FUNC_IMPL(__imp__sub_82D853A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D853C4;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85408
	if (!ctx.cr6.eq) goto loc_82D85408;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d853f4
	if (ctx.cr6.eq) goto loc_82D853F4;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D853F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85408:
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

__attribute__((alias("__imp__sub_82D8541C"))) PPC_WEAK_FUNC(sub_82D8541C);
PPC_FUNC_IMPL(__imp__sub_82D8541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85420"))) PPC_WEAK_FUNC(sub_82D85420);
PPC_FUNC_IMPL(__imp__sub_82D85420) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85444;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8547c
	if (!ctx.cr6.eq) goto loc_82D8547C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85464
	if (ctx.cr6.eq) goto loc_82D85464;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d8547c
	goto loc_82D8547C;
loc_82D85464:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8547C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8547C:
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

__attribute__((alias("__imp__sub_82D85494"))) PPC_WEAK_FUNC(sub_82D85494);
PPC_FUNC_IMPL(__imp__sub_82D85494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85498"))) PPC_WEAK_FUNC(sub_82D85498);
PPC_FUNC_IMPL(__imp__sub_82D85498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D854A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D854C0;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85508
	if (!ctx.cr6.eq) goto loc_82D85508;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d854e4
	if (ctx.cr6.eq) goto loc_82D854E4;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D854E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85510"))) PPC_WEAK_FUNC(sub_82D85510);
PPC_FUNC_IMPL(__imp__sub_82D85510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D85518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85534;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8557c
	if (!ctx.cr6.eq) goto loc_82D8557C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85558
	if (ctx.cr6.eq) goto loc_82D85558;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D85558:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8557C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8557C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85584"))) PPC_WEAK_FUNC(sub_82D85584);
PPC_FUNC_IMPL(__imp__sub_82D85584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85588"))) PPC_WEAK_FUNC(sub_82D85588);
PPC_FUNC_IMPL(__imp__sub_82D85588) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D855A4;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d855e8
	if (!ctx.cr6.eq) goto loc_82D855E8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d855d4
	if (ctx.cr6.eq) goto loc_82D855D4;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D855D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D855E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D855E8:
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

__attribute__((alias("__imp__sub_82D855FC"))) PPC_WEAK_FUNC(sub_82D855FC);
PPC_FUNC_IMPL(__imp__sub_82D855FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85600"))) PPC_WEAK_FUNC(sub_82D85600);
PPC_FUNC_IMPL(__imp__sub_82D85600) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D8561C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85660
	if (!ctx.cr6.eq) goto loc_82D85660;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8564c
	if (ctx.cr6.eq) goto loc_82D8564C;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D8564C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85660:
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

__attribute__((alias("__imp__sub_82D85674"))) PPC_WEAK_FUNC(sub_82D85674);
PPC_FUNC_IMPL(__imp__sub_82D85674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85678"))) PPC_WEAK_FUNC(sub_82D85678);
PPC_FUNC_IMPL(__imp__sub_82D85678) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85694;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d856d8
	if (!ctx.cr6.eq) goto loc_82D856D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d856c4
	if (ctx.cr6.eq) goto loc_82D856C4;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D856C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D856D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D856D8:
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

__attribute__((alias("__imp__sub_82D856EC"))) PPC_WEAK_FUNC(sub_82D856EC);
PPC_FUNC_IMPL(__imp__sub_82D856EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D856F0"))) PPC_WEAK_FUNC(sub_82D856F0);
PPC_FUNC_IMPL(__imp__sub_82D856F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D8570C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85750
	if (!ctx.cr6.eq) goto loc_82D85750;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8573c
	if (ctx.cr6.eq) goto loc_82D8573C;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D8573C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85750:
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

__attribute__((alias("__imp__sub_82D85764"))) PPC_WEAK_FUNC(sub_82D85764);
PPC_FUNC_IMPL(__imp__sub_82D85764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85768"))) PPC_WEAK_FUNC(sub_82D85768);
PPC_FUNC_IMPL(__imp__sub_82D85768) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85784;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d857c8
	if (!ctx.cr6.eq) goto loc_82D857C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d857b4
	if (ctx.cr6.eq) goto loc_82D857B4;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D857B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D857C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D857C8:
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

__attribute__((alias("__imp__sub_82D857DC"))) PPC_WEAK_FUNC(sub_82D857DC);
PPC_FUNC_IMPL(__imp__sub_82D857DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D857E0"))) PPC_WEAK_FUNC(sub_82D857E0);
PPC_FUNC_IMPL(__imp__sub_82D857E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D857E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85804;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85848
	if (!ctx.cr6.eq) goto loc_82D85848;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85828
	if (ctx.cr6.eq) goto loc_82D85828;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D85828:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85848:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85850"))) PPC_WEAK_FUNC(sub_82D85850);
PPC_FUNC_IMPL(__imp__sub_82D85850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D85858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85874;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d858b8
	if (!ctx.cr6.eq) goto loc_82D858B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85898
	if (ctx.cr6.eq) goto loc_82D85898;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D85898:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D858B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D858B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D858C0"))) PPC_WEAK_FUNC(sub_82D858C0);
PPC_FUNC_IMPL(__imp__sub_82D858C0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D858DC;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85920
	if (!ctx.cr6.eq) goto loc_82D85920;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8590c
	if (ctx.cr6.eq) goto loc_82D8590C;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D8590C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85920:
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

__attribute__((alias("__imp__sub_82D85934"))) PPC_WEAK_FUNC(sub_82D85934);
PPC_FUNC_IMPL(__imp__sub_82D85934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85938"))) PPC_WEAK_FUNC(sub_82D85938);
PPC_FUNC_IMPL(__imp__sub_82D85938) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D8595C;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85994
	if (!ctx.cr6.eq) goto loc_82D85994;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8597c
	if (ctx.cr6.eq) goto loc_82D8597C;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d85994
	goto loc_82D85994;
loc_82D8597C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85994:
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

__attribute__((alias("__imp__sub_82D859AC"))) PPC_WEAK_FUNC(sub_82D859AC);
PPC_FUNC_IMPL(__imp__sub_82D859AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D859B0"))) PPC_WEAK_FUNC(sub_82D859B0);
PPC_FUNC_IMPL(__imp__sub_82D859B0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d9ee20
	ctx.lr = 0x82D859D4;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85a0c
	if (!ctx.cr6.eq) goto loc_82D85A0C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d859f4
	if (ctx.cr6.eq) goto loc_82D859F4;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82d85a0c
	goto loc_82D85A0C;
loc_82D859F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85A0C:
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

__attribute__((alias("__imp__sub_82D85A24"))) PPC_WEAK_FUNC(sub_82D85A24);
PPC_FUNC_IMPL(__imp__sub_82D85A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85A28"))) PPC_WEAK_FUNC(sub_82D85A28);
PPC_FUNC_IMPL(__imp__sub_82D85A28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85A44;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85a88
	if (!ctx.cr6.eq) goto loc_82D85A88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85a74
	if (ctx.cr6.eq) goto loc_82D85A74;
	// li r3,54
	ctx.r3.s64 = 54;
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
loc_82D85A74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85A88:
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

__attribute__((alias("__imp__sub_82D85A9C"))) PPC_WEAK_FUNC(sub_82D85A9C);
PPC_FUNC_IMPL(__imp__sub_82D85A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85AA0"))) PPC_WEAK_FUNC(sub_82D85AA0);
PPC_FUNC_IMPL(__imp__sub_82D85AA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9ee20
	ctx.lr = 0x82D85ABC;
	sub_82D9EE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d85adc
	if (!ctx.cr6.eq) goto loc_82D85ADC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D85ADC:
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

__attribute__((alias("__imp__sub_82D85AF0"))) PPC_WEAK_FUNC(sub_82D85AF0);
PPC_FUNC_IMPL(__imp__sub_82D85AF0) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x82d85b20
	if (!ctx.cr6.eq) goto loc_82D85B20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da3e48
	ctx.lr = 0x82D85B1C;
	sub_82DA3E48(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D85B20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
loc_82D85B28:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82d85b7c
	if (ctx.cr6.eq) goto loc_82D85B7C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d85b60
	if (ctx.cr6.eq) goto loc_82D85B60;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// blt cr6,0x82d85b28
	if (ctx.cr6.lt) goto loc_82D85B28;
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
loc_82D85B60:
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
loc_82D85B7C:
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

__attribute__((alias("__imp__sub_82D85B90"))) PPC_WEAK_FUNC(sub_82D85B90);
PPC_FUNC_IMPL(__imp__sub_82D85B90) {
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
	// lis r30,-31909
	ctx.r30.s64 = -2091188224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,19872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85af0
	ctx.lr = 0x82D85BBC;
	sub_82D85AF0(ctx, base);
	// lwz r10,19872(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19872);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D85BF4"))) PPC_WEAK_FUNC(sub_82D85BF4);
PPC_FUNC_IMPL(__imp__sub_82D85BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85BF8"))) PPC_WEAK_FUNC(sub_82D85BF8);
PPC_FUNC_IMPL(__imp__sub_82D85BF8) {
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
	// lis r31,-31909
	ctx.r31.s64 = -2091188224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,19872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85af0
	ctx.lr = 0x82D85C24;
	sub_82D85AF0(ctx, base);
	// lwz r11,19872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// addi r9,r3,7
	ctx.r9.s64 = ctx.r3.s64 + 7;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
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

__attribute__((alias("__imp__sub_82D85C58"))) PPC_WEAK_FUNC(sub_82D85C58);
PPC_FUNC_IMPL(__imp__sub_82D85C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82da3b30
	sub_82DA3B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85C5C"))) PPC_WEAK_FUNC(sub_82D85C5C);
PPC_FUNC_IMPL(__imp__sub_82D85C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85C60"))) PPC_WEAK_FUNC(sub_82D85C60);
PPC_FUNC_IMPL(__imp__sub_82D85C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82da43a0
	sub_82DA43A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85C64"))) PPC_WEAK_FUNC(sub_82D85C64);
PPC_FUNC_IMPL(__imp__sub_82D85C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85C68"))) PPC_WEAK_FUNC(sub_82D85C68);
PPC_FUNC_IMPL(__imp__sub_82D85C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82da3b40
	sub_82DA3B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85C6C"))) PPC_WEAK_FUNC(sub_82D85C6C);
PPC_FUNC_IMPL(__imp__sub_82D85C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85C70"))) PPC_WEAK_FUNC(sub_82D85C70);
PPC_FUNC_IMPL(__imp__sub_82D85C70) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// lis r11,-32040
	ctx.r11.s64 = -2099773440;
	// addi r8,r9,23640
	ctx.r8.s64 = ctx.r9.s64 + 23640;
	// addi r7,r10,23648
	ctx.r7.s64 = ctx.r10.s64 + 23648;
	// addi r6,r11,23656
	ctx.r6.s64 = ctx.r11.s64 + 23656;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// stw r8,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r8.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r7,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r7.u32);
	// stw r6,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r6.u32);
	// stw r9,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r9.u32);
loc_82D85CA4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -132, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d85ca4
	if (!ctx.cr6.eq) goto loc_82D85CA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D85CC0"))) PPC_WEAK_FUNC(sub_82D85CC0);
PPC_FUNC_IMPL(__imp__sub_82D85CC0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// ble cr6,0x82d85d70
	if (!ctx.cr6.gt) goto loc_82D85D70;
loc_82D85CDC:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82d85d70
	if (!ctx.cr6.lt) goto loc_82D85D70;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d85d70
	if (!ctx.cr6.lt) goto loc_82D85D70;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82d85d24
	if (!ctx.cr6.eq) goto loc_82D85D24;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82d85d1c
	if (!ctx.cr6.eq) goto loc_82D85D1C;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82d85d24
	if (ctx.cr6.eq) goto loc_82D85D24;
loc_82D85D1C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82d85d28
	goto loc_82D85D28;
loc_82D85D24:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D85D28:
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82d85d4c
	if (!ctx.cr6.eq) goto loc_82D85D4C;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82d85d4c
	if (!ctx.cr6.eq) goto loc_82D85D4C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// b 0x82d85d68
	goto loc_82D85D68;
loc_82D85D4C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d85d68
	if (!ctx.cr6.eq) goto loc_82D85D68;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82D85D68:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d85cdc
	if (ctx.cr6.lt) goto loc_82D85CDC;
loc_82D85D70:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// subf r3,r6,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r6.s64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D85D84"))) PPC_WEAK_FUNC(sub_82D85D84);
PPC_FUNC_IMPL(__imp__sub_82D85D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85D88"))) PPC_WEAK_FUNC(sub_82D85D88);
PPC_FUNC_IMPL(__imp__sub_82D85D88) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d85d9c
	if (!ctx.cr6.eq) goto loc_82D85D9C;
	// lwz r3,-16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -16);
	// blr 
	return;
loc_82D85D9C:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D85DA4"))) PPC_WEAK_FUNC(sub_82D85DA4);
PPC_FUNC_IMPL(__imp__sub_82D85DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D85DA8"))) PPC_WEAK_FUNC(sub_82D85DA8);
PPC_FUNC_IMPL(__imp__sub_82D85DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82D85DB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// clrlwi r11,r25,27
	ctx.r11.u64 = ctx.r25.u32 & 0x1F;
	// srawi r10,r25,3
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// clrlwi r30,r25,29
	ctx.r30.u64 = ctx.r25.u32 & 0x7;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85e44
	if (ctx.cr6.eq) goto loc_82D85E44;
	// subfic r10,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r11.s64;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x82d85df4
	if (!ctx.cr6.gt) goto loc_82D85DF4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82D85DF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d85e44
	if (ctx.cr6.eq) goto loc_82D85E44;
	// subf r26,r10,r24
	ctx.r26.s64 = ctx.r24.s64 - ctx.r10.s64;
loc_82D85E00:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// slw r9,r27,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x82d85e1c
	if (ctx.cr6.eq) goto loc_82D85E1C;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82d85e20
	goto loc_82D85E20;
loc_82D85E1C:
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82D85E20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82d85e38
	if (ctx.cr6.lt) goto loc_82D85E38;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82D85E38:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d85e00
	if (!ctx.cr6.eq) goto loc_82D85E00;
loc_82D85E44:
	// srawi r11,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 3;
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82d85e7c
	if (ctx.cr6.eq) goto loc_82D85E7C;
	// subfic r10,r23,0
	ctx.xer.ca = ctx.r23.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r23.s64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82cb16f0
	ctx.lr = 0x82D85E70;
	sub_82CB16F0(ctx, base);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
loc_82D85E7C:
	// clrlwi r10,r26,27
	ctx.r10.u64 = ctx.r26.u32 & 0x1F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d85ecc
	if (ctx.cr6.eq) goto loc_82D85ECC;
loc_82D85E88:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// slw r9,r27,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x82d85ea4
	if (ctx.cr6.eq) goto loc_82D85EA4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82d85ea8
	goto loc_82D85EA8;
loc_82D85EA4:
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
loc_82D85EA8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82d85ec0
	if (ctx.cr6.lt) goto loc_82D85EC0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82D85EC0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d85e88
	if (!ctx.cr6.eq) goto loc_82D85E88;
loc_82D85ECC:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82d85f2c
	if (ctx.cr6.eq) goto loc_82D85F2C;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d85ee8
	if (!ctx.cr6.eq) goto loc_82D85EE8;
	// add r11,r25,r24
	ctx.r11.u64 = ctx.r25.u64 + ctx.r24.u64;
	// stw r11,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r11.u32);
loc_82D85EE8:
	// lwz r4,300(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d85f38
	if (ctx.cr6.eq) goto loc_82D85F38;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d85cc0
	ctx.lr = 0x82D85F20;
	sub_82D85CC0(ctx, base);
	// stw r3,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82D85F2C:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d85f38
	if (!ctx.cr6.lt) goto loc_82D85F38;
	// stw r25,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r25.u32);
loc_82D85F38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D85F40"))) PPC_WEAK_FUNC(sub_82D85F40);
PPC_FUNC_IMPL(__imp__sub_82D85F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82D85F48;
	__savegprlr_22(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
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
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r23,r31,316
	ctx.r23.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d85f90
	if (!ctx.cr6.eq) goto loc_82D85F90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da4098
	ctx.lr = 0x82D85F88;
	sub_82DA4098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d860cc
	if (!ctx.cr6.eq) goto loc_82D860CC;
loc_82D85F90:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D85F98;
	sub_82DA41C0(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d85fa8
	if (!ctx.cr6.eq) goto loc_82D85FA8;
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
loc_82D85FA8:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lis r27,-31909
	ctx.r27.s64 = -2091188224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d85fd0
	if (ctx.cr6.eq) goto loc_82D85FD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D85FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82d86074
	goto loc_82D86074;
loc_82D85FD0:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// twllei r11,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r28,r10,r11
	ctx.r28.s32 = ctx.r10.s32 / ctx.r11.s32;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	// bl 0x82d85cc0
	ctx.lr = 0x82D86008;
	sub_82D85CC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d8607c
	if (ctx.cr6.lt) goto loc_82D8607C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d85da8
	ctx.lr = 0x82D86028;
	sub_82D85DA8(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d86060
	if (ctx.cr6.eq) goto loc_82D86060;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-1036
	ctx.r5.s64 = ctx.r11.s64 + -1036;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,622
	ctx.r6.s64 = 622;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D86058;
	sub_82D85F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82d86070
	goto loc_82D86070;
loc_82D86060:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D86070:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82D86074:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d860d8
	if (!ctx.cr6.eq) goto loc_82D860D8;
loc_82D8607C:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D86084;
	sub_82DA4200(ctx, base);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d860cc
	if (ctx.cr6.eq) goto loc_82D860CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r11,-1044
	ctx.r4.s64 = ctx.r11.s64 + -1044;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb61f0
	ctx.lr = 0x82D860AC;
	sub_82CB61F0(ctx, base);
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D860CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D860CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D860D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bl 0x82d85af0
	ctx.lr = 0x82D860EC;
	sub_82D85AF0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d86130
	if (!ctx.cr6.gt) goto loc_82D86130;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82D86130:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// ble cr6,0x82d86168
	if (!ctx.cr6.gt) goto loc_82D86168;
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
loc_82D86168:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8619c
	if (!ctx.cr6.eq) goto loc_82D8619C;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8619c
	if (ctx.cr6.eq) goto loc_82D8619C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8619c
	if (ctx.cr6.eq) goto loc_82D8619C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D8619C;
	sub_82CB16F0(ctx, base);
loc_82D8619C:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D861A4;
	sub_82DA4200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D861B0"))) PPC_WEAK_FUNC(sub_82D861B0);
PPC_FUNC_IMPL(__imp__sub_82D861B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D861B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lis r26,-31909
	ctx.r26.s64 = -2091188224;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82D861D0:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r29,r31,316
	ctx.r29.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d861f4
	if (!ctx.cr6.eq) goto loc_82D861F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4098
	ctx.lr = 0x82D861EC;
	sub_82DA4098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d862a4
	if (!ctx.cr6.eq) goto loc_82D862A4;
loc_82D861F4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D861FC;
	sub_82DA41C0(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8620c
	if (!ctx.cr6.eq) goto loc_82D8620C;
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
loc_82D8620C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8626c
	if (ctx.cr6.eq) goto loc_82D8626C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D86268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d86280
	goto loc_82D86280;
loc_82D8626C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d85da8
	ctx.lr = 0x82D86280;
	sub_82D85DA8(ctx, base);
loc_82D86280:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D86288;
	sub_82DA4200(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d862a4
	if (ctx.cr6.eq) goto loc_82D862A4;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82d861d0
	goto loc_82D861D0;
loc_82D862A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D862AC"))) PPC_WEAK_FUNC(sub_82D862AC);
PPC_FUNC_IMPL(__imp__sub_82D862AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D862B0"))) PPC_WEAK_FUNC(sub_82D862B0);
PPC_FUNC_IMPL(__imp__sub_82D862B0) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82d85f40
	sub_82D85F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D862B8"))) PPC_WEAK_FUNC(sub_82D862B8);
PPC_FUNC_IMPL(__imp__sub_82D862B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82D862C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d8630c
	if (!ctx.cr6.eq) goto loc_82D8630C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d85f40
	ctx.lr = 0x82D86304;
	sub_82D85F40(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82D8630C:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r23,r31,316
	ctx.r23.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d86330
	if (!ctx.cr6.eq) goto loc_82D86330;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da4098
	ctx.lr = 0x82D86328;
	sub_82DA4098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d86500
	if (!ctx.cr6.eq) goto loc_82D86500;
loc_82D86330:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D86338;
	sub_82DA41C0(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8634c
	if (!ctx.cr6.eq) goto loc_82D8634C;
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
loc_82D8634C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82d863b0
	if (ctx.cr6.eq) goto loc_82D863B0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D863A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82d864a4
	goto loc_82D864A4;
loc_82D863B0:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// twllei r11,0
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r27,r9,r11
	ctx.r27.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	// bl 0x82d85da8
	ctx.lr = 0x82D863E8;
	sub_82D85DA8(ctx, base);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r4,r27
	ctx.r5.u64 = ctx.r4.u64 + ctx.r27.u64;
	// bl 0x82d85cc0
	ctx.lr = 0x82D863FC;
	sub_82D85CC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82d86434
	if (ctx.cr6.lt) goto loc_82D86434;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d85da8
	ctx.lr = 0x82D8641C;
	sub_82D85DA8(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// b 0x82d864a4
	goto loc_82D864A4;
loc_82D86434:
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82d85cc0
	ctx.lr = 0x82D86440;
	sub_82D85CC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82d864ac
	if (ctx.cr6.lt) goto loc_82D864AC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d85da8
	ctx.lr = 0x82D86460;
	sub_82D85DA8(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d86474
	if (ctx.cr6.eq) goto loc_82D86474;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82d86484
	goto loc_82D86484;
loc_82D86474:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D86484:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d864a4
	if (!ctx.cr6.eq) goto loc_82D864A4;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82da47c0
	ctx.lr = 0x82D864A4;
	sub_82DA47C0(ctx, base);
loc_82D864A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d8650c
	if (!ctx.cr6.eq) goto loc_82D8650C;
loc_82D864AC:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D864B4;
	sub_82DA4200(ctx, base);
	// lis r31,-31909
	ctx.r31.s64 = -2091188224;
	// lwz r11,19872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d86500
	if (ctx.cr6.eq) goto loc_82D86500;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r11,-1044
	ctx.r4.s64 = ctx.r11.s64 + -1044;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb61f0
	ctx.lr = 0x82D864E0;
	sub_82CB61F0(ctx, base);
	// lwz r11,19872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19872);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D86500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D86500:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82D8650C:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// bl 0x82d85af0
	ctx.lr = 0x82D86520;
	sub_82D85AF0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d86564
	if (!ctx.cr6.gt) goto loc_82D86564;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82D86564:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// ble cr6,0x82d8659c
	if (!ctx.cr6.gt) goto loc_82D8659C;
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
loc_82D8659C:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d865ac
	if (!ctx.cr6.eq) goto loc_82D865AC;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_82D865AC:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D865B4;
	sub_82DA4200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D865C0"))) PPC_WEAK_FUNC(sub_82D865C0);
PPC_FUNC_IMPL(__imp__sub_82D865C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82d85f40
	sub_82D85F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D865E8"))) PPC_WEAK_FUNC(sub_82D865E8);
PPC_FUNC_IMPL(__imp__sub_82D865E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82d85f40
	sub_82D85F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D86610"))) PPC_WEAK_FUNC(sub_82D86610);
PPC_FUNC_IMPL(__imp__sub_82D86610) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82d862b8
	sub_82D862B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D86638"))) PPC_WEAK_FUNC(sub_82D86638);
PPC_FUNC_IMPL(__imp__sub_82D86638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82d861b0
	sub_82D861B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8665C"))) PPC_WEAK_FUNC(sub_82D8665C);
PPC_FUNC_IMPL(__imp__sub_82D8665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86660"))) PPC_WEAK_FUNC(sub_82D86660);
PPC_FUNC_IMPL(__imp__sub_82D86660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8669c
	if (!ctx.cr6.eq) goto loc_82D8669C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D86698;
	sub_82D85F40(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82D8669C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_82D866C0"))) PPC_WEAK_FUNC(sub_82D866C0);
PPC_FUNC_IMPL(__imp__sub_82D866C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d866ec
	if (ctx.cr6.eq) goto loc_82D866EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D866EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d86728
	if (!ctx.cr6.eq) goto loc_82D86728;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d86728
	if (ctx.cr6.eq) goto loc_82D86728;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D86720;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D86728:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8673C"))) PPC_WEAK_FUNC(sub_82D8673C);
PPC_FUNC_IMPL(__imp__sub_82D8673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86740"))) PPC_WEAK_FUNC(sub_82D86740);
PPC_FUNC_IMPL(__imp__sub_82D86740) {
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
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d86790
	if (ctx.cr6.eq) goto loc_82D86790;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d86790
	if (ctx.cr6.eq) goto loc_82D86790;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-1036
	ctx.r5.s64 = ctx.r11.s64 + -1036;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,311
	ctx.r6.s64 = 311;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D86790;
	sub_82D861B0(ctx, base);
loc_82D86790:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
loc_82D867B8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,-132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -132, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d867b8
	if (!ctx.cr6.eq) goto loc_82D867B8;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// lis r11,-32040
	ctx.r11.s64 = -2099773440;
	// addi r9,r9,23640
	ctx.r9.s64 = ctx.r9.s64 + 23640;
	// addi r10,r10,23648
	ctx.r10.s64 = ctx.r10.s64 + 23648;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// beq cr6,0x82d8680c
	if (ctx.cr6.eq) goto loc_82D8680C;
	// bl 0x82da4150
	ctx.lr = 0x82D86808;
	sub_82DA4150(ctx, base);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82D8680C:
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

__attribute__((alias("__imp__sub_82D86824"))) PPC_WEAK_FUNC(sub_82D86824);
PPC_FUNC_IMPL(__imp__sub_82D86824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86828"))) PPC_WEAK_FUNC(sub_82D86828);
PPC_FUNC_IMPL(__imp__sub_82D86828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D86830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d8695c
	if (ctx.cr6.eq) goto loc_82D8695C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82d8695c
	if (ctx.cr6.eq) goto loc_82D8695C;
	// bl 0x82d86740
	ctx.lr = 0x82D86858;
	sub_82D86740(ctx, base);
	// addi r11,r29,255
	ctx.r11.s64 = ctx.r29.s64 + 255;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// twllei r30,0
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// twllei r30,0
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// divw r8,r7,r30
	ctx.r8.s32 = ctx.r7.s32 / ctx.r30.s32;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 & ~ctx.r7.u64;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// twlgei r7,-1
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r6,r11,r30
	ctx.r6.s32 = ctx.r11.s32 / ctx.r30.s32;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// twlgei r11,-1
	// mullw r11,r6,r30
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82d85da8
	ctx.lr = 0x82D868FC;
	sub_82D85DA8(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82D8690C;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_82D86930:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -132, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d86930
	if (!ctx.cr6.eq) goto loc_82D86930;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82da4098
	ctx.lr = 0x82D86954;
	sub_82DA4098(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8695C:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D86968"))) PPC_WEAK_FUNC(sub_82D86968);
PPC_FUNC_IMPL(__imp__sub_82D86968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D86970;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82d86998
	if (!ctx.cr6.eq) goto loc_82D86998;
loc_82D8698C:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D86998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d86740
	ctx.lr = 0x82D869A0;
	sub_82D86740(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-1036
	ctx.r5.s64 = ctx.r11.s64 + -1036;
	// divw r11,r10,r30
	ctx.r11.s32 = ctx.r10.s32 / ctx.r30.s32;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// li r6,254
	ctx.r6.s64 = 254;
	// twllei r30,0
	// twlgei r10,-1
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D86A04;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82d8698c
	if (ctx.cr6.eq) goto loc_82D8698C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d85da8
	ctx.lr = 0x82D86A28;
	sub_82D85DA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_82D86A54:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -132, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d86a54
	if (!ctx.cr6.eq) goto loc_82D86A54;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bl 0x82da4098
	ctx.lr = 0x82D86A84;
	sub_82DA4098(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D86A8C"))) PPC_WEAK_FUNC(sub_82D86A8C);
PPC_FUNC_IMPL(__imp__sub_82D86A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86A90"))) PPC_WEAK_FUNC(sub_82D86A90);
PPC_FUNC_IMPL(__imp__sub_82D86A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
	// b 0x82d866c0
	sub_82D866C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D86AA0"))) PPC_WEAK_FUNC(sub_82D86AA0);
PPC_FUNC_IMPL(__imp__sub_82D86AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-972
	ctx.r11.s64 = ctx.r11.s64 + -972;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86AB0"))) PPC_WEAK_FUNC(sub_82D86AB0);
PPC_FUNC_IMPL(__imp__sub_82D86AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-972
	ctx.r11.s64 = ctx.r11.s64 + -972;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d86ae4
	if (ctx.cr6.eq) goto loc_82D86AE4;
	// bl 0x822990f0
	ctx.lr = 0x82D86AE0;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D86AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86AF8"))) PPC_WEAK_FUNC(sub_82D86AF8);
PPC_FUNC_IMPL(__imp__sub_82D86AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-24432
	ctx.r3.s64 = ctx.r3.s64 + -24432;
	// bl 0x82da6928
	ctx.lr = 0x82D86B18;
	sub_82DA6928(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-25016
	ctx.r3.s64 = ctx.r3.s64 + -25016;
	// bl 0x82da6928
	ctx.lr = 0x82D86B24;
	sub_82DA6928(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-25600
	ctx.r3.s64 = ctx.r3.s64 + -25600;
	// bl 0x82da6928
	ctx.lr = 0x82D86B30;
	sub_82DA6928(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-25624
	ctx.r3.s64 = ctx.r3.s64 + -25624;
	// bl 0x82da4e70
	ctx.lr = 0x82D86B3C;
	sub_82DA4E70(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r9,r10,38728
	ctx.r9.u64 = ctx.r10.u64 | 38728;
	// addi r11,r11,-972
	ctx.r11.s64 = ctx.r11.s64 + -972;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r4,r10,21574
	ctx.r4.s64 = ctx.r10.s64 + 21574;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,-27160
	ctx.r3.s64 = ctx.r3.s64 + -27160;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x82d866c0
	ctx.lr = 0x82D86B68;
	sub_82D866C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86B7C"))) PPC_WEAK_FUNC(sub_82D86B7C);
PPC_FUNC_IMPL(__imp__sub_82D86B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86B80"))) PPC_WEAK_FUNC(sub_82D86B80);
PPC_FUNC_IMPL(__imp__sub_82D86B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r10,r11,-32264
	ctx.r10.s64 = ctx.r11.s64 + -32264;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r9,r11,9552
	ctx.r9.s64 = ctx.r11.s64 + 9552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86BB8"))) PPC_WEAK_FUNC(sub_82D86BB8);
PPC_FUNC_IMPL(__imp__sub_82D86BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r10,r11,-32264
	ctx.r10.s64 = ctx.r11.s64 + -32264;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r9,r11,9552
	ctx.r9.s64 = ctx.r11.s64 + 9552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86BF0"))) PPC_WEAK_FUNC(sub_82D86BF0);
PPC_FUNC_IMPL(__imp__sub_82D86BF0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82d86c04
	if (!ctx.cr6.eq) goto loc_82D86C04;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d86c04
	if (!ctx.cr6.eq) goto loc_82D86C04;
	// blr 
	return;
loc_82D86C04:
	// rlwinm r9,r3,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r11,r4,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x82d86c58
	if (ctx.cr6.lt) goto loc_82D86C58;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,804
	ctx.xer.ca = ctx.r10.u32 <= 804;
	ctx.r11.s64 = 804 - ctx.r10.s64;
	// b 0x82d86c84
	goto loc_82D86C84;
loc_82D86C58:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,2412
	ctx.xer.ca = ctx.r10.u32 <= 2412;
	ctx.r11.s64 = 2412 - ctx.r10.s64;
loc_82D86C84:
	// twllei r8,0
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82d86c94
	if (!ctx.cr6.lt) goto loc_82D86C94;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D86C94:
	// lis r10,652
	ctx.r10.s64 = 42729472;
	// mulli r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 * 180;
	// ori r10,r10,6521
	ctx.r10.u64 = ctx.r10.u64 | 6521;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82d86cc0
	if (!ctx.cr6.lt) goto loc_82D86CC0;
	// addi r3,r3,360
	ctx.r3.s64 = ctx.r3.s64 + 360;
	// blr 
	return;
loc_82D86CC0:
	// cmpwi cr6,r3,360
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 360, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r3,r3,-360
	ctx.r3.s64 = ctx.r3.s64 + -360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86CD0"))) PPC_WEAK_FUNC(sub_82D86CD0);
PPC_FUNC_IMPL(__imp__sub_82D86CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r10,r11,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bne cr6,0x82d86d0c
	if (!ctx.cr6.eq) goto loc_82D86D0C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d86cfc
	if (ctx.cr6.eq) goto loc_82D86CFC;
loc_82D86CF4:
	// li r3,35
	ctx.r3.s64 = 35;
	// blr 
	return;
loc_82D86CFC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82d86cf4
	if (ctx.cr6.eq) goto loc_82D86CF4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d86cf4
	if (ctx.cr6.eq) goto loc_82D86CF4;
loc_82D86D0C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d86d20
	if (!ctx.cr6.eq) goto loc_82D86D20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82D86D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86D28"))) PPC_WEAK_FUNC(sub_82D86D28);
PPC_FUNC_IMPL(__imp__sub_82D86D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86D30"))) PPC_WEAK_FUNC(sub_82D86D30);
PPC_FUNC_IMPL(__imp__sub_82D86D30) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86D38"))) PPC_WEAK_FUNC(sub_82D86D38);
PPC_FUNC_IMPL(__imp__sub_82D86D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86D40"))) PPC_WEAK_FUNC(sub_82D86D40);
PPC_FUNC_IMPL(__imp__sub_82D86D40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86D54"))) PPC_WEAK_FUNC(sub_82D86D54);
PPC_FUNC_IMPL(__imp__sub_82D86D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86D58"))) PPC_WEAK_FUNC(sub_82D86D58);
PPC_FUNC_IMPL(__imp__sub_82D86D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86D84"))) PPC_WEAK_FUNC(sub_82D86D84);
PPC_FUNC_IMPL(__imp__sub_82D86D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86D88"))) PPC_WEAK_FUNC(sub_82D86D88);
PPC_FUNC_IMPL(__imp__sub_82D86D88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86DA4"))) PPC_WEAK_FUNC(sub_82D86DA4);
PPC_FUNC_IMPL(__imp__sub_82D86DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86DA8"))) PPC_WEAK_FUNC(sub_82D86DA8);
PPC_FUNC_IMPL(__imp__sub_82D86DA8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82D86DBC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d86dbc
	if (!ctx.cr6.eq) goto loc_82D86DBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86DD0"))) PPC_WEAK_FUNC(sub_82D86DD0);
PPC_FUNC_IMPL(__imp__sub_82D86DD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86DEC"))) PPC_WEAK_FUNC(sub_82D86DEC);
PPC_FUNC_IMPL(__imp__sub_82D86DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86DF0"))) PPC_WEAK_FUNC(sub_82D86DF0);
PPC_FUNC_IMPL(__imp__sub_82D86DF0) {
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

__attribute__((alias("__imp__sub_82D86E00"))) PPC_WEAK_FUNC(sub_82D86E00);
PPC_FUNC_IMPL(__imp__sub_82D86E00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86E10"))) PPC_WEAK_FUNC(sub_82D86E10);
PPC_FUNC_IMPL(__imp__sub_82D86E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82da8228
	ctx.lr = 0x82D86E28;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-960
	ctx.r11.s64 = ctx.r11.s64 + -960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D86E54"))) PPC_WEAK_FUNC(sub_82D86E54);
PPC_FUNC_IMPL(__imp__sub_82D86E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86E58"))) PPC_WEAK_FUNC(sub_82D86E58);
PPC_FUNC_IMPL(__imp__sub_82D86E58) {
	PPC_FUNC_PROLOGUE();
	// li r3,74
	ctx.r3.s64 = 74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86E60"))) PPC_WEAK_FUNC(sub_82D86E60);
PPC_FUNC_IMPL(__imp__sub_82D86E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86E70"))) PPC_WEAK_FUNC(sub_82D86E70);
PPC_FUNC_IMPL(__imp__sub_82D86E70) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86E78"))) PPC_WEAK_FUNC(sub_82D86E78);
PPC_FUNC_IMPL(__imp__sub_82D86E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d86e90
	if (ctx.cr6.eq) goto loc_82D86E90;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82D86E90:
	// li r3,43
	ctx.r3.s64 = 43;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86E98"))) PPC_WEAK_FUNC(sub_82D86E98);
PPC_FUNC_IMPL(__imp__sub_82D86E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d86ecc
	if (ctx.cr6.eq) goto loc_82D86ECC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x82cb16f0
	ctx.lr = 0x82D86ECC;
	sub_82CB16F0(ctx, base);
loc_82D86ECC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d86ef8
	if (ctx.cr6.eq) goto loc_82D86EF8;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D86EE4;
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
loc_82D86EF8:
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

__attribute__((alias("__imp__sub_82D86F10"))) PPC_WEAK_FUNC(sub_82D86F10);
PPC_FUNC_IMPL(__imp__sub_82D86F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82da8228
	ctx.lr = 0x82D86F28;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r11,-932
	ctx.r11.s64 = ctx.r11.s64 + -932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D86F54"))) PPC_WEAK_FUNC(sub_82D86F54);
PPC_FUNC_IMPL(__imp__sub_82D86F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86F58"))) PPC_WEAK_FUNC(sub_82D86F58);
PPC_FUNC_IMPL(__imp__sub_82D86F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82da8228
	ctx.lr = 0x82D86F70;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-904
	ctx.r10.s64 = ctx.r11.s64 + -904;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D86FB4"))) PPC_WEAK_FUNC(sub_82D86FB4);
PPC_FUNC_IMPL(__imp__sub_82D86FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D86FB8"))) PPC_WEAK_FUNC(sub_82D86FB8);
PPC_FUNC_IMPL(__imp__sub_82D86FB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d86fdc
	if (ctx.cr6.eq) goto loc_82D86FDC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d86fdc
	if (ctx.cr6.eq) goto loc_82D86FDC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d86fdc
	if (ctx.cr6.eq) goto loc_82D86FDC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82d86fec
	if (!ctx.cr6.eq) goto loc_82D86FEC;
loc_82D86FDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82D86FEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r4.u32);
	// stw r5,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r5.u32);
	// stw r6,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r6.u32);
	// stw r7,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D87004"))) PPC_WEAK_FUNC(sub_82D87004);
PPC_FUNC_IMPL(__imp__sub_82D87004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D87008"))) PPC_WEAK_FUNC(sub_82D87008);
PPC_FUNC_IMPL(__imp__sub_82D87008) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d87030
	if (ctx.cr6.eq) goto loc_82D87030;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d87030
	if (ctx.cr6.eq) goto loc_82D87030;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d87030
	if (ctx.cr6.eq) goto loc_82D87030;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d87030
	if (ctx.cr6.eq) goto loc_82D87030;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d87044
	goto loc_82D87044;
loc_82D87030:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D87044:
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// stb r11,9920(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9920, ctx.r11.u8);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// stw r3,9928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9928, ctx.r3.u32);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,9932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9932, ctx.r4.u32);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// stw r5,9936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9936, ctx.r5.u32);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// stw r6,9940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9940, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D87074"))) PPC_WEAK_FUNC(sub_82D87074);
PPC_FUNC_IMPL(__imp__sub_82D87074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D87078"))) PPC_WEAK_FUNC(sub_82D87078);
PPC_FUNC_IMPL(__imp__sub_82D87078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,548(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 548, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D87088"))) PPC_WEAK_FUNC(sub_82D87088);
PPC_FUNC_IMPL(__imp__sub_82D87088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,548(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D87090"))) PPC_WEAK_FUNC(sub_82D87090);
PPC_FUNC_IMPL(__imp__sub_82D87090) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,556(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D87098"))) PPC_WEAK_FUNC(sub_82D87098);
PPC_FUNC_IMPL(__imp__sub_82D87098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D870A0"))) PPC_WEAK_FUNC(sub_82D870A0);
PPC_FUNC_IMPL(__imp__sub_82D870A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d870b0
	if (ctx.cr6.eq) goto loc_82D870B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82D870B0:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82d870ec
	if (ctx.cr6.eq) goto loc_82D870EC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,38216
	ctx.r10.u64 = ctx.r10.u64 | 38216;
loc_82D870D4:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d870f4
	if (ctx.cr6.eq) goto loc_82D870F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82d870d4
	if (!ctx.cr6.eq) goto loc_82D870D4;
loc_82D870EC:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D870F4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d87100
	if (ctx.cr6.eq) goto loc_82D87100;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82D87100:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D87108"))) PPC_WEAK_FUNC(sub_82D87108);
PPC_FUNC_IMPL(__imp__sub_82D87108) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d8711c
	if (!ctx.cr6.eq) goto loc_82D8711C;
loc_82D87114:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82D8711C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8712c
	if (!ctx.cr6.eq) goto loc_82D8712C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8712C:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D8713C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82d8716c
	if (ctx.cr6.eq) goto loc_82D8716C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d8713c
	if (!ctx.cr6.eq) goto loc_82D8713C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D87154:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87114
	if (ctx.cr6.eq) goto loc_82D87114;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82D8716C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d87154
	goto loc_82D87154;
}

__attribute__((alias("__imp__sub_82D87174"))) PPC_WEAK_FUNC(sub_82D87174);
PPC_FUNC_IMPL(__imp__sub_82D87174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D87178"))) PPC_WEAK_FUNC(sub_82D87178);
PPC_FUNC_IMPL(__imp__sub_82D87178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82D87180;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r23,r30,1
	ctx.r23.s64 = ctx.r30.s64 + 65536;
	// addi r23,r23,-26500
	ctx.r23.s64 = ctx.r23.s64 + -26500;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da8be0
	ctx.lr = 0x82D87198;
	sub_82DA8BE0(ctx, base);
	// addis r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 65536;
	// addi r26,r26,-26504
	ctx.r26.s64 = ctx.r26.s64 + -26504;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D871A8;
	sub_82DA41C0(ctx, base);
	// addis r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 65536;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r25,r25,-26840
	ctx.r25.s64 = ctx.r25.s64 + -26840;
	// addi r31,r31,-26828
	ctx.r31.s64 = ctx.r31.s64 + -26828;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r24,r11,38712
	ctx.r24.u64 = ctx.r11.u64 | 38712;
	// beq cr6,0x82d87240
	if (ctx.cr6.eq) goto loc_82D87240;
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// add r27,r30,r24
	ctx.r27.u64 = ctx.r30.u64 + ctx.r24.u64;
	// addi r28,r28,-26508
	ctx.r28.s64 = ctx.r28.s64 + -26508;
loc_82D871DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bl 0x82da4200
	ctx.lr = 0x82D871F4;
	sub_82DA4200(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D871FC;
	sub_82DA41C0(ctx, base);
	// lbz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8721c
	if (!ctx.cr6.eq) goto loc_82D8721C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8721C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8721C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D87224;
	sub_82DA4200(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D8722C;
	sub_82DA41C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82d871dc
	if (!ctx.cr6.eq) goto loc_82D871DC;
loc_82D87240:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stwx r11,r30,r24
	PPC_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
	// bl 0x82da4200
	ctx.lr = 0x82D87250;
	sub_82DA4200(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D87258;
	sub_82DA41C0(ctx, base);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// addi r8,r8,-26820
	ctx.r8.s64 = ctx.r8.s64 + -26820;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82d872b8
	if (ctx.cr6.eq) goto loc_82D872B8;
loc_82D8726C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d872ac
	if (ctx.cr6.eq) goto loc_82D872AC;
	// lbz r9,160(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 160);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d872ac
	if (ctx.cr6.eq) goto loc_82D872AC;
	// lwz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// beq cr6,0x82d872ac
	if (ctx.cr6.eq) goto loc_82D872AC;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
loc_82D872AC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82d8726c
	if (!ctx.cr6.eq) goto loc_82D8726C;
loc_82D872B8:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D872C0;
	sub_82DA4200(ctx, base);
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da8c18
	ctx.lr = 0x82D872CC;
	sub_82DA8C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D872D8"))) PPC_WEAK_FUNC(sub_82D872D8);
PPC_FUNC_IMPL(__imp__sub_82D872D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82D872E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2672(r1)
	ea = -2672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r20,336
	ctx.r29.s64 = ctx.r20.s64 + 336;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r31,336(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 336);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d8737c
	if (ctx.cr6.eq) goto loc_82D8737C;
loc_82D87304:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x82d9ab70
	ctx.lr = 0x82D87318;
	sub_82D9AB70(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87330
	if (ctx.cr6.eq) goto loc_82D87330;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9e180
	ctx.lr = 0x82D87330;
	sub_82D9E180(ctx, base);
loc_82D87330:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9ab70
	ctx.lr = 0x82D8733C;
	sub_82D9AB70(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d87370
	if (!ctx.cr6.eq) goto loc_82D87370;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9cb18
	ctx.lr = 0x82D87370;
	sub_82D9CB18(ctx, base);
loc_82D87370:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d87304
	if (!ctx.cr6.eq) goto loc_82D87304;
loc_82D8737C:
	// lwz r11,1264(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d874cc
	if (ctx.cr6.eq) goto loc_82D874CC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82da9808
	ctx.lr = 0x82D87394;
	sub_82DA9808(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d874cc
	if (ctx.cr6.eq) goto loc_82D874CC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r17,1216(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1216);
	// addi r16,r20,1216
	ctx.r16.s64 = ctx.r20.s64 + 1216;
	// ori r14,r11,39636
	ctx.r14.u64 = ctx.r11.u64 | 39636;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r15,r11,39364
	ctx.r15.u64 = ctx.r11.u64 | 39364;
	// stw r16,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r16.u32);
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
loc_82D873C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// stw r27,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r27.u32);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// stw r27,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r27.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stw r27,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// stw r27,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r27.u32);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// stw r27,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// stw r27,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r27.u32);
	// stw r27,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r27.u32);
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r27,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r27.u32);
	// stw r27,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r27.u32);
	// stw r27,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r27.u32);
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r27,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r27.u32);
	// stw r27,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r27.u32);
	// stw r27,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// stw r27,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r27.u32);
	// stw r27,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r27.u32);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r27,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r27.u32);
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// stw r27,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r27.u32);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r27,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r27.u32);
	// stw r27,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r27.u32);
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
loc_82D8748C:
	// lwz r19,8(r17)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82d874d8
	if (ctx.cr6.eq) goto loc_82D874D8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d9ad08
	ctx.lr = 0x82D874A4;
	sub_82D9AD08(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d874c0
	if (ctx.cr6.eq) goto loc_82D874C0;
	// lwz r11,116(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d874d8
	if (ctx.cr6.eq) goto loc_82D874D8;
loc_82D874C0:
	// lwz r17,0(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x82d8748c
	if (!ctx.cr6.eq) goto loc_82D8748C;
loc_82D874CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2672
	ctx.r1.s64 = ctx.r1.s64 + 2672;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D874D8:
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x82d874cc
	if (ctx.cr6.eq) goto loc_82D874CC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d874cc
	if (ctx.cr6.eq) goto loc_82D874CC;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d874cc
	if (ctx.cr6.eq) goto loc_82D874CC;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d874cc
	if (ctx.cr6.eq) goto loc_82D874CC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d874cc
	if (!ctx.cr6.eq) goto loc_82D874CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// bl 0x82d98488
	ctx.lr = 0x82D87524;
	sub_82D98488(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d874cc
	if (!ctx.cr6.eq) goto loc_82D874CC;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lwz r22,100(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87580
	if (ctx.cr6.eq) goto loc_82D87580;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D87554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// beq cr6,0x82d8756c
	if (ctx.cr6.eq) goto loc_82D8756C;
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
loc_82D8756C:
	// lwz r23,164(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bge cr6,0x82d87594
	if (!ctx.cr6.lt) goto loc_82D87594;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82d8759c
	goto loc_82D8759C;
loc_82D87580:
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87c38
	if (ctx.cr6.eq) goto loc_82D87C38;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82d8759c
	goto loc_82D8759C;
loc_82D87594:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82d878d0
	if (!ctx.cr6.gt) goto loc_82D878D0;
loc_82D8759C:
	// rlwinm r11,r22,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x20;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// beq cr6,0x82d87604
	if (ctx.cr6.eq) goto loc_82D87604;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87c38
	if (ctx.cr6.eq) goto loc_82D87C38;
	// lwz r3,1232(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1232);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82d87694
	goto loc_82D87694;
loc_82D87604:
	// rlwinm r11,r22,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87658
	if (ctx.cr6.eq) goto loc_82D87658;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82d8762c
	if (!ctx.cr6.eq) goto loc_82D8762C;
	// addis r3,r20,1
	ctx.r3.s64 = ctx.r20.s64 + 65536;
	// addi r3,r3,-26444
	ctx.r3.s64 = ctx.r3.s64 + -26444;
	// b 0x82d87648
	goto loc_82D87648;
loc_82D8762C:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82d8763c
	if (!ctx.cr6.eq) goto loc_82D8763C;
	// add r3,r20,r14
	ctx.r3.u64 = ctx.r20.u64 + ctx.r14.u64;
	// b 0x82d87648
	goto loc_82D87648;
loc_82D8763C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82d876b8
	if (!ctx.cr6.eq) goto loc_82D876B8;
	// add r3,r20,r15
	ctx.r3.u64 = ctx.r20.u64 + ctx.r15.u64;
loc_82D87648:
	// bl 0x82da9090
	ctx.lr = 0x82D8764C;
	sub_82DA9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d876b8
	if (!ctx.cr6.eq) goto loc_82D876B8;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82D87658:
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87678
	if (ctx.cr6.eq) goto loc_82D87678;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r10,37328
	ctx.r10.u64 = ctx.r10.u64 | 37328;
	// lwzx r3,r20,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// b 0x82d87694
	goto loc_82D87694;
loc_82D87678:
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87c38
	if (ctx.cr6.eq) goto loc_82D87C38;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r11,r11,37328
	ctx.r11.u64 = ctx.r11.u64 | 37328;
	// lwzx r3,r20,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
loc_82D87694:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D876B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D876B8:
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d876d8
	if (!ctx.cr6.gt) goto loc_82D876D8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb15e8
	ctx.lr = 0x82D876D4;
	sub_82CB15E8(ctx, base);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_82D876D8:
	// cmpw cr6,r21,r23
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82d878d0
	if (!ctx.cr6.lt) goto loc_82D878D0;
	// addi r25,r1,336
	ctx.r25.s64 = ctx.r1.s64 + 336;
loc_82D876E4:
	// lwz r11,1232(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1232);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d87700
	if (!ctx.cr6.eq) goto loc_82D87700;
	// rlwinm r24,r22,27,30,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 27) & 0x2;
	// b 0x82d8771c
	goto loc_82D8771C;
loc_82D87700:
	// rlwinm r11,r22,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87714
	if (ctx.cr6.eq) goto loc_82D87714;
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x82d8771c
	goto loc_82D8771C;
loc_82D87714:
	// not r11,r22
	ctx.r11.u64 = ~ctx.r22.u64;
	// rlwinm r24,r11,28,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
loc_82D8771C:
	// rlwinm r28,r24,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,176
	ctx.r26.s64 = ctx.r1.s64 + 176;
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x82d87738
	if (!ctx.cr6.eq) goto loc_82D87738;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r11,r28,r26
	PPC_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r11.u32);
loc_82D87738:
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82d878bc
	if (ctx.cr6.eq) goto loc_82D878BC;
loc_82D87744:
	// lwzx r30,r28,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82d878bc
	if (ctx.cr6.eq) goto loc_82D878BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9ad08
	ctx.lr = 0x82D87760;
	sub_82D9AD08(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87780
	if (ctx.cr6.eq) goto loc_82D87780;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// b 0x82d878a8
	goto loc_82D878A8;
loc_82D87780:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9b380
	ctx.lr = 0x82D87790;
	sub_82D9B380(ctx, base);
	// lwz r11,1232(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1232);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bne cr6,0x82d877b0
	if (!ctx.cr6.eq) goto loc_82D877B0;
	// rlwinm r11,r10,27,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x2;
	// b 0x82d877cc
	goto loc_82D877CC;
loc_82D877B0:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d877c4
	if (ctx.cr6.eq) goto loc_82D877C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82d877cc
	goto loc_82D877CC;
loc_82D877C4:
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
loc_82D877CC:
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d878a8
	if (!ctx.cr6.eq) goto loc_82D878A8;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x82d87980
	if (!ctx.cr6.eq) goto loc_82D87980;
	// rlwinm r11,r22,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87980
	if (ctx.cr6.eq) goto loc_82D87980;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82d87808
	if (!ctx.cr6.eq) goto loc_82D87808;
	// addis r3,r20,1
	ctx.r3.s64 = ctx.r20.s64 + 65536;
	// addi r3,r3,-26444
	ctx.r3.s64 = ctx.r3.s64 + -26444;
	// b 0x82d87824
	goto loc_82D87824;
loc_82D87808:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82d87818
	if (!ctx.cr6.eq) goto loc_82D87818;
	// add r3,r20,r14
	ctx.r3.u64 = ctx.r20.u64 + ctx.r14.u64;
	// b 0x82d87824
	goto loc_82D87824;
loc_82D87818:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82d87834
	if (!ctx.cr6.eq) goto loc_82D87834;
	// add r3,r20,r15
	ctx.r3.u64 = ctx.r20.u64 + ctx.r15.u64;
loc_82D87824:
	// bl 0x82da9090
	ctx.lr = 0x82D87828;
	sub_82DA9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d87980
	if (ctx.cr6.eq) goto loc_82D87980;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82D87834:
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d878a8
	if (ctx.cr6.eq) goto loc_82D878A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// bl 0x82d98488
	ctx.lr = 0x82D87890;
	sub_82D98488(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d87980
	if (ctx.cr6.eq) goto loc_82D87980;
loc_82D878A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stwx r11,r28,r26
	PPC_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x82d87744
	if (!ctx.cr6.eq) goto loc_82D87744;
loc_82D878BC:
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// cmpw cr6,r21,r23
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r23.s32, ctx.xer);
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// blt cr6,0x82d87c28
	if (ctx.cr6.lt) goto loc_82D87C28;
loc_82D878D0:
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d9b380
	ctx.lr = 0x82D878DC;
	sub_82D9B380(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82d87a1c
	if (ctx.cr6.eq) goto loc_82D87A1C;
	// ble cr6,0x82d87940
	if (!ctx.cr6.gt) goto loc_82D87940;
	// addi r29,r1,336
	ctx.r29.s64 = ctx.r1.s64 + 336;
	// addi r30,r1,528
	ctx.r30.s64 = ctx.r1.s64 + 528;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_82D878F4:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9c8c8
	ctx.lr = 0x82D87904;
	sub_82D9C8C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9cb18
	ctx.lr = 0x82D8792C;
	sub_82D9CB18(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,124
	ctx.r30.s64 = ctx.r30.s64 + 124;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d878f4
	if (!ctx.cr6.eq) goto loc_82D878F4;
loc_82D87940:
	// cmpw cr6,r23,r21
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x82d87b4c
	if (!ctx.cr6.lt) goto loc_82D87B4C;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// subf r11,r23,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r23.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82D8795C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r7,104(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// rlwimi r7,r8,7,23,27
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0x1F0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE0F);
	// stw r7,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r7.u32);
	// bne cr6,0x82d8795c
	if (!ctx.cr6.eq) goto loc_82D8795C;
	// b 0x82d87b4c
	goto loc_82D87B4C;
loc_82D87980:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// bl 0x82d98488
	ctx.lr = 0x82D879D4;
	sub_82D98488(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d879fc
	if (!ctx.cr6.gt) goto loc_82D879FC;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb15e8
	ctx.lr = 0x82D879F8;
	sub_82CB15E8(ctx, base);
	// add r21,r31,r21
	ctx.r21.u64 = ctx.r31.u64 + ctx.r21.u64;
loc_82D879FC:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r21,r23
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82d878d0
	if (!ctx.cr6.lt) goto loc_82D878D0;
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r11,r28,r26
	PPC_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r11.u32);
	// b 0x82d876e4
	goto loc_82D876E4;
loc_82D87A1C:
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d9c8c8
	ctx.lr = 0x82D87A28;
	sub_82D9C8C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d9cb18
	ctx.lr = 0x82D87A50;
	sub_82D9CB18(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87ab4
	if (ctx.cr6.eq) goto loc_82D87AB4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d87ab4
	if (ctx.cr6.eq) goto loc_82D87AB4;
	// lwz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r9,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r9.u32);
	// stw r23,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r23.u32);
	// ble cr6,0x82d87afc
	if (!ctx.cr6.gt) goto loc_82D87AFC;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
loc_82D87A8C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r7.u32);
	// blt cr6,0x82d87a8c
	if (ctx.cr6.lt) goto loc_82D87A8C;
	// b 0x82d87afc
	goto loc_82D87AFC;
loc_82D87AB4:
	// lwz r11,116(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,44(r19)
	PPC_STORE_U32(ctx.r19.u32 + 44, ctx.r23.u32);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,116(r19)
	PPC_STORE_U32(ctx.r19.u32 + 116, ctx.r10.u32);
	// ble cr6,0x82d87afc
	if (!ctx.cr6.gt) goto loc_82D87AFC;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r9,r19,48
	ctx.r9.s64 = ctx.r19.s64 + 48;
loc_82D87AD8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r7.u32);
	// blt cr6,0x82d87ad8
	if (ctx.cr6.lt) goto loc_82D87AD8;
loc_82D87AFC:
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// beq cr6,0x82d87b20
	if (ctx.cr6.eq) goto loc_82D87B20;
	// bl 0x82d9daf0
	ctx.lr = 0x82D87B1C;
	sub_82D9DAF0(ctx, base);
	// b 0x82d87b28
	goto loc_82D87B28;
loc_82D87B20:
	// lwz r4,420(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// bl 0x82d9d898
	ctx.lr = 0x82D87B28;
	sub_82D9D898(ctx, base);
loc_82D87B28:
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d9d5e8
	ctx.lr = 0x82D87B34;
	sub_82D9D5E8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,140(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// bl 0x82d9bcb0
	ctx.lr = 0x82D87B40;
	sub_82D9BCB0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lbz r4,433(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 433);
	// bl 0x82d99238
	ctx.lr = 0x82D87B4C;
	sub_82D99238(ctx, base);
loc_82D87B4C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82d873c4
	if (!ctx.cr6.gt) goto loc_82D873C4;
	// addi r29,r1,336
	ctx.r29.s64 = ctx.r1.s64 + 336;
	// addi r30,r1,552
	ctx.r30.s64 = ctx.r1.s64 + 552;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82D87B64:
	// lwz r3,1264(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1264);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D87B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87bc8
	if (ctx.cr6.eq) goto loc_82D87BC8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9d898
	ctx.lr = 0x82D87BC4;
	sub_82D9D898(ctx, base);
	// b 0x82d87be8
	goto loc_82D87BE8;
loc_82D87BC8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d87c0c
	if (ctx.cr6.eq) goto loc_82D87C0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9daf0
	ctx.lr = 0x82D87BE8;
	sub_82D9DAF0(ctx, base);
loc_82D87BE8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9d5e8
	ctx.lr = 0x82D87BF4;
	sub_82D9D5E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82d9bcb0
	ctx.lr = 0x82D87C00;
	sub_82D9BCB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,9(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// bl 0x82d99238
	ctx.lr = 0x82D87C0C;
	sub_82D99238(ctx, base);
loc_82D87C0C:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwz r17,0(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r30,r30,124
	ctx.r30.s64 = ctx.r30.s64 + 124;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d87b64
	if (!ctx.cr6.eq) goto loc_82D87B64;
	// b 0x82d873c4
	goto loc_82D873C4;
loc_82D87C28:
	// lwz r11,116(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,116(r19)
	PPC_STORE_U32(ctx.r19.u32 + 116, ctx.r11.u32);
	// b 0x82d873c4
	goto loc_82D873C4;
loc_82D87C38:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,2672
	ctx.r1.s64 = ctx.r1.s64 + 2672;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D87C44"))) PPC_WEAK_FUNC(sub_82D87C44);
PPC_FUNC_IMPL(__imp__sub_82D87C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D87C48"))) PPC_WEAK_FUNC(sub_82D87C48);
PPC_FUNC_IMPL(__imp__sub_82D87C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82D87C50;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae8
	ctx.lr = 0x82D87C58;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31901
	ctx.r24.s64 = -2090663936;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwz r3,9876(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9876);
	// bl 0x82da41c0
	ctx.lr = 0x82D87C78;
	sub_82DA41C0(ctx, base);
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// addi r28,r28,-27188
	ctx.r28.s64 = ctx.r28.s64 + -27188;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82d87d1c
	if (ctx.cr6.eq) goto loc_82D87D1C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,38360
	ctx.r26.u64 = ctx.r11.u64 | 38360;
loc_82D87C94:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// bne cr6,0x82d87cb8
	if (!ctx.cr6.eq) goto loc_82D87CB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da9c98
	ctx.lr = 0x82D87CB8;
	sub_82DA9C98(ctx, base);
loc_82D87CB8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d87ccc
	if (ctx.cr6.eq) goto loc_82D87CCC;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82d87d10
	goto loc_82D87D10;
loc_82D87CCC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82D87D10:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82d87c94
	if (!ctx.cr6.eq) goto loc_82D87C94;
loc_82D87D1C:
	// lwz r3,9876(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9876);
	// bl 0x82da4200
	ctx.lr = 0x82D87D24;
	sub_82DA4200(ctx, base);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87e74
	if (ctx.cr6.eq) goto loc_82D87E74;
	// lwz r11,1216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1216);
	// addi r29,r30,1216
	ctx.r29.s64 = ctx.r30.s64 + 1216;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d87e74
	if (ctx.cr6.eq) goto loc_82D87E74;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,8044(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	ctx.f31.f64 = double(temp.f32);
	// lfd f30,-16840(r8)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + -16840);
	// lfs f28,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
loc_82D87D60:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87e68
	if (ctx.cr6.eq) goto loc_82D87E68;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87e68
	if (ctx.cr6.eq) goto loc_82D87E68;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d87e68
	if (ctx.cr6.eq) goto loc_82D87E68;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d87dc4
	if (!ctx.cr6.eq) goto loc_82D87DC4;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82d87dc4
	if (ctx.cr6.lt) goto loc_82D87DC4;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// ble cr6,0x82d87dc0
	if (!ctx.cr6.gt) goto loc_82D87DC0;
	// stfs f29,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// b 0x82d87dc4
	goto loc_82D87DC4;
loc_82D87DC0:
	// stfs f28,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
loc_82D87DC4:
	// lfs f13,156(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d87e68
	if (ctx.cr6.eq) goto loc_82D87E68;
	// lfs f12,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x82d87e58
	if (ctx.cr6.lt) goto loc_82D87E58;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d87e18
	if (!ctx.cr6.lt) goto loc_82D87E18;
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d87e18
	if (!ctx.cr6.gt) goto loc_82D87E18;
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
loc_82D87E18:
	// lfs f13,156(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d87e5c
	if (!ctx.cr6.gt) goto loc_82D87E5C;
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d87e5c
	if (!ctx.cr6.lt) goto loc_82D87E5C;
loc_82D87E58:
	// stfs f0,156(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
loc_82D87E5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d99380
	ctx.lr = 0x82D87E68;
	sub_82D99380(ctx, base);
loc_82D87E68:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d87d60
	if (!ctx.cr6.eq) goto loc_82D87D60;
loc_82D87E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b34
	ctx.lr = 0x82D87E84;
	__restfpr_28(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D87E88"))) PPC_WEAK_FUNC(sub_82D87E88);
PPC_FUNC_IMPL(__imp__sub_82D87E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D87E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// bne cr6,0x82d87ef4
	if (!ctx.cr6.eq) goto loc_82D87EF4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D87EF4:
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x82d87f30
	if (!ctx.cr6.eq) goto loc_82D87F30;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d87f10
	if (!ctx.cr6.eq) goto loc_82D87F10;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82d87f30
	goto loc_82D87F30;
loc_82D87F10:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87f54
	if (ctx.cr6.eq) goto loc_82D87F54;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x82d88064
	if (ctx.cr6.eq) goto loc_82D88064;
loc_82D87F30:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82d87f80
	if (ctx.cr6.eq) goto loc_82D87F80;
	// lwz r10,332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// mulli r11,r4,440
	ctx.r11.s64 = ctx.r4.s64 * 440;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9dc60
	ctx.lr = 0x82D87F50;
	sub_82D9DC60(ctx, base);
	// b 0x82d88024
	goto loc_82D88024;
loc_82D87F54:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9cb18
	ctx.lr = 0x82D87F7C;
	sub_82D9CB18(ctx, base);
	// b 0x82d88064
	goto loc_82D88064;
loc_82D87F80:
	// addi r10,r29,776
	ctx.r10.s64 = ctx.r29.s64 + 776;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d87fa0
	if (!ctx.cr6.eq) goto loc_82D87FA0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d87fa4
	if (ctx.cr6.eq) goto loc_82D87FA4;
loc_82D87FA0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D87FA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d87fb8
	if (!ctx.cr6.eq) goto loc_82D87FB8;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82d88024
	goto loc_82D88024;
loc_82D87FB8:
	// addi r11,r29,1216
	ctx.r11.s64 = ctx.r29.s64 + 1216;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d87fd8
	if (!ctx.cr6.eq) goto loc_82D87FD8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d87fdc
	if (ctx.cr6.eq) goto loc_82D87FDC;
loc_82D87FD8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D87FDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d87ff4
	if (ctx.cr6.eq) goto loc_82D87FF4;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D87FF4:
	// lwz r11,1220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1220);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9cb18
	ctx.lr = 0x82D88024;
	sub_82D9CB18(ctx, base);
loc_82D88024:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r29,336
	ctx.r11.s64 = ctx.r29.s64 + 336;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82D88064:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37328
	ctx.r11.u64 = ctx.r11.u64 | 37328;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D88098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d880d4
	if (ctx.cr6.eq) goto loc_82D880D4;
	// lwz r3,1264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1264);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D880CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d880ec
	if (!ctx.cr6.eq) goto loc_82D880EC;
loc_82D880D4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82D880EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D880F4"))) PPC_WEAK_FUNC(sub_82D880F4);
PPC_FUNC_IMPL(__imp__sub_82D880F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D880F8"))) PPC_WEAK_FUNC(sub_82D880F8);
PPC_FUNC_IMPL(__imp__sub_82D880F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82da8228
	ctx.lr = 0x82D88110;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-876
	ctx.r11.s64 = ctx.r11.s64 + -876;
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

__attribute__((alias("__imp__sub_82D88134"))) PPC_WEAK_FUNC(sub_82D88134);
PPC_FUNC_IMPL(__imp__sub_82D88134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88138"))) PPC_WEAK_FUNC(sub_82D88138);
PPC_FUNC_IMPL(__imp__sub_82D88138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D88140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3637
	ctx.r6.s64 = 3637;
	// li r4,644
	ctx.r4.s64 = 644;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D88170;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d88180
	if (ctx.cr6.eq) goto loc_82D88180;
	// bl 0x82db7cb8
	ctx.lr = 0x82D8817C;
	sub_82DB7CB8(ctx, base);
	// b 0x82d88184
	goto loc_82D88184;
loc_82D88180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D88184:
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r31,-27724
	ctx.r31.s64 = ctx.r31.s64 + -27724;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82d881a4
	if (!ctx.cr6.eq) goto loc_82D881A4;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D881A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82db6848
	ctx.lr = 0x82D881AC;
	sub_82DB6848(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88550
	if (!ctx.cr6.eq) goto loc_82D88550;
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r4,-27720
	ctx.r4.s64 = ctx.r4.s64 + -27720;
	// bl 0x82db6868
	ctx.lr = 0x82D881C4;
	sub_82DB6868(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82de07f8
	ctx.lr = 0x82D881CC;
	sub_82DE07F8(ctx, base);
	// bl 0x82de0730
	ctx.lr = 0x82D881D0;
	sub_82DE0730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6f18
	ctx.lr = 0x82D881E4;
	sub_82DB6F18(ctx, base);
	// bl 0x82de00c8
	ctx.lr = 0x82D881E8;
	sub_82DE00C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6f18
	ctx.lr = 0x82D881FC;
	sub_82DB6F18(ctx, base);
	// bl 0x82ddfbe8
	ctx.lr = 0x82D88200;
	sub_82DDFBE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D88214;
	sub_82DB68C8(ctx, base);
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// addi r29,r29,-27464
	ctx.r29.s64 = ctx.r29.s64 + -27464;
	// bl 0x82dded98
	ctx.lr = 0x82D88220;
	sub_82DDED98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82db68c8
	ctx.lr = 0x82D88234;
	sub_82DB68C8(ctx, base);
	// bl 0x82ddb728
	ctx.lr = 0x82D88238;
	sub_82DDB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D8824C;
	sub_82DB68C8(ctx, base);
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// addi r29,r29,-27460
	ctx.r29.s64 = ctx.r29.s64 + -27460;
	// bl 0x82ddb060
	ctx.lr = 0x82D88258;
	sub_82DDB060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82db68c8
	ctx.lr = 0x82D8826C;
	sub_82DB68C8(ctx, base);
	// bl 0x82dd9c88
	ctx.lr = 0x82D88270;
	sub_82DD9C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D88284;
	sub_82DB68C8(ctx, base);
	// bl 0x82dd9238
	ctx.lr = 0x82D88288;
	sub_82DD9238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D8829C;
	sub_82DB68C8(ctx, base);
	// bl 0x82dd8430
	ctx.lr = 0x82D882A0;
	sub_82DD8430(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D882B4;
	sub_82DB68C8(ctx, base);
	// bl 0x82dd7768
	ctx.lr = 0x82D882B8;
	sub_82DD7768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D882CC;
	sub_82DB68C8(ctx, base);
	// bl 0x82dd49d0
	ctx.lr = 0x82D882D0;
	sub_82DD49D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D882E4;
	sub_82DB68C8(ctx, base);
	// bl 0x82dd1260
	ctx.lr = 0x82D882E8;
	sub_82DD1260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D882FC;
	sub_82DB68C8(ctx, base);
	// bl 0x82dccde8
	ctx.lr = 0x82D88300;
	sub_82DCCDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D88314;
	sub_82DB68C8(ctx, base);
	// bl 0x82dc5200
	ctx.lr = 0x82D88318;
	sub_82DC5200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D8832C;
	sub_82DB68C8(ctx, base);
	// bl 0x82dc01b8
	ctx.lr = 0x82D88330;
	sub_82DC01B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D88344;
	sub_82DB68C8(ctx, base);
	// bl 0x82dbe168
	ctx.lr = 0x82D88348;
	sub_82DBE168(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D8835C;
	sub_82DB68C8(ctx, base);
	// bl 0x82dbc788
	ctx.lr = 0x82D88360;
	sub_82DBC788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D88374;
	sub_82DB68C8(ctx, base);
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// addi r29,r29,-27456
	ctx.r29.s64 = ctx.r29.s64 + -27456;
	// bl 0x82dbb520
	ctx.lr = 0x82D88380;
	sub_82DBB520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82db68c8
	ctx.lr = 0x82D88394;
	sub_82DB68C8(ctx, base);
	// bl 0x82db9a60
	ctx.lr = 0x82D88398;
	sub_82DB9A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D883AC;
	sub_82DB68C8(ctx, base);
	// bl 0x82db9458
	ctx.lr = 0x82D883B0;
	sub_82DB9458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D883C4;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db6720
	ctx.lr = 0x82D883C8;
	sub_82DB6720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D883DC;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db5978
	ctx.lr = 0x82D883E0;
	sub_82DB5978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D883F4;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db50d0
	ctx.lr = 0x82D883F8;
	sub_82DB50D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D8840C;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db4908
	ctx.lr = 0x82D88410;
	sub_82DB4908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D88424;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db39c0
	ctx.lr = 0x82D88428;
	sub_82DB39C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D8843C;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db2b68
	ctx.lr = 0x82D88440;
	sub_82DB2B68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D88454;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db1e78
	ctx.lr = 0x82D88458;
	sub_82DB1E78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D8846C;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db1aa8
	ctx.lr = 0x82D88470;
	sub_82DB1AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D88484;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db1510
	ctx.lr = 0x82D88488;
	sub_82DB1510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D8849C;
	sub_82DB6BD0(ctx, base);
	// bl 0x82db0980
	ctx.lr = 0x82D884A0;
	sub_82DB0980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D884B4;
	sub_82DB6BD0(ctx, base);
	// bl 0x82dae190
	ctx.lr = 0x82D884B8;
	sub_82DAE190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D884CC;
	sub_82DB6BD0(ctx, base);
	// bl 0x82dad250
	ctx.lr = 0x82D884D0;
	sub_82DAD250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D884E4;
	sub_82DB6BD0(ctx, base);
	// bl 0x82dacc30
	ctx.lr = 0x82D884E8;
	sub_82DACC30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D884FC;
	sub_82DB6BD0(ctx, base);
	// bl 0x82dac320
	ctx.lr = 0x82D88500;
	sub_82DAC320(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D88514;
	sub_82DB6BD0(ctx, base);
	// bl 0x82dabba8
	ctx.lr = 0x82D88518;
	sub_82DABBA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db6bd0
	ctx.lr = 0x82D8852C;
	sub_82DB6BD0(ctx, base);
	// bl 0x82daa118
	ctx.lr = 0x82D88530;
	sub_82DAA118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db68c8
	ctx.lr = 0x82D88544;
	sub_82DB68C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
loc_82D88550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88558"))) PPC_WEAK_FUNC(sub_82D88558);
PPC_FUNC_IMPL(__imp__sub_82D88558) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-27100
	ctx.r31.s64 = ctx.r31.s64 + -27100;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8866c
	if (ctx.cr6.eq) goto loc_82D8866C;
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,-26872
	ctx.r8.s64 = ctx.r8.s64 + -26872;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D8858C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82d8858c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D8858C;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,1256(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1256);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// beq cr6,0x82d885bc
	if (ctx.cr6.eq) goto loc_82D885BC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82d885c0
	if (!ctx.cr6.eq) goto loc_82D885C0;
loc_82D885BC:
	// li r6,6
	ctx.r6.s64 = 6;
loc_82D885C0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82d8866c
	if (!ctx.cr6.gt) goto loc_82D8866C;
	// addis r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 65536;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r5,r5,-27096
	ctx.r5.s64 = ctx.r5.s64 + -27096;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D885D8:
	// li r7,361
	ctx.r7.s64 = 361;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82D885E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82d88634
	if (ctx.cr6.eq) goto loc_82D88634;
	// lbz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d88634
	if (ctx.cr6.eq) goto loc_82D88634;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82d88610
	if (!ctx.cr6.eq) goto loc_82D88610;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82d88634
	if (ctx.cr6.eq) goto loc_82D88634;
loc_82D88610:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82d88634
	if (!ctx.cr6.lt) goto loc_82D88634;
	// addi r30,r1,-32
	ctx.r30.s64 = ctx.r1.s64 + -32;
	// lbzx r30,r9,r30
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d88634
	if (!ctx.cr6.eq) goto loc_82D88634;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82D88634:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82d885e4
	if (ctx.cr6.lt) goto loc_82D885E4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8865c
	if (ctx.cr6.eq) goto loc_82D8865C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// stbx r3,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u8);
loc_82D8865C:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d885d8
	if (!ctx.cr6.eq) goto loc_82D885D8;
loc_82D8866C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8867C"))) PPC_WEAK_FUNC(sub_82D8867C);
PPC_FUNC_IMPL(__imp__sub_82D8867C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88680"))) PPC_WEAK_FUNC(sub_82D88680);
PPC_FUNC_IMPL(__imp__sub_82D88680) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82d8869c
	if (!ctx.cr6.eq) goto loc_82D8869C;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-26444
	ctx.r3.s64 = ctx.r3.s64 + -26444;
	// b 0x82da8ff8
	sub_82DA8FF8(ctx, base);
	return;
loc_82D8869C:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82d886b0
	if (!ctx.cr6.eq) goto loc_82D886B0;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-25900
	ctx.r3.s64 = ctx.r3.s64 + -25900;
	// b 0x82da8ff8
	sub_82DA8FF8(ctx, base);
	return;
loc_82D886B0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82d886c4
	if (!ctx.cr6.eq) goto loc_82D886C4;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-26172
	ctx.r3.s64 = ctx.r3.s64 + -26172;
	// b 0x82da8ff8
	sub_82DA8FF8(ctx, base);
	return;
loc_82D886C4:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D886CC"))) PPC_WEAK_FUNC(sub_82D886CC);
PPC_FUNC_IMPL(__imp__sub_82D886CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D886D0"))) PPC_WEAK_FUNC(sub_82D886D0);
PPC_FUNC_IMPL(__imp__sub_82D886D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D886D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d886fc
	if (ctx.cr6.eq) goto loc_82D886FC;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D886FC:
	// lwz r10,1232(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1232);
	// addi r27,r29,1232
	ctx.r27.s64 = ctx.r29.s64 + 1232;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88748
	if (ctx.cr6.eq) goto loc_82D88748;
	// lwz r11,1236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1236);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d88724
	if (!ctx.cr6.eq) goto loc_82D88724;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D88724:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,4267
	ctx.r6.s64 = 4267;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D88748;
	sub_82D861B0(ctx, base);
loc_82D88748:
	// lbz r11,13(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d88764
	if (!ctx.cr6.eq) goto loc_82D88764;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d88138
	ctx.lr = 0x82D8875C;
	sub_82D88138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d887ec
	if (!ctx.cr6.eq) goto loc_82D887EC;
loc_82D88764:
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r30,r30,-27724
	ctx.r30.s64 = ctx.r30.s64 + -27724;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82db7360
	ctx.lr = 0x82D88778;
	sub_82DB7360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d887ec
	if (!ctx.cr6.eq) goto loc_82D887EC;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d88794
	if (!ctx.cr6.eq) goto loc_82D88794;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82de0840
	ctx.lr = 0x82D88794;
	sub_82DE0840(ctx, base);
loc_82D88794:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d887e8
	if (!ctx.cr6.gt) goto loc_82D887E8;
loc_82D887A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82db74b8
	ctx.lr = 0x82D887BC;
	sub_82DB74B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d887d8
	if (!ctx.cr6.eq) goto loc_82D887D8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82d887f4
	if (ctx.cr6.eq) goto loc_82D887F4;
loc_82D887D8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d887a8
	if (ctx.cr6.lt) goto loc_82D887A8;
loc_82D887E8:
	// li r3,66
	ctx.r3.s64 = 66;
loc_82D887EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D887F4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82db7698
	ctx.lr = 0x82D88800;
	sub_82DB7698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d887ec
	if (!ctx.cr6.eq) goto loc_82D887EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stw r31,1248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1248, ctx.r31.u32);
	// stw r11,1236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1236, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88820"))) PPC_WEAK_FUNC(sub_82D88820);
PPC_FUNC_IMPL(__imp__sub_82D88820) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d88830
	if (!ctx.cr6.eq) goto loc_82D88830;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D88830:
	// lwz r11,1236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1236);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88840"))) PPC_WEAK_FUNC(sub_82D88840);
PPC_FUNC_IMPL(__imp__sub_82D88840) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d88854
	if (ctx.cr6.eq) goto loc_82D88854;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82D88854:
	// cmpwi cr6,r4,8000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8000, ctx.xer);
	// bge cr6,0x82d88864
	if (!ctx.cr6.lt) goto loc_82D88864;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D88864:
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bgt cr6,0x82d888b8
	if (ctx.cr6.gt) goto loc_82D888B8;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// bgt cr6,0x82d888b8
	if (ctx.cr6.gt) goto loc_82D888B8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r4,1244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1244, ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r5.u32);
	// ori r11,r11,38372
	ctx.r11.u64 = ctx.r11.u64 | 38372;
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
	// beq cr6,0x82d888a4
	if (ctx.cr6.eq) goto loc_82D888A4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,1256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1256, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,38436
	ctx.r11.u64 = ctx.r11.u64 | 38436;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82D888A4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82d888b0
	if (!ctx.cr6.gt) goto loc_82D888B0;
	// stw r7,1252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1252, ctx.r7.u32);
loc_82D888B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D888B8:
	// li r3,75
	ctx.r3.s64 = 75;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D888C0"))) PPC_WEAK_FUNC(sub_82D888C0);
PPC_FUNC_IMPL(__imp__sub_82D888C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D888C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d888e8
	if (!ctx.cr6.eq) goto loc_82D888E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D888E8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d88918
	if (!ctx.cr6.eq) goto loc_82D88918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// bl 0x82d886d0
	ctx.lr = 0x82D88900;
	sub_82D886D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d88918
	if (ctx.cr6.eq) goto loc_82D88918;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D88918:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x82da4398
	ctx.lr = 0x82D88928;
	sub_82DA4398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88994
	if (!ctx.cr6.eq) goto loc_82D88994;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d88944
	if (ctx.cr6.eq) goto loc_82D88944;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// stb r30,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r30.u8);
loc_82D88944:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8898c
	if (ctx.cr6.eq) goto loc_82D8898C;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d88974
	if (!ctx.cr6.eq) goto loc_82D88974;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D88974:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D88984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D8898C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_82D88994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8899C"))) PPC_WEAK_FUNC(sub_82D8899C);
PPC_FUNC_IMPL(__imp__sub_82D8899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D889A0"))) PPC_WEAK_FUNC(sub_82D889A0);
PPC_FUNC_IMPL(__imp__sub_82D889A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D889A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82d888c0
	ctx.lr = 0x82D889C8;
	sub_82D888C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88ab4
	if (!ctx.cr6.eq) goto loc_82D88AB4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82d88ab0
	if (ctx.cr6.lt) goto loc_82D88AB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d88ab0
	if (!ctx.cr6.lt) goto loc_82D88AB0;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d88a04
	if (!ctx.cr6.eq) goto loc_82D88A04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// bl 0x82d886d0
	ctx.lr = 0x82D889FC;
	sub_82D886D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88ab4
	if (!ctx.cr6.eq) goto loc_82D88AB4;
loc_82D88A04:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88a58
	if (ctx.cr6.eq) goto loc_82D88A58;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d88a34
	if (!ctx.cr6.eq) goto loc_82D88A34;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D88A34:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D88A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D88A58:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88aa4
	if (ctx.cr6.eq) goto loc_82D88AA4;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d88a84
	if (!ctx.cr6.eq) goto loc_82D88A84;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D88A84:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D88A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D88AA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D88AB0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D88AB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88ABC"))) PPC_WEAK_FUNC(sub_82D88ABC);
PPC_FUNC_IMPL(__imp__sub_82D88ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88AC0"))) PPC_WEAK_FUNC(sub_82D88AC0);
PPC_FUNC_IMPL(__imp__sub_82D88AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D88AC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d88afc
	if (ctx.cr6.eq) goto loc_82D88AFC;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D88AFC:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d888c0
	ctx.lr = 0x82D88B08;
	sub_82D888C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88cec
	if (!ctx.cr6.eq) goto loc_82D88CEC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d88ce8
	if (ctx.cr6.lt) goto loc_82D88CE8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d88ce8
	if (!ctx.cr6.lt) goto loc_82D88CE8;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d88b44
	if (!ctx.cr6.eq) goto loc_82D88B44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// bl 0x82d886d0
	ctx.lr = 0x82D88B3C;
	sub_82D886D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88cec
	if (!ctx.cr6.eq) goto loc_82D88CEC;
loc_82D88B44:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88bd0
	if (ctx.cr6.eq) goto loc_82D88BD0;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d88b98
	if (!ctx.cr6.eq) goto loc_82D88B98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D88B98:
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D88BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88cec
	if (!ctx.cr6.eq) goto loc_82D88CEC;
loc_82D88BD0:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88c30
	if (ctx.cr6.eq) goto loc_82D88C30;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d88c00
	if (!ctx.cr6.eq) goto loc_82D88C00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D88C00:
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D88C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d88c78
	if (ctx.cr6.eq) goto loc_82D88C78;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D88C30:
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88c78
	if (ctx.cr6.eq) goto loc_82D88C78;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d88c5c
	if (!ctx.cr6.eq) goto loc_82D88C5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D88C5C:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D88C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88cec
	if (!ctx.cr6.eq) goto loc_82D88CEC;
loc_82D88C78:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,1232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,1232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// beq cr6,0x82d88cac
	if (ctx.cr6.eq) goto loc_82D88CAC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D88CAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d88cbc
	if (ctx.cr6.eq) goto loc_82D88CBC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82D88CBC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d88ccc
	if (ctx.cr6.eq) goto loc_82D88CCC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82D88CCC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82d88cdc
	if (ctx.cr6.eq) goto loc_82D88CDC;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82D88CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D88CE8:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D88CEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88CF4"))) PPC_WEAK_FUNC(sub_82D88CF4);
PPC_FUNC_IMPL(__imp__sub_82D88CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88CF8"))) PPC_WEAK_FUNC(sub_82D88CF8);
PPC_FUNC_IMPL(__imp__sub_82D88CF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d88d08
	if (!ctx.cr6.eq) goto loc_82D88D08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D88D08:
	// lwz r11,1260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88D18"))) PPC_WEAK_FUNC(sub_82D88D18);
PPC_FUNC_IMPL(__imp__sub_82D88D18) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88d34
	if (ctx.cr6.eq) goto loc_82D88D34;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82D88D34:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82d88d90
	if (ctx.cr6.lt) goto loc_82D88D90;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82d88d90
	if (ctx.cr6.lt) goto loc_82D88D90;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82d88d90
	if (ctx.cr6.lt) goto loc_82D88D90;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82d88d90
	if (ctx.cr6.lt) goto loc_82D88D90;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r31,r3,38236
	ctx.r31.u64 = ctx.r3.u64 | 38236;
	// ori r10,r10,38224
	ctx.r10.u64 = ctx.r10.u64 | 38224;
	// ori r9,r9,38228
	ctx.r9.u64 = ctx.r9.u64 | 38228;
	// ori r8,r8,38232
	ctx.r8.u64 = ctx.r8.u64 | 38232;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82D88D90:
	// li r3,37
	ctx.r3.s64 = 37;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88D9C"))) PPC_WEAK_FUNC(sub_82D88D9C);
PPC_FUNC_IMPL(__imp__sub_82D88D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88DA0"))) PPC_WEAK_FUNC(sub_82D88DA0);
PPC_FUNC_IMPL(__imp__sub_82D88DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D88DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88e2c
	if (ctx.cr6.eq) goto loc_82D88E2C;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d88e1c
	if (ctx.cr6.eq) goto loc_82D88E1C;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d88dfc
	if (ctx.cr6.eq) goto loc_82D88DFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da97e8
	ctx.lr = 0x82D88DF4;
	sub_82DA97E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88e80
	if (!ctx.cr6.eq) goto loc_82D88E80;
loc_82D88DFC:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d88e1c
	if (ctx.cr6.eq) goto loc_82D88E1C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82da97e8
	ctx.lr = 0x82D88E14;
	sub_82DA97E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88e80
	if (!ctx.cr6.eq) goto loc_82D88E80;
loc_82D88E1C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82d88e58
	goto loc_82D88E58;
loc_82D88E2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// bl 0x82d886d0
	ctx.lr = 0x82D88E38;
	sub_82D886D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d88e80
	if (!ctx.cr6.eq) goto loc_82D88E80;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
loc_82D88E58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d88e64
	if (ctx.cr6.eq) goto loc_82D88E64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82D88E64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d88e70
	if (ctx.cr6.eq) goto loc_82D88E70;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82D88E70:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d88e7c
	if (ctx.cr6.eq) goto loc_82D88E7C;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D88E7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D88E80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E88"))) PPC_WEAK_FUNC(sub_82D88E88);
PPC_FUNC_IMPL(__imp__sub_82D88E88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82d88e9c
	if (!ctx.cr6.lt) goto loc_82D88E9C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D88E9C:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88eb0
	if (ctx.cr6.eq) goto loc_82D88EB0;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82D88EB0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,38220
	ctx.r10.u64 = ctx.r10.u64 | 38220;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88EC4"))) PPC_WEAK_FUNC(sub_82D88EC4);
PPC_FUNC_IMPL(__imp__sub_82D88EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88EC8"))) PPC_WEAK_FUNC(sub_82D88EC8);
PPC_FUNC_IMPL(__imp__sub_82D88EC8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d88edc
	if (!ctx.cr6.eq) goto loc_82D88EDC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D88EDC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,38220
	ctx.r10.u64 = ctx.r10.u64 | 38220;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88EF4"))) PPC_WEAK_FUNC(sub_82D88EF4);
PPC_FUNC_IMPL(__imp__sub_82D88EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88EF8"))) PPC_WEAK_FUNC(sub_82D88EF8);
PPC_FUNC_IMPL(__imp__sub_82D88EF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d88f0c
	if (ctx.cr6.eq) goto loc_82D88F0C;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82D88F0C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82d88f30
	if (ctx.cr6.lt) goto loc_82D88F30;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x82d88f30
	if (ctx.cr6.lt) goto loc_82D88F30;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// stw r4,1272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1272, ctx.r4.u32);
	// stw r11,1276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1276, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D88F30:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88F38"))) PPC_WEAK_FUNC(sub_82D88F38);
PPC_FUNC_IMPL(__imp__sub_82D88F38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d88f48
	if (ctx.cr6.eq) goto loc_82D88F48;
	// lwz r11,1272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82D88F48:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d88f64
	if (ctx.cr6.eq) goto loc_82D88F64;
	// lwz r10,1272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// lwz r11,1276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1276);
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82D88F64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88F6C"))) PPC_WEAK_FUNC(sub_82D88F6C);
PPC_FUNC_IMPL(__imp__sub_82D88F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88F70"))) PPC_WEAK_FUNC(sub_82D88F70);
PPC_FUNC_IMPL(__imp__sub_82D88F70) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d88fa4
	if (ctx.cr6.eq) goto loc_82D88FA4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d88fa4
	if (ctx.cr6.eq) goto loc_82D88FA4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d88fa4
	if (ctx.cr6.eq) goto loc_82D88FA4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d88fa4
	if (ctx.cr6.eq) goto loc_82D88FA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82d88fb8
	goto loc_82D88FB8;
loc_82D88FA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82D88FB8:
	// lis r5,-31896
	ctx.r5.s64 = -2090336256;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r6,9920(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9920, ctx.r6.u8);
	// lis r6,-31896
	ctx.r6.s64 = -2090336256;
	// stw r11,9928(r6)
	PPC_STORE_U32(ctx.r6.u32 + 9928, ctx.r11.u32);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// stw r10,9932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9932, ctx.r10.u32);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// stw r9,9936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9936, ctx.r9.u32);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// stw r7,9940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9940, ctx.r7.u32);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r8,19924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19924, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88FF8"))) PPC_WEAK_FUNC(sub_82D88FF8);
PPC_FUNC_IMPL(__imp__sub_82D88FF8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r31,r3,38404
	ctx.r31.u64 = ctx.r3.u64 | 38404;
	// ori r10,r10,38392
	ctx.r10.u64 = ctx.r10.u64 | 38392;
	// ori r9,r9,38396
	ctx.r9.u64 = ctx.r9.u64 | 38396;
	// ori r8,r8,38400
	ctx.r8.u64 = ctx.r8.u64 | 38400;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8903C"))) PPC_WEAK_FUNC(sub_82D8903C);
PPC_FUNC_IMPL(__imp__sub_82D8903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89040"))) PPC_WEAK_FUNC(sub_82D89040);
PPC_FUNC_IMPL(__imp__sub_82D89040) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d892f0
	if (ctx.cr6.eq) goto loc_82D892F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x82d892f0
	if (!ctx.cr6.gt) goto loc_82D892F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bne cr6,0x82d8912c
	if (!ctx.cr6.eq) goto loc_82D8912C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8913c
	if (!ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82d8913c
	if (ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d8913c
	if (ctx.cr6.eq) goto loc_82D8913C;
loc_82D890EC:
	// lfs f12,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bne cr6,0x82d89144
	if (!ctx.cr6.eq) goto loc_82D89144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8913c
	if (!ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82d8913c
	if (ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d89154
	if (!ctx.cr6.eq) goto loc_82D89154;
	// li r3,35
	ctx.r3.s64 = 35;
	// b 0x82d892f4
	goto loc_82D892F4;
loc_82D8912C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d890ec
	if (!ctx.cr6.eq) goto loc_82D890EC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d890ec
	if (ctx.cr6.eq) goto loc_82D890EC;
loc_82D8913C:
	// li r3,35
	ctx.r3.s64 = 35;
	// b 0x82d892f4
	goto loc_82D892F4;
loc_82D89144:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d89154
	if (!ctx.cr6.eq) goto loc_82D89154;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8913c
	if (!ctx.cr6.eq) goto loc_82D8913C;
loc_82D89154:
	// lfs f11,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bne cr6,0x82d89194
	if (!ctx.cr6.eq) goto loc_82D89194;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8913c
	if (!ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82d8913c
	if (ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d891a4
	if (!ctx.cr6.eq) goto loc_82D891A4;
	// li r3,35
	ctx.r3.s64 = 35;
	// b 0x82d892f4
	goto loc_82D892F4;
loc_82D89194:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d891a4
	if (!ctx.cr6.eq) goto loc_82D891A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8913c
	if (!ctx.cr6.eq) goto loc_82D8913C;
loc_82D891A4:
	// lfs f9,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bne cr6,0x82d891e4
	if (!ctx.cr6.eq) goto loc_82D891E4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8913c
	if (!ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82d8913c
	if (ctx.cr6.eq) goto loc_82D8913C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d891f4
	if (!ctx.cr6.eq) goto loc_82D891F4;
	// li r3,35
	ctx.r3.s64 = 35;
	// b 0x82d892f4
	goto loc_82D892F4;
loc_82D891E4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d891f4
	if (!ctx.cr6.eq) goto loc_82D891F4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8913c
	if (!ctx.cr6.eq) goto loc_82D8913C;
loc_82D891F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82d89248
	if (!ctx.cr6.lt) goto loc_82D89248;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38128
	ctx.r11.u64 = ctx.r11.u64 | 38128;
	// lfsx f0,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// b 0x82d89268
	goto loc_82D89268;
loc_82D89248:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6404);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
loc_82D89268:
	// fcmpu cr6,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82d892f0
	if (ctx.cr6.gt) goto loc_82D892F0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d892f0
	if (ctx.cr6.lt) goto loc_82D892F0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d892b0
	if (ctx.cr6.eq) goto loc_82D892B0;
	// bl 0x82da4420
	ctx.lr = 0x82D892A8;
	sub_82DA4420(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bge cr6,0x82d892f0
	if (!ctx.cr6.lt) goto loc_82D892F0;
loc_82D892B0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d892c4
	if (ctx.cr6.eq) goto loc_82D892C4;
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// ble cr6,0x82d892d4
	if (!ctx.cr6.gt) goto loc_82D892D4;
loc_82D892C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38140
	ctx.r11.u64 = ctx.r11.u64 | 38140;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82D892D4:
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-27452
	ctx.r3.s64 = ctx.r3.s64 + -27452;
	// bl 0x82cb1160
	ctx.lr = 0x82D892E8;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d892f4
	goto loc_82D892F4;
loc_82D892F0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D892F4:
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

__attribute__((alias("__imp__sub_82D8930C"))) PPC_WEAK_FUNC(sub_82D8930C);
PPC_FUNC_IMPL(__imp__sub_82D8930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89310"))) PPC_WEAK_FUNC(sub_82D89310);
PPC_FUNC_IMPL(__imp__sub_82D89310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D89318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d89370
	if (ctx.cr6.eq) goto loc_82D89370;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82d89370
	if (ctx.cr6.gt) goto loc_82D89370;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d89370
	if (ctx.cr6.lt) goto loc_82D89370;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r4,-27452
	ctx.r4.s64 = ctx.r4.s64 + -27452;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82D8935C;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D89370:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8937C"))) PPC_WEAK_FUNC(sub_82D8937C);
PPC_FUNC_IMPL(__imp__sub_82D8937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89380"))) PPC_WEAK_FUNC(sub_82D89380);
PPC_FUNC_IMPL(__imp__sub_82D89380) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bgt cr6,0x82d893e4
	if (ctx.cr6.gt) goto loc_82D893E4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82d89398
	if (!ctx.cr6.eq) goto loc_82D89398;
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
loc_82D89398:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82d893b4
	if (!ctx.cr6.eq) goto loc_82D893B4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// blr 
	return;
loc_82D893B4:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82d893d0
	if (!ctx.cr6.eq) goto loc_82D893D0;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// blr 
	return;
loc_82D893D0:
	// addi r11,r4,9602
	ctx.r11.s64 = ctx.r4.s64 + 9602;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D893E4:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D893EC"))) PPC_WEAK_FUNC(sub_82D893EC);
PPC_FUNC_IMPL(__imp__sub_82D893EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D893F0"))) PPC_WEAK_FUNC(sub_82D893F0);
PPC_FUNC_IMPL(__imp__sub_82D893F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D893F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8941c
	if (ctx.cr6.eq) goto loc_82D8941C;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D8941C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4420
	ctx.lr = 0x82D89424;
	sub_82DA4420(ctx, base);
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x82d89438
	if (ctx.cr6.lt) goto loc_82D89438;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D89438:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r30,r30,-27720
	ctx.r30.s64 = ctx.r30.s64 + -27720;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4468
	ctx.lr = 0x82D89450;
	sub_82DA4468(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8946c
	if (ctx.cr6.eq) goto loc_82D8946C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82db6868
	ctx.lr = 0x82D8946C;
	sub_82DB6868(ctx, base);
loc_82D8946C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89478"))) PPC_WEAK_FUNC(sub_82D89478);
PPC_FUNC_IMPL(__imp__sub_82D89478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D89480;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d894ac
	if (!ctx.cr6.eq) goto loc_82D894AC;
	// bl 0x82d88138
	ctx.lr = 0x82D894A4;
	sub_82D88138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d894cc
	if (!ctx.cr6.eq) goto loc_82D894CC;
loc_82D894AC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db77c0
	ctx.lr = 0x82D894CC;
	sub_82DB77C0(ctx, base);
loc_82D894CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D894D4"))) PPC_WEAK_FUNC(sub_82D894D4);
PPC_FUNC_IMPL(__imp__sub_82D894D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D894D8"))) PPC_WEAK_FUNC(sub_82D894D8);
PPC_FUNC_IMPL(__imp__sub_82D894D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D894E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d89504
	if (!ctx.cr6.eq) goto loc_82D89504;
loc_82D894F8:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D89504:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d89520
	if (!ctx.cr6.eq) goto loc_82D89520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d88138
	ctx.lr = 0x82D89518;
	sub_82D88138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8958c
	if (!ctx.cr6.eq) goto loc_82D8958C;
loc_82D89520:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82d89574
	if (ctx.cr6.lt) goto loc_82D89574;
	// beq cr6,0x82d89554
	if (ctx.cr6.eq) goto loc_82D89554;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x82d894f8
	if (!ctx.cr6.lt) goto loc_82D894F8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db72f8
	ctx.lr = 0x82D89548;
	sub_82DB72F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D89554:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db7290
	ctx.lr = 0x82D89568;
	sub_82DB7290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D89574:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db7360
	ctx.lr = 0x82D89588;
	sub_82DB7360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8958C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89594"))) PPC_WEAK_FUNC(sub_82D89594);
PPC_FUNC_IMPL(__imp__sub_82D89594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89598"))) PPC_WEAK_FUNC(sub_82D89598);
PPC_FUNC_IMPL(__imp__sub_82D89598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D895A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d895d4
	if (!ctx.cr6.eq) goto loc_82D895D4;
	// bl 0x82d88138
	ctx.lr = 0x82D895CC;
	sub_82D88138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d896bc
	if (!ctx.cr6.eq) goto loc_82D896BC;
loc_82D895D4:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82d89668
	if (ctx.cr6.lt) goto loc_82D89668;
	// beq cr6,0x82d8964c
	if (ctx.cr6.eq) goto loc_82D8964C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x82d895f4
	if (ctx.cr6.lt) goto loc_82D895F4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D895F4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db7440
	ctx.lr = 0x82D8960C;
	sub_82DB7440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d896bc
	if (!ctx.cr6.eq) goto loc_82D896BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d8962c
	if (ctx.cr6.eq) goto loc_82D8962C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4468
	ctx.lr = 0x82D8962C;
	sub_82DA4468(ctx, base);
loc_82D8962C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d896b8
	if (ctx.cr6.eq) goto loc_82D896B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8964C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db73c8
	ctx.lr = 0x82D89664;
	sub_82DB73C8(ctx, base);
	// b 0x82d89680
	goto loc_82D89680;
loc_82D89668:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db74b8
	ctx.lr = 0x82D89680;
	sub_82DB74B8(ctx, base);
loc_82D89680:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d896bc
	if (!ctx.cr6.eq) goto loc_82D896BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d896a4
	if (ctx.cr6.eq) goto loc_82D896A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82da4468
	ctx.lr = 0x82D896A4;
	sub_82DA4468(ctx, base);
loc_82D896A4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d896b8
	if (ctx.cr6.eq) goto loc_82D896B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82D896B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D896BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D896C4"))) PPC_WEAK_FUNC(sub_82D896C4);
PPC_FUNC_IMPL(__imp__sub_82D896C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D896C8"))) PPC_WEAK_FUNC(sub_82D896C8);
PPC_FUNC_IMPL(__imp__sub_82D896C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D896D0;
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
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d896f8
	if (!ctx.cr6.eq) goto loc_82D896F8;
	// bl 0x82d88138
	ctx.lr = 0x82D896F0;
	sub_82D88138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d89710
	if (!ctx.cr6.eq) goto loc_82D89710;
loc_82D896F8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82db7ab0
	ctx.lr = 0x82D89710;
	sub_82DB7AB0(ctx, base);
loc_82D89710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89718"))) PPC_WEAK_FUNC(sub_82D89718);
PPC_FUNC_IMPL(__imp__sub_82D89718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D89720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8974c
	if (ctx.cr6.eq) goto loc_82D8974C;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8974C:
	// lwz r4,1232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// addi r29,r31,1232
	ctx.r29.s64 = ctx.r31.s64 + 1232;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d8977c
	if (ctx.cr6.eq) goto loc_82D8977C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,5868
	ctx.r6.s64 = 5868;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D8977C;
	sub_82D861B0(ctx, base);
loc_82D8977C:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d89798
	if (!ctx.cr6.eq) goto loc_82D89798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d88138
	ctx.lr = 0x82D89790;
	sub_82D88138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d897e0
	if (!ctx.cr6.eq) goto loc_82D897E0;
loc_82D89798:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,-27724
	ctx.r30.s64 = ctx.r30.s64 + -27724;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82db74b8
	ctx.lr = 0x82D897B0;
	sub_82DB74B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d897e0
	if (!ctx.cr6.eq) goto loc_82D897E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82db7698
	ctx.lr = 0x82D897C8;
	sub_82DB7698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d897e0
	if (!ctx.cr6.eq) goto loc_82D897E0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stw r28,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r28.u32);
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
loc_82D897E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D897E8"))) PPC_WEAK_FUNC(sub_82D897E8);
PPC_FUNC_IMPL(__imp__sub_82D897E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d897f8
	if (!ctx.cr6.eq) goto loc_82D897F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D897F8:
	// lwz r11,1248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89808"))) PPC_WEAK_FUNC(sub_82D89808);
PPC_FUNC_IMPL(__imp__sub_82D89808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82d89824
	if (!ctx.cr6.lt) goto loc_82D89824;
loc_82D8981C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D89824:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82d8981c
	if (!ctx.cr6.gt) goto loc_82D8981C;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x82d8981c
	if (ctx.cr6.lt) goto loc_82D8981C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,37804
	ctx.r10.u64 = ctx.r10.u64 | 37804;
	// ori r9,r9,37796
	ctx.r9.u64 = ctx.r9.u64 | 37796;
	// ori r8,r8,37800
	ctx.r8.u64 = ctx.r8.u64 | 37800;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfsx f1,r11,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stfsx f2,r11,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// stfsx f3,r11,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89860"))) PPC_WEAK_FUNC(sub_82D89860);
PPC_FUNC_IMPL(__imp__sub_82D89860) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82d89884
	if (ctx.cr6.gt) goto loc_82D89884;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,37792
	ctx.r10.u64 = ctx.r10.u64 | 37792;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
loc_82D89884:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8988C"))) PPC_WEAK_FUNC(sub_82D8988C);
PPC_FUNC_IMPL(__imp__sub_82D8988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89890"))) PPC_WEAK_FUNC(sub_82D89890);
PPC_FUNC_IMPL(__imp__sub_82D89890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D89898;
	__savegprlr_27(ctx, base);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x82d89bc0
	if (ctx.cr6.gt) goto loc_82D89BC0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r9,r11,37453
	ctx.r9.u64 = ctx.r11.u64 | 37453;
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ori r30,r11,37416
	ctx.r30.u64 = ctx.r11.u64 | 37416;
	// beq cr6,0x82d89944
	if (ctx.cr6.eq) goto loc_82D89944;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-28108
	ctx.r10.s64 = ctx.r10.s64 + -28108;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d8990c
	if (!ctx.cr6.eq) goto loc_82D8990C;
	// lis r29,0
	ctx.r29.s64 = 0;
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r29,r29,37432
	ctx.r29.u64 = ctx.r29.u64 | 37432;
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d8990c
	if (!ctx.cr6.eq) goto loc_82D8990C;
	// lis r29,0
	ctx.r29.s64 = 0;
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ori r29,r29,37436
	ctx.r29.u64 = ctx.r29.u64 | 37436;
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d89910
	if (ctx.cr6.eq) goto loc_82D89910;
loc_82D8990C:
	// stbx r31,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u8);
loc_82D89910:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82D89944:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ori r7,r11,37392
	ctx.r7.u64 = ctx.r11.u64 | 37392;
	// beq cr6,0x82d899dc
	if (ctx.cr6.eq) goto loc_82D899DC;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-28132
	ctx.r10.s64 = ctx.r10.s64 + -28132;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d899a4
	if (!ctx.cr6.eq) goto loc_82D899A4;
	// addi r29,r4,334
	ctx.r29.s64 = ctx.r4.s64 + 334;
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mulli r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 * 112;
	// lfsx f13,r29,r3
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d899a4
	if (!ctx.cr6.eq) goto loc_82D899A4;
	// lis r29,0
	ctx.r29.s64 = 0;
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ori r29,r29,37412
	ctx.r29.u64 = ctx.r29.u64 | 37412;
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d899a8
	if (ctx.cr6.eq) goto loc_82D899A8;
loc_82D899A4:
	// stbx r31,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u8);
loc_82D899A8:
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82D899DC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r9,r11,37452
	ctx.r9.u64 = ctx.r11.u64 | 37452;
	// beq cr6,0x82d89a78
	if (ctx.cr6.eq) goto loc_82D89A78;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-28180
	ctx.r10.s64 = ctx.r10.s64 + -28180;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d89a3c
	if (!ctx.cr6.eq) goto loc_82D89A3C;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r8,37360
	ctx.r8.u64 = ctx.r8.u64 | 37360;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d89a3c
	if (!ctx.cr6.eq) goto loc_82D89A3C;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r8,37364
	ctx.r8.u64 = ctx.r8.u64 | 37364;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d89a40
	if (ctx.cr6.eq) goto loc_82D89A40;
loc_82D89A3C:
	// stbx r31,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u8);
loc_82D89A40:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,-28192
	ctx.r11.s64 = ctx.r11.s64 + -28192;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82D89A78:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d89b0c
	if (ctx.cr6.eq) goto loc_82D89B0C;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-28156
	ctx.r10.s64 = ctx.r10.s64 + -28156;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d89ad0
	if (!ctx.cr6.eq) goto loc_82D89AD0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r8,37384
	ctx.r8.u64 = ctx.r8.u64 | 37384;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82d89ad0
	if (!ctx.cr6.eq) goto loc_82D89AD0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r8,37388
	ctx.r8.u64 = ctx.r8.u64 | 37388;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d89ad4
	if (ctx.cr6.eq) goto loc_82D89AD4;
loc_82D89AD0:
	// stbx r31,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u8);
loc_82D89AD4:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82D89B0C:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r8.u32);
	// stw r10,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// lfs f0,-56(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// lfs f13,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82d89b6c
	if (ctx.cr6.eq) goto loc_82D89B6C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82D89B6C:
	// lfs f9,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lfs f12,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f11,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f10,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,37444
	ctx.r9.u64 = ctx.r9.u64 | 37444;
	// ori r10,r10,37440
	ctx.r10.u64 = ctx.r10.u64 | 37440;
	// ori r8,r8,37448
	ctx.r8.u64 = ctx.r8.u64 | 37448;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmsubs f0,f10,f0,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// fmsubs f13,f12,f13,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmsubs f0,f9,f11,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D89BC0:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89BC8"))) PPC_WEAK_FUNC(sub_82D89BC8);
PPC_FUNC_IMPL(__imp__sub_82D89BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,37808
	ctx.r10.u64 = ctx.r10.u64 | 37808;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89BE0"))) PPC_WEAK_FUNC(sub_82D89BE0);
PPC_FUNC_IMPL(__imp__sub_82D89BE0) {
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
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x82d89db8
	if (ctx.cr6.gt) goto loc_82D89DB8;
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// ori r8,r8,38440
	ctx.r8.u64 = ctx.r8.u64 | 38440;
	// lfs f0,-16900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,1373
	ctx.r11.s64 = ctx.r4.s64 + 1373;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// stfsx f1,r11,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,38448
	ctx.r10.u64 = ctx.r11.u64 | 38448;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r6,r11,38452
	ctx.r6.u64 = ctx.r11.u64 | 38452;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfsx f0,r9,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// ori r5,r11,38464
	ctx.r5.u64 = ctx.r11.u64 | 38464;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfiwx f12,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfsx f2,r9,r6
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r7,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r7.u8);
	// bne cr6,0x82d89cac
	if (!ctx.cr6.eq) goto loc_82D89CAC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d89cac
	if (!ctx.cr6.eq) goto loc_82D89CAC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,38456
	ctx.r10.u64 = ctx.r10.u64 | 38456;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82d88558
	ctx.lr = 0x82D89C98;
	sub_82D88558(ctx, base);
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
loc_82D89CAC:
	// rlwinm r8,r10,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x82d89d00
	if (ctx.cr6.lt) goto loc_82D89D00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r7,r7,10
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r7
	ctx.r10.s32 = ctx.r10.s32 / ctx.r7.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,804
	ctx.xer.ca = ctx.r10.u32 <= 804;
	ctx.r11.s64 = 804 - ctx.r10.s64;
	// b 0x82d89d2c
	goto loc_82D89D2C;
loc_82D89D00:
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r7,r7,10
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r7
	ctx.r10.s32 = ctx.r10.s32 / ctx.r7.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,2412
	ctx.xer.ca = ctx.r10.u32 <= 2412;
	ctx.r11.s64 = 2412 - ctx.r10.s64;
loc_82D89D2C:
	// twllei r7,0
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82d89d3c
	if (!ctx.cr6.lt) goto loc_82D89D3C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82D89D3C:
	// lis r10,652
	ctx.r10.s64 = 42729472;
	// mulli r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 * 180;
	// ori r10,r10,6521
	ctx.r10.u64 = ctx.r10.u64 | 6521;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d89d88
	if (!ctx.cr6.lt) goto loc_82D89D88;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// ori r10,r10,38456
	ctx.r10.u64 = ctx.r10.u64 | 38456;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82d88558
	ctx.lr = 0x82D89D74;
	sub_82D88558(ctx, base);
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
loc_82D89D88:
	// cmpwi cr6,r11,360
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 360, ctx.xer);
	// blt cr6,0x82d89d94
	if (ctx.cr6.lt) goto loc_82D89D94;
	// addi r11,r11,-360
	ctx.r11.s64 = ctx.r11.s64 + -360;
loc_82D89D94:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,38456
	ctx.r10.u64 = ctx.r10.u64 | 38456;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82d88558
	ctx.lr = 0x82D89DA4;
	sub_82D88558(ctx, base);
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
loc_82D89DB8:
	// li r3,37
	ctx.r3.s64 = 37;
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

__attribute__((alias("__imp__sub_82D89DD0"))) PPC_WEAK_FUNC(sub_82D89DD0);
PPC_FUNC_IMPL(__imp__sub_82D89DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x82d89e38
	if (ctx.cr6.gt) goto loc_82D89E38;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d89df0
	if (ctx.cr6.eq) goto loc_82D89DF0;
	// addi r11,r4,1373
	ctx.r11.s64 = ctx.r4.s64 + 1373;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82D89DF0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d89e10
	if (ctx.cr6.eq) goto loc_82D89E10;
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r10,r10,38452
	ctx.r10.u64 = ctx.r10.u64 | 38452;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82D89E10:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d89e30
	if (ctx.cr6.eq) goto loc_82D89E30;
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r10,r10,38464
	ctx.r10.u64 = ctx.r10.u64 | 38464;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
loc_82D89E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D89E38:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89E40"))) PPC_WEAK_FUNC(sub_82D89E40);
PPC_FUNC_IMPL(__imp__sub_82D89E40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d89e54
	if (!ctx.cr6.eq) goto loc_82D89E54;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D89E54:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,37792
	ctx.r10.u64 = ctx.r10.u64 | 37792;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89E6C"))) PPC_WEAK_FUNC(sub_82D89E6C);
PPC_FUNC_IMPL(__imp__sub_82D89E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89E70"))) PPC_WEAK_FUNC(sub_82D89E70);
PPC_FUNC_IMPL(__imp__sub_82D89E70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x82d89f40
	if (ctx.cr6.gt) goto loc_82D89F40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d89ea8
	if (ctx.cr6.eq) goto loc_82D89EA8;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-28192
	ctx.r11.s64 = ctx.r11.s64 + -28192;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_82D89EA8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d89ed8
	if (ctx.cr6.eq) goto loc_82D89ED8;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_82D89ED8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d89f08
	if (ctx.cr6.eq) goto loc_82D89F08;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-28120
	ctx.r11.s64 = ctx.r11.s64 + -28120;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82D89F08:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d89f38
	if (ctx.cr6.eq) goto loc_82D89F38;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-28144
	ctx.r11.s64 = ctx.r11.s64 + -28144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_82D89F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D89F40:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89F48"))) PPC_WEAK_FUNC(sub_82D89F48);
PPC_FUNC_IMPL(__imp__sub_82D89F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d89f64
	if (ctx.cr6.eq) goto loc_82D89F64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,37804
	ctx.r10.u64 = ctx.r10.u64 | 37804;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82D89F64:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d89f7c
	if (ctx.cr6.eq) goto loc_82D89F7C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,37796
	ctx.r10.u64 = ctx.r10.u64 | 37796;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82D89F7C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,37800
	ctx.r10.u64 = ctx.r10.u64 | 37800;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89F9C"))) PPC_WEAK_FUNC(sub_82D89F9C);
PPC_FUNC_IMPL(__imp__sub_82D89F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89FA0"))) PPC_WEAK_FUNC(sub_82D89FA0);
PPC_FUNC_IMPL(__imp__sub_82D89FA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d89fb0
	if (!ctx.cr6.eq) goto loc_82D89FB0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D89FB0:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,5124
	ctx.r11.u64 = ctx.r11.u64 | 5124;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89FC4"))) PPC_WEAK_FUNC(sub_82D89FC4);
PPC_FUNC_IMPL(__imp__sub_82D89FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89FC8"))) PPC_WEAK_FUNC(sub_82D89FC8);
PPC_FUNC_IMPL(__imp__sub_82D89FC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d89fd8
	if (!ctx.cr6.eq) goto loc_82D89FD8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D89FD8:
	// lwz r11,1232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d89fec
	if (!ctx.cr6.eq) goto loc_82D89FEC;
	// li r3,77
	ctx.r3.s64 = 77;
	// blr 
	return;
loc_82D89FEC:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8a024
	if (ctx.cr6.eq) goto loc_82D8A024;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d8a018
	if (!ctx.cr6.eq) goto loc_82D8A018;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8A018:
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82D8A024:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A02C"))) PPC_WEAK_FUNC(sub_82D8A02C);
PPC_FUNC_IMPL(__imp__sub_82D8A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A030"))) PPC_WEAK_FUNC(sub_82D8A030);
PPC_FUNC_IMPL(__imp__sub_82D8A030) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8a040
	if (!ctx.cr6.eq) goto loc_82D8A040;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8A040:
	// addi r9,r3,336
	ctx.r9.s64 = ctx.r3.s64 + 336;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82d8a064
	if (ctx.cr6.eq) goto loc_82D8A064;
loc_82D8A054:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82d8a054
	if (!ctx.cr6.eq) goto loc_82D8A054;
loc_82D8A064:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A070"))) PPC_WEAK_FUNC(sub_82D8A070);
PPC_FUNC_IMPL(__imp__sub_82D8A070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D8A078;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4432
	ctx.r3.s64 = ctx.r31.s64 + 4432;
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82da8d40
	ctx.lr = 0x82D8A0A8;
	sub_82DA8D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a0c0
	if (!ctx.cr6.eq) goto loc_82D8A0C0;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8a0c0
	if (ctx.cr6.eq) goto loc_82D8A0C0;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82D8A0C0:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-26500
	ctx.r3.s64 = ctx.r3.s64 + -26500;
	// bl 0x82da8d40
	ctx.lr = 0x82D8A0D0;
	sub_82DA8D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a0ec
	if (!ctx.cr6.eq) goto loc_82D8A0EC;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// beq cr6,0x82d8a0ec
	if (ctx.cr6.eq) goto loc_82D8A0EC;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82D8A0EC:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-27380
	ctx.r3.s64 = ctx.r3.s64 + -27380;
	// bl 0x82da8d40
	ctx.lr = 0x82D8A0FC;
	sub_82DA8D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a118
	if (!ctx.cr6.eq) goto loc_82D8A118;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// beq cr6,0x82d8a118
	if (ctx.cr6.eq) goto loc_82D8A118;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82D8A118:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82d8a128
	if (ctx.cr6.eq) goto loc_82D8A128;
	// stfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82D8A128:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A134"))) PPC_WEAK_FUNC(sub_82D8A134);
PPC_FUNC_IMPL(__imp__sub_82D8A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A138"))) PPC_WEAK_FUNC(sub_82D8A138);
PPC_FUNC_IMPL(__imp__sub_82D8A138) {
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
	// lwz r11,1232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8a19c
	if (ctx.cr6.eq) goto loc_82D8A19C;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8a19c
	if (ctx.cr6.eq) goto loc_82D8A19C;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d8a17c
	if (!ctx.cr6.eq) goto loc_82D8A17C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8A17C:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8A188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82D8A19C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d8a1ac
	if (ctx.cr6.eq) goto loc_82D8A1AC;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82D8A1AC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d8a1b8
	if (ctx.cr6.eq) goto loc_82D8A1B8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82D8A1B8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d8a1c4
	if (ctx.cr6.eq) goto loc_82D8A1C4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82D8A1C4:
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

__attribute__((alias("__imp__sub_82D8A1D8"))) PPC_WEAK_FUNC(sub_82D8A1D8);
PPC_FUNC_IMPL(__imp__sub_82D8A1D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A1E0"))) PPC_WEAK_FUNC(sub_82D8A1E0);
PPC_FUNC_IMPL(__imp__sub_82D8A1E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A1E8"))) PPC_WEAK_FUNC(sub_82D8A1E8);
PPC_FUNC_IMPL(__imp__sub_82D8A1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82D8A1F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31898
	ctx.r10.s64 = -2090467328;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,-22888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22888);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-31901
	ctx.r9.s64 = -2090663936;
	// addi r27,r9,9880
	ctx.r27.s64 = ctx.r9.s64 + 9880;
	// bne cr6,0x82d8a234
	if (!ctx.cr6.eq) goto loc_82D8A234;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,-22888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22888, ctx.r11.u32);
	// bl 0x82de0ce0
	ctx.lr = 0x82D8A234;
	sub_82DE0CE0(ctx, base);
loc_82D8A234:
	// lwz r26,4424(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4424);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d8a24c
	if (!ctx.cr6.eq) goto loc_82D8A24C;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82D8A24C:
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
	// cmpwi cr6,r30,1024
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1024, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
	// cmpwi cr6,r30,2048
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2048, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4096, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
	// cmpwi cr6,r30,8192
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8192, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// beq cr6,0x82d8a29c
	if (ctx.cr6.eq) goto loc_82D8A29C;
loc_82D8A290:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82D8A29C:
	// lwz r29,1256(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1256);
	// cmpw cr6,r25,r29
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82d8a290
	if (!ctx.cr6.lt) goto loc_82D8A290;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de22a0
	ctx.lr = 0x82D8A2B4;
	sub_82DE22A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a34c
	if (!ctx.cr6.eq) goto loc_82D8A34C;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de2370
	ctx.lr = 0x82D8A2D0;
	sub_82DE2370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a34c
	if (!ctx.cr6.eq) goto loc_82D8A34C;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82d8a290
	if (ctx.cr6.gt) goto loc_82D8A290;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x82d8a300
	if (!ctx.cr6.lt) goto loc_82D8A300;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82D8A300:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// addi r31,r31,-27380
	ctx.r31.s64 = ctx.r31.s64 + -27380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8be0
	ctx.lr = 0x82D8A310;
	sub_82DA8BE0(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x82de1358
	ctx.lr = 0x82D8A338;
	sub_82DE1358(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c18
	ctx.lr = 0x82D8A348;
	sub_82DA8C18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D8A34C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A354"))) PPC_WEAK_FUNC(sub_82D8A354);
PPC_FUNC_IMPL(__imp__sub_82D8A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A358"))) PPC_WEAK_FUNC(sub_82D8A358);
PPC_FUNC_IMPL(__imp__sub_82D8A358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D8A360;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d8a388
	if (!ctx.cr6.eq) goto loc_82D8A388;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8A388:
	// lwz r28,1256(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1256);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82d8a3a0
	if (ctx.cr6.lt) goto loc_82D8A3A0;
loc_82D8A394:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8A3A0:
	// li r4,16384
	ctx.r4.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de22a0
	ctx.lr = 0x82D8A3AC;
	sub_82DE22A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a448
	if (!ctx.cr6.eq) goto loc_82D8A448;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de2370
	ctx.lr = 0x82D8A3C8;
	sub_82DE2370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a448
	if (!ctx.cr6.eq) goto loc_82D8A448;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82d8a394
	if (ctx.cr6.gt) goto loc_82D8A394;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x82d8a3f8
	if (!ctx.cr6.lt) goto loc_82D8A3F8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82D8A3F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d8a444
	if (!ctx.cr6.gt) goto loc_82D8A444;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82D8A408:
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blt cr6,0x82d8a434
	if (ctx.cr6.lt) goto loc_82D8A434;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82D8A434:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d8a408
	if (!ctx.cr6.eq) goto loc_82D8A408;
loc_82D8A444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8A448:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A450"))) PPC_WEAK_FUNC(sub_82D8A450);
PPC_FUNC_IMPL(__imp__sub_82D8A450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D8A458;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,-27724
	ctx.r31.s64 = ctx.r31.s64 + -27724;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8a48c
	if (!ctx.cr6.eq) goto loc_82D8A48C;
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D8A48C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8a4f0
	if (ctx.cr6.eq) goto loc_82D8A4F0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82db72f8
	ctx.lr = 0x82D8A4A4;
	sub_82DB72F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a4f4
	if (!ctx.cr6.eq) goto loc_82D8A4F4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d8a4f0
	if (ctx.cr6.lt) goto loc_82D8A4F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d8a4f0
	if (!ctx.cr6.lt) goto loc_82D8A4F0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82db7440
	ctx.lr = 0x82D8A4D0;
	sub_82DB7440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a4f4
	if (!ctx.cr6.eq) goto loc_82D8A4F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82db8610
	ctx.lr = 0x82D8A4E8;
	sub_82DB8610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D8A4F0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D8A4F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A4FC"))) PPC_WEAK_FUNC(sub_82D8A4FC);
PPC_FUNC_IMPL(__imp__sub_82D8A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A500"))) PPC_WEAK_FUNC(sub_82D8A500);
PPC_FUNC_IMPL(__imp__sub_82D8A500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D8A508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82d8a52c
	if (!ctx.cr6.eq) goto loc_82D8A52C;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8A52C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,8941
	ctx.r6.s64 = 8941;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8A550;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8a5c0
	if (ctx.cr6.eq) goto loc_82D8A5C0;
	// bl 0x82da9d18
	ctx.lr = 0x82D8A55C;
	sub_82DA9D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8a5c0
	if (ctx.cr6.eq) goto loc_82D8A5C0;
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// lwz r3,9876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9876);
	// bl 0x82da41c0
	ctx.lr = 0x82D8A574;
	sub_82DA41C0(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,-27176
	ctx.r11.s64 = ctx.r11.s64 + -27176;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r3,9876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9876);
	// bl 0x82da4200
	ctx.lr = 0x82D8A5A4;
	sub_82DA4200(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d8a5cc
	if (ctx.cr6.eq) goto loc_82D8A5CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4828
	ctx.lr = 0x82D8A5B4;
	sub_82DA4828(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x82d8a5d4
	if (!ctx.cr6.eq) goto loc_82D8A5D4;
loc_82D8A5C0:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8A5CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82D8A5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A5E4"))) PPC_WEAK_FUNC(sub_82D8A5E4);
PPC_FUNC_IMPL(__imp__sub_82D8A5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A5E8"))) PPC_WEAK_FUNC(sub_82D8A5E8);
PPC_FUNC_IMPL(__imp__sub_82D8A5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D8A5F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d8a624
	if (!ctx.cr6.eq) goto loc_82D8A624;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8A624:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d8a644
	if (ctx.cr6.eq) goto loc_82D8A644;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// bne cr6,0x82d8a640
	if (!ctx.cr6.eq) goto loc_82D8A640;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d982c0
	ctx.lr = 0x82D8A640;
	sub_82D982C0(ctx, base);
loc_82D8A640:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_82D8A644:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d87e88
	ctx.lr = 0x82D8A658;
	sub_82D87E88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a6fc
	if (!ctx.cr6.eq) goto loc_82D8A6FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d9daf0
	ctx.lr = 0x82D8A678;
	sub_82D9DAF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d8a6b8
	if (ctx.cr6.eq) goto loc_82D8A6B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d9cb18
	ctx.lr = 0x82D8A6AC;
	sub_82D9CB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8A6B8:
	// bl 0x82d9de78
	ctx.lr = 0x82D8A6BC;
	sub_82D9DE78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8a6fc
	if (!ctx.cr6.eq) goto loc_82D8A6FC;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// bne cr6,0x82d8a704
	if (!ctx.cr6.eq) goto loc_82D8A704;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8a704
	if (ctx.cr6.eq) goto loc_82D8A704;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_82D8A6E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d8a6f8
	if (ctx.cr6.eq) goto loc_82D8A6F8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D8A6F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8A6FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8A704:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d98430
	ctx.lr = 0x82D8A710;
	sub_82D98430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d8a6e4
	if (ctx.cr6.eq) goto loc_82D8A6E4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d8a6fc
	if (ctx.cr6.eq) goto loc_82D8A6FC;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A72C"))) PPC_WEAK_FUNC(sub_82D8A72C);
PPC_FUNC_IMPL(__imp__sub_82D8A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A730"))) PPC_WEAK_FUNC(sub_82D8A730);
PPC_FUNC_IMPL(__imp__sub_82D8A730) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d8a770
	if (ctx.cr6.eq) goto loc_82D8A770;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82d8a770
	if (ctx.cr6.lt) goto loc_82D8A770;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d8a770
	if (!ctx.cr6.lt) goto loc_82D8A770;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,38216
	ctx.r10.u64 = ctx.r10.u64 | 38216;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r4,r11,12,0,19
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r4.u64 & 0xFFFFFFFF00000FFF);
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8A770:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A778"))) PPC_WEAK_FUNC(sub_82D8A778);
PPC_FUNC_IMPL(__imp__sub_82D8A778) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8a788
	if (!ctx.cr6.eq) goto loc_82D8A788;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8A788:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38248
	ctx.r11.u64 = ctx.r11.u64 | 38248;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8a7a8
	if (!ctx.cr6.eq) goto loc_82D8A7A8;
	// li r3,77
	ctx.r3.s64 = 77;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8A7A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A7B4"))) PPC_WEAK_FUNC(sub_82D8A7B4);
PPC_FUNC_IMPL(__imp__sub_82D8A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A7B8"))) PPC_WEAK_FUNC(sub_82D8A7B8);
PPC_FUNC_IMPL(__imp__sub_82D8A7B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8a7c8
	if (!ctx.cr6.eq) goto loc_82D8A7C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8A7C8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38344
	ctx.r11.u64 = ctx.r11.u64 | 38344;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8a7e8
	if (!ctx.cr6.eq) goto loc_82D8A7E8;
	// li r3,77
	ctx.r3.s64 = 77;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8A7E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A7F4"))) PPC_WEAK_FUNC(sub_82D8A7F4);
PPC_FUNC_IMPL(__imp__sub_82D8A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A7F8"))) PPC_WEAK_FUNC(sub_82D8A7F8);
PPC_FUNC_IMPL(__imp__sub_82D8A7F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-24432
	ctx.r10.s64 = ctx.r10.s64 + -24432;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82D8A814:
	// lwz r9,556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82d8a824
	if (!ctx.cr6.eq) goto loc_82D8A824;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82D8A824:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d8a814
	if (!ctx.cr6.eq) goto loc_82D8A814;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A834"))) PPC_WEAK_FUNC(sub_82D8A834);
PPC_FUNC_IMPL(__imp__sub_82D8A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A838"))) PPC_WEAK_FUNC(sub_82D8A838);
PPC_FUNC_IMPL(__imp__sub_82D8A838) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-24432
	ctx.r10.s64 = ctx.r10.s64 + -24432;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82D8A854:
	// lwz r9,556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82d8a864
	if (!ctx.cr6.eq) goto loc_82D8A864;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82D8A864:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d8a854
	if (!ctx.cr6.eq) goto loc_82D8A854;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A874"))) PPC_WEAK_FUNC(sub_82D8A874);
PPC_FUNC_IMPL(__imp__sub_82D8A874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A878"))) PPC_WEAK_FUNC(sub_82D8A878);
PPC_FUNC_IMPL(__imp__sub_82D8A878) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,41688
	ctx.r10.u64 = ctx.r10.u64 | 41688;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A890"))) PPC_WEAK_FUNC(sub_82D8A890);
PPC_FUNC_IMPL(__imp__sub_82D8A890) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,41688
	ctx.r10.u64 = ctx.r10.u64 | 41688;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A8B4"))) PPC_WEAK_FUNC(sub_82D8A8B4);
PPC_FUNC_IMPL(__imp__sub_82D8A8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A8B8"))) PPC_WEAK_FUNC(sub_82D8A8B8);
PPC_FUNC_IMPL(__imp__sub_82D8A8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D8A8C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82d8a8e0
	if (!ctx.cr6.eq) goto loc_82D8A8E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8A8E0:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82d8aa5c
	if (ctx.cr6.lt) goto loc_82D8AA5C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x82d8aa5c
	if (!ctx.cr6.lt) goto loc_82D8AA5C;
	// mulli r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 * 132;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 65536;
	// ori r26,r10,39936
	ctx.r26.u64 = ctx.r10.u64 | 39936;
	// addi r27,r27,-25588
	ctx.r27.s64 = ctx.r27.s64 + -25588;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8aa3c
	if (!ctx.cr6.eq) goto loc_82D8AA3C;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8a930
	if (!ctx.cr6.eq) goto loc_82D8A930;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82d8aa3c
	if (ctx.cr6.eq) goto loc_82D8AA3C;
loc_82D8A930:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r29,r26
	ctx.r3.u64 = ctx.r29.u64 + ctx.r26.u64;
	// bl 0x82da51b8
	ctx.lr = 0x82D8A93C;
	sub_82DA51B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8aa60
	if (!ctx.cr6.eq) goto loc_82D8AA60;
	// lwz r3,4428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8aa50
	if (ctx.cr6.eq) goto loc_82D8AA50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8A968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8aa60
	if (!ctx.cr6.eq) goto loc_82D8AA60;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r31,336(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// addi r28,r29,336
	ctx.r28.s64 = ctx.r29.s64 + 336;
	// ori r10,r11,40484
	ctx.r10.u64 = ctx.r11.u64 | 40484;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r29,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x82d8aa2c
	if (ctx.cr6.eq) goto loc_82D8AA2C;
loc_82D8A994:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D8A9A4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d8a9a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D8A9A4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d8a9c0
	if (!ctx.cr6.eq) goto loc_82D8A9C0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d8a9ec
	goto loc_82D8A9EC;
loc_82D8A9C0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82d8a9d0
	if (!ctx.cr6.eq) goto loc_82D8A9D0;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82d8a9ec
	goto loc_82D8A9EC;
loc_82D8A9D0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82d8a9e0
	if (!ctx.cr6.eq) goto loc_82D8A9E0;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82d8a9ec
	goto loc_82D8A9EC;
loc_82D8A9E0:
	// addi r11,r30,-3
	ctx.r11.s64 = ctx.r30.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,1,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x40;
loc_82D8A9EC:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82d9aac8
	ctx.lr = 0x82D8AA04;
	sub_82D9AAC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8aa60
	if (!ctx.cr6.eq) goto loc_82D8AA60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9aa40
	ctx.lr = 0x82D8AA18;
	sub_82D9AA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8aa60
	if (!ctx.cr6.eq) goto loc_82D8AA60;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82d8a994
	if (!ctx.cr6.eq) goto loc_82D8A994;
loc_82D8AA2C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82D8AA3C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r29,r26
	ctx.r3.u64 = ctx.r29.u64 + ctx.r26.u64;
	// bl 0x82da5700
	ctx.lr = 0x82D8AA48;
	sub_82DA5700(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8AA50:
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8AA5C:
	// li r3,69
	ctx.r3.s64 = 69;
loc_82D8AA60:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8AA68"))) PPC_WEAK_FUNC(sub_82D8AA68);
PPC_FUNC_IMPL(__imp__sub_82D8AA68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8aa78
	if (!ctx.cr6.eq) goto loc_82D8AA78;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8AA78:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d8aa98
	if (ctx.cr6.lt) goto loc_82D8AA98;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82d8aa98
	if (!ctx.cr6.lt) goto loc_82D8AA98;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-25600
	ctx.r3.s64 = ctx.r3.s64 + -25600;
	// b 0x82da5f68
	sub_82DA5F68(ctx, base);
	return;
loc_82D8AA98:
	// li r3,69
	ctx.r3.s64 = 69;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AAA0"))) PPC_WEAK_FUNC(sub_82D8AAA0);
PPC_FUNC_IMPL(__imp__sub_82D8AAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D8AAA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d8aac8
	if (!ctx.cr6.eq) goto loc_82D8AAC8;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8AAC8:
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,-25004
	ctx.r27.s64 = ctx.r27.s64 + -25004;
	// ori r28,r10,40520
	ctx.r28.u64 = ctx.r10.u64 | 40520;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8abc0
	if (!ctx.cr6.eq) goto loc_82D8ABC0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8aafc
	if (!ctx.cr6.eq) goto loc_82D8AAFC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82d8abc0
	if (ctx.cr6.eq) goto loc_82D8ABC0;
loc_82D8AAFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x82da51b8
	ctx.lr = 0x82D8AB08;
	sub_82DA51B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8abcc
	if (!ctx.cr6.eq) goto loc_82D8ABCC;
	// lwz r3,4428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8abd4
	if (ctx.cr6.eq) goto loc_82D8ABD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8AB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8abcc
	if (!ctx.cr6.eq) goto loc_82D8ABCC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r31,336(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// addi r29,r30,336
	ctx.r29.s64 = ctx.r30.s64 + 336;
	// ori r10,r11,41068
	ctx.r10.u64 = ctx.r11.u64 | 41068;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r30,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x82d8abb0
	if (ctx.cr6.eq) goto loc_82D8ABB0;
loc_82D8AB60:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D8AB70:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d8ab70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D8AB70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9aac8
	ctx.lr = 0x82D8AB88;
	sub_82D9AAC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8abcc
	if (!ctx.cr6.eq) goto loc_82D8ABCC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9aa40
	ctx.lr = 0x82D8AB9C;
	sub_82D9AA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8abcc
	if (!ctx.cr6.eq) goto loc_82D8ABCC;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d8ab60
	if (!ctx.cr6.eq) goto loc_82D8AB60;
loc_82D8ABB0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82D8ABC0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x82da5700
	ctx.lr = 0x82D8ABCC;
	sub_82DA5700(ctx, base);
loc_82D8ABCC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8ABD4:
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8ABE0"))) PPC_WEAK_FUNC(sub_82D8ABE0);
PPC_FUNC_IMPL(__imp__sub_82D8ABE0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-25016
	ctx.r3.s64 = ctx.r3.s64 + -25016;
	// b 0x82da5f68
	sub_82DA5F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8ABEC"))) PPC_WEAK_FUNC(sub_82D8ABEC);
PPC_FUNC_IMPL(__imp__sub_82D8ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8ABF0"))) PPC_WEAK_FUNC(sub_82D8ABF0);
PPC_FUNC_IMPL(__imp__sub_82D8ABF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8ac00
	if (!ctx.cr6.eq) goto loc_82D8AC00;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8AC00:
	// lwz r11,4424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8ac14
	if (!ctx.cr6.eq) goto loc_82D8AC14;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_82D8AC14:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AC20"))) PPC_WEAK_FUNC(sub_82D8AC20);
PPC_FUNC_IMPL(__imp__sub_82D8AC20) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8ac34
	if (!ctx.cr6.eq) goto loc_82D8AC34;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8AC34:
	// lwz r3,4424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d8ac48
	if (!ctx.cr6.eq) goto loc_82D8AC48;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_82D8AC48:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82d95588
	sub_82D95588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8AC50"))) PPC_WEAK_FUNC(sub_82D8AC50);
PPC_FUNC_IMPL(__imp__sub_82D8AC50) {
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
	// lwz r3,4412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4412);
	// bl 0x82da41c0
	ctx.lr = 0x82D8AC64;
	sub_82DA41C0(ctx, base);
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

__attribute__((alias("__imp__sub_82D8AC78"))) PPC_WEAK_FUNC(sub_82D8AC78);
PPC_FUNC_IMPL(__imp__sub_82D8AC78) {
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
	// lwz r3,4412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4412);
	// bl 0x82da4200
	ctx.lr = 0x82D8AC8C;
	sub_82DA4200(ctx, base);
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

__attribute__((alias("__imp__sub_82D8ACA0"))) PPC_WEAK_FUNC(sub_82D8ACA0);
PPC_FUNC_IMPL(__imp__sub_82D8ACA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d8acbc
	if (ctx.cr6.eq) goto loc_82D8ACBC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,37336
	ctx.r10.u64 = ctx.r10.u64 | 37336;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82D8ACBC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,37340
	ctx.r10.u64 = ctx.r10.u64 | 37340;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8ACDC"))) PPC_WEAK_FUNC(sub_82D8ACDC);
PPC_FUNC_IMPL(__imp__sub_82D8ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8ACE0"))) PPC_WEAK_FUNC(sub_82D8ACE0);
PPC_FUNC_IMPL(__imp__sub_82D8ACE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8ACE8"))) PPC_WEAK_FUNC(sub_82D8ACE8);
PPC_FUNC_IMPL(__imp__sub_82D8ACE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8ACF0"))) PPC_WEAK_FUNC(sub_82D8ACF0);
PPC_FUNC_IMPL(__imp__sub_82D8ACF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8ACF8"))) PPC_WEAK_FUNC(sub_82D8ACF8);
PPC_FUNC_IMPL(__imp__sub_82D8ACF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AD00"))) PPC_WEAK_FUNC(sub_82D8AD00);
PPC_FUNC_IMPL(__imp__sub_82D8AD00) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AD08"))) PPC_WEAK_FUNC(sub_82D8AD08);
PPC_FUNC_IMPL(__imp__sub_82D8AD08) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

